#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <vector>
#ifdef _WIN32
#include <windows.h>
#else
#include <sys/mman.h>
#endif

// Byte-swap helper like Reference/App/Byte_swap.h
template<typename T>
inline T ByteSwap(T value) {
    if constexpr (sizeof(T) == 2)
        return __builtin_bswap16(static_cast<uint16_t>(value));
    else if constexpr (sizeof(T) == 4)
        return __builtin_bswap32(static_cast<uint32_t>(value));
    else if constexpr (sizeof(T) == 8)
        return __builtin_bswap64(static_cast<uint64_t>(value));
    else
        return value;
}

struct Xex2FileBasicCompressionBlock {
    uint32_t dataSize;
    uint32_t zeroSize;
};

struct Xex2FileBasicCompressionInfo {
    Xex2FileBasicCompressionBlock blocks[1];
};

struct Xex2OptFileFormatInfo {
    uint32_t infoSize;
    uint16_t encryptionType;
    uint16_t compressionType;
    Xex2FileBasicCompressionInfo compressionInfo;
};

struct Xex2SecurityInfo {
    uint32_t headerSize;
    uint32_t imageSize;
    char rsaSignature[0x100];
    uint32_t unk_108;
    uint32_t imageFlags;
    uint32_t loadAddress;
};

struct Xex2OptHeader {
    uint32_t key;
    uint32_t value;
};

struct Xex2Header {
    uint32_t magic;
    uint32_t moduleFlags;
    uint32_t headerSize;
    uint32_t reserved;
    uint32_t securityOffset;
    uint32_t headerCount;
    Xex2OptHeader headers[1];
};

constexpr uint32_t XEX_HEADER_FILE_FORMAT_INFO = 0x000003FF;
constexpr uint32_t XEX_HEADER_ENTRY_POINT     = 0x00010100;

inline const void* getOptHeaderPtr(const uint8_t* base, uint32_t key) {
    auto* header = reinterpret_cast<const Xex2Header*>(base);
    uint32_t count = ByteSwap(header->headerCount);
    for (uint32_t i = 0; i < count; ++i) {
        if (ByteSwap(header->headers[i].key) == key) {
            uint32_t value = ByteSwap(header->headers[i].value);
            if (key == XEX_HEADER_ENTRY_POINT) {
                return &header->headers[i].value;
            }
            return base + value;
        }
    }
    return nullptr;
}

static constexpr size_t PPC_MEMORY_SIZE = 0x100000000ull; // 4GB

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s <xex path>\n", argv[0]);
        return 0;
    }

    std::filesystem::path xexPath = argv[1];

    std::ifstream file(xexPath, std::ios::binary | std::ios::ate);
    if (!file) {
        fprintf(stderr, "Failed to open %s\n", xexPath.string().c_str());
        return 1;
    }

    size_t size = static_cast<size_t>(file.tellg());
    file.seekg(0, std::ios::beg);

    std::vector<uint8_t> buffer(size);
    if (!file.read(reinterpret_cast<char*>(buffer.data()), size)) {
        fprintf(stderr, "Failed to read file\n");
        return 1;
    }

#ifdef _WIN32
    uint8_t* memory = (uint8_t*)VirtualAlloc(nullptr, PPC_MEMORY_SIZE,
                                             MEM_RESERVE | MEM_COMMIT,
                                             PAGE_READWRITE);
    if (!memory) {
        fprintf(stderr, "VirtualAlloc failed\n");
        return 1;
    }
#else
    uint8_t* memory = (uint8_t*)mmap(nullptr, PPC_MEMORY_SIZE,
                                     PROT_READ | PROT_WRITE,
                                     MAP_PRIVATE | MAP_ANON, -1, 0);
    if (memory == MAP_FAILED) {
        fprintf(stderr, "mmap failed\n");
        return 1;
    }
#endif

    const auto* header = reinterpret_cast<const Xex2Header*>(buffer.data());
    const auto* security = reinterpret_cast<const Xex2SecurityInfo*>(buffer.data() + ByteSwap(header->securityOffset));
    const auto* fileFormatInfo = reinterpret_cast<const Xex2OptFileFormatInfo*>(getOptHeaderPtr(buffer.data(), XEX_HEADER_FILE_FORMAT_INFO));

    if (!fileFormatInfo || !security) {
        fprintf(stderr, "Invalid XEX headers\n");
        return 1;
    }

    auto srcData = buffer.data() + ByteSwap(header->headerSize);
    auto destData = memory + ByteSwap(security->loadAddress);

    uint16_t compression = ByteSwap(fileFormatInfo->compressionType);
    uint32_t imageSize = ByteSwap(security->imageSize);

    if (compression == 0) {
        memcpy(destData, srcData, imageSize);
    } else if (compression == 1) {
        const auto* blocks = fileFormatInfo->compressionInfo.blocks;
        size_t numBlocks = (ByteSwap(fileFormatInfo->infoSize) - 8) / sizeof(Xex2FileBasicCompressionBlock);
        for (size_t i = 0; i < numBlocks; ++i) {
            uint32_t dataSize = ByteSwap(blocks[i].dataSize);
            uint32_t zeroSize = ByteSwap(blocks[i].zeroSize);

            memcpy(destData, srcData, dataSize);
            srcData += dataSize;
            destData += dataSize;

            memset(destData, 0, zeroSize);
            destData += zeroSize;
        }
    } else {
        fprintf(stderr, "Unsupported compression type %u\n", compression);
        return 1;
    }

    auto* entryPtr = reinterpret_cast<const uint32_t*>(getOptHeaderPtr(buffer.data(), XEX_HEADER_ENTRY_POINT));
    uint32_t entry = ByteSwap(*entryPtr);

    printf("Loaded XEX at load address 0x%X, entry point 0x%X\n", ByteSwap(security->loadAddress), entry);

#ifdef _WIN32
    VirtualFree(memory, 0, MEM_RELEASE);
#else
    munmap(memory, PPC_MEMORY_SIZE);
#endif
    return 0;
}

