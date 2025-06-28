#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820CEBC8"))) PPC_WEAK_FUNC(sub_820CEBC8);
PPC_FUNC_IMPL(__imp__sub_820CEBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820cebec
	if (!ctx.cr6.lt) goto loc_820CEBEC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cebf4
	if (!ctx.cr6.eq) goto loc_820CEBF4;
loc_820CEBEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CEBF4:
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CEC04"))) PPC_WEAK_FUNC(sub_820CEC04);
PPC_FUNC_IMPL(__imp__sub_820CEC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEC08"))) PPC_WEAK_FUNC(sub_820CEC08);
PPC_FUNC_IMPL(__imp__sub_820CEC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CEC10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-29208
	ctx.r10.s64 = ctx.r11.s64 + -29208;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cec74
	if (ctx.cr6.eq) goto loc_820CEC74;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_820CEC38:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820cec68
	if (ctx.cr6.lt) goto loc_820CEC68;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x820cec68
	if (ctx.cr6.gt) goto loc_820CEC68;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x820cec64
	if (!ctx.cr6.eq) goto loc_820CEC64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820CEC64:
	// bl 0x821ace70
	ctx.lr = 0x820CEC68;
	sub_821ACE70(ctx, base);
loc_820CEC68:
	// lwz r31,440(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cec38
	if (!ctx.cr6.eq) goto loc_820CEC38;
loc_820CEC74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CEC7C"))) PPC_WEAK_FUNC(sub_820CEC7C);
PPC_FUNC_IMPL(__imp__sub_820CEC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEC80"))) PPC_WEAK_FUNC(sub_820CEC80);
PPC_FUNC_IMPL(__imp__sub_820CEC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820cecd0
	if (!ctx.cr6.eq) goto loc_820CECD0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-29208
	ctx.r10.s64 = ctx.r11.s64 + -29208;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cecfc
	if (ctx.cr6.eq) goto loc_820CECFC;
loc_820CECB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ace70
	ctx.lr = 0x820CECC0;
	sub_821ACE70(ctx, base);
	// lwz r31,440(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cecb4
	if (!ctx.cr6.eq) goto loc_820CECB4;
	// b 0x820cecfc
	goto loc_820CECFC;
loc_820CECD0:
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820cecfc
	if (!ctx.cr6.lt) goto loc_820CECFC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cecfc
	if (ctx.cr6.eq) goto loc_820CECFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821ace70
	ctx.lr = 0x820CECFC;
	sub_821ACE70(ctx, base);
loc_820CECFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CED14"))) PPC_WEAK_FUNC(sub_820CED14);
PPC_FUNC_IMPL(__imp__sub_820CED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CED18"))) PPC_WEAK_FUNC(sub_820CED18);
PPC_FUNC_IMPL(__imp__sub_820CED18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820ced3c
	if (!ctx.cr6.lt) goto loc_820CED3C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ced44
	if (!ctx.cr6.eq) goto loc_820CED44;
loc_820CED3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CED44:
	// lwz r3,448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CED4C"))) PPC_WEAK_FUNC(sub_820CED4C);
PPC_FUNC_IMPL(__imp__sub_820CED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CED50"))) PPC_WEAK_FUNC(sub_820CED50);
PPC_FUNC_IMPL(__imp__sub_820CED50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820CED58;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r10,r11,-29208
	ctx.r10.s64 = ctx.r11.s64 + -29208;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820cee1c
	if (ctx.cr6.eq) goto loc_820CEE1C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r25,r11,-18000
	ctx.r25.s64 = ctx.r11.s64 + -18000;
loc_820CED84:
	// lwz r28,176(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x820cee10
	if (ctx.cr6.lt) goto loc_820CEE10;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x820cee10
	if (ctx.cr6.gt) goto loc_820CEE10;
	// lwz r11,448(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 448);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820cee10
	if (ctx.cr6.eq) goto loc_820CEE10;
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// stw r27,448(r26)
	PPC_STORE_U32(ctx.r26.u32 + 448, ctx.r27.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820cee10
	if (ctx.cr6.eq) goto loc_820CEE10;
	// li r29,7
	ctx.r29.s64 = 7;
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
loc_820CEDC0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cee04
	if (ctx.cr6.eq) goto loc_820CEE04;
loc_820CEDCC:
	// lhz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 178);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x820cedf8
	if (!ctx.cr6.eq) goto loc_820CEDF8;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820cedf4
	if (!ctx.cr6.eq) goto loc_820CEDF4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820CEDF4:
	// bl 0x820f1130
	ctx.lr = 0x820CEDF8;
	sub_820F1130(ctx, base);
loc_820CEDF8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cedcc
	if (!ctx.cr6.eq) goto loc_820CEDCC;
loc_820CEE04:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x820cedc0
	if (!ctx.cr0.eq) goto loc_820CEDC0;
loc_820CEE10:
	// lwz r26,440(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x820ced84
	if (!ctx.cr6.eq) goto loc_820CED84;
loc_820CEE1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CEE24"))) PPC_WEAK_FUNC(sub_820CEE24);
PPC_FUNC_IMPL(__imp__sub_820CEE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEE28"))) PPC_WEAK_FUNC(sub_820CEE28);
PPC_FUNC_IMPL(__imp__sub_820CEE28) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,-29208
	ctx.r9.s64 = ctx.r9.s64 + -29208;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820CEE54:
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// bge cr6,0x820cee70
	if (!ctx.cr6.lt) goto loc_820CEE70;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cee70
	if (ctx.cr6.eq) goto loc_820CEE70;
	// lwz r10,448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_820CEE70:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x820cee54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820CEE54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CEE84"))) PPC_WEAK_FUNC(sub_820CEE84);
PPC_FUNC_IMPL(__imp__sub_820CEE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEE88"))) PPC_WEAK_FUNC(sub_820CEE88);
PPC_FUNC_IMPL(__imp__sub_820CEE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820CEE90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x820ceeec
	if (ctx.cr6.gt) goto loc_820CEEEC;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-29208
	ctx.r10.s64 = ctx.r10.s64 + -29208;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820CEEBC:
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// bge cr6,0x820ceed8
	if (!ctx.cr6.lt) goto loc_820CEED8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ceed8
	if (ctx.cr6.eq) goto loc_820CEED8;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x821ace70
	ctx.lr = 0x820CEED8;
	sub_821ACE70(ctx, base);
loc_820CEED8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x820ceebc
	if (!ctx.cr6.gt) goto loc_820CEEBC;
loc_820CEEEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CEEF4"))) PPC_WEAK_FUNC(sub_820CEEF4);
PPC_FUNC_IMPL(__imp__sub_820CEEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEEF8"))) PPC_WEAK_FUNC(sub_820CEEF8);
PPC_FUNC_IMPL(__imp__sub_820CEEF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821add40
	sub_821ADD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CEF20"))) PPC_WEAK_FUNC(sub_820CEF20);
PPC_FUNC_IMPL(__imp__sub_820CEF20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CEF24"))) PPC_WEAK_FUNC(sub_820CEF24);
PPC_FUNC_IMPL(__imp__sub_820CEF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEF28"))) PPC_WEAK_FUNC(sub_820CEF28);
PPC_FUNC_IMPL(__imp__sub_820CEF28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// blt cr6,0x820cef38
	if (ctx.cr6.lt) goto loc_820CEF38;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820cef4c
	goto loc_820CEF4C;
loc_820CEF38:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_820CEF4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CEF60"))) PPC_WEAK_FUNC(sub_820CEF60);
PPC_FUNC_IMPL(__imp__sub_820CEF60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CEF94"))) PPC_WEAK_FUNC(sub_820CEF94);
PPC_FUNC_IMPL(__imp__sub_820CEF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEF98"))) PPC_WEAK_FUNC(sub_820CEF98);
PPC_FUNC_IMPL(__imp__sub_820CEF98) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820CEFA0;
	__savegprlr_14(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-6432
	ctx.r11.s64 = ctx.r11.s64 + -6432;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// addi r10,r10,-6304
	ctx.r10.s64 = ctx.r10.s64 + -6304;
	// addi r9,r9,-6664
	ctx.r9.s64 = ctx.r9.s64 + -6664;
	// addi r8,r8,-6240
	ctx.r8.s64 = ctx.r8.s64 + -6240;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// addi r7,r7,-6168
	ctx.r7.s64 = ctx.r7.s64 + -6168;
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// addi r6,r6,-6128
	ctx.r6.s64 = ctx.r6.s64 + -6128;
	// addi r5,r5,-5936
	ctx.r5.s64 = ctx.r5.s64 + -5936;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r4,r4,-5840
	ctx.r4.s64 = ctx.r4.s64 + -5840;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r11,r31,-5728
	ctx.r11.s64 = ctx.r31.s64 + -5728;
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// addi r10,r30,-5784
	ctx.r10.s64 = ctx.r30.s64 + -5784;
	// addi r9,r29,-5368
	ctx.r9.s64 = ctx.r29.s64 + -5368;
	// addi r8,r28,-5352
	ctx.r8.s64 = ctx.r28.s64 + -5352;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// addi r7,r27,-5336
	ctx.r7.s64 = ctx.r27.s64 + -5336;
	// addi r6,r26,-5176
	ctx.r6.s64 = ctx.r26.s64 + -5176;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-5112
	ctx.r5.s64 = ctx.r25.s64 + -5112;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// addi r4,r24,-4992
	ctx.r4.s64 = ctx.r24.s64 + -4992;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// addi r11,r23,-4840
	ctx.r11.s64 = ctx.r23.s64 + -4840;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// addi r10,r22,-4784
	ctx.r10.s64 = ctx.r22.s64 + -4784;
	// addi r9,r21,-4568
	ctx.r9.s64 = ctx.r21.s64 + -4568;
	// addi r8,r20,-4472
	ctx.r8.s64 = ctx.r20.s64 + -4472;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-5720
	ctx.r7.s64 = ctx.r19.s64 + -5720;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// addi r6,r18,-5664
	ctx.r6.s64 = ctx.r18.s64 + -5664;
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// addi r5,r17,-5584
	ctx.r5.s64 = ctx.r17.s64 + -5584;
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// addi r4,r16,-5560
	ctx.r4.s64 = ctx.r16.s64 + -5560;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// addi r11,r15,-4360
	ctx.r11.s64 = ctx.r15.s64 + -4360;
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// addi r9,r10,-4312
	ctx.r9.s64 = ctx.r10.s64 + -4312;
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// addi r8,r14,-4256
	ctx.r8.s64 = ctx.r14.s64 + -4256;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r11,r7,-6544
	ctx.r11.s64 = ctx.r7.s64 + -6544;
	// addi r10,r6,-6496
	ctx.r10.s64 = ctx.r6.s64 + -6496;
	// addi r9,r5,-5992
	ctx.r9.s64 = ctx.r5.s64 + -5992;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// addi r8,r4,-5464
	ctx.r8.s64 = ctx.r4.s64 + -5464;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF120"))) PPC_WEAK_FUNC(sub_820CF120);
PPC_FUNC_IMPL(__imp__sub_820CF120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CF128;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820CF14C;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf228
	if (ctx.cr6.eq) goto loc_820CF228;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820CF164:
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r29,r29,1
	ctx.r29.u64 = ctx.r29.u32 & 0x7FFFFFFF;
	// rlwinm r29,r29,0,14,2
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFE003FFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cf204
	if (ctx.cr6.eq) goto loc_820CF204;
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf1b0
	if (ctx.cr6.eq) goto loc_820CF1B0;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820cf1b0
	if (!ctx.cr6.eq) goto loc_820CF1B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820CF1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820CF1B0:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lfs f0,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// beq cr6,0x820cf1f8
	if (ctx.cr6.eq) goto loc_820CF1F8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cf1ec
	if (ctx.cr6.eq) goto loc_820CF1EC;
	// lwz r10,228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820cf1ec
	if (ctx.cr6.eq) goto loc_820CF1EC;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf1f8
	if (ctx.cr6.eq) goto loc_820CF1F8;
loc_820CF1EC:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// b 0x820cf200
	goto loc_820CF200;
loc_820CF1F8:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
loc_820CF200:
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820CF204:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820CF21C;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf164
	if (!ctx.cr6.eq) goto loc_820CF164;
loc_820CF228:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF234"))) PPC_WEAK_FUNC(sub_820CF234);
PPC_FUNC_IMPL(__imp__sub_820CF234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF238"))) PPC_WEAK_FUNC(sub_820CF238);
PPC_FUNC_IMPL(__imp__sub_820CF238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CF240;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820CF264;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf340
	if (ctx.cr6.eq) goto loc_820CF340;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820CF27C:
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r29,r29,1
	ctx.r29.u64 = ctx.r29.u32 & 0x7FFFFFFF;
	// rlwinm r29,r29,0,14,2
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFE003FFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cf31c
	if (ctx.cr6.eq) goto loc_820CF31C;
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf2c8
	if (ctx.cr6.eq) goto loc_820CF2C8;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cf2c8
	if (ctx.cr6.eq) goto loc_820CF2C8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820CF2C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820CF2C8:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lfs f0,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// beq cr6,0x820cf310
	if (ctx.cr6.eq) goto loc_820CF310;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cf304
	if (ctx.cr6.eq) goto loc_820CF304;
	// lwz r10,228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820cf304
	if (ctx.cr6.eq) goto loc_820CF304;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf310
	if (ctx.cr6.eq) goto loc_820CF310;
loc_820CF304:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// b 0x820cf318
	goto loc_820CF318;
loc_820CF310:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
loc_820CF318:
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820CF31C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820CF334;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf27c
	if (!ctx.cr6.eq) goto loc_820CF27C;
loc_820CF340:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF34C"))) PPC_WEAK_FUNC(sub_820CF34C);
PPC_FUNC_IMPL(__imp__sub_820CF34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF350"))) PPC_WEAK_FUNC(sub_820CF350);
PPC_FUNC_IMPL(__imp__sub_820CF350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CF358;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820CF37C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820cf3d0
	if (!ctx.cr6.eq) goto loc_820CF3D0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820cf44c
	if (!ctx.cr6.eq) goto loc_820CF44C;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CF394;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf3a0
	if (!ctx.cr6.eq) goto loc_820CF3A0;
	// bl 0x821b3000
	ctx.lr = 0x820CF3A0;
	sub_821B3000(ctx, base);
loc_820CF3A0:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cf3c8
	if (ctx.cr6.eq) goto loc_820CF3C8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf3c8
	if (ctx.cr6.eq) goto loc_820CF3C8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820cf3ec
	goto loc_820CF3EC;
loc_820CF3C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf3ec
	goto loc_820CF3EC;
loc_820CF3D0:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820cf3fc
	if (!ctx.cr6.eq) goto loc_820CF3FC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cf44c
	if (ctx.cr6.eq) goto loc_820CF44C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820cf44c
	if (!ctx.cr6.eq) goto loc_820CF44C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CF3EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cf420
	if (ctx.cr6.eq) goto loc_820CF420;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cf420
	goto loc_820CF420;
loc_820CF3FC:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820cf40c
	if (!ctx.cr6.eq) goto loc_820CF40C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf420
	goto loc_820CF420;
loc_820CF40C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CF420;
	sub_820F3178(ctx, base);
loc_820CF420:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf44c
	if (ctx.cr6.eq) goto loc_820CF44C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf37c
	if (ctx.cr6.eq) goto loc_820CF37C;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// clrlwi r3,r11,1
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm r3,r3,0,14,2
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFE003FFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820CF44C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF458"))) PPC_WEAK_FUNC(sub_820CF458);
PPC_FUNC_IMPL(__imp__sub_820CF458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CF460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820CF480;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf50c
	if (ctx.cr6.eq) goto loc_820CF50C;
loc_820CF488:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi r31,r31,4
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf4ec
	if (ctx.cr6.eq) goto loc_820CF4EC;
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// bne cr6,0x820cf4bc
	if (!ctx.cr6.eq) goto loc_820CF4BC;
	// stw r10,-616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -616, ctx.r10.u32);
	// b 0x820cf4ec
	goto loc_820CF4EC;
loc_820CF4BC:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x820cf4ec
	if (!ctx.cr6.eq) goto loc_820CF4EC;
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820cf4ec
	if (ctx.cr6.eq) goto loc_820CF4EC;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820CF4DC:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r8,160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 160, ctx.r8.u32);
	// bdnz 0x820cf4dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820CF4DC;
loc_820CF4EC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820CF504;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf488
	if (!ctx.cr6.eq) goto loc_820CF488;
loc_820CF50C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF514"))) PPC_WEAK_FUNC(sub_820CF514);
PPC_FUNC_IMPL(__imp__sub_820CF514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF518"))) PPC_WEAK_FUNC(sub_820CF518);
PPC_FUNC_IMPL(__imp__sub_820CF518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CF520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820CF540;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf5cc
	if (ctx.cr6.eq) goto loc_820CF5CC;
loc_820CF548:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi r31,r31,4
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf5ac
	if (ctx.cr6.eq) goto loc_820CF5AC;
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// andc r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// bne cr6,0x820cf57c
	if (!ctx.cr6.eq) goto loc_820CF57C;
	// stw r10,-616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -616, ctx.r10.u32);
	// b 0x820cf5ac
	goto loc_820CF5AC;
loc_820CF57C:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x820cf5ac
	if (!ctx.cr6.eq) goto loc_820CF5AC;
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820cf5ac
	if (ctx.cr6.eq) goto loc_820CF5AC;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820CF59C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r8,160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 160, ctx.r8.u32);
	// bdnz 0x820cf59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820CF59C;
loc_820CF5AC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820CF5C4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf548
	if (!ctx.cr6.eq) goto loc_820CF548;
loc_820CF5CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF5D4"))) PPC_WEAK_FUNC(sub_820CF5D4);
PPC_FUNC_IMPL(__imp__sub_820CF5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF5D8"))) PPC_WEAK_FUNC(sub_820CF5D8);
PPC_FUNC_IMPL(__imp__sub_820CF5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CF5E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820CF604:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820cf658
	if (!ctx.cr6.eq) goto loc_820CF658;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820cf6cc
	if (!ctx.cr6.eq) goto loc_820CF6CC;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CF61C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf628
	if (!ctx.cr6.eq) goto loc_820CF628;
	// bl 0x821b3000
	ctx.lr = 0x820CF628;
	sub_821B3000(ctx, base);
loc_820CF628:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cf650
	if (ctx.cr6.eq) goto loc_820CF650;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf650
	if (ctx.cr6.eq) goto loc_820CF650;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820cf674
	goto loc_820CF674;
loc_820CF650:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf674
	goto loc_820CF674;
loc_820CF658:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820cf684
	if (!ctx.cr6.eq) goto loc_820CF684;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cf6cc
	if (ctx.cr6.eq) goto loc_820CF6CC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820cf6cc
	if (!ctx.cr6.eq) goto loc_820CF6CC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CF674:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cf6a8
	if (ctx.cr6.eq) goto loc_820CF6A8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cf6a8
	goto loc_820CF6A8;
loc_820CF684:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820cf694
	if (!ctx.cr6.eq) goto loc_820CF694;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf6a8
	goto loc_820CF6A8;
loc_820CF694:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CF6A8;
	sub_820F3178(ctx, base);
loc_820CF6A8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf6cc
	if (ctx.cr6.eq) goto loc_820CF6CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf604
	if (ctx.cr6.eq) goto loc_820CF604;
	// lwz r3,900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820CF6CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF6D8"))) PPC_WEAK_FUNC(sub_820CF6D8);
PPC_FUNC_IMPL(__imp__sub_820CF6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820CF6E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// ori r27,r10,6
	ctx.r27.u64 = ctx.r10.u64 | 6;
loc_820CF708:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820cf75c
	if (!ctx.cr6.eq) goto loc_820CF75C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cf7e0
	if (!ctx.cr6.eq) goto loc_820CF7E0;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CF720;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf72c
	if (!ctx.cr6.eq) goto loc_820CF72C;
	// bl 0x821b3000
	ctx.lr = 0x820CF72C;
	sub_821B3000(ctx, base);
loc_820CF72C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cf754
	if (ctx.cr6.eq) goto loc_820CF754;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf754
	if (ctx.cr6.eq) goto loc_820CF754;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820cf778
	goto loc_820CF778;
loc_820CF754:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf778
	goto loc_820CF778;
loc_820CF75C:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820cf788
	if (!ctx.cr6.eq) goto loc_820CF788;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820cf7e0
	if (ctx.cr6.eq) goto loc_820CF7E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cf7e0
	if (!ctx.cr6.eq) goto loc_820CF7E0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820CF778:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820cf7b0
	if (ctx.cr6.eq) goto loc_820CF7B0;
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// b 0x820cf7b0
	goto loc_820CF7B0;
loc_820CF788:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x820cf798
	if (!ctx.cr6.eq) goto loc_820CF798;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf7b0
	goto loc_820CF7B0;
loc_820CF798:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CF7B0;
	sub_820F3178(ctx, base);
loc_820CF7B0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf7e0
	if (ctx.cr6.eq) goto loc_820CF7E0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820cf708
	if (ctx.cr6.eq) goto loc_820CF708;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CF7DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820cf708
	goto loc_820CF708;
loc_820CF7E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF7E8"))) PPC_WEAK_FUNC(sub_820CF7E8);
PPC_FUNC_IMPL(__imp__sub_820CF7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CF7F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820CF814:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820cf868
	if (!ctx.cr6.eq) goto loc_820CF868;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820cf8dc
	if (!ctx.cr6.eq) goto loc_820CF8DC;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CF82C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf838
	if (!ctx.cr6.eq) goto loc_820CF838;
	// bl 0x821b3000
	ctx.lr = 0x820CF838;
	sub_821B3000(ctx, base);
loc_820CF838:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cf860
	if (ctx.cr6.eq) goto loc_820CF860;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf860
	if (ctx.cr6.eq) goto loc_820CF860;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820cf884
	goto loc_820CF884;
loc_820CF860:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf884
	goto loc_820CF884;
loc_820CF868:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820cf894
	if (!ctx.cr6.eq) goto loc_820CF894;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cf8dc
	if (ctx.cr6.eq) goto loc_820CF8DC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820cf8dc
	if (!ctx.cr6.eq) goto loc_820CF8DC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CF884:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cf8b8
	if (ctx.cr6.eq) goto loc_820CF8B8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cf8b8
	goto loc_820CF8B8;
loc_820CF894:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820cf8a4
	if (!ctx.cr6.eq) goto loc_820CF8A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf8b8
	goto loc_820CF8B8;
loc_820CF8A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CF8B8;
	sub_820F3178(ctx, base);
loc_820CF8B8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf8dc
	if (ctx.cr6.eq) goto loc_820CF8DC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cf814
	if (ctx.cr6.eq) goto loc_820CF814;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820CF8DC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF8E8"))) PPC_WEAK_FUNC(sub_820CF8E8);
PPC_FUNC_IMPL(__imp__sub_820CF8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820CF8F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// ori r27,r10,6
	ctx.r27.u64 = ctx.r10.u64 | 6;
loc_820CF918:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820cf96c
	if (!ctx.cr6.eq) goto loc_820CF96C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cf9e4
	if (!ctx.cr6.eq) goto loc_820CF9E4;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CF930;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cf93c
	if (!ctx.cr6.eq) goto loc_820CF93C;
	// bl 0x821b3000
	ctx.lr = 0x820CF93C;
	sub_821B3000(ctx, base);
loc_820CF93C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cf964
	if (ctx.cr6.eq) goto loc_820CF964;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf964
	if (ctx.cr6.eq) goto loc_820CF964;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820cf988
	goto loc_820CF988;
loc_820CF964:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf988
	goto loc_820CF988;
loc_820CF96C:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820cf998
	if (!ctx.cr6.eq) goto loc_820CF998;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820cf9e4
	if (ctx.cr6.eq) goto loc_820CF9E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cf9e4
	if (!ctx.cr6.eq) goto loc_820CF9E4;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820CF988:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820cf9c0
	if (ctx.cr6.eq) goto loc_820CF9C0;
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// b 0x820cf9c0
	goto loc_820CF9C0;
loc_820CF998:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x820cf9a8
	if (!ctx.cr6.eq) goto loc_820CF9A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cf9c0
	goto loc_820CF9C0;
loc_820CF9A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CF9C0;
	sub_820F3178(ctx, base);
loc_820CF9C0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cf9e4
	if (ctx.cr6.eq) goto loc_820CF9E4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820cf918
	if (ctx.cr6.eq) goto loc_820CF918;
	// stw r25,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r25.u32);
	// bl 0x82215d10
	ctx.lr = 0x820CF9E0;
	sub_82215D10(ctx, base);
	// b 0x820cf918
	goto loc_820CF918;
loc_820CF9E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF9EC"))) PPC_WEAK_FUNC(sub_820CF9EC);
PPC_FUNC_IMPL(__imp__sub_820CF9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF9F0"))) PPC_WEAK_FUNC(sub_820CF9F0);
PPC_FUNC_IMPL(__imp__sub_820CF9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cfa30
	if (!ctx.cr6.eq) goto loc_820CFA30;
	// bl 0x820ddca8
	ctx.lr = 0x820CFA18;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfa28
	if (ctx.cr6.eq) goto loc_820CFA28;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cfa4c
	goto loc_820CFA4C;
loc_820CFA28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cfa4c
	goto loc_820CFA4C;
loc_820CFA30:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cfa5c
	if (!ctx.cr6.eq) goto loc_820CFA5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfaa4
	if (ctx.cr6.eq) goto loc_820CFAA4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CFA4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfa78
	if (ctx.cr6.eq) goto loc_820CFA78;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cfa78
	goto loc_820CFA78;
loc_820CFA5C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cfaa4
	if (ctx.cr6.eq) goto loc_820CFAA4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CFA78;
	sub_820F3178(ctx, base);
loc_820CFA78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfaa4
	if (ctx.cr6.eq) goto loc_820CFAA4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cfaa4
	if (ctx.cr6.eq) goto loc_820CFAA4;
	// lwz r3,308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820CFAA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CFABC"))) PPC_WEAK_FUNC(sub_820CFABC);
PPC_FUNC_IMPL(__imp__sub_820CFABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CFAC0"))) PPC_WEAK_FUNC(sub_820CFAC0);
PPC_FUNC_IMPL(__imp__sub_820CFAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CFAC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820CFAE8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfb74
	if (ctx.cr6.eq) goto loc_820CFB74;
loc_820CFAF0:
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cfb54
	if (ctx.cr6.eq) goto loc_820CFB54;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cfb10
	if (ctx.cr6.eq) goto loc_820CFB10;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820cfb14
	goto loc_820CFB14;
loc_820CFB10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820CFB14:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820cfb54
	if (!ctx.cr6.lt) goto loc_820CFB54;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820cfb54
	if (ctx.cr6.lt) goto loc_820CFB54;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cfb54
	if (ctx.cr6.eq) goto loc_820CFB54;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820cfb54
	if (ctx.cr6.eq) goto loc_820CFB54;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cfb80
	if (!ctx.cr6.eq) goto loc_820CFB80;
loc_820CFB54:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820CFB6C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cfaf0
	if (!ctx.cr6.eq) goto loc_820CFAF0;
loc_820CFB74:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820CFB80:
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x820cfb9c
	if (ctx.cr6.gt) goto loc_820CFB9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820CFB9C:
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r3,228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CFBAC"))) PPC_WEAK_FUNC(sub_820CFBAC);
PPC_FUNC_IMPL(__imp__sub_820CFBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CFBB0"))) PPC_WEAK_FUNC(sub_820CFBB0);
PPC_FUNC_IMPL(__imp__sub_820CFBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CFBB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cfbf4
	if (!ctx.cr6.eq) goto loc_820CFBF4;
	// bl 0x820ddca8
	ctx.lr = 0x820CFBDC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfbec
	if (ctx.cr6.eq) goto loc_820CFBEC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cfc10
	goto loc_820CFC10;
loc_820CFBEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cfc10
	goto loc_820CFC10;
loc_820CFBF4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cfc20
	if (!ctx.cr6.eq) goto loc_820CFC20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfc68
	if (ctx.cr6.eq) goto loc_820CFC68;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CFC10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfc3c
	if (ctx.cr6.eq) goto loc_820CFC3C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cfc3c
	goto loc_820CFC3C;
loc_820CFC20:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cfc68
	if (ctx.cr6.eq) goto loc_820CFC68;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CFC3C;
	sub_820F3178(ctx, base);
loc_820CFC3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfc68
	if (ctx.cr6.eq) goto loc_820CFC68;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cfc68
	if (ctx.cr6.eq) goto loc_820CFC68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821dfae8
	ctx.lr = 0x820CFC58;
	sub_821DFAE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfc68
	if (ctx.cr6.eq) goto loc_820CFC68;
	// stw r29,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r29.u32);
	// bl 0x82215d10
	ctx.lr = 0x820CFC68;
	sub_82215D10(ctx, base);
loc_820CFC68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CFC70"))) PPC_WEAK_FUNC(sub_820CFC70);
PPC_FUNC_IMPL(__imp__sub_820CFC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cfcb8
	if (!ctx.cr6.eq) goto loc_820CFCB8;
	// bl 0x820ddca8
	ctx.lr = 0x820CFCA0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfcb0
	if (ctx.cr6.eq) goto loc_820CFCB0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cfcd4
	goto loc_820CFCD4;
loc_820CFCB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cfcd4
	goto loc_820CFCD4;
loc_820CFCB8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cfce4
	if (!ctx.cr6.eq) goto loc_820CFCE4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfd2c
	if (ctx.cr6.eq) goto loc_820CFD2C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CFCD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfd00
	if (ctx.cr6.eq) goto loc_820CFD00;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cfd00
	goto loc_820CFD00;
loc_820CFCE4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cfd2c
	if (ctx.cr6.eq) goto loc_820CFD2C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CFD00;
	sub_820F3178(ctx, base);
loc_820CFD00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfd2c
	if (ctx.cr6.eq) goto loc_820CFD2C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cfd2c
	if (ctx.cr6.eq) goto loc_820CFD2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821dfae8
	ctx.lr = 0x820CFD1C;
	sub_821DFAE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfd2c
	if (ctx.cr6.eq) goto loc_820CFD2C;
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// b 0x820cfd30
	goto loc_820CFD30;
loc_820CFD2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CFD30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CFD48"))) PPC_WEAK_FUNC(sub_820CFD48);
PPC_FUNC_IMPL(__imp__sub_820CFD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CFD50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820CFD74:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820cfdc8
	if (!ctx.cr6.eq) goto loc_820CFDC8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820cfe64
	if (!ctx.cr6.eq) goto loc_820CFE64;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CFD8C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cfd98
	if (!ctx.cr6.eq) goto loc_820CFD98;
	// bl 0x821b3000
	ctx.lr = 0x820CFD98;
	sub_821B3000(ctx, base);
loc_820CFD98:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cfdc0
	if (ctx.cr6.eq) goto loc_820CFDC0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cfdc0
	if (ctx.cr6.eq) goto loc_820CFDC0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820cfde4
	goto loc_820CFDE4;
loc_820CFDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cfde4
	goto loc_820CFDE4;
loc_820CFDC8:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820cfdf4
	if (!ctx.cr6.eq) goto loc_820CFDF4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfe64
	if (ctx.cr6.eq) goto loc_820CFE64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820cfe64
	if (!ctx.cr6.eq) goto loc_820CFE64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CFDE4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfe18
	if (ctx.cr6.eq) goto loc_820CFE18;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cfe18
	goto loc_820CFE18;
loc_820CFDF4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820cfe04
	if (!ctx.cr6.eq) goto loc_820CFE04;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cfe18
	goto loc_820CFE18;
loc_820CFE04:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CFE18;
	sub_820F3178(ctx, base);
loc_820CFE18:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfe64
	if (ctx.cr6.eq) goto loc_820CFE64;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cfd74
	if (ctx.cr6.eq) goto loc_820CFD74;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cfe50
	if (ctx.cr6.eq) goto loc_820CFE50;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r10,188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820CFE50:
	// lwz r10,188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820CFE64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CFE70"))) PPC_WEAK_FUNC(sub_820CFE70);
PPC_FUNC_IMPL(__imp__sub_820CFE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CFE78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cfeb4
	if (!ctx.cr6.eq) goto loc_820CFEB4;
	// bl 0x820ddca8
	ctx.lr = 0x820CFE9C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cfeac
	if (ctx.cr6.eq) goto loc_820CFEAC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cfed0
	goto loc_820CFED0;
loc_820CFEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cfed0
	goto loc_820CFED0;
loc_820CFEB4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cfee0
	if (!ctx.cr6.eq) goto loc_820CFEE0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cff50
	if (ctx.cr6.eq) goto loc_820CFF50;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CFED0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfefc
	if (ctx.cr6.eq) goto loc_820CFEFC;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cfefc
	goto loc_820CFEFC;
loc_820CFEE0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cff50
	if (ctx.cr6.eq) goto loc_820CFF50;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CFEFC;
	sub_820F3178(ctx, base);
loc_820CFEFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cff50
	if (ctx.cr6.eq) goto loc_820CFF50;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cff50
	if (ctx.cr6.eq) goto loc_820CFF50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821dfae8
	ctx.lr = 0x820CFF18;
	sub_821DFAE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cff50
	if (ctx.cr6.eq) goto loc_820CFF50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821da0a0
	ctx.lr = 0x820CFF2C;
	sub_821DA0A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cff50
	if (ctx.cr6.eq) goto loc_820CFF50;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82215ab0
	ctx.lr = 0x820CFF44;
	sub_82215AB0(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820CFF50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CFF5C"))) PPC_WEAK_FUNC(sub_820CFF5C);
PPC_FUNC_IMPL(__imp__sub_820CFF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CFF60"))) PPC_WEAK_FUNC(sub_820CFF60);
PPC_FUNC_IMPL(__imp__sub_820CFF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CFF68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cffb0
	if (!ctx.cr6.eq) goto loc_820CFFB0;
	// bl 0x820ddca8
	ctx.lr = 0x820CFF90;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cffa4
	if (ctx.cr6.eq) goto loc_820CFFA4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x820cffcc
	goto loc_820CFFCC;
loc_820CFFA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x820cffcc
	goto loc_820CFFCC;
loc_820CFFB0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cffdc
	if (!ctx.cr6.eq) goto loc_820CFFDC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d00e4
	if (ctx.cr6.eq) goto loc_820D00E4;
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CFFCC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cfffc
	if (ctx.cr6.eq) goto loc_820CFFFC;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// b 0x820cfffc
	goto loc_820CFFFC;
loc_820CFFDC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d00e4
	if (ctx.cr6.eq) goto loc_820D00E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CFFF8;
	sub_820F3178(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820CFFFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820d00e4
	if (ctx.cr6.eq) goto loc_820D00E4;
	// lwz r3,236(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d00e4
	if (ctx.cr6.eq) goto loc_820D00E4;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d0024
	if (ctx.cr6.eq) goto loc_820D0024;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d0028
	goto loc_820D0028;
loc_820D0024:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D0028:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d00e4
	if (ctx.cr6.lt) goto loc_820D00E4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d00e4
	if (ctx.cr6.lt) goto loc_820D00E4;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// subf r5,r11,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r10,r10,4536
	ctx.r10.s64 = ctx.r10.s64 + 4536;
	// subf r31,r11,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,236(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820d00e4
	if (ctx.cr6.eq) goto loc_820D00E4;
	// lwz r8,252(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
loc_820D005C:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d00d4
	if (ctx.cr6.eq) goto loc_820D00D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d00d4
	if (ctx.cr6.eq) goto loc_820D00D4;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820d00d4
	if (!ctx.cr6.eq) goto loc_820D00D4;
	// lwz r10,152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820d00d4
	if (!ctx.cr6.eq) goto loc_820D00D4;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x820d00d4
	if (!ctx.cr6.eq) goto loc_820D00D4;
	// lwz r10,156(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x820d00d4
	if (!ctx.cr6.eq) goto loc_820D00D4;
	// lhz r10,812(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 812);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x820d00c0
	if (!ctx.cr6.eq) goto loc_820D00C0;
	// lhz r30,812(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 812);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820d00f0
	if (ctx.cr6.eq) goto loc_820D00F0;
loc_820D00C0:
	// lhz r30,812(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 812);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x820d00d4
	if (!ctx.cr6.eq) goto loc_820D00D4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820d00f0
	if (ctx.cr6.eq) goto loc_820D00F0;
loc_820D00D4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820d005c
	if (ctx.cr6.lt) goto loc_820D005C;
loc_820D00E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D00F0:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d0104
	if (!ctx.cr6.eq) goto loc_820D0104;
	// li r8,0
	ctx.r8.s64 = 0;
loc_820D0104:
	// sth r8,10(r9)
	PPC_STORE_U16(ctx.r9.u32 + 10, ctx.r8.u16);
	// lwz r9,784(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x820d0134
	if (!ctx.cr6.eq) goto loc_820D0134;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bne cr6,0x820d015c
	if (!ctx.cr6.eq) goto loc_820D015C;
	// bl 0x821de3f0
	ctx.lr = 0x820D0128;
	sub_821DE3F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D0134:
	// lwz r9,784(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 784);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820d0160
	if (!ctx.cr6.eq) goto loc_820D0160;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x820d015c
	if (!ctx.cr6.eq) goto loc_820D015C;
	// bl 0x821de3f0
	ctx.lr = 0x820D0150;
	sub_821DE3F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D015C:
	// bl 0x821de390
	ctx.lr = 0x820D0160;
	sub_821DE390(ctx, base);
loc_820D0160:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D016C"))) PPC_WEAK_FUNC(sub_820D016C);
PPC_FUNC_IMPL(__imp__sub_820D016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0170"))) PPC_WEAK_FUNC(sub_820D0170);
PPC_FUNC_IMPL(__imp__sub_820D0170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D0178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// ori r27,r10,6
	ctx.r27.u64 = ctx.r10.u64 | 6;
loc_820D019C:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820d01f0
	if (!ctx.cr6.eq) goto loc_820D01F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d0270
	if (!ctx.cr6.eq) goto loc_820D0270;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D01B4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d01c0
	if (!ctx.cr6.eq) goto loc_820D01C0;
	// bl 0x821b3000
	ctx.lr = 0x820D01C0;
	sub_821B3000(ctx, base);
loc_820D01C0:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d01e8
	if (ctx.cr6.eq) goto loc_820D01E8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d01e8
	if (ctx.cr6.eq) goto loc_820D01E8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d020c
	goto loc_820D020C;
loc_820D01E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d020c
	goto loc_820D020C;
loc_820D01F0:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d021c
	if (!ctx.cr6.eq) goto loc_820D021C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d0270
	if (ctx.cr6.eq) goto loc_820D0270;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d0270
	if (!ctx.cr6.eq) goto loc_820D0270;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820D020C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d0244
	if (ctx.cr6.eq) goto loc_820D0244;
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// b 0x820d0244
	goto loc_820D0244;
loc_820D021C:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x820d022c
	if (!ctx.cr6.eq) goto loc_820D022C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d0244
	goto loc_820D0244;
loc_820D022C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D0244;
	sub_820F3178(ctx, base);
loc_820D0244:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0270
	if (ctx.cr6.eq) goto loc_820D0270;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d019c
	if (ctx.cr6.eq) goto loc_820D019C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D026C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820d019c
	goto loc_820D019C;
loc_820D0270:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0278"))) PPC_WEAK_FUNC(sub_820D0278);
PPC_FUNC_IMPL(__imp__sub_820D0278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D0280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d02b8
	if (!ctx.cr6.eq) goto loc_820D02B8;
	// bl 0x820ddca8
	ctx.lr = 0x820D02A0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d02b0
	if (ctx.cr6.eq) goto loc_820D02B0;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d02d4
	goto loc_820D02D4;
loc_820D02B0:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d02d4
	goto loc_820D02D4;
loc_820D02B8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d02e4
	if (!ctx.cr6.eq) goto loc_820D02E4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d0344
	if (ctx.cr6.eq) goto loc_820D0344;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820D02D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d0304
	if (ctx.cr6.eq) goto loc_820D0304;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820d0304
	goto loc_820D0304;
loc_820D02E4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d0344
	if (ctx.cr6.eq) goto loc_820D0344;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D0300;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820D0304:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d0344
	if (ctx.cr6.eq) goto loc_820D0344;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d0344
	if (ctx.cr6.eq) goto loc_820D0344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821da0a0
	ctx.lr = 0x820D0320;
	sub_821DA0A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0344
	if (ctx.cr6.eq) goto loc_820D0344;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82215ab0
	ctx.lr = 0x820D0338;
	sub_82215AB0(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D0344:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0350"))) PPC_WEAK_FUNC(sub_820D0350);
PPC_FUNC_IMPL(__imp__sub_820D0350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D0358;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// bge cr6,0x820d03fc
	if (!ctx.cr6.lt) goto loc_820D03FC;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-11768
	ctx.r11.s64 = ctx.r11.s64 + -11768;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d03fc
	if (!ctx.cr6.eq) goto loc_820D03FC;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d03fc
	if (ctx.cr6.eq) goto loc_820D03FC;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r29,392
	ctx.r31.s64 = ctx.r29.s64 + 392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822184b8
	ctx.lr = 0x820D03B0;
	sub_822184B8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x820d03dc
	if (!ctx.cr6.gt) goto loc_820D03DC;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218540
	ctx.lr = 0x820D03DC;
	sub_82218540(ctx, base);
loc_820D03DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82215d10
	ctx.lr = 0x820D03E4;
	sub_82215D10(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D03FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D03FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0404"))) PPC_WEAK_FUNC(sub_820D0404);
PPC_FUNC_IMPL(__imp__sub_820D0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0408"))) PPC_WEAK_FUNC(sub_820D0408);
PPC_FUNC_IMPL(__imp__sub_820D0408) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-11768
	ctx.r11.s64 = ctx.r9.s64 + -11768;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82215d10
	sub_82215D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0458"))) PPC_WEAK_FUNC(sub_820D0458);
PPC_FUNC_IMPL(__imp__sub_820D0458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D045C"))) PPC_WEAK_FUNC(sub_820D045C);
PPC_FUNC_IMPL(__imp__sub_820D045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0460"))) PPC_WEAK_FUNC(sub_820D0460);
PPC_FUNC_IMPL(__imp__sub_820D0460) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-11768
	ctx.r11.s64 = ctx.r9.s64 + -11768;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D04AC"))) PPC_WEAK_FUNC(sub_820D04AC);
PPC_FUNC_IMPL(__imp__sub_820D04AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D04B0"))) PPC_WEAK_FUNC(sub_820D04B0);
PPC_FUNC_IMPL(__imp__sub_820D04B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-11768
	ctx.r11.s64 = ctx.r9.s64 + -11768;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D04FC"))) PPC_WEAK_FUNC(sub_820D04FC);
PPC_FUNC_IMPL(__imp__sub_820D04FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D0500"))) PPC_WEAK_FUNC(sub_820D0500);
PPC_FUNC_IMPL(__imp__sub_820D0500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x820d0588
	if (!ctx.cr6.lt) goto loc_820D0588;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-11768
	ctx.r11.s64 = ctx.r9.s64 + -11768;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d0588
	if (!ctx.cr6.eq) goto loc_820D0588;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d0588
	if (ctx.cr6.eq) goto loc_820D0588;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x820d0580
	if (!ctx.cr6.gt) goto loc_820D0580;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82218540
	ctx.lr = 0x820D0580;
	sub_82218540(ctx, base);
loc_820D0580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82215d10
	ctx.lr = 0x820D0588;
	sub_82215D10(ctx, base);
loc_820D0588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D059C"))) PPC_WEAK_FUNC(sub_820D059C);
PPC_FUNC_IMPL(__imp__sub_820D059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D05A0"))) PPC_WEAK_FUNC(sub_820D05A0);
PPC_FUNC_IMPL(__imp__sub_820D05A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-11768
	ctx.r11.s64 = ctx.r9.s64 + -11768;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D05EC"))) PPC_WEAK_FUNC(sub_820D05EC);
PPC_FUNC_IMPL(__imp__sub_820D05EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D05F0"))) PPC_WEAK_FUNC(sub_820D05F0);
PPC_FUNC_IMPL(__imp__sub_820D05F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D05F8"))) PPC_WEAK_FUNC(sub_820D05F8);
PPC_FUNC_IMPL(__imp__sub_820D05F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820D0600;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,16(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820d08ac
	if (ctx.cr6.eq) goto loc_820D08AC;
	// addi r31,r4,20
	ctx.r31.s64 = ctx.r4.s64 + 20;
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r24,28
	ctx.r24.s64 = 28;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_820D062C:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 104);
	// beq cr6,0x820d06e4
	if (ctx.cr6.eq) goto loc_820D06E4;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d06e4
	if (ctx.cr6.eq) goto loc_820D06E4;
	// lwz r8,152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x820d06e4
	if (!ctx.cr6.eq) goto loc_820D06E4;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lhz r10,812(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 812);
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820d06e8
	goto loc_820D06E8;
loc_820D06E4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_820D06E8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r9,106(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 106);
	// beq cr6,0x820d0728
	if (ctx.cr6.eq) goto loc_820D0728;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d0728
	if (ctx.cr6.eq) goto loc_820D0728;
	// lwz r8,152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x820d0728
	if (!ctx.cr6.eq) goto loc_820D0728;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lhz r10,812(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 812);
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820d072c
	goto loc_820D072C;
loc_820D0728:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_820D072C:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d0778
	if (ctx.cr6.eq) goto loc_820D0778;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820D074C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x820d074c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D074C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r6,r7,r24
	ctx.r6.s32 = ctx.r7.s32 / ctx.r24.s32;
	// stw r6,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r6.u32);
	// b 0x820d0780
	goto loc_820D0780;
loc_820D0778:
	// stw r25,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r25.u32);
	// stw r26,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r26.u32);
loc_820D0780:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d0884
	if (ctx.cr6.eq) goto loc_820D0884;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 + 72;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// lwz r6,84(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// b 0x820d0894
	goto loc_820D0894;
loc_820D0884:
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8233eaf0
	ctx.lr = 0x820D0894;
	sub_8233EAF0(ctx, base);
loc_820D0894:
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,212
	ctx.r31.s64 = ctx.r31.s64 + 212;
	// bne 0x820d062c
	if (!ctx.cr0.eq) goto loc_820D062C;
loc_820D08AC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D08B8"))) PPC_WEAK_FUNC(sub_820D08B8);
PPC_FUNC_IMPL(__imp__sub_820D08B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D08C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0954
	if (ctx.cr6.eq) goto loc_820D0954;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0954
	if (ctx.cr6.eq) goto loc_820D0954;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0954
	if (ctx.cr6.eq) goto loc_820D0954;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820D0914;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0954
	if (ctx.cr6.eq) goto loc_820D0954;
loc_820D0920:
	// lwz r3,24(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0934
	if (ctx.cr6.eq) goto loc_820D0934;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821dfcd8
	ctx.lr = 0x820D0934;
	sub_821DFCD8(ctx, base);
loc_820D0934:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0948;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0920
	if (!ctx.cr6.eq) goto loc_820D0920;
loc_820D0954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D095C"))) PPC_WEAK_FUNC(sub_820D095C);
PPC_FUNC_IMPL(__imp__sub_820D095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0960"))) PPC_WEAK_FUNC(sub_820D0960);
PPC_FUNC_IMPL(__imp__sub_820D0960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D0968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d09fc
	if (ctx.cr6.eq) goto loc_820D09FC;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d09fc
	if (ctx.cr6.eq) goto loc_820D09FC;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d09fc
	if (ctx.cr6.eq) goto loc_820D09FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820D09BC;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d09fc
	if (ctx.cr6.eq) goto loc_820D09FC;
loc_820D09C8:
	// lwz r3,24(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d09dc
	if (ctx.cr6.eq) goto loc_820D09DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821dfdd8
	ctx.lr = 0x820D09DC;
	sub_821DFDD8(ctx, base);
loc_820D09DC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D09F0;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d09c8
	if (!ctx.cr6.eq) goto loc_820D09C8;
loc_820D09FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0A04"))) PPC_WEAK_FUNC(sub_820D0A04);
PPC_FUNC_IMPL(__imp__sub_820D0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0A08"))) PPC_WEAK_FUNC(sub_820D0A08);
PPC_FUNC_IMPL(__imp__sub_820D0A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D0A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0aa4
	if (ctx.cr6.eq) goto loc_820D0AA4;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0aa4
	if (ctx.cr6.eq) goto loc_820D0AA4;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0aa4
	if (ctx.cr6.eq) goto loc_820D0AA4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820D0A64;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0aa4
	if (ctx.cr6.eq) goto loc_820D0AA4;
loc_820D0A70:
	// lwz r3,24(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0a84
	if (ctx.cr6.eq) goto loc_820D0A84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821dfe50
	ctx.lr = 0x820D0A84;
	sub_821DFE50(ctx, base);
loc_820D0A84:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0A98;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0a70
	if (!ctx.cr6.eq) goto loc_820D0A70;
loc_820D0AA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0AAC"))) PPC_WEAK_FUNC(sub_820D0AAC);
PPC_FUNC_IMPL(__imp__sub_820D0AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0AB0"))) PPC_WEAK_FUNC(sub_820D0AB0);
PPC_FUNC_IMPL(__imp__sub_820D0AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820D0AB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0b6c
	if (ctx.cr6.eq) goto loc_820D0B6C;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0b6c
	if (ctx.cr6.eq) goto loc_820D0B6C;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d0b6c
	if (ctx.cr6.eq) goto loc_820D0B6C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820D0B18;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0b6c
	if (ctx.cr6.eq) goto loc_820D0B6C;
loc_820D0B24:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d0b48
	if (ctx.cr6.eq) goto loc_820D0B48;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dfec8
	ctx.lr = 0x820D0B48;
	sub_821DFEC8(ctx, base);
loc_820D0B48:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0B60;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0b24
	if (!ctx.cr6.eq) goto loc_820D0B24;
loc_820D0B6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0B74"))) PPC_WEAK_FUNC(sub_820D0B74);
PPC_FUNC_IMPL(__imp__sub_820D0B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0B78"))) PPC_WEAK_FUNC(sub_820D0B78);
PPC_FUNC_IMPL(__imp__sub_820D0B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D0B80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0BA4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0c00
	if (ctx.cr6.eq) goto loc_820D0C00;
loc_820D0BB0:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d0bdc
	if (ctx.cr6.eq) goto loc_820D0BDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82216110
	ctx.lr = 0x820D0BC8;
	sub_82216110(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D0BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D0BDC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0BF4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0bb0
	if (!ctx.cr6.eq) goto loc_820D0BB0;
loc_820D0C00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0C0C"))) PPC_WEAK_FUNC(sub_820D0C0C);
PPC_FUNC_IMPL(__imp__sub_820D0C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0C10"))) PPC_WEAK_FUNC(sub_820D0C10);
PPC_FUNC_IMPL(__imp__sub_820D0C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0C3C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0c70
	if (ctx.cr6.eq) goto loc_820D0C70;
loc_820D0C44:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d0c94
	if (!ctx.cr6.eq) goto loc_820D0C94;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0C68;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0c44
	if (!ctx.cr6.eq) goto loc_820D0C44;
loc_820D0C70:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
loc_820D0C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820D0C94:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,31376
	ctx.r11.s64 = ctx.r10.s64 + 31376;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820d0cb8
	if (!ctx.cr6.gt) goto loc_820D0CB8;
	// lfs f13,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820d0cbc
	if (ctx.cr6.lt) goto loc_820D0CBC;
loc_820D0CB8:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_820D0CBC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x820d0c7c
	goto loc_820D0C7C;
}

__attribute__((alias("__imp__sub_820D0CC4"))) PPC_WEAK_FUNC(sub_820D0CC4);
PPC_FUNC_IMPL(__imp__sub_820D0CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0CC8"))) PPC_WEAK_FUNC(sub_820D0CC8);
PPC_FUNC_IMPL(__imp__sub_820D0CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D0CD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0CF0;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0d90
	if (ctx.cr6.eq) goto loc_820D0D90;
loc_820D0CFC:
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d0d6c
	if (ctx.cr6.eq) goto loc_820D0D6C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820d0d60
	if (ctx.cr6.eq) goto loc_820D0D60;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r8,r10,512
	ctx.r8.u64 = ctx.r10.u64 | 33554432;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r6,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r6.u32);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
	// lwz r5,36(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820D0D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820D0D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820d0d6c
	goto loc_820D0D6C;
loc_820D0D60:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820D0D6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0D84;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0cfc
	if (!ctx.cr6.eq) goto loc_820D0CFC;
loc_820D0D90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0D98"))) PPC_WEAK_FUNC(sub_820D0D98);
PPC_FUNC_IMPL(__imp__sub_820D0D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D0DA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D0DC8:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d0e1c
	if (!ctx.cr6.eq) goto loc_820D0E1C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d0e9c
	if (!ctx.cr6.eq) goto loc_820D0E9C;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D0DE0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0dec
	if (!ctx.cr6.eq) goto loc_820D0DEC;
	// bl 0x821b3000
	ctx.lr = 0x820D0DEC;
	sub_821B3000(ctx, base);
loc_820D0DEC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d0e14
	if (ctx.cr6.eq) goto loc_820D0E14;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d0e14
	if (ctx.cr6.eq) goto loc_820D0E14;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d0e38
	goto loc_820D0E38;
loc_820D0E14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d0e38
	goto loc_820D0E38;
loc_820D0E1C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d0e48
	if (!ctx.cr6.eq) goto loc_820D0E48;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d0e9c
	if (ctx.cr6.eq) goto loc_820D0E9C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d0e9c
	if (!ctx.cr6.eq) goto loc_820D0E9C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D0E38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d0e6c
	if (ctx.cr6.eq) goto loc_820D0E6C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d0e6c
	goto loc_820D0E6C;
loc_820D0E48:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d0e58
	if (!ctx.cr6.eq) goto loc_820D0E58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d0e6c
	goto loc_820D0E6C;
loc_820D0E58:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D0E6C;
	sub_820F3178(ctx, base);
loc_820D0E6C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0e9c
	if (ctx.cr6.eq) goto loc_820D0E9C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d0dc8
	if (ctx.cr6.eq) goto loc_820D0DC8;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
loc_820D0E9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0EA4"))) PPC_WEAK_FUNC(sub_820D0EA4);
PPC_FUNC_IMPL(__imp__sub_820D0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0EA8"))) PPC_WEAK_FUNC(sub_820D0EA8);
PPC_FUNC_IMPL(__imp__sub_820D0EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D0EB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D0ED8:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d0f2c
	if (!ctx.cr6.eq) goto loc_820D0F2C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d0fac
	if (!ctx.cr6.eq) goto loc_820D0FAC;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D0EF0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0efc
	if (!ctx.cr6.eq) goto loc_820D0EFC;
	// bl 0x821b3000
	ctx.lr = 0x820D0EFC;
	sub_821B3000(ctx, base);
loc_820D0EFC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d0f24
	if (ctx.cr6.eq) goto loc_820D0F24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d0f24
	if (ctx.cr6.eq) goto loc_820D0F24;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d0f48
	goto loc_820D0F48;
loc_820D0F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d0f48
	goto loc_820D0F48;
loc_820D0F2C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d0f58
	if (!ctx.cr6.eq) goto loc_820D0F58;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d0fac
	if (ctx.cr6.eq) goto loc_820D0FAC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d0fac
	if (!ctx.cr6.eq) goto loc_820D0FAC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D0F48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d0f7c
	if (ctx.cr6.eq) goto loc_820D0F7C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0F58:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d0f68
	if (!ctx.cr6.eq) goto loc_820D0F68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0F68:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D0F7C;
	sub_820F3178(ctx, base);
loc_820D0F7C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0fac
	if (ctx.cr6.eq) goto loc_820D0FAC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d0ed8
	if (ctx.cr6.eq) goto loc_820D0ED8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D0FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D0FAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0FB4"))) PPC_WEAK_FUNC(sub_820D0FB4);
PPC_FUNC_IMPL(__imp__sub_820D0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0FB8"))) PPC_WEAK_FUNC(sub_820D0FB8);
PPC_FUNC_IMPL(__imp__sub_820D0FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D0FC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D0FE0;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1020
	if (ctx.cr6.eq) goto loc_820D1020;
loc_820D0FEC:
	// lwz r3,24(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1000
	if (ctx.cr6.eq) goto loc_820D1000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821dfd58
	ctx.lr = 0x820D1000;
	sub_821DFD58(ctx, base);
loc_820D1000:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D1014;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d0fec
	if (!ctx.cr6.eq) goto loc_820D0FEC;
loc_820D1020:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1028"))) PPC_WEAK_FUNC(sub_820D1028);
PPC_FUNC_IMPL(__imp__sub_820D1028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D1030;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// ori r27,r10,6
	ctx.r27.u64 = ctx.r10.u64 | 6;
loc_820D1058:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820d10ac
	if (!ctx.cr6.eq) goto loc_820D10AC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d1130
	if (!ctx.cr6.eq) goto loc_820D1130;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D1070;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d107c
	if (!ctx.cr6.eq) goto loc_820D107C;
	// bl 0x821b3000
	ctx.lr = 0x820D107C;
	sub_821B3000(ctx, base);
loc_820D107C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d10a4
	if (ctx.cr6.eq) goto loc_820D10A4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d10a4
	if (ctx.cr6.eq) goto loc_820D10A4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d10c8
	goto loc_820D10C8;
loc_820D10A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d10c8
	goto loc_820D10C8;
loc_820D10AC:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d10d8
	if (!ctx.cr6.eq) goto loc_820D10D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d1130
	if (ctx.cr6.eq) goto loc_820D1130;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d1130
	if (!ctx.cr6.eq) goto loc_820D1130;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D10C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d10fc
	if (ctx.cr6.eq) goto loc_820D10FC;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d10fc
	goto loc_820D10FC;
loc_820D10D8:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d10e8
	if (!ctx.cr6.eq) goto loc_820D10E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d10fc
	goto loc_820D10FC;
loc_820D10E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D10FC;
	sub_820F3178(ctx, base);
loc_820D10FC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1130
	if (ctx.cr6.eq) goto loc_820D1130;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d1058
	if (ctx.cr6.eq) goto loc_820D1058;
	// lwz r10,472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,476(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// b 0x820d1058
	goto loc_820D1058;
loc_820D1130:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1138"))) PPC_WEAK_FUNC(sub_820D1138);
PPC_FUNC_IMPL(__imp__sub_820D1138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D1140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D1160;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d11a4
	if (ctx.cr6.eq) goto loc_820D11A4;
loc_820D116C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1180
	if (ctx.cr6.eq) goto loc_820D1180;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82215998
	ctx.lr = 0x820D1180;
	sub_82215998(ctx, base);
loc_820D1180:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D1198;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d116c
	if (!ctx.cr6.eq) goto loc_820D116C;
loc_820D11A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D11AC"))) PPC_WEAK_FUNC(sub_820D11AC);
PPC_FUNC_IMPL(__imp__sub_820D11AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D11B0"))) PPC_WEAK_FUNC(sub_820D11B0);
PPC_FUNC_IMPL(__imp__sub_820D11B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820D11B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// ori r27,r10,6
	ctx.r27.u64 = ctx.r10.u64 | 6;
loc_820D11E0:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820d1234
	if (!ctx.cr6.eq) goto loc_820D1234;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d12b4
	if (!ctx.cr6.eq) goto loc_820D12B4;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D11F8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d1204
	if (!ctx.cr6.eq) goto loc_820D1204;
	// bl 0x821b3000
	ctx.lr = 0x820D1204;
	sub_821B3000(ctx, base);
loc_820D1204:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d122c
	if (ctx.cr6.eq) goto loc_820D122C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d122c
	if (ctx.cr6.eq) goto loc_820D122C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d1250
	goto loc_820D1250;
loc_820D122C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d1250
	goto loc_820D1250;
loc_820D1234:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d1260
	if (!ctx.cr6.eq) goto loc_820D1260;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d12b4
	if (ctx.cr6.eq) goto loc_820D12B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d12b4
	if (!ctx.cr6.eq) goto loc_820D12B4;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820D1250:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d1288
	if (ctx.cr6.eq) goto loc_820D1288;
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// b 0x820d1288
	goto loc_820D1288;
loc_820D1260:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x820d1270
	if (!ctx.cr6.eq) goto loc_820D1270;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d1288
	goto loc_820D1288;
loc_820D1270:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D1288;
	sub_820F3178(ctx, base);
loc_820D1288:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d12b4
	if (ctx.cr6.eq) goto loc_820D12B4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d11e0
	if (ctx.cr6.eq) goto loc_820D11E0;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D12B0;
	sub_8233E4E0(ctx, base);
	// b 0x820d11e0
	goto loc_820D11E0;
loc_820D12B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D12BC"))) PPC_WEAK_FUNC(sub_820D12BC);
PPC_FUNC_IMPL(__imp__sub_820D12BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D12C0"))) PPC_WEAK_FUNC(sub_820D12C0);
PPC_FUNC_IMPL(__imp__sub_820D12C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820D12C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r8,40(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// lfs f0,32(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r27,16(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r26,20(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r25,24(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// bl 0x820d6a68
	ctx.lr = 0x820D134C;
	sub_820D6A68(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820d13a8
	if (!ctx.cr6.gt) goto loc_820D13A8;
	// lfs f13,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f12,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f6,284(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f5,288(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
loc_820D13A8:
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x820d1490
	if (ctx.cr6.eq) goto loc_820D1490;
	// bl 0x82085870
	ctx.lr = 0x820D13DC;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1534
	if (ctx.cr6.eq) goto loc_820D1534;
loc_820D13E8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821de988
	ctx.lr = 0x820D13FC;
	sub_821DE988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d1434
	if (!ctx.cr6.eq) goto loc_820D1434;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D141C;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d13e8
	if (!ctx.cr6.eq) goto loc_820D13E8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820D1434:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820D1490:
	// bl 0x82085870
	ctx.lr = 0x820D1494;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1534
	if (ctx.cr6.eq) goto loc_820D1534;
	// li r27,2
	ctx.r27.s64 = 2;
loc_820D14A4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821de988
	ctx.lr = 0x820D14B8;
	sub_821DE988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d1510
	if (ctx.cr6.eq) goto loc_820D1510;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
loc_820D1510:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D1528;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d14a4
	if (!ctx.cr6.eq) goto loc_820D14A4;
loc_820D1534:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1540"))) PPC_WEAK_FUNC(sub_820D1540);
PPC_FUNC_IMPL(__imp__sub_820D1540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820d1554
	if (!ctx.cr6.eq) goto loc_820D1554;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D1554:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-13936
	ctx.r10.s64 = ctx.r11.s64 + -13936;
	// addi r7,r10,18452
	ctx.r7.s64 = ctx.r10.s64 + 18452;
loc_820D1560:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820d1560
	if (!ctx.cr0.eq) goto loc_820D1560;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x820d15a4
	if (!ctx.cr6.lt) goto loc_820D15A4;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// b 0x820d15b8
	goto loc_820D15B8;
loc_820D15A4:
	// lis r9,-13569
	ctx.r9.s64 = -889257984;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// addi r7,r8,-32416
	ctx.r7.s64 = ctx.r8.s64 + -32416;
	// stw r7,-13570(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13570, ctx.r7.u32);
loc_820D15B8:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r10,18456
	ctx.r5.s64 = ctx.r10.s64 + 18456;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r4,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
loc_820D1644:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820d1644
	if (!ctx.cr0.eq) goto loc_820D1644;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D166C"))) PPC_WEAK_FUNC(sub_820D166C);
PPC_FUNC_IMPL(__imp__sub_820D166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1670"))) PPC_WEAK_FUNC(sub_820D1670);
PPC_FUNC_IMPL(__imp__sub_820D1670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820D1678;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r28,28(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r27,60(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r25,64(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r24,72(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// beq cr6,0x820d1778
	if (ctx.cr6.eq) goto loc_820D1778;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d1734
	if (!ctx.cr6.eq) goto loc_820D1734;
	// bl 0x820ddca8
	ctx.lr = 0x820D1724;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d174c
	if (ctx.cr6.eq) goto loc_820D174C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d176c
	goto loc_820D176C;
loc_820D1734:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820d1778
	if (ctx.cr6.eq) goto loc_820D1778;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820d1754
	if (!ctx.cr6.eq) goto loc_820D1754;
loc_820D174C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820d176c
	goto loc_820D176C;
loc_820D1754:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820D1768;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820D176C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d1778
	if (ctx.cr6.eq) goto loc_820D1778;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_820D1778:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821dead8
	ctx.lr = 0x820D1788;
	sub_821DEAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d17fc
	if (ctx.cr6.eq) goto loc_820D17FC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820D17FC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1818"))) PPC_WEAK_FUNC(sub_820D1818);
PPC_FUNC_IMPL(__imp__sub_820D1818) {
	PPC_FUNC_PROLOGUE();
	// b 0x821def00
	sub_821DEF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D181C"))) PPC_WEAK_FUNC(sub_820D181C);
PPC_FUNC_IMPL(__imp__sub_820D181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1820"))) PPC_WEAK_FUNC(sub_820D1820);
PPC_FUNC_IMPL(__imp__sub_820D1820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D1828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D184C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d18a0
	if (ctx.cr6.eq) goto loc_820D18A0;
loc_820D1858:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D1864;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1874
	if (ctx.cr6.eq) goto loc_820D1874;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x820d1878
	goto loc_820D1878;
loc_820D1874:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D1878:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d18ac
	if (!ctx.cr6.eq) goto loc_820D18AC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D1894;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d1858
	if (!ctx.cr6.eq) goto loc_820D1858;
loc_820D18A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D18AC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d18cc
	if (ctx.cr6.eq) goto loc_820D18CC;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D18CC;
	sub_8233E4E0(ctx, base);
loc_820D18CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D18D8"))) PPC_WEAK_FUNC(sub_820D18D8);
PPC_FUNC_IMPL(__imp__sub_820D18D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D18E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D1908:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d195c
	if (!ctx.cr6.eq) goto loc_820D195C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d19e0
	if (!ctx.cr6.eq) goto loc_820D19E0;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D1920;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d192c
	if (!ctx.cr6.eq) goto loc_820D192C;
	// bl 0x821b3000
	ctx.lr = 0x820D192C;
	sub_821B3000(ctx, base);
loc_820D192C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d1954
	if (ctx.cr6.eq) goto loc_820D1954;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d1954
	if (ctx.cr6.eq) goto loc_820D1954;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d1978
	goto loc_820D1978;
loc_820D1954:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d1978
	goto loc_820D1978;
loc_820D195C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d1988
	if (!ctx.cr6.eq) goto loc_820D1988;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d19e0
	if (ctx.cr6.eq) goto loc_820D19E0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d19e0
	if (!ctx.cr6.eq) goto loc_820D19E0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D1978:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d19ac
	if (ctx.cr6.eq) goto loc_820D19AC;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d19ac
	goto loc_820D19AC;
loc_820D1988:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d1998
	if (!ctx.cr6.eq) goto loc_820D1998;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d19ac
	goto loc_820D19AC;
loc_820D1998:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D19AC;
	sub_820F3178(ctx, base);
loc_820D19AC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d19e0
	if (ctx.cr6.eq) goto loc_820D19E0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d1908
	if (ctx.cr6.eq) goto loc_820D1908;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D19D4;
	sub_8233E4E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820D19E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D19EC"))) PPC_WEAK_FUNC(sub_820D19EC);
PPC_FUNC_IMPL(__imp__sub_820D19EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D19F0"))) PPC_WEAK_FUNC(sub_820D19F0);
PPC_FUNC_IMPL(__imp__sub_820D19F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820D19F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D1A24:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d1a78
	if (!ctx.cr6.eq) goto loc_820D1A78;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d1b28
	if (!ctx.cr6.eq) goto loc_820D1B28;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D1A3C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d1a48
	if (!ctx.cr6.eq) goto loc_820D1A48;
	// bl 0x821b3000
	ctx.lr = 0x820D1A48;
	sub_821B3000(ctx, base);
loc_820D1A48:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d1a70
	if (ctx.cr6.eq) goto loc_820D1A70;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d1a70
	if (ctx.cr6.eq) goto loc_820D1A70;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d1a94
	goto loc_820D1A94;
loc_820D1A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d1a94
	goto loc_820D1A94;
loc_820D1A78:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d1aa4
	if (!ctx.cr6.eq) goto loc_820D1AA4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d1b28
	if (ctx.cr6.eq) goto loc_820D1B28;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d1b28
	if (!ctx.cr6.eq) goto loc_820D1B28;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D1A94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d1ac8
	if (ctx.cr6.eq) goto loc_820D1AC8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d1ac8
	goto loc_820D1AC8;
loc_820D1AA4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d1ab4
	if (!ctx.cr6.eq) goto loc_820D1AB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d1ac8
	goto loc_820D1AC8;
loc_820D1AB4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D1AC8;
	sub_820F3178(ctx, base);
loc_820D1AC8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1b28
	if (ctx.cr6.eq) goto loc_820D1B28;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d1a24
	if (ctx.cr6.eq) goto loc_820D1A24;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820d1b04
	if (ctx.cr6.eq) goto loc_820D1B04;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r9,528
	ctx.r11.s64 = ctx.r9.s64 + 528;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820D1AF8:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820d1af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D1AF8;
loc_820D1B04:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820d1b28
	if (ctx.cr6.eq) goto loc_820D1B28;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r9,600
	ctx.r11.s64 = ctx.r9.s64 + 600;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820D1B1C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820d1b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D1B1C;
loc_820D1B28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1B30"))) PPC_WEAK_FUNC(sub_820D1B30);
PPC_FUNC_IMPL(__imp__sub_820D1B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820D1B38;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r24,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820d1b70
	if (!ctx.cr6.eq) goto loc_820D1B70;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820D1B70:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82151eb8
	ctx.lr = 0x820D1B7C;
	sub_82151EB8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f0,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lfs f13,52(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r27,1764(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1764);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820d1c00
	if (ctx.cr6.eq) goto loc_820D1C00;
loc_820D1BA8:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ed188
	ctx.lr = 0x820D1BCC;
	sub_821ED188(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x820d1c00
	if (!ctx.cr6.lt) goto loc_820D1C00;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820d1ba8
	if (!ctx.cr6.eq) goto loc_820D1BA8;
loc_820D1C00:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1C14"))) PPC_WEAK_FUNC(sub_820D1C14);
PPC_FUNC_IMPL(__imp__sub_820D1C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1C18"))) PPC_WEAK_FUNC(sub_820D1C18);
PPC_FUNC_IMPL(__imp__sub_820D1C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D1C20;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820d1c54
	if (!ctx.cr6.eq) goto loc_820D1C54;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820D1C54:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82151eb8
	ctx.lr = 0x820D1C60;
	sub_82151EB8(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x820d1c90
	if (!ctx.cr6.gt) goto loc_820D1C90;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820D1C90:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820D1CA0;
	sub_82082030(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lwz r30,1764(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1764);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d1cf0
	if (ctx.cr6.eq) goto loc_820D1CF0;
loc_820D1CB8:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ed188
	ctx.lr = 0x820D1CD8;
	sub_821ED188(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x820d1cf0
	if (!ctx.cr6.lt) goto loc_820D1CF0;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820d1cb8
	if (!ctx.cr6.eq) goto loc_820D1CB8;
loc_820D1CF0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820d1d04
	if (ctx.cr6.eq) goto loc_820D1D04;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820D1D04;
	sub_82080000(ctx, base);
loc_820D1D04:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1D18"))) PPC_WEAK_FUNC(sub_820D1D18);
PPC_FUNC_IMPL(__imp__sub_820D1D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D1D20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D1D48:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d1d9c
	if (!ctx.cr6.eq) goto loc_820D1D9C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d1e24
	if (!ctx.cr6.eq) goto loc_820D1E24;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D1D60;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d1d6c
	if (!ctx.cr6.eq) goto loc_820D1D6C;
	// bl 0x821b3000
	ctx.lr = 0x820D1D6C;
	sub_821B3000(ctx, base);
loc_820D1D6C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d1d94
	if (ctx.cr6.eq) goto loc_820D1D94;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d1d94
	if (ctx.cr6.eq) goto loc_820D1D94;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d1db8
	goto loc_820D1DB8;
loc_820D1D94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d1db8
	goto loc_820D1DB8;
loc_820D1D9C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d1dc8
	if (!ctx.cr6.eq) goto loc_820D1DC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d1e24
	if (ctx.cr6.eq) goto loc_820D1E24;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d1e24
	if (!ctx.cr6.eq) goto loc_820D1E24;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D1DB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d1dec
	if (ctx.cr6.eq) goto loc_820D1DEC;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d1dec
	goto loc_820D1DEC;
loc_820D1DC8:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d1dd8
	if (!ctx.cr6.eq) goto loc_820D1DD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d1dec
	goto loc_820D1DEC;
loc_820D1DD8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D1DEC;
	sub_820F3178(ctx, base);
loc_820D1DEC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d1e24
	if (ctx.cr6.eq) goto loc_820D1E24;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d1d48
	if (ctx.cr6.eq) goto loc_820D1D48;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r9,464(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// lwz r8,468(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820D1E24:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1E44"))) PPC_WEAK_FUNC(sub_820D1E44);
PPC_FUNC_IMPL(__imp__sub_820D1E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1E48"))) PPC_WEAK_FUNC(sub_820D1E48);
PPC_FUNC_IMPL(__imp__sub_820D1E48) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r5,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d1ec4
	if (!ctx.cr6.lt) goto loc_820D1EC4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d1ec8
	goto loc_820D1EC8;
loc_820D1EC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D1EC8:
	// or r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x821ed0e8
	sub_821ED0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1ED0"))) PPC_WEAK_FUNC(sub_820D1ED0);
PPC_FUNC_IMPL(__imp__sub_820D1ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D1ED4"))) PPC_WEAK_FUNC(sub_820D1ED4);
PPC_FUNC_IMPL(__imp__sub_820D1ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1ED8"))) PPC_WEAK_FUNC(sub_820D1ED8);
PPC_FUNC_IMPL(__imp__sub_820D1ED8) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r5,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d1f54
	if (!ctx.cr6.lt) goto loc_820D1F54;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d1f58
	goto loc_820D1F58;
loc_820D1F54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D1F58:
	// andc r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// b 0x821ed0e8
	sub_821ED0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1F60"))) PPC_WEAK_FUNC(sub_820D1F60);
PPC_FUNC_IMPL(__imp__sub_820D1F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D1F64"))) PPC_WEAK_FUNC(sub_820D1F64);
PPC_FUNC_IMPL(__imp__sub_820D1F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1F68"))) PPC_WEAK_FUNC(sub_820D1F68);
PPC_FUNC_IMPL(__imp__sub_820D1F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D1FFC"))) PPC_WEAK_FUNC(sub_820D1FFC);
PPC_FUNC_IMPL(__imp__sub_820D1FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2000"))) PPC_WEAK_FUNC(sub_820D2000);
PPC_FUNC_IMPL(__imp__sub_820D2000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D2094"))) PPC_WEAK_FUNC(sub_820D2094);
PPC_FUNC_IMPL(__imp__sub_820D2094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2098"))) PPC_WEAK_FUNC(sub_820D2098);
PPC_FUNC_IMPL(__imp__sub_820D2098) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d2110
	if (!ctx.cr6.lt) goto loc_820D2110;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x820d2114
	goto loc_820D2114;
loc_820D2110:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D2114:
	// or r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 | ctx.r5.u64;
	// b 0x821ed990
	sub_821ED990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D211C"))) PPC_WEAK_FUNC(sub_820D211C);
PPC_FUNC_IMPL(__imp__sub_820D211C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D2120"))) PPC_WEAK_FUNC(sub_820D2120);
PPC_FUNC_IMPL(__imp__sub_820D2120) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d2198
	if (!ctx.cr6.lt) goto loc_820D2198;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x820d219c
	goto loc_820D219C;
loc_820D2198:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D219C:
	// andc r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// b 0x821ed990
	sub_821ED990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D21A4"))) PPC_WEAK_FUNC(sub_820D21A4);
PPC_FUNC_IMPL(__imp__sub_820D21A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D21A8"))) PPC_WEAK_FUNC(sub_820D21A8);
PPC_FUNC_IMPL(__imp__sub_820D21A8) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820d2220
	if (!ctx.cr6.lt) goto loc_820D2220;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d2220
	if (ctx.cr6.eq) goto loc_820D2220;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820d2220
	if (!ctx.cr6.lt) goto loc_820D2220;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d2220
	if (ctx.cr6.eq) goto loc_820D2220;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d2220
	if (!ctx.cr6.lt) goto loc_820D2220;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
loc_820D2220:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D2228"))) PPC_WEAK_FUNC(sub_820D2228);
PPC_FUNC_IMPL(__imp__sub_820D2228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820D2230;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2254;
	sub_82085870(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d22cc
	if (ctx.cr6.eq) goto loc_820D22CC;
loc_820D2260:
	// lwz r29,24(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820d22a8
	if (ctx.cr6.eq) goto loc_820D22A8;
	// lwz r31,396(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d22a8
	if (ctx.cr6.eq) goto loc_820D22A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820D227C:
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820D229C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820d227c
	if (!ctx.cr0.eq) goto loc_820D227C;
loc_820D22A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82085870
	ctx.lr = 0x820D22C0;
	sub_82085870(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2260
	if (!ctx.cr6.eq) goto loc_820D2260;
loc_820D22CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D22D4"))) PPC_WEAK_FUNC(sub_820D22D4);
PPC_FUNC_IMPL(__imp__sub_820D22D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D22D8"))) PPC_WEAK_FUNC(sub_820D22D8);
PPC_FUNC_IMPL(__imp__sub_820D22D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D22E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2300;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2340
	if (ctx.cr6.eq) goto loc_820D2340;
loc_820D230C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2318;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d234c
	if (!ctx.cr6.eq) goto loc_820D234C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2334;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d230c
	if (!ctx.cr6.eq) goto loc_820D230C;
loc_820D2340:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D234C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2358"))) PPC_WEAK_FUNC(sub_820D2358);
PPC_FUNC_IMPL(__imp__sub_820D2358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D2360;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2384;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d23c4
	if (ctx.cr6.eq) goto loc_820D23C4;
loc_820D2390:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0120
	ctx.lr = 0x820D23A0;
	sub_821E0120(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D23B8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2390
	if (!ctx.cr6.eq) goto loc_820D2390;
loc_820D23C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D23CC"))) PPC_WEAK_FUNC(sub_820D23CC);
PPC_FUNC_IMPL(__imp__sub_820D23CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D23D0"))) PPC_WEAK_FUNC(sub_820D23D0);
PPC_FUNC_IMPL(__imp__sub_820D23D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820D23D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D23FC;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d24b4
	if (ctx.cr6.eq) goto loc_820D24B4;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r29,r10,4536
	ctx.r29.s64 = ctx.r10.s64 + 4536;
	// addi r28,r11,28656
	ctx.r28.s64 = ctx.r11.s64 + 28656;
loc_820D241C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0020
	ctx.lr = 0x820D242C;
	sub_821E0020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d2490
	if (ctx.cr6.eq) goto loc_820D2490;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823052d8
	ctx.lr = 0x820D2444;
	sub_823052D8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d2488
	if (ctx.cr6.eq) goto loc_820D2488;
	// lwz r4,784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820d2488
	if (ctx.cr6.eq) goto loc_820D2488;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820d2470
	if (ctx.cr6.lt) goto loc_820D2470;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x820d247c
	goto loc_820D247C;
loc_820D2470:
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mulli r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 * 236;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820D247C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,336(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// bl 0x821e2bc0
	ctx.lr = 0x820D2488;
	sub_821E2BC0(ctx, base);
loc_820D2488:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x820D2490;
	sub_823051A8(ctx, base);
loc_820D2490:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82085870
	ctx.lr = 0x820D24A8;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d241c
	if (!ctx.cr6.eq) goto loc_820D241C;
loc_820D24B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D24BC"))) PPC_WEAK_FUNC(sub_820D24BC);
PPC_FUNC_IMPL(__imp__sub_820D24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D24C0"))) PPC_WEAK_FUNC(sub_820D24C0);
PPC_FUNC_IMPL(__imp__sub_820D24C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D24C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D24E8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2524
	if (ctx.cr6.eq) goto loc_820D2524;
loc_820D24F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0310
	ctx.lr = 0x820D2500;
	sub_821E0310(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2518;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d24f4
	if (!ctx.cr6.eq) goto loc_820D24F4;
loc_820D2524:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D252C"))) PPC_WEAK_FUNC(sub_820D252C);
PPC_FUNC_IMPL(__imp__sub_820D252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2530"))) PPC_WEAK_FUNC(sub_820D2530);
PPC_FUNC_IMPL(__imp__sub_820D2530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D2538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2558;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2594
	if (ctx.cr6.eq) goto loc_820D2594;
loc_820D2564:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0220
	ctx.lr = 0x820D2570;
	sub_821E0220(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2588;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2564
	if (!ctx.cr6.eq) goto loc_820D2564;
loc_820D2594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D259C"))) PPC_WEAK_FUNC(sub_820D259C);
PPC_FUNC_IMPL(__imp__sub_820D259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D25A0"))) PPC_WEAK_FUNC(sub_820D25A0);
PPC_FUNC_IMPL(__imp__sub_820D25A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820D25BC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d25d8
	if (ctx.cr6.eq) goto loc_820D25D8;
	// lhz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D25D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D25EC"))) PPC_WEAK_FUNC(sub_820D25EC);
PPC_FUNC_IMPL(__imp__sub_820D25EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D25F0"))) PPC_WEAK_FUNC(sub_820D25F0);
PPC_FUNC_IMPL(__imp__sub_820D25F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D25F8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2624;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2668
	if (ctx.cr6.eq) goto loc_820D2668;
loc_820D2630:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f0aa8
	ctx.lr = 0x820D2644;
	sub_820F0AA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D265C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2630
	if (!ctx.cr6.eq) goto loc_820D2630;
loc_820D2668:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2674"))) PPC_WEAK_FUNC(sub_820D2674);
PPC_FUNC_IMPL(__imp__sub_820D2674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2678"))) PPC_WEAK_FUNC(sub_820D2678);
PPC_FUNC_IMPL(__imp__sub_820D2678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D2680;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D26A4:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d26f8
	if (!ctx.cr6.eq) goto loc_820D26F8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d276c
	if (!ctx.cr6.eq) goto loc_820D276C;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D26BC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d26c8
	if (!ctx.cr6.eq) goto loc_820D26C8;
	// bl 0x821b3000
	ctx.lr = 0x820D26C8;
	sub_821B3000(ctx, base);
loc_820D26C8:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d26f0
	if (ctx.cr6.eq) goto loc_820D26F0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d26f0
	if (ctx.cr6.eq) goto loc_820D26F0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d2714
	goto loc_820D2714;
loc_820D26F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d2714
	goto loc_820D2714;
loc_820D26F8:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d2724
	if (!ctx.cr6.eq) goto loc_820D2724;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d276c
	if (ctx.cr6.eq) goto loc_820D276C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d276c
	if (!ctx.cr6.eq) goto loc_820D276C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D2714:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d2748
	if (ctx.cr6.eq) goto loc_820D2748;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d2748
	goto loc_820D2748;
loc_820D2724:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d2734
	if (!ctx.cr6.eq) goto loc_820D2734;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d2748
	goto loc_820D2748;
loc_820D2734:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D2748;
	sub_820F3178(ctx, base);
loc_820D2748:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d276c
	if (ctx.cr6.eq) goto loc_820D276C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d26a4
	if (ctx.cr6.eq) goto loc_820D26A4;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D276C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2778"))) PPC_WEAK_FUNC(sub_820D2778);
PPC_FUNC_IMPL(__imp__sub_820D2778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D2780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D27A0;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d27e0
	if (ctx.cr6.eq) goto loc_820D27E0;
loc_820D27AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D27B8;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d27ec
	if (!ctx.cr6.eq) goto loc_820D27EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D27D4;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d27ac
	if (!ctx.cr6.eq) goto loc_820D27AC;
loc_820D27E0:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D27EC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D27FC"))) PPC_WEAK_FUNC(sub_820D27FC);
PPC_FUNC_IMPL(__imp__sub_820D27FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2800"))) PPC_WEAK_FUNC(sub_820D2800);
PPC_FUNC_IMPL(__imp__sub_820D2800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D2808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82085870
	ctx.lr = 0x820D2844;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2904
	if (ctx.cr6.eq) goto loc_820D2904;
loc_820D2850:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D285C;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d286c
	if (ctx.cr6.eq) goto loc_820D286C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x820d2870
	goto loc_820D2870;
loc_820D286C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D2870:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d289c
	if (ctx.cr6.eq) goto loc_820D289C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x820d289c
	if (ctx.cr6.gt) goto loc_820D289C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d28fc
	if (ctx.cr6.eq) goto loc_820D28FC;
	// bdz 0x820d28c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820D28C4;
	// bdz 0x820d28dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820D28DC;
	// b 0x820d28fc
	goto loc_820D28FC;
loc_820D289C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D28B0;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2850
	if (!ctx.cr6.eq) goto loc_820D2850;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D28C4:
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D28DC:
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D28FC:
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_820D2904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D290C"))) PPC_WEAK_FUNC(sub_820D290C);
PPC_FUNC_IMPL(__imp__sub_820D290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2910"))) PPC_WEAK_FUNC(sub_820D2910);
PPC_FUNC_IMPL(__imp__sub_820D2910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D2918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D293C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d297c
	if (ctx.cr6.eq) goto loc_820D297C;
loc_820D2948:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2954;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d299c
	if (!ctx.cr6.eq) goto loc_820D299C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2970;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2948
	if (!ctx.cr6.eq) goto loc_820D2948;
loc_820D297C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_820D2994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D299C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d2994
	if (ctx.cr6.eq) goto loc_820D2994;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D29D0"))) PPC_WEAK_FUNC(sub_820D29D0);
PPC_FUNC_IMPL(__imp__sub_820D29D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D29D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D29F8;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2a38
	if (ctx.cr6.eq) goto loc_820D2A38;
loc_820D2A04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2A10;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2a44
	if (!ctx.cr6.eq) goto loc_820D2A44;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2A2C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2a04
	if (!ctx.cr6.eq) goto loc_820D2A04;
loc_820D2A38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D2A44:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2A50"))) PPC_WEAK_FUNC(sub_820D2A50);
PPC_FUNC_IMPL(__imp__sub_820D2A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D2A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2A78;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2ab8
	if (ctx.cr6.eq) goto loc_820D2AB8;
loc_820D2A84:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2A90;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2ac4
	if (!ctx.cr6.eq) goto loc_820D2AC4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2AAC;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2a84
	if (!ctx.cr6.eq) goto loc_820D2A84;
loc_820D2AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D2AC4:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2AD0"))) PPC_WEAK_FUNC(sub_820D2AD0);
PPC_FUNC_IMPL(__imp__sub_820D2AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D2AD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2AF8;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2b38
	if (ctx.cr6.eq) goto loc_820D2B38;
loc_820D2B04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2B10;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2b44
	if (!ctx.cr6.eq) goto loc_820D2B44;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2B2C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2b04
	if (!ctx.cr6.eq) goto loc_820D2B04;
loc_820D2B38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D2B44:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2B50"))) PPC_WEAK_FUNC(sub_820D2B50);
PPC_FUNC_IMPL(__imp__sub_820D2B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D2B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2B78;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2bb8
	if (ctx.cr6.eq) goto loc_820D2BB8;
loc_820D2B84:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2B90;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2bc4
	if (!ctx.cr6.eq) goto loc_820D2BC4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2BAC;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2b84
	if (!ctx.cr6.eq) goto loc_820D2B84;
loc_820D2BB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D2BC4:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2BD0"))) PPC_WEAK_FUNC(sub_820D2BD0);
PPC_FUNC_IMPL(__imp__sub_820D2BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D2BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2BF8;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2c38
	if (ctx.cr6.eq) goto loc_820D2C38;
loc_820D2C04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2C10;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2c44
	if (!ctx.cr6.eq) goto loc_820D2C44;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2C2C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2c04
	if (!ctx.cr6.eq) goto loc_820D2C04;
loc_820D2C38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D2C44:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2C50"))) PPC_WEAK_FUNC(sub_820D2C50);
PPC_FUNC_IMPL(__imp__sub_820D2C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820D2C58;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2C7C;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2dbc
	if (ctx.cr6.eq) goto loc_820D2DBC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r28,r11,4536
	ctx.r28.s64 = ctx.r11.s64 + 4536;
	// addi r27,r10,28656
	ctx.r27.s64 = ctx.r10.s64 + 28656;
loc_820D2C9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2CA8;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2d98
	if (ctx.cr6.eq) goto loc_820D2D98;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// or r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820d2d98
	if (ctx.cr6.eq) goto loc_820D2D98;
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d2cd8
	if (ctx.cr6.eq) goto loc_820D2CD8;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x820d2cdc
	goto loc_820D2CDC;
loc_820D2CD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D2CDC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d2cec
	if (ctx.cr6.eq) goto loc_820D2CEC;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d2d2c
	if (ctx.cr6.lt) goto loc_820D2D2C;
loc_820D2CEC:
	// lhz r9,240(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 240);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820d2d20
	if (!ctx.cr6.lt) goto loc_820D2D20;
	// lwz r11,236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d2d28
	if (ctx.cr6.eq) goto loc_820D2D28;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d2d28
	if (ctx.cr6.eq) goto loc_820D2D28;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x820d2d2c
	goto loc_820D2D2C;
loc_820D2D20:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d2d40
	goto loc_820D2D40;
loc_820D2D28:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D2D2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d2d40
	if (ctx.cr6.eq) goto loc_820D2D40;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820D2D40:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d2d98
	if (!ctx.cr6.eq) goto loc_820D2D98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x823052d8
	ctx.lr = 0x820D2D58;
	sub_823052D8(ctx, base);
	// lwz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820d2d90
	if (ctx.cr6.eq) goto loc_820D2D90;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d2d78
	if (ctx.cr6.lt) goto loc_820D2D78;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x820d2d84
	goto loc_820D2D84;
loc_820D2D78:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r30,236
	ctx.r11.s64 = ctx.r30.s64 * 236;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820D2D84:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,336(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// bl 0x821e2bc0
	ctx.lr = 0x820D2D90;
	sub_821E2BC0(ctx, base);
loc_820D2D90:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823051a8
	ctx.lr = 0x820D2D98;
	sub_823051A8(ctx, base);
loc_820D2D98:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2DB0;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2c9c
	if (!ctx.cr6.eq) goto loc_820D2C9C;
loc_820D2DBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2DC4"))) PPC_WEAK_FUNC(sub_820D2DC4);
PPC_FUNC_IMPL(__imp__sub_820D2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2DC8"))) PPC_WEAK_FUNC(sub_820D2DC8);
PPC_FUNC_IMPL(__imp__sub_820D2DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820D2DD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2DF4;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2f34
	if (ctx.cr6.eq) goto loc_820D2F34;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r28,r11,4536
	ctx.r28.s64 = ctx.r11.s64 + 4536;
	// addi r27,r10,28656
	ctx.r27.s64 = ctx.r10.s64 + 28656;
loc_820D2E14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2E20;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2f10
	if (ctx.cr6.eq) goto loc_820D2F10;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// or r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820d2f10
	if (ctx.cr6.eq) goto loc_820D2F10;
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d2e50
	if (ctx.cr6.eq) goto loc_820D2E50;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x820d2e54
	goto loc_820D2E54;
loc_820D2E50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D2E54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d2e64
	if (ctx.cr6.eq) goto loc_820D2E64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d2ea4
	if (ctx.cr6.lt) goto loc_820D2EA4;
loc_820D2E64:
	// lhz r9,240(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 240);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820d2e98
	if (!ctx.cr6.lt) goto loc_820D2E98;
	// lwz r11,236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d2ea0
	if (ctx.cr6.eq) goto loc_820D2EA0;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d2ea0
	if (ctx.cr6.eq) goto loc_820D2EA0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x820d2ea4
	goto loc_820D2EA4;
loc_820D2E98:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d2eb8
	goto loc_820D2EB8;
loc_820D2EA0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D2EA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d2eb8
	if (ctx.cr6.eq) goto loc_820D2EB8;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820D2EB8:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d2f10
	if (!ctx.cr6.eq) goto loc_820D2F10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x823052d8
	ctx.lr = 0x820D2ED0;
	sub_823052D8(ctx, base);
	// lwz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820d2f08
	if (ctx.cr6.eq) goto loc_820D2F08;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d2ef0
	if (ctx.cr6.lt) goto loc_820D2EF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x820d2efc
	goto loc_820D2EFC;
loc_820D2EF0:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r30,236
	ctx.r11.s64 = ctx.r30.s64 * 236;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820D2EFC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,336(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// bl 0x821e2bc0
	ctx.lr = 0x820D2F08;
	sub_821E2BC0(ctx, base);
loc_820D2F08:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823051a8
	ctx.lr = 0x820D2F10;
	sub_823051A8(ctx, base);
loc_820D2F10:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2F28;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2e14
	if (!ctx.cr6.eq) goto loc_820D2E14;
loc_820D2F34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D2F3C"))) PPC_WEAK_FUNC(sub_820D2F3C);
PPC_FUNC_IMPL(__imp__sub_820D2F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2F40"))) PPC_WEAK_FUNC(sub_820D2F40);
PPC_FUNC_IMPL(__imp__sub_820D2F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D2F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D2F6C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3034
	if (ctx.cr6.eq) goto loc_820D3034;
loc_820D2F78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D2F84;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3014
	if (ctx.cr6.eq) goto loc_820D3014;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820d3014
	if (ctx.cr6.eq) goto loc_820D3014;
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d2fb4
	if (ctx.cr6.eq) goto loc_820D2FB4;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// b 0x820d2fb8
	goto loc_820D2FB8;
loc_820D2FB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D2FB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d2fd0
	if (ctx.cr6.eq) goto loc_820D2FD0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d2fd0
	if (!ctx.cr6.lt) goto loc_820D2FD0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x820d3000
	goto loc_820D3000;
loc_820D2FD0:
	// lhz r9,240(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 240);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820d3014
	if (!ctx.cr6.lt) goto loc_820D3014;
	// lwz r11,236(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3000
	if (ctx.cr6.eq) goto loc_820D3000;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d3000
	if (ctx.cr6.eq) goto loc_820D3000;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_820D3000:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3014
	if (ctx.cr6.eq) goto loc_820D3014;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
loc_820D3014:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D3028;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d2f78
	if (!ctx.cr6.eq) goto loc_820D2F78;
loc_820D3034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D303C"))) PPC_WEAK_FUNC(sub_820D303C);
PPC_FUNC_IMPL(__imp__sub_820D303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3040"))) PPC_WEAK_FUNC(sub_820D3040);
PPC_FUNC_IMPL(__imp__sub_820D3040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D3048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D306C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3134
	if (ctx.cr6.eq) goto loc_820D3134;
loc_820D3078:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D3084;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3114
	if (ctx.cr6.eq) goto loc_820D3114;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820d3114
	if (ctx.cr6.eq) goto loc_820D3114;
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d30b4
	if (ctx.cr6.eq) goto loc_820D30B4;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// b 0x820d30b8
	goto loc_820D30B8;
loc_820D30B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D30B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d30d0
	if (ctx.cr6.eq) goto loc_820D30D0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d30d0
	if (!ctx.cr6.lt) goto loc_820D30D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x820d3100
	goto loc_820D3100;
loc_820D30D0:
	// lhz r9,240(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 240);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820d3114
	if (!ctx.cr6.lt) goto loc_820D3114;
	// lwz r11,236(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3100
	if (ctx.cr6.eq) goto loc_820D3100;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d3100
	if (ctx.cr6.eq) goto loc_820D3100;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_820D3100:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3114
	if (ctx.cr6.eq) goto loc_820D3114;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
loc_820D3114:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D3128;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d3078
	if (!ctx.cr6.eq) goto loc_820D3078;
loc_820D3134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D313C"))) PPC_WEAK_FUNC(sub_820D313C);
PPC_FUNC_IMPL(__imp__sub_820D313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3140"))) PPC_WEAK_FUNC(sub_820D3140);
PPC_FUNC_IMPL(__imp__sub_820D3140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820D3148;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D316C;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d32f4
	if (ctx.cr6.eq) goto loc_820D32F4;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r25,r10,4536
	ctx.r25.s64 = ctx.r10.s64 + 4536;
	// addi r26,r11,28656
	ctx.r26.s64 = ctx.r11.s64 + 28656;
loc_820D318C:
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d31a8
	if (ctx.cr6.eq) goto loc_820D31A8;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x820d31ac
	goto loc_820D31AC;
loc_820D31A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D31AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d31dc
	if (ctx.cr6.eq) goto loc_820D31DC;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d31dc
	if (!ctx.cr6.lt) goto loc_820D31DC;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d32d0
	if (!ctx.cr6.lt) goto loc_820D32D0;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r27,236
	ctx.r11.s64 = ctx.r27.s64 * 236;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820d3238
	goto loc_820D3238;
loc_820D31DC:
	// lhz r8,240(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 240);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820d32d0
	if (!ctx.cr6.lt) goto loc_820D32D0;
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d3200
	if (!ctx.cr6.eq) goto loc_820D3200;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d3238
	goto loc_820D3238;
loc_820D3200:
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d3214
	if (!ctx.cr6.eq) goto loc_820D3214;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d3238
	goto loc_820D3238;
loc_820D3214:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3238
	if (ctx.cr6.eq) goto loc_820D3238;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d3238
	if (!ctx.cr6.gt) goto loc_820D3238;
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
loc_820D3238:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d32d0
	if (ctx.cr6.eq) goto loc_820D32D0;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// or r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// bl 0x823052d8
	ctx.lr = 0x820D3258;
	sub_823052D8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d32c8
	if (ctx.cr6.eq) goto loc_820D32C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D3274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d32c8
	if (ctx.cr6.eq) goto loc_820D32C8;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d3290
	if (ctx.cr6.lt) goto loc_820D3290;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820d329c
	goto loc_820D329C;
loc_820D3290:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r29,236
	ctx.r11.s64 = ctx.r29.s64 * 236;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820D329C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,336(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 336);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D32B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x821e2bc0
	ctx.lr = 0x820D32C8;
	sub_821E2BC0(ctx, base);
loc_820D32C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823051a8
	ctx.lr = 0x820D32D0;
	sub_823051A8(ctx, base);
loc_820D32D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82085870
	ctx.lr = 0x820D32E8;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d318c
	if (!ctx.cr6.eq) goto loc_820D318C;
loc_820D32F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D32FC"))) PPC_WEAK_FUNC(sub_820D32FC);
PPC_FUNC_IMPL(__imp__sub_820D32FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3300"))) PPC_WEAK_FUNC(sub_820D3300);
PPC_FUNC_IMPL(__imp__sub_820D3300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820D3308;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D332C;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d34d0
	if (ctx.cr6.eq) goto loc_820D34D0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r26,r11,4536
	ctx.r26.s64 = ctx.r11.s64 + 4536;
	// addi r25,r10,28656
	ctx.r25.s64 = ctx.r10.s64 + 28656;
loc_820D334C:
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3368
	if (ctx.cr6.eq) goto loc_820D3368;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x820d336c
	goto loc_820D336C;
loc_820D3368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D336C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d339c
	if (ctx.cr6.eq) goto loc_820D339C;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d339c
	if (!ctx.cr6.lt) goto loc_820D339C;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d34ac
	if (!ctx.cr6.lt) goto loc_820D34AC;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r27,236
	ctx.r11.s64 = ctx.r27.s64 * 236;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820d33f8
	goto loc_820D33F8;
loc_820D339C:
	// lhz r8,240(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 240);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820d34ac
	if (!ctx.cr6.lt) goto loc_820D34AC;
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d33c0
	if (!ctx.cr6.eq) goto loc_820D33C0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d33f8
	goto loc_820D33F8;
loc_820D33C0:
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d33d4
	if (!ctx.cr6.eq) goto loc_820D33D4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d33f8
	goto loc_820D33F8;
loc_820D33D4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d33f8
	if (ctx.cr6.eq) goto loc_820D33F8;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d33f8
	if (!ctx.cr6.gt) goto loc_820D33F8;
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
loc_820D33F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d34ac
	if (ctx.cr6.eq) goto loc_820D34AC;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// andc r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r21.u64;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820d3428
	if (ctx.cr6.eq) goto loc_820D3428;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3428
	if (ctx.cr6.eq) goto loc_820D3428;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820D3428:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x823052d8
	ctx.lr = 0x820D3434;
	sub_823052D8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d34a4
	if (ctx.cr6.eq) goto loc_820D34A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D3450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d34a4
	if (ctx.cr6.eq) goto loc_820D34A4;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d346c
	if (ctx.cr6.lt) goto loc_820D346C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820d3478
	goto loc_820D3478;
loc_820D346C:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r29,236
	ctx.r11.s64 = ctx.r29.s64 * 236;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820D3478:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,336(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 336);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D3490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x821e2bc0
	ctx.lr = 0x820D34A4;
	sub_821E2BC0(ctx, base);
loc_820D34A4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823051a8
	ctx.lr = 0x820D34AC;
	sub_823051A8(ctx, base);
loc_820D34AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82085870
	ctx.lr = 0x820D34C4;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d334c
	if (!ctx.cr6.eq) goto loc_820D334C;
loc_820D34D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D34D8"))) PPC_WEAK_FUNC(sub_820D34D8);
PPC_FUNC_IMPL(__imp__sub_820D34D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820D34E0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D3504;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d36a8
	if (ctx.cr6.eq) goto loc_820D36A8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r26,r11,4536
	ctx.r26.s64 = ctx.r11.s64 + 4536;
	// addi r25,r10,28656
	ctx.r25.s64 = ctx.r10.s64 + 28656;
loc_820D3524:
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3540
	if (ctx.cr6.eq) goto loc_820D3540;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x820d3544
	goto loc_820D3544;
loc_820D3540:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D3544:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3574
	if (ctx.cr6.eq) goto loc_820D3574;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d3574
	if (!ctx.cr6.lt) goto loc_820D3574;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d3684
	if (!ctx.cr6.lt) goto loc_820D3684;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r27,236
	ctx.r11.s64 = ctx.r27.s64 * 236;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820d35d0
	goto loc_820D35D0;
loc_820D3574:
	// lhz r8,240(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 240);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820d3684
	if (!ctx.cr6.lt) goto loc_820D3684;
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d3598
	if (!ctx.cr6.eq) goto loc_820D3598;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d35d0
	goto loc_820D35D0;
loc_820D3598:
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d35ac
	if (!ctx.cr6.eq) goto loc_820D35AC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d35d0
	goto loc_820D35D0;
loc_820D35AC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d35d0
	if (ctx.cr6.eq) goto loc_820D35D0;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d35d0
	if (!ctx.cr6.gt) goto loc_820D35D0;
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
loc_820D35D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d3684
	if (ctx.cr6.eq) goto loc_820D3684;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// andc r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r21.u64;
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820d3600
	if (ctx.cr6.eq) goto loc_820D3600;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3600
	if (ctx.cr6.eq) goto loc_820D3600;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820D3600:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x823052d8
	ctx.lr = 0x820D360C;
	sub_823052D8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d367c
	if (ctx.cr6.eq) goto loc_820D367C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D3628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d367c
	if (ctx.cr6.eq) goto loc_820D367C;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d3644
	if (ctx.cr6.lt) goto loc_820D3644;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820d3650
	goto loc_820D3650;
loc_820D3644:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r11,r29,236
	ctx.r11.s64 = ctx.r29.s64 * 236;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820D3650:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,336(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 336);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D3668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x821e2bc0
	ctx.lr = 0x820D367C;
	sub_821E2BC0(ctx, base);
loc_820D367C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823051a8
	ctx.lr = 0x820D3684;
	sub_823051A8(ctx, base);
loc_820D3684:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82085870
	ctx.lr = 0x820D369C;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d3524
	if (!ctx.cr6.eq) goto loc_820D3524;
loc_820D36A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D36B0"))) PPC_WEAK_FUNC(sub_820D36B0);
PPC_FUNC_IMPL(__imp__sub_820D36B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D36B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D36DC;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3728
	if (ctx.cr6.eq) goto loc_820D3728;
loc_820D36E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D36F4;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3708
	if (ctx.cr6.eq) goto loc_820D3708;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// andc r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r28.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_820D3708:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D371C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d36e8
	if (!ctx.cr6.eq) goto loc_820D36E8;
loc_820D3728:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D3730"))) PPC_WEAK_FUNC(sub_820D3730);
PPC_FUNC_IMPL(__imp__sub_820D3730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D3738;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D375C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3824
	if (ctx.cr6.eq) goto loc_820D3824;
loc_820D3768:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D3774;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3804
	if (ctx.cr6.eq) goto loc_820D3804;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// andc r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r28.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820d3804
	if (ctx.cr6.eq) goto loc_820D3804;
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d37a4
	if (ctx.cr6.eq) goto loc_820D37A4;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// b 0x820d37a8
	goto loc_820D37A8;
loc_820D37A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D37A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d37c0
	if (ctx.cr6.eq) goto loc_820D37C0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d37c0
	if (!ctx.cr6.lt) goto loc_820D37C0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x820d37f0
	goto loc_820D37F0;
loc_820D37C0:
	// lhz r9,240(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 240);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820d3804
	if (!ctx.cr6.lt) goto loc_820D3804;
	// lwz r11,236(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d37f0
	if (ctx.cr6.eq) goto loc_820D37F0;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d37f0
	if (ctx.cr6.eq) goto loc_820D37F0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_820D37F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3804
	if (ctx.cr6.eq) goto loc_820D3804;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
loc_820D3804:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D3818;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d3768
	if (!ctx.cr6.eq) goto loc_820D3768;
loc_820D3824:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D382C"))) PPC_WEAK_FUNC(sub_820D382C);
PPC_FUNC_IMPL(__imp__sub_820D382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3830"))) PPC_WEAK_FUNC(sub_820D3830);
PPC_FUNC_IMPL(__imp__sub_820D3830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D3838;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D385C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3924
	if (ctx.cr6.eq) goto loc_820D3924;
loc_820D3868:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821dfbc8
	ctx.lr = 0x820D3874;
	sub_821DFBC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3904
	if (ctx.cr6.eq) goto loc_820D3904;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// andc r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r28.u64;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820d3904
	if (ctx.cr6.eq) goto loc_820D3904;
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d38a4
	if (ctx.cr6.eq) goto loc_820D38A4;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// b 0x820d38a8
	goto loc_820D38A8;
loc_820D38A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D38A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d38c0
	if (ctx.cr6.eq) goto loc_820D38C0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820d38c0
	if (!ctx.cr6.lt) goto loc_820D38C0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x820d38f0
	goto loc_820D38F0;
loc_820D38C0:
	// lhz r9,240(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 240);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820d3904
	if (!ctx.cr6.lt) goto loc_820D3904;
	// lwz r11,236(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d38f0
	if (ctx.cr6.eq) goto loc_820D38F0;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d38f0
	if (ctx.cr6.eq) goto loc_820D38F0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_820D38F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3904
	if (ctx.cr6.eq) goto loc_820D3904;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
loc_820D3904:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D3918;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d3868
	if (!ctx.cr6.eq) goto loc_820D3868;
loc_820D3924:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D392C"))) PPC_WEAK_FUNC(sub_820D392C);
PPC_FUNC_IMPL(__imp__sub_820D392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3930"))) PPC_WEAK_FUNC(sub_820D3930);
PPC_FUNC_IMPL(__imp__sub_820D3930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D3938;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D3960;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d39c4
	if (ctx.cr6.eq) goto loc_820D39C4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r29,32640
	ctx.r29.s64 = 2139095040;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820D3978:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d39a4
	if (ctx.cr6.eq) goto loc_820D39A4;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x820d39a4
	if (!ctx.cr6.gt) goto loc_820D39A4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820d39a4
	if (ctx.cr6.eq) goto loc_820D39A4;
	// stfs f31,916(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 916, temp.u32);
loc_820D39A4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D39BC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d3978
	if (!ctx.cr6.eq) goto loc_820D3978;
loc_820D39C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D39D4"))) PPC_WEAK_FUNC(sub_820D39D4);
PPC_FUNC_IMPL(__imp__sub_820D39D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D39D8"))) PPC_WEAK_FUNC(sub_820D39D8);
PPC_FUNC_IMPL(__imp__sub_820D39D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D39E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D3A04:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d3a58
	if (!ctx.cr6.eq) goto loc_820D3A58;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d3acc
	if (!ctx.cr6.eq) goto loc_820D3ACC;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D3A1C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d3a28
	if (!ctx.cr6.eq) goto loc_820D3A28;
	// bl 0x821b3000
	ctx.lr = 0x820D3A28;
	sub_821B3000(ctx, base);
loc_820D3A28:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d3a50
	if (ctx.cr6.eq) goto loc_820D3A50;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3a50
	if (ctx.cr6.eq) goto loc_820D3A50;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d3a74
	goto loc_820D3A74;
loc_820D3A50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d3a74
	goto loc_820D3A74;
loc_820D3A58:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d3a84
	if (!ctx.cr6.eq) goto loc_820D3A84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3acc
	if (ctx.cr6.eq) goto loc_820D3ACC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d3acc
	if (!ctx.cr6.eq) goto loc_820D3ACC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D3A74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3aa8
	if (ctx.cr6.eq) goto loc_820D3AA8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d3aa8
	goto loc_820D3AA8;
loc_820D3A84:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d3a94
	if (!ctx.cr6.eq) goto loc_820D3A94;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d3aa8
	goto loc_820D3AA8;
loc_820D3A94:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D3AA8;
	sub_820F3178(ctx, base);
loc_820D3AA8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3acc
	if (ctx.cr6.eq) goto loc_820D3ACC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3a04
	if (ctx.cr6.eq) goto loc_820D3A04;
	// lfs f1,916(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D3ACC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D3AE0"))) PPC_WEAK_FUNC(sub_820D3AE0);
PPC_FUNC_IMPL(__imp__sub_820D3AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D3AE8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D3B10;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3b84
	if (ctx.cr6.eq) goto loc_820D3B84;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820D3B28:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3b64
	if (ctx.cr6.eq) goto loc_820D3B64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820d3b48
	if (ctx.cr6.gt) goto loc_820D3B48;
	// stfs f30,908(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 908, temp.u32);
	// b 0x820d3b4c
	goto loc_820D3B4C;
loc_820D3B48:
	// stfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 908, temp.u32);
loc_820D3B4C:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820d3b60
	if (ctx.cr6.gt) goto loc_820D3B60;
	// stfs f30,912(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 912, temp.u32);
	// b 0x820d3b64
	goto loc_820D3B64;
loc_820D3B60:
	// stfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 912, temp.u32);
loc_820D3B64:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D3B7C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d3b28
	if (!ctx.cr6.eq) goto loc_820D3B28;
loc_820D3B84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D3B94"))) PPC_WEAK_FUNC(sub_820D3B94);
PPC_FUNC_IMPL(__imp__sub_820D3B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3B98"))) PPC_WEAK_FUNC(sub_820D3B98);
PPC_FUNC_IMPL(__imp__sub_820D3B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D3BA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r27,r10,6
	ctx.r27.u64 = ctx.r10.u64 | 6;
loc_820D3BC8:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820d3c1c
	if (!ctx.cr6.eq) goto loc_820D3C1C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d3c98
	if (!ctx.cr6.eq) goto loc_820D3C98;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D3BE0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d3bec
	if (!ctx.cr6.eq) goto loc_820D3BEC;
	// bl 0x821b3000
	ctx.lr = 0x820D3BEC;
	sub_821B3000(ctx, base);
loc_820D3BEC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d3c14
	if (ctx.cr6.eq) goto loc_820D3C14;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3c14
	if (ctx.cr6.eq) goto loc_820D3C14;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d3c38
	goto loc_820D3C38;
loc_820D3C14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d3c38
	goto loc_820D3C38;
loc_820D3C1C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d3c48
	if (!ctx.cr6.eq) goto loc_820D3C48;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3c98
	if (ctx.cr6.eq) goto loc_820D3C98;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d3c98
	if (!ctx.cr6.eq) goto loc_820D3C98;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D3C38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d3c6c
	if (ctx.cr6.eq) goto loc_820D3C6C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d3c6c
	goto loc_820D3C6C;
loc_820D3C48:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d3c58
	if (!ctx.cr6.eq) goto loc_820D3C58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d3c6c
	goto loc_820D3C6C;
loc_820D3C58:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D3C6C;
	sub_820F3178(ctx, base);
loc_820D3C6C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3c98
	if (ctx.cr6.eq) goto loc_820D3C98;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3bc8
	if (ctx.cr6.eq) goto loc_820D3BC8;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f13,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// b 0x820d3bc8
	goto loc_820D3BC8;
loc_820D3C98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D3CA0"))) PPC_WEAK_FUNC(sub_820D3CA0);
PPC_FUNC_IMPL(__imp__sub_820D3CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lwz r3,1792(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1792);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D3CB0"))) PPC_WEAK_FUNC(sub_820D3CB0);
PPC_FUNC_IMPL(__imp__sub_820D3CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lwz r11,1804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1804);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,1804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D3CC8"))) PPC_WEAK_FUNC(sub_820D3CC8);
PPC_FUNC_IMPL(__imp__sub_820D3CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r4,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D3CDC"))) PPC_WEAK_FUNC(sub_820D3CDC);
PPC_FUNC_IMPL(__imp__sub_820D3CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3CE0"))) PPC_WEAK_FUNC(sub_820D3CE0);
PPC_FUNC_IMPL(__imp__sub_820D3CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f1,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f2,200(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// stfs f3,204(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f13,216(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f12,220(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D3D18"))) PPC_WEAK_FUNC(sub_820D3D18);
PPC_FUNC_IMPL(__imp__sub_820D3D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f1,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f2,168(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D3D44"))) PPC_WEAK_FUNC(sub_820D3D44);
PPC_FUNC_IMPL(__imp__sub_820D3D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3D48"))) PPC_WEAK_FUNC(sub_820D3D48);
PPC_FUNC_IMPL(__imp__sub_820D3D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3d8c
	if (ctx.cr6.eq) goto loc_820D3D8C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// bl 0x820d6940
	ctx.lr = 0x820D3D74;
	sub_820D6940(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820D3D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D3D8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D3DA0"))) PPC_WEAK_FUNC(sub_820D3DA0);
PPC_FUNC_IMPL(__imp__sub_820D3DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820D3DA8;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// ori r26,r10,6
	ctx.r26.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820d3e08
	if (!ctx.cr6.eq) goto loc_820D3E08;
	// bl 0x820ddca8
	ctx.lr = 0x820D3DE8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3dfc
	if (ctx.cr6.eq) goto loc_820D3DFC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x820d3e40
	goto loc_820D3E40;
loc_820D3DFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x820d3e40
	goto loc_820D3E40;
loc_820D3E08:
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820d3e18
	if (!ctx.cr6.eq) goto loc_820D3E18;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x820d3e40
	goto loc_820D3E40;
loc_820D3E18:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820d3e28
	if (!ctx.cr6.eq) goto loc_820D3E28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d3e3c
	goto loc_820D3E3C;
loc_820D3E28:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820D3E3C;
	sub_820F3178(ctx, base);
loc_820D3E3C:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_820D3E40:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820d3e5c
	if (!ctx.cr6.eq) goto loc_820D3E5C;
	// bl 0x820ddca8
	ctx.lr = 0x820D3E4C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3e64
	if (ctx.cr6.eq) goto loc_820D3E64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d3e98
	goto loc_820D3E98;
loc_820D3E5C:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820d3e6c
	if (!ctx.cr6.eq) goto loc_820D3E6C;
loc_820D3E64:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820d3e98
	goto loc_820D3E98;
loc_820D3E6C:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x820d3e7c
	if (!ctx.cr6.eq) goto loc_820D3E7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d3e94
	goto loc_820D3E94;
loc_820D3E7C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D3E94;
	sub_820F3178(ctx, base);
loc_820D3E94:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820D3E98:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820d3ea8
	if (ctx.cr6.eq) goto loc_820D3EA8;
	// lwz r28,24(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// b 0x820d3eac
	goto loc_820D3EAC;
loc_820D3EA8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_820D3EAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3ebc
	if (ctx.cr6.eq) goto loc_820D3EBC;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x820d3ec0
	goto loc_820D3EC0;
loc_820D3EBC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820D3EC0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820d3edc
	if (!ctx.cr6.eq) goto loc_820D3EDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_820D3EDC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f31,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f30,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lwz r26,12(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r25,8(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// bl 0x823054d0
	ctx.lr = 0x820D3F64;
	sub_823054D0(ctx, base);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r27,4(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r26,8(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// bl 0x823054d0
	ctx.lr = 0x820D3FDC;
	sub_823054D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x82082030
	ctx.lr = 0x820D3FF0;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4014
	if (ctx.cr6.eq) goto loc_820D4014;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82213650
	ctx.lr = 0x820D400C;
	sub_82213650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820d4018
	goto loc_820D4018;
loc_820D4014:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D4018:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820d68c8
	ctx.lr = 0x820D402C;
	sub_820D68C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4040"))) PPC_WEAK_FUNC(sub_820D4040);
PPC_FUNC_IMPL(__imp__sub_820D4040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820D4048;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 | 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820d40a8
	if (!ctx.cr6.eq) goto loc_820D40A8;
	// bl 0x820ddca8
	ctx.lr = 0x820D4088;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d409c
	if (ctx.cr6.eq) goto loc_820D409C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x820d40e0
	goto loc_820D40E0;
loc_820D409C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x820d40e0
	goto loc_820D40E0;
loc_820D40A8:
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d40b8
	if (!ctx.cr6.eq) goto loc_820D40B8;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x820d40e0
	goto loc_820D40E0;
loc_820D40B8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820d40c8
	if (!ctx.cr6.eq) goto loc_820D40C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d40dc
	goto loc_820D40DC;
loc_820D40C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820D40DC;
	sub_820F3178(ctx, base);
loc_820D40DC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820D40E0:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820d40fc
	if (!ctx.cr6.eq) goto loc_820D40FC;
	// bl 0x820ddca8
	ctx.lr = 0x820D40EC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4104
	if (ctx.cr6.eq) goto loc_820D4104;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d4138
	goto loc_820D4138;
loc_820D40FC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d410c
	if (!ctx.cr6.eq) goto loc_820D410C;
loc_820D4104:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820d4138
	goto loc_820D4138;
loc_820D410C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d411c
	if (!ctx.cr6.eq) goto loc_820D411C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d4134
	goto loc_820D4134;
loc_820D411C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D4134;
	sub_820F3178(ctx, base);
loc_820D4134:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820D4138:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820d4148
	if (ctx.cr6.eq) goto loc_820D4148;
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// b 0x820d414c
	goto loc_820D414C;
loc_820D4148:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820D414C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d415c
	if (ctx.cr6.eq) goto loc_820D415C;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x820d4160
	goto loc_820D4160;
loc_820D415C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D4160:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820d417c
	if (!ctx.cr6.eq) goto loc_820D417C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_820D417C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lfs f31,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lwz r29,32(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lfs f30,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lwz r28,12(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r27,20(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r25,8(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// bl 0x823054d0
	ctx.lr = 0x820D4204;
	sub_823054D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d423c
	if (!ctx.cr6.eq) goto loc_820D423C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82082030
	ctx.lr = 0x820D4220;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d42ec
	if (ctx.cr6.eq) goto loc_820D42EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82214478
	ctx.lr = 0x820D4234;
	sub_82214478(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820d42f0
	goto loc_820D42F0;
loc_820D423C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r6,24(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lwz r5,28(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r29,12(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r28,16(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r27,20(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r26,8(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r4,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// bl 0x823054d0
	ctx.lr = 0x820D42B4;
	sub_823054D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82082030
	ctx.lr = 0x820D42C8;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d42ec
	if (ctx.cr6.eq) goto loc_820D42EC;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82214570
	ctx.lr = 0x820D42E4;
	sub_82214570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820d42f0
	goto loc_820D42F0;
loc_820D42EC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D42F0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820d68c8
	ctx.lr = 0x820D4304;
	sub_820D68C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4318"))) PPC_WEAK_FUNC(sub_820D4318);
PPC_FUNC_IMPL(__imp__sub_820D4318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820D4320;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 | 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// ori r26,r10,6
	ctx.r26.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820d4374
	if (!ctx.cr6.eq) goto loc_820D4374;
	// bl 0x820ddca8
	ctx.lr = 0x820D4350;
	sub_820DDCA8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4368
	if (ctx.cr6.eq) goto loc_820D4368;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x820d43b0
	goto loc_820D43B0;
loc_820D4368:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x820d43b0
	goto loc_820D43B0;
loc_820D4374:
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne cr6,0x820d4388
	if (!ctx.cr6.eq) goto loc_820D4388;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x820d43b0
	goto loc_820D43B0;
loc_820D4388:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820d4398
	if (!ctx.cr6.eq) goto loc_820D4398;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x820d43ac
	goto loc_820D43AC;
loc_820D4398:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820D43AC;
	sub_820F3178(ctx, base);
loc_820D43AC:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820D43B0:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820d43cc
	if (!ctx.cr6.eq) goto loc_820D43CC;
	// bl 0x820ddca8
	ctx.lr = 0x820D43BC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d43d4
	if (ctx.cr6.eq) goto loc_820D43D4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d4408
	goto loc_820D4408;
loc_820D43CC:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820d43dc
	if (!ctx.cr6.eq) goto loc_820D43DC;
loc_820D43D4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x820d4408
	goto loc_820D4408;
loc_820D43DC:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d43ec
	if (!ctx.cr6.eq) goto loc_820D43EC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x820d4404
	goto loc_820D4404;
loc_820D43EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D4404;
	sub_820F3178(ctx, base);
loc_820D4404:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820D4408:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820d4418
	if (ctx.cr6.eq) goto loc_820D4418;
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// b 0x820d441c
	goto loc_820D441C;
loc_820D4418:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_820D441C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d442c
	if (ctx.cr6.eq) goto loc_820D442C;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x820d4430
	goto loc_820D4430;
loc_820D442C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820D4430:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820d4444
	if (!ctx.cr6.eq) goto loc_820D4444;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820D4444:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,4536
	ctx.r28.s64 = ctx.r11.s64 + 4536;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,56
	ctx.r3.s64 = 56;
	// bne cr6,0x820d44e4
	if (!ctx.cr6.eq) goto loc_820D44E4;
	// bl 0x82082030
	ctx.lr = 0x820D4468;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4568
	if (ctx.cr6.eq) goto loc_820D4568;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// sth r27,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r27.u16);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stb r27,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r27.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r10,-23400
	ctx.r8.s64 = ctx.r10.s64 + -23400;
	// addi r7,r28,400
	ctx.r7.s64 = ctx.r28.s64 + 400;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82257540
	ctx.lr = 0x820D44E0;
	sub_82257540(ctx, base);
	// b 0x820d456c
	goto loc_820D456C;
loc_820D44E4:
	// bl 0x82082030
	ctx.lr = 0x820D44E8;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4568
	if (ctx.cr6.eq) goto loc_820D4568;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// sth r27,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r27.u16);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// addi r7,r8,-23400
	ctx.r7.s64 = ctx.r8.s64 + -23400;
	// stb r27,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r27.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// b 0x820d456c
	goto loc_820D456C;
loc_820D4568:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820D456C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820d68c8
	ctx.lr = 0x820D457C;
	sub_820D68C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4588"))) PPC_WEAK_FUNC(sub_820D4588);
PPC_FUNC_IMPL(__imp__sub_820D4588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D4590;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820d4664
	if (ctx.cr6.eq) goto loc_820D4664;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 | 1;
	// ori r29,r10,6
	ctx.r29.u64 = ctx.r10.u64 | 6;
loc_820D45BC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d45e8
	if (!ctx.cr6.eq) goto loc_820D45E8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d4664
	if (!ctx.cr6.eq) goto loc_820D4664;
	// bl 0x820ddca8
	ctx.lr = 0x820D45D0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d45e0
	if (ctx.cr6.eq) goto loc_820D45E0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d4604
	goto loc_820D4604;
loc_820D45E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d4604
	goto loc_820D4604;
loc_820D45E8:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820d4614
	if (!ctx.cr6.eq) goto loc_820D4614;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4664
	if (ctx.cr6.eq) goto loc_820D4664;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d4664
	if (!ctx.cr6.eq) goto loc_820D4664;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D4604:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4638
	if (ctx.cr6.eq) goto loc_820D4638;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d4638
	goto loc_820D4638;
loc_820D4614:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d4624
	if (!ctx.cr6.eq) goto loc_820D4624;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d4638
	goto loc_820D4638;
loc_820D4624:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D4638;
	sub_820F3178(ctx, base);
loc_820D4638:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4664
	if (ctx.cr6.eq) goto loc_820D4664;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d45bc
	if (ctx.cr6.eq) goto loc_820D45BC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,220
	ctx.r3.s64 = ctx.r11.s64 + 220;
	// bl 0x82108b08
	ctx.lr = 0x820D465C;
	sub_82108B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D4664:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4670"))) PPC_WEAK_FUNC(sub_820D4670);
PPC_FUNC_IMPL(__imp__sub_820D4670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// stfs f1,1776(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1776, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D4680"))) PPC_WEAK_FUNC(sub_820D4680);
PPC_FUNC_IMPL(__imp__sub_820D4680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D4688;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 | 1;
	// ori r29,r10,6
	ctx.r29.u64 = ctx.r10.u64 | 6;
loc_820D46A8:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d46d4
	if (!ctx.cr6.eq) goto loc_820D46D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d4748
	if (!ctx.cr6.eq) goto loc_820D4748;
	// bl 0x820ddca8
	ctx.lr = 0x820D46BC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d46cc
	if (ctx.cr6.eq) goto loc_820D46CC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d46f0
	goto loc_820D46F0;
loc_820D46CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d46f0
	goto loc_820D46F0;
loc_820D46D4:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820d4700
	if (!ctx.cr6.eq) goto loc_820D4700;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4748
	if (ctx.cr6.eq) goto loc_820D4748;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d4748
	if (!ctx.cr6.eq) goto loc_820D4748;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D46F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4724
	if (ctx.cr6.eq) goto loc_820D4724;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d4724
	goto loc_820D4724;
loc_820D4700:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d4710
	if (!ctx.cr6.eq) goto loc_820D4710;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d4724
	goto loc_820D4724;
loc_820D4710:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D4724;
	sub_820F3178(ctx, base);
loc_820D4724:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4748
	if (ctx.cr6.eq) goto loc_820D4748;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d46a8
	if (ctx.cr6.eq) goto loc_820D46A8;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D4748:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4754"))) PPC_WEAK_FUNC(sub_820D4754);
PPC_FUNC_IMPL(__imp__sub_820D4754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4758"))) PPC_WEAK_FUNC(sub_820D4758);
PPC_FUNC_IMPL(__imp__sub_820D4758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D4760;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4780;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d47d8
	if (ctx.cr6.eq) goto loc_820D47D8;
loc_820D4788:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d47b8
	if (ctx.cr6.eq) goto loc_820D47B8;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820d47a8
	if (ctx.cr6.lt) goto loc_820D47A8;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x820d47d8
	if (!ctx.cr6.eq) goto loc_820D47D8;
loc_820D47A8:
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r31,648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 648, ctx.r31.u32);
	// oris r9,r10,32772
	ctx.r9.u64 = ctx.r10.u64 | 2147745792;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
loc_820D47B8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D47D0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d4788
	if (!ctx.cr6.eq) goto loc_820D4788;
loc_820D47D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D47E0"))) PPC_WEAK_FUNC(sub_820D47E0);
PPC_FUNC_IMPL(__imp__sub_820D47E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D47E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_820D47FC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4810;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4850
	if (ctx.cr6.eq) goto loc_820D4850;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d47fc
	if (ctx.cr6.eq) goto loc_820D47FC;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d4850
	if (!ctx.cr6.lt) goto loc_820D4850;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mulli r11,r29,236
	ctx.r11.s64 = ctx.r29.s64 * 236;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820d4850
	if (ctx.cr0.eq) goto loc_820D4850;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D4850:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D485C"))) PPC_WEAK_FUNC(sub_820D485C);
PPC_FUNC_IMPL(__imp__sub_820D485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4860"))) PPC_WEAK_FUNC(sub_820D4860);
PPC_FUNC_IMPL(__imp__sub_820D4860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820D4868;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_820D488C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D48A0;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4954
	if (ctx.cr6.eq) goto loc_820D4954;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d488c
	if (ctx.cr6.eq) goto loc_820D488C;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d488c
	if (!ctx.cr6.lt) goto loc_820D488C;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mulli r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 * 236;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820d488c
	if (ctx.cr0.eq) goto loc_820D488C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820d48f4
	if (ctx.cr6.eq) goto loc_820D48F4;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
loc_820D48F4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820d4914
	if (ctx.cr6.eq) goto loc_820D4914;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
loc_820D4914:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820d4934
	if (ctx.cr6.eq) goto loc_820D4934;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// lwz r8,84(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
loc_820D4934:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820d4954
	if (ctx.cr6.eq) goto loc_820D4954;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r8,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
loc_820D4954:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D495C"))) PPC_WEAK_FUNC(sub_820D495C);
PPC_FUNC_IMPL(__imp__sub_820D495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4960"))) PPC_WEAK_FUNC(sub_820D4960);
PPC_FUNC_IMPL(__imp__sub_820D4960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D4968;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D498C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4a34
	if (ctx.cr6.eq) goto loc_820D4A34;
loc_820D4998:
	// lhz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4a10
	if (ctx.cr6.eq) goto loc_820D4A10;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d49b8
	if (ctx.cr6.eq) goto loc_820D49B8;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d49bc
	goto loc_820D49BC;
loc_820D49B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D49BC:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d4a10
	if (!ctx.cr6.lt) goto loc_820D4A10;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d4a10
	if (ctx.cr6.lt) goto loc_820D4A10;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4a10
	if (ctx.cr6.eq) goto loc_820D4A10;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4a10
	if (ctx.cr6.eq) goto loc_820D4A10;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4a10
	if (ctx.cr6.eq) goto loc_820D4A10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D4A10:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4A28;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d4998
	if (!ctx.cr6.eq) goto loc_820D4998;
loc_820D4A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4A3C"))) PPC_WEAK_FUNC(sub_820D4A3C);
PPC_FUNC_IMPL(__imp__sub_820D4A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4A40"))) PPC_WEAK_FUNC(sub_820D4A40);
PPC_FUNC_IMPL(__imp__sub_820D4A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D4A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4A68;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4af4
	if (ctx.cr6.eq) goto loc_820D4AF4;
loc_820D4A70:
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4ad4
	if (ctx.cr6.eq) goto loc_820D4AD4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d4a90
	if (ctx.cr6.eq) goto loc_820D4A90;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d4a94
	goto loc_820D4A94;
loc_820D4A90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D4A94:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d4ad4
	if (!ctx.cr6.lt) goto loc_820D4AD4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d4ad4
	if (ctx.cr6.lt) goto loc_820D4AD4;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4ad4
	if (ctx.cr6.eq) goto loc_820D4AD4;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4ad4
	if (ctx.cr6.eq) goto loc_820D4AD4;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d4b00
	if (!ctx.cr6.eq) goto loc_820D4B00;
loc_820D4AD4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4AEC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d4a70
	if (!ctx.cr6.eq) goto loc_820D4A70;
loc_820D4AF4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D4B00:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4B0C"))) PPC_WEAK_FUNC(sub_820D4B0C);
PPC_FUNC_IMPL(__imp__sub_820D4B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4B10"))) PPC_WEAK_FUNC(sub_820D4B10);
PPC_FUNC_IMPL(__imp__sub_820D4B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D4B18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4B3C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4bd8
	if (ctx.cr6.eq) goto loc_820D4BD8;
loc_820D4B48:
	// lhz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4bb4
	if (ctx.cr6.eq) goto loc_820D4BB4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d4b68
	if (ctx.cr6.eq) goto loc_820D4B68;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d4b6c
	goto loc_820D4B6C;
loc_820D4B68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D4B6C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d4bb4
	if (!ctx.cr6.lt) goto loc_820D4BB4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d4bb4
	if (ctx.cr6.lt) goto loc_820D4BB4;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4bb4
	if (ctx.cr6.eq) goto loc_820D4BB4;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4bb4
	if (ctx.cr6.eq) goto loc_820D4BB4;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4bb4
	if (ctx.cr6.eq) goto loc_820D4BB4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82215998
	ctx.lr = 0x820D4BB4;
	sub_82215998(ctx, base);
loc_820D4BB4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4BCC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d4b48
	if (!ctx.cr6.eq) goto loc_820D4B48;
loc_820D4BD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4BE0"))) PPC_WEAK_FUNC(sub_820D4BE0);
PPC_FUNC_IMPL(__imp__sub_820D4BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D4BE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4C0C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4cb0
	if (ctx.cr6.eq) goto loc_820D4CB0;
loc_820D4C18:
	// lhz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4c8c
	if (ctx.cr6.eq) goto loc_820D4C8C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d4c38
	if (ctx.cr6.eq) goto loc_820D4C38;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d4c3c
	goto loc_820D4C3C;
loc_820D4C38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D4C3C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d4c8c
	if (!ctx.cr6.lt) goto loc_820D4C8C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d4c8c
	if (ctx.cr6.lt) goto loc_820D4C8C;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4c8c
	if (ctx.cr6.eq) goto loc_820D4C8C;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4c8c
	if (ctx.cr6.eq) goto loc_820D4C8C;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d4c8c
	if (ctx.cr6.eq) goto loc_820D4C8C;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D4C8C;
	sub_8233E4E0(ctx, base);
loc_820D4C8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4CA4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d4c18
	if (!ctx.cr6.eq) goto loc_820D4C18;
loc_820D4CB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4CB8"))) PPC_WEAK_FUNC(sub_820D4CB8);
PPC_FUNC_IMPL(__imp__sub_820D4CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D4CC0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4CE8;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4d9c
	if (ctx.cr6.eq) goto loc_820D4D9C;
loc_820D4CF4:
	// lhz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4d78
	if (ctx.cr6.eq) goto loc_820D4D78;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d4d14
	if (ctx.cr6.eq) goto loc_820D4D14;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d4d18
	goto loc_820D4D18;
loc_820D4D14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D4D18:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d4d78
	if (!ctx.cr6.lt) goto loc_820D4D78;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d4d78
	if (ctx.cr6.lt) goto loc_820D4D78;
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4d78
	if (ctx.cr6.eq) goto loc_820D4D78;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4d78
	if (ctx.cr6.eq) goto loc_820D4D78;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4d78
	if (ctx.cr6.eq) goto loc_820D4D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82216110
	ctx.lr = 0x820D4D64;
	sub_82216110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D4D78:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4D90;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d4cf4
	if (!ctx.cr6.eq) goto loc_820D4CF4;
loc_820D4D9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4DA8"))) PPC_WEAK_FUNC(sub_820D4DA8);
PPC_FUNC_IMPL(__imp__sub_820D4DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D4DB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4DD0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4e5c
	if (ctx.cr6.eq) goto loc_820D4E5C;
loc_820D4DD8:
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4e3c
	if (ctx.cr6.eq) goto loc_820D4E3C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d4df8
	if (ctx.cr6.eq) goto loc_820D4DF8;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d4dfc
	goto loc_820D4DFC;
loc_820D4DF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D4DFC:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d4e3c
	if (!ctx.cr6.lt) goto loc_820D4E3C;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d4e3c
	if (ctx.cr6.lt) goto loc_820D4E3C;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4e3c
	if (ctx.cr6.eq) goto loc_820D4E3C;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4e3c
	if (ctx.cr6.eq) goto loc_820D4E3C;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d4e70
	if (!ctx.cr6.eq) goto loc_820D4E70;
loc_820D4E3C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4E54;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d4dd8
	if (!ctx.cr6.eq) goto loc_820D4DD8;
loc_820D4E5C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D4E70:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,31376
	ctx.r11.s64 = ctx.r10.s64 + 31376;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820d4e94
	if (!ctx.cr6.gt) goto loc_820D4E94;
	// lfs f13,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820d4e98
	if (ctx.cr6.lt) goto loc_820D4E98;
loc_820D4E94:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_820D4E98:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4EA4"))) PPC_WEAK_FUNC(sub_820D4EA4);
PPC_FUNC_IMPL(__imp__sub_820D4EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4EA8"))) PPC_WEAK_FUNC(sub_820D4EA8);
PPC_FUNC_IMPL(__imp__sub_820D4EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D4EB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4ED4;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4fcc
	if (ctx.cr6.eq) goto loc_820D4FCC;
loc_820D4EE0:
	// lhz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4fa8
	if (ctx.cr6.eq) goto loc_820D4FA8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d4f00
	if (ctx.cr6.eq) goto loc_820D4F00;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d4f04
	goto loc_820D4F04;
loc_820D4F00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D4F04:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d4fa8
	if (!ctx.cr6.lt) goto loc_820D4FA8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d4fa8
	if (ctx.cr6.lt) goto loc_820D4FA8;
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4fa8
	if (ctx.cr6.eq) goto loc_820D4FA8;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4fa8
	if (ctx.cr6.eq) goto loc_820D4FA8;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4fa8
	if (ctx.cr6.eq) goto loc_820D4FA8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820d4f9c
	if (ctx.cr6.eq) goto loc_820D4F9C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r8,r10,512
	ctx.r8.u64 = ctx.r10.u64 | 33554432;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r6,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r6.u32);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
	// lwz r5,36(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820D4F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820D4F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820d4fa8
	goto loc_820D4FA8;
loc_820D4F9C:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820D4FA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82085870
	ctx.lr = 0x820D4FC0;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d4ee0
	if (!ctx.cr6.eq) goto loc_820D4EE0;
loc_820D4FCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4FD4"))) PPC_WEAK_FUNC(sub_820D4FD4);
PPC_FUNC_IMPL(__imp__sub_820D4FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4FD8"))) PPC_WEAK_FUNC(sub_820D4FD8);
PPC_FUNC_IMPL(__imp__sub_820D4FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820D5004;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5034
	if (ctx.cr6.eq) goto loc_820D5034;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821dfae8
	ctx.lr = 0x820D5014;
	sub_821DFAE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5034
	if (ctx.cr6.eq) goto loc_820D5034;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_820D5034:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D504C"))) PPC_WEAK_FUNC(sub_820D504C);
PPC_FUNC_IMPL(__imp__sub_820D504C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5050"))) PPC_WEAK_FUNC(sub_820D5050);
PPC_FUNC_IMPL(__imp__sub_820D5050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D5058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D507C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5114
	if (ctx.cr6.eq) goto loc_820D5114;
loc_820D5088:
	// lhz r10,240(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d50f4
	if (ctx.cr6.eq) goto loc_820D50F4;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d50a8
	if (ctx.cr6.eq) goto loc_820D50A8;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d50ac
	goto loc_820D50AC;
loc_820D50A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D50AC:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d50f4
	if (!ctx.cr6.lt) goto loc_820D50F4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d50f4
	if (ctx.cr6.lt) goto loc_820D50F4;
	// lwz r10,236(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d50f4
	if (ctx.cr6.eq) goto loc_820D50F4;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d50f4
	if (ctx.cr6.eq) goto loc_820D50F4;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d50f4
	if (ctx.cr6.eq) goto loc_820D50F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821dfcd8
	ctx.lr = 0x820D50F4;
	sub_821DFCD8(ctx, base);
loc_820D50F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5108;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5088
	if (!ctx.cr6.eq) goto loc_820D5088;
loc_820D5114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D511C"))) PPC_WEAK_FUNC(sub_820D511C);
PPC_FUNC_IMPL(__imp__sub_820D511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5120"))) PPC_WEAK_FUNC(sub_820D5120);
PPC_FUNC_IMPL(__imp__sub_820D5120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D5128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D514C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d51d8
	if (ctx.cr6.eq) goto loc_820D51D8;
loc_820D5154:
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d51b8
	if (ctx.cr6.eq) goto loc_820D51B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d5174
	if (ctx.cr6.eq) goto loc_820D5174;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d5178
	goto loc_820D5178;
loc_820D5174:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D5178:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d51b8
	if (!ctx.cr6.lt) goto loc_820D51B8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d51b8
	if (ctx.cr6.lt) goto loc_820D51B8;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d51b8
	if (ctx.cr6.eq) goto loc_820D51B8;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d51b8
	if (ctx.cr6.eq) goto loc_820D51B8;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d51f8
	if (!ctx.cr6.eq) goto loc_820D51F8;
loc_820D51B8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D51D0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5154
	if (!ctx.cr6.eq) goto loc_820D5154;
loc_820D51D8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D51F8:
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,464(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lwz r8,468(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5218"))) PPC_WEAK_FUNC(sub_820D5218);
PPC_FUNC_IMPL(__imp__sub_820D5218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D5220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5244;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d52dc
	if (ctx.cr6.eq) goto loc_820D52DC;
loc_820D5250:
	// lhz r10,240(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d52bc
	if (ctx.cr6.eq) goto loc_820D52BC;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d5270
	if (ctx.cr6.eq) goto loc_820D5270;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d5274
	goto loc_820D5274;
loc_820D5270:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D5274:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d52bc
	if (!ctx.cr6.lt) goto loc_820D52BC;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d52bc
	if (ctx.cr6.lt) goto loc_820D52BC;
	// lwz r10,236(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d52bc
	if (ctx.cr6.eq) goto loc_820D52BC;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d52bc
	if (ctx.cr6.eq) goto loc_820D52BC;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d52bc
	if (ctx.cr6.eq) goto loc_820D52BC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821dfd58
	ctx.lr = 0x820D52BC;
	sub_821DFD58(ctx, base);
loc_820D52BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D52D0;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5250
	if (!ctx.cr6.eq) goto loc_820D5250;
loc_820D52DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D52E4"))) PPC_WEAK_FUNC(sub_820D52E4);
PPC_FUNC_IMPL(__imp__sub_820D52E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D52E8"))) PPC_WEAK_FUNC(sub_820D52E8);
PPC_FUNC_IMPL(__imp__sub_820D52E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D52F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5314;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d53a0
	if (ctx.cr6.eq) goto loc_820D53A0;
loc_820D531C:
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5380
	if (ctx.cr6.eq) goto loc_820D5380;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d533c
	if (ctx.cr6.eq) goto loc_820D533C;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d5340
	goto loc_820D5340;
loc_820D533C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D5340:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d5380
	if (!ctx.cr6.lt) goto loc_820D5380;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d5380
	if (ctx.cr6.lt) goto loc_820D5380;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5380
	if (ctx.cr6.eq) goto loc_820D5380;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d5380
	if (ctx.cr6.eq) goto loc_820D5380;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d53c0
	if (!ctx.cr6.eq) goto loc_820D53C0;
loc_820D5380:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5398;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d531c
	if (!ctx.cr6.eq) goto loc_820D531C;
loc_820D53A0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D53C0:
	// lwz r10,472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,476(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D53E0"))) PPC_WEAK_FUNC(sub_820D53E0);
PPC_FUNC_IMPL(__imp__sub_820D53E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D53E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5410;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5510
	if (ctx.cr6.eq) goto loc_820D5510;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820D5428:
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d54f0
	if (ctx.cr6.eq) goto loc_820D54F0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d5448
	if (ctx.cr6.eq) goto loc_820D5448;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d544c
	goto loc_820D544C;
loc_820D5448:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820D544C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d54f0
	if (!ctx.cr6.lt) goto loc_820D54F0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d54f0
	if (ctx.cr6.lt) goto loc_820D54F0;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d54f0
	if (ctx.cr6.eq) goto loc_820D54F0;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d54f0
	if (ctx.cr6.eq) goto loc_820D54F0;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d54f0
	if (ctx.cr6.eq) goto loc_820D54F0;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,508
	ctx.r10.s64 = ctx.r11.s64 + 508;
	// lfs f13,508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,508(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,512(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 512, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,516(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 516, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820d54f0
	if (ctx.cr6.eq) goto loc_820D54F0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820d54f0
	if (ctx.cr6.eq) goto loc_820D54F0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d54e8
	if (ctx.cr6.eq) goto loc_820D54E8;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
loc_820D54E8:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_820D54F0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5508;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5428
	if (!ctx.cr6.eq) goto loc_820D5428;
loc_820D5510:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D551C"))) PPC_WEAK_FUNC(sub_820D551C);
PPC_FUNC_IMPL(__imp__sub_820D551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5520"))) PPC_WEAK_FUNC(sub_820D5520);
PPC_FUNC_IMPL(__imp__sub_820D5520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D5528;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5550;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5650
	if (ctx.cr6.eq) goto loc_820D5650;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820D5568:
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5630
	if (ctx.cr6.eq) goto loc_820D5630;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d5588
	if (ctx.cr6.eq) goto loc_820D5588;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d558c
	goto loc_820D558C;
loc_820D5588:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820D558C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d5630
	if (!ctx.cr6.lt) goto loc_820D5630;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d5630
	if (ctx.cr6.lt) goto loc_820D5630;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5630
	if (ctx.cr6.eq) goto loc_820D5630;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d5630
	if (ctx.cr6.eq) goto loc_820D5630;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d5630
	if (ctx.cr6.eq) goto loc_820D5630;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,520
	ctx.r10.s64 = ctx.r11.s64 + 520;
	// lfs f13,520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,520(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 520, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,524(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,528(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820d5630
	if (ctx.cr6.eq) goto loc_820D5630;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820d5630
	if (ctx.cr6.eq) goto loc_820D5630;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d5628
	if (ctx.cr6.eq) goto loc_820D5628;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
loc_820D5628:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_820D5630:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5648;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5568
	if (!ctx.cr6.eq) goto loc_820D5568;
loc_820D5650:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D565C"))) PPC_WEAK_FUNC(sub_820D565C);
PPC_FUNC_IMPL(__imp__sub_820D565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5660"))) PPC_WEAK_FUNC(sub_820D5660);
PPC_FUNC_IMPL(__imp__sub_820D5660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820D5668;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5698;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5744
	if (ctx.cr6.eq) goto loc_820D5744;
loc_820D56A4:
	// lhz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5720
	if (ctx.cr6.eq) goto loc_820D5720;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d56c4
	if (ctx.cr6.eq) goto loc_820D56C4;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d56c8
	goto loc_820D56C8;
loc_820D56C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D56C8:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d5720
	if (!ctx.cr6.lt) goto loc_820D5720;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d5720
	if (ctx.cr6.lt) goto loc_820D5720;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5720
	if (ctx.cr6.eq) goto loc_820D5720;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d5720
	if (ctx.cr6.eq) goto loc_820D5720;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d5720
	if (ctx.cr6.eq) goto loc_820D5720;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821dfec8
	ctx.lr = 0x820D5720;
	sub_821DFEC8(ctx, base);
loc_820D5720:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5738;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d56a4
	if (!ctx.cr6.eq) goto loc_820D56A4;
loc_820D5744:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D574C"))) PPC_WEAK_FUNC(sub_820D574C);
PPC_FUNC_IMPL(__imp__sub_820D574C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5750"))) PPC_WEAK_FUNC(sub_820D5750);
PPC_FUNC_IMPL(__imp__sub_820D5750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D5758;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5780;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5810
	if (ctx.cr6.eq) goto loc_820D5810;
loc_820D5788:
	// lhz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d57f0
	if (ctx.cr6.eq) goto loc_820D57F0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d57a8
	if (ctx.cr6.eq) goto loc_820D57A8;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x820d57ac
	goto loc_820D57AC;
loc_820D57A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D57AC:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820d57f0
	if (!ctx.cr6.lt) goto loc_820D57F0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d57f0
	if (ctx.cr6.lt) goto loc_820D57F0;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d57f0
	if (ctx.cr6.eq) goto loc_820D57F0;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d57f0
	if (ctx.cr6.eq) goto loc_820D57F0;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d57f0
	if (ctx.cr6.eq) goto loc_820D57F0;
	// stfs f31,388(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 388, temp.u32);
loc_820D57F0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5808;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5788
	if (!ctx.cr6.eq) goto loc_820D5788;
loc_820D5810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D581C"))) PPC_WEAK_FUNC(sub_820D581C);
PPC_FUNC_IMPL(__imp__sub_820D581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5820"))) PPC_WEAK_FUNC(sub_820D5820);
PPC_FUNC_IMPL(__imp__sub_820D5820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D5828;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D5854:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d58a8
	if (!ctx.cr6.eq) goto loc_820D58A8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d5918
	if (!ctx.cr6.eq) goto loc_820D5918;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D586C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5878
	if (!ctx.cr6.eq) goto loc_820D5878;
	// bl 0x821b3000
	ctx.lr = 0x820D5878;
	sub_821B3000(ctx, base);
loc_820D5878:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d58a0
	if (ctx.cr6.eq) goto loc_820D58A0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d58a0
	if (ctx.cr6.eq) goto loc_820D58A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d58c4
	goto loc_820D58C4;
loc_820D58A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d58c4
	goto loc_820D58C4;
loc_820D58A8:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d58d4
	if (!ctx.cr6.eq) goto loc_820D58D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d5918
	if (ctx.cr6.eq) goto loc_820D5918;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d5918
	if (!ctx.cr6.eq) goto loc_820D5918;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D58C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d58f8
	if (ctx.cr6.eq) goto loc_820D58F8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d58f8
	goto loc_820D58F8;
loc_820D58D4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d58e4
	if (!ctx.cr6.eq) goto loc_820D58E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d58f8
	goto loc_820D58F8;
loc_820D58E4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D58F8;
	sub_820F3178(ctx, base);
loc_820D58F8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5918
	if (ctx.cr6.eq) goto loc_820D5918;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d5854
	if (ctx.cr6.eq) goto loc_820D5854;
	// stfs f31,388(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 388, temp.u32);
	// b 0x820d5854
	goto loc_820D5854;
loc_820D5918:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5924"))) PPC_WEAK_FUNC(sub_820D5924);
PPC_FUNC_IMPL(__imp__sub_820D5924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5928"))) PPC_WEAK_FUNC(sub_820D5928);
PPC_FUNC_IMPL(__imp__sub_820D5928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D5930;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r10,6
	ctx.r28.u64 = ctx.r10.u64 | 6;
loc_820D5954:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820d59a8
	if (!ctx.cr6.eq) goto loc_820D59A8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d5a1c
	if (!ctx.cr6.eq) goto loc_820D5A1C;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D596C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5978
	if (!ctx.cr6.eq) goto loc_820D5978;
	// bl 0x821b3000
	ctx.lr = 0x820D5978;
	sub_821B3000(ctx, base);
loc_820D5978:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d59a0
	if (ctx.cr6.eq) goto loc_820D59A0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d59a0
	if (ctx.cr6.eq) goto loc_820D59A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820d59c4
	goto loc_820D59C4;
loc_820D59A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d59c4
	goto loc_820D59C4;
loc_820D59A8:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820d59d4
	if (!ctx.cr6.eq) goto loc_820D59D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d5a1c
	if (ctx.cr6.eq) goto loc_820D5A1C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d5a1c
	if (!ctx.cr6.eq) goto loc_820D5A1C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D59C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d59f8
	if (ctx.cr6.eq) goto loc_820D59F8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820d59f8
	goto loc_820D59F8;
loc_820D59D4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820d59e4
	if (!ctx.cr6.eq) goto loc_820D59E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d59f8
	goto loc_820D59F8;
loc_820D59E4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D59F8;
	sub_820F3178(ctx, base);
loc_820D59F8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5a1c
	if (ctx.cr6.eq) goto loc_820D5A1C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d5954
	if (ctx.cr6.eq) goto loc_820D5954;
	// lfs f1,388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D5A1C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5A30"))) PPC_WEAK_FUNC(sub_820D5A30);
PPC_FUNC_IMPL(__imp__sub_820D5A30) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820d5a58
	if (!ctx.cr6.lt) goto loc_820D5A58;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d5a60
	if (!ctx.cr6.eq) goto loc_820D5A60;
loc_820D5A58:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820D5A60:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820d5a58
	if (!ctx.cr6.lt) goto loc_820D5A58;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820d5a58
	if (ctx.cr6.eq) goto loc_820D5A58;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d5a58
	if (ctx.cr6.eq) goto loc_820D5A58;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x82108b08
	sub_82108B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5AA0"))) PPC_WEAK_FUNC(sub_820D5AA0);
PPC_FUNC_IMPL(__imp__sub_820D5AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D5AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D5ABC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5AD4;
	sub_82085870(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5bb4
	if (ctx.cr6.eq) goto loc_820D5BB4;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5abc
	if (ctx.cr6.eq) goto loc_820D5ABC;
	// lwz r9,776(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 776);
	// addi r3,r10,776
	ctx.r3.s64 = ctx.r10.s64 + 776;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D5B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r7,31376
	ctx.r6.s64 = ctx.r7.s64 + 31376;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f0,60(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D5BB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5BC0"))) PPC_WEAK_FUNC(sub_820D5BC0);
PPC_FUNC_IMPL(__imp__sub_820D5BC0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r9,4536
	ctx.r11.s64 = ctx.r9.s64 + 4536;
	// ld r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// b 0x820d6720
	sub_820D6720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5BEC"))) PPC_WEAK_FUNC(sub_820D5BEC);
PPC_FUNC_IMPL(__imp__sub_820D5BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5BF0"))) PPC_WEAK_FUNC(sub_820D5BF0);
PPC_FUNC_IMPL(__imp__sub_820D5BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,1648
	ctx.r11.s64 = ctx.r11.s64 + 1648;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820D5C08:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820d5c08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D5C08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5C18"))) PPC_WEAK_FUNC(sub_820D5C18);
PPC_FUNC_IMPL(__imp__sub_820D5C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// stb r3,1728(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1728, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5C28"))) PPC_WEAK_FUNC(sub_820D5C28);
PPC_FUNC_IMPL(__imp__sub_820D5C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// b 0x8221f8d0
	sub_8221F8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5C3C"))) PPC_WEAK_FUNC(sub_820D5C3C);
PPC_FUNC_IMPL(__imp__sub_820D5C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5C40"))) PPC_WEAK_FUNC(sub_820D5C40);
PPC_FUNC_IMPL(__imp__sub_820D5C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// b 0x8221fa18
	sub_8221FA18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5C54"))) PPC_WEAK_FUNC(sub_820D5C54);
PPC_FUNC_IMPL(__imp__sub_820D5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5C58"))) PPC_WEAK_FUNC(sub_820D5C58);
PPC_FUNC_IMPL(__imp__sub_820D5C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,1740(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d5cf0
	if (ctx.cr6.eq) goto loc_820D5CF0;
	// lwz r9,1756(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1756);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_820D5C90:
	// lwz r8,80(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820d5cc4
	if (ctx.cr6.eq) goto loc_820D5CC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x820d5c90
	if (ctx.cr6.lt) goto loc_820D5C90;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820D5CC4:
	// mulli r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 * 84;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5cf0
	if (ctx.cr6.eq) goto loc_820D5CF0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x820d6720
	ctx.lr = 0x820D5CF0;
	sub_820D6720(ctx, base);
loc_820D5CF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5D04"))) PPC_WEAK_FUNC(sub_820D5D04);
PPC_FUNC_IMPL(__imp__sub_820D5D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5D08"))) PPC_WEAK_FUNC(sub_820D5D08);
PPC_FUNC_IMPL(__imp__sub_820D5D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// lwz r7,1740(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,1756(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1756);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_820D5D2C:
	// lwz r8,80(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820d5d50
	if (ctx.cr6.eq) goto loc_820D5D50;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x820d5d2c
	if (ctx.cr6.lt) goto loc_820D5D2C;
	// blr 
	return;
loc_820D5D50:
	// mulli r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 * 84;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820D5D70:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820d5d70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D5D70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5D80"))) PPC_WEAK_FUNC(sub_820D5D80);
PPC_FUNC_IMPL(__imp__sub_820D5D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// lwz r7,1740(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,1756(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1756);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_820D5DA4:
	// lwz r8,80(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820d5dc8
	if (ctx.cr6.eq) goto loc_820D5DC8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x820d5da4
	if (ctx.cr6.lt) goto loc_820D5DA4;
	// blr 
	return;
loc_820D5DC8:
	// mulli r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 * 84;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r4,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5DE0"))) PPC_WEAK_FUNC(sub_820D5DE0);
PPC_FUNC_IMPL(__imp__sub_820D5DE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821df458
	sub_821DF458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5DE4"))) PPC_WEAK_FUNC(sub_820D5DE4);
PPC_FUNC_IMPL(__imp__sub_820D5DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5DE8"))) PPC_WEAK_FUNC(sub_820D5DE8);
PPC_FUNC_IMPL(__imp__sub_820D5DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D5DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820d5ea8
	if (ctx.cr6.eq) goto loc_820D5EA8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820D5E10;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5ea8
	if (ctx.cr6.eq) goto loc_820D5EA8;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d5ea8
	if (ctx.cr6.eq) goto loc_820D5EA8;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5e88
	if (ctx.cr6.eq) goto loc_820D5E88;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,-13936
	ctx.r30.s64 = ctx.r11.s64 + -13936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x820D5E48;
	sub_823052D8(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5e80
	if (ctx.cr6.eq) goto loc_820D5E80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D5E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r8,r9,29,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r9,29,2,2
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x20000000) | (ctx.r8.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
loc_820D5E80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x820D5E88;
	sub_823051A8(ctx, base);
loc_820D5E88:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// bl 0x821cfa58
	ctx.lr = 0x820D5E94;
	sub_821CFA58(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D5EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5EB4"))) PPC_WEAK_FUNC(sub_820D5EB4);
PPC_FUNC_IMPL(__imp__sub_820D5EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5EB8"))) PPC_WEAK_FUNC(sub_820D5EB8);
PPC_FUNC_IMPL(__imp__sub_820D5EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D5EC0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820d5f38
	if (ctx.cr6.lt) goto loc_820D5F38;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820D5EF8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5f38
	if (ctx.cr6.eq) goto loc_820D5F38;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_820D5F04:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d5f18
	if (ctx.cr6.eq) goto loc_820D5F18;
	// stfs f31,872(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 872, temp.u32);
	// stw r29,868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 868, ctx.r29.u32);
loc_820D5F18:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5F30;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5f04
	if (!ctx.cr6.eq) goto loc_820D5F04;
loc_820D5F38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5F44"))) PPC_WEAK_FUNC(sub_820D5F44);
PPC_FUNC_IMPL(__imp__sub_820D5F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5F48"))) PPC_WEAK_FUNC(sub_820D5F48);
PPC_FUNC_IMPL(__imp__sub_820D5F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D5F70;
	sub_8233E4E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x82206bc0
	ctx.lr = 0x820D5F88;
	sub_82206BC0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5F9C"))) PPC_WEAK_FUNC(sub_820D5F9C);
PPC_FUNC_IMPL(__imp__sub_820D5F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5FA0"))) PPC_WEAK_FUNC(sub_820D5FA0);
PPC_FUNC_IMPL(__imp__sub_820D5FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D5FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D5FCC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6018
	if (ctx.cr6.eq) goto loc_820D6018;
loc_820D5FD8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// oris r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 134217728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82202aa8
	ctx.lr = 0x820D5FF4;
	sub_82202AA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D600C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5fd8
	if (!ctx.cr6.eq) goto loc_820D5FD8;
loc_820D6018:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D6020"))) PPC_WEAK_FUNC(sub_820D6020);
PPC_FUNC_IMPL(__imp__sub_820D6020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D6028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820D6044;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6088
	if (ctx.cr6.eq) goto loc_820D6088;
loc_820D6050:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 134217728;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82202be0
	ctx.lr = 0x820D6064;
	sub_82202BE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820D607C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d6050
	if (!ctx.cr6.eq) goto loc_820D6050;
loc_820D6088:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D6090"))) PPC_WEAK_FUNC(sub_820D6090);
PPC_FUNC_IMPL(__imp__sub_820D6090) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820D6098;
	__savegprlr_14(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,15520
	ctx.r11.s64 = ctx.r11.s64 + 15520;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// addi r10,r10,15536
	ctx.r10.s64 = ctx.r10.s64 + 15536;
	// addi r9,r9,18032
	ctx.r9.s64 = ctx.r9.s64 + 18032;
	// addi r8,r8,-3808
	ctx.r8.s64 = ctx.r8.s64 + -3808;
	// stw r10,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r7,r7,-3528
	ctx.r7.s64 = ctx.r7.s64 + -3528;
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// addi r6,r6,-3248
	ctx.r6.s64 = ctx.r6.s64 + -3248;
	// addi r5,r5,-2984
	ctx.r5.s64 = ctx.r5.s64 + -2984;
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// addi r4,r4,-2792
	ctx.r4.s64 = ctx.r4.s64 + -2792;
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// addi r11,r31,-2600
	ctx.r11.s64 = ctx.r31.s64 + -2600;
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r4,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// addi r10,r30,-2344
	ctx.r10.s64 = ctx.r30.s64 + -2344;
	// addi r9,r29,-2072
	ctx.r9.s64 = ctx.r29.s64 + -2072;
	// addi r8,r28,-1816
	ctx.r8.s64 = ctx.r28.s64 + -1816;
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// addi r7,r27,-1552
	ctx.r7.s64 = ctx.r27.s64 + -1552;
	// addi r6,r26,2232
	ctx.r6.s64 = ctx.r26.s64 + 2232;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,7448
	ctx.r5.s64 = ctx.r25.s64 + 7448;
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// addi r4,r24,4024
	ctx.r4.s64 = ctx.r24.s64 + 4024;
	// stw r6,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r6.u32);
	// addi r11,r23,4136
	ctx.r11.s64 = ctx.r23.s64 + 4136;
	// stw r5,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r5.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stw r4,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r4.u32);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// addi r10,r22,14640
	ctx.r10.s64 = ctx.r22.s64 + 14640;
	// addi r9,r21,14808
	ctx.r9.s64 = ctx.r21.s64 + 14808;
	// addi r8,r20,3272
	ctx.r8.s64 = ctx.r20.s64 + 3272;
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,3752
	ctx.r7.s64 = ctx.r19.s64 + 3752;
	// stw r9,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r9.u32);
	// addi r6,r18,3480
	ctx.r6.s64 = ctx.r18.s64 + 3480;
	// stw r8,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r8.u32);
	// addi r5,r17,22560
	ctx.r5.s64 = ctx.r17.s64 + 22560;
	// stw r7,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r7.u32);
	// addi r4,r16,22824
	ctx.r4.s64 = ctx.r16.s64 + 22824;
	// stw r6,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r6.u32);
	// addi r11,r15,2936
	ctx.r11.s64 = ctx.r15.s64 + 2936;
	// stw r5,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r5.u32);
	// addi r9,r10,3088
	ctx.r9.s64 = ctx.r10.s64 + 3088;
	// stw r4,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r4.u32);
	// addi r8,r14,4408
	ctx.r8.s64 = ctx.r14.s64 + 4408;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// stw r8,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r8.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r6,15072
	ctx.r6.s64 = ctx.r6.s64 + 15072;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r6.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// addi r7,r7,4528
	ctx.r7.s64 = ctx.r7.s64 + 4528;
	// addi r5,r5,15256
	ctx.r5.s64 = ctx.r5.s64 + 15256;
	// addi r4,r4,24040
	ctx.r4.s64 = ctx.r4.s64 + 24040;
	// stw r7,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r7.u32);
	// addi r11,r11,23200
	ctx.r11.s64 = ctx.r11.s64 + 23200;
	// stw r5,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r5.u32);
	// addi r10,r10,18048
	ctx.r10.s64 = ctx.r10.s64 + 18048;
	// stw r4,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r4.u32);
	// addi r9,r9,18264
	ctx.r9.s64 = ctx.r9.s64 + 18264;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r8,r8,632
	ctx.r8.s64 = ctx.r8.s64 + 632;
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// addi r6,r30,1032
	ctx.r6.s64 = ctx.r30.s64 + 1032;
	// stw r9,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r9.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// addi r7,r31,848
	ctx.r7.s64 = ctx.r31.s64 + 848;
	// addi r5,r29,1120
	ctx.r5.s64 = ctx.r29.s64 + 1120;
	// addi r4,r28,1440
	ctx.r4.s64 = ctx.r28.s64 + 1440;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r11,r27,1200
	ctx.r11.s64 = ctx.r27.s64 + 1200;
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// addi r10,r26,8744
	ctx.r10.s64 = ctx.r26.s64 + 8744;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// addi r9,r25,1280
	ctx.r9.s64 = ctx.r25.s64 + 1280;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// addi r8,r24,1520
	ctx.r8.s64 = ctx.r24.s64 + 1520;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// addi r6,r22,8040
	ctx.r6.s64 = ctx.r22.s64 + 8040;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// addi r7,r23,1528
	ctx.r7.s64 = ctx.r23.s64 + 1528;
	// addi r5,r21,8192
	ctx.r5.s64 = ctx.r21.s64 + 8192;
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// addi r4,r20,23088
	ctx.r4.s64 = ctx.r20.s64 + 23088;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r11,r19,7752
	ctx.r11.s64 = ctx.r19.s64 + 7752;
	// addi r10,r18,7896
	ctx.r10.s64 = ctx.r18.s64 + 7896;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// addi r9,r17,8344
	ctx.r9.s64 = ctx.r17.s64 + 8344;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r16,8480
	ctx.r8.s64 = ctx.r16.s64 + 8480;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// addi r7,r15,8616
	ctx.r7.s64 = ctx.r15.s64 + 8616;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// addi r5,r6,8920
	ctx.r5.s64 = ctx.r6.s64 + 8920;
	// addi r4,r14,9848
	ctx.r4.s64 = ctx.r14.s64 + 9848;
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// stw r5,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r11,r11,10104
	ctx.r11.s64 = ctx.r11.s64 + 10104;
	// addi r10,r10,10240
	ctx.r10.s64 = ctx.r10.s64 + 10240;
	// addi r9,r9,10512
	ctx.r9.s64 = ctx.r9.s64 + 10512;
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// addi r8,r8,9048
	ctx.r8.s64 = ctx.r8.s64 + 9048;
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// addi r7,r7,9168
	ctx.r7.s64 = ctx.r7.s64 + 9168;
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// addi r6,r6,9408
	ctx.r6.s64 = ctx.r6.s64 + 9408;
	// stw r8,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r8.u32);
	// addi r5,r5,9520
	ctx.r5.s64 = ctx.r5.s64 + 9520;
	// stw r7,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r6.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r5,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r5.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// addi r4,r4,10704
	ctx.r4.s64 = ctx.r4.s64 + 10704;
	// addi r11,r31,10832
	ctx.r11.s64 = ctx.r31.s64 + 10832;
	// addi r10,r30,11216
	ctx.r10.s64 = ctx.r30.s64 + 11216;
	// stw r4,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// addi r9,r29,10960
	ctx.r9.s64 = ctx.r29.s64 + 10960;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// addi r8,r28,11088
	ctx.r8.s64 = ctx.r28.s64 + 11088;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// addi r7,r27,12096
	ctx.r7.s64 = ctx.r27.s64 + 12096;
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// addi r6,r26,12352
	ctx.r6.s64 = ctx.r26.s64 + 12352;
	// stw r8,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// addi r5,r25,12608
	ctx.r5.s64 = ctx.r25.s64 + 12608;
	// stw r7,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r7.u32);
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// stw r6,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r6.u32);
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// stw r5,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r5.u32);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// addi r4,r24,11344
	ctx.r4.s64 = ctx.r24.s64 + 11344;
	// addi r11,r23,11720
	ctx.r11.s64 = ctx.r23.s64 + 11720;
	// addi r10,r22,13056
	ctx.r10.s64 = ctx.r22.s64 + 13056;
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// addi r9,r21,13528
	ctx.r9.s64 = ctx.r21.s64 + 13528;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r8,r20,14000
	ctx.r8.s64 = ctx.r20.s64 + 14000;
	// addi r7,r19,14128
	ctx.r7.s64 = ctx.r19.s64 + 14128;
	// stw r9,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r9.u32);
	// addi r6,r18,14384
	ctx.r6.s64 = ctx.r18.s64 + 14384;
	// stw r8,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r8.u32);
	// addi r5,r17,17800
	ctx.r5.s64 = ctx.r17.s64 + 17800;
	// stw r7,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r7.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r6,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r6.u32);
	// addi r4,r16,24248
	ctx.r4.s64 = ctx.r16.s64 + 24248;
	// stw r5,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r5.u32);
	// addi r11,r15,18400
	ctx.r11.s64 = ctx.r15.s64 + 18400;
	// addi r9,r10,18528
	ctx.r9.s64 = ctx.r10.s64 + 18528;
	// stw r4,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// addi r8,r14,2400
	ctx.r8.s64 = ctx.r14.s64 + 2400;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r9,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r8.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r7,2568
	ctx.r7.s64 = ctx.r7.s64 + 2568;
	// addi r6,r6,2736
	ctx.r6.s64 = ctx.r6.s64 + 2736;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r7,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r7.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r6,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r6.u32);
	// addi r5,r5,5744
	ctx.r5.s64 = ctx.r5.s64 + 5744;
	// addi r4,r4,5440
	ctx.r4.s64 = ctx.r4.s64 + 5440;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r5,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r5.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r4,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r4.u32);
	// addi r11,r11,4800
	ctx.r11.s64 = ctx.r11.s64 + 4800;
	// addi r10,r10,6168
	ctx.r10.s64 = ctx.r10.s64 + 6168;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// stw r10,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r10.u32);
	// addi r9,r9,24032
	ctx.r9.s64 = ctx.r9.s64 + 24032;
	// addi r8,r8,18784
	ctx.r8.s64 = ctx.r8.s64 + 18784;
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// stw r9,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r9.u32);
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// stw r8,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r8.u32);
	// addi r7,r31,19008
	ctx.r7.s64 = ctx.r31.s64 + 19008;
	// addi r6,r30,19216
	ctx.r6.s64 = ctx.r30.s64 + 19216;
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// stw r7,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r7.u32);
	// addi r5,r29,19424
	ctx.r5.s64 = ctx.r29.s64 + 19424;
	// stw r6,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r6.u32);
	// addi r4,r28,19640
	ctx.r4.s64 = ctx.r28.s64 + 19640;
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// stw r5,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r5.u32);
	// addi r11,r27,19880
	ctx.r11.s64 = ctx.r27.s64 + 19880;
	// stw r4,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r4.u32);
	// addi r10,r26,20136
	ctx.r10.s64 = ctx.r26.s64 + 20136;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// stw r11,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r11.u32);
	// addi r9,r25,20440
	ctx.r9.s64 = ctx.r25.s64 + 20440;
	// stw r10,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r10.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r24,20440
	ctx.r7.s64 = ctx.r24.s64 + 20440;
	// stw r9,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r23,20560
	ctx.r5.s64 = ctx.r23.s64 + 20560;
	// stw r7,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r11,r8,20768
	ctx.r11.s64 = ctx.r8.s64 + 20768;
	// stw r5,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r5.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r6,21016
	ctx.r9.s64 = ctx.r6.s64 + 21016;
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r4,21224
	ctx.r7.s64 = ctx.r4.s64 + 21224;
	// stw r9,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r10,21472
	ctx.r5.s64 = ctx.r10.s64 + 21472;
	// stw r7,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r7.u32);
	// addi r11,r8,21792
	ctx.r11.s64 = ctx.r8.s64 + 21792;
	// addi r9,r6,22112
	ctx.r9.s64 = ctx.r6.s64 + 22112;
	// stw r5,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r5.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r9,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r9.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r4,22352
	ctx.r7.s64 = ctx.r4.s64 + 22352;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r10,-1344
	ctx.r5.s64 = ctx.r10.s64 + -1344;
	// addi r4,r8,-400
	ctx.r4.s64 = ctx.r8.s64 + -400;
	// stw r7,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r7.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r5,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r5.u32);
	// addi r11,r6,-1104
	ctx.r11.s64 = ctx.r6.s64 + -1104;
	// stw r4,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r4.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// addi r7,r10,-912
	ctx.r7.s64 = ctx.r10.s64 + -912;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r9,-696
	ctx.r5.s64 = ctx.r9.s64 + -696;
	// stw r7,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r11,r8,9632
	ctx.r11.s64 = ctx.r8.s64 + 9632;
	// stw r5,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r5.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r6,9712
	ctx.r9.s64 = ctx.r6.s64 + 9712;
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r4,-160
	ctx.r7.s64 = ctx.r4.s64 + -160;
	// stw r9,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r10,16448
	ctx.r5.s64 = ctx.r10.s64 + 16448;
	// stw r7,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r11,r8,17176
	ctx.r11.s64 = ctx.r8.s64 + 17176;
	// stw r5,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r5.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r6,15776
	ctx.r9.s64 = ctx.r6.s64 + 15776;
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r4,15688
	ctx.r7.s64 = ctx.r4.s64 + 15688;
	// stw r9,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r10,15640
	ctx.r5.s64 = ctx.r10.s64 + 15640;
	// stw r7,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r11,r8,15584
	ctx.r11.s64 = ctx.r8.s64 + 15584;
	// stw r5,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r5.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r6,15560
	ctx.r9.s64 = ctx.r6.s64 + 15560;
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r11.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r4,23488
	ctx.r7.s64 = ctx.r4.s64 + 23488;
	// stw r9,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r10,23536
	ctx.r5.s64 = ctx.r10.s64 + 23536;
	// stw r7,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r11,r8,23576
	ctx.r11.s64 = ctx.r8.s64 + 23576;
	// stw r5,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r5.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r6,23640
	ctx.r9.s64 = ctx.r6.s64 + 23640;
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r4,23816
	ctx.r7.s64 = ctx.r4.s64 + 23816;
	// stw r9,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r10,23936
	ctx.r5.s64 = ctx.r10.s64 + 23936;
	// stw r7,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r11,r8,23592
	ctx.r11.s64 = ctx.r8.s64 + 23592;
	// stw r5,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r5.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r6,23616
	ctx.r9.s64 = ctx.r6.s64 + 23616;
	// stw r11,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r11.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r4,24392
	ctx.r7.s64 = ctx.r4.s64 + 24392;
	// stw r9,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r9.u32);
	// addi r5,r10,24480
	ctx.r5.s64 = ctx.r10.s64 + 24480;
	// addi r11,r8,24608
	ctx.r11.s64 = ctx.r8.s64 + 24608;
	// stw r7,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r7.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r5,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r5.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r6,6960
	ctx.r9.s64 = ctx.r6.s64 + 6960;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r4,7192
	ctx.r7.s64 = ctx.r4.s64 + 7192;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r9,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r9.u32);
	// addi r6,r10,6176
	ctx.r6.s64 = ctx.r10.s64 + 6176;
	// stw r7,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r7.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r8,6360
	ctx.r5.s64 = ctx.r8.s64 + 6360;
	// stw r6,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r6.u32);
	// addi r10,r4,6640
	ctx.r10.s64 = ctx.r4.s64 + 6640;
	// addi r9,r11,368
	ctx.r9.s64 = ctx.r11.s64 + 368;
	// stw r5,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r5.u32);
	// stw r10,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r10.u32);
	// stw r9,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r9.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D6720"))) PPC_WEAK_FUNC(sub_820D6720);
PPC_FUNC_IMPL(__imp__sub_820D6720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D6728;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfs f31,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820d676c
	if (!ctx.cr6.eq) goto loc_820D676C;
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_820D676C:
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820d6794
	if (!ctx.cr6.eq) goto loc_820D6794;
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820d6794
	if (!ctx.cr6.eq) goto loc_820D6794;
	// lfs f0,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820d6794
	if (!ctx.cr6.eq) goto loc_820D6794;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_820D6794:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820D67A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820d67a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D67A4;
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f9,60(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f1,f30,f2
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f2.f64));
	// fmuls f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f0,f8,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmadds f6,f0,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f5,f12,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fdivs f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// bl 0x8233cfb0
	ctx.lr = 0x820D6840;
	sub_8233CFB0(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f3,68(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fmadds f12,f13,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// blt cr6,0x820d6878
	if (ctx.cr6.lt) goto loc_820D6878;
	// bl 0x8233cfb0
	ctx.lr = 0x820D686C;
	sub_8233CFB0(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x820d688c
	goto loc_820D688C;
loc_820D6878:
	// bl 0x8233cfb0
	ctx.lr = 0x820D687C;
	sub_8233CFB0(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f0,120(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f9,72(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_820D688C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820d68b4
	if (!ctx.cr6.eq) goto loc_820D68B4;
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_820D68B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D68C4"))) PPC_WEAK_FUNC(sub_820D68C4);
PPC_FUNC_IMPL(__imp__sub_820D68C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D68C8"))) PPC_WEAK_FUNC(sub_820D68C8);
PPC_FUNC_IMPL(__imp__sub_820D68C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82106098
	ctx.lr = 0x820D68F4;
	sub_82106098(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d6928
	if (ctx.cr6.eq) goto loc_820D6928;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6914
	if (ctx.cr6.eq) goto loc_820D6914;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217ba8
	ctx.lr = 0x820D6914;
	sub_82217BA8(ctx, base);
loc_820D6914:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6928
	if (ctx.cr6.eq) goto loc_820D6928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217ba8
	ctx.lr = 0x820D6928;
	sub_82217BA8(ctx, base);
loc_820D6928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6940"))) PPC_WEAK_FUNC(sub_820D6940);
PPC_FUNC_IMPL(__imp__sub_820D6940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// bl 0x822184b8
	ctx.lr = 0x820D6968;
	sub_822184B8(ctx, base);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820d699c
	if (ctx.cr6.eq) goto loc_820D699C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// bl 0x822184b8
	ctx.lr = 0x820D6984;
	sub_822184B8(ctx, base);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d699c
	if (!ctx.cr6.eq) goto loc_820D699C;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820D699C:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820d69d0
	if (ctx.cr6.eq) goto loc_820D69D0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// bl 0x822184b8
	ctx.lr = 0x820D69B8;
	sub_822184B8(ctx, base);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d69d0
	if (!ctx.cr6.eq) goto loc_820D69D0;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820D69D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D69E8"))) PPC_WEAK_FUNC(sub_820D69E8);
PPC_FUNC_IMPL(__imp__sub_820D69E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-23912
	ctx.r9.s64 = ctx.r11.s64 + -23912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820d6a1c
	if (ctx.cr6.eq) goto loc_820D6A1C;
	// bl 0x821f1330
	ctx.lr = 0x820D6A18;
	sub_821F1330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D6A1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6A30"))) PPC_WEAK_FUNC(sub_820D6A30);
PPC_FUNC_IMPL(__imp__sub_820D6A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,64(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6A68"))) PPC_WEAK_FUNC(sub_820D6A68);
PPC_FUNC_IMPL(__imp__sub_820D6A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r9,-32348
	ctx.r7.s64 = ctx.r9.s64 + -32348;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6B20"))) PPC_WEAK_FUNC(sub_820D6B20);
PPC_FUNC_IMPL(__imp__sub_820D6B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,644(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820d6b70
	if (ctx.cr6.eq) goto loc_820D6B70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d6b60
	if (ctx.cr6.eq) goto loc_820D6B60;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d6b60
	if (ctx.cr6.eq) goto loc_820D6B60;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d6b70
	if (ctx.cr6.eq) goto loc_820D6B70;
loc_820D6B60:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// blr 
	return;
loc_820D6B70:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6B80"))) PPC_WEAK_FUNC(sub_820D6B80);
PPC_FUNC_IMPL(__imp__sub_820D6B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D6BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D6BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D6BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6BEC"))) PPC_WEAK_FUNC(sub_820D6BEC);
PPC_FUNC_IMPL(__imp__sub_820D6BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6BF0"))) PPC_WEAK_FUNC(sub_820D6BF0);
PPC_FUNC_IMPL(__imp__sub_820D6BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82087078
	ctx.lr = 0x820D6C0C;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6c28
	if (ctx.cr6.eq) goto loc_820D6C28;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r30,88(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82172d60
	ctx.lr = 0x820D6C24;
	sub_82172D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820D6C28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6C40"))) PPC_WEAK_FUNC(sub_820D6C40);
PPC_FUNC_IMPL(__imp__sub_820D6C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d6c84
	if (!ctx.cr6.eq) goto loc_820D6C84;
	// bl 0x820ddca8
	ctx.lr = 0x820D6C6C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6c7c
	if (ctx.cr6.eq) goto loc_820D6C7C;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d6ca0
	goto loc_820D6CA0;
loc_820D6C7C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d6ca0
	goto loc_820D6CA0;
loc_820D6C84:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d6cb0
	if (!ctx.cr6.eq) goto loc_820D6CB0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d6d00
	if (ctx.cr6.eq) goto loc_820D6D00;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820D6CA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d6cd0
	if (ctx.cr6.eq) goto loc_820D6CD0;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820d6cd0
	goto loc_820D6CD0;
loc_820D6CB0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d6d00
	if (ctx.cr6.eq) goto loc_820D6D00;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D6CCC;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820D6CD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d6d00
	if (ctx.cr6.eq) goto loc_820D6D00;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820d6cf0
	if (!ctx.cr6.eq) goto loc_820D6CF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820D6CEC;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820D6CF0:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r10,-7224
	ctx.r9.s64 = ctx.r10.s64 + -7224;
	// stw r11,16436(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16436, ctx.r11.u32);
loc_820D6D00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6D18"))) PPC_WEAK_FUNC(sub_820D6D18);
PPC_FUNC_IMPL(__imp__sub_820D6D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82087078
	ctx.lr = 0x820D6D2C;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6d8c
	if (ctx.cr6.eq) goto loc_820D6D8C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d6d60
	if (!ctx.cr6.eq) goto loc_820D6D60;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82172d60
	ctx.lr = 0x820D6D48;
	sub_82172D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820D6D60:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r11
	ctx.r31.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bl 0x82172d60
	ctx.lr = 0x820D6D74;
	sub_82172D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820D6D8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6DA4"))) PPC_WEAK_FUNC(sub_820D6DA4);
PPC_FUNC_IMPL(__imp__sub_820D6DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6DA8"))) PPC_WEAK_FUNC(sub_820D6DA8);
PPC_FUNC_IMPL(__imp__sub_820D6DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820d6d18
	ctx.lr = 0x820D6DC0;
	sub_820D6D18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d6de4
	if (ctx.cr6.eq) goto loc_820D6DE4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6ddc
	if (ctx.cr6.eq) goto loc_820D6DDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820d6de0
	goto loc_820D6DE0;
loc_820D6DDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D6DE0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820D6DE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6DF8"))) PPC_WEAK_FUNC(sub_820D6DF8);
PPC_FUNC_IMPL(__imp__sub_820D6DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d6e34
	if (ctx.cr6.eq) goto loc_820D6E34;
	// bl 0x82087078
	ctx.lr = 0x820D6E14;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6e34
	if (ctx.cr6.eq) goto loc_820D6E34;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82177f68
	ctx.lr = 0x820D6E2C;
	sub_82177F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820D6E34;
	sub_82172D60(ctx, base);
loc_820D6E34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

