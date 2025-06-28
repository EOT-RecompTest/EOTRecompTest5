#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82080000"))) PPC_WEAK_FUNC(sub_82080000);
PPC_FUNC_IMPL(__imp__sub_82080000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82080008;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82080024;
	sub_823052D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r6,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820800a0
	if (!ctx.cr6.eq) goto loc_820800A0;
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r8,r8,2
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82080094
	if (ctx.cr6.eq) goto loc_82080094;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_82080094:
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
loc_820800A0:
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820800ec
	if (!ctx.cr6.eq) goto loc_820800EC;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r8,2
	ctx.r3.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stwx r3,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r3.u32);
	// beq cr6,0x820800e4
	if (ctx.cr6.eq) goto loc_820800E4;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
loc_820800E4:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_820800EC:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r7,r8,2
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r5,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r3,r4,2
	ctx.r3.u64 = ctx.r4.u32 & 0x3FFFFFFF;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// ble cr6,0x82080148
	if (!ctx.cr6.gt) goto loc_82080148;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// clrlwi r9,r9,2
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFFF;
loc_8208012C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8208012c
	if (ctx.cr6.gt) goto loc_8208012C;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82080148
	if (ctx.cr6.lt) goto loc_82080148;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82080148:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82080168
	if (ctx.cr6.eq) goto loc_82080168;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82080168:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x823051a8
	ctx.lr = 0x82080178;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82080184"))) PPC_WEAK_FUNC(sub_82080184);
PPC_FUNC_IMPL(__imp__sub_82080184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080188"))) PPC_WEAK_FUNC(sub_82080188);
PPC_FUNC_IMPL(__imp__sub_82080188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82080190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820801CC;
	sub_82305000(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208020C"))) PPC_WEAK_FUNC(sub_8208020C);
PPC_FUNC_IMPL(__imp__sub_8208020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080210"))) PPC_WEAK_FUNC(sub_82080210);
PPC_FUNC_IMPL(__imp__sub_82080210) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080250
	if (ctx.cr6.eq) goto loc_82080250;
loc_82080234:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82080244;
	sub_82080000(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82080234
	if (!ctx.cr6.eq) goto loc_82080234;
loc_82080250:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080288
	if (ctx.cr6.eq) goto loc_82080288;
loc_8208025C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82080278
	if (ctx.cr6.eq) goto loc_82080278;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82080278;
	sub_82080000(ctx, base);
loc_82080278:
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208025c
	if (!ctx.cr6.eq) goto loc_8208025C;
loc_82080288:
	// lbz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820802ac
	if (ctx.cr6.eq) goto loc_820802AC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820802ac
	if (ctx.cr6.eq) goto loc_820802AC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820802AC;
	sub_82080000(ctx, base);
loc_820802AC:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820802c4
	if (ctx.cr6.eq) goto loc_820802C4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x820802C4;
	sub_82246E18(ctx, base);
loc_820802C4:
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

__attribute__((alias("__imp__sub_820802DC"))) PPC_WEAK_FUNC(sub_820802DC);
PPC_FUNC_IMPL(__imp__sub_820802DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820802E0"))) PPC_WEAK_FUNC(sub_820802E0);
PPC_FUNC_IMPL(__imp__sub_820802E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820802E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82080334
	if (ctx.cr6.eq) goto loc_82080334;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8208030C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8208032c
	if (ctx.cr6.eq) goto loc_8208032C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208030c
	if (!ctx.cr6.eq) goto loc_8208030C;
	// b 0x82080334
	goto loc_82080334;
loc_8208032C:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82080334:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82080364
	if (ctx.cr6.lt) goto loc_82080364;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82080370
	if (!ctx.cr6.gt) goto loc_82080370;
loc_82080364:
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_82080370:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82080380
	if (ctx.cr6.lt) goto loc_82080380;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82080380:
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r30,r10,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820803c4
	if (ctx.cr6.eq) goto loc_820803C4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820803a8
	if (ctx.cr6.eq) goto loc_820803A8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820803A8;
	sub_82080000(ctx, base);
loc_820803A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082030
	ctx.lr = 0x820803BC;
	sub_82082030(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_820803C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080454
	if (ctx.cr6.eq) goto loc_82080454;
loc_820803D8:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82080430
	if (!ctx.cr6.lt) goto loc_82080430;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82080410
	if (!ctx.cr6.gt) goto loc_82080410;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8208040C;
	sub_82080000(ctx, base);
	// b 0x82080420
	goto loc_82080420;
loc_82080410:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82080420:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820803d8
	if (!ctx.cr6.eq) goto loc_820803D8;
	// b 0x82080454
	goto loc_82080454;
loc_82080430:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080454
	if (ctx.cr6.eq) goto loc_82080454;
loc_82080438:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82080448;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82080438
	if (!ctx.cr6.eq) goto loc_82080438;
loc_82080454:
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82080474"))) PPC_WEAK_FUNC(sub_82080474);
PPC_FUNC_IMPL(__imp__sub_82080474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080478"))) PPC_WEAK_FUNC(sub_82080478);
PPC_FUNC_IMPL(__imp__sub_82080478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82080480;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,20
	ctx.r27.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823052d8
	ctx.lr = 0x8208049C;
	sub_823052D8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8208053c
	if (!ctx.cr6.gt) goto loc_8208053C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820804dc
	if (ctx.cr6.eq) goto loc_820804DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x820804dc
	if (ctx.cr6.lt) goto loc_820804DC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x82080518
	goto loc_82080518;
loc_820804DC:
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x820804ec
	if (!ctx.cr6.gt) goto loc_820804EC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820804EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82082030
	ctx.lr = 0x82080500;
	sub_82082030(ctx, base);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82080518:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
loc_8208053C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,15
	ctx.r11.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x823051a8
	ctx.lr = 0x82080560;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208056C"))) PPC_WEAK_FUNC(sub_8208056C);
PPC_FUNC_IMPL(__imp__sub_8208056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080570"))) PPC_WEAK_FUNC(sub_82080570);
PPC_FUNC_IMPL(__imp__sub_82080570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82080578;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,12
	ctx.r26.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823052d8
	ctx.lr = 0x820805A0;
	sub_823052D8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82081020
	ctx.lr = 0x820805C0;
	sub_82081020(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// bne cr6,0x820806dc
	if (!ctx.cr6.eq) goto loc_820806DC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// rlwinm r4,r11,0,3,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r10,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r10.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stbx r9,r7,r6
	PPC_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r9.u8);
	// bne cr6,0x82080624
	if (!ctx.cr6.eq) goto loc_82080624;
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// rlwinm r11,r10,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// b 0x82080638
	goto loc_82080638;
loc_82080624:
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82080650
	if (!ctx.cr6.eq) goto loc_82080650;
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r11,r10,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
loc_82080638:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82080650
	if (ctx.cr6.eq) goto loc_82080650;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
loc_82080650:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82080674
	if (ctx.cr6.eq) goto loc_82080674;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82080670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82080674:
	// lbz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080728
	if (ctx.cr6.eq) goto loc_82080728;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r5,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82080728
	if (!ctx.cr6.eq) goto loc_82080728;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bge cr6,0x82080730
	if (!ctx.cr6.lt) goto loc_82080730;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820806fc
	if (ctx.cr6.eq) goto loc_820806FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820806dc
	if (ctx.cr6.eq) goto loc_820806DC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82082030
	ctx.lr = 0x820806D0;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820806e8
	if (!ctx.cr6.eq) goto loc_820806E8;
loc_820806DC:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// lwz r31,20(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r30,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r30.u32);
loc_820806E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823051a8
	ctx.lr = 0x820806F0;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820806FC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82080570
	ctx.lr = 0x82080710;
	sub_82080570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823051a8
	ctx.lr = 0x8208071C;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82080728:
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// blt cr6,0x8208073c
	if (ctx.cr6.lt) goto loc_8208073C;
loc_82080730:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4064
	ctx.r9.s64 = ctx.r10.s64 + 4064;
	// b 0x82080758
	goto loc_82080758;
loc_8208073C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080750
	if (ctx.cr6.eq) goto loc_82080750;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4108
	ctx.r9.s64 = ctx.r10.s64 + 4108;
	// b 0x82080758
	goto loc_82080758;
loc_82080750:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4144
	ctx.r9.s64 = ctx.r10.s64 + 4144;
loc_82080758:
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// bl 0x823051a8
	ctx.lr = 0x82080768;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82080774"))) PPC_WEAK_FUNC(sub_82080774);
PPC_FUNC_IMPL(__imp__sub_82080774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080778"))) PPC_WEAK_FUNC(sub_82080778);
PPC_FUNC_IMPL(__imp__sub_82080778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82080780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x8208079C;
	sub_823052D8(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820807e0
	if (!ctx.cr6.eq) goto loc_820807E0;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820807e0
	if (!ctx.cr6.eq) goto loc_820807E0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820807d8
	if (ctx.cr6.eq) goto loc_820807D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820807d8
	if (ctx.cr6.eq) goto loc_820807D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82080d98
	ctx.lr = 0x820807D4;
	sub_82080D98(ctx, base);
	// b 0x820807e0
	goto loc_820807E0;
loc_820807D8:
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_820807E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82081298
	ctx.lr = 0x820807EC;
	sub_82081298(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x820807F4;
	sub_823051A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820807FC"))) PPC_WEAK_FUNC(sub_820807FC);
PPC_FUNC_IMPL(__imp__sub_820807FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080800"))) PPC_WEAK_FUNC(sub_82080800);
PPC_FUNC_IMPL(__imp__sub_82080800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82080844
	if (ctx.cr6.eq) goto loc_82080844;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r10,4,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82080848
	if (ctx.cr6.eq) goto loc_82080848;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820808c4
	if (!ctx.cr6.eq) goto loc_820808C4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82080848
	goto loc_82080848;
loc_82080844:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82080848:
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820808c4
	if (ctx.cr6.eq) goto loc_820808C4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x820808c4
	if (ctx.cr6.gt) goto loc_820808C4;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// clrlwi r11,r11,15
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFF;
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andc r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820808c4
	if (!ctx.cr6.lt) goto loc_820808C4;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820808c4
	if (ctx.cr6.eq) goto loc_820808C4;
loc_8208089C:
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r3,r3,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820808cc
	if (ctx.cr6.eq) goto loc_820808CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x820808c4
	if (ctx.cr6.gt) goto loc_820808C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208089c
	if (!ctx.cr6.eq) goto loc_8208089C;
loc_820808C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820808CC:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,24(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x820808f4
	if (!ctx.cr6.eq) goto loc_820808F4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x820808c4
	if (ctx.cr6.lt) goto loc_820808C4;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x820808c4
	if (ctx.cr6.gt) goto loc_820808C4;
loc_820808F4:
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lbz r9,19(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 19);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r9,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82080924"))) PPC_WEAK_FUNC(sub_82080924);
PPC_FUNC_IMPL(__imp__sub_82080924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080928"))) PPC_WEAK_FUNC(sub_82080928);
PPC_FUNC_IMPL(__imp__sub_82080928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82080930;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823052d8
	ctx.lr = 0x82080948;
	sub_823052D8(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// beq cr6,0x82080968
	if (ctx.cr6.eq) goto loc_82080968;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82080990
	if (!ctx.cr6.eq) goto loc_82080990;
loc_82080968:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// beq 0x82080990
	if (ctx.cr0.eq) goto loc_82080990;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x82080988;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82080990:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
loc_82080998:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820809bc
	if (!ctx.cr6.eq) goto loc_820809BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82080ba8
	ctx.lr = 0x820809B0;
	sub_82080BA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080b88
	if (ctx.cr6.eq) goto loc_82080B88;
loc_820809BC:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820809d0
	if (ctx.cr6.eq) goto loc_820809D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82080aa4
	if (!ctx.cr6.eq) goto loc_82080AA4;
loc_820809D0:
	// lbz r9,141(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 141);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820809e8
	if (!ctx.cr6.eq) goto loc_820809E8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82080a34
	goto loc_82080A34;
loc_820809E8:
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82080a2c
	if (ctx.cr6.eq) goto loc_82080A2C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82080a10
	if (!ctx.cr6.eq) goto loc_82080A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82081298
	ctx.lr = 0x82080A0C;
	sub_82081298(ctx, base);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
loc_82080A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82080d98
	ctx.lr = 0x82080A18;
	sub_82080D98(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// b 0x82080a34
	goto loc_82080A34;
loc_82080A2C:
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82080A34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080b88
	if (ctx.cr6.eq) goto loc_82080B88;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lbz r7,19(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82080a98
	if (ctx.cr6.eq) goto loc_82080A98;
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82080A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82080A98:
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82080b88
	if (!ctx.cr6.eq) goto loc_82080B88;
loc_82080AA4:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82080b28
	if (!ctx.cr6.eq) goto loc_82080B28;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x82081788
	ctx.lr = 0x82080AC8;
	sub_82081788(ctx, base);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// lwz r7,36(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r7,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r7.u32);
	// lwz r6,192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r5,20(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// stw r5,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r5.u32);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// stb r29,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r29.u8);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stb r29,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r29.u8);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x822471d8
	ctx.lr = 0x82080B24;
	sub_822471D8(ctx, base);
	// b 0x82080b78
	goto loc_82080B78;
loc_82080B28:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82080b7c
	if (!ctx.cr6.eq) goto loc_82080B7C;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// lwz r7,36(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r7,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r7.u32);
	// lwz r6,192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r5,20(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// stw r5,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r5.u32);
	// bl 0x82080d98
	ctx.lr = 0x82080B78;
	sub_82080D98(ctx, base);
loc_82080B78:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82080B7C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82080998
	if (!ctx.cr6.eq) goto loc_82080998;
loc_82080B88:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// bl 0x823051a8
	ctx.lr = 0x82080B9C;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82080BA4"))) PPC_WEAK_FUNC(sub_82080BA4);
PPC_FUNC_IMPL(__imp__sub_82080BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080BA8"))) PPC_WEAK_FUNC(sub_82080BA8);
PPC_FUNC_IMPL(__imp__sub_82080BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82080BB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x82080f10
	ctx.lr = 0x82080BF4;
	sub_82080F10(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82080c10
	if (ctx.cr6.eq) goto loc_82080C10;
loc_82080C04:
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82080c80
	goto loc_82080C80;
loc_82080C10:
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,24(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bgt cr6,0x82080c2c
	if (ctx.cr6.gt) goto loc_82080C2C;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82080c80
	goto loc_82080C80;
loc_82080C2C:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82080c74
	if (ctx.cr6.eq) goto loc_82080C74;
	// addi r30,r1,132
	ctx.r30.s64 = ctx.r1.s64 + 132;
loc_82080C3C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82080800
	ctx.lr = 0x82080C4C;
	sub_82080800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080c64
	if (ctx.cr6.eq) goto loc_82080C64;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82080c04
	if (!ctx.cr6.gt) goto loc_82080C04;
loc_82080C64:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82080c3c
	if (ctx.cr6.lt) goto loc_82080C3C;
loc_82080C74:
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// subfe r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82080C80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82080c98
	if (!ctx.cr6.eq) goto loc_82080C98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82080C98:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,15
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// bne cr6,0x82080d10
	if (!ctx.cr6.eq) goto loc_82080D10;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xoris r5,r8,32768
	ctx.r5.u64 = ctx.r8.u64 ^ 2147483648;
	// andc r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addc r9,r10,r5
	ctx.xer.ca = (ctx.r10.u32 + ctx.r5.u32 < ctx.r10.u32);
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r7,r3
	ctx.r30.u64 = ctx.r7.u64 & ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82080d40
	if (ctx.cr6.eq) goto loc_82080D40;
loc_82080D10:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x820811d8
	ctx.lr = 0x82080D24;
	sub_820811D8(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r28,r31,156
	ctx.r28.s64 = ctx.r31.s64 + 156;
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// b 0x82080d70
	goto loc_82080D70;
loc_82080D40:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r31,156
	ctx.r28.s64 = ctx.r31.s64 + 156;
	// bl 0x820811d8
	ctx.lr = 0x82080D58;
	sub_820811D8(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x82080e30
	ctx.lr = 0x82080D68;
	sub_82080E30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
loc_82080D70:
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stb r25,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r25.u8);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// stb r25,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r25.u8);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x822471d8
	ctx.lr = 0x82080D88;
	sub_822471D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82080D94"))) PPC_WEAK_FUNC(sub_82080D94);
PPC_FUNC_IMPL(__imp__sub_82080D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080D98"))) PPC_WEAK_FUNC(sub_82080D98);
PPC_FUNC_IMPL(__imp__sub_82080D98) {
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
	// lwz r4,188(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,184
	ctx.r31.s64 = ctx.r3.s64 + 184;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82080de0
	if (!ctx.cr6.eq) goto loc_82080DE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080dd8
	if (ctx.cr6.eq) goto loc_82080DD8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82080DD8;
	sub_82080000(ctx, base);
loc_82080DD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82080df0
	goto loc_82080DF0;
loc_82080DE0:
	// lwz r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// bl 0x82080778
	ctx.lr = 0x82080DE8;
	sub_82080778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82080DF0:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82080E2C"))) PPC_WEAK_FUNC(sub_82080E2C);
PPC_FUNC_IMPL(__imp__sub_82080E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080E30"))) PPC_WEAK_FUNC(sub_82080E30);
PPC_FUNC_IMPL(__imp__sub_82080E30) {
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
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r3,184
	ctx.r31.s64 = ctx.r3.s64 + 184;
	// rlwinm r11,r10,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// stb r9,202(r3)
	PPC_STORE_U8(ctx.r3.u32 + 202, ctx.r9.u8);
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82080e78
	if (!ctx.cr6.gt) goto loc_82080E78;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82080e78
	if (ctx.cr6.gt) goto loc_82080E78;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r11,8,20,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
loc_82080E78:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x82080e98
	if (!ctx.cr6.gt) goto loc_82080E98;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bgt cr6,0x82080e98
	if (ctx.cr6.gt) goto loc_82080E98;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,12,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF000;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_82080E98:
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,172(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82080eec
	if (!ctx.cr6.eq) goto loc_82080EEC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r8,r9,0,4,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82080570
	ctx.lr = 0x82080EE8;
	sub_82080570(ctx, base);
	// b 0x82080ef4
	goto loc_82080EF4;
loc_82080EEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82082030
	ctx.lr = 0x82080EF4;
	sub_82082030(ctx, base);
loc_82080EF4:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82080F0C"))) PPC_WEAK_FUNC(sub_82080F0C);
PPC_FUNC_IMPL(__imp__sub_82080F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080F10"))) PPC_WEAK_FUNC(sub_82080F10);
PPC_FUNC_IMPL(__imp__sub_82080F10) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82080F18;
	__savegprlr_26(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,11
	ctx.r29.s64 = 11;
	// stw r27,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r27.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// addi r28,r3,104
	ctx.r28.s64 = ctx.r3.s64 + 104;
loc_82080F30:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82080fdc
	if (ctx.cr6.eq) goto loc_82080FDC;
loc_82080F40:
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// ble cr6,0x82080fd0
	if (!ctx.cr6.gt) goto loc_82080FD0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r26,r9,r8
	ctx.r26.u64 = ctx.r9.u64 + ctx.r8.u64;
	// andc r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 & ~ctx.r9.u64;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82080f90
	if (!ctx.cr6.lt) goto loc_82080F90;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82080f90
	if (ctx.cr6.eq) goto loc_82080F90;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82080ff0
	if (!ctx.cr6.lt) goto loc_82080FF0;
loc_82080F90:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82080fa0
	if (!ctx.cr6.gt) goto loc_82080FA0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82080FA0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82080fc8
	if (!ctx.cr6.lt) goto loc_82080FC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// b 0x82080fd0
	goto loc_82080FD0;
loc_82080FC8:
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// blt cr6,0x82080fe8
	if (ctx.cr6.lt) goto loc_82080FE8;
loc_82080FD0:
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82080f40
	if (!ctx.cr6.eq) goto loc_82080F40;
loc_82080FDC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x82080f30
	if (!ctx.cr0.lt) goto loc_82080F30;
loc_82080FE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82080FF0:
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r7,r7,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r7.s64;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// lbz r5,19(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 19);
	// stw r27,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r27.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r5,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r5.u32);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081020"))) PPC_WEAK_FUNC(sub_82081020);
PPC_FUNC_IMPL(__imp__sub_82081020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82081028;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,12
	ctx.r24.s64 = ctx.r3.s64 + 12;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x823052d8
	ctx.lr = 0x8208104C;
	sub_823052D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82081090
	if (ctx.cr6.eq) goto loc_82081090;
	// rlwinm r11,r28,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// li r10,31
	ctx.r10.s64 = 31;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081090
	if (ctx.cr6.eq) goto loc_82081090;
loc_82081068:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82081068
	if (!ctx.cr6.eq) goto loc_82081068;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bge cr6,0x82081090
	if (!ctx.cr6.lt) goto loc_82081090;
	// subfic r30,r10,26
	ctx.xer.ca = ctx.r10.u32 <= 26;
	ctx.r30.s64 = 26 - ctx.r10.s64;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// ble cr6,0x82081090
	if (!ctx.cr6.gt) goto loc_82081090;
	// li r30,11
	ctx.r30.s64 = 11;
loc_82081090:
	// lis r29,32767
	ctx.r29.s64 = 2147418112;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12, ctx.xer);
	// bge cr6,0x82081170
	if (!ctx.cr6.lt) goto loc_82081170;
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r25
	ctx.r26.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_820810B4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82081160
	if (ctx.cr6.eq) goto loc_82081160;
loc_820810C4:
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8208114c
	if (ctx.cr6.lt) goto loc_8208114C;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8208114c
	if (ctx.cr6.gt) goto loc_8208114C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// andc r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r7,r10,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r10.s64;
	// bne cr6,0x82081108
	if (!ctx.cr6.eq) goto loc_82081108;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8208114c
	if (ctx.cr6.lt) goto loc_8208114C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82081130
	goto loc_82081130;
loc_82081108:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8208111c
	if (!ctx.cr6.lt) goto loc_8208111C;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
loc_8208111C:
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8208114c
	if (ctx.cr6.lt) goto loc_8208114C;
	// subf r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82081130:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208114c
	if (ctx.cr6.eq) goto loc_8208114C;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// ble cr6,0x82081158
	if (!ctx.cr6.gt) goto loc_82081158;
loc_8208114C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820810c4
	if (!ctx.cr6.eq) goto loc_820810C4;
loc_82081158:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820811ac
	if (!ctx.cr6.eq) goto loc_820811AC;
loc_82081160:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12, ctx.xer);
	// blt cr6,0x820810b4
	if (ctx.cr6.lt) goto loc_820810B4;
loc_82081170:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r11,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82081198
	if (ctx.cr6.eq) goto loc_82081198;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4144
	ctx.r9.s64 = ctx.r10.s64 + 4144;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_82081198:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823051a8
	ctx.lr = 0x820811A0;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820811AC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820811d8
	ctx.lr = 0x820811BC;
	sub_820811D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823051a8
	ctx.lr = 0x820811C8;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820811D4"))) PPC_WEAK_FUNC(sub_820811D4);
PPC_FUNC_IMPL(__imp__sub_820811D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820811D8"))) PPC_WEAK_FUNC(sub_820811D8);
PPC_FUNC_IMPL(__imp__sub_820811D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820811E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208120c
	if (ctx.cr6.eq) goto loc_8208120C;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8208120C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r6,15
	ctx.r9.s64 = ctx.r6.s64 + 15;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r7,r10,0,0,14
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFE0000) | (ctx.r7.u64 & 0xFFFFFFFF0001FFFF);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r29,r9,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// oris r7,r7,4096
	ctx.r7.u64 = ctx.r7.u64 | 268435456;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// beq cr6,0x82081258
	if (ctx.cr6.eq) goto loc_82081258;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820814b8
	ctx.lr = 0x82081258;
	sub_820814B8(ctx, base);
loc_82081258:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820814b8
	ctx.lr = 0x82081268;
	sub_820814B8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// bge cr6,0x8208128c
	if (!ctx.cr6.lt) goto loc_8208128C;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_8208128C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081294"))) PPC_WEAK_FUNC(sub_82081294);
PPC_FUNC_IMPL(__imp__sub_82081294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081298"))) PPC_WEAK_FUNC(sub_82081298);
PPC_FUNC_IMPL(__imp__sub_82081298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820812A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x820812BC;
	sub_823052D8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// bl 0x82081360
	ctx.lr = 0x820812EC;
	sub_82081360(ctx, base);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// ble cr6,0x82081320
	if (!ctx.cr6.gt) goto loc_82081320;
loc_82081304:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82081304
	if (ctx.cr6.gt) goto loc_82081304;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82081320
	if (ctx.cr6.lt) goto loc_82081320;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82081320:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82081340
	if (ctx.cr6.eq) goto loc_82081340;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_82081340:
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// bl 0x823051a8
	ctx.lr = 0x82081350;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208135C"))) PPC_WEAK_FUNC(sub_8208135C);
PPC_FUNC_IMPL(__imp__sub_8208135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081360"))) PPC_WEAK_FUNC(sub_82081360);
PPC_FUNC_IMPL(__imp__sub_82081360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82081368;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8208140c
	if (!ctx.cr6.eq) goto loc_8208140C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// beq cr6,0x820813c8
	if (ctx.cr6.eq) goto loc_820813C8;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_820813C8:
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x820813f8
	if (ctx.cr6.eq) goto loc_820813F8;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_820813F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208140C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8208140C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8208149c
	if (!ctx.cr6.eq) goto loc_8208149C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r7,r8,r27
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r7.u32);
	// beq cr6,0x82081454
	if (ctx.cr6.eq) goto loc_82081454;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82081454:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8208149C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8208149C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820814B4"))) PPC_WEAK_FUNC(sub_820814B4);
PPC_FUNC_IMPL(__imp__sub_820814B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820814B8"))) PPC_WEAK_FUNC(sub_820814B8);
PPC_FUNC_IMPL(__imp__sub_820814B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820814C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r29,r8,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// subf. r31,r29,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x82081620
	if (!ctx.cr0.gt) goto loc_82081620;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x820814FC;
	sub_82081C00(ctx, base);
	// bl 0x820819c8
	ctx.lr = 0x82081500;
	sub_820819C8(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82081510;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8208151c
	if (!ctx.cr6.eq) goto loc_8208151C;
	// bl 0x821b3000
	ctx.lr = 0x8208151C;
	sub_821B3000(ctx, base);
loc_8208151C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081530
	if (ctx.cr6.eq) goto loc_82081530;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82081530:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82081560
	if (ctx.cr6.eq) goto loc_82081560;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r9,r11,4392
	ctx.r9.s64 = ctx.r11.s64 + 4392;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82081564
	goto loc_82081564;
loc_82081560:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82081564:
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r26,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r26.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bgt cr6,0x8208159c
	if (ctx.cr6.gt) goto loc_8208159C;
	// li r31,64
	ctx.r31.s64 = 64;
loc_8208159C:
	// li r9,64
	ctx.r9.s64 = 64;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// ble cr6,0x820815c4
	if (!ctx.cr6.gt) goto loc_820815C4;
loc_820815A8:
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x820815a8
	if (ctx.cr6.gt) goto loc_820815A8;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// blt cr6,0x820815c4
	if (ctx.cr6.lt) goto loc_820815C4;
	// li r10,11
	ctx.r10.s64 = 11;
loc_820815C4:
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// beq cr6,0x820815e4
	if (ctx.cr6.eq) goto loc_820815E4;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_820815E4:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82081600
	if (!ctx.cr6.lt) goto loc_82081600;
	// stw r11,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r11.u32);
loc_82081600:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82081620:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081634"))) PPC_WEAK_FUNC(sub_82081634);
PPC_FUNC_IMPL(__imp__sub_82081634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081638"))) PPC_WEAK_FUNC(sub_82081638);
PPC_FUNC_IMPL(__imp__sub_82081638) {
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
	// addi r9,r11,-31304
	ctx.r9.s64 = ctx.r11.s64 + -31304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8208166c
	if (ctx.cr6.eq) goto loc_8208166C;
	// bl 0x820818b0
	ctx.lr = 0x82081668;
	sub_820818B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8208166C:
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

__attribute__((alias("__imp__sub_82081680"))) PPC_WEAK_FUNC(sub_82081680);
PPC_FUNC_IMPL(__imp__sub_82081680) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,21520
	ctx.r5.s64 = ctx.r10.s64 + 21520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8233bdb8
	ctx.lr = 0x820816C4;
	sub_8233BDB8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82081708
	if (!ctx.cr6.eq) goto loc_82081708;
	// bl 0x822471d0
	ctx.lr = 0x820816D4;
	sub_822471D0(ctx, base);
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// cmplwi cr6,r3,1450
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1450, ctx.xer);
	// bne cr6,0x820816ec
	if (!ctx.cr6.eq) goto loc_820816EC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4176
	ctx.r9.s64 = ctx.r10.s64 + 4176;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820816EC:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,4256
	ctx.r8.s64 = ctx.r10.s64 + 4256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r8.u32);
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
	// b 0x8208171c
	goto loc_8208171C;
loc_82081708:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82246f00
	ctx.lr = 0x82081718;
	sub_82246F00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8208171C:
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

__attribute__((alias("__imp__sub_82081734"))) PPC_WEAK_FUNC(sub_82081734);
PPC_FUNC_IMPL(__imp__sub_82081734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081738"))) PPC_WEAK_FUNC(sub_82081738);
PPC_FUNC_IMPL(__imp__sub_82081738) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,4352
	ctx.r9.s64 = ctx.r11.s64 + 4352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82081770
	if (ctx.cr6.eq) goto loc_82081770;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82081770;
	sub_82080000(ctx, base);
loc_82081770:
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
}

__attribute__((alias("__imp__sub_82081788"))) PPC_WEAK_FUNC(sub_82081788);
PPC_FUNC_IMPL(__imp__sub_82081788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82081790;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// beq cr6,0x820817e8
	if (ctx.cr6.eq) goto loc_820817E8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820817E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820817E8:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82081854
	if (!ctx.cr6.eq) goto loc_82081854;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820811d8
	ctx.lr = 0x82081814;
	sub_820811D8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8208183c
	if (ctx.cr6.eq) goto loc_8208183C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8208183C:
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
	ctx.lr = 0x82081854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82081854:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82081298
	ctx.lr = 0x82081860;
	sub_82081298(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// xoris r8,r29,32768
	ctx.r8.u64 = ctx.r29.u64 ^ 2147483648;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// andc r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r29,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r29.s64;
	// addc r10,r11,r8
	ctx.xer.ca = (ctx.r11.u32 + ctx.r8.u32 < ctx.r11.u32);
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ctx.r9.u64;
	// bl 0x820811d8
	ctx.lr = 0x820818A8;
	sub_820811D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820818B0"))) PPC_WEAK_FUNC(sub_820818B0);
PPC_FUNC_IMPL(__imp__sub_820818B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820819ac
	if (ctx.cr6.eq) goto loc_820819AC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,26404
	ctx.r31.s64 = ctx.r11.s64 + 26404;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820818E4;
	sub_823052D8(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x820819a0
	if (!ctx.cr6.eq) goto loc_820819A0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820819a0
	if (ctx.cr6.eq) goto loc_820819A0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820819a0
	if (!ctx.cr6.lt) goto loc_820819A0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82081978
	if (ctx.cr6.eq) goto loc_82081978;
loc_82081950:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82081970
	if (ctx.cr6.eq) goto loc_82081970;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82081950
	if (!ctx.cr6.eq) goto loc_82081950;
	// b 0x82081978
	goto loc_82081978;
loc_82081970:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82081978:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82081990
	if (!ctx.cr6.eq) goto loc_82081990;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82081990:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8208199C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820819A0:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820819AC;
	sub_823051A8(ctx, base);
loc_820819AC:
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

__attribute__((alias("__imp__sub_820819C4"))) PPC_WEAK_FUNC(sub_820819C4);
PPC_FUNC_IMPL(__imp__sub_820819C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820819C8"))) PPC_WEAK_FUNC(sub_820819C8);
PPC_FUNC_IMPL(__imp__sub_820819C8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,26404
	ctx.r31.s64 = ctx.r11.s64 + 26404;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820819F0;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081a14
	if (ctx.cr6.eq) goto loc_82081A14;
loc_820819FC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82081a44
	if (!ctx.cr6.eq) goto loc_82081A44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820819fc
	if (!ctx.cr6.eq) goto loc_820819FC;
loc_82081A14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82081a6c
	if (!ctx.cr6.eq) goto loc_82081A6C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82081ac8
	ctx.lr = 0x82081A28;
	sub_82081AC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82081a6c
	if (!ctx.cr6.eq) goto loc_82081A6C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82081A3C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82081ab0
	goto loc_82081AB0;
loc_82081A44:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82081aa0
	goto loc_82081AA0;
loc_82081A6C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_82081AA0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82081AAC;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82081AB0:
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

__attribute__((alias("__imp__sub_82081AC8"))) PPC_WEAK_FUNC(sub_82081AC8);
PPC_FUNC_IMPL(__imp__sub_82081AC8) {
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
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82082030
	ctx.lr = 0x82081AFC;
	sub_82082030(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,26404
	ctx.r11.s64 = ctx.r11.s64 + 26404;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82081b18
	if (ctx.cr6.eq) goto loc_82081B18;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x82081b1c
	goto loc_82081B1C;
loc_82081B18:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82081B1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82081b5c
	if (ctx.cr6.eq) goto loc_82081B5C;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82081B54:
	// stwu r3,48(r10)
	ea = 48 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82081b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82081B54;
loc_82081B5C:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82081B7C"))) PPC_WEAK_FUNC(sub_82081B7C);
PPC_FUNC_IMPL(__imp__sub_82081B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081B80"))) PPC_WEAK_FUNC(sub_82081B80);
PPC_FUNC_IMPL(__imp__sub_82081B80) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82081B98;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82081ba4
	if (!ctx.cr6.eq) goto loc_82081BA4;
	// bl 0x821b3000
	ctx.lr = 0x82081BA4;
	sub_821B3000(ctx, base);
loc_82081BA4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081bb8
	if (ctx.cr6.eq) goto loc_82081BB8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82081BB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081BC8"))) PPC_WEAK_FUNC(sub_82081BC8);
PPC_FUNC_IMPL(__imp__sub_82081BC8) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82081BE0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82081bec
	if (!ctx.cr6.eq) goto loc_82081BEC;
	// bl 0x821b3000
	ctx.lr = 0x82081BEC;
	sub_821B3000(ctx, base);
loc_82081BEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081BFC"))) PPC_WEAK_FUNC(sub_82081BFC);
PPC_FUNC_IMPL(__imp__sub_82081BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081C00"))) PPC_WEAK_FUNC(sub_82081C00);
PPC_FUNC_IMPL(__imp__sub_82081C00) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82081C20;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82081c2c
	if (!ctx.cr6.eq) goto loc_82081C2C;
	// bl 0x821b3000
	ctx.lr = 0x82081C2C;
	sub_821B3000(ctx, base);
loc_82081C2C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82081c50
	if (!ctx.cr6.lt) goto loc_82081C50;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82081C50:
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

__attribute__((alias("__imp__sub_82081C64"))) PPC_WEAK_FUNC(sub_82081C64);
PPC_FUNC_IMPL(__imp__sub_82081C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081C68"))) PPC_WEAK_FUNC(sub_82081C68);
PPC_FUNC_IMPL(__imp__sub_82081C68) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,4480
	ctx.r9.s64 = ctx.r10.s64 + 4480;
	// addi r11,r3,252
	ctx.r11.s64 = ctx.r3.s64 + 252;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,260(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82081ca4
	if (ctx.cr6.eq) goto loc_82081CA4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82081CA4;
	sub_82246E18(ctx, base);
loc_82081CA4:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// addi r30,r10,4360
	ctx.r30.s64 = ctx.r10.s64 + 4360;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82081ccc
	if (ctx.cr6.eq) goto loc_82081CCC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82081CCC;
	sub_82246E18(ctx, base);
loc_82081CCC:
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82081cec
	if (ctx.cr6.eq) goto loc_82081CEC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82081CEC;
	sub_82246E18(ctx, base);
loc_82081CEC:
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

__attribute__((alias("__imp__sub_82081D04"))) PPC_WEAK_FUNC(sub_82081D04);
PPC_FUNC_IMPL(__imp__sub_82081D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081D08"))) PPC_WEAK_FUNC(sub_82081D08);
PPC_FUNC_IMPL(__imp__sub_82081D08) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,4436
	ctx.r10.s64 = ctx.r11.s64 + 4436;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82081c68
	ctx.lr = 0x82081D34;
	sub_82081C68(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82081d4c
	if (ctx.cr6.eq) goto loc_82081D4C;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82081D4C;
	sub_82080000(ctx, base);
loc_82081D4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82081D68"))) PPC_WEAK_FUNC(sub_82081D68);
PPC_FUNC_IMPL(__imp__sub_82081D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82081D70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r29,25072(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25072);
	// beq cr6,0x82081e08
	if (ctx.cr6.eq) goto loc_82081E08;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r29,132
	ctx.r31.s64 = ctx.r29.s64 + 132;
	// addi r4,r9,4396
	ctx.r4.s64 = ctx.r9.s64 + 4396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82081DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,32
	ctx.r5.s64 = 2097152;
	// lwzx r4,r30,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082278
	ctx.lr = 0x82081DC8;
	sub_82082278(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82081de0
	if (!ctx.cr6.eq) goto loc_82081DE0;
loc_82081DD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82081DE0:
	// lwzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwzx r8,r30,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stwx r7,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r7.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r31.u32);
	// stw r31,248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 248, ctx.r31.u32);
loc_82081E08:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82081e58
	if (ctx.cr6.eq) goto loc_82081E58;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// addi r4,r10,4404
	ctx.r4.s64 = ctx.r10.s64 + 4404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82081E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r8,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r4,r8,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x82082278
	ctx.lr = 0x82081E48;
	sub_82082278(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82081dd4
	if (ctx.cr6.eq) goto loc_82081DD4;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82081E58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081E64"))) PPC_WEAK_FUNC(sub_82081E64);
PPC_FUNC_IMPL(__imp__sub_82081E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081E68"))) PPC_WEAK_FUNC(sub_82081E68);
PPC_FUNC_IMPL(__imp__sub_82081E68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82081ec0
	if (!ctx.cr6.eq) goto loc_82081EC0;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82081E90;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82081e9c
	if (!ctx.cr6.eq) goto loc_82081E9C;
	// bl 0x821b3000
	ctx.lr = 0x82081E9C;
	sub_821B3000(ctx, base);
loc_82081E9C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82081eb8
	if (ctx.cr6.eq) goto loc_82081EB8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82081ebc
	goto loc_82081EBC;
loc_82081EB8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82081EBC:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82081EC0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82081ee0
	if (ctx.cr6.eq) goto loc_82081EE0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
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
loc_82081EE0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r31,256
	ctx.xer.ca = ctx.r31.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r31.s64;
	// subfze r3,r10
	temp.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r3.u64 = temp.u64;
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

__attribute__((alias("__imp__sub_82081F00"))) PPC_WEAK_FUNC(sub_82081F00);
PPC_FUNC_IMPL(__imp__sub_82081F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82081F08;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,248(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82082480
	ctx.lr = 0x82081F28;
	sub_82082480(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82082028
	if (!ctx.cr6.eq) goto loc_82082028;
	// addi r24,r25,252
	ctx.r24.s64 = ctx.r25.s64 + 252;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823052d8
	ctx.lr = 0x82081F40;
	sub_823052D8(ctx, base);
	// lwz r31,244(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82081f80
	if (ctx.cr6.eq) goto loc_82081F80;
loc_82081F4C:
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82081f74
	if (ctx.cr6.eq) goto loc_82081F74;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082480
	ctx.lr = 0x82081F68;
	sub_82082480(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82081fb8
	if (!ctx.cr6.eq) goto loc_82081FB8;
loc_82081F74:
	// lwz r31,108(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82081f4c
	if (!ctx.cr6.eq) goto loc_82081F4C;
loc_82081F80:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// ori r4,r4,112
	ctx.r4.u64 = ctx.r4.u64 | 112;
	// addi r3,r25,24
	ctx.r3.s64 = ctx.r25.s64 + 24;
	// bl 0x82082480
	ctx.lr = 0x82081F98;
	sub_82082480(ctx, base);
	// addic. r30,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r30.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82081fc8
	if (ctx.cr0.eq) goto loc_82081FC8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082830
	ctx.lr = 0x82081FB0;
	sub_82082830(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82081fcc
	goto loc_82081FCC;
loc_82081FB8:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// b 0x82082018
	goto loc_82082018;
loc_82081FC8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82081FCC:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082278
	ctx.lr = 0x82081FDC;
	sub_82082278(ctx, base);
	// lwz r11,244(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081ffc
	if (ctx.cr6.eq) goto loc_82081FFC;
loc_82081FEC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82081fec
	if (!ctx.cr6.eq) goto loc_82081FEC;
loc_82081FFC:
	// stw r31,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82082480
	ctx.lr = 0x82082014;
	sub_82082480(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82082018:
	// stw r31,248(r25)
	PPC_STORE_U32(ctx.r25.u32 + 248, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823051a8
	ctx.lr = 0x82082024;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82082028:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082030"))) PPC_WEAK_FUNC(sub_82082030);
PPC_FUNC_IMPL(__imp__sub_82082030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82082038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r31,25072(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// bl 0x82081e68
	ctx.lr = 0x82082058;
	sub_82081E68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820820a0
	if (!ctx.cr6.eq) goto loc_820820A0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82081f00
	ctx.lr = 0x82082074;
	sub_82081F00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82082100
	if (!ctx.cr6.eq) goto loc_82082100;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82082480
	ctx.lr = 0x82082090;
	sub_82082480(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82082100
	if (!ctx.cr6.eq) goto loc_82082100;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820820A0:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x820820f4
	if (ctx.cr6.eq) goto loc_820820F4;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820820c8
	if (ctx.cr6.eq) goto loc_820820C8;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820820d8
	if (ctx.cr6.eq) goto loc_820820D8;
loc_820820C8:
	// lis r10,-13569
	ctx.r10.s64 = -889257984;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,4412
	ctx.r8.s64 = ctx.r9.s64 + 4412;
	// stw r8,-13570(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13570, ctx.r8.u32);
loc_820820D8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82082480
	ctx.lr = 0x820820EC;
	sub_82082480(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82082100
	if (!ctx.cr6.eq) goto loc_82082100;
loc_820820F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82082100:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208210C"))) PPC_WEAK_FUNC(sub_8208210C);
PPC_FUNC_IMPL(__imp__sub_8208210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082110"))) PPC_WEAK_FUNC(sub_82082110);
PPC_FUNC_IMPL(__imp__sub_82082110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82082118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r30,25072(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// addi r29,r30,252
	ctx.r29.s64 = ctx.r30.s64 + 252;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82082134;
	sub_823052D8(ctx, base);
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082194
	if (ctx.cr6.eq) goto loc_82082194;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82082194
	if (ctx.cr6.eq) goto loc_82082194;
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082194
	if (ctx.cr6.eq) goto loc_82082194;
loc_8208215C:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82082194
	if (!ctx.cr6.eq) goto loc_82082194;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r8,r10,4096
	ctx.r8.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82082190
	if (ctx.cr6.lt) goto loc_82082190;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208215c
	if (!ctx.cr6.eq) goto loc_8208215C;
	// b 0x82082194
	goto loc_82082194;
loc_82082190:
	// stw r11,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r11.u32);
loc_82082194:
	// lwz r31,244(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82082234
	if (ctx.cr6.eq) goto loc_82082234;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82082234
	if (ctx.cr6.eq) goto loc_82082234;
loc_820821AC:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82082224
	if (ctx.cr6.eq) goto loc_82082224;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820821ec
	if (ctx.cr6.eq) goto loc_820821EC;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820821ec
	if (!ctx.cr6.gt) goto loc_820821EC;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r3,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_820821EC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82082224
	if (!ctx.cr6.eq) goto loc_82082224;
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82082224
	if (ctx.cr6.eq) goto loc_82082224;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82082220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82082228
	goto loc_82082228;
loc_82082224:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82082228:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820821ac
	if (!ctx.cr6.eq) goto loc_820821AC;
loc_82082234:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x8208223C;
	sub_823051A8(ctx, base);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// li r30,5
	ctx.r30.s64 = 5;
loc_82082244:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82082260
	if (ctx.cr6.eq) goto loc_82082260;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82082260
	if (!ctx.cr6.eq) goto loc_82082260;
	// bl 0x82080928
	ctx.lr = 0x82082260;
	sub_82080928(ctx, base);
loc_82082260:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82082244
	if (!ctx.cr0.eq) goto loc_82082244;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082274"))) PPC_WEAK_FUNC(sub_82082274);
PPC_FUNC_IMPL(__imp__sub_82082274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082278"))) PPC_WEAK_FUNC(sub_82082278);
PPC_FUNC_IMPL(__imp__sub_82082278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r7,r11,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r10,r7,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r7.s64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r8,r7,16
	ctx.r8.s64 = ctx.r7.s64 + 16;
	// add r31,r10,r5
	ctx.r31.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r5,r6,0,0,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC0000000;
	// stw r5,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r5.u32);
	// addi r11,r8,44
	ctx.r11.s64 = ctx.r8.s64 + 44;
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
loc_820822C0:
	// lwz r5,-32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// addi r7,r11,-28
	ctx.r7.s64 = ctx.r11.s64 + -28;
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// rlwinm r4,r5,0,0,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC0000000;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r4,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r4.u32);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// addi r8,r8,96
	ctx.r8.s64 = ctx.r8.s64 + 96;
	// lwz r30,-16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// rlwinm r30,r30,0,0,1
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC0000000;
	// stw r30,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r30.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC0000000;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r6,0,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC0000000;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r5,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r6,0,0,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC0000000;
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r4,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r4.u32);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r4,0,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC0000000;
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// stwu r3,24(r10)
	ea = 24 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820822c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820822C0;
	// lwz r6,56(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r4,60(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r9,60
	ctx.r11.s64 = ctx.r9.s64 + 60;
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwimi r3,r5,31,0,1
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0xC0000000) | (ctx.r3.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r3,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r3.u32);
	// lwz r10,56(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
loc_8208237C:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,12(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// clrlwi r3,r4,2
	ctx.r3.u64 = ctx.r4.u32 & 0x3FFFFFFF;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r3,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r3.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x8208237c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208237C;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r6,r8,12
	ctx.r6.s64 = ctx.r8.s64 + 12;
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// rlwinm r4,r4,0,0,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC0000000;
	// addi r10,r31,-256
	ctx.r10.s64 = ctx.r31.s64 + -256;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r10,r4,0,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r4,r10,0,0,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// lwz r4,100(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// lwz r10,104(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// clrlwi r31,r31,2
	ctx.r31.u64 = ctx.r31.u32 & 0x3FFFFFFF;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r4,r5,31,0,1
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0xC0000000) | (ctx.r4.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r4,r6,2
	ctx.r4.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// beq cr6,0x82082440
	if (ctx.cr6.eq) goto loc_82082440;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
loc_82082440:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwimi r10,r5,31,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// stw r6,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// stw r6,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208247C"))) PPC_WEAK_FUNC(sub_8208247C);
PPC_FUNC_IMPL(__imp__sub_8208247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082480"))) PPC_WEAK_FUNC(sub_82082480);
PPC_FUNC_IMPL(__imp__sub_82082480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82082488;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,12
	ctx.r24.s64 = ctx.r3.s64 + 12;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x823052d8
	ctx.lr = 0x820824AC;
	sub_823052D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820824f0
	if (ctx.cr6.eq) goto loc_820824F0;
	// rlwinm r11,r28,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// li r10,31
	ctx.r10.s64 = 31;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820824f0
	if (ctx.cr6.eq) goto loc_820824F0;
loc_820824C8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820824c8
	if (!ctx.cr6.eq) goto loc_820824C8;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bge cr6,0x820824f0
	if (!ctx.cr6.lt) goto loc_820824F0;
	// subfic r30,r10,26
	ctx.xer.ca = ctx.r10.u32 <= 26;
	ctx.r30.s64 = 26 - ctx.r10.s64;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// ble cr6,0x820824f0
	if (!ctx.cr6.gt) goto loc_820824F0;
	// li r30,11
	ctx.r30.s64 = 11;
loc_820824F0:
	// lis r29,32767
	ctx.r29.s64 = 2147418112;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12, ctx.xer);
	// bge cr6,0x820825d4
	if (!ctx.cr6.lt) goto loc_820825D4;
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r25
	ctx.r26.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82082514:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820825c4
	if (ctx.cr6.eq) goto loc_820825C4;
loc_82082524:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r6,r11,2
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820825b0
	if (ctx.cr6.lt) goto loc_820825B0;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x820825b0
	if (ctx.cr6.gt) goto loc_820825B0;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// andc r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r7,r10,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r10.s64;
	// bne cr6,0x8208256c
	if (!ctx.cr6.eq) goto loc_8208256C;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x820825b0
	if (ctx.cr6.lt) goto loc_820825B0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82082594
	goto loc_82082594;
loc_8208256C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82082580
	if (!ctx.cr6.lt) goto loc_82082580;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
loc_82082580:
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820825b0
	if (ctx.cr6.lt) goto loc_820825B0;
	// subf r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82082594:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820825b0
	if (ctx.cr6.eq) goto loc_820825B0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// ble cr6,0x820825bc
	if (!ctx.cr6.gt) goto loc_820825BC;
loc_820825B0:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82082524
	if (!ctx.cr6.eq) goto loc_82082524;
loc_820825BC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82082610
	if (!ctx.cr6.eq) goto loc_82082610;
loc_820825C4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12, ctx.xer);
	// blt cr6,0x82082514
	if (ctx.cr6.lt) goto loc_82082514;
loc_820825D4:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r11,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820825fc
	if (ctx.cr6.eq) goto loc_820825FC;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4144
	ctx.r9.s64 = ctx.r10.s64 + 4144;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820825FC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823051a8
	ctx.lr = 0x82082604;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_82082610:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82082638
	ctx.lr = 0x8208261C;
	sub_82082638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823051a8
	ctx.lr = 0x82082628;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082634"))) PPC_WEAK_FUNC(sub_82082634);
PPC_FUNC_IMPL(__imp__sub_82082634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082638"))) PPC_WEAK_FUNC(sub_82082638);
PPC_FUNC_IMPL(__imp__sub_82082638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82082640;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082670
	if (ctx.cr6.eq) goto loc_82082670;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82082670:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r10,31,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// beq cr6,0x820826cc
	if (ctx.cr6.eq) goto loc_820826CC;
	// stw r4,-12(r5)
	PPC_STORE_U32(ctx.r5.u32 + -12, ctx.r4.u32);
	// addi r31,r5,-16
	ctx.r31.s64 = ctx.r5.s64 + -16;
	// stw r29,-16(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r9,-12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r30,-8(r5)
	PPC_STORE_U32(ctx.r5.u32 + -8, ctx.r30.u32);
	// stw r11,-4(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82082b48
	ctx.lr = 0x820826C8;
	sub_82082B48(ctx, base);
	// b 0x820826d8
	goto loc_820826D8;
loc_820826CC:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_820826D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082b48
	ctx.lr = 0x820826E8;
	sub_82082B48(ctx, base);
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82082710
	if (!ctx.cr6.lt) goto loc_82082710;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_82082710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082718"))) PPC_WEAK_FUNC(sub_82082718);
PPC_FUNC_IMPL(__imp__sub_82082718) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,4360
	ctx.r9.s64 = ctx.r10.s64 + 4360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82082758
	if (ctx.cr6.eq) goto loc_82082758;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82082758;
	sub_82246E18(ctx, base);
loc_82082758:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082770
	if (ctx.cr6.eq) goto loc_82082770;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82082770;
	sub_82080000(ctx, base);
loc_82082770:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8208278C"))) PPC_WEAK_FUNC(sub_8208278C);
PPC_FUNC_IMPL(__imp__sub_8208278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082790"))) PPC_WEAK_FUNC(sub_82082790);
PPC_FUNC_IMPL(__imp__sub_82082790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82082798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,4360
	ctx.r10.s64 = ctx.r11.s64 + 4360;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820827DC;
	sub_82305000(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_8208280C:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8208280c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208280C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,4448
	ctx.r10.s64 = ctx.r11.s64 + 4448;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208282C"))) PPC_WEAK_FUNC(sub_8208282C);
PPC_FUNC_IMPL(__imp__sub_8208282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082830"))) PPC_WEAK_FUNC(sub_82082830);
PPC_FUNC_IMPL(__imp__sub_82082830) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82082790
	ctx.lr = 0x82082850;
	sub_82082790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,4448
	ctx.r9.s64 = ctx.r11.s64 + 4448;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82082888
	if (ctx.cr6.eq) goto loc_82082888;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x8208288c
	goto loc_8208288C;
loc_82082888:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8208288C:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820828A8"))) PPC_WEAK_FUNC(sub_820828A8);
PPC_FUNC_IMPL(__imp__sub_820828A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820828B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820828d0
	if (!ctx.cr6.eq) goto loc_820828D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820828D0:
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823052d8
	ctx.lr = 0x820828E0;
	sub_823052D8(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820829f4
	if (ctx.cr6.eq) goto loc_820829F4;
loc_82082904:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82082930
	if (!ctx.cr6.eq) goto loc_82082930;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// b 0x8208297c
	goto loc_8208297C;
loc_82082930:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,2
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82082998
	if (ctx.cr6.eq) goto loc_82082998;
	// clrlwi r9,r8,2
	ctx.r9.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addic. r10,r5,-16
	ctx.xer.ca = ctx.r5.u32 > 15;
	ctx.r10.s64 = ctx.r5.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82082978
	if (ctx.cr0.eq) goto loc_82082978;
	// li r9,32
	ctx.r9.s64 = 32;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r5,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r8,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 & ctx.r6.u64;
loc_82082978:
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_8208297C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82082998
	if (ctx.cr6.eq) goto loc_82082998;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_82082998:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820829e4
	if (ctx.cr6.eq) goto loc_820829E4;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820829d0
	if (!ctx.cr6.eq) goto loc_820829D0;
	// clrlwi r9,r9,2
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820829e4
	if (ctx.cr6.eq) goto loc_820829E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x820829e4
	goto loc_820829E4;
loc_820829D0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
loc_820829E4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82082904
	if (!ctx.cr6.eq) goto loc_82082904;
loc_820829F4:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82082A08:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082a74
	if (ctx.cr6.eq) goto loc_82082A74;
loc_82082A18:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82082a38
	if (ctx.cr6.eq) goto loc_82082A38;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_82082A38:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82082a58
	if (ctx.cr6.eq) goto loc_82082A58;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ctx.r6.u64;
loc_82082A58:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r9,r9,2
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne cr6,0x82082a18
	if (!ctx.cr6.eq) goto loc_82082A18;
loc_82082A74:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x82082a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82082A08;
	// addi r11,r8,12
	ctx.r11.s64 = ctx.r8.s64 + 12;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82082a90
	if (!ctx.cr6.eq) goto loc_82082A90;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82082a94
	if (ctx.cr6.eq) goto loc_82082A94;
loc_82082A90:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82082A94:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r5,r28,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r28.s64;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r6
	ctx.r31.u64 = ctx.r10.u64 & ctx.r6.u64;
	// bl 0x823051a8
	ctx.lr = 0x82082AC0;
	sub_823051A8(ctx, base);
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82082adc
	if (!ctx.cr6.eq) goto loc_82082ADC;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4324
	ctx.r9.s64 = ctx.r10.s64 + 4324;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_82082ADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082AE8"))) PPC_WEAK_FUNC(sub_82082AE8);
PPC_FUNC_IMPL(__imp__sub_82082AE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82081c68
	ctx.lr = 0x82082B08;
	sub_82081C68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082b28
	if (ctx.cr6.eq) goto loc_82082B28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82082b28
	if (ctx.cr6.eq) goto loc_82082B28;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82082B28;
	sub_82080000(ctx, base);
loc_82082B28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82082B44"))) PPC_WEAK_FUNC(sub_82082B44);
PPC_FUNC_IMPL(__imp__sub_82082B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082B48"))) PPC_WEAK_FUNC(sub_82082B48);
PPC_FUNC_IMPL(__imp__sub_82082B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r9,r11,19
	ctx.r9.s64 = ctx.r11.s64 + 19;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic. r10,r8,-16
	ctx.xer.ca = ctx.r8.u32 > 15;
	ctx.r10.s64 = ctx.r8.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82082c18
	if (!ctx.cr0.gt) goto loc_82082C18;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x82082c18
	if (ctx.cr6.lt) goto loc_82082C18;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82082ba4
	if (ctx.cr6.gt) goto loc_82082BA4;
	// li r10,64
	ctx.r10.s64 = 64;
loc_82082BA4:
	// li r8,64
	ctx.r8.s64 = 64;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// ble cr6,0x82082bcc
	if (!ctx.cr6.gt) goto loc_82082BCC;
loc_82082BB0:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82082bb0
	if (ctx.cr6.gt) goto loc_82082BB0;
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// blt cr6,0x82082bcc
	if (ctx.cr6.lt) goto loc_82082BCC;
	// li r9,11
	ctx.r9.s64 = 11;
loc_82082BCC:
	// addi r10,r9,15
	ctx.r10.s64 = ctx.r9.s64 + 15;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82082bec
	if (ctx.cr6.eq) goto loc_82082BEC;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82082BEC:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bge cr6,0x82082c10
	if (!ctx.cr6.lt) goto loc_82082C10;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_82082C10:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82082C18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82082C20"))) PPC_WEAK_FUNC(sub_82082C20);
PPC_FUNC_IMPL(__imp__sub_82082C20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r7,-13569
	ctx.r7.s64 = -889257984;
	// addi r8,r10,4520
	ctx.r8.s64 = ctx.r10.s64 + 4520;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82082c4c
	if (!ctx.cr6.gt) goto loc_82082C4C;
	// stw r8,-13570(r7)
	PPC_STORE_U32(ctx.r7.u32 + -13570, ctx.r8.u32);
loc_82082C4C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82082c68
	if (ctx.cr6.eq) goto loc_82082C68;
	// stw r8,-13570(r7)
	PPC_STORE_U32(ctx.r7.u32 + -13570, ctx.r8.u32);
loc_82082C68:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82082C78"))) PPC_WEAK_FUNC(sub_82082C78);
PPC_FUNC_IMPL(__imp__sub_82082C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82082C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// rlwinm r9,r4,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,25076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25076);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,25076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25076, ctx.r11.u32);
	// bne cr6,0x82082cc8
	if (!ctx.cr6.eq) goto loc_82082CC8;
	// rlwinm r11,r31,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82082cc4
	if (ctx.cr6.lt) goto loc_82082CC4;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82082cc8
	goto loc_82082CC8;
loc_82082CC4:
	// li r4,4096
	ctx.r4.s64 = 4096;
loc_82082CC8:
	// rlwinm r29,r31,4,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// beq cr6,0x82082cec
	if (ctx.cr6.eq) goto loc_82082CEC;
	// cmplwi cr6,r4,4096
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4096, ctx.xer);
	// bgt cr6,0x82082ce4
	if (ctx.cr6.gt) goto loc_82082CE4;
	// li r4,4096
	ctx.r4.s64 = 4096;
loc_82082CE4:
	// addi r11,r3,4095
	ctx.r11.s64 = ctx.r3.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82082CEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082030
	ctx.lr = 0x82082CFC;
	sub_82082030(ctx, base);
	// rlwinm r11,r31,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40000000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082d18
	if (ctx.cr6.eq) goto loc_82082D18;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82082D18;
	sub_8233EAF0(ctx, base);
loc_82082D18:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-16080
	ctx.r9.s64 = ctx.r11.s64 + -16080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82082d50
	if (ctx.cr6.eq) goto loc_82082D50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822472e0
	ctx.lr = 0x82082D3C;
	sub_822472E0(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
loc_82082D50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082D58"))) PPC_WEAK_FUNC(sub_82082D58);
PPC_FUNC_IMPL(__imp__sub_82082D58) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82082d9c
	if (ctx.cr6.eq) goto loc_82082D9C;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82082d90
	if (ctx.cr6.eq) goto loc_82082D90;
	// li r5,4
	ctx.r5.s64 = 4;
	// clrlwi r4,r11,2
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bl 0x822472e0
	ctx.lr = 0x82082D90;
	sub_822472E0(ctx, base);
loc_82082D90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82080000
	ctx.lr = 0x82082D9C;
	sub_82080000(ctx, base);
loc_82082D9C:
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

__attribute__((alias("__imp__sub_82082DB0"))) PPC_WEAK_FUNC(sub_82082DB0);
PPC_FUNC_IMPL(__imp__sub_82082DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,4323
	ctx.r3.s64 = ctx.r11.s64 + 4323;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82082DBC"))) PPC_WEAK_FUNC(sub_82082DBC);
PPC_FUNC_IMPL(__imp__sub_82082DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082DC0"))) PPC_WEAK_FUNC(sub_82082DC0);
PPC_FUNC_IMPL(__imp__sub_82082DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82082DC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r9,r10,4548
	ctx.r9.s64 = ctx.r10.s64 + 4548;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r27,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r27.u64);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r27,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r27,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82082e30
	if (!ctx.cr6.lt) goto loc_82082E30;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82082E30:
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82082e48
	if (!ctx.cr6.gt) goto loc_82082E48;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82082E48:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82082030
	ctx.lr = 0x82082E5C;
	sub_82082030(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82082E70:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82082e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82082E70;
	// clrlwi r25,r30,24
	ctx.r25.u64 = ctx.r30.u32 & 0xFF;
	// subfic r11,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r25.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,3
	ctx.r30.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82082ec4
	if (ctx.cr6.eq) goto loc_82082EC4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82082E98:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82082030
	ctx.lr = 0x82082EAC;
	sub_82082030(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// bne 0x82082e98
	if (!ctx.cr0.eq) goto loc_82082E98;
loc_82082EC4:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082edc
	if (ctx.cr6.eq) goto loc_82082EDC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82082EDC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82082ef0
	if (ctx.cr6.eq) goto loc_82082EF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82082EF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r27,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r27.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082F00"))) PPC_WEAK_FUNC(sub_82082F00);
PPC_FUNC_IMPL(__imp__sub_82082F00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82082f60
	ctx.lr = 0x82082F20;
	sub_82082F60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082f40
	if (ctx.cr6.eq) goto loc_82082F40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82082f40
	if (ctx.cr6.eq) goto loc_82082F40;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82082F40;
	sub_82080000(ctx, base);
loc_82082F40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82082F5C"))) PPC_WEAK_FUNC(sub_82082F5C);
PPC_FUNC_IMPL(__imp__sub_82082F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082F60"))) PPC_WEAK_FUNC(sub_82082F60);
PPC_FUNC_IMPL(__imp__sub_82082F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82082F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4548
	ctx.r10.s64 = ctx.r11.s64 + 4548;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821b9118
	ctx.lr = 0x82082F84;
	sub_821B9118(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r5,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, ctx.r5.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083004
	if (ctx.cr6.eq) goto loc_82083004;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82082FD8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082ff8
	if (ctx.cr6.eq) goto loc_82082FF8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82082FF8;
	sub_82080000(ctx, base);
loc_82082FF8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x82082fd8
	if (!ctx.cr0.eq) goto loc_82082FD8;
loc_82083004:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208301c
	if (ctx.cr6.eq) goto loc_8208301C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8208301C;
	sub_82080000(ctx, base);
loc_8208301C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82083024"))) PPC_WEAK_FUNC(sub_82083024);
PPC_FUNC_IMPL(__imp__sub_82083024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083028"))) PPC_WEAK_FUNC(sub_82083028);
PPC_FUNC_IMPL(__imp__sub_82083028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82083030;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8208304c
	if (ctx.cr6.gt) goto loc_8208304C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8208304C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// rlwinm r28,r10,31,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// bne cr6,0x82083068
	if (!ctx.cr6.eq) goto loc_82083068;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208310c
	if (ctx.cr6.eq) goto loc_8208310C;
loc_82083068:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083108
	if (ctx.cr6.eq) goto loc_82083108;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8208307C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82082030
	ctx.lr = 0x8208309C;
	sub_82082030(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r3,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r3.u32);
	// beq cr6,0x820830e8
	if (ctx.cr6.eq) goto loc_820830E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820830e4
	if (ctx.cr6.eq) goto loc_820830E4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820830e4
	if (ctx.cr6.eq) goto loc_820830E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8233e4e0
	ctx.lr = 0x820830E4;
	sub_8233E4E0(ctx, base);
loc_820830E4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_820830E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820830fc
	if (ctx.cr6.eq) goto loc_820830FC;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// lwz r3,-8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820830FC;
	sub_82080000(ctx, base);
loc_820830FC:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x8208307c
	if (!ctx.cr0.eq) goto loc_8208307C;
loc_82083108:
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
loc_8208310C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82083120"))) PPC_WEAK_FUNC(sub_82083120);
PPC_FUNC_IMPL(__imp__sub_82083120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82083128;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82083144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82083164
	if (ctx.cr6.eq) goto loc_82083164;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82083164:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r9,r11,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083194
	if (ctx.cr6.eq) goto loc_82083194;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82083198
	goto loc_82083198;
loc_82083194:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82083198:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083450
	if (ctx.cr6.eq) goto loc_82083450;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82083274
	if (ctx.cr6.eq) goto loc_82083274;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r8,2
	ctx.r8.s64 = 2;
loc_820831D4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_820831F0:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// stwcx. r5,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820831f0
	if (!ctx.cr0.eq) goto loc_820831F0;
loc_8208320C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8208320c
	if (!ctx.cr0.eq) goto loc_8208320C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82083244
	if (!ctx.cr6.eq) goto loc_82083244;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82083248
	goto loc_82083248;
loc_82083244:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82083248:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820831d4
	if (!ctx.cr6.eq) goto loc_820831D4;
loc_82083274:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82083450
	if (!ctx.cr6.eq) goto loc_82083450;
	// rlwinm r5,r11,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8208329c
	if (ctx.cr6.eq) goto loc_8208329C;
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82083450
	if (!ctx.cr6.eq) goto loc_82083450;
loc_8208329C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82083450
	if (!ctx.cr6.eq) goto loc_82083450;
loc_820832C4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// rlwinm r29,r10,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r29,r7
	ctx.r8.u64 = ctx.r29.u64 + ctx.r7.u64;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r30,r4,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r4.s64;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpld cr6,r3,r9
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x82083304
	if (!ctx.cr6.lt) goto loc_82083304;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82083304:
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8208331c
	if (ctx.cr6.eq) goto loc_8208331C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8208331C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82083334
	if (ctx.cr6.eq) goto loc_82083334;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82083334:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82083368
	if (!ctx.cr6.eq) goto loc_82083368;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82083368
	if (!ctx.cr6.eq) goto loc_82083368;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// beq cr6,0x8208336c
	if (ctx.cr6.eq) goto loc_8208336C;
loc_82083368:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8208336C:
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x821b8968
	ctx.lr = 0x82083380;
	sub_821B8968(ctx, base);
	// ld r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stdx r5,r29,r4
	PPC_STORE_U64(ctx.r29.u32 + ctx.r4.u32, ctx.r5.u64);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_820833C0:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r7,r26,r8
	ctx.r7.u64 = ctx.r26.u64 | ctx.r8.u64;
	// stwcx. r7,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820833c0
	if (!ctx.cr0.eq) goto loc_820833C0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// ori r11,r8,8
	ctx.r11.u64 = ctx.r8.u64 | 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82083410
	if (ctx.cr6.eq) goto loc_82083410;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82083408
	if (ctx.cr6.eq) goto loc_82083408;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// b 0x82083410
	goto loc_82083410;
loc_82083408:
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82083410:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82083450
	if (!ctx.cr6.eq) goto loc_82083450;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82083450
	if (!ctx.cr6.eq) goto loc_82083450;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820832c4
	if (ctx.cr6.eq) goto loc_820832C4;
loc_82083450:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82083458"))) PPC_WEAK_FUNC(sub_82083458);
PPC_FUNC_IMPL(__imp__sub_82083458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82083460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r9,r3,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8208349c
	if (!ctx.cr6.eq) goto loc_8208349C;
loc_82083490:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8208349C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r3,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083558
	if (ctx.cr6.eq) goto loc_82083558;
	// li r29,-7
	ctx.r29.s64 = -7;
loc_820834C8:
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r4
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x820834ec
	if (ctx.cr6.gt) goto loc_820834EC;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// cmpld cr6,r8,r4
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x82083554
	if (ctx.cr6.gt) goto loc_82083554;
loc_820834EC:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_820834F4:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 & ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820834f4
	if (!ctx.cr0.eq) goto loc_820834F4;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82083528
	if (!ctx.cr6.eq) goto loc_82083528;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// b 0x8208352c
	goto loc_8208352C;
loc_82083528:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8208352C:
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r3,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820834c8
	if (!ctx.cr6.eq) goto loc_820834C8;
	// b 0x82083558
	goto loc_82083558;
loc_82083554:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82083558:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r7,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083490
	if (ctx.cr6.eq) goto loc_82083490;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// li r8,4
	ctx.r8.s64 = 4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82083578:
	// mfmsr r31
	ctx.r31.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwcx. r3,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	ctx.msr = (ctx.r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82083578
	if (!ctx.cr0.eq) goto loc_82083578;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// blt cr6,0x820835c4
	if (ctx.cr6.lt) goto loc_820835C4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_820835C4:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820835D8;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820835E4"))) PPC_WEAK_FUNC(sub_820835E4);
PPC_FUNC_IMPL(__imp__sub_820835E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820835E8"))) PPC_WEAK_FUNC(sub_820835E8);
PPC_FUNC_IMPL(__imp__sub_820835E8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,4552
	ctx.r9.s64 = ctx.r10.s64 + 4552;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82083628
	if (ctx.cr6.eq) goto loc_82083628;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82083628;
	sub_82246E18(ctx, base);
loc_82083628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082f60
	ctx.lr = 0x82083630;
	sub_82082F60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083648
	if (ctx.cr6.eq) goto loc_82083648;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82083648;
	sub_82080000(ctx, base);
loc_82083648:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82083664"))) PPC_WEAK_FUNC(sub_82083664);
PPC_FUNC_IMPL(__imp__sub_82083664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083668"))) PPC_WEAK_FUNC(sub_82083668);
PPC_FUNC_IMPL(__imp__sub_82083668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82083670;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820836A8;
	sub_82305000(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,-7492
	ctx.r8.s64 = ctx.r10.s64 + -7492;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r7,168
	ctx.r7.s64 = 168;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lfs f0,424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,540
	ctx.r3.s64 = ctx.r31.s64 + 540;
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stb r5,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r5.u8);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stb r30,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r30.u8);
	// stb r30,533(r31)
	PPC_STORE_U8(ctx.r31.u32 + 533, ctx.r30.u8);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82083774;
	sub_82305000(ctx, base);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82083794;
	sub_82305000(ctx, base);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// addi r3,r31,580
	ctx.r3.s64 = ctx.r31.s64 + 580;
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820837B4;
	sub_82305000(ctx, base);
	// stw r29,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r29.u32);
	// stb r30,601(r31)
	PPC_STORE_U8(ctx.r31.u32 + 601, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820837C8"))) PPC_WEAK_FUNC(sub_820837C8);
PPC_FUNC_IMPL(__imp__sub_820837C8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208383c
	if (ctx.cr6.eq) goto loc_8208383C;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f1,40(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82083830
	if (ctx.cr6.eq) goto loc_82083830;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfd f2,624(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 624);
	// bl 0x8233c318
	ctx.lr = 0x8208380C;
	sub_8233C318(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r9,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r9.u8);
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
loc_82083830:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
loc_8208383C:
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

__attribute__((alias("__imp__sub_82083850"))) PPC_WEAK_FUNC(sub_82083850);
PPC_FUNC_IMPL(__imp__sub_82083850) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820838c4
	if (ctx.cr6.eq) goto loc_820838C4;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f1,40(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820838b8
	if (ctx.cr6.eq) goto loc_820838B8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfd f2,624(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 624);
	// bl 0x8233c318
	ctx.lr = 0x82083894;
	sub_8233C318(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r9,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r9.u8);
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
loc_820838B8:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
loc_820838C4:
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

__attribute__((alias("__imp__sub_820838D8"))) PPC_WEAK_FUNC(sub_820838D8);
PPC_FUNC_IMPL(__imp__sub_820838D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820838E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82336e48
	ctx.lr = 0x820838F4;
	sub_82336E48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336f10
	ctx.lr = 0x82083904;
	sub_82336F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208390C"))) PPC_WEAK_FUNC(sub_8208390C);
PPC_FUNC_IMPL(__imp__sub_8208390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083910"))) PPC_WEAK_FUNC(sub_82083910);
PPC_FUNC_IMPL(__imp__sub_82083910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083978
	if (ctx.cr6.eq) goto loc_82083978;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82083948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823413b0
	ctx.lr = 0x82083950;
	sub_823413B0(ctx, base);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x8208395C;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82083978:
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
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82083998"))) PPC_WEAK_FUNC(sub_82083998);
PPC_FUNC_IMPL(__imp__sub_82083998) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820839f4
	if (ctx.cr6.eq) goto loc_820839F4;
	// addi r31,r3,540
	ctx.r31.s64 = ctx.r3.s64 + 540;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x820839CC;
	sub_823052D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82315b60
	ctx.lr = 0x820839D8;
	sub_82315B60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x823051a8
	ctx.lr = 0x820839EC;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x820839f8
	goto loc_820839F8;
loc_820839F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820839F8:
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

__attribute__((alias("__imp__sub_82083A10"))) PPC_WEAK_FUNC(sub_82083A10);
PPC_FUNC_IMPL(__imp__sub_82083A10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82083668
	ctx.lr = 0x82083A2C;
	sub_82083668(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// stb r30,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r30.u8);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stb r30,613(r31)
	PPC_STORE_U8(ctx.r31.u32 + 613, ctx.r30.u8);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82083A58;
	sub_82305000(ctx, base);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r30.u8);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82083A84"))) PPC_WEAK_FUNC(sub_82083A84);
PPC_FUNC_IMPL(__imp__sub_82083A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083A88"))) PPC_WEAK_FUNC(sub_82083A88);
PPC_FUNC_IMPL(__imp__sub_82083A88) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,600(r3)
	PPC_STORE_U8(ctx.r3.u32 + 600, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083b74
	if (ctx.cr6.eq) goto loc_82083B74;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r9,r11,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r9,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r9.u32);
	// lwz r8,508(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r7,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r7.u32);
	// lwz r6,508(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// oris r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 | 2097152;
	// stw r5,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r5.u32);
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// oris r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 | 2097152;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// bl 0x82085598
	ctx.lr = 0x82083AF0;
	sub_82085598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085408
	ctx.lr = 0x82083AF8;
	sub_82085408(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82083b50
	if (ctx.cr6.eq) goto loc_82083B50;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r30,r11,-23448
	ctx.r30.s64 = ctx.r11.s64 + -23448;
	// lfs f31,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_82083B18:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083b50
	if (ctx.cr6.eq) goto loc_82083B50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82316728
	ctx.lr = 0x82083B30;
	sub_82316728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82084078
	ctx.lr = 0x82083B3C;
	sub_82084078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x82083B44;
	sub_82247328(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82083b18
	if (!ctx.cr6.eq) goto loc_82083B18;
loc_82083B50:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// bl 0x82085478
	ctx.lr = 0x82083B6C;
	sub_82085478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82086eb8
	ctx.lr = 0x82083B74;
	sub_82086EB8(ctx, base);
loc_82083B74:
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addi r11,r31,616
	ctx.r11.s64 = ctx.r31.s64 + 616;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82083b8c
	if (ctx.cr6.eq) goto loc_82083B8C;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82083B8C;
	sub_82246E18(ctx, base);
loc_82083B8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82086ba8
	ctx.lr = 0x82083B94;
	sub_82086BA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82083BB0"))) PPC_WEAK_FUNC(sub_82083BB0);
PPC_FUNC_IMPL(__imp__sub_82083BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82083BB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82083bf4
	if (!ctx.cr6.eq) goto loc_82083BF4;
	// bl 0x820ddca8
	ctx.lr = 0x82083BDC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82083bec
	if (ctx.cr6.eq) goto loc_82083BEC;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82083c2c
	goto loc_82083C2C;
loc_82083BEC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82083c2c
	goto loc_82083C2C;
loc_82083BF4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82083c54
	if (ctx.cr6.eq) goto loc_82083C54;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82083c14
	if (!ctx.cr6.eq) goto loc_82083C14;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82083c28
	goto loc_82083C28;
loc_82083C14:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82083C28;
	sub_820F3178(ctx, base);
loc_82083C28:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82083C2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82083c54
	if (ctx.cr6.eq) goto loc_82083C54;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82083c4c
	if (!ctx.cr6.eq) goto loc_82083C4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x82083C48;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_82083C4C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x82083c58
	goto loc_82083C58;
loc_82083C54:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82083C58:
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// lwz r9,152(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// lwz r8,160(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// stw r8,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r8.u32);
	// lfs f0,164(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lwz r7,144(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// lwz r6,148(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r4,r5,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82083cbc
	if (ctx.cr6.eq) goto loc_82083CBC;
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r10.u8);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82083CBC:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// lwz r10,644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82083CD4"))) PPC_WEAK_FUNC(sub_82083CD4);
PPC_FUNC_IMPL(__imp__sub_82083CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083CD8"))) PPC_WEAK_FUNC(sub_82083CD8);
PPC_FUNC_IMPL(__imp__sub_82083CD8) {
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
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// beq cr6,0x82083d5c
	if (ctx.cr6.eq) goto loc_82083D5C;
	// lwz r10,508(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// lwz r8,508(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lwz r7,508(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r6,r8,0,11,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FF000;
	// rlwinm r5,r7,0,20,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE00;
	// rlwinm r6,r6,0,19,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF01FFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r11,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x82083d58
	if (ctx.cr6.eq) goto loc_82083D58;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82083d44
	if (!ctx.cr6.eq) goto loc_82083D44;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083d50
	if (ctx.cr6.eq) goto loc_82083D50;
loc_82083D44:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083d58
	if (ctx.cr6.eq) goto loc_82083D58;
loc_82083D50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085598
	ctx.lr = 0x82083D58;
	sub_82085598(ctx, base);
loc_82083D58:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
loc_82083D5C:
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82083D7C"))) PPC_WEAK_FUNC(sub_82083D7C);
PPC_FUNC_IMPL(__imp__sub_82083D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083D80"))) PPC_WEAK_FUNC(sub_82083D80);
PPC_FUNC_IMPL(__imp__sub_82083D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82083D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82083e08
	if (ctx.cr6.eq) goto loc_82083E08;
	// addi r28,r3,616
	ctx.r28.s64 = ctx.r3.s64 + 616;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x82083DC0;
	sub_823052D8(ctx, base);
	// lwz r31,636(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82083e00
	if (ctx.cr6.eq) goto loc_82083E00;
loc_82083DCC:
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r11,r31,508
	ctx.r11.s64 = ctx.r31.s64 + 508;
	// lwz r8,644(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82083df8
	if (!ctx.cr6.eq) goto loc_82083DF8;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8208fe20
	ctx.lr = 0x82083DF8;
	sub_8208FE20(ctx, base);
loc_82083DF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82083dcc
	if (!ctx.cr6.eq) goto loc_82083DCC;
loc_82083E00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x82083E08;
	sub_823051A8(ctx, base);
loc_82083E08:
	// lwz r11,644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 644, ctx.r11.u32);
	// bl 0x82083bb0
	ctx.lr = 0x82083E20;
	sub_82083BB0(ctx, base);
	// li r10,68
	ctx.r10.s64 = 68;
	// li r9,58
	ctx.r9.s64 = 58;
	// li r8,92
	ctx.r8.s64 = 92;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// bl 0x8233c048
	ctx.lr = 0x82083E4C;
	sub_8233C048(ctx, base);
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82083E54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82083e54
	if (!ctx.cr6.eq) goto loc_82083E54;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r31,r10,4556
	ctx.r31.s64 = ctx.r10.s64 + 4556;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8233c0a8
	ctx.lr = 0x82083E84;
	sub_8233C0A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82083ec8
	if (!ctx.cr6.eq) goto loc_82083EC8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4564
	ctx.r4.s64 = ctx.r11.s64 + 4564;
	// bl 0x8233c0a8
	ctx.lr = 0x82083E9C;
	sub_8233C0A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82083ec8
	if (!ctx.cr6.eq) goto loc_82083EC8;
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82083EBC:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82083ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82083EBC;
loc_82083EC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,240
	ctx.r3.s64 = ctx.r29.s64 + 240;
	// bl 0x821bb4d0
	ctx.lr = 0x82083ED4;
	sub_821BB4D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r11.u32);
	// bl 0x82083cd8
	ctx.lr = 0x82083EE4;
	sub_82083CD8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82083EEC"))) PPC_WEAK_FUNC(sub_82083EEC);
PPC_FUNC_IMPL(__imp__sub_82083EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083EF0"))) PPC_WEAK_FUNC(sub_82083EF0);
PPC_FUNC_IMPL(__imp__sub_82083EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82083EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82084060
	if (ctx.cr6.eq) goto loc_82084060;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,4,24,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFFFFFFFFEFF) | (ctx.r11.u64 & 0x100);
	// stw r11,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r11.u32);
	// bl 0x820851f8
	ctx.lr = 0x82083F24;
	sub_820851F8(ctx, base);
	// lwz r9,508(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 508);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r7,r9,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 508, ctx.r7.u32);
	// bne cr6,0x8208406c
	if (!ctx.cr6.eq) goto loc_8208406C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r3,512(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 512);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 | 1;
	// ori r30,r10,6
	ctx.r30.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82083f6c
	if (!ctx.cr6.eq) goto loc_82083F6C;
	// bl 0x820ddca8
	ctx.lr = 0x82083F5C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82083f7c
	if (ctx.cr6.eq) goto loc_82083F7C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82083f9c
	goto loc_82083F9C;
loc_82083F6C:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82083fc4
	if (ctx.cr6.eq) goto loc_82083FC4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82083f84
	if (!ctx.cr6.eq) goto loc_82083F84;
loc_82083F7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82083f9c
	goto loc_82083F9C;
loc_82083F84:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82083F98;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82083F9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82083fc4
	if (ctx.cr6.eq) goto loc_82083FC4;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82083fc4
	if (ctx.cr6.eq) goto loc_82083FC4;
	// lwz r11,608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 608);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,115
	ctx.r4.s64 = 115;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x82083FC4;
	sub_820DAF68(ctx, base);
loc_82083FC4:
	// lwz r11,508(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 508);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82083fe8
	if (ctx.cr6.eq) goto loc_82083FE8;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82083FE8:
	// lwz r3,512(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 512);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82084008
	if (!ctx.cr6.eq) goto loc_82084008;
	// bl 0x820ddca8
	ctx.lr = 0x82083FF8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084018
	if (ctx.cr6.eq) goto loc_82084018;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82084038
	goto loc_82084038;
loc_82084008:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82084060
	if (ctx.cr6.eq) goto loc_82084060;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82084020
	if (!ctx.cr6.eq) goto loc_82084020;
loc_82084018:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82084038
	goto loc_82084038;
loc_82084020:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82084034;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82084038:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084060
	if (ctx.cr6.eq) goto loc_82084060;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82084060
	if (ctx.cr6.eq) goto loc_82084060;
	// lwz r11,608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 608);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x82084060;
	sub_820DAF68(ctx, base);
loc_82084060:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8208406C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82084078"))) PPC_WEAK_FUNC(sub_82084078);
PPC_FUNC_IMPL(__imp__sub_82084078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82084080;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820840c8
	if (!ctx.cr6.eq) goto loc_820840C8;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82084c18
	if (ctx.cr6.eq) goto loc_82084C18;
	// bl 0x82083ef0
	ctx.lr = 0x820840B0;
	sub_82083EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084c18
	if (ctx.cr6.eq) goto loc_82084C18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084c18
	if (ctx.cr6.eq) goto loc_82084C18;
loc_820840C8:
	// lbz r11,601(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 601);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820840e4
	if (ctx.cr6.eq) goto loc_820840E4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_820840E4:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82084108
	if (ctx.cr6.eq) goto loc_82084108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82084d40
	ctx.lr = 0x820840FC;
	sub_82084D40(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82084108:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r10,604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r25,r11,15640
	ctx.r25.s64 = ctx.r11.s64 + 15640;
	// lhz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82084124
	if (ctx.cr6.eq) goto loc_82084124;
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
loc_82084124:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208414c
	if (ctx.cr6.eq) goto loc_8208414C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208414c
	if (ctx.cr6.eq) goto loc_8208414C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085408
	ctx.lr = 0x8208414C;
	sub_82085408(ctx, base);
loc_8208414C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084178
	if (ctx.cr6.eq) goto loc_82084178;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82084178
	if (ctx.cr6.eq) goto loc_82084178;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084178
	if (ctx.cr6.eq) goto loc_82084178;
	// bl 0x82088178
	ctx.lr = 0x82084178;
	sub_82088178(ctx, base);
loc_82084178:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820841a4
	if (ctx.cr6.eq) goto loc_820841A4;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820841a4
	if (ctx.cr6.eq) goto loc_820841A4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820841a4
	if (ctx.cr6.eq) goto loc_820841A4;
	// bl 0x82088178
	ctx.lr = 0x820841A4;
	sub_82088178(ctx, base);
loc_820841A4:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820841c0
	if (ctx.cr6.eq) goto loc_820841C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82084c28
	ctx.lr = 0x820841C0;
	sub_82084C28(ctx, base);
loc_820841C0:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82319340
	ctx.lr = 0x820841CC;
	sub_82319340(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82315c08
	ctx.lr = 0x820841D8;
	sub_82315C08(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// rlwinm r6,r9,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// ori r26,r10,1
	ctx.r26.u64 = ctx.r10.u64 | 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f31,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// ori r24,r7,6
	ctx.r24.u64 = ctx.r7.u64 | 6;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8208431c
	if (ctx.cr6.eq) goto loc_8208431C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8208431c
	if (ctx.cr6.eq) goto loc_8208431C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// bne cr6,0x82084244
	if (!ctx.cr6.eq) goto loc_82084244;
	// bl 0x820ddca8
	ctx.lr = 0x82084234;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208424c
	if (ctx.cr6.eq) goto loc_8208424C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8208427c
	goto loc_8208427C;
loc_82084244:
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82084254
	if (!ctx.cr6.eq) goto loc_82084254;
loc_8208424C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8208427c
	goto loc_8208427C;
loc_82084254:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82084264
	if (!ctx.cr6.eq) goto loc_82084264;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8208427c
	goto loc_8208427C;
loc_82084264:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82084278;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8208427C:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x820842b4
	if (ctx.cr6.eq) goto loc_820842B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208431c
	if (ctx.cr6.eq) goto loc_8208431C;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208431c
	if (ctx.cr6.eq) goto loc_8208431C;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,87
	ctx.r4.s64 = 87;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x820842B0;
	sub_820DAF68(ctx, base);
	// b 0x8208431c
	goto loc_8208431C;
loc_820842B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208431c
	if (ctx.cr6.eq) goto loc_8208431C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208431c
	if (ctx.cr6.eq) goto loc_8208431C;
	// lwz r10,608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x820842f0
	if (!ctx.cr6.eq) goto loc_820842F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820842EC;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820842F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// li r6,87
	ctx.r6.s64 = 87;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820ddb60
	ctx.lr = 0x8208431C;
	sub_820DDB60(ctx, base);
loc_8208431C:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82084388
	if (ctx.cr6.eq) goto loc_82084388;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208435c
	if (ctx.cr6.eq) goto loc_8208435C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8208435c
	if (!ctx.cr6.eq) goto loc_8208435C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// b 0x82084388
	goto loc_82084388;
loc_8208435C:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208437c
	if (ctx.cr6.eq) goto loc_8208437C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// b 0x82084388
	goto loc_82084388;
loc_8208437C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085338
	ctx.lr = 0x82084388;
	sub_82085338(ctx, base);
loc_82084388:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820843d4
	if (ctx.cr6.eq) goto loc_820843D4;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820843d4
	if (!ctx.cr6.eq) goto loc_820843D4;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820843c8
	if (ctx.cr6.eq) goto loc_820843C8;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// b 0x820843d4
	goto loc_820843D4;
loc_820843C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085398
	ctx.lr = 0x820843D4;
	sub_82085398(ctx, base);
loc_820843D4:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82084498
	if (ctx.cr6.eq) goto loc_82084498;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084498
	if (!ctx.cr6.eq) goto loc_82084498;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82084498
	if (!ctx.cr6.eq) goto loc_82084498;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,19,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FE0;
	// rlwinm r10,r10,0,26,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF03F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084498
	if (!ctx.cr6.eq) goto loc_82084498;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// bne cr6,0x82084440
	if (!ctx.cr6.eq) goto loc_82084440;
	// bl 0x820ddca8
	ctx.lr = 0x82084430;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084450
	if (ctx.cr6.eq) goto loc_82084450;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82084470
	goto loc_82084470;
loc_82084440:
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82084498
	if (ctx.cr6.eq) goto loc_82084498;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82084458
	if (!ctx.cr6.eq) goto loc_82084458;
loc_82084450:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82084470
	goto loc_82084470;
loc_82084458:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x8208446C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82084470:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084498
	if (ctx.cr6.eq) goto loc_82084498;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084498
	if (ctx.cr6.eq) goto loc_82084498;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,114
	ctx.r4.s64 = 114;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x82084498;
	sub_820DAF68(ctx, base);
loc_82084498:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820847cc
	if (ctx.cr6.eq) goto loc_820847CC;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,18,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	// rlwinm r10,r10,0,23,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE1FF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820844d4
	if (ctx.cr6.eq) goto loc_820844D4;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820847cc
	if (ctx.cr6.eq) goto loc_820847CC;
loc_820844D4:
	// addi r30,r31,580
	ctx.r30.s64 = ctx.r31.s64 + 580;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x820844E4;
	sub_823052D8(ctx, base);
	// stb r27,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r27.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x820844F0;
	sub_823051A8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820846fc
	if (ctx.cr6.lt) goto loc_820846FC;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82316b80
	ctx.lr = 0x8208450C;
	sub_82316B80(ctx, base);
	// lwz r8,508(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// rlwinm r6,r8,0,22,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r6,r6,0,17,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r6.u32);
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ori r3,r4,2048
	ctx.r3.u64 = ctx.r4.u64 | 2048;
	// stw r3,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r3.u32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r9,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r9.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r7,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r5,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r5.u32);
	// beq cr6,0x82084570
	if (ctx.cr6.eq) goto loc_82084570;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// bl 0x82085408
	ctx.lr = 0x82084570;
	sub_82085408(ctx, base);
loc_82084570:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x820847cc
	if (ctx.cr6.eq) goto loc_820847CC;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82315c08
	ctx.lr = 0x82084588;
	sub_82315C08(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820845c8
	if (!ctx.cr6.eq) goto loc_820845C8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820845c8
	if (!ctx.cr6.eq) goto loc_820845C8;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820845bc
	if (ctx.cr6.eq) goto loc_820845BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085408
	ctx.lr = 0x820845B8;
	sub_82085408(ctx, base);
	// b 0x820845c8
	goto loc_820845C8;
loc_820845BC:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82318f40
	ctx.lr = 0x820845C8;
	sub_82318F40(ctx, base);
loc_820845C8:
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208461c
	if (ctx.cr6.eq) goto loc_8208461C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820845f0
	if (ctx.cr6.eq) goto loc_820845F0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820845f4
	goto loc_820845F4;
loc_820845F0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_820845F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208461c
	if (ctx.cr6.eq) goto loc_8208461C;
	// lwz r11,2136(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2136, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82084618
	if (!ctx.cr6.eq) goto loc_82084618;
	// bl 0x82313430
	ctx.lr = 0x82084618;
	sub_82313430(ctx, base);
loc_82084618:
	// stb r27,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r27.u8);
loc_8208461C:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// beq cr6,0x82084c18
	if (ctx.cr6.eq) goto loc_82084C18;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084664
	if (!ctx.cr6.eq) goto loc_82084664;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82084694
	goto loc_82084694;
loc_82084664:
	// addi r8,r1,204
	ctx.r8.s64 = ctx.r1.s64 + 204;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
loc_82084694:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820846e8
	if (ctx.cr6.eq) goto loc_820846E8;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820846b0
	if (!ctx.cr6.eq) goto loc_820846B0;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820846dc
	goto loc_820846DC;
loc_820846B0:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
loc_820846DC:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x820846e8
	if (!ctx.cr6.gt) goto loc_820846E8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820846E8:
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x82181bb0
	ctx.lr = 0x820846F0;
	sub_82181BB0(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_820846FC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820847cc
	if (!ctx.cr6.eq) goto loc_820847CC;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// rlwinm r10,r11,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ori r8,r9,2048
	ctx.r8.u64 = ctx.r9.u64 | 2048;
	// stw r8,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r8.u32);
	// bne cr6,0x82084744
	if (!ctx.cr6.eq) goto loc_82084744;
	// bl 0x820ddca8
	ctx.lr = 0x82084734;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084754
	if (ctx.cr6.eq) goto loc_82084754;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82084774
	goto loc_82084774;
loc_82084744:
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x8208479c
	if (ctx.cr6.eq) goto loc_8208479C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8208475c
	if (!ctx.cr6.eq) goto loc_8208475C;
loc_82084754:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82084774
	goto loc_82084774;
loc_8208475C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82084770;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82084774:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208479c
	if (ctx.cr6.eq) goto loc_8208479C;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208479c
	if (ctx.cr6.eq) goto loc_8208479C;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,115
	ctx.r4.s64 = 115;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x8208479C;
	sub_820DAF68(ctx, base);
loc_8208479C:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820847cc
	if (ctx.cr6.eq) goto loc_820847CC;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// bl 0x82085598
	ctx.lr = 0x820847C0;
	sub_82085598(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_820847CC:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208480c
	if (ctx.cr6.eq) goto loc_8208480C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8208480c
	if (ctx.cr6.eq) goto loc_8208480C;
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x820847FC;
	sub_823052D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82083120
	ctx.lr = 0x82084804;
	sub_82083120(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x8208480C;
	sub_823051A8(ctx, base);
loc_8208480C:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,7,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF800;
	// rlwinm r10,r10,0,20,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF000FFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82084b48
	if (ctx.cr6.eq) goto loc_82084B48;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820848e8
	if (ctx.cr6.eq) goto loc_820848E8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,12,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8208488c
	if (!ctx.cr6.eq) goto loc_8208488C;
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r9,r10,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8208488c
	if (!ctx.cr6.eq) goto loc_8208488C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084c18
	if (!ctx.cr6.eq) goto loc_82084C18;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// bl 0x82085338
	ctx.lr = 0x82084880;
	sub_82085338(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8208488C:
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r9,r10,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820848d8
	if (ctx.cr6.eq) goto loc_820848D8;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820848b0
	if (ctx.cr6.eq) goto loc_820848B0;
	// bl 0x820857a0
	ctx.lr = 0x820848AC;
	sub_820857A0(ctx, base);
	// b 0x820848b4
	goto loc_820848B4;
loc_820848B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820848B4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820848d8
	if (ctx.cr6.eq) goto loc_820848D8;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// bl 0x82085398
	ctx.lr = 0x820848D8;
	sub_82085398(ctx, base);
loc_820848D8:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084c18
	if (!ctx.cr6.eq) goto loc_82084C18;
loc_820848E8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// rlwinm r8,r10,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r9,r7,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// beq cr6,0x82084918
	if (ctx.cr6.eq) goto loc_82084918;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x8208491c
	if (ctx.cr6.eq) goto loc_8208491C;
loc_82084918:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8208491C:
	// lwz r8,508(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r7,r8,0,7,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82084940
	if (ctx.cr6.eq) goto loc_82084940;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x82084944
	if (ctx.cr6.eq) goto loc_82084944;
loc_82084940:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82084944:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8208496c
	if (!ctx.cr6.eq) goto loc_8208496C;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8208496c
	if (!ctx.cr6.eq) goto loc_8208496C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084b48
	if (ctx.cr6.eq) goto loc_82084B48;
loc_8208496C:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// rlwinm r10,r10,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,7,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r8,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r8.u32);
	// lwz r7,508(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r6,r7,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82084a70
	if (!ctx.cr6.eq) goto loc_82084A70;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r4,r10,28,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// bl 0x82085478
	ctx.lr = 0x820849AC;
	sub_82085478(ctx, base);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r5,508(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r7,r9,20000
	ctx.r7.s64 = ctx.r9.s64 + 20000;
	// lbz r4,612(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 612);
	// ori r6,r8,296
	ctx.r6.u64 = ctx.r8.u64 | 296;
	// oris r3,r5,16
	ctx.r3.u64 = ctx.r5.u64 | 1048576;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stb r27,533(r31)
	PPC_STORE_U8(ctx.r31.u32 + 533, ctx.r27.u8);
	// stw r3,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r3.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq cr6,0x82084a04
	if (ctx.cr6.eq) goto loc_82084A04;
	// stb r23,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r23.u8);
	// lwz r11,2136(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084a00
	if (ctx.cr6.eq) goto loc_82084A00;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2136, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82084a04
	if (!ctx.cr6.eq) goto loc_82084A04;
loc_82084A00:
	// bl 0x82313508
	ctx.lr = 0x82084A04;
	sub_82313508(ctx, base);
loc_82084A04:
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82084a24
	if (!ctx.cr6.eq) goto loc_82084A24;
	// bl 0x820ddca8
	ctx.lr = 0x82084A14;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084a34
	if (ctx.cr6.eq) goto loc_82084A34;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82084a54
	goto loc_82084A54;
loc_82084A24:
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82084b48
	if (ctx.cr6.eq) goto loc_82084B48;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82084a3c
	if (!ctx.cr6.eq) goto loc_82084A3C;
loc_82084A34:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82084a54
	goto loc_82084A54;
loc_82084A3C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82084A50;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82084A54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084b48
	if (ctx.cr6.eq) goto loc_82084B48;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82084b48
	if (ctx.cr6.eq) goto loc_82084B48;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82084b38
	goto loc_82084B38;
loc_82084A70:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r11,20000
	ctx.r8.s64 = ctx.r11.s64 + 20000;
	// ori r7,r9,296
	ctx.r7.u64 = ctx.r9.u64 | 296;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82084b48
	if (!ctx.cr6.lt) goto loc_82084B48;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r10,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// bl 0x823052d8
	ctx.lr = 0x82084AB4;
	sub_823052D8(ctx, base);
	// lwz r8,508(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,0,12,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r7,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r7.u32);
	// bl 0x82086eb8
	ctx.lr = 0x82084AC8;
	sub_82086EB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x82084AD0;
	sub_823051A8(ctx, base);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82084af0
	if (!ctx.cr6.eq) goto loc_82084AF0;
	// bl 0x820ddca8
	ctx.lr = 0x82084AE0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084b00
	if (ctx.cr6.eq) goto loc_82084B00;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82084b20
	goto loc_82084B20;
loc_82084AF0:
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82084b48
	if (ctx.cr6.eq) goto loc_82084B48;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82084b08
	if (!ctx.cr6.eq) goto loc_82084B08;
loc_82084B00:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82084b20
	goto loc_82084B20;
loc_82084B08:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82084B1C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82084B20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084b48
	if (ctx.cr6.eq) goto loc_82084B48;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82084b48
	if (ctx.cr6.eq) goto loc_82084B48;
	// li r4,140
	ctx.r4.s64 = 140;
loc_82084B38:
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x82084B48;
	sub_820DAF68(ctx, base);
loc_82084B48:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,20,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82084c18
	if (ctx.cr6.eq) goto loc_82084C18;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084c18
	if (!ctx.cr6.eq) goto loc_82084C18;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084b80
	if (ctx.cr6.eq) goto loc_82084B80;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82084c18
	if (!ctx.cr6.eq) goto loc_82084C18;
loc_82084B80:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// bne cr6,0x82084bac
	if (!ctx.cr6.eq) goto loc_82084BAC;
	// bl 0x820ddca8
	ctx.lr = 0x82084B9C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084bbc
	if (ctx.cr6.eq) goto loc_82084BBC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82084bdc
	goto loc_82084BDC;
loc_82084BAC:
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82084c04
	if (ctx.cr6.eq) goto loc_82084C04;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82084bc4
	if (!ctx.cr6.eq) goto loc_82084BC4;
loc_82084BBC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82084bdc
	goto loc_82084BDC;
loc_82084BC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82084BD8;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82084BDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084c04
	if (ctx.cr6.eq) goto loc_82084C04;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82084c04
	if (ctx.cr6.eq) goto loc_82084C04;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,115
	ctx.r4.s64 = 115;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x820daf68
	ctx.lr = 0x82084C04;
	sub_820DAF68(ctx, base);
loc_82084C04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085598
	ctx.lr = 0x82084C0C;
	sub_82085598(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// oris r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 16777216;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
loc_82084C18:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82084C24"))) PPC_WEAK_FUNC(sub_82084C24);
PPC_FUNC_IMPL(__imp__sub_82084C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82084C28"))) PPC_WEAK_FUNC(sub_82084C28);
PPC_FUNC_IMPL(__imp__sub_82084C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82084C30;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,540
	ctx.r28.s64 = ctx.r3.s64 + 540;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x82084C50;
	sub_823052D8(ctx, base);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084cc0
	if (ctx.cr6.eq) goto loc_82084CC0;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82084cc0
	if (!ctx.cr6.gt) goto loc_82084CC0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82084cc0
	if (ctx.cr6.eq) goto loc_82084CC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82084C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82084cb0
	if (!ctx.cr6.gt) goto loc_82084CB0;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_82084CB0:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// ld r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82084cd0
	if (!ctx.cr6.eq) goto loc_82084CD0;
loc_82084CC0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// b 0x82084cd4
	goto loc_82084CD4;
loc_82084CD0:
	// ld r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82084CD4:
	// rldicr r11,r31,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823413b0
	ctx.lr = 0x82084CE0;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82084d18
	if (!ctx.cr6.eq) goto loc_82084D18;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82084D18:
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82317d10
	ctx.lr = 0x82084D2C;
	sub_82317D10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x82084D34;
	sub_823051A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82084D40"))) PPC_WEAK_FUNC(sub_82084D40);
PPC_FUNC_IMPL(__imp__sub_82084D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82084D48;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82319340
	ctx.lr = 0x82084D60;
	sub_82319340(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82315c08
	ctx.lr = 0x82084D6C;
	sub_82315C08(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084db0
	if (ctx.cr6.eq) goto loc_82084DB0;
	// addi r30,r31,580
	ctx.r30.s64 = ctx.r31.s64 + 580;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x82084DA0;
	sub_823052D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r11.u8);
	// bl 0x823051a8
	ctx.lr = 0x82084DB0;
	sub_823051A8(ctx, base);
loc_82084DB0:
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233eaf0
	ctx.lr = 0x82084DC0;
	sub_8233EAF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82316b80
	ctx.lr = 0x82084DD0;
	sub_82316B80(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x82084dec
	if (ctx.cr6.eq) goto loc_82084DEC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084ee0
	if (ctx.cr6.eq) goto loc_82084EE0;
loc_82084DEC:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084ee0
	if (!ctx.cr6.eq) goto loc_82084EE0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82084E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82084e40
	if (!ctx.cr6.eq) goto loc_82084E40;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r3,1
	ctx.r3.s64 = 1;
	// oris r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 16777216;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,23,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r8,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r8.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82084E40:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82084e84
	if (!ctx.cr6.lt) goto loc_82084E84;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82084e84
	if (!ctx.cr6.lt) goto loc_82084E84;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82084e70
	if (ctx.cr6.lt) goto loc_82084E70;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82084E70:
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r5,r10,-23448
	ctx.r5.s64 = ctx.r10.s64 + -23448;
	// bl 0x82316a50
	ctx.lr = 0x82084E84;
	sub_82316A50(ctx, base);
loc_82084E84:
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f1,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82085ca8
	ctx.lr = 0x82084E94;
	sub_82085CA8(ctx, base);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084eac
	if (ctx.cr6.eq) goto loc_82084EAC;
	// bl 0x820857a0
	ctx.lr = 0x82084EA8;
	sub_820857A0(ctx, base);
	// b 0x82084eb0
	goto loc_82084EB0;
loc_82084EAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82084EB0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82084ef0
	if (!ctx.cr6.eq) goto loc_82084EF0;
	// lwz r30,36(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r31,r30,80
	ctx.r31.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x82084ED0;
	sub_823052D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82083120
	ctx.lr = 0x82084ED8;
	sub_82083120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x82084EE0;
	sub_823051A8(ctx, base);
loc_82084EE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82084EF0:
	// lwz r27,204(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82084f08
	if (ctx.cr6.eq) goto loc_82084F08;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// blt cr6,0x82084f08
	if (ctx.cr6.lt) goto loc_82084F08;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82084F08:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,31376
	ctx.r25.s64 = ctx.r11.s64 + 31376;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lfs f31,48(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82084f7c
	if (ctx.cr6.eq) goto loc_82084F7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084f7c
	if (ctx.cr6.eq) goto loc_82084F7C;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f31,f9,f10
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
loc_82084F7C:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82085140
	if (ctx.cr6.eq) goto loc_82085140;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82085140
	if (ctx.cr6.eq) goto loc_82085140;
	// rlwinm r29,r27,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r26,r1,196
	ctx.r26.s64 = ctx.r1.s64 + 196;
	// lwzx r9,r29,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82085140
	if (ctx.cr6.eq) goto loc_82085140;
	// addi r28,r1,204
	ctx.r28.s64 = ctx.r1.s64 + 204;
	// lwzx r9,r29,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82085140
	if (ctx.cr6.eq) goto loc_82085140;
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82085110
	if (!ctx.cr6.eq) goto loc_82085110;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82085110
	if (ctx.cr6.eq) goto loc_82085110;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82085110
	if (ctx.cr6.eq) goto loc_82085110;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82082030
	ctx.lr = 0x82084FE4;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208503c
	if (ctx.cr6.eq) goto loc_8208503C;
	// lfs f0,36(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// addi r9,r11,4716
	ctx.r9.s64 = ctx.r11.s64 + 4716;
	// addi r8,r10,4760
	ctx.r8.s64 = ctx.r10.s64 + 4760;
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r6,236(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_8208503C:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// bne cr6,0x8208505c
	if (!ctx.cr6.eq) goto loc_8208505C;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8208505C:
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r8,r9,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// bne cr6,0x82085084
	if (!ctx.cr6.eq) goto loc_82085084;
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
loc_82085084:
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82318708
	ctx.lr = 0x820850A4;
	sub_82318708(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82316dd8
	ctx.lr = 0x820850B4;
	sub_82316DD8(ctx, base);
	// lwzx r7,r29,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// ble cr6,0x820850fc
	if (!ctx.cr6.gt) goto loc_820850FC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// b 0x82085140
	goto loc_82085140;
loc_820850FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x82085140
	goto loc_82085140;
loc_82085110:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82316a60
	ctx.lr = 0x82085120;
	sub_82316A60(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
loc_82085140:
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f0,52(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r9,15640
	ctx.r6.s64 = ctx.r9.s64 + 15640;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// stfs f6,536(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// lhz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r5,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r5.u32);
	// bl 0x820837c8
	ctx.lr = 0x82085194;
	sub_820837C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82083850
	ctx.lr = 0x820851A0;
	sub_82083850(ctx, base);
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r3,r4,0,23,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r3.u32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820851e4
	if (ctx.cr6.eq) goto loc_820851E4;
	// bl 0x82318f18
	ctx.lr = 0x820851D4;
	sub_82318F18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820851E4:
	// bl 0x82318f40
	ctx.lr = 0x820851E8;
	sub_82318F40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820851F8"))) PPC_WEAK_FUNC(sub_820851F8);
PPC_FUNC_IMPL(__imp__sub_820851F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82085200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// rlwinm r8,r10,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// rlwinm r30,r10,31,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stb r8,601(r3)
	PPC_STORE_U8(ctx.r3.u32 + 601, ctx.r8.u8);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r29,r7,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stfs f0,536(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// bl 0x82086c30
	ctx.lr = 0x82085238;
	sub_82086C30(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82085284
	if (ctx.cr6.eq) goto loc_82085284;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// bne cr6,0x82085260
	if (!ctx.cr6.eq) goto loc_82085260;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_82085260:
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// bne cr6,0x82085280
	if (!ctx.cr6.eq) goto loc_82085280;
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
loc_82085280:
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
loc_82085284:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820852cc
	if (ctx.cr6.eq) goto loc_820852CC;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// bne cr6,0x820852a8
	if (!ctx.cr6.eq) goto loc_820852A8;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_820852A8:
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// bne cr6,0x820852c8
	if (!ctx.cr6.eq) goto loc_820852C8;
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
loc_820852C8:
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
loc_820852CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82336fa8
	ctx.lr = 0x820852D4;
	sub_82336FA8(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82085328
	if (!ctx.cr6.eq) goto loc_82085328;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82085308
	if (ctx.cr6.eq) goto loc_82085308;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82316728
	ctx.lr = 0x820852FC;
	sub_82316728(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82085308:
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x82085318;
	sub_823052D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82086eb8
	ctx.lr = 0x82085320;
	sub_82086EB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x82085328;
	sub_823051A8(ctx, base);
loc_82085328:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085334"))) PPC_WEAK_FUNC(sub_82085334);
PPC_FUNC_IMPL(__imp__sub_82085334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085338"))) PPC_WEAK_FUNC(sub_82085338);
PPC_FUNC_IMPL(__imp__sub_82085338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// beq cr6,0x82085364
	if (ctx.cr6.eq) goto loc_82085364;
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stw r10,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r10.u32);
	// b 0x82085378
	goto loc_82085378;
loc_82085364:
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// stw r10,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r8,r9,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r8,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r8.u32);
loc_82085378:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-23448
	ctx.r5.s64 = ctx.r11.s64 + -23448;
	// b 0x82316890
	sub_82316890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085394"))) PPC_WEAK_FUNC(sub_82085394);
PPC_FUNC_IMPL(__imp__sub_82085394) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085398"))) PPC_WEAK_FUNC(sub_82085398);
PPC_FUNC_IMPL(__imp__sub_82085398) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820853b8
	if (ctx.cr6.eq) goto loc_820853B8;
	// lwz r10,508(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820853B8:
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r9,r10,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r9,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r9.u32);
	// lwz r8,508(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r7,r8,0,17,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x6000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r9,r9,0,19,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// stw r9,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-23448
	ctx.r5.s64 = ctx.r11.s64 + -23448;
	// b 0x82316890
	sub_82316890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085400"))) PPC_WEAK_FUNC(sub_82085400);
PPC_FUNC_IMPL(__imp__sub_82085400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085404"))) PPC_WEAK_FUNC(sub_82085404);
PPC_FUNC_IMPL(__imp__sub_82085404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085408"))) PPC_WEAK_FUNC(sub_82085408);
PPC_FUNC_IMPL(__imp__sub_82085408) {
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
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,540
	ctx.r30.s64 = ctx.r3.s64 + 540;
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r8.u32);
	// bl 0x823052d8
	ctx.lr = 0x82085448;
	sub_823052D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82316828
	ctx.lr = 0x82085454;
	sub_82316828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x8208545C;
	sub_823051A8(ctx, base);
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

__attribute__((alias("__imp__sub_82085474"))) PPC_WEAK_FUNC(sub_82085474);
PPC_FUNC_IMPL(__imp__sub_82085474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085478"))) PPC_WEAK_FUNC(sub_82085478);
PPC_FUNC_IMPL(__imp__sub_82085478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82085480;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,616
	ctx.r23.s64 = ctx.r3.s64 + 616;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823052d8
	ctx.lr = 0x8208549C;
	sub_823052D8(ctx, base);
	// lwz r28,636(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 636);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82085588
	if (ctx.cr6.eq) goto loc_82085588;
	// clrlwi r27,r31,24
	ctx.r27.u64 = ctx.r31.u32 & 0xFF;
	// li r25,13
	ctx.r25.s64 = 13;
	// li r24,512
	ctx.r24.s64 = 512;
loc_820854B4:
	// lwz r10,508(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 508);
	// addi r11,r28,508
	ctx.r11.s64 = ctx.r28.s64 + 508;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bne cr6,0x820854e0
	if (!ctx.cr6.eq) goto loc_820854E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,644(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 644);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82085580
	if (!ctx.cr6.lt) goto loc_82085580;
loc_820854E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x82085580
	if (ctx.cr6.eq) goto loc_82085580;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82085500
	if (!ctx.cr6.eq) goto loc_82085500;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82085500:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82094890
	ctx.lr = 0x82085508;
	sub_82094890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085574
	if (ctx.cr6.eq) goto loc_82085574;
	// lwz r29,20(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82085574
	if (ctx.cr6.eq) goto loc_82085574;
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x8208555c
	if (ctx.cr6.eq) goto loc_8208555C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82085554
	if (!ctx.cr6.eq) goto loc_82085554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x82085550;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82085554:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82085560
	goto loc_82085560;
loc_8208555C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82085560:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820daf68
	ctx.lr = 0x82085574;
	sub_820DAF68(ctx, base);
loc_82085574:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208ffd0
	ctx.lr = 0x8208557C;
	sub_8208FFD0(ctx, base);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
loc_82085580:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820854b4
	if (!ctx.cr6.eq) goto loc_820854B4;
loc_82085588:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823051a8
	ctx.lr = 0x82085590;
	sub_823051A8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085598"))) PPC_WEAK_FUNC(sub_82085598);
PPC_FUNC_IMPL(__imp__sub_82085598) {
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
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x820855cc
	if (!ctx.cr6.eq) goto loc_820855CC;
	// bl 0x820856c0
	ctx.lr = 0x820855C0;
	sub_820856C0(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x820856a4
	goto loc_820856A4;
loc_820855CC:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,17,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FC0;
	// rlwinm r10,r10,0,25,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE07F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82085648
	if (ctx.cr6.eq) goto loc_82085648;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82085648
	if (!ctx.cr6.eq) goto loc_82085648;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,19,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FE0;
	// rlwinm r8,r8,0,26,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF03F;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8208563c
	if (!ctx.cr6.eq) goto loc_8208563C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,18,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FC0;
	// rlwinm r8,r8,0,25,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFE07F;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8208563c
	if (ctx.cr6.eq) goto loc_8208563C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
loc_8208563C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085398
	ctx.lr = 0x82085648;
	sub_82085398(ctx, base);
loc_82085648:
	// lis r12,16
	ctx.r12.s64 = 1048576;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ori r12,r12,4128
	ctx.r12.u64 = ctx.r12.u64 | 4128;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82085680
	if (ctx.cr6.eq) goto loc_82085680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820856c0
	ctx.lr = 0x8208566C;
	sub_820856C0(ctx, base);
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
loc_82085680:
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820856a0
	if (!ctx.cr6.eq) goto loc_820856A0;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820856a8
	if (ctx.cr6.eq) goto loc_820856A8;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
loc_820856A0:
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
loc_820856A4:
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
loc_820856A8:
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

__attribute__((alias("__imp__sub_820856BC"))) PPC_WEAK_FUNC(sub_820856BC);
PPC_FUNC_IMPL(__imp__sub_820856BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820856C0"))) PPC_WEAK_FUNC(sub_820856C0);
PPC_FUNC_IMPL(__imp__sub_820856C0) {
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
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208577c
	if (ctx.cr6.eq) goto loc_8208577C;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm r9,r11,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r9,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r9.u32);
	// beq cr6,0x8208577c
	if (ctx.cr6.eq) goto loc_8208577C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82085724
	if (!ctx.cr6.eq) goto loc_82085724;
	// bl 0x820ddca8
	ctx.lr = 0x82085714;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208573c
	if (ctx.cr6.eq) goto loc_8208573C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8208575c
	goto loc_8208575C;
loc_82085724:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8208577c
	if (ctx.cr6.eq) goto loc_8208577C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82085744
	if (!ctx.cr6.eq) goto loc_82085744;
loc_8208573C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8208575c
	goto loc_8208575C;
loc_82085744:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82085758;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8208575C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208577c
	if (ctx.cr6.eq) goto loc_8208577C;
	// lwz r10,608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x820daf68
	ctx.lr = 0x8208577C;
	sub_820DAF68(ctx, base);
loc_8208577C:
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

__attribute__((alias("__imp__sub_82085790"))) PPC_WEAK_FUNC(sub_82085790);
PPC_FUNC_IMPL(__imp__sub_82085790) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82082030
	sub_82082030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820857A0"))) PPC_WEAK_FUNC(sub_820857A0);
PPC_FUNC_IMPL(__imp__sub_820857A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820857d8
	if (!ctx.cr6.eq) goto loc_820857D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82085810
	if (ctx.cr6.eq) goto loc_82085810;
loc_820857D8:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820857fc
	if (ctx.cr6.eq) goto loc_820857FC;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82085800
	goto loc_82085800;
loc_820857FC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82085800:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82085814
	if (!ctx.cr6.eq) goto loc_82085814;
loc_82085810:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82085814:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208581C"))) PPC_WEAK_FUNC(sub_8208581C);
PPC_FUNC_IMPL(__imp__sub_8208581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085820"))) PPC_WEAK_FUNC(sub_82085820);
PPC_FUNC_IMPL(__imp__sub_82085820) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-26364
	ctx.r9.s64 = ctx.r10.s64 + -26364;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// divwu r8,r3,r10
	ctx.r8.u32 = ctx.r3.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82085854:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82085854
	if (!ctx.cr6.eq) goto loc_82085854;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085870"))) PPC_WEAK_FUNC(sub_82085870);
PPC_FUNC_IMPL(__imp__sub_82085870) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820858c8
	if (!ctx.cr6.eq) goto loc_820858C8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820858ac
	if (ctx.cr6.eq) goto loc_820858AC;
loc_820858A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82085938
	goto loc_82085938;
loc_820858AC:
	// bl 0x820ddca8
	ctx.lr = 0x820858B0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820858c0
	if (ctx.cr6.eq) goto loc_820858C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820858ec
	goto loc_820858EC;
loc_820858C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820858ec
	goto loc_820858EC;
loc_820858C8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82085924
	if (!ctx.cr6.eq) goto loc_82085924;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820858a4
	if (ctx.cr6.eq) goto loc_820858A4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820858a4
	if (!ctx.cr6.eq) goto loc_820858A4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820858EC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82085914
	if (ctx.cr6.eq) goto loc_82085914;
	// cmpwi cr6,r30,264
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 264, ctx.xer);
	// beq cr6,0x82085914
	if (ctx.cr6.eq) goto loc_82085914;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_82085914:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82085938
	if (ctx.cr6.eq) goto loc_82085938;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x82085938
	goto loc_82085938;
loc_82085924:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820858a4
	if (ctx.cr6.eq) goto loc_820858A4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x82085938;
	sub_820F3178(ctx, base);
loc_82085938:
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

__attribute__((alias("__imp__sub_82085950"))) PPC_WEAK_FUNC(sub_82085950);
PPC_FUNC_IMPL(__imp__sub_82085950) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bne cr6,0x82085964
	if (!ctx.cr6.eq) goto loc_82085964;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82085964:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82082030
	sub_82082030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085970"))) PPC_WEAK_FUNC(sub_82085970);
PPC_FUNC_IMPL(__imp__sub_82085970) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82085994
	if (ctx.cr6.eq) goto loc_82085994;
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82085994;
	sub_82080000(ctx, base);
loc_82085994:
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

__attribute__((alias("__imp__sub_820859A8"))) PPC_WEAK_FUNC(sub_820859A8);
PPC_FUNC_IMPL(__imp__sub_820859A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820859B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,4572
	ctx.r10.s64 = ctx.r11.s64 + 4572;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82085A0C;
	sub_8233EAF0(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82085a24
	if (!ctx.cr6.eq) goto loc_82085A24;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_82085A24:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82085a44
	if (ctx.cr6.eq) goto loc_82085A44;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82085A44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085A4C"))) PPC_WEAK_FUNC(sub_82085A4C);
PPC_FUNC_IMPL(__imp__sub_82085A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085A50"))) PPC_WEAK_FUNC(sub_82085A50);
PPC_FUNC_IMPL(__imp__sub_82085A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82085A58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r27,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rlwinm r8,r9,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82085c94
	if (!ctx.cr6.eq) goto loc_82085C94;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82085b08
	if (!ctx.cr6.eq) goto loc_82085B08;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82082030
	ctx.lr = 0x82085AB0;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085ac8
	if (ctx.cr6.eq) goto loc_82085AC8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x821b7ec0
	ctx.lr = 0x82085AC4;
	sub_821B7EC0(ctx, base);
	// b 0x82085acc
	goto loc_82085ACC;
loc_82085AC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82085ACC:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b7fa8
	ctx.lr = 0x82085AE4;
	sub_821B7FA8(ctx, base);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_82085AF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82085af0
	if (!ctx.cr6.eq) goto loc_82085AF0;
loc_82085B08:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82085b20
	if (ctx.cr6.eq) goto loc_82085B20;
	// lbz r11,293(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 293);
	// b 0x82085b24
	goto loc_82085B24;
loc_82085B20:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82085B24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82085b50
	if (!ctx.cr6.eq) goto loc_82085B50;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82085c9c
	if (ctx.cr6.eq) goto loc_82085C9C;
loc_82085B40:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82085B50:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82085c38
	if (!ctx.cr6.eq) goto loc_82085C38;
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82085b40
	if (ctx.cr6.eq) goto loc_82085B40;
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x82085b40
	if (ctx.cr6.eq) goto loc_82085B40;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r28,r10,15,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82085b8c
	if (ctx.cr6.eq) goto loc_82085B8C;
	// lis r29,0
	ctx.r29.s64 = 0;
	// ori r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 32768;
	// b 0x82085bc4
	goto loc_82085BC4;
loc_82085B8C:
	// cmpldi cr6,r11,32768
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 32768, ctx.xer);
	// bgt cr6,0x82085ba0
	if (ctx.cr6.gt) goto loc_82085BA0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x82085bb0
	goto loc_82085BB0;
loc_82085BA0:
	// lis r10,48
	ctx.r10.s64 = 3145728;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82085bb0
	if (!ctx.cr6.gt) goto loc_82085BB0;
	// lis r11,48
	ctx.r11.s64 = 3145728;
loc_82085BB0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// addi r9,r11,32767
	ctx.r9.s64 = ctx.r11.s64 + 32767;
	// rlwinm r29,r9,0,0,16
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
loc_82085BC4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,188(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82082030
	ctx.lr = 0x82085BD8;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085c30
	if (ctx.cr6.eq) goto loc_82085C30;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,188(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// rlwinm r5,r11,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82082dc0
	ctx.lr = 0x82085C00;
	sub_82082DC0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r9,r10,4552
	ctx.r9.s64 = ctx.r10.s64 + 4552;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// bl 0x82305000
	ctx.lr = 0x82085C2C;
	sub_82305000(ctx, base);
	// b 0x82085c34
	goto loc_82085C34;
loc_82085C30:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82085C34:
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82085C38:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82085c94
	if (ctx.cr6.eq) goto loc_82085C94;
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820857a0
	ctx.lr = 0x82085C50;
	sub_820857A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82085c94
	if (!ctx.cr6.eq) goto loc_82085C94;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82085c94
	if (!ctx.cr6.eq) goto loc_82085C94;
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x82085C7C;
	sub_823052D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82083120
	ctx.lr = 0x82085C84;
	sub_82083120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x82085C8C;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82085C94:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82085C9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085CA4"))) PPC_WEAK_FUNC(sub_82085CA4);
PPC_FUNC_IMPL(__imp__sub_82085CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085CA8"))) PPC_WEAK_FUNC(sub_82085CA8);
PPC_FUNC_IMPL(__imp__sub_82085CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82085d74
	if (ctx.cr6.eq) goto loc_82085D74;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpldi cr6,r11,32768
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 32768, ctx.xer);
	// bgt cr6,0x82085ce8
	if (ctx.cr6.gt) goto loc_82085CE8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x82085cf8
	goto loc_82085CF8;
loc_82085CE8:
	// lis r10,48
	ctx.r10.s64 = 3145728;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82085cf8
	if (!ctx.cr6.gt) goto loc_82085CF8;
	// lis r11,48
	ctx.r11.s64 = 3145728;
loc_82085CF8:
	// rlwinm r10,r4,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,880(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 880);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// divwu r11,r7,r6
	ctx.r11.u32 = ctx.r7.u32 / ctx.r6.u32;
	// addi r5,r11,32767
	ctx.r5.s64 = ctx.r11.s64 + 32767;
	// rlwinm r11,r5,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF8000;
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r10,32767
	ctx.r4.s64 = ctx.r10.s64 + 32767;
	// rlwinm r10,r4,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82085d54
	if (ctx.cr6.lt) goto loc_82085D54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82085D54:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085d68
	if (ctx.cr6.eq) goto loc_82085D68;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82083028
	ctx.lr = 0x82085D68;
	sub_82083028(ctx, base);
loc_82085D68:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82085D74:
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

__attribute__((alias("__imp__sub_82085D88"))) PPC_WEAK_FUNC(sub_82085D88);
PPC_FUNC_IMPL(__imp__sub_82085D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82085D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// rlwinm r10,r11,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// rlwinm r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r30,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82085e30
	if (!ctx.cr6.eq) goto loc_82085E30;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085df0
	if (ctx.cr6.eq) goto loc_82085DF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82085DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82085DF0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085e30
	if (ctx.cr6.eq) goto loc_82085E30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82085E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085e2c
	if (ctx.cr6.eq) goto loc_82085E2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82085E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82085E2C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82085E30:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085E40"))) PPC_WEAK_FUNC(sub_82085E40);
PPC_FUNC_IMPL(__imp__sub_82085E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82085E48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82085f18
	if (!ctx.cr6.eq) goto loc_82085F18;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82085f00
	if (ctx.cr6.eq) goto loc_82085F00;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82085f00
	if (!ctx.cr6.eq) goto loc_82085F00;
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// ld r26,24(r3)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82085EA0;
	sub_823052D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82083120
	ctx.lr = 0x82085EA8;
	sub_82083120(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x82085EB0;
	sub_823051A8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rotlwi r5,r28,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82083458
	ctx.lr = 0x82085EC4;
	sub_82083458(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82085ee0
	if (!ctx.cr6.eq) goto loc_82085EE0;
	// stw r27,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r27.u32);
	// std r28,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r28.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82085EE0:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82085F00:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82085F18:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82172e00
	ctx.lr = 0x82085F24;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82085fb4
	if (ctx.cr6.eq) goto loc_82085FB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rotlwi r30,r28,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82085F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpld cr6,r9,r3
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r3.u64, ctx.xer);
	// ble cr6,0x82085f7c
	if (!ctx.cr6.gt) goto loc_82085F7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82085F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r8,r29,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// subf r30,r8,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_82085F7C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82085F98;
	sub_8233E4E0(ctx, base);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82085FB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82085FBC"))) PPC_WEAK_FUNC(sub_82085FBC);
PPC_FUNC_IMPL(__imp__sub_82085FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085FC0"))) PPC_WEAK_FUNC(sub_82085FC0);
PPC_FUNC_IMPL(__imp__sub_82085FC0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8208600c
	if (!ctx.cr6.eq) goto loc_8208600C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82085FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
loc_8208600C:
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_82086024"))) PPC_WEAK_FUNC(sub_82086024);
PPC_FUNC_IMPL(__imp__sub_82086024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086028"))) PPC_WEAK_FUNC(sub_82086028);
PPC_FUNC_IMPL(__imp__sub_82086028) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82086074
	if (!ctx.cr6.eq) goto loc_82086074;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208605C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
loc_82086074:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82086080
	if (!ctx.cr6.eq) goto loc_82086080;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82086080:
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

__attribute__((alias("__imp__sub_82086094"))) PPC_WEAK_FUNC(sub_82086094);
PPC_FUNC_IMPL(__imp__sub_82086094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086098"))) PPC_WEAK_FUNC(sub_82086098);
PPC_FUNC_IMPL(__imp__sub_82086098) {
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
	// lwz r4,184(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82086108
	if (ctx.cr6.eq) goto loc_82086108;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r5,176(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// stw r30,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820860D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82086108
	if (!ctx.cr6.eq) goto loc_82086108;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82086100
	if (ctx.cr6.eq) goto loc_82086100;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// b 0x82086130
	goto loc_82086130;
loc_82086100:
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82086108:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208612c
	if (ctx.cr6.eq) goto loc_8208612C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8208612c
	if (ctx.cr6.eq) goto loc_8208612C;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8208612C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82086130:
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

__attribute__((alias("__imp__sub_82086148"))) PPC_WEAK_FUNC(sub_82086148);
PPC_FUNC_IMPL(__imp__sub_82086148) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82086150"))) PPC_WEAK_FUNC(sub_82086150);
PPC_FUNC_IMPL(__imp__sub_82086150) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r4.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208615C"))) PPC_WEAK_FUNC(sub_8208615C);
PPC_FUNC_IMPL(__imp__sub_8208615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086160"))) PPC_WEAK_FUNC(sub_82086160);
PPC_FUNC_IMPL(__imp__sub_82086160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8208617c
	if (!ctx.cr6.eq) goto loc_8208617C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// blr 
	return;
loc_8208617C:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82086188"))) PPC_WEAK_FUNC(sub_82086188);
PPC_FUNC_IMPL(__imp__sub_82086188) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,4672
	ctx.r9.s64 = ctx.r11.s64 + 4672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820861c0
	if (ctx.cr6.eq) goto loc_820861C0;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820861C0;
	sub_82080000(ctx, base);
loc_820861C0:
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
}

__attribute__((alias("__imp__sub_820861D8"))) PPC_WEAK_FUNC(sub_820861D8);
PPC_FUNC_IMPL(__imp__sub_820861D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82086208"))) PPC_WEAK_FUNC(sub_82086208);
PPC_FUNC_IMPL(__imp__sub_82086208) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82086214"))) PPC_WEAK_FUNC(sub_82086214);
PPC_FUNC_IMPL(__imp__sub_82086214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086218"))) PPC_WEAK_FUNC(sub_82086218);
PPC_FUNC_IMPL(__imp__sub_82086218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82086238
	if (!ctx.cr6.eq) goto loc_82086238;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82086238
	if (ctx.cr6.eq) goto loc_82086238;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82086238:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82086254"))) PPC_WEAK_FUNC(sub_82086254);
PPC_FUNC_IMPL(__imp__sub_82086254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086258"))) PPC_WEAK_FUNC(sub_82086258);
PPC_FUNC_IMPL(__imp__sub_82086258) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x820862ac
	if (!ctx.cr6.eq) goto loc_820862AC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.f11.u64);
	// b 0x820862d4
	goto loc_820862D4;
loc_820862AC:
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// bl 0x823413b0
	ctx.lr = 0x820862BC;
	sub_823413B0(ctx, base);
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x820862C8;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820862D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820862F0"))) PPC_WEAK_FUNC(sub_820862F0);
PPC_FUNC_IMPL(__imp__sub_820862F0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,4632
	ctx.r9.s64 = ctx.r11.s64 + 4632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82086328
	if (ctx.cr6.eq) goto loc_82086328;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82086328;
	sub_82080000(ctx, base);
loc_82086328:
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
}

__attribute__((alias("__imp__sub_82086340"))) PPC_WEAK_FUNC(sub_82086340);
PPC_FUNC_IMPL(__imp__sub_82086340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82086348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,68
	ctx.r31.s64 = ctx.r3.s64 + 68;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8208635C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8208637C;
	sub_82305000(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bge 0x8208635c
	if (!ctx.cr0.lt) goto loc_8208635C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stb r30,396(r29)
	PPC_STORE_U8(ctx.r29.u32 + 396, ctx.r30.u8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 392, ctx.r30.u32);
	// addi r9,r11,21424
	ctx.r9.s64 = ctx.r11.s64 + 21424;
	// stb r30,397(r29)
	PPC_STORE_U8(ctx.r29.u32 + 397, ctx.r30.u8);
	// addi r8,r10,4708
	ctx.r8.s64 = ctx.r10.s64 + 4708;
	// stw r30,404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 404, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 400, ctx.r9.u32);
	// stw r8,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r8.u32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// stw r7,408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 408, ctx.r7.u32);
	// addi r3,r6,14552
	ctx.r3.s64 = ctx.r6.s64 + 14552;
	// bl 0x82336f60
	ctx.lr = 0x820863C4;
	sub_82336F60(ctx, base);
	// bl 0x82337f98
	ctx.lr = 0x820863C8;
	sub_82337F98(ctx, base);
	// stw r30,412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 412, ctx.r30.u32);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// addi r3,r5,-23448
	ctx.r3.s64 = ctx.r5.s64 + -23448;
	// bl 0x82319450
	ctx.lr = 0x820863D8;
	sub_82319450(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82319460
	ctx.lr = 0x820863E0;
	sub_82319460(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,648
	ctx.r3.s64 = 648;
	// bl 0x82082030
	ctx.lr = 0x820863F4;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086408
	if (ctx.cr6.eq) goto loc_82086408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82083a10
	ctx.lr = 0x82086404;
	sub_82083A10(ctx, base);
	// b 0x8208640c
	goto loc_8208640C;
loc_82086408:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8208640C:
	// stw r3,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82086420;
	sub_8233EAF0(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086434"))) PPC_WEAK_FUNC(sub_82086434);
PPC_FUNC_IMPL(__imp__sub_82086434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086438"))) PPC_WEAK_FUNC(sub_82086438);
PPC_FUNC_IMPL(__imp__sub_82086438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82086440;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r3,388
	ctx.r29.s64 = ctx.r3.s64 + 388;
	// stb r26,396(r3)
	PPC_STORE_U8(ctx.r3.u32 + 396, ctx.r26.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82305448
	ctx.lr = 0x8208645C;
	sub_82305448(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r27,16
	ctx.r27.s64 = 16;
loc_82086464:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82086484
	if (ctx.cr6.eq) goto loc_82086484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82083a88
	ctx.lr = 0x82086478;
	sub_82083A88(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82086484;
	sub_82080000(ctx, base);
loc_82086484:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82086464
	if (!ctx.cr0.eq) goto loc_82086464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823193c0
	ctx.lr = 0x82086498;
	sub_823193C0(ctx, base);
	// bl 0x82337be8
	ctx.lr = 0x8208649C;
	sub_82337BE8(ctx, base);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820864b4
	if (ctx.cr6.eq) goto loc_820864B4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820864B4;
	sub_82080000(ctx, base);
loc_820864B4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,4344
	ctx.r9.s64 = ctx.r11.s64 + 4344;
	// stw r10,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stb r26,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r26.u8);
	// bl 0x82305448
	ctx.lr = 0x820864D4;
	sub_82305448(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r11,r30,388
	ctx.r11.s64 = ctx.r30.s64 + 388;
	// addi r7,r8,4352
	ctx.r7.s64 = ctx.r8.s64 + 4352;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_820864EC:
	// lwzu r11,-20(r31)
	ea = -20 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82086500
	if (ctx.cr6.eq) goto loc_82086500;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82246e18
	ctx.lr = 0x82086500;
	sub_82246E18(ctx, base);
loc_82086500:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820864ec
	if (!ctx.cr0.lt) goto loc_820864EC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086510"))) PPC_WEAK_FUNC(sub_82086510);
PPC_FUNC_IMPL(__imp__sub_82086510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82086518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820865e4
	if (ctx.cr6.eq) goto loc_820865E4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820865e4
	if (ctx.cr6.eq) goto loc_820865E4;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820865e4
	if (ctx.cr6.eq) goto loc_820865E4;
	// lwz r10,508(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820865b8
	if (!ctx.cr6.eq) goto loc_820865B8;
	// lbz r10,533(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 533);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820865b8
	if (!ctx.cr6.eq) goto loc_820865B8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,68
	ctx.r29.s64 = ctx.r11.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82086580;
	sub_823052D8(ctx, base);
	// lwzx r31,r28,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820865a0
	if (ctx.cr6.eq) goto loc_820865A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82083a88
	ctx.lr = 0x82086594;
	sub_82083A88(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820865A0;
	sub_82080000(ctx, base);
loc_820865A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r11,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x820865B0;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820865B8:
	// lis r12,16
	ctx.r12.s64 = 1048576;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// ori r12,r12,4128
	ctx.r12.u64 = ctx.r12.u64 | 4128;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820865d4
	if (!ctx.cr6.eq) goto loc_820865D4;
	// bl 0x82085598
	ctx.lr = 0x820865D4;
	sub_82085598(ctx, base);
loc_820865D4:
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r9.u32);
loc_820865E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820865EC"))) PPC_WEAK_FUNC(sub_820865EC);
PPC_FUNC_IMPL(__imp__sub_820865EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820865F0"))) PPC_WEAK_FUNC(sub_820865F0);
PPC_FUNC_IMPL(__imp__sub_820865F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820865F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82247330
	ctx.lr = 0x82086604;
	sub_82247330(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r3,25080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25080, ctx.r3.u32);
	// bne cr6,0x8208674c
	if (!ctx.cr6.eq) goto loc_8208674C;
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82086624:
	// lwz r11,26328(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 26328);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// addi r29,r11,68
	ctx.r29.s64 = ctx.r11.s64 + 68;
	// li r25,16
	ctx.r25.s64 = 16;
loc_8208663C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82086648;
	sub_823052D8(ctx, base);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82086700
	if (ctx.cr6.eq) goto loc_82086700;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82086700
	if (ctx.cr6.eq) goto loc_82086700;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,20,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82086700
	if (ctx.cr6.eq) goto loc_82086700;
	// addi r30,r31,580
	ctx.r30.s64 = ctx.r31.s64 + 580;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x823052d8
	ctx.lr = 0x82086684;
	sub_823052D8(ctx, base);
	// stb r24,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x82086690;
	sub_823051A8(ctx, base);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x820866A0;
	sub_823052D8(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,20,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820866e8
	if (ctx.cr6.eq) goto loc_820866E8;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820866e8
	if (!ctx.cr6.eq) goto loc_820866E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82315c08
	ctx.lr = 0x820866CC;
	sub_82315C08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820866e8
	if (ctx.cr6.eq) goto loc_820866E8;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x820866e8
	if (ctx.cr6.eq) goto loc_820866E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82316728
	ctx.lr = 0x820866E8;
	sub_82316728(ctx, base);
loc_820866E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x820866F0;
	sub_823051A8(ctx, base);
	// lbz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82086700
	if (ctx.cr6.eq) goto loc_82086700;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82086700:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x82086708;
	sub_823051A8(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// bne 0x8208663c
	if (!ctx.cr0.eq) goto loc_8208663C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208672c
	if (!ctx.cr6.eq) goto loc_8208672C;
	// li r3,50
	ctx.r3.s64 = 50;
	// b 0x8208673c
	goto loc_8208673C;
loc_8208672C:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82086740
	if (!ctx.cr6.eq) goto loc_82086740;
	// li r3,5
	ctx.r3.s64 = 5;
loc_8208673C:
	// bl 0x82247328
	ctx.lr = 0x82086740;
	sub_82247328(ctx, base);
loc_82086740:
	// lbz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82086624
	if (ctx.cr6.eq) goto loc_82086624;
loc_8208674C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086758"))) PPC_WEAK_FUNC(sub_82086758);
PPC_FUNC_IMPL(__imp__sub_82086758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82086760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x82086794
	if (ctx.cr0.lt) goto loc_82086794;
loc_8208677C:
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8208678C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8208677c
	if (!ctx.cr0.lt) goto loc_8208677C;
loc_82086794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208679C"))) PPC_WEAK_FUNC(sub_8208679C);
PPC_FUNC_IMPL(__imp__sub_8208679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820867A0"))) PPC_WEAK_FUNC(sub_820867A0);
PPC_FUNC_IMPL(__imp__sub_820867A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820867A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x820867d8
	if (ctx.cr0.lt) goto loc_820867D8;
loc_820867C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x820867CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bge 0x820867c0
	if (!ctx.cr0.lt) goto loc_820867C0;
loc_820867D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820867E0"))) PPC_WEAK_FUNC(sub_820867E0);
PPC_FUNC_IMPL(__imp__sub_820867E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// bne cr6,0x82086818
	if (!ctx.cr6.eq) goto loc_82086818;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820868a4
	goto loc_820868A4;
loc_82086818:
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,232
	ctx.r3.u64 = ctx.r3.u64 | 232;
	// bl 0x82082030
	ctx.lr = 0x82086830;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086844
	if (ctx.cr6.eq) goto loc_82086844;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82087278
	ctx.lr = 0x82086840;
	sub_82087278(ctx, base);
	// b 0x82086848
	goto loc_82086848;
loc_82086844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82086848:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82087618
	ctx.lr = 0x82086860;
	sub_82087618(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820868a0
	if (ctx.cr6.eq) goto loc_820868A0;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfd f2,624(r9)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r9.u32 + 624);
	// bl 0x8233c318
	ctx.lr = 0x82086890;
	sub_8233C318(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// stb r8,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r8.u8);
loc_820868A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820868A4:
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

__attribute__((alias("__imp__sub_820868BC"))) PPC_WEAK_FUNC(sub_820868BC);
PPC_FUNC_IMPL(__imp__sub_820868BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820868C0"))) PPC_WEAK_FUNC(sub_820868C0);
PPC_FUNC_IMPL(__imp__sub_820868C0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820868fc
	if (ctx.cr6.eq) goto loc_820868FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820868F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_820868FC:
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

__attribute__((alias("__imp__sub_82086910"))) PPC_WEAK_FUNC(sub_82086910);
PPC_FUNC_IMPL(__imp__sub_82086910) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82087550
	sub_82087550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086934"))) PPC_WEAK_FUNC(sub_82086934);
PPC_FUNC_IMPL(__imp__sub_82086934) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82086938"))) PPC_WEAK_FUNC(sub_82086938);
PPC_FUNC_IMPL(__imp__sub_82086938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82086940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086984
	if (ctx.cr6.eq) goto loc_82086984;
	// bl 0x820875b8
	ctx.lr = 0x8208695C;
	sub_820875B8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addis r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 1572864;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x82086974;
	sub_823052D8(ctx, base);
	// stw r30,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// stw r30,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x82086984;
	sub_823051A8(ctx, base);
loc_82086984:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086994"))) PPC_WEAK_FUNC(sub_82086994);
PPC_FUNC_IMPL(__imp__sub_82086994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086998"))) PPC_WEAK_FUNC(sub_82086998);
PPC_FUNC_IMPL(__imp__sub_82086998) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820869A0"))) PPC_WEAK_FUNC(sub_820869A0);
PPC_FUNC_IMPL(__imp__sub_820869A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820869A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82086a3c
	if (ctx.cr6.eq) goto loc_82086A3C;
	// addis r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 1572864;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x820869D0;
	sub_823052D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820869f8
	if (ctx.cr6.eq) goto loc_820869F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820875b8
	ctx.lr = 0x820869E0;
	sub_820875B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x820869F0;
	sub_823051A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820869F8:
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r10,r11,126
	ctx.r10.u64 = ctx.r11.u64 | 126;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82086a2c
	if (ctx.cr6.eq) goto loc_82086A2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82087550
	ctx.lr = 0x82086A1C;
	sub_82087550(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x82086A24;
	sub_823051A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82086A2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x82086A3C;
	sub_823051A8(ctx, base);
loc_82086A3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086A44"))) PPC_WEAK_FUNC(sub_82086A44);
PPC_FUNC_IMPL(__imp__sub_82086A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086A48"))) PPC_WEAK_FUNC(sub_82086A48);
PPC_FUNC_IMPL(__imp__sub_82086A48) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,4804
	ctx.r9.s64 = ctx.r11.s64 + 4804;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82086a80
	if (ctx.cr6.eq) goto loc_82086A80;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82086A80;
	sub_82080000(ctx, base);
loc_82086A80:
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
}

__attribute__((alias("__imp__sub_82086A98"))) PPC_WEAK_FUNC(sub_82086A98);
PPC_FUNC_IMPL(__imp__sub_82086A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82086AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82087d90
	ctx.lr = 0x82086AB8;
	sub_82087D90(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82086adc
	if (!ctx.cr6.gt) goto loc_82086ADC;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82086ADC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086AF4"))) PPC_WEAK_FUNC(sub_82086AF4);
PPC_FUNC_IMPL(__imp__sub_82086AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086AF8"))) PPC_WEAK_FUNC(sub_82086AF8);
PPC_FUNC_IMPL(__imp__sub_82086AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82086B00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,56(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82086b2c
	if (!ctx.cr6.eq) goto loc_82086B2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82086B2C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82086b78
	if (!ctx.cr6.eq) goto loc_82086B78;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82086b70
	if (ctx.cr6.eq) goto loc_82086B70;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82086B48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82086b60
	if (ctx.cr6.eq) goto loc_82086B60;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82086B60;
	sub_8233EAF0(ctx, base);
loc_82086B60:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82086b48
	if (ctx.cr6.lt) goto loc_82086B48;
loc_82086B70:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x82086b7c
	goto loc_82086B7C;
loc_82086B78:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82086B7C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82086B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086BA4"))) PPC_WEAK_FUNC(sub_82086BA4);
PPC_FUNC_IMPL(__imp__sub_82086BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82086BA8"))) PPC_WEAK_FUNC(sub_82086BA8);
PPC_FUNC_IMPL(__imp__sub_82086BA8) {
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
	// lwz r10,588(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,580
	ctx.r11.s64 = ctx.r3.s64 + 580;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82086bd4
	if (ctx.cr6.eq) goto loc_82086BD4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82086BD4;
	sub_82246E18(ctx, base);
loc_82086BD4:
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r11,r31,560
	ctx.r11.s64 = ctx.r31.s64 + 560;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82086bec
	if (ctx.cr6.eq) goto loc_82086BEC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82086BEC;
	sub_82246E18(ctx, base);
loc_82086BEC:
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r11,r31,540
	ctx.r11.s64 = ctx.r31.s64 + 540;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82086c04
	if (ctx.cr6.eq) goto loc_82086C04;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82086C04;
	sub_82246E18(ctx, base);
loc_82086C04:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82086c1c
	if (ctx.cr6.eq) goto loc_82086C1C;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82086C1C;
	sub_82246E18(ctx, base);
loc_82086C1C:
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

__attribute__((alias("__imp__sub_82086C30"))) PPC_WEAK_FUNC(sub_82086C30);
PPC_FUNC_IMPL(__imp__sub_82086C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82086C38;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,500(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82086c84
	if (!ctx.cr6.eq) goto loc_82086C84;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82082030
	ctx.lr = 0x82086C64;
	sub_82082030(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086cd4
	if (ctx.cr6.eq) goto loc_82086CD4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820859a8
	ctx.lr = 0x82086C80;
	sub_820859A8(ctx, base);
	// b 0x82086cd8
	goto loc_82086CD8;
loc_82086C84:
	// bl 0x82087078
	ctx.lr = 0x82086C88;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r3.u32);
	// bne cr6,0x82086ca0
	if (!ctx.cr6.eq) goto loc_82086CA0;
loc_82086C94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82086CA0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82082030
	ctx.lr = 0x82086CB4;
	sub_82082030(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086cd4
	if (ctx.cr6.eq) goto loc_82086CD4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,504(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820859a8
	ctx.lr = 0x82086CD0;
	sub_820859A8(ctx, base);
	// b 0x82086cd8
	goto loc_82086CD8;
loc_82086CD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82086CD8:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82086d0c
	if (ctx.cr6.eq) goto loc_82086D0C;
	// bl 0x82087078
	ctx.lr = 0x82086CEC;
	sub_82087078(ctx, base);
	// stw r3,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086c94
	if (ctx.cr6.eq) goto loc_82086C94;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82172e00
	ctx.lr = 0x82086D00;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82086c94
	if (ctx.cr6.eq) goto loc_82086C94;
loc_82086D0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82082030
	ctx.lr = 0x82086D20;
	sub_82082030(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// beq cr6,0x82086d58
	if (ctx.cr6.eq) goto loc_82086D58;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r10,r11,4612
	ctx.r10.s64 = ctx.r11.s64 + 4612;
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r30,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r30.u64);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82086d5c
	goto loc_82086D5C;
loc_82086D58:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82086D5C:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82082030
	ctx.lr = 0x82086D74;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086dcc
	if (ctx.cr6.eq) goto loc_82086DCC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// addi r9,r11,4716
	ctx.r9.s64 = ctx.r11.s64 + 4716;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// addi r8,r10,4760
	ctx.r8.s64 = ctx.r10.s64 + 4760;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x82086dd0
	goto loc_82086DD0;
loc_82086DCC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82086DD0:
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82318820
	ctx.lr = 0x82086DE8;
	sub_82318820(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086c94
	if (ctx.cr6.eq) goto loc_82086C94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82316a10
	ctx.lr = 0x82086E00;
	sub_82316A10(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r5,r11,-23448
	ctx.r5.s64 = ctx.r11.s64 + -23448;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823172e0
	ctx.lr = 0x82086E30;
	sub_823172E0(ctx, base);
	// lwz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82086e50
	if (!ctx.cr6.eq) goto loc_82086E50;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// bl 0x82318ee0
	ctx.lr = 0x82086E4C;
	sub_82318EE0(ctx, base);
	// b 0x82086e64
	goto loc_82086E64;
loc_82086E50:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x823167c0
	ctx.lr = 0x82086E64;
	sub_823167C0(ctx, base);
loc_82086E64:
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82316a88
	ctx.lr = 0x82086E78;
	sub_82316A88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82318f00
	ctx.lr = 0x82086E84;
	sub_82318F00(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwimi r11,r29,9,24,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 9) & 0xFFFFFFFFFFFFFEFF) | (ctx.r11.u64 & 0x100);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// beq cr6,0x82086eac
	if (ctx.cr6.eq) goto loc_82086EAC;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
loc_82086EAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82086EB8"))) PPC_WEAK_FUNC(sub_82086EB8);
PPC_FUNC_IMPL(__imp__sub_82086EB8) {
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
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82086eec
	if (!ctx.cr6.eq) goto loc_82086EEC;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r10.u32);
loc_82086EEC:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// beq cr6,0x82086f20
	if (ctx.cr6.eq) goto loc_82086F20;
	// bl 0x82172d60
	ctx.lr = 0x82086F1C;
	sub_82172D60(ctx, base);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
loc_82086F20:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086f34
	if (ctx.cr6.eq) goto loc_82086F34;
	// bl 0x82172d60
	ctx.lr = 0x82086F30;
	sub_82172D60(ctx, base);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
loc_82086F34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086f50
	if (ctx.cr6.eq) goto loc_82086F50;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
	// bl 0x823175a8
	ctx.lr = 0x82086F4C;
	sub_823175A8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82086F50:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086f74
	if (ctx.cr6.eq) goto loc_82086F74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82086F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82086F74:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086f98
	if (ctx.cr6.eq) goto loc_82086F98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82086F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82086F98:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086fbc
	if (ctx.cr6.eq) goto loc_82086FBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82086FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82086FBC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086fe0
	if (ctx.cr6.eq) goto loc_82086FE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82086FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82086FE0:
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82087010"))) PPC_WEAK_FUNC(sub_82087010);
PPC_FUNC_IMPL(__imp__sub_82087010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82087018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82087058
	if (!ctx.cr6.lt) goto loc_82087058;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82087044
	if (!ctx.cr6.lt) goto loc_82087044;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
loc_82087044:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82080478
	ctx.lr = 0x82087050;
	sub_82080478(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82087058:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82087078"))) PPC_WEAK_FUNC(sub_82087078);
PPC_FUNC_IMPL(__imp__sub_82087078) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82087088
	if (!ctx.cr6.eq) goto loc_82087088;
loc_82087080:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82087088:
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,24576
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24576, ctx.xer);
	// bge cr6,0x82087080
	if (!ctx.cr6.lt) goto loc_82087080;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6936
	ctx.r11.s64 = ctx.r11.s64 + 6936;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82087080
	if (!ctx.cr6.eq) goto loc_82087080;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82087080
	if (ctx.cr6.eq) goto loc_82087080;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
loc_820870C8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820870c8
	if (!ctx.cr0.eq) goto loc_820870C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820870E8"))) PPC_WEAK_FUNC(sub_820870E8);
PPC_FUNC_IMPL(__imp__sub_820870E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820870F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82087138
	if (ctx.cr6.eq) goto loc_82087138;
	// addis r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 1572864;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82087120;
	sub_823052D8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,27384
	ctx.r10.s64 = ctx.r11.s64 + 27384;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// bl 0x823051a8
	ctx.lr = 0x82087138;
	sub_823051A8(ctx, base);
loc_82087138:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82087140"))) PPC_WEAK_FUNC(sub_82087140);
PPC_FUNC_IMPL(__imp__sub_82087140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82087148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82087200
	if (ctx.cr6.eq) goto loc_82087200;
	// addis r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 1572864;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x82087170;
	sub_823052D8(ctx, base);
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r10,r11,220
	ctx.r10.u64 = ctx.r11.u64 | 220;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stbx r29,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u8);
	// bl 0x823051a8
	ctx.lr = 0x82087188;
	sub_823051A8(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82087200
	if (ctx.cr6.eq) goto loc_82087200;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82087200
	if (ctx.cr6.eq) goto loc_82087200;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// ori r9,r11,116
	ctx.r9.u64 = ctx.r11.u64 | 116;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// lis r7,24
	ctx.r7.s64 = 1572864;
	// ori r6,r10,216
	ctx.r6.u64 = ctx.r10.u64 | 216;
	// ori r5,r8,224
	ctx.r5.u64 = ctx.r8.u64 | 224;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// ori r11,r7,228
	ctx.r11.u64 = ctx.r7.u64 | 228;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// stwx r4,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// bl 0x82088370
	ctx.lr = 0x820871DC;
	sub_82088370(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820871F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// ori r7,r8,221
	ctx.r7.u64 = ctx.r8.u64 | 221;
	// stbx r29,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u8);
loc_82087200:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82087208"))) PPC_WEAK_FUNC(sub_82087208);
PPC_FUNC_IMPL(__imp__sub_82087208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82087210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r29,r11,136
	ctx.r29.u64 = ctx.r11.u64 | 136;
loc_82087220:
	// li r4,500
	ctx.r4.s64 = 500;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82247250
	ctx.lr = 0x8208722C;
	sub_82247250(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208726c
	if (!ctx.cr6.eq) goto loc_8208726C;
	// add r30,r31,r29
	ctx.r30.u64 = ctx.r31.u64 + ctx.r29.u64;
loc_8208723C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82087808
	ctx.lr = 0x82087244;
	sub_82087808(ctx, base);
loc_82087244:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82087244
	if (!ctx.cr0.eq) goto loc_82087244;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8208723c
	if (ctx.cr6.gt) goto loc_8208723C;
	// b 0x82087220
	goto loc_82087220;
loc_8208726C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82087278"))) PPC_WEAK_FUNC(sub_82087278);
PPC_FUNC_IMPL(__imp__sub_82087278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82087280;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,21424
	ctx.r11.s64 = ctx.r11.s64 + 21424;
	// addi r10,r10,4892
	ctx.r10.s64 = ctx.r10.s64 + 4892;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r9,31376
	ctx.r11.s64 = ctx.r9.s64 + 31376;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r29,24
	ctx.r29.s64 = 1572864;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r28,24
	ctx.r28.s64 = 1572864;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// lwz r9,644(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 644);
	// lis r7,24
	ctx.r7.s64 = 1572864;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// ori r9,r29,125
	ctx.r9.u64 = ctx.r29.u64 | 125;
	// ori r29,r28,136
	ctx.r29.u64 = ctx.r28.u64 | 136;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lis r5,24
	ctx.r5.s64 = 1572864;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addis r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 1572864;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// ori r8,r8,127
	ctx.r8.u64 = ctx.r8.u64 | 127;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// ori r3,r3,124
	ctx.r3.u64 = ctx.r3.u64 | 124;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// ori r7,r7,112
	ctx.r7.u64 = ctx.r7.u64 | 112;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// ori r6,r6,116
	ctx.r6.u64 = ctx.r6.u64 | 116;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// ori r5,r5,120
	ctx.r5.u64 = ctx.r5.u64 | 120;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r10,5784
	ctx.r4.s64 = ctx.r10.s64 + 5784;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stbx r30,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// stwx r30,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r30.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82087398;
	sub_82305000(ctx, base);
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// ori r7,r9,216
	ctx.r7.u64 = ctx.r9.u64 | 216;
	// ori r6,r8,220
	ctx.r6.u64 = ctx.r8.u64 | 220;
	// lis r5,24
	ctx.r5.s64 = 1572864;
	// lis r4,24
	ctx.r4.s64 = 1572864;
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// ori r9,r5,221
	ctx.r9.u64 = ctx.r5.u64 | 221;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// ori r8,r4,224
	ctx.r8.u64 = ctx.r4.u64 | 224;
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// ori r7,r3,228
	ctx.r7.u64 = ctx.r3.u64 | 228;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// addis r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 1572864;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_820873E8:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820873e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820873E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820873FC"))) PPC_WEAK_FUNC(sub_820873FC);
PPC_FUNC_IMPL(__imp__sub_820873FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82087400"))) PPC_WEAK_FUNC(sub_82087400);
PPC_FUNC_IMPL(__imp__sub_82087400) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82087460
	ctx.lr = 0x82087420;
	sub_82087460(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82087440
	if (ctx.cr6.eq) goto loc_82087440;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82087440
	if (ctx.cr6.eq) goto loc_82087440;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82087440;
	sub_82080000(ctx, base);
loc_82087440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8208745C"))) PPC_WEAK_FUNC(sub_8208745C);
PPC_FUNC_IMPL(__imp__sub_8208745C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82087460"))) PPC_WEAK_FUNC(sub_82087460);
PPC_FUNC_IMPL(__imp__sub_82087460) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r11,4892
	ctx.r10.s64 = ctx.r11.s64 + 4892;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822471d8
	ctx.lr = 0x82087494;
	sub_822471D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82305448
	ctx.lr = 0x8208749C;
	sub_82305448(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820874cc
	if (ctx.cr6.eq) goto loc_820874CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088370
	ctx.lr = 0x820874B0;
	sub_82088370(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820874C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_820874CC:
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r10,r11,100
	ctx.r10.u64 = ctx.r11.u64 | 100;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820874ec
	if (ctx.cr6.eq) goto loc_820874EC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820874EC;
	sub_82080000(ctx, base);
loc_820874EC:
	// addis r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 1572864;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82087508
	if (ctx.cr6.eq) goto loc_82087508;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82087508;
	sub_82246E18(ctx, base);
loc_82087508:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,5784
	ctx.r9.s64 = ctx.r11.s64 + 5784;
	// addi r8,r10,4344
	ctx.r8.s64 = ctx.r10.s64 + 4344;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82305448
	ctx.lr = 0x8208752C;
	sub_82305448(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r7,4352
	ctx.r6.s64 = ctx.r7.s64 + 4352;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82087550"))) PPC_WEAK_FUNC(sub_82087550);
PPC_FUNC_IMPL(__imp__sub_82087550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82087558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 1572864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x82087574;
	sub_823052D8(ctx, base);
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r10,r11,126
	ctx.r10.u64 = ctx.r11.u64 | 126;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// stbx r29,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u8);
	// beq cr6,0x820875a4
	if (ctx.cr6.eq) goto loc_820875A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088290
	ctx.lr = 0x82087598;
	sub_82088290(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x822471d8
	ctx.lr = 0x820875A4;
	sub_822471D8(ctx, base);
loc_820875A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x820875AC;
	sub_823051A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820875B4"))) PPC_WEAK_FUNC(sub_820875B4);
PPC_FUNC_IMPL(__imp__sub_820875B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820875B8"))) PPC_WEAK_FUNC(sub_820875B8);
PPC_FUNC_IMPL(__imp__sub_820875B8) {
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
	// addis r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 1572864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x820875E4;
	sub_823052D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82088370
	ctx.lr = 0x820875F4;
	sub_82088370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x820875FC;
	sub_823051A8(ctx, base);
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

__attribute__((alias("__imp__sub_82087614"))) PPC_WEAK_FUNC(sub_82087614);
PPC_FUNC_IMPL(__imp__sub_82087614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82087618"))) PPC_WEAK_FUNC(sub_82087618);
PPC_FUNC_IMPL(__imp__sub_82087618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82087620;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r25,r3,24
	ctx.r25.s64 = ctx.r3.s64 + 1572864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r25,140
	ctx.r25.s64 = ctx.r25.s64 + 140;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x823052d8
	ctx.lr = 0x8208764C;
	sub_823052D8(ctx, base);
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// ori r9,r11,126
	ctx.r9.u64 = ctx.r11.u64 | 126;
	// ori r8,r10,125
	ctx.r8.u64 = ctx.r10.u64 | 125;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// rlwinm r6,r30,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// stbx r28,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u8);
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// stbx r7,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8208768c
	if (ctx.cr6.eq) goto loc_8208768C;
	// ori r9,r11,128
	ctx.r9.u64 = ctx.r11.u64 | 128;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82087694
	goto loc_82087694;
loc_8208768C:
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stwx r28,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
loc_82087694:
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addis r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 1572864;
	// ori r10,r11,112
	ctx.r10.u64 = ctx.r11.u64 | 112;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r27,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820876BC;
	sub_8233EAF0(ctx, base);
	// rlwinm r9,r29,5,11,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x1FFFE0;
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// sth r29,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// li r27,32
	ctx.r27.s64 = 32;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r5,-2
	ctx.r5.s64 = -2;
	// sth r27,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r27.u16);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// li r10,22
	ctx.r10.s64 = 22;
	// sth r5,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r5.u16);
	// mullw r11,r4,r8
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// sth r4,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r4.u16);
	// sth r10,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r10.u16);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// ble cr6,0x8208770c
	if (!ctx.cr6.gt) goto loc_8208770C;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_8208770C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r4,r11,4900
	ctx.r4.s64 = ctx.r11.s64 + 4900;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8233e4e0
	ctx.lr = 0x82087720;
	sub_8233E4E0(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// sth r27,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r27.u16);
	// addi r8,r10,32432
	ctx.r8.s64 = ctx.r10.s64 + 32432;
	// addi r7,r9,-21912
	ctx.r7.s64 = ctx.r9.s64 + -21912;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82246e60
	ctx.lr = 0x82087750;
	sub_82246E60(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088040
	ctx.lr = 0x82087760;
	sub_82088040(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r30,r3,18,0,13
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0xFFFC0000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082030
	ctx.lr = 0x8208777C;
	sub_82082030(ctx, base);
	// addis r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 1572864;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82087794;
	sub_8233EAF0(ctx, base);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// ori r8,r10,104
	ctx.r8.u64 = ctx.r10.u64 | 104;
	// ori r7,r9,108
	ctx.r7.u64 = ctx.r9.u64 | 108;
	// lwz r11,-27100(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27100);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// li r4,2
	ctx.r4.s64 = 2;
	// addis r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 65536;
	// addi r6,r3,4848
	ctx.r6.s64 = ctx.r3.s64 + 4848;
	// stwx r28,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x82081680
	ctx.lr = 0x820877D4;
	sub_82081680(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82247090
	ctx.lr = 0x820877E0;
	sub_82247090(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// ori r7,r9,132
	ctx.r7.u64 = ctx.r9.u64 | 132;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// bl 0x823051a8
	ctx.lr = 0x82087800;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82087808"))) PPC_WEAK_FUNC(sub_82087808);
PPC_FUNC_IMPL(__imp__sub_82087808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82087810;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,24
	ctx.r28.s64 = ctx.r3.s64 + 1572864;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x82087834;
	sub_823052D8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823052d8
	ctx.lr = 0x82087844;
	sub_823052D8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208786c
	if (ctx.cr6.eq) goto loc_8208786C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82087870
	if (!ctx.cr6.eq) goto loc_82087870;
loc_8208786C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82087870:
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r10,r11,220
	ctx.r10.u64 = ctx.r11.u64 | 220;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82087d70
	if (!ctx.cr6.eq) goto loc_82087D70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82087ef8
	ctx.lr = 0x8208788C;
	sub_82087EF8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820878c0
	if (!ctx.cr6.gt) goto loc_820878C0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,636(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820878c0
	if (ctx.cr6.eq) goto loc_820878C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
loc_820878C0:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820878e0
	if (ctx.cr6.eq) goto loc_820878E0;
	// stb r23,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r23.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8209e000
	ctx.lr = 0x820878E0;
	sub_8209E000(ctx, base);
loc_820878E0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82087d5c
	if (ctx.cr6.eq) goto loc_82087D5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82087d5c
	if (ctx.cr6.eq) goto loc_82087D5C;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// lis r7,24
	ctx.r7.s64 = 1572864;
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// lis r5,24
	ctx.r5.s64 = 1572864;
	// lis r4,24
	ctx.r4.s64 = 1572864;
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// lis r29,24
	ctx.r29.s64 = 1572864;
	// lis r16,3
	ctx.r16.s64 = 196608;
	// ori r17,r10,104
	ctx.r17.u64 = ctx.r10.u64 | 104;
	// ori r18,r9,125
	ctx.r18.u64 = ctx.r9.u64 | 125;
	// ori r14,r8,116
	ctx.r14.u64 = ctx.r8.u64 | 116;
	// ori r15,r7,112
	ctx.r15.u64 = ctx.r7.u64 | 112;
	// ori r24,r6,124
	ctx.r24.u64 = ctx.r6.u64 | 124;
	// ori r25,r5,120
	ctx.r25.u64 = ctx.r5.u64 | 120;
	// addi r22,r11,4860
	ctx.r22.s64 = ctx.r11.s64 + 4860;
	// ori r20,r4,128
	ctx.r20.u64 = ctx.r4.u64 | 128;
	// ori r19,r3,108
	ctx.r19.u64 = ctx.r3.u64 | 108;
	// ori r21,r29,100
	ctx.r21.u64 = ctx.r29.u64 | 100;
loc_82087954:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82087970
	if (!ctx.cr6.eq) goto loc_82087970;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088440
	ctx.lr = 0x82087964;
	sub_82088440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82087d34
	if (ctx.cr6.eq) goto loc_82087D34;
loc_82087970:
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82087cfc
	if (ctx.cr6.eq) goto loc_82087CFC;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820879ac
	if (ctx.cr6.eq) goto loc_820879AC;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
loc_82087998:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82087998
	if (ctx.cr6.lt) goto loc_82087998;
loc_820879AC:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x820879e0
	if (!ctx.cr6.lt) goto loc_820879E0;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subfic r11,r4,8
	ctx.xer.ca = ctx.r4.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r4.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820879e0
	if (ctx.cr6.eq) goto loc_820879E0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820879D8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820879d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820879D8;
loc_820879E0:
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820879F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82087A0C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82087a0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82087A0C;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r26,r31,r17
	ctx.r26.u64 = ctx.r31.u64 + ctx.r17.u64;
	// lwzx r29,r31,r17
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r17.u32);
	// mullw r11,r8,r27
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// lbzx r10,r31,r18
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r18.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// bne cr6,0x82087a74
	if (!ctx.cr6.eq) goto loc_82087A74;
	// lwzx r10,r31,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r15.u32);
	// add r11,r31,r14
	ctx.r11.u64 = ctx.r31.u64 + ctx.r14.u64;
	// lwzx r9,r31,r14
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r14.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82087a5c
	if (!ctx.cr6.eq) goto loc_82087A5C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82087d70
	if (ctx.cr6.eq) goto loc_82087D70;
loc_82087A5C:
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82087a74
	if (ctx.cr6.lt) goto loc_82087A74;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82087A74:
	// rlwinm r28,r8,12,0,19
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82087ad0
	if (!ctx.cr6.eq) goto loc_82087AD0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82087d34
	if (!ctx.cr6.eq) goto loc_82087D34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088510
	ctx.lr = 0x82087A90;
	sub_82088510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82087d34
	if (ctx.cr6.eq) goto loc_82087D34;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r11,r31,r24
	PPC_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82087AB4;
	sub_8233EAF0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwzx r11,r31,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r9,r10,2,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FFFFFFC;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// divwu r10,r28,r9
	ctx.r10.u32 = ctx.r28.u32 / ctx.r9.u32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82087b90
	goto loc_82087B90;
loc_82087AD0:
	// lbzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82087ae4
	if (ctx.cr6.eq) goto loc_82087AE4;
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
loc_82087AE4:
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_82087AE8:
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82087b50
	if (!ctx.cr6.lt) goto loc_82087B50;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82087b40
	if (!ctx.cr6.gt) goto loc_82087B40;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r10,r22,-4
	ctx.r10.s64 = ctx.r22.s64 + -4;
loc_82087B0C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r5,r8
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lfsx f0,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, temp.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82087b0c
	if (ctx.cr6.lt) goto loc_82087B0C;
loc_82087B40:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// blt cr6,0x82087ae8
	if (ctx.cr6.lt) goto loc_82087AE8;
	// b 0x82087b98
	goto loc_82087B98;
loc_82087B50:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82087b98
	if (!ctx.cr0.gt) goto loc_82087B98;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82087B7C;
	sub_8233EAF0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwzx r10,r31,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r9,r11,2,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFFFC;
	// divwu r11,r30,r9
	ctx.r11.u32 = ctx.r30.u32 / ctx.r9.u32;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82087B90:
	// stwx r8,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r8.u32);
	// twllei r9,0
loc_82087B98:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x82087BA4;
	sub_823051A8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82087cb0
	if (!ctx.cr6.eq) goto loc_82087CB0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82087BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,636(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 636);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82087cb0
	if (ctx.cr6.eq) goto loc_82087CB0;
loc_82087BDC:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82087ca0
	if (!ctx.cr6.eq) goto loc_82087CA0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82087ca0
	if (ctx.cr6.eq) goto loc_82087CA0;
	// lwzx r10,r31,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82087ca0
	if (ctx.cr6.eq) goto loc_82087CA0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// beq cr6,0x82087ca0
	if (ctx.cr6.eq) goto loc_82087CA0;
	// lwz r9,556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r9.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r7,r8,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82087c50
	if (ctx.cr6.eq) goto loc_82087C50;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82087c50
	if (ctx.cr6.eq) goto loc_82087C50;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x82087c50
	if (ctx.cr6.eq) goto loc_82087C50;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82087C50:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r9,r9,0,31,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82087c6c
	if (!ctx.cr6.eq) goto loc_82087C6C;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
loc_82087C6C:
	// lwz r9,492(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwinm r7,r9,16,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lwz r3,240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82087CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82087CA0:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82087bdc
	if (!ctx.cr6.eq) goto loc_82087BDC;
loc_82087CB0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823052d8
	ctx.lr = 0x82087CC0;
	sub_823052D8(ctx, base);
	// lwzx r10,r31,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	// add r11,r31,r19
	ctx.r11.u64 = ctx.r31.u64 + ctx.r19.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r31,r19
	PPC_STORE_U32(ctx.r31.u32 + ctx.r19.u32, ctx.r10.u32);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// blt cr6,0x82087cdc
	if (ctx.cr6.lt) goto loc_82087CDC;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82087CDC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwzx r10,r31,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// mullw r11,r28,r11
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82087d24
	if (!ctx.cr6.eq) goto loc_82087D24;
loc_82087CFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82087d24
	if (ctx.cr6.eq) goto loc_82087D24;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82087d34
	if (!ctx.cr6.eq) goto loc_82087D34;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82247328
	ctx.lr = 0x82087D18;
	sub_82247328(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82087d34
	if (ctx.cr6.eq) goto loc_82087D34;
loc_82087D24:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x82087954
	goto loc_82087954;
loc_82087D34:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x82087D40;
	sub_823051A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// bl 0x823051a8
	ctx.lr = 0x82087D50;
	sub_823051A8(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_82087D5C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82087d70
	if (!ctx.cr6.eq) goto loc_82087D70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088370
	ctx.lr = 0x82087D70;
	sub_82088370(ctx, base);
loc_82087D70:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x82087D7C;
	sub_823051A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x82087D84;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82087D90"))) PPC_WEAK_FUNC(sub_82087D90);
PPC_FUNC_IMPL(__imp__sub_82087D90) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 1572864;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// li r4,-1
	ctx.r4.s64 = -1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x82087DCC;
	sub_823052D8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82087df0
	if (ctx.cr6.eq) goto loc_82087DF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82087DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82087DF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x82087DF8;
	sub_823051A8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82087e30
	if (!ctx.cr6.eq) goto loc_82087E30;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82087e30
	if (!ctx.cr6.eq) goto loc_82087E30;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// ori r8,r10,112
	ctx.r8.u64 = ctx.r10.u64 | 112;
	// ori r7,r9,116
	ctx.r7.u64 = ctx.r9.u64 | 116;
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82087e94
	if (ctx.cr6.eq) goto loc_82087E94;
loc_82087E30:
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// addis r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 1572864;
	// ori r7,r10,216
	ctx.r7.u64 = ctx.r10.u64 | 216;
	// addi r9,r9,224
	ctx.r9.s64 = ctx.r9.s64 + 224;
	// addis r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 1572864;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r6,120
	ctx.r6.s64 = ctx.r6.s64 + 120;
	// lwzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82087e6c
	if (ctx.cr6.lt) goto loc_82087E6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82087E6C:
	// addis r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 1572864;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r4,228
	ctx.r4.s64 = ctx.r4.s64 + 228;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82087E94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82087EAC"))) PPC_WEAK_FUNC(sub_82087EAC);
PPC_FUNC_IMPL(__imp__sub_82087EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82087EB0"))) PPC_WEAK_FUNC(sub_82087EB0);
PPC_FUNC_IMPL(__imp__sub_82087EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 1572864;
	// addi r9,r9,136
	ctx.r9.s64 = ctx.r9.s64 + 136;
loc_82087ECC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82087ecc
	if (!ctx.cr0.eq) goto loc_82087ECC;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x822471d8
	sub_822471D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82087EF0"))) PPC_WEAK_FUNC(sub_82087EF0);
PPC_FUNC_IMPL(__imp__sub_82087EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82087EF4"))) PPC_WEAK_FUNC(sub_82087EF4);
PPC_FUNC_IMPL(__imp__sub_82087EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82087EF8"))) PPC_WEAK_FUNC(sub_82087EF8);
PPC_FUNC_IMPL(__imp__sub_82087EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82087F00;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,636(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8208802c
	if (ctx.cr6.eq) goto loc_8208802C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// ori r28,r10,128
	ctx.r28.u64 = ctx.r10.u64 | 128;
	// ori r27,r8,132
	ctx.r27.u64 = ctx.r8.u64 | 132;
	// lfs f30,596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 596);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
loc_82087F44:
	// lwz r11,508(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 508);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8208801c
	if (!ctx.cr6.eq) goto loc_8208801C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208801c
	if (ctx.cr6.eq) goto loc_8208801C;
	// lwzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8208801c
	if (ctx.cr6.eq) goto loc_8208801C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x8208801c
	if (ctx.cr6.eq) goto loc_8208801C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8208801c
	if (!ctx.cr6.eq) goto loc_8208801C;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82087FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820a2448
	ctx.lr = 0x82087FB4;
	sub_820A2448(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8208801c
	if (ctx.cr6.lt) goto loc_8208801C;
	// lfsx f31,r30,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82087fd0
	if (!ctx.cr6.lt) goto loc_82087FD0;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x82087fdc
	goto loc_82087FDC;
loc_82087FD0:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82087fdc
	if (!ctx.cr6.gt) goto loc_82087FDC;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_82087FDC:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82087FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82088014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0038
	ctx.lr = 0x8208801C;
	sub_820A0038(ctx, base);
loc_8208801C:
	// lwz r11,508(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 508);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82087f44
	if (!ctx.cr6.eq) goto loc_82087F44;
loc_8208802C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82088040"))) PPC_WEAK_FUNC(sub_82088040);
PPC_FUNC_IMPL(__imp__sub_82088040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82088048;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// bl 0x823052d8
	ctx.lr = 0x82088070;
	sub_823052D8(ctx, base);
	// addis r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 1572864;
	// lis r27,-32180
	ctx.r27.s64 = -2108948480;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// lis r8,24
	ctx.r8.s64 = 1572864;
	// addis r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 1572864;
	// addi r26,r27,15640
	ctx.r26.s64 = ctx.r27.s64 + 15640;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r7,r7,168
	ctx.r7.s64 = ctx.r7.s64 + 168;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// ori r9,r9,164
	ctx.r9.u64 = ctx.r9.u64 | 164;
	// ori r8,r8,172
	ctx.r8.u64 = ctx.r8.u64 | 172;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,2124(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2124);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// bl 0x8209def0
	ctx.lr = 0x820880C8;
	sub_8209DEF0(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,15640(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15640);
	// addi r11,r7,31376
	ctx.r11.s64 = ctx.r7.s64 + 31376;
	// lwz r4,2124(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2124);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,2(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8209d7c0
	ctx.lr = 0x820880F0;
	sub_8209D7C0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,636(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 636);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82088160
	if (ctx.cr6.eq) goto loc_82088160;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// li r27,2
	ctx.r27.s64 = 2;
	// ori r29,r11,128
	ctx.r29.u64 = ctx.r11.u64 | 128;
loc_8208810C:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82088150
	if (!ctx.cr6.eq) goto loc_82088150;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088150
	if (ctx.cr6.eq) goto loc_82088150;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82088150
	if (ctx.cr6.eq) goto loc_82088150;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x820a1460
	ctx.lr = 0x82088150;
	sub_820A1460(ctx, base);
loc_82088150:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8208810c
	if (!ctx.cr6.eq) goto loc_8208810C;
loc_82088160:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x8208816C;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82088174"))) PPC_WEAK_FUNC(sub_82088174);
PPC_FUNC_IMPL(__imp__sub_82088174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088178"))) PPC_WEAK_FUNC(sub_82088178);
PPC_FUNC_IMPL(__imp__sub_82088178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82088180;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addis r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 1572864;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82088280
	if (ctx.cr6.eq) goto loc_82088280;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r10,31376
	ctx.r11.s64 = ctx.r10.s64 + 31376;
	// lfs f31,596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820881d4
	if (ctx.cr6.lt) goto loc_820881D4;
	// lfs f31,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820881d4
	if (ctx.cr6.gt) goto loc_820881D4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820881D4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823052d8
	ctx.lr = 0x820881E4;
	sub_823052D8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8209df88
	ctx.lr = 0x820881F0;
	sub_8209DF88(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,636(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82088274
	if (ctx.cr6.eq) goto loc_82088274;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r29,r11,128
	ctx.r29.u64 = ctx.r11.u64 | 128;
loc_82088208:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82088264
	if (!ctx.cr6.eq) goto loc_82088264;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088264
	if (ctx.cr6.eq) goto loc_82088264;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088264
	if (ctx.cr6.eq) goto loc_82088264;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// beq cr6,0x82088264
	if (ctx.cr6.eq) goto loc_82088264;
	// lwz r3,240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82088264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82088264:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82088208
	if (!ctx.cr6.eq) goto loc_82088208;
loc_82088274:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x82088280;
	sub_823051A8(ctx, base);
loc_82088280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208828C"))) PPC_WEAK_FUNC(sub_8208828C);
PPC_FUNC_IMPL(__imp__sub_8208828C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088290"))) PPC_WEAK_FUNC(sub_82088290);
PPC_FUNC_IMPL(__imp__sub_82088290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82088298;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088364
	if (ctx.cr6.eq) goto loc_82088364;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82088364
	if (ctx.cr6.eq) goto loc_82088364;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823052d8
	ctx.lr = 0x820882D0;
	sub_823052D8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820882EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,636(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 636);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82088358
	if (ctx.cr6.eq) goto loc_82088358;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r29,r11,128
	ctx.r29.u64 = ctx.r11.u64 | 128;
loc_82088304:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82088348
	if (!ctx.cr6.eq) goto loc_82088348;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088348
	if (ctx.cr6.eq) goto loc_82088348;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82088348
	if (ctx.cr6.eq) goto loc_82088348;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x82088348
	if (ctx.cr6.eq) goto loc_82088348;
	// bl 0x820a0038
	ctx.lr = 0x82088348;
	sub_820A0038(ctx, base);
loc_82088348:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82088304
	if (!ctx.cr6.eq) goto loc_82088304;
loc_82088358:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x82088364;
	sub_823051A8(ctx, base);
loc_82088364:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208836C"))) PPC_WEAK_FUNC(sub_8208836C);
PPC_FUNC_IMPL(__imp__sub_8208836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088370"))) PPC_WEAK_FUNC(sub_82088370);
PPC_FUNC_IMPL(__imp__sub_82088370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82088378;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088434
	if (ctx.cr6.eq) goto loc_82088434;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823052d8
	ctx.lr = 0x8208839C;
	sub_823052D8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820883B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,636(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 636);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82088428
	if (ctx.cr6.eq) goto loc_82088428;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r29,r11,128
	ctx.r29.u64 = ctx.r11.u64 | 128;
loc_820883D0:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82088418
	if (!ctx.cr6.eq) goto loc_82088418;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088418
	if (ctx.cr6.eq) goto loc_82088418;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82088418
	if (ctx.cr6.eq) goto loc_82088418;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x82088418
	if (ctx.cr6.eq) goto loc_82088418;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a0230
	ctx.lr = 0x82088418;
	sub_820A0230(ctx, base);
loc_82088418:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820883d0
	if (!ctx.cr6.eq) goto loc_820883D0;
loc_82088428:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x82088434;
	sub_823051A8(ctx, base);
loc_82088434:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208843C"))) PPC_WEAK_FUNC(sub_8208843C);
PPC_FUNC_IMPL(__imp__sub_8208843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088440"))) PPC_WEAK_FUNC(sub_82088440);
PPC_FUNC_IMPL(__imp__sub_82088440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82088448;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208846C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// blt cr6,0x82088484
	if (ctx.cr6.lt) goto loc_82088484;
loc_82088478:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82088484:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r31,636(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82088500
	if (ctx.cr6.eq) goto loc_82088500;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r29,r11,128
	ctx.r29.u64 = ctx.r11.u64 | 128;
loc_8208849C:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820884f0
	if (!ctx.cr6.eq) goto loc_820884F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820884f0
	if (ctx.cr6.eq) goto loc_820884F0;
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820884f0
	if (ctx.cr6.eq) goto loc_820884F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,19,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFC;
	// rlwinm r10,r10,0,29,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF007;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820884f0
	if (!ctx.cr6.eq) goto loc_820884F0;
	// bl 0x820a2448
	ctx.lr = 0x820884E8;
	sub_820A2448(ctx, base);
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// bge cr6,0x82088478
	if (!ctx.cr6.lt) goto loc_82088478;
loc_820884F0:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8208849c
	if (!ctx.cr6.eq) goto loc_8208849C;
loc_82088500:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208850C"))) PPC_WEAK_FUNC(sub_8208850C);
PPC_FUNC_IMPL(__imp__sub_8208850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088510"))) PPC_WEAK_FUNC(sub_82088510);
PPC_FUNC_IMPL(__imp__sub_82088510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82088518;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208853C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x820885f0
	if (ctx.cr6.gt) goto loc_820885F0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823052d8
	ctx.lr = 0x82088558;
	sub_823052D8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,636(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820885cc
	if (ctx.cr6.eq) goto loc_820885CC;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r29,r11,128
	ctx.r29.u64 = ctx.r11.u64 | 128;
loc_82088570:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820885bc
	if (!ctx.cr6.eq) goto loc_820885BC;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820885bc
	if (ctx.cr6.eq) goto loc_820885BC;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820885bc
	if (ctx.cr6.eq) goto loc_820885BC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x820885bc
	if (ctx.cr6.eq) goto loc_820885BC;
	// bl 0x820a2448
	ctx.lr = 0x820885B4;
	sub_820A2448(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x820885e4
	if (ctx.cr6.gt) goto loc_820885E4;
loc_820885BC:
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82088570
	if (!ctx.cr6.eq) goto loc_82088570;
loc_820885CC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x820885D8;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820885E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x823051a8
	ctx.lr = 0x820885F0;
	sub_823051A8(ctx, base);
loc_820885F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820885FC"))) PPC_WEAK_FUNC(sub_820885FC);
PPC_FUNC_IMPL(__imp__sub_820885FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088600"))) PPC_WEAK_FUNC(sub_82088600);
PPC_FUNC_IMPL(__imp__sub_82088600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82088608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 1572864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,221
	ctx.r29.s64 = ctx.r29.s64 + 221;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820886c0
	if (ctx.cr6.eq) goto loc_820886C0;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r30,r11,15640
	ctx.r30.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820886c0
	if (ctx.cr6.eq) goto loc_820886C0;
	// addis r7,r3,24
	ctx.r7.s64 = ctx.r3.s64 + 1572864;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// addis r4,r3,24
	ctx.r4.s64 = ctx.r3.s64 + 1572864;
	// ori r6,r9,172
	ctx.r6.u64 = ctx.r9.u64 | 172;
	// addi r7,r7,168
	ctx.r7.s64 = ctx.r7.s64 + 168;
	// ori r8,r10,164
	ctx.r8.u64 = ctx.r10.u64 | 164;
	// addi r4,r4,160
	ctx.r4.s64 = ctx.r4.s64 + 160;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r4,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// addis r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 1572864;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,176
	ctx.r4.s64 = ctx.r4.s64 + 176;
	// bl 0x8209def0
	ctx.lr = 0x82088684;
	sub_8209DEF0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82088694
	if (ctx.cr6.eq) goto loc_82088694;
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
loc_82088694:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// addi r7,r11,31376
	ctx.r7.s64 = ctx.r11.s64 + 31376;
	// ori r5,r10,178
	ctx.r5.u64 = ctx.r10.u64 | 178;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,36(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lhzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x8209d7c0
	ctx.lr = 0x820886C0;
	sub_8209D7C0(ctx, base);
loc_820886C0:
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r10,r11,220
	ctx.r10.u64 = ctx.r11.u64 | 220;
	// stbx r28,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820886D4"))) PPC_WEAK_FUNC(sub_820886D4);
PPC_FUNC_IMPL(__imp__sub_820886D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820886D8"))) PPC_WEAK_FUNC(sub_820886D8);
PPC_FUNC_IMPL(__imp__sub_820886D8) {
	PPC_FUNC_PROLOGUE();
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x820886ec
	if (!ctx.cr6.lt) goto loc_820886EC;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
loc_820886EC:
	// fcmpu cr6,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// ble cr6,0x820886fc
	if (!ctx.cr6.gt) goto loc_820886FC;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// blr 
	return;
loc_820886FC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82088704"))) PPC_WEAK_FUNC(sub_82088704);
PPC_FUNC_IMPL(__imp__sub_82088704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088708"))) PPC_WEAK_FUNC(sub_82088708);
PPC_FUNC_IMPL(__imp__sub_82088708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82088710;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,31376
	ctx.r27.s64 = ctx.r11.s64 + 31376;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,48(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2036
	ctx.r3.s64 = 2036;
	// bl 0x82082030
	ctx.lr = 0x82088758;
	sub_82082030(ctx, base);
	// li r10,509
	ctx.r10.s64 = 509;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82088768:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82088768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82088768;
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// li r29,3
	ctx.r29.s64 = 3;
loc_82088784:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208d748
	ctx.lr = 0x8208878C;
	sub_8208D748(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,272
	ctx.r28.s64 = ctx.r28.s64 + 272;
	// bge 0x82088784
	if (!ctx.cr0.lt) goto loc_82088784;
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stb r30,1164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1164, ctx.r30.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r30.u32);
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x82082030
	ctx.lr = 0x820887BC;
	sub_82082030(ctx, base);
	// li r29,127
	ctx.r29.s64 = 127;
	// stw r3,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_820887D0:
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820887d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820887D0;
	// stw r29,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x82082030
	ctx.lr = 0x820887FC;
	sub_82082030(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r3,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_8208880C:
	// lwz r10,1468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8208880c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208880C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r29,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r29.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// stw r30,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r30.u32);
	// addi r9,r11,21424
	ctx.r9.s64 = ctx.r11.s64 + 21424;
	// addi r8,r10,4976
	ctx.r8.s64 = ctx.r10.s64 + 4976;
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r30,1500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1500, ctx.r30.u8);
	// li r6,500
	ctx.r6.s64 = 500;
	// stw r8,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r8.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stb r30,1501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1501, ctx.r30.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r9.u32);
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// addi r3,r31,2072
	ctx.r3.s64 = ctx.r31.s64 + 2072;
	// stw r7,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r7.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stb r30,1520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1520, ctx.r30.u8);
	// stw r30,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r30.u32);
	// stw r30,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r30.u32);
	// stw r30,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r30.u32);
	// stb r30,2048(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2048, ctx.r30.u8);
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// stw r30,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r30.u32);
	// stw r6,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r6.u32);
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// stw r30,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r30.u32);
	// stw r30,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r30.u32);
	// stw r5,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r5.u32);
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// stb r30,2088(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2088, ctx.r30.u8);
	// stb r10,2089(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2089, ctx.r10.u8);
	// stw r30,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r30.u32);
	// bl 0x821dbdd8
	ctx.lr = 0x820888BC;
	sub_821DBDD8(ctx, base);
	// stw r30,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r30.u32);
	// stw r30,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r30.u32);
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// stw r30,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r30.u32);
	// stw r30,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820888DC;
	sub_82305000(ctx, base);
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,1524
	ctx.r3.s64 = ctx.r31.s64 + 1524;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82088910;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208891C"))) PPC_WEAK_FUNC(sub_8208891C);
PPC_FUNC_IMPL(__imp__sub_8208891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088920"))) PPC_WEAK_FUNC(sub_82088920);
PPC_FUNC_IMPL(__imp__sub_82088920) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,15640
	ctx.r30.s64 = ctx.r11.s64 + 15640;
	// lwz r11,1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088a48
	if (ctx.cr6.eq) goto loc_82088A48;
	// lwz r7,1456(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82088954:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82088974
	if (!ctx.cr6.eq) goto loc_82088974;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82088954
	if (ctx.cr6.lt) goto loc_82088954;
	// b 0x82088a48
	goto loc_82088A48;
loc_82088974:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82088a48
	if (ctx.cr6.eq) goto loc_82088A48;
loc_82088984:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// twllei r11,0
	// li r9,0
	ctx.r9.s64 = 0;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820889f4
	if (ctx.cr6.eq) goto loc_820889F4;
loc_820889AC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820889c8
	if (ctx.cr6.eq) goto loc_820889C8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820889ac
	if (!ctx.cr6.eq) goto loc_820889AC;
	// b 0x820889f4
	goto loc_820889F4;
loc_820889C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820889f4
	if (ctx.cr6.eq) goto loc_820889F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820889e4
	if (ctx.cr6.eq) goto loc_820889E4;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x820889e8
	goto loc_820889E8;
loc_820889E4:
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
loc_820889E8:
	// lwz r11,1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1464, ctx.r11.u32);
loc_820889F4:
	// addi r4,r10,-16
	ctx.r4.s64 = ctx.r10.s64 + -16;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82088A00;
	sub_82080000(ctx, base);
	// lwz r11,1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088a48
	if (ctx.cr6.eq) goto loc_82088A48;
	// lwz r7,1456(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82088A18:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82088a38
	if (!ctx.cr6.eq) goto loc_82088A38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82088a18
	if (ctx.cr6.lt) goto loc_82088A18;
	// b 0x82088a48
	goto loc_82088A48;
loc_82088A38:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82088984
	if (!ctx.cr6.eq) goto loc_82088984;
loc_82088A48:
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088b54
	if (ctx.cr6.eq) goto loc_82088B54;
	// lwz r7,1468(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82088A60:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82088a80
	if (!ctx.cr6.eq) goto loc_82088A80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82088a60
	if (ctx.cr6.lt) goto loc_82088A60;
	// b 0x82088b54
	goto loc_82088B54;
loc_82088A80:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82088b54
	if (ctx.cr6.eq) goto loc_82088B54;
loc_82088A90:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// twllei r11,0
	// li r9,0
	ctx.r9.s64 = 0;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088b00
	if (ctx.cr6.eq) goto loc_82088B00;
loc_82088AB8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82088ad4
	if (ctx.cr6.eq) goto loc_82088AD4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82088ab8
	if (!ctx.cr6.eq) goto loc_82088AB8;
	// b 0x82088b00
	goto loc_82088B00;
loc_82088AD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088b00
	if (ctx.cr6.eq) goto loc_82088B00;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82088af0
	if (ctx.cr6.eq) goto loc_82088AF0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x82088af4
	goto loc_82088AF4;
loc_82088AF0:
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
loc_82088AF4:
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1476, ctx.r11.u32);
loc_82088B00:
	// addi r4,r10,-16
	ctx.r4.s64 = ctx.r10.s64 + -16;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82088B0C;
	sub_82080000(ctx, base);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088b54
	if (ctx.cr6.eq) goto loc_82088B54;
	// lwz r7,1468(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82088B24:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82088b44
	if (!ctx.cr6.eq) goto loc_82088B44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82088b24
	if (ctx.cr6.lt) goto loc_82088B24;
	// b 0x82088b54
	goto loc_82088B54;
loc_82088B44:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82088a90
	if (!ctx.cr6.eq) goto loc_82088A90;
loc_82088B54:
	// lwz r3,1480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82088b78
	if (ctx.cr6.eq) goto loc_82088B78;
loc_82088B60:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,1480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1480, ctx.r11.u32);
	// bl 0x820b1f40
	ctx.lr = 0x82088B6C;
	sub_820B1F40(ctx, base);
	// lwz r3,1480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82088b60
	if (!ctx.cr6.eq) goto loc_82088B60;
loc_82088B78:
	// lwz r31,2052(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2052);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82088ba8
	if (ctx.cr6.eq) goto loc_82088BA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088b9c
	if (ctx.cr6.eq) goto loc_82088B9C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82088B9C;
	sub_82080000(ctx, base);
loc_82088B9C:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82088BA8;
	sub_82080000(ctx, base);
loc_82088BA8:
	// lwz r11,2056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2052, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088bc8
	if (ctx.cr6.eq) goto loc_82088BC8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82088BC8;
	sub_82080000(ctx, base);
loc_82088BC8:
	// lwz r10,2104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2104);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2056, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82088be4
	if (ctx.cr6.eq) goto loc_82088BE4;
	// lwz r3,2104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2104);
	// bl 0x82246e18
	ctx.lr = 0x82088BE4;
	sub_82246E18(ctx, base);
loc_82088BE4:
	// addi r3,r30,2072
	ctx.r3.s64 = ctx.r30.s64 + 2072;
	// bl 0x82218450
	ctx.lr = 0x82088BEC;
	sub_82218450(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4344
	ctx.r11.s64 = ctx.r11.s64 + 4344;
	// stb r10,1500(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1500, ctx.r10.u8);
	// addi r3,r30,1492
	ctx.r3.s64 = ctx.r30.s64 + 1492;
	// stw r11,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r11.u32);
	// bl 0x82305448
	ctx.lr = 0x82088C08;
	sub_82305448(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,4352
	ctx.r11.s64 = ctx.r11.s64 + 4352;
	// stw r11,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r11.u32);
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088c2c
	if (ctx.cr6.eq) goto loc_82088C2C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82088C2C;
	sub_82080000(ctx, base);
loc_82088C2C:
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088c44
	if (ctx.cr6.eq) goto loc_82088C44;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82088C44;
	sub_82080000(ctx, base);
loc_82088C44:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088c5c
	if (ctx.cr6.eq) goto loc_82088C5C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82088C5C;
	sub_82080000(ctx, base);
loc_82088C5C:
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

__attribute__((alias("__imp__sub_82088C74"))) PPC_WEAK_FUNC(sub_82088C74);
PPC_FUNC_IMPL(__imp__sub_82088C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82088C78"))) PPC_WEAK_FUNC(sub_82088C78);
PPC_FUNC_IMPL(__imp__sub_82088C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82088C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82088708
	ctx.lr = 0x82088C8C;
	sub_82088708(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r30,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r30.u32);
	// addi r8,r10,5784
	ctx.r8.s64 = ctx.r10.s64 + 5784;
	// stw r30,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// stw r30,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r30.u32);
	// addi r7,r9,5332
	ctx.r7.s64 = ctx.r9.s64 + 5332;
	// stw r30,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r30.u32);
	// li r5,1068
	ctx.r5.s64 = 1068;
	// stw r30,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r11.u32);
	// addi r3,r31,14488
	ctx.r3.s64 = ctx.r31.s64 + 14488;
	// stw r30,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r30.u32);
	// stw r30,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r30.u32);
	// stw r30,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r30.u32);
	// stw r30,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r30.u32);
	// stw r30,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r30,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// stw r8,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r8.u32);
	// stw r30,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r30.u32);
	// stw r30,14484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14484, ctx.r30.u32);
	// stw r30,15564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15564, ctx.r30.u32);
	// stw r11,14476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14476, ctx.r11.u32);
	// stw r7,15568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15568, ctx.r7.u32);
	// stb r30,15572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15572, ctx.r30.u8);
	// bl 0x8233eaf0
	ctx.lr = 0x82088D04;
	sub_8233EAF0(ctx, base);
	// stw r30,15556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15556, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r30.u32);
	// bl 0x82081c00
	ctx.lr = 0x82088D14;
	sub_82081C00(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r28,r6,26516
	ctx.r28.s64 = ctx.r6.s64 + 26516;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,26516(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26516, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x820954a0
	ctx.lr = 0x82088D34;
	sub_820954A0(ctx, base);
	// lbz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r5,128
	ctx.r11.u64 = ctx.r5.u64 | 128;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82088D54;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82088d60
	if (!ctx.cr6.eq) goto loc_82088D60;
	// bl 0x821b3000
	ctx.lr = 0x82088D60;
	sub_821B3000(ctx, base);
loc_82088D60:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088d74
	if (ctx.cr6.eq) goto loc_82088D74;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82088D74:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82088D7C;
	sub_82081C00(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r28,r9,26684
	ctx.r28.s64 = ctx.r9.s64 + 26684;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,26684(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26684, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8209aa40
	ctx.lr = 0x82088D9C;
	sub_8209AA40(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82088DB8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82088dc4
	if (!ctx.cr6.eq) goto loc_82088DC4;
	// bl 0x821b3000
	ctx.lr = 0x82088DC4;
	sub_821B3000(ctx, base);
loc_82088DC4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088dd8
	if (ctx.cr6.eq) goto loc_82088DD8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82088DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82088DE0;
	sub_82081C00(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r28,r9,26572
	ctx.r28.s64 = ctx.r9.s64 + 26572;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,26572(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26572, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82095550
	ctx.lr = 0x82088E00;
	sub_82095550(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82088E18;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82088e24
	if (!ctx.cr6.eq) goto loc_82088E24;
	// bl 0x821b3000
	ctx.lr = 0x82088E24;
	sub_821B3000(ctx, base);
loc_82088E24:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82088e40
	if (ctx.cr6.eq) goto loc_82088E40;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82088E40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82088E48"))) PPC_WEAK_FUNC(sub_82088E48);
PPC_FUNC_IMPL(__imp__sub_82088E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82088E50;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r29,r11,15640
	ctx.r29.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088eac
	if (ctx.cr6.eq) goto loc_82088EAC;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r9,2084(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2084);
	// twllei r11,0
	// lwz r10,2072(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2072);
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82088ea4
	if (ctx.cr6.gt) goto loc_82088EA4;
	// bge cr6,0x82088eac
	if (!ctx.cr6.lt) goto loc_82088EAC;
	// lbz r11,2088(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82088eac
	if (ctx.cr6.eq) goto loc_82088EAC;
loc_82088EA4:
	// addi r3,r29,2072
	ctx.r3.s64 = ctx.r29.s64 + 2072;
	// bl 0x821dbdd8
	ctx.lr = 0x82088EAC;
	sub_821DBDD8(ctx, base);
loc_82088EAC:
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,2076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2076, ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82088f24
	if (ctx.cr6.eq) goto loc_82088F24;
	// lwz r7,56(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82088ECC:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82088eec
	if (!ctx.cr6.eq) goto loc_82088EEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82088ecc
	if (ctx.cr6.lt) goto loc_82088ECC;
	// b 0x82088f24
	goto loc_82088F24;
loc_82088EEC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82088f24
	if (ctx.cr6.eq) goto loc_82088F24;
loc_82088EFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8208dd78
	ctx.lr = 0x82088F08;
	sub_8208DD78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x8208d650
	ctx.lr = 0x82088F14;
	sub_8208D650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82088efc
	if (!ctx.cr6.eq) goto loc_82088EFC;
	// lwz r8,2076(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2076);
loc_82088F24:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x82088f50
	if (!ctx.cr6.gt) goto loc_82088F50;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,2072
	ctx.r3.s64 = ctx.r29.s64 + 2072;
	// bl 0x8208ccf8
	ctx.lr = 0x82088F4C;
	sub_8208CCF8(ctx, base);
	// lwz r8,2076(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2076);
loc_82088F50:
	// cmplwi cr6,r8,25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 25, ctx.xer);
	// ble cr6,0x82088f5c
	if (!ctx.cr6.gt) goto loc_82088F5C;
	// li r8,25
	ctx.r8.s64 = 25;
loc_82088F5C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82088f84
	if (ctx.cr6.eq) goto loc_82088F84;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_82088F6C:
	// lwz r11,2092(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2092);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8208ef60
	ctx.lr = 0x82088F78;
	sub_8208EF60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82088f6c
	if (!ctx.cr0.eq) goto loc_82088F6C;
loc_82088F84:
	// bl 0x82097d00
	ctx.lr = 0x82088F88;
	sub_82097D00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8218f238
	ctx.lr = 0x82088F90;
	sub_8218F238(ctx, base);
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82089028
	if (ctx.cr6.eq) goto loc_82089028;
	// lwz r8,56(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82088FA8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82088fd0
	if (!ctx.cr6.eq) goto loc_82088FD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82088fa8
	if (ctx.cr6.lt) goto loc_82088FA8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82088FD0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82089028
	if (ctx.cr6.eq) goto loc_82089028;
loc_82088FE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x8208d650
	ctx.lr = 0x82088FF0;
	sub_8208D650(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x82089020
	if (!ctx.cr6.eq) goto loc_82089020;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82089020
	if (!ctx.cr6.eq) goto loc_82089020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208db48
	ctx.lr = 0x82089018;
	sub_8208DB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82095070
	ctx.lr = 0x82089020;
	sub_82095070(ctx, base);
loc_82089020:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82088fe0
	if (!ctx.cr6.eq) goto loc_82088FE0;
loc_82089028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82089034"))) PPC_WEAK_FUNC(sub_82089034);
PPC_FUNC_IMPL(__imp__sub_82089034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82089038"))) PPC_WEAK_FUNC(sub_82089038);
PPC_FUNC_IMPL(__imp__sub_82089038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82089040;
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
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8209dd28
	ctx.lr = 0x82089054;
	sub_8209DD28(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r9,r10,-7224
	ctx.r9.s64 = ctx.r10.s64 + -7224;
	// addi r31,r11,15640
	ctx.r31.s64 = ctx.r11.s64 + 15640;
	// lbz r8,16537(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16537);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820890e8
	if (!ctx.cr6.eq) goto loc_820890E8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// bl 0x823052d8
	ctx.lr = 0x82089088;
	sub_823052D8(ctx, base);
	// lwz r3,1480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,1484(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// beq cr6,0x820890d8
	if (ctx.cr6.eq) goto loc_820890D8;
loc_82089098:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82089d10
	ctx.lr = 0x820890A0;
	sub_82089D10(ctx, base);
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// bl 0x820b1f40
	ctx.lr = 0x820890B4;
	sub_820B1F40(ctx, base);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820890cc
	if (ctx.cr6.eq) goto loc_820890CC;
	// lwz r3,1480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82089098
	if (!ctx.cr6.eq) goto loc_82089098;
	// b 0x820890d8
	goto loc_820890D8;
loc_820890CC:
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820890e0
	if (!ctx.cr6.eq) goto loc_820890E0;
loc_820890D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
loc_820890E0:
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// bl 0x823051a8
	ctx.lr = 0x820890E8;
	sub_823051A8(ctx, base);
loc_820890E8:
	// bl 0x8208b030
	ctx.lr = 0x820890EC;
	sub_8208B030(ctx, base);
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lwz r7,15352(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15352);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82089108
	if (!ctx.cr6.eq) goto loc_82089108;
	// bl 0x8209ee40
	ctx.lr = 0x82089104;
	sub_8209EE40(ctx, base);
	// lwz r7,15352(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15352);
loc_82089108:
	// rlwinm r11,r7,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089194
	if (ctx.cr6.eq) goto loc_82089194;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8208918c
	if (ctx.cr6.eq) goto loc_8208918C;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8208912C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8208914c
	if (!ctx.cr6.eq) goto loc_8208914C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8208912c
	if (ctx.cr6.lt) goto loc_8208912C;
	// b 0x8208918c
	goto loc_8208918C;
loc_8208914C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8208918c
	if (ctx.cr6.eq) goto loc_8208918C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_82089168:
	// stfs f31,316(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 316, temp.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stfs f31,312(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 312, temp.u32);
	// stfs f31,308(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 308, temp.u32);
	// bl 0x8208d650
	ctx.lr = 0x8208917C;
	sub_8208D650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82089168
	if (!ctx.cr6.eq) goto loc_82089168;
	// lwz r7,15352(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15352);
loc_8208918C:
	// rlwinm r11,r7,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,15352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15352, ctx.r11.u32);
loc_82089194:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82088e48
	ctx.lr = 0x8208919C;
	sub_82088E48(ctx, base);
	// li r29,128
	ctx.r29.s64 = 128;
	// addi r30,r31,1524
	ctx.r30.s64 = ctx.r31.s64 + 1524;
loc_820891A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820891d0
	if (ctx.cr6.eq) goto loc_820891D0;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r9,r10,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// beq cr6,0x820891d0
	if (ctx.cr6.eq) goto loc_820891D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8208d418
	ctx.lr = 0x820891D0;
	sub_8208D418(ctx, base);
loc_820891D0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820891a4
	if (!ctx.cr0.eq) goto loc_820891A4;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8209ab58
	ctx.lr = 0x820891E4;
	sub_8209AB58(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8208add0
	ctx.lr = 0x820891EC;
	sub_8208ADD0(ctx, base);
	// bl 0x8208bad0
	ctx.lr = 0x820891F0;
	sub_8208BAD0(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82097568
	ctx.lr = 0x820891F8;
	sub_82097568(ctx, base);
	// lwz r31,2176(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822471d8
	ctx.lr = 0x82089204;
	sub_822471D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8208921C"))) PPC_WEAK_FUNC(sub_8208921C);
PPC_FUNC_IMPL(__imp__sub_8208921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82089220"))) PPC_WEAK_FUNC(sub_82089220);
PPC_FUNC_IMPL(__imp__sub_82089220) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,15640
	ctx.r31.s64 = ctx.r11.s64 + 15640;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// bl 0x823052d8
	ctx.lr = 0x82089254;
	sub_823052D8(ctx, base);
	// lwz r11,1484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089268
	if (ctx.cr6.eq) goto loc_82089268;
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// b 0x8208926c
	goto loc_8208926C;
loc_82089268:
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
loc_8208926C:
	// stw r30,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r30.u32);
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// bl 0x823051a8
	ctx.lr = 0x82089278;
	sub_823051A8(ctx, base);
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

__attribute__((alias("__imp__sub_82089290"))) PPC_WEAK_FUNC(sub_82089290);
PPC_FUNC_IMPL(__imp__sub_82089290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82089298;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820892d0
	if (ctx.cr6.eq) goto loc_820892D0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82089598
	if (!ctx.cr6.lt) goto loc_82089598;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26328);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82089598
	if (ctx.cr6.eq) goto loc_82089598;
loc_820892D0:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82089308
	if (!ctx.cr6.eq) goto loc_82089308;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,1160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1160);
	// lwz r10,1156(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1156);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82089304
	if (!ctx.cr6.gt) goto loc_82089304;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82089304
	if (ctx.cr6.eq) goto loc_82089304;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82089304:
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_82089308:
	// bl 0x8208d820
	ctx.lr = 0x8208930C;
	sub_8208D820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82089338
	if (ctx.cr6.eq) goto loc_82089338;
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208d890
	ctx.lr = 0x82089330;
	sub_8208D890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8208933c
	goto loc_8208933C;
loc_82089338:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8208933C:
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089358
	if (ctx.cr6.eq) goto loc_82089358;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r28,1024
	ctx.r28.s64 = 1024;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_82089358:
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089368
	if (ctx.cr6.eq) goto loc_82089368;
	// oris r28,r28,512
	ctx.r28.u64 = ctx.r28.u64 | 33554432;
loc_82089368:
	// lbz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089378
	if (ctx.cr6.eq) goto loc_82089378;
	// oris r28,r28,4
	ctx.r28.u64 = ctx.r28.u64 | 262144;
loc_82089378:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820893a8
	if (!ctx.cr6.eq) goto loc_820893A8;
	// lfs f13,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820893a8
	if (ctx.cr6.eq) goto loc_820893A8;
	// lhz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 156);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r10.u16);
loc_820893A8:
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820893d0
	if (!ctx.cr6.eq) goto loc_820893D0;
	// lfs f13,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820893d0
	if (ctx.cr6.eq) goto loc_820893D0;
	// lhz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 224);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r11.u16);
loc_820893D0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82089400
	if (!ctx.cr6.eq) goto loc_82089400;
	// bl 0x820ddca8
	ctx.lr = 0x820893E8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820893f8
	if (ctx.cr6.eq) goto loc_820893F8;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82089438
	goto loc_82089438;
loc_820893F8:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82089438
	goto loc_82089438;
loc_82089400:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820894d0
	if (ctx.cr6.eq) goto loc_820894D0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82089420
	if (!ctx.cr6.eq) goto loc_82089420;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82089434
	goto loc_82089434;
loc_82089420:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82089434;
	sub_820F3178(ctx, base);
loc_82089434:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82089438:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820894d0
	if (ctx.cr6.eq) goto loc_820894D0;
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r31,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r31.u32);
	// bl 0x8208dce8
	ctx.lr = 0x82089458;
	sub_8208DCE8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82091540
	ctx.lr = 0x82089470;
	sub_82091540(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820894a0
	if (!ctx.cr6.eq) goto loc_820894A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d5a8
	ctx.lr = 0x82089488;
	sub_8208D5A8(ctx, base);
loc_82089488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208db48
	ctx.lr = 0x82089490;
	sub_8208DB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82095070
	ctx.lr = 0x82089498;
	sub_82095070(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820894A0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82089540
	if (ctx.cr6.eq) goto loc_82089540;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820930e0
	ctx.lr = 0x820894CC;
	sub_820930E0(ctx, base);
	// b 0x82089540
	goto loc_82089540;
loc_820894D0:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820894e8
	if (!ctx.cr6.eq) goto loc_820894E8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_820894E8:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208d4f8
	ctx.lr = 0x82089510;
	sub_8208D4F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82091540
	ctx.lr = 0x82089534;
	sub_82091540(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82089488
	if (ctx.cr6.eq) goto loc_82089488;
loc_82089540:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82089574
	if (ctx.cr6.eq) goto loc_82089574;
	// bl 0x82087078
	ctx.lr = 0x82089550;
	sub_82087078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82089574
	if (ctx.cr6.eq) goto loc_82089574;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820941c0
	ctx.lr = 0x8208956C;
	sub_820941C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82172d60
	ctx.lr = 0x82089574;
	sub_82172D60(ctx, base);
loc_82089574:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82089598
	if (ctx.cr6.eq) goto loc_82089598;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82089598
	if (ctx.cr6.eq) goto loc_82089598;
	// bl 0x82087078
	ctx.lr = 0x82089590;
	sub_82087078(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_82089598:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820895A0"))) PPC_WEAK_FUNC(sub_820895A0);
PPC_FUNC_IMPL(__imp__sub_820895A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208d820
	ctx.lr = 0x820895C0;
	sub_8208D820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820895ec
	if (ctx.cr6.eq) goto loc_820895EC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8208d890
	ctx.lr = 0x820895E4;
	sub_8208D890(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820895f0
	goto loc_820895F0;
loc_820895EC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820895F0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208d4f8
	ctx.lr = 0x82089618;
	sub_8208D4F8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82091540
	ctx.lr = 0x82089630;
	sub_82091540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82089654
	if (!ctx.cr6.eq) goto loc_82089654;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82089654
	if (ctx.cr6.eq) goto loc_82089654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208db48
	ctx.lr = 0x8208964C;
	sub_8208DB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82095070
	ctx.lr = 0x82089654;
	sub_82095070(ctx, base);
loc_82089654:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8208966C"))) PPC_WEAK_FUNC(sub_8208966C);
PPC_FUNC_IMPL(__imp__sub_8208966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82089670"))) PPC_WEAK_FUNC(sub_82089670);
PPC_FUNC_IMPL(__imp__sub_82089670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82089678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820896bc
	if (!ctx.cr6.eq) goto loc_820896BC;
	// bl 0x820ddca8
	ctx.lr = 0x8208969C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820896b0
	if (ctx.cr6.eq) goto loc_820896B0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x820896f4
	goto loc_820896F4;
loc_820896B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x820896f4
	goto loc_820896F4;
loc_820896BC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820897a4
	if (ctx.cr6.eq) goto loc_820897A4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820896dc
	if (!ctx.cr6.eq) goto loc_820896DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820896f0
	goto loc_820896F0;
loc_820896DC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820896F0;
	sub_820F3178(ctx, base);
loc_820896F0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820896F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820897a4
	if (ctx.cr6.eq) goto loc_820897A4;
	// bl 0x8208d820
	ctx.lr = 0x82089700;
	sub_8208D820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208972c
	if (ctx.cr6.eq) goto loc_8208972C;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r6,20(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208d890
	ctx.lr = 0x82089724;
	sub_8208D890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82089730
	goto loc_82089730;
loc_8208972C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82089730:
	// lbz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208974c
	if (ctx.cr6.eq) goto loc_8208974C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r30,1024
	ctx.r30.s64 = 1024;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_8208974C:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r31,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r31.u32);
	// bl 0x8208dce8
	ctx.lr = 0x82089764;
	sub_8208DCE8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82091540
	ctx.lr = 0x8208977C;
	sub_82091540(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820897a4
	if (!ctx.cr6.eq) goto loc_820897A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d5a8
	ctx.lr = 0x82089794;
	sub_8208D5A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208db48
	ctx.lr = 0x8208979C;
	sub_8208DB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82095070
	ctx.lr = 0x820897A4;
	sub_82095070(ctx, base);
loc_820897A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820897AC"))) PPC_WEAK_FUNC(sub_820897AC);
PPC_FUNC_IMPL(__imp__sub_820897AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820897B0"))) PPC_WEAK_FUNC(sub_820897B0);
PPC_FUNC_IMPL(__imp__sub_820897B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820897B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r10,15640
	ctx.r30.s64 = ctx.r10.s64 + 15640;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820898d8
	if (ctx.cr6.eq) goto loc_820898D8;
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_820897E0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82089804
	if (!ctx.cr6.eq) goto loc_82089804;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820897e0
	if (ctx.cr6.lt) goto loc_820897E0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82089804:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820898d8
	if (ctx.cr6.eq) goto loc_820898D8;
loc_82089814:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089878
	if (ctx.cr6.eq) goto loc_82089878;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089864
	if (ctx.cr6.eq) goto loc_82089864;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82089864
	if (ctx.cr6.eq) goto loc_82089864;
loc_8208983C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82089854
	if (ctx.cr6.eq) goto loc_82089854;
	// lwz r9,96(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bgt cr6,0x820898e0
	if (ctx.cr6.gt) goto loc_820898E0;
loc_82089854:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8208983c
	if (ctx.cr6.lt) goto loc_8208983C;
loc_82089864:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82089868:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8208987c
	if (ctx.cr6.eq) goto loc_8208987C;
loc_82089878:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8208987C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208989c
	if (!ctx.cr6.eq) goto loc_8208989C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820898a0
	if (ctx.cr6.eq) goto loc_820898A0;
loc_8208989C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820898A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820898c0
	if (!ctx.cr6.eq) goto loc_820898C0;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x820930e0
	ctx.lr = 0x820898C0;
	sub_820930E0(ctx, base);
loc_820898C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x8208d650
	ctx.lr = 0x820898CC;
	sub_8208D650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82089814
	if (!ctx.cr6.eq) goto loc_82089814;
loc_820898D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820898E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82089868
	goto loc_82089868;
}

__attribute__((alias("__imp__sub_820898E8"))) PPC_WEAK_FUNC(sub_820898E8);
PPC_FUNC_IMPL(__imp__sub_820898E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820898F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r10,15640
	ctx.r30.s64 = ctx.r10.s64 + 15640;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820899ec
	if (ctx.cr6.eq) goto loc_820899EC;
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82089918:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8208993c
	if (!ctx.cr6.eq) goto loc_8208993C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82089918
	if (ctx.cr6.lt) goto loc_82089918;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8208993C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820899ec
	if (ctx.cr6.eq) goto loc_820899EC;
loc_8208994C:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820899b0
	if (ctx.cr6.eq) goto loc_820899B0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208999c
	if (ctx.cr6.eq) goto loc_8208999C;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8208999c
	if (ctx.cr6.eq) goto loc_8208999C;
loc_82089974:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8208998c
	if (ctx.cr6.eq) goto loc_8208998C;
	// lwz r9,96(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bgt cr6,0x820899f4
	if (ctx.cr6.gt) goto loc_820899F4;
loc_8208998C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82089974
	if (ctx.cr6.lt) goto loc_82089974;
loc_8208999C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820899A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820899b4
	if (ctx.cr6.eq) goto loc_820899B4;
loc_820899B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820899B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820899d4
	if (!ctx.cr6.eq) goto loc_820899D4;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x820930e0
	ctx.lr = 0x820899D4;
	sub_820930E0(ctx, base);
loc_820899D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x8208d650
	ctx.lr = 0x820899E0;
	sub_8208D650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8208994c
	if (!ctx.cr6.eq) goto loc_8208994C;
loc_820899EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820899F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820899a0
	goto loc_820899A0;
}

__attribute__((alias("__imp__sub_820899FC"))) PPC_WEAK_FUNC(sub_820899FC);
PPC_FUNC_IMPL(__imp__sub_820899FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82089A00"))) PPC_WEAK_FUNC(sub_82089A00);
PPC_FUNC_IMPL(__imp__sub_82089A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82089A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r10,15640
	ctx.r29.s64 = ctx.r10.s64 + 15640;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82089ad4
	if (ctx.cr6.eq) goto loc_82089AD4;
	// lwz r8,56(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82089A30:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82089a54
	if (!ctx.cr6.eq) goto loc_82089A54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82089a30
	if (ctx.cr6.lt) goto loc_82089A30;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82089A54:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82089ad4
	if (ctx.cr6.eq) goto loc_82089AD4;
loc_82089A64:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82089abc
	if (!ctx.cr6.eq) goto loc_82089ABC;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089a98
	if (ctx.cr6.eq) goto loc_82089A98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208d448
	ctx.lr = 0x82089A88;
	sub_8208D448(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82089a9c
	if (ctx.cr6.eq) goto loc_82089A9C;
loc_82089A98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82089A9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82089abc
	if (!ctx.cr6.eq) goto loc_82089ABC;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// bl 0x820930e0
	ctx.lr = 0x82089ABC;
	sub_820930E0(ctx, base);
loc_82089ABC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x8208d650
	ctx.lr = 0x82089AC8;
	sub_8208D650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82089a64
	if (!ctx.cr6.eq) goto loc_82089A64;
loc_82089AD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82089ADC"))) PPC_WEAK_FUNC(sub_82089ADC);
PPC_FUNC_IMPL(__imp__sub_82089ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82089AE0"))) PPC_WEAK_FUNC(sub_82089AE0);
PPC_FUNC_IMPL(__imp__sub_82089AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82089AE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,15640
	ctx.r30.s64 = ctx.r10.s64 + 15640;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82089c08
	if (ctx.cr6.eq) goto loc_82089C08;
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82089B10:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82089b34
	if (!ctx.cr6.eq) goto loc_82089B34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82089b10
	if (ctx.cr6.lt) goto loc_82089B10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82089B34:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82089c08
	if (ctx.cr6.eq) goto loc_82089C08;
loc_82089B44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x82089b88
	if (ctx.cr6.eq) goto loc_82089B88;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82089b88
	if (ctx.cr6.eq) goto loc_82089B88;
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82089B68:
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82089bc4
	if (!ctx.cr6.eq) goto loc_82089BC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82089b68
	if (ctx.cr6.lt) goto loc_82089B68;
loc_82089B88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82089B8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089be4
	if (ctx.cr6.eq) goto loc_82089BE4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82089be4
	if (ctx.cr6.eq) goto loc_82089BE4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82089bcc
	if (!ctx.cr6.eq) goto loc_82089BCC;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,98(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 98);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82090c10
	ctx.lr = 0x82089BC0;
	sub_82090C10(ctx, base);
	// b 0x82089bf0
	goto loc_82089BF0;
loc_82089BC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82089b8c
	goto loc_82089B8C;
loc_82089BCC:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82090c10
	ctx.lr = 0x82089BE0;
	sub_82090C10(ctx, base);
	// b 0x82089bf0
	goto loc_82089BF0;
loc_82089BE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208fe20
	ctx.lr = 0x82089BF0;
	sub_8208FE20(ctx, base);
loc_82089BF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x8208d650
	ctx.lr = 0x82089BFC;
	sub_8208D650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82089b44
	if (!ctx.cr6.eq) goto loc_82089B44;
loc_82089C08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82089C10"))) PPC_WEAK_FUNC(sub_82089C10);
PPC_FUNC_IMPL(__imp__sub_82089C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82089C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82087078
	ctx.lr = 0x82089C2C;
	sub_82087078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82089d04
	if (ctx.cr6.eq) goto loc_82089D04;
	// lwz r31,188(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82089cfc
	if (ctx.cr6.eq) goto loc_82089CFC;
loc_82089C44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x82089c88
	if (ctx.cr6.eq) goto loc_82089C88;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82089c88
	if (ctx.cr6.eq) goto loc_82089C88;
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82089C68:
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82089cc4
	if (!ctx.cr6.eq) goto loc_82089CC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82089c68
	if (ctx.cr6.lt) goto loc_82089C68;
loc_82089C88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82089C8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089ce4
	if (ctx.cr6.eq) goto loc_82089CE4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82089ce4
	if (ctx.cr6.eq) goto loc_82089CE4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82089ccc
	if (!ctx.cr6.eq) goto loc_82089CCC;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,98(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 98);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82090c10
	ctx.lr = 0x82089CC0;
	sub_82090C10(ctx, base);
	// b 0x82089cf0
	goto loc_82089CF0;
loc_82089CC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82089c8c
	goto loc_82089C8C;
loc_82089CCC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82090c10
	ctx.lr = 0x82089CE0;
	sub_82090C10(ctx, base);
	// b 0x82089cf0
	goto loc_82089CF0;
loc_82089CE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208fe20
	ctx.lr = 0x82089CF0;
	sub_8208FE20(ctx, base);
loc_82089CF0:
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82089c44
	if (!ctx.cr6.eq) goto loc_82089C44;
loc_82089CFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82172d60
	ctx.lr = 0x82089D04;
	sub_82172D60(ctx, base);
loc_82089D04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82089D0C"))) PPC_WEAK_FUNC(sub_82089D0C);
PPC_FUNC_IMPL(__imp__sub_82089D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82089D10"))) PPC_WEAK_FUNC(sub_82089D10);
PPC_FUNC_IMPL(__imp__sub_82089D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82089D18;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// bgt cr6,0x8208a19c
	if (ctx.cr6.gt) goto loc_8208A19C;
	// beq cr6,0x8208a14c
	if (ctx.cr6.eq) goto loc_8208A14C;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bgt cr6,0x82089f48
	if (ctx.cr6.gt) goto loc_82089F48;
	// beq cr6,0x82089f30
	if (ctx.cr6.eq) goto loc_82089F30;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82089e68
	if (ctx.cr6.gt) goto loc_82089E68;
	// beq cr6,0x82089e44
	if (ctx.cr6.eq) goto loc_82089E44;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82089d9c
	if (ctx.cr6.eq) goto loc_82089D9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82089d80
	if (ctx.cr6.eq) goto loc_82089D80;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// bl 0x82089670
	ctx.lr = 0x82089D70;
	sub_82089670(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089D80:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82089290
	ctx.lr = 0x82089D8C;
	sub_82089290(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089D9C:
	// bl 0x8208d820
	ctx.lr = 0x82089DA0;
	sub_8208D820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82089df4
	if (ctx.cr6.eq) goto loc_82089DF4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
loc_82089DB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82089db4
	if (!ctx.cr0.eq) goto loc_82089DB4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// bl 0x8208d890
	ctx.lr = 0x82089DEC;
	sub_8208D890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82089df8
	goto loc_82089DF8;
loc_82089DF4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82089DF8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82091540
	ctx.lr = 0x82089E10;
	sub_82091540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208db48
	ctx.lr = 0x82089E2C;
	sub_8208DB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82095070
	ctx.lr = 0x82089E34;
	sub_82095070(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089E44:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x82089E4C;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// bl 0x82091468
	ctx.lr = 0x82089E58;
	sub_82091468(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089E68:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82089e90
	if (ctx.cr6.eq) goto loc_82089E90;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82089ae0
	ctx.lr = 0x82089E80;
	sub_82089AE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089E90:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x82089E98;
	sub_8208BF20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82089f14
	if (ctx.cr6.eq) goto loc_82089F14;
	// bl 0x8208d4a0
	ctx.lr = 0x82089EB4;
	sub_8208D4A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82089f14
	if (ctx.cr6.eq) goto loc_82089F14;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82089ef0
	if (!ctx.cr6.eq) goto loc_82089EF0;
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,98(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 98);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82090c10
	ctx.lr = 0x82089EE0;
	sub_82090C10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089EF0:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82090c10
	ctx.lr = 0x82089F04;
	sub_82090C10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089F14:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208fe20
	ctx.lr = 0x82089F20;
	sub_8208FE20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089F30:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82089c10
	ctx.lr = 0x82089F38;
	sub_82089C10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089F48:
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bgt cr6,0x8208a050
	if (ctx.cr6.gt) goto loc_8208A050;
	// beq cr6,0x8208a000
	if (ctx.cr6.eq) goto loc_8208A000;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x82089fe4
	if (ctx.cr6.eq) goto loc_82089FE4;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x82089f88
	if (ctx.cr6.eq) goto loc_82089F88;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82098668
	ctx.lr = 0x82089F78;
	sub_82098668(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089F88:
	// lfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82085820
	ctx.lr = 0x82089F98;
	sub_82085820(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82089fb8
	if (ctx.cr6.eq) goto loc_82089FB8;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820930e0
	ctx.lr = 0x82089FB8;
	sub_820930E0(ctx, base);
loc_82089FB8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820930e0
	ctx.lr = 0x82089FD4;
	sub_820930E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82089FE4:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x820981d0
	ctx.lr = 0x82089FF0;
	sub_820981D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A000:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x8208A008;
	sub_8208BF20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82087078
	ctx.lr = 0x8208A01C;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820941c0
	ctx.lr = 0x8208A038;
	sub_820941C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x8208A040;
	sub_82172D60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A050:
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// beq cr6,0x8208a0b0
	if (ctx.cr6.eq) goto loc_8208A0B0;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x8208A068;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// lfs f13,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A0B0:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,1460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1460);
	// lwz r10,1456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
loc_8208A0E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8208a10c
	if (ctx.cr6.eq) goto loc_8208A10C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208a0e4
	if (!ctx.cr6.eq) goto loc_8208A0E4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A10C:
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8208a508
	if (ctx.cr6.lt) goto loc_8208A508;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8208a508
	if (ctx.cr6.gt) goto loc_8208A508;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x8208A130;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// bl 0x820943b8
	ctx.lr = 0x8208A13C;
	sub_820943B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A14C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x8208A154;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// lfs f13,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lhz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 224);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,224(r3)
	PPC_STORE_U16(ctx.r3.u32 + 224, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A19C:
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8208a330
	if (ctx.cr6.gt) goto loc_8208A330;
	// beq cr6,0x8208a2ec
	if (ctx.cr6.eq) goto loc_8208A2EC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8208a274
	if (ctx.cr6.gt) goto loc_8208A274;
	// beq cr6,0x8208a25c
	if (ctx.cr6.eq) goto loc_8208A25C;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x8208a208
	if (ctx.cr6.eq) goto loc_8208A208;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x8208a1f0
	if (ctx.cr6.eq) goto loc_8208A1F0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x820898e8
	ctx.lr = 0x8208A1E0;
	sub_820898E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A1F0:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x820897b0
	ctx.lr = 0x8208A1F8;
	sub_820897B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A208:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x8208A210;
	sub_8208BF20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208a238
	if (ctx.cr6.eq) goto loc_8208A238;
	// bl 0x8208d448
	ctx.lr = 0x8208A22C;
	sub_8208D448(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
loc_8208A238:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lbz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// bl 0x820930e0
	ctx.lr = 0x8208A24C;
	sub_820930E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A25C:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82089a00
	ctx.lr = 0x8208A264;
	sub_82089A00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A274:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8208a2d0
	if (ctx.cr6.eq) goto loc_8208A2D0;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82087078
	ctx.lr = 0x8208A294;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8208a2bc
	if (ctx.cr6.eq) goto loc_8208A2BC;
	// lhz r11,102(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 102);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,102(r3)
	PPC_STORE_U16(ctx.r3.u32 + 102, ctx.r11.u16);
loc_8208A2BC:
	// bl 0x82172d60
	ctx.lr = 0x8208A2C0;
	sub_82172D60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A2D0:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8208a5a0
	ctx.lr = 0x8208A2DC;
	sub_8208A5A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A2EC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82087078
	ctx.lr = 0x8208A2F4;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8208a31c
	if (ctx.cr6.eq) goto loc_8208A31C;
	// lhz r11,138(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 138);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,138(r3)
	PPC_STORE_U16(ctx.r3.u32 + 138, ctx.r11.u16);
loc_8208A31C:
	// bl 0x82172d60
	ctx.lr = 0x8208A320;
	sub_82172D60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A330:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8208a450
	if (ctx.cr6.gt) goto loc_8208A450;
	// beq cr6,0x8208a41c
	if (ctx.cr6.eq) goto loc_8208A41C;
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8208a374
	if (ctx.cr6.eq) goto loc_8208A374;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820895a0
	ctx.lr = 0x8208A364;
	sub_820895A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A374:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// li r28,4096
	ctx.r28.s64 = 4096;
	// addi r11,r11,-7224
	ctx.r11.s64 = ctx.r11.s64 + -7224;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_8208A388:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208a400
	if (ctx.cr6.eq) goto loc_8208A400;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// lwz r31,60(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208a400
	if (ctx.cr6.eq) goto loc_8208A400;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8208A3A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a3f4
	if (ctx.cr6.eq) goto loc_8208A3F4;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
loc_8208A3B8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8208a3b8
	if (!ctx.cr0.eq) goto loc_8208A3B8;
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8208a3f0
	if (ctx.cr6.eq) goto loc_8208A3F0;
	// lhz r11,102(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 102);
	// stfs f31,112(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,102(r3)
	PPC_STORE_U16(ctx.r3.u32 + 102, ctx.r11.u16);
loc_8208A3F0:
	// bl 0x82172d60
	ctx.lr = 0x8208A3F4;
	sub_82172D60(ctx, base);
loc_8208A3F4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8208a3a8
	if (!ctx.cr0.eq) goto loc_8208A3A8;
loc_8208A400:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8208a388
	if (!ctx.cr0.eq) goto loc_8208A388;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A41C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x8208A424;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lbz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lfs f3,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82094c68
	ctx.lr = 0x8208A440;
	sub_82094C68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A450:
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8208a4e4
	if (ctx.cr6.eq) goto loc_8208A4E4;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82085820
	ctx.lr = 0x8208A47C;
	sub_82085820(ctx, base);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8208a4a0
	if (ctx.cr6.eq) goto loc_8208A4A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208f650
	ctx.lr = 0x8208A494;
	sub_8208F650(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208a4c0
	if (ctx.cr6.eq) goto loc_8208A4C0;
loc_8208A4A0:
	// lwz r31,16(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208f650
	ctx.lr = 0x8208A4B4;
	sub_8208F650(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208a508
	if (!ctx.cr6.eq) goto loc_8208A508;
loc_8208A4C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82098a30
	ctx.lr = 0x8208A4D4;
	sub_82098A30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A4E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8208bf20
	ctx.lr = 0x8208A4EC;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a508
	if (ctx.cr6.eq) goto loc_8208A508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r10,1,9,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x600000) | (ctx.r11.u64 & 0xFFFFFFFFFF9FFFFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8208A508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208A518"))) PPC_WEAK_FUNC(sub_8208A518);
PPC_FUNC_IMPL(__imp__sub_8208A518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8208A520;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,15640
	ctx.r30.s64 = ctx.r11.s64 + 15640;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,2096
	ctx.r3.s64 = ctx.r30.s64 + 2096;
	// bl 0x823052d8
	ctx.lr = 0x8208A540;
	sub_823052D8(ctx, base);
	// lwz r31,1480(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8208a574
	if (ctx.cr6.eq) goto loc_8208A574;
loc_8208A54C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208a568
	if (ctx.cr6.eq) goto loc_8208A568;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8208a588
	if (ctx.cr6.eq) goto loc_8208A588;
loc_8208A568:
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8208a54c
	if (!ctx.cr6.eq) goto loc_8208A54C;
loc_8208A574:
	// addi r3,r30,2096
	ctx.r3.s64 = ctx.r30.s64 + 2096;
	// bl 0x823051a8
	ctx.lr = 0x8208A57C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A588:
	// addi r3,r30,2096
	ctx.r3.s64 = ctx.r30.s64 + 2096;
	// bl 0x823051a8
	ctx.lr = 0x8208A590;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208A59C"))) PPC_WEAK_FUNC(sub_8208A59C);
PPC_FUNC_IMPL(__imp__sub_8208A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208A5A0"))) PPC_WEAK_FUNC(sub_8208A5A0);
PPC_FUNC_IMPL(__imp__sub_8208A5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8208A5A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,15640
	ctx.r31.s64 = ctx.r11.s64 + 15640;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// lwz r10,1468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// divwu r9,r3,r11
	ctx.r9.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208a5fc
	if (ctx.cr6.eq) goto loc_8208A5FC;
loc_8208A5E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8208a5fc
	if (ctx.cr6.eq) goto loc_8208A5FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208a5e4
	if (!ctx.cr6.eq) goto loc_8208A5E4;
loc_8208A5FC:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208a680
	if (!ctx.cr6.eq) goto loc_8208A680;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82082030
	ctx.lr = 0x8208A61C;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208a638
	if (ctx.cr6.eq) goto loc_8208A638;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// b 0x8208a63c
	goto loc_8208A63C;
loc_8208A638:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8208A63C:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r8,1468(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r9,1472(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// divwu r7,r30,r9
	ctx.r7.u32 = ctx.r30.u32 / ctx.r9.u32;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// twllei r9,0
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r9,1468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// stwx r11,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r9,1476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r9.u32);
	// b 0x8208a684
	goto loc_8208A684;
loc_8208A680:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_8208A684:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82087078
	ctx.lr = 0x8208A694;
	sub_82087078(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8208a714
	if (ctx.cr6.eq) goto loc_8208A714;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8208A6B0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8208a6d0
	if (!ctx.cr6.eq) goto loc_8208A6D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8208a6b0
	if (ctx.cr6.lt) goto loc_8208A6B0;
	// b 0x8208a714
	goto loc_8208A714;
loc_8208A6D0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8208a714
	if (ctx.cr6.eq) goto loc_8208A714;
loc_8208A6E0:
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8208a6fc
	if (!ctx.cr6.eq) goto loc_8208A6FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820941c0
	ctx.lr = 0x8208A6FC;
	sub_820941C0(ctx, base);
loc_8208A6FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8208d650
	ctx.lr = 0x8208A708;
	sub_8208D650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8208a6e0
	if (!ctx.cr6.eq) goto loc_8208A6E0;
loc_8208A714:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8208a724
	if (ctx.cr6.eq) goto loc_8208A724;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82172d60
	ctx.lr = 0x8208A724;
	sub_82172D60(ctx, base);
loc_8208A724:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208A72C"))) PPC_WEAK_FUNC(sub_8208A72C);
PPC_FUNC_IMPL(__imp__sub_8208A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208A730"))) PPC_WEAK_FUNC(sub_8208A730);
PPC_FUNC_IMPL(__imp__sub_8208A730) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r31,r11,15640
	ctx.r31.s64 = ctx.r11.s64 + 15640;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// divwu r9,r3,r11
	ctx.r9.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208a7a8
	if (ctx.cr6.eq) goto loc_8208A7A8;
loc_8208A790:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8208a804
	if (ctx.cr6.eq) goto loc_8208A804;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208a790
	if (!ctx.cr6.eq) goto loc_8208A790;
loc_8208A7A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82082030
	ctx.lr = 0x8208A7BC;
	sub_82082030(ctx, base);
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f30,12(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stfs f29,16(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// twllei r11,0
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// stwx r3,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
loc_8208A804:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208A828"))) PPC_WEAK_FUNC(sub_8208A828);
PPC_FUNC_IMPL(__imp__sub_8208A828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8208A830;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,15640
	ctx.r30.s64 = ctx.r11.s64 + 15640;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,2064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2064);
	// lwz r31,1488(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r9,2064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2064, ctx.r9.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r7,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x8208a8b8
	if (ctx.cr6.eq) goto loc_8208A8B8;
	// b 0x8208a884
	goto loc_8208A884;
loc_8208A880:
	// lwz r9,2064(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2064);
loc_8208A884:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820968e8
	ctx.lr = 0x8208A8A0;
	sub_820968E8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8208a8b8
	if (!ctx.cr6.lt) goto loc_8208A8B8;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8208a880
	if (!ctx.cr6.eq) goto loc_8208A880;
loc_8208A8B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208A8C0"))) PPC_WEAK_FUNC(sub_8208A8C0);
PPC_FUNC_IMPL(__imp__sub_8208A8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8208A8C8;
	__savegprlr_28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f12,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// beq cr6,0x8208a9e0
	if (ctx.cr6.eq) goto loc_8208A9E0;
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_8208A900:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8208a970
	if (!ctx.cr6.lt) goto loc_8208A970;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f11,f3,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8208a95c
	if (!ctx.cr6.lt) goto loc_8208A95C;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8208A95C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// blt cr6,0x8208a900
	if (ctx.cr6.lt) goto loc_8208A900;
loc_8208A970:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8208a9e0
	if (!ctx.cr6.lt) goto loc_8208A9E0;
	// addi r11,r4,22
	ctx.r11.s64 = ctx.r4.s64 + 22;
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208a9c0
	if (ctx.cr6.eq) goto loc_8208A9C0;
loc_8208A99C:
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208a99c
	if (!ctx.cr6.eq) goto loc_8208A99C;
loc_8208A9C0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8208A9E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208A9E8"))) PPC_WEAK_FUNC(sub_8208A9E8);
PPC_FUNC_IMPL(__imp__sub_8208A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x8208A9F0;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208aa58
	if (ctx.cr6.eq) goto loc_8208AA58;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// twllei r11,0
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8208aa50
	if (ctx.cr6.gt) goto loc_8208AA50;
	// bge cr6,0x8208aa58
	if (!ctx.cr6.lt) goto loc_8208AA58;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208aa58
	if (ctx.cr6.eq) goto loc_8208AA58;
loc_8208AA50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d8c40
	ctx.lr = 0x8208AA58;
	sub_821D8C40(ctx, base);
loc_8208AA58:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r19,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r19.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// lwz r10,1488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1488);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8208ac30
	if (ctx.cr6.eq) goto loc_8208AC30;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// add r5,r19,r11
	ctx.r5.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r21,r11,32
	ctx.r21.s64 = ctx.r11.s64 + 32;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// lfs f29,92(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// lis r17,-13569
	ctx.r17.s64 = -889257984;
	// lfs f30,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// addi r18,r11,4944
	ctx.r18.s64 = ctx.r11.s64 + 4944;
loc_8208AAD0:
	// add r27,r21,r24
	ctx.r27.u64 = ctx.r21.u64 + ctx.r24.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// lwz r25,4(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8208ac00
	if (ctx.cr6.eq) goto loc_8208AC00;
	// addi r11,r19,18
	ctx.r11.s64 = ctx.r19.s64 + 18;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8208AAF0:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lfsx f0,r26,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8208ac00
	if (ctx.cr6.eq) goto loc_8208AC00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// ble cr6,0x8208ab60
	if (!ctx.cr6.gt) goto loc_8208AB60;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f12,f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f8,f0,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// bgt cr6,0x8208abf0
	if (ctx.cr6.gt) goto loc_8208ABF0;
loc_8208AB60:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x8208a828
	ctx.lr = 0x8208AB90;
	sub_8208A828(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8208abf0
	if (!ctx.cr6.eq) goto loc_8208ABF0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8208abd4
	if (!ctx.cr6.eq) goto loc_8208ABD4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208abc0
	if (!ctx.cr6.eq) goto loc_8208ABC0;
	// stw r18,-13570(r17)
	PPC_STORE_U32(ctx.r17.u32 + -13570, ctx.r18.u32);
loc_8208ABC0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821d8c40
	ctx.lr = 0x8208ABD4;
	sub_821D8C40(ctx, base);
loc_8208ABD4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stdx r9,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u64);
loc_8208ABF0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8208aaf0
	if (ctx.cr6.lt) goto loc_8208AAF0;
loc_8208AC00:
	// lwz r24,4(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8208aad0
	if (!ctx.cr6.eq) goto loc_8208AAD0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8208ac30
	if (!ctx.cr6.gt) goto loc_8208AC30;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208ce08
	ctx.lr = 0x8208AC30;
	sub_8208CE08(ctx, base);
loc_8208AC30:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208AC44"))) PPC_WEAK_FUNC(sub_8208AC44);
PPC_FUNC_IMPL(__imp__sub_8208AC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208AC48"))) PPC_WEAK_FUNC(sub_8208AC48);
PPC_FUNC_IMPL(__imp__sub_8208AC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8208AC50;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8208adc0
	if (ctx.cr6.eq) goto loc_8208ADC0;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lwz r10,1488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8208adc0
	if (ctx.cr6.eq) goto loc_8208ADC0;
	// mulli r10,r4,272
	ctx.r10.s64 = ctx.r4.s64 * 272;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8208a828
	ctx.lr = 0x8208AD18;
	sub_8208A828(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208adc0
	if (ctx.cr6.eq) goto loc_8208ADC0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x8208ad68
	if (ctx.cr6.lt) goto loc_8208AD68;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r3,-3
	ctx.r9.s64 = ctx.r3.s64 + -3;
loc_8208AD34:
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f0,48(r10)
	ea = 48 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// blt cr6,0x8208ad34
	if (ctx.cr6.lt) goto loc_8208AD34;
loc_8208AD68:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8208ada4
	if (!ctx.cr6.lt) goto loc_8208ADA4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_8208AD90:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bdnz 0x8208ad90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208AD90;
loc_8208ADA4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8208ADC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

