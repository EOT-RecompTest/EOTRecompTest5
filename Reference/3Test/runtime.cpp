#include "runtime.h"
#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
#include "xex.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/mman.h>
#include <unistd.h>
#endif

static constexpr size_t PCR_SIZE = 0xAB0;
static constexpr size_t TLS_SIZE = 0x100;
static constexpr size_t TEB_SIZE = 0x2E0;
static constexpr size_t STACK_SIZE = 0x40000;
static constexpr size_t TOTAL_SIZE = PCR_SIZE + TLS_SIZE + TEB_SIZE + STACK_SIZE;

bool RecompMemory::init() {
#ifdef _WIN32
    base = static_cast<uint8_t*>(
        VirtualAlloc(nullptr, PPC_MEMORY_SIZE, MEM_RESERVE | MEM_COMMIT,
                     PAGE_READWRITE));
    if (!base) {
        std::cerr << "VirtualAlloc failed" << std::endl;
        return false;
    }
#else
    base = static_cast<uint8_t*>(
        mmap(nullptr, PPC_MEMORY_SIZE, PROT_READ | PROT_WRITE,
             MAP_PRIVATE | MAP_ANON, -1, 0));
    if (base == MAP_FAILED) {
        base = nullptr;
        std::cerr << "mmap failed" << std::endl;
        return false;
    }
#endif
    threadDataOffset = 0x20000; // simple fixed location
    std::memset(base + threadDataOffset, 0, TOTAL_SIZE);

    for (size_t i = 0; PPCFuncMappings[i].guest != 0; ++i) {
        if (PPCFuncMappings[i].host)
            PPC_LOOKUP_FUNC(base, PPCFuncMappings[i].guest) =
                PPCFuncMappings[i].host;
    }

    return true;
}

void RecompMemory::destroy() {
#ifdef _WIN32
    if (base)
        VirtualFree(base, 0, MEM_RELEASE);
#else
    if (base)
        munmap(base, PPC_MEMORY_SIZE);
#endif
    base = nullptr;
}

uint32_t RecompMemory::MapVirtual(const void* host) const {
    return static_cast<uint32_t>(static_cast<const uint8_t*>(host) - base);
}

void RecompMemory::initContext(PPCContext& ctx) const {
    uint8_t* thread = base + threadDataOffset;
    *reinterpret_cast<uint32_t*>(thread) = ByteSwap(MapVirtual(thread + PCR_SIZE));
    *reinterpret_cast<uint32_t*>(thread + 0x100) =
        ByteSwap(MapVirtual(thread + PCR_SIZE + TLS_SIZE));

    ctx.r1.u32 = MapVirtual(thread + PCR_SIZE + TLS_SIZE + TEB_SIZE + STACK_SIZE);
    ctx.r13.u32 = MapVirtual(thread);
    ctx.fpscr.loadFromHost();
}

bool RecompMemory::loadXex(const char* path) {
    if (!base) {
        std::cerr << "Memory not initialized" << std::endl;
        return false;
    }

    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file) {
        std::cerr << "Failed to open XEX file: " << path << std::endl;
        return false;
    }

    std::streamsize size = file.tellg();
    if (size <= 0) {
        std::cerr << "Empty XEX file" << std::endl;
        return false;
    }
    file.seekg(0, std::ios::beg);

    std::vector<uint8_t> buffer(static_cast<size_t>(size));
    if (!file.read(reinterpret_cast<char*>(buffer.data()), size)) {
        std::cerr << "Failed to read XEX file" << std::endl;
        return false;
    }

    const auto* header = reinterpret_cast<const Xex2Header*>(buffer.data());
    const auto* security = reinterpret_cast<const Xex2SecurityInfo*>(
        buffer.data() + ByteSwap(header->securityOffset));
    const auto* fileFormatInfo = reinterpret_cast<const Xex2OptFileFormatInfo*>(
        getOptHeaderPtr(buffer.data(), XEX_HEADER_FILE_FORMAT_INFO));

    if (!fileFormatInfo || !security) {
        std::cerr << "Invalid XEX headers" << std::endl;
        return false;
    }

    auto srcData = buffer.data() + ByteSwap(header->headerSize);
    auto destData = base + ByteSwap(security->loadAddress);

    uint16_t compression = ByteSwap(fileFormatInfo->compressionType);
    uint32_t imageSize = ByteSwap(security->imageSize);

    if (compression == XEX_COMPRESSION_NONE) {
        std::memcpy(destData, srcData, imageSize);
    } else if (compression == XEX_COMPRESSION_BASIC) {
        const auto* blocks =
            fileFormatInfo->compressionInfo.blocks;
        size_t numBlocks =
            (ByteSwap(fileFormatInfo->infoSize) - 8) /
            sizeof(Xex2FileBasicCompressionBlock);

        for (size_t i = 0; i < numBlocks; ++i) {
            uint32_t dataSize = ByteSwap(blocks[i].dataSize);
            uint32_t zeroSize = ByteSwap(blocks[i].zeroSize);

            std::memcpy(destData, srcData, dataSize);
            srcData += dataSize;
            destData += dataSize;

            std::memset(destData, 0, zeroSize);
            destData += zeroSize;
        }
    } else {
        std::cerr << "Unsupported compression type" << std::endl;
        return false;
    }

    std::cout << "Loaded XEX image of size " << imageSize << " bytes" << std::endl;

    return true;
}
