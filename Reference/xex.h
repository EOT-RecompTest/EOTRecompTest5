#pragma once
#include <cstdint>
#include "byte_swap.h"

constexpr uint32_t XEX_HEADER_FILE_FORMAT_INFO = 0x000003FF;
constexpr uint32_t XEX_HEADER_ENTRY_POINT     = 0x00010100;
constexpr uint32_t XEX_HEADER_RESOURCE_INFO   = 0x000002FF;

enum Xex2CompressionType : uint16_t {
    XEX_COMPRESSION_NONE   = 0,
    XEX_COMPRESSION_BASIC  = 1,
    XEX_COMPRESSION_NORMAL = 2,
    XEX_COMPRESSION_DELTA  = 3,
};

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

struct Xex2Resource {
    char name[8];
    uint32_t offset;
    uint32_t sizeOfData;
};

struct Xex2ResourceInfo {
    uint32_t sizeOfHeader;
    Xex2Resource resources[1];
};

struct Xex2SecurityInfo {
    uint32_t headerSize;
    uint32_t imageSize;
    char rsaSignature[0x100];
    uint32_t unk_108;
    uint32_t imageFlags;
    uint32_t loadAddress;
    char sectionDigest[0x14];
    uint32_t importTableCount;
    char importTableDigest[0x14];
    char xgd2MediaId[0x10];
    char aesKey[0x10];
    uint32_t exportTable;
    char headerDigest[0x14];
    uint32_t region;
    uint32_t allowedMediaTypes;
    uint32_t pageDescriptorCount;
    // page_descriptors follow
};

struct Xex2OptHeader {
    uint32_t key;
    uint32_t value; // offset or direct value depending on key
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

inline const void* getOptHeaderPtr(const uint8_t* base, uint32_t key) {
    auto* header = reinterpret_cast<const Xex2Header*>(base);
    uint32_t count = ByteSwap(header->headerCount);
    for (uint32_t i = 0; i < count; ++i) {
        if (ByteSwap(header->headers[i].key) == key) {
            uint32_t value = ByteSwap(header->headers[i].value);
            if (key == XEX_HEADER_ENTRY_POINT) {
                return &header->headers[i].value; // pointer to big-endian value
            }
            return base + value;
        }
    }
    return nullptr;
}

