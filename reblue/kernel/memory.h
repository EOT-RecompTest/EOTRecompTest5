#pragma once

#ifndef _WIN32
#define MEM_COMMIT 0x00001000
#define MEM_RESERVE 0x00002000
#define MEM_DECOMMIT 0x00004000
#define MEM_RELEASE 0x00008000
#define MEM_PHYSICAL 0x00400000
#define MEM_LARGE_PAGES 0x20000000
#endif

namespace reblue {
namespace kernel {

struct Memory {
  uint8_t *base{};

  Memory();

  bool IsInMemoryRange(const void *host) const noexcept {
    return host >= base && host < (base + PPC_MEMORY_SIZE);
  }

  void *Translate(size_t offset) const noexcept {
    if (offset)
      assert(offset < PPC_MEMORY_SIZE);

    return base + offset;
  }

  uint32_t MapVirtual(const void *host) const noexcept {
    if (host)
      assert(IsInMemoryRange(host));

    return static_cast<uint32_t>(static_cast<const uint8_t *>(host) - base);
  }

  PPCFunc *FindFunction(uint32_t guest) const noexcept {
    return PPC_LOOKUP_FUNC(base, guest);
  }

  void InsertFunction(uint32_t guest, PPCFunc *host) {
    PPC_LOOKUP_FUNC(base, guest) = host;
  }
};

struct X_MEMORY_BASIC_INFORMATION {
  be<uint32_t> base_address;
  be<uint32_t> allocation_base;
  be<uint32_t> allocation_protect;
  be<uint32_t> region_size;
  be<uint32_t> state;
  be<uint32_t> protect;
  be<uint32_t> type;
};

extern "C" void *MmGetHostAddress(uint32_t ptr);
extern Memory g_memory;
} // namespace kernel
} // namespace reblue
