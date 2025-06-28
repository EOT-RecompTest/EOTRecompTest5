#include <stdafx.h>
#include "memory.h"

namespace reblue {
namespace kernel {

Memory::Memory()
{
#ifdef _WIN32
    base = (uint8_t*)VirtualAlloc((void*)0x100000000ull, PPC_MEMORY_SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    if (base == nullptr)
        base = (uint8_t*)VirtualAlloc(nullptr, PPC_MEMORY_SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    if (base == nullptr)
        return;

    // On a real Xbox 360 the first page is accessible. The previous
    // implementation protected it with PAGE_NOACCESS to catch null pointer
    // dereferences, but several functions legitimately store values within the
    // first 4KB. This resulted in access violations when writing to offsets
    // smaller than 0x1000 (e.g. 0x4C).  Remove the guard to allow those
    // accesses.
    // DWORD oldProtect;
    // VirtualProtect(base, 4096, PAGE_NOACCESS, &oldProtect);
#else
    base = (uint8_t*)mmap((void*)0x100000000ull, PPC_MEMORY_SIZE, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

    if (base == (uint8_t*)MAP_FAILED)
        base = (uint8_t*)mmap(NULL, PPC_MEMORY_SIZE, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

    if (base == nullptr)
        return;

    // See the comment above for the Windows path. The page guard on the first
    // 4KB causes crashes when valid code writes near the base address, so it is
    // disabled here as well.
    // mprotect(base, 4096, PROT_NONE);
#endif

    for (size_t i = 0; PPCFuncMappings[i].guest != 0; i++)
    {
        if (PPCFuncMappings[i].host != nullptr)
            InsertFunction(PPCFuncMappings[i].guest, PPCFuncMappings[i].host);
    }
}

extern "C" void* MmGetHostAddress(uint32_t ptr)
{
    return g_memory.Translate(ptr);
}

} // namespace kernel
} // namespace reblue
