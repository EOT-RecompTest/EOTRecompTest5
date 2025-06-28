#pragma once
#include <cstdint>
#include "byte_swap.h"
#include "../ppc/ppc_recomp_shared.h"

struct RecompMemory {
    uint8_t* base = nullptr;
    uint32_t threadDataOffset = 0;

    bool init();
    void destroy();

    uint32_t MapVirtual(const void* host) const;
    void initContext(PPCContext& ctx) const;

    bool loadXex(const char* path);
};
