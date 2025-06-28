#pragma once

#include "mutex.h"

namespace reblue {
namespace kernel {

struct Heap
{
    Mutex mutex;
    O1HeapInstance* heap;

    Mutex physicalMutex;
    O1HeapInstance* physicalHeap;

    void Init();

    void* Alloc(size_t size);
    void* AllocPhysical(size_t size, size_t alignment);
    void Free(void* ptr);

    size_t Size(void* ptr);

    template<typename T, typename... Args>
    T* Alloc(Args&&... args)
    {
        T* obj = (T*)Alloc(sizeof(T));
        new (obj) T(std::forward<Args>(args)...);
        return obj;
    }

    template<typename T, typename... Args>
    T* AllocPhysical(Args&&... args)
    {
        T* obj = (T*)AllocPhysical(sizeof(T), alignof(T));
        new (obj) T(std::forward<Args>(args)...);
        return obj;
    }
};

} // namespace kernel
} // namespace reblue

extern reblue::kernel::Heap g_userHeap;
