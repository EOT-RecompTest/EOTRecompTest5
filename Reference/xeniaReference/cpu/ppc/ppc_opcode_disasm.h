﻿/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2015 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_CPU_PPC_PPC_OPCODE_DISASM_H_
#define XENIA_CPU_PPC_PPC_OPCODE_DISASM_H_

#include <cstdint>

#include "xenia/base/string_buffer.h"
#include "xenia/cpu/ppc/ppc_opcode.h"

namespace xe {
namespace cpu {
namespace ppc {

constexpr size_t kNamePad = 11;
constexpr uint8_t kSpaces[kNamePad] = {0x20, 0x20, 0x20, 0x20, 0x20,
                                       0x20, 0x20, 0x20, 0x20, 0x20};
void PadStringBuffer(StringBuffer* str, size_t base, size_t pad);

void PrintDisasm_bcx(const PPCDecodeData& d, StringBuffer* str);

}  // namespace ppc
}  // namespace cpu
}  // namespace xe

#endif  // XENIA_CPU_PPC_PPC_OPCODE_DISASM_H_
