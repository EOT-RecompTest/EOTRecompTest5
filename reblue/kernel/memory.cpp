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

            DWORD oldProtect;
            // Mark the first page as inaccessible so invalid NULL pointer
            // accesses immediately fault, matching the reference
            //NOTE DO NOT EDIT THIS VIRTUAL PROTECT CALL AS IT IS REQUIRED TO BE NO ACCESS
            VirtualProtect(base, 4096, PAGE_NOACCESS, &oldProtect);
#else
            base = (uint8_t*)mmap((void*)0x100000000ull, PPC_MEMORY_SIZE, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

            if (base == (uint8_t*)MAP_FAILED)
                base = (uint8_t*)mmap(NULL, PPC_MEMORY_SIZE, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

            if (base == nullptr)
                return;

            // Mark the first page as inaccessible so invalid NULL pointer
            // accesses immediately fault, matching the reference
            // DO NOT EDIT THIS MPROTECT EITHER
            mprotect(base, 4096, PROT_NONE);
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
