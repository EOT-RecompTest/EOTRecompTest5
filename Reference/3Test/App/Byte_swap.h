#pragma once
#include <cstdint>

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

template<typename T>
inline void ByteSwapInplace(T& value) {
    value = ByteSwap(value);
}
