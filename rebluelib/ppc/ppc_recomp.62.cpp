#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8236ED4C"))) PPC_WEAK_FUNC(sub_8236ED4C);
PPC_FUNC_IMPL(__imp__sub_8236ED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236ED50"))) PPC_WEAK_FUNC(sub_8236ED50);
PPC_FUNC_IMPL(__imp__sub_8236ED50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-18772
	ctx.r11.s64 = ctx.r11.s64 + -18772;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8236f5d8
	sub_8236F5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236ED60"))) PPC_WEAK_FUNC(sub_8236ED60);
PPC_FUNC_IMPL(__imp__sub_8236ED60) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8236ED7C;
	sub_8233EAF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236ED90"))) PPC_WEAK_FUNC(sub_8236ED90);
PPC_FUNC_IMPL(__imp__sub_8236ED90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-18772
	ctx.r11.s64 = ctx.r11.s64 + -18772;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236EDA0"))) PPC_WEAK_FUNC(sub_8236EDA0);
PPC_FUNC_IMPL(__imp__sub_8236EDA0) {
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
	// addi r11,r11,-18772
	ctx.r11.s64 = ctx.r11.s64 + -18772;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8236f5d8
	ctx.lr = 0x8236EDCC;
	sub_8236F5D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236eddc
	if (ctx.cr0.eq) goto loc_8236EDDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8236EDDC;
	sub_8236A3F0(ctx, base);
loc_8236EDDC:
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

__attribute__((alias("__imp__sub_8236EDF8"))) PPC_WEAK_FUNC(sub_8236EDF8);
PPC_FUNC_IMPL(__imp__sub_8236EDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234a538
	ctx.lr = 0x8236EE34;
	sub_8234A538(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236EE44"))) PPC_WEAK_FUNC(sub_8236EE44);
PPC_FUNC_IMPL(__imp__sub_8236EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236EE48"))) PPC_WEAK_FUNC(sub_8236EE48);
PPC_FUNC_IMPL(__imp__sub_8236EE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236EE50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236eee0
	if (ctx.cr6.eq) goto loc_8236EEE0;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r30,r11,23908
	ctx.r30.s64 = ctx.r11.s64 + 23908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f628
	ctx.lr = 0x8236EE78;
	sub_8236F628(ctx, base);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r10,-16963
	ctx.r10.s64 = -16963;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// lwz r10,23896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23896);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,23896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23896);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236eeac
	if (ctx.cr6.eq) goto loc_8236EEAC;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
loc_8236EEAC:
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// stw r31,23896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23896, ctx.r31.u32);
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,23900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23900);
	// lwz r10,23904(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23904);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,23900(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23900, ctx.r11.u32);
	// stw r10,23904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23904, ctx.r10.u32);
	// bl 0x8236f630
	ctx.lr = 0x8236EED8;
	sub_8236F630(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// b 0x8236eee4
	goto loc_8236EEE4;
loc_8236EEE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236EEE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236EEEC"))) PPC_WEAK_FUNC(sub_8236EEEC);
PPC_FUNC_IMPL(__imp__sub_8236EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236EEF0"))) PPC_WEAK_FUNC(sub_8236EEF0);
PPC_FUNC_IMPL(__imp__sub_8236EEF0) {
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
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,23908
	ctx.r30.s64 = ctx.r11.s64 + 23908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f628
	ctx.lr = 0x8236EF18;
	sub_8236F628(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48573
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48573, ctx.xer);
	// beq cr6,0x8236ef68
	if (ctx.cr6.eq) goto loc_8236EF68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f630
	ctx.lr = 0x8236EF2C;
	sub_8236F630(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-18684
	ctx.r6.s64 = ctx.r8.s64 + -18684;
	// addi r9,r11,-18716
	ctx.r9.s64 = ctx.r11.s64 + -18716;
	// addi r7,r10,-18744
	ctx.r7.s64 = ctx.r10.s64 + -18744;
	// addi r5,r5,-18760
	ctx.r5.s64 = ctx.r5.s64 + -18760;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,206
	ctx.r8.s64 = 206;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8236EF60;
	sub_82372320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f628
	ctx.lr = 0x8236EF68;
	sub_8236F628(ctx, base);
loc_8236EF68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ef80
	if (ctx.cr6.eq) goto loc_8236EF80;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x8236ef8c
	goto loc_8236EF8C;
loc_8236EF80:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// stw r11,23896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23896, ctx.r11.u32);
loc_8236EF8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236efa0
	if (ctx.cr6.eq) goto loc_8236EFA0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8236EFA0:
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r7,-32183
	ctx.r7.s64 = -2109145088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,23904(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23904);
	// lwz r10,23900(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23900);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r11,23904(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23904, ctx.r11.u32);
	// stw r10,23900(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23900, ctx.r10.u32);
	// bl 0x8236f630
	ctx.lr = 0x8236EFCC;
	sub_8236F630(ctx, base);
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

__attribute__((alias("__imp__sub_8236EFE4"))) PPC_WEAK_FUNC(sub_8236EFE4);
PPC_FUNC_IMPL(__imp__sub_8236EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236EFE8"))) PPC_WEAK_FUNC(sub_8236EFE8);
PPC_FUNC_IMPL(__imp__sub_8236EFE8) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8236f638
	ctx.lr = 0x8236F00C;
	sub_8236F638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236ee48
	ctx.lr = 0x8236F018;
	sub_8236EE48(ctx, base);
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

__attribute__((alias("__imp__sub_8236F02C"))) PPC_WEAK_FUNC(sub_8236F02C);
PPC_FUNC_IMPL(__imp__sub_8236F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F030"))) PPC_WEAK_FUNC(sub_8236F030);
PPC_FUNC_IMPL(__imp__sub_8236F030) {
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
	// beq cr6,0x8236f05c
	if (ctx.cr6.eq) goto loc_8236F05C;
	// addi r31,r3,-20
	ctx.r31.s64 = ctx.r3.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236eef0
	ctx.lr = 0x8236F054;
	sub_8236EEF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f690
	ctx.lr = 0x8236F05C;
	sub_8236F690(ctx, base);
loc_8236F05C:
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

__attribute__((alias("__imp__sub_8236F070"))) PPC_WEAK_FUNC(sub_8236F070);
PPC_FUNC_IMPL(__imp__sub_8236F070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8236F078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f0c4
	if (ctx.cr6.eq) goto loc_8236F0C4;
	// addi r31,r3,-20
	ctx.r31.s64 = ctx.r3.s64 + -20;
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
	// bl 0x8236eef0
	ctx.lr = 0x8236F09C;
	sub_8236EEF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236f698
	ctx.lr = 0x8236F0B4;
	sub_8236F698(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8236ee48
	ctx.lr = 0x8236F0C0;
	sub_8236EE48(ctx, base);
	// b 0x8236f0cc
	goto loc_8236F0CC;
loc_8236F0C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236efe8
	ctx.lr = 0x8236F0CC;
	sub_8236EFE8(ctx, base);
loc_8236F0CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F0D4"))) PPC_WEAK_FUNC(sub_8236F0D4);
PPC_FUNC_IMPL(__imp__sub_8236F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F0D8"))) PPC_WEAK_FUNC(sub_8236F0D8);
PPC_FUNC_IMPL(__imp__sub_8236F0D8) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x8236f638
	ctx.lr = 0x8236F0F8;
	sub_8236F638(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236ee48
	ctx.lr = 0x8236F104;
	sub_8236EE48(ctx, base);
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

__attribute__((alias("__imp__sub_8236F118"))) PPC_WEAK_FUNC(sub_8236F118);
PPC_FUNC_IMPL(__imp__sub_8236F118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236F120;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f164
	if (ctx.cr6.eq) goto loc_8236F164;
	// addi r30,r3,-20
	ctx.r30.s64 = ctx.r3.s64 + -20;
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
	// bl 0x8236eef0
	ctx.lr = 0x8236F148;
	sub_8236EEF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236f698
	ctx.lr = 0x8236F160;
	sub_8236F698(ctx, base);
	// b 0x8236f174
	goto loc_8236F174;
loc_8236F164:
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8236f638
	ctx.lr = 0x8236F174;
	sub_8236F638(ctx, base);
loc_8236F174:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236ee48
	ctx.lr = 0x8236F180;
	sub_8236EE48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F188"))) PPC_WEAK_FUNC(sub_8236F188);
PPC_FUNC_IMPL(__imp__sub_8236F188) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// lwz r11,23900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f240
	if (ctx.cr6.eq) goto loc_8236F240;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r30,r11,23908
	ctx.r30.s64 = ctx.r11.s64 + 23908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f628
	ctx.lr = 0x8236F1BC;
	sub_8236F628(ctx, base);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r6,23900(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23900);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r5,r10,-18556
	ctx.r5.s64 = ctx.r10.s64 + -18556;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,23904(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23904);
	// bl 0x8236d970
	ctx.lr = 0x8236F1DC;
	sub_8236D970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f630
	ctx.lr = 0x8236F1E4;
	sub_8236F630(ctx, base);
	// bl 0x82342e38
	ctx.lr = 0x8236F1E8;
	sub_82342E38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r31,r11,-18604
	ctx.r31.s64 = ctx.r11.s64 + -18604;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236edf8
	ctx.lr = 0x8236F1FC;
	sub_8236EDF8(ctx, base);
	// bl 0x82342e38
	ctx.lr = 0x8236F200;
	sub_82342E38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,-18652
	ctx.r4.s64 = ctx.r11.s64 + -18652;
	// bl 0x8236edf8
	ctx.lr = 0x8236F210;
	sub_8236EDF8(ctx, base);
	// bl 0x82342e38
	ctx.lr = 0x8236F214;
	sub_82342E38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x8236edf8
	ctx.lr = 0x8236F220;
	sub_8236EDF8(ctx, base);
	// bl 0x82342e38
	ctx.lr = 0x8236F224;
	sub_82342E38(ctx, base);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8236edf8
	ctx.lr = 0x8236F230;
	sub_8236EDF8(ctx, base);
	// bl 0x82342e38
	ctx.lr = 0x8236F234;
	sub_82342E38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x8236edf8
	ctx.lr = 0x8236F240;
	sub_8236EDF8(ctx, base);
loc_8236F240:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_8236F258"))) PPC_WEAK_FUNC(sub_8236F258);
PPC_FUNC_IMPL(__imp__sub_8236F258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-18516
	ctx.r11.s64 = ctx.r11.s64 + -18516;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F270"))) PPC_WEAK_FUNC(sub_8236F270);
PPC_FUNC_IMPL(__imp__sub_8236F270) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8236f2f0
	if (!ctx.cr6.eq) goto loc_8236F2F0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x823725f0
	ctx.lr = 0x8236F2A4;
	sub_823725F0(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8236f2e4
	if (!ctx.cr0.lt) goto loc_8236F2E4;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-18380
	ctx.r7.s64 = ctx.r8.s64 + -18380;
	// addi r9,r11,-18416
	ctx.r9.s64 = ctx.r11.s64 + -18416;
	// addi r6,r6,-18440
	ctx.r6.s64 = ctx.r6.s64 + -18440;
	// addi r5,r5,-18448
	ctx.r5.s64 = ctx.r5.s64 + -18448;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,36
	ctx.r8.s64 = 36;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8236F2E0;
	sub_82372320(ctx, base);
	// b 0x8236f324
	goto loc_8236F324;
loc_8236F2E4:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8236f324
	goto loc_8236F324;
loc_8236F2F0:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-18440
	ctx.r6.s64 = ctx.r8.s64 + -18440;
	// addi r9,r11,-18488
	ctx.r9.s64 = ctx.r11.s64 + -18488;
	// addi r7,r10,-18380
	ctx.r7.s64 = ctx.r10.s64 + -18380;
	// addi r5,r5,-18448
	ctx.r5.s64 = ctx.r5.s64 + -18448;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,46
	ctx.r8.s64 = 46;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8236F324;
	sub_82372320(ctx, base);
loc_8236F324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8236F340"))) PPC_WEAK_FUNC(sub_8236F340);
PPC_FUNC_IMPL(__imp__sub_8236F340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8236F348;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8234f138
	ctx.lr = 0x8236F35C;
	sub_8234F138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236b890
	ctx.lr = 0x8236F368;
	sub_8236B890(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236d968
	ctx.lr = 0x8236F374;
	sub_8236D968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82372698
	ctx.lr = 0x8236F384;
	sub_82372698(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F38C"))) PPC_WEAK_FUNC(sub_8236F38C);
PPC_FUNC_IMPL(__imp__sub_8236F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F390"))) PPC_WEAK_FUNC(sub_8236F390);
PPC_FUNC_IMPL(__imp__sub_8236F390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8236F398;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8234f138
	ctx.lr = 0x8236F3B4;
	sub_8234F138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236b890
	ctx.lr = 0x8236F3C0;
	sub_8236B890(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236d968
	ctx.lr = 0x8236F3CC;
	sub_8236D968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82372758
	ctx.lr = 0x8236F3E4;
	sub_82372758(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F3EC"))) PPC_WEAK_FUNC(sub_8236F3EC);
PPC_FUNC_IMPL(__imp__sub_8236F3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F3F0"))) PPC_WEAK_FUNC(sub_8236F3F0);
PPC_FUNC_IMPL(__imp__sub_8236F3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-18352(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18352);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8236F400;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82372538
	ctx.lr = 0x8236F420;
	sub_82372538(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x823728d8
	ctx.lr = 0x8236F438;
	sub_823728D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8236f448
	if (!ctx.cr0.lt) goto loc_8236F448;
	// cmpwi cr6,r30,-5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -5, ctx.xer);
	// bne cr6,0x8236f46c
	if (!ctx.cr6.eq) goto loc_8236F46C;
loc_8236F448:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8236e760
	ctx.lr = 0x8236F454;
	sub_8236E760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// bl 0x8236d8e0
	ctx.lr = 0x8236F464;
	sub_8236D8E0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x8236F46C;
	sub_8236B838(ctx, base);
loc_8236F46C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F3F8"))) PPC_WEAK_FUNC(sub_8236F3F8);
PPC_FUNC_IMPL(__imp__sub_8236F3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8236F400;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82372538
	ctx.lr = 0x8236F420;
	sub_82372538(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x823728d8
	ctx.lr = 0x8236F438;
	sub_823728D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8236f448
	if (!ctx.cr0.lt) goto loc_8236F448;
	// cmpwi cr6,r30,-5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -5, ctx.xer);
	// bne cr6,0x8236f46c
	if (!ctx.cr6.eq) goto loc_8236F46C;
loc_8236F448:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8236e760
	ctx.lr = 0x8236F454;
	sub_8236E760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// bl 0x8236d8e0
	ctx.lr = 0x8236F464;
	sub_8236D8E0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x8236F46C;
	sub_8236B838(ctx, base);
loc_8236F46C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F478"))) PPC_WEAK_FUNC(sub_8236F478);
PPC_FUNC_IMPL(__imp__sub_8236F478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x8236F490;
	sub_8236B838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F4A0"))) PPC_WEAK_FUNC(sub_8236F4A0);
PPC_FUNC_IMPL(__imp__sub_8236F4A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82372a58
	sub_82372A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F4A8"))) PPC_WEAK_FUNC(sub_8236F4A8);
PPC_FUNC_IMPL(__imp__sub_8236F4A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,-18516
	ctx.r10.s64 = ctx.r10.s64 + -18516;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82372a58
	sub_82372A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F4C0"))) PPC_WEAK_FUNC(sub_8236F4C0);
PPC_FUNC_IMPL(__imp__sub_8236F4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-18264(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18264);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8236F4D0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b9a8
	ctx.lr = 0x8236F4E8;
	sub_8236B9A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d8a0
	ctx.lr = 0x8236F4F8;
	sub_8236D8A0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x8236F500;
	sub_8236B838(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f340
	ctx.lr = 0x8236F50C;
	sub_8236F340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x8236F518;
	sub_8236B838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F4C8"))) PPC_WEAK_FUNC(sub_8236F4C8);
PPC_FUNC_IMPL(__imp__sub_8236F4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8236F4D0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b9a8
	ctx.lr = 0x8236F4E8;
	sub_8236B9A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d8a0
	ctx.lr = 0x8236F4F8;
	sub_8236D8A0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x8236F500;
	sub_8236B838(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f340
	ctx.lr = 0x8236F50C;
	sub_8236F340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x8236F518;
	sub_8236B838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F524"))) PPC_WEAK_FUNC(sub_8236F524);
PPC_FUNC_IMPL(__imp__sub_8236F524) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x8236F53C;
	sub_8236B838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F54C"))) PPC_WEAK_FUNC(sub_8236F54C);
PPC_FUNC_IMPL(__imp__sub_8236F54C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821cc648
	ctx.lr = 0x8236F564;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F574"))) PPC_WEAK_FUNC(sub_8236F574);
PPC_FUNC_IMPL(__imp__sub_8236F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F578"))) PPC_WEAK_FUNC(sub_8236F578);
PPC_FUNC_IMPL(__imp__sub_8236F578) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-18516
	ctx.r11.s64 = ctx.r11.s64 + -18516;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82372a58
	ctx.lr = 0x8236F5A8;
	sub_82372A58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236f5b8
	if (ctx.cr0.eq) goto loc_8236F5B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8236F5B8;
	sub_8236A3F0(ctx, base);
loc_8236F5B8:
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

__attribute__((alias("__imp__sub_8236F5D4"))) PPC_WEAK_FUNC(sub_8236F5D4);
PPC_FUNC_IMPL(__imp__sub_8236F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F5D8"))) PPC_WEAK_FUNC(sub_8236F5D8);
PPC_FUNC_IMPL(__imp__sub_8236F5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-18784
	ctx.r11.s64 = ctx.r11.s64 + -18784;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F5E8"))) PPC_WEAK_FUNC(sub_8236F5E8);
PPC_FUNC_IMPL(__imp__sub_8236F5E8) {
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
	// bl 0x82372ab0
	ctx.lr = 0x8236F600;
	sub_82372AB0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8236F61C"))) PPC_WEAK_FUNC(sub_8236F61C);
PPC_FUNC_IMPL(__imp__sub_8236F61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F620"))) PPC_WEAK_FUNC(sub_8236F620);
PPC_FUNC_IMPL(__imp__sub_8236F620) {
	PPC_FUNC_PROLOGUE();
	// b 0x82372b30
	sub_82372B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F624"))) PPC_WEAK_FUNC(sub_8236F624);
PPC_FUNC_IMPL(__imp__sub_8236F624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F628"))) PPC_WEAK_FUNC(sub_8236F628);
PPC_FUNC_IMPL(__imp__sub_8236F628) {
	PPC_FUNC_PROLOGUE();
	// b 0x82372af0
	sub_82372AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F62C"))) PPC_WEAK_FUNC(sub_8236F62C);
PPC_FUNC_IMPL(__imp__sub_8236F62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F630"))) PPC_WEAK_FUNC(sub_8236F630);
PPC_FUNC_IMPL(__imp__sub_8236F630) {
	PPC_FUNC_PROLOGUE();
	// b 0x82372b00
	sub_82372B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F634"))) PPC_WEAK_FUNC(sub_8236F634);
PPC_FUNC_IMPL(__imp__sub_8236F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F638"))) PPC_WEAK_FUNC(sub_8236F638);
PPC_FUNC_IMPL(__imp__sub_8236F638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8236F640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// and. r11,r29,r4
	ctx.r11.u64 = ctx.r29.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236f65c
	if (ctx.cr0.eq) goto loc_8236F65C;
loc_8236F654:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8236f688
	goto loc_8236F688;
loc_8236F65C:
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x82341878
	ctx.lr = 0x8236F66C;
	sub_82341878(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236f654
	if (ctx.cr0.eq) goto loc_8236F654;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8236F688:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F690"))) PPC_WEAK_FUNC(sub_8236F690);
PPC_FUNC_IMPL(__imp__sub_8236F690) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// b 0x82341940
	sub_82341940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F698"))) PPC_WEAK_FUNC(sub_8236F698);
PPC_FUNC_IMPL(__imp__sub_8236F698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236F6A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f638
	ctx.lr = 0x8236F6C0;
	sub_8236F638(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// blt cr6,0x8236f6d4
	if (ctx.cr6.lt) goto loc_8236F6D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8236F6D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8236F6E0;
	sub_8233E4E0(ctx, base);
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82341940
	ctx.lr = 0x8236F6E8;
	sub_82341940(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F6F4"))) PPC_WEAK_FUNC(sub_8236F6F4);
PPC_FUNC_IMPL(__imp__sub_8236F6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236F6F8"))) PPC_WEAK_FUNC(sub_8236F6F8);
PPC_FUNC_IMPL(__imp__sub_8236F6F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F700"))) PPC_WEAK_FUNC(sub_8236F700);
PPC_FUNC_IMPL(__imp__sub_8236F700) {
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8235ef68
	ctx.lr = 0x8236F718;
	sub_8235EF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236f758
	if (!ctx.cr0.eq) goto loc_8236F758;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-18104
	ctx.r6.s64 = ctx.r8.s64 + -18104;
	// addi r9,r11,-18160
	ctx.r9.s64 = ctx.r11.s64 + -18160;
	// addi r7,r10,-18180
	ctx.r7.s64 = ctx.r10.s64 + -18180;
	// addi r5,r5,-18192
	ctx.r5.s64 = ctx.r5.s64 + -18192;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,141
	ctx.r8.s64 = 141;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8236F758;
	sub_82372320(ctx, base);
loc_8236F758:
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

__attribute__((alias("__imp__sub_8236F770"))) PPC_WEAK_FUNC(sub_8236F770);
PPC_FUNC_IMPL(__imp__sub_8236F770) {
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8235dd60
	ctx.lr = 0x8236F788;
	sub_8235DD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236f7c8
	if (!ctx.cr0.eq) goto loc_8236F7C8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-18104
	ctx.r6.s64 = ctx.r8.s64 + -18104;
	// addi r9,r11,-18056
	ctx.r9.s64 = ctx.r11.s64 + -18056;
	// addi r7,r10,-18084
	ctx.r7.s64 = ctx.r10.s64 + -18084;
	// addi r5,r5,-18192
	ctx.r5.s64 = ctx.r5.s64 + -18192;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,151
	ctx.r8.s64 = 151;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8236F7C8;
	sub_82372320(ctx, base);
loc_8236F7C8:
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

__attribute__((alias("__imp__sub_8236F7E0"))) PPC_WEAK_FUNC(sub_8236F7E0);
PPC_FUNC_IMPL(__imp__sub_8236F7E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8235f720
	sub_8235F720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F7E8"))) PPC_WEAK_FUNC(sub_8236F7E8);
PPC_FUNC_IMPL(__imp__sub_8236F7E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F7F0"))) PPC_WEAK_FUNC(sub_8236F7F0);
PPC_FUNC_IMPL(__imp__sub_8236F7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F7F8"))) PPC_WEAK_FUNC(sub_8236F7F8);
PPC_FUNC_IMPL(__imp__sub_8236F7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17976(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17976);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236F808;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236f84c
	if (ctx.cr6.eq) goto loc_8236F84C;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r28,r4,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_8236F824:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236f840
	if (ctx.cr6.eq) goto loc_8236F840;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bab8
	ctx.lr = 0x8236F840;
	sub_8236BAB8(ctx, base);
loc_8236F840:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8236f824
	if (!ctx.cr0.eq) goto loc_8236F824;
loc_8236F84C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F800"))) PPC_WEAK_FUNC(sub_8236F800);
PPC_FUNC_IMPL(__imp__sub_8236F800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236F808;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236f84c
	if (ctx.cr6.eq) goto loc_8236F84C;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r28,r4,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_8236F824:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236f840
	if (ctx.cr6.eq) goto loc_8236F840;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bab8
	ctx.lr = 0x8236F840;
	sub_8236BAB8(ctx, base);
loc_8236F840:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8236f824
	if (!ctx.cr0.eq) goto loc_8236F824;
loc_8236F84C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F854"))) PPC_WEAK_FUNC(sub_8236F854);
PPC_FUNC_IMPL(__imp__sub_8236F854) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234f138
	ctx.lr = 0x8236F870;
	sub_8234F138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F880"))) PPC_WEAK_FUNC(sub_8236F880);
PPC_FUNC_IMPL(__imp__sub_8236F880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17920(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17920);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236F890;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236f8d4
	if (ctx.cr6.eq) goto loc_8236F8D4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r28,r4,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_8236F8AC:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236f8c8
	if (ctx.cr6.eq) goto loc_8236F8C8;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b848
	ctx.lr = 0x8236F8C8;
	sub_8236B848(ctx, base);
loc_8236F8C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8236f8ac
	if (!ctx.cr0.eq) goto loc_8236F8AC;
loc_8236F8D4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F888"))) PPC_WEAK_FUNC(sub_8236F888);
PPC_FUNC_IMPL(__imp__sub_8236F888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236F890;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236f8d4
	if (ctx.cr6.eq) goto loc_8236F8D4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r28,r4,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_8236F8AC:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236f8c8
	if (ctx.cr6.eq) goto loc_8236F8C8;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b848
	ctx.lr = 0x8236F8C8;
	sub_8236B848(ctx, base);
loc_8236F8C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8236f8ac
	if (!ctx.cr0.eq) goto loc_8236F8AC;
loc_8236F8D4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236F8DC"))) PPC_WEAK_FUNC(sub_8236F8DC);
PPC_FUNC_IMPL(__imp__sub_8236F8DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8234f138
	ctx.lr = 0x8236F8F8;
	sub_8234F138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236F908"))) PPC_WEAK_FUNC(sub_8236F908);
PPC_FUNC_IMPL(__imp__sub_8236F908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236F910;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235eb10
	ctx.lr = 0x8236F92C;
	sub_8235EB10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236e710
	ctx.lr = 0x8236F934;
	sub_8236E710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236e690
	ctx.lr = 0x8236F93C;
	sub_8236E690(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f31.f64 = double(temp.f32);
loc_8236F948:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x8235d660
	ctx.lr = 0x8236F954;
	sub_8235D660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8236f978
	if (ctx.cr0.eq) goto loc_8236F978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8236f770
	ctx.lr = 0x8236F968;
	sub_8236F770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235f720
	ctx.lr = 0x8236F970;
	sub_8235F720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f700
	ctx.lr = 0x8236F978;
	sub_8236F700(ctx, base);
loc_8236F978:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236e6c0
	ctx.lr = 0x8236F980;
	sub_8236E6C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8236f998
	if (!ctx.cr6.gt) goto loc_8236F998;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x8235eb10
	ctx.lr = 0x8236F998;
	sub_8235EB10(ctx, base);
loc_8236F998:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82372530
	ctx.lr = 0x8236F9A0;
	sub_82372530(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236f948
	if (!ctx.cr0.eq) goto loc_8236F948;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f9e8
	if (ctx.cr6.eq) goto loc_8236F9E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236F9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f9e4
	if (ctx.cr6.eq) goto loc_8236F9E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236F9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236F9E4:
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
loc_8236F9E8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fa28
	if (ctx.cr6.eq) goto loc_8236FA28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236FA04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fa24
	if (ctx.cr6.eq) goto loc_8236FA24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236FA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236FA24:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8236FA28:
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236FA38"))) PPC_WEAK_FUNC(sub_8236FA38);
PPC_FUNC_IMPL(__imp__sub_8236FA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8236FA40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fa7c
	if (ctx.cr6.eq) goto loc_8236FA7C;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x8236FA64;
	sub_8236A338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236f800
	ctx.lr = 0x8236FA7C;
	sub_8236F800(ctx, base);
loc_8236FA7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236FA88"))) PPC_WEAK_FUNC(sub_8236FA88);
PPC_FUNC_IMPL(__imp__sub_8236FA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8236FA90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236facc
	if (ctx.cr6.eq) goto loc_8236FACC;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x8236FAB4;
	sub_8236A338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236f888
	ctx.lr = 0x8236FACC;
	sub_8236F888(ctx, base);
loc_8236FACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236FAD8"))) PPC_WEAK_FUNC(sub_8236FAD8);
PPC_FUNC_IMPL(__imp__sub_8236FAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17800(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17800);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236fc3c
	if (!ctx.cr6.eq) goto loc_8236FC3C;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x822b14d8
	ctx.lr = 0x8236FB10;
	sub_822B14D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236fc3c
	if (ctx.cr0.eq) goto loc_8236FC3C;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// beq cr6,0x8236fc00
	if (ctx.cr6.eq) goto loc_8236FC00;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8236fc00
	if (ctx.cr6.eq) goto loc_8236FC00;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236a338
	ctx.lr = 0x8236FB30;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236fb4c
	if (ctx.cr0.eq) goto loc_8236FB4C;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lhz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// bl 0x8236bec0
	ctx.lr = 0x8236FB48;
	sub_8236BEC0(ctx, base);
	// b 0x8236fb50
	goto loc_8236FB50;
loc_8236FB4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236FB50:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fb80
	if (ctx.cr6.eq) goto loc_8236FB80;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8236FB60:
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
	// bne 0x8236fb60
	if (!ctx.cr0.eq) goto loc_8236FB60;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8236FB80:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8236fbb8
	if (ctx.cr6.eq) goto loc_8236FBB8;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8236FB98:
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
	// bne 0x8236fb98
	if (!ctx.cr0.eq) goto loc_8236FB98;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8236FBB8:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82374b60
	ctx.lr = 0x8236FBC0;
	sub_82374B60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82372e18
	ctx.lr = 0x8236FBD4;
	sub_82372E18(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823646f8
	ctx.lr = 0x8236FBDC;
	sub_823646F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x8235d598
	ctx.lr = 0x8236FBEC;
	sub_8235D598(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8236FBFC;
	sub_821C0630(ctx, base);
	// b 0x8236fc3c
	goto loc_8236FC3C;
loc_8236FC00:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-18104
	ctx.r6.s64 = ctx.r8.s64 + -18104;
	// addi r9,r10,-17856
	ctx.r9.s64 = ctx.r10.s64 + -17856;
	// addi r7,r11,-17872
	ctx.r7.s64 = ctx.r11.s64 + -17872;
	// addi r5,r5,-18192
	ctx.r5.s64 = ctx.r5.s64 + -18192;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,65
	ctx.r8.s64 = 65;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8236FC3C;
	sub_82372320(ctx, base);
loc_8236FC3C:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
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

__attribute__((alias("__imp__sub_8236FAE0"))) PPC_WEAK_FUNC(sub_8236FAE0);
PPC_FUNC_IMPL(__imp__sub_8236FAE0) {
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
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236fc3c
	if (!ctx.cr6.eq) goto loc_8236FC3C;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x822b14d8
	ctx.lr = 0x8236FB10;
	sub_822B14D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236fc3c
	if (ctx.cr0.eq) goto loc_8236FC3C;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// beq cr6,0x8236fc00
	if (ctx.cr6.eq) goto loc_8236FC00;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8236fc00
	if (ctx.cr6.eq) goto loc_8236FC00;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236a338
	ctx.lr = 0x8236FB30;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236fb4c
	if (ctx.cr0.eq) goto loc_8236FB4C;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lhz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// bl 0x8236bec0
	ctx.lr = 0x8236FB48;
	sub_8236BEC0(ctx, base);
	// b 0x8236fb50
	goto loc_8236FB50;
loc_8236FB4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236FB50:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236fb80
	if (ctx.cr6.eq) goto loc_8236FB80;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8236FB60:
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
	// bne 0x8236fb60
	if (!ctx.cr0.eq) goto loc_8236FB60;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8236FB80:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8236fbb8
	if (ctx.cr6.eq) goto loc_8236FBB8;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8236FB98:
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
	// bne 0x8236fb98
	if (!ctx.cr0.eq) goto loc_8236FB98;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8236FBB8:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82374b60
	ctx.lr = 0x8236FBC0;
	sub_82374B60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82372e18
	ctx.lr = 0x8236FBD4;
	sub_82372E18(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823646f8
	ctx.lr = 0x8236FBDC;
	sub_823646F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x8235d598
	ctx.lr = 0x8236FBEC;
	sub_8235D598(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8236FBFC;
	sub_821C0630(ctx, base);
	// b 0x8236fc3c
	goto loc_8236FC3C;
loc_8236FC00:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-18104
	ctx.r6.s64 = ctx.r8.s64 + -18104;
	// addi r9,r10,-17856
	ctx.r9.s64 = ctx.r10.s64 + -17856;
	// addi r7,r11,-17872
	ctx.r7.s64 = ctx.r11.s64 + -17872;
	// addi r5,r5,-18192
	ctx.r5.s64 = ctx.r5.s64 + -18192;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,65
	ctx.r8.s64 = 65;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8236FC3C;
	sub_82372320(ctx, base);
loc_8236FC3C:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
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

__attribute__((alias("__imp__sub_8236FC54"))) PPC_WEAK_FUNC(sub_8236FC54);
PPC_FUNC_IMPL(__imp__sub_8236FC54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350110
	ctx.lr = 0x8236FC6C;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236FC7C"))) PPC_WEAK_FUNC(sub_8236FC7C);
PPC_FUNC_IMPL(__imp__sub_8236FC7C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8236FC94;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236FCA4"))) PPC_WEAK_FUNC(sub_8236FCA4);
PPC_FUNC_IMPL(__imp__sub_8236FCA4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x821c0630
	ctx.lr = 0x8236FCBC;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236FCCC"))) PPC_WEAK_FUNC(sub_8236FCCC);
PPC_FUNC_IMPL(__imp__sub_8236FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236FCD0"))) PPC_WEAK_FUNC(sub_8236FCD0);
PPC_FUNC_IMPL(__imp__sub_8236FCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17720(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17720);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r4,120(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8236fd34
	if (ctx.cr6.eq) goto loc_8236FD34;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82373450
	ctx.lr = 0x8236FD20;
	sub_82373450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823689c8
	ctx.lr = 0x8236FD2C;
	sub_823689C8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8236FD34;
	sub_821C0630(ctx, base);
loc_8236FD34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8236FCD8"))) PPC_WEAK_FUNC(sub_8236FCD8);
PPC_FUNC_IMPL(__imp__sub_8236FCD8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r4,120(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8236fd34
	if (ctx.cr6.eq) goto loc_8236FD34;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82373450
	ctx.lr = 0x8236FD20;
	sub_82373450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823689c8
	ctx.lr = 0x8236FD2C;
	sub_823689C8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8236FD34;
	sub_821C0630(ctx, base);
loc_8236FD34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8236FD50"))) PPC_WEAK_FUNC(sub_8236FD50);
PPC_FUNC_IMPL(__imp__sub_8236FD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236fd80
	if (ctx.cr0.eq) goto loc_8236FD80;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x821c0630
	ctx.lr = 0x8236FD80;
	sub_821C0630(ctx, base);
loc_8236FD80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236FD90"))) PPC_WEAK_FUNC(sub_8236FD90);
PPC_FUNC_IMPL(__imp__sub_8236FD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x8236FDA8;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236FDB8"))) PPC_WEAK_FUNC(sub_8236FDB8);
PPC_FUNC_IMPL(__imp__sub_8236FDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236FDC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236fe5c
	if (!ctx.cr6.gt) goto loc_8236FE5C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236fdec
	if (ctx.cr6.gt) goto loc_8236FDEC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8236FDEC:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8236fdfc
	if (ctx.cr6.gt) goto loc_8236FDFC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8236FDFC:
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x8236fe2c
	if (ctx.cr0.eq) goto loc_8236FE2C;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x8236FE14;
	sub_8236A338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236f800
	ctx.lr = 0x8236FE2C;
	sub_8236F800(ctx, base);
loc_8236FE2C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236fe50
	if (ctx.cr6.eq) goto loc_8236FE50;
loc_8236FE3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236bbb8
	ctx.lr = 0x8236FE44;
	sub_8236BBB8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8236fe3c
	if (!ctx.cr0.eq) goto loc_8236FE3C;
loc_8236FE50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x8236FE58;
	sub_8236A3F0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8236FE5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236FE64"))) PPC_WEAK_FUNC(sub_8236FE64);
PPC_FUNC_IMPL(__imp__sub_8236FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236FE68"))) PPC_WEAK_FUNC(sub_8236FE68);
PPC_FUNC_IMPL(__imp__sub_8236FE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8236FE70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236ff0c
	if (!ctx.cr6.gt) goto loc_8236FF0C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236fe9c
	if (ctx.cr6.gt) goto loc_8236FE9C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8236FE9C:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8236feac
	if (ctx.cr6.gt) goto loc_8236FEAC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8236FEAC:
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x8236fedc
	if (ctx.cr0.eq) goto loc_8236FEDC;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x8236FEC4;
	sub_8236A338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236f888
	ctx.lr = 0x8236FEDC;
	sub_8236F888(ctx, base);
loc_8236FEDC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236ff00
	if (ctx.cr6.eq) goto loc_8236FF00;
loc_8236FEEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b838
	ctx.lr = 0x8236FEF4;
	sub_8236B838(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8236feec
	if (!ctx.cr0.eq) goto loc_8236FEEC;
loc_8236FF00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x8236FF08;
	sub_8236A3F0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8236FF0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236FF14"))) PPC_WEAK_FUNC(sub_8236FF14);
PPC_FUNC_IMPL(__imp__sub_8236FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236FF18"))) PPC_WEAK_FUNC(sub_8236FF18);
PPC_FUNC_IMPL(__imp__sub_8236FF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8236FF20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82370044
	if (ctx.cr6.eq) goto loc_82370044;
	// lwz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8236ff64
	if (!ctx.cr6.gt) goto loc_8236FF64;
	// bl 0x821c5310
	ctx.lr = 0x8236FF48;
	sub_821C5310(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fa38
	ctx.lr = 0x8236FF54;
	sub_8236FA38(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8236ffcc
	goto loc_8236FFCC;
loc_8236FF64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8236ffd4
	if (!ctx.cr6.gt) goto loc_8236FFD4;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ffa8
	if (ctx.cr6.eq) goto loc_8236FFA8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236FF80:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x8236bbd8
	ctx.lr = 0x8236FF94;
	sub_8236BBD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236ff80
	if (ctx.cr6.lt) goto loc_8236FF80;
loc_8236FFA8:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r8,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r8.s64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8236f800
	ctx.lr = 0x8236FFCC;
	sub_8236F800(ctx, base);
loc_8236FFCC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// b 0x82370044
	goto loc_82370044;
loc_8236FFD4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82370004
	if (ctx.cr6.eq) goto loc_82370004;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8236FFE4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8236bbd8
	ctx.lr = 0x8236FFF8;
	sub_8236BBD8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8236ffe4
	if (!ctx.cr0.eq) goto loc_8236FFE4;
loc_82370004:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x82370034
	if (ctx.cr0.eq) goto loc_82370034;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82370020:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236bbb8
	ctx.lr = 0x82370028;
	sub_8236BBB8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82370020
	if (!ctx.cr0.eq) goto loc_82370020;
loc_82370034:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fdb8
	ctx.lr = 0x82370044;
	sub_8236FDB8(ctx, base);
loc_82370044:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237004C"))) PPC_WEAK_FUNC(sub_8237004C);
PPC_FUNC_IMPL(__imp__sub_8237004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370050"))) PPC_WEAK_FUNC(sub_82370050);
PPC_FUNC_IMPL(__imp__sub_82370050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82370058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82370170
	if (ctx.cr6.eq) goto loc_82370170;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8237009c
	if (!ctx.cr6.gt) goto loc_8237009C;
	// bl 0x821c53b0
	ctx.lr = 0x82370080;
	sub_821C53B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fa88
	ctx.lr = 0x8237008C;
	sub_8236FA88(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82370100
	goto loc_82370100;
loc_8237009C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82370108
	if (!ctx.cr6.gt) goto loc_82370108;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823700dc
	if (ctx.cr6.eq) goto loc_823700DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823700B8:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823700b8
	if (ctx.cr6.lt) goto loc_823700B8;
loc_823700DC:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r8,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r8.s64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8236f888
	ctx.lr = 0x82370100;
	sub_8236F888(ctx, base);
loc_82370100:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x82370170
	goto loc_82370170;
loc_82370108:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82370130
	if (ctx.cr6.eq) goto loc_82370130;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82370118:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82370118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82370118;
loc_82370130:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x82370160
	if (ctx.cr0.eq) goto loc_82370160;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8237014C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b838
	ctx.lr = 0x82370154;
	sub_8236B838(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8237014c
	if (!ctx.cr0.eq) goto loc_8237014C;
loc_82370160:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fe68
	ctx.lr = 0x82370170;
	sub_8236FE68(ctx, base);
loc_82370170:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370178"))) PPC_WEAK_FUNC(sub_82370178);
PPC_FUNC_IMPL(__imp__sub_82370178) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8236ff18
	ctx.lr = 0x823701B8;
	sub_8236FF18(ctx, base);
	// lhz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// bl 0x82370050
	ctx.lr = 0x823701CC;
	sub_82370050(ctx, base);
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_823701F0"))) PPC_WEAK_FUNC(sub_823701F0);
PPC_FUNC_IMPL(__imp__sub_823701F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17640(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17640);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-17656
	ctx.r11.s64 = ctx.r11.s64 + -17656;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82371f58
	ctx.lr = 0x8237022C;
	sub_82371F58(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8235ede8
	ctx.lr = 0x82370234;
	sub_8235EDE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_823701F8"))) PPC_WEAK_FUNC(sub_823701F8);
PPC_FUNC_IMPL(__imp__sub_823701F8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-17656
	ctx.r11.s64 = ctx.r11.s64 + -17656;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82371f58
	ctx.lr = 0x8237022C;
	sub_82371F58(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8235ede8
	ctx.lr = 0x82370234;
	sub_8235EDE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8237025C"))) PPC_WEAK_FUNC(sub_8237025C);
PPC_FUNC_IMPL(__imp__sub_8237025C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821c5400
	ctx.lr = 0x82370278;
	sub_821C5400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370288"))) PPC_WEAK_FUNC(sub_82370288);
PPC_FUNC_IMPL(__imp__sub_82370288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17576(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17576);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-17656
	ctx.r11.s64 = ctx.r11.s64 + -17656;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8236f908
	ctx.lr = 0x823702C0;
	sub_8236F908(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8235eea8
	ctx.lr = 0x823702C8;
	sub_8235EEA8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x821c5400
	ctx.lr = 0x823702D0;
	sub_821C5400(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82370290"))) PPC_WEAK_FUNC(sub_82370290);
PPC_FUNC_IMPL(__imp__sub_82370290) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-17656
	ctx.r11.s64 = ctx.r11.s64 + -17656;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8236f908
	ctx.lr = 0x823702C0;
	sub_8236F908(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8235eea8
	ctx.lr = 0x823702C8;
	sub_8235EEA8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x821c5400
	ctx.lr = 0x823702D0;
	sub_821C5400(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_823702E8"))) PPC_WEAK_FUNC(sub_823702E8);
PPC_FUNC_IMPL(__imp__sub_823702E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821c5400
	ctx.lr = 0x82370304;
	sub_821C5400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370314"))) PPC_WEAK_FUNC(sub_82370314);
PPC_FUNC_IMPL(__imp__sub_82370314) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8235eea8
	ctx.lr = 0x82370330;
	sub_8235EEA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370340"))) PPC_WEAK_FUNC(sub_82370340);
PPC_FUNC_IMPL(__imp__sub_82370340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17496(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17496);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82370178
	ctx.lr = 0x8237036C;
	sub_82370178(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823703b4
	if (!ctx.cr6.eq) goto loc_823703B4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8236a338
	ctx.lr = 0x82370380;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82370394
	if (ctx.cr0.eq) goto loc_82370394;
	// bl 0x8236f258
	ctx.lr = 0x82370390;
	sub_8236F258(ctx, base);
	// b 0x82370398
	goto loc_82370398;
loc_82370394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82370398:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823703B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823703B4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r4,10(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823703CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8236a338
	ctx.lr = 0x823703D4;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823703e8
	if (ctx.cr0.eq) goto loc_823703E8;
	// bl 0x823738f8
	ctx.lr = 0x823703E4;
	sub_823738F8(ctx, base);
	// b 0x823703ec
	goto loc_823703EC;
loc_823703E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823703EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82370348"))) PPC_WEAK_FUNC(sub_82370348);
PPC_FUNC_IMPL(__imp__sub_82370348) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82370178
	ctx.lr = 0x8237036C;
	sub_82370178(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823703b4
	if (!ctx.cr6.eq) goto loc_823703B4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8236a338
	ctx.lr = 0x82370380;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82370394
	if (ctx.cr0.eq) goto loc_82370394;
	// bl 0x8236f258
	ctx.lr = 0x82370390;
	sub_8236F258(ctx, base);
	// b 0x82370398
	goto loc_82370398;
loc_82370394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82370398:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823703B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823703B4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r4,10(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823703CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8236a338
	ctx.lr = 0x823703D4;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823703e8
	if (ctx.cr0.eq) goto loc_823703E8;
	// bl 0x823738f8
	ctx.lr = 0x823703E4;
	sub_823738F8(ctx, base);
	// b 0x823703ec
	goto loc_823703EC;
loc_823703E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823703EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82370414"))) PPC_WEAK_FUNC(sub_82370414);
PPC_FUNC_IMPL(__imp__sub_82370414) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x8237042C;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237043C"))) PPC_WEAK_FUNC(sub_8237043C);
PPC_FUNC_IMPL(__imp__sub_8237043C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x82370454;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370464"))) PPC_WEAK_FUNC(sub_82370464);
PPC_FUNC_IMPL(__imp__sub_82370464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370468"))) PPC_WEAK_FUNC(sub_82370468);
PPC_FUNC_IMPL(__imp__sub_82370468) {
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
	// bl 0x82370290
	ctx.lr = 0x82370488;
	sub_82370290(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82370498
	if (ctx.cr0.eq) goto loc_82370498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82370498;
	sub_8236A3F0(ctx, base);
loc_82370498:
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

__attribute__((alias("__imp__sub_823704B4"))) PPC_WEAK_FUNC(sub_823704B4);
PPC_FUNC_IMPL(__imp__sub_823704B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823704B8"))) PPC_WEAK_FUNC(sub_823704B8);
PPC_FUNC_IMPL(__imp__sub_823704B8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823704E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823704FC"))) PPC_WEAK_FUNC(sub_823704FC);
PPC_FUNC_IMPL(__imp__sub_823704FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370500"))) PPC_WEAK_FUNC(sub_82370500);
PPC_FUNC_IMPL(__imp__sub_82370500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17416(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17416);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82370510;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r26,1
	ctx.r26.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823705b4
	if (ctx.cr0.eq) goto loc_823705B4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236d8a0
	ctx.lr = 0x82370568;
	sub_8236D8A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8237059c
	if (!ctx.cr6.eq) goto loc_8237059C;
	// stw r26,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823689c8
	ctx.lr = 0x82370598;
	sub_823689C8(ctx, base);
	// b 0x823705a8
	goto loc_823705A8;
loc_8237059C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_823705A8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x823705B0;
	sub_8236B838(ctx, base);
	// b 0x823705c0
	goto loc_823705C0;
loc_823705B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_823705C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c0630
	ctx.lr = 0x823705C8;
	sub_821C0630(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370508"))) PPC_WEAK_FUNC(sub_82370508);
PPC_FUNC_IMPL(__imp__sub_82370508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82370510;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r26,1
	ctx.r26.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823705b4
	if (ctx.cr0.eq) goto loc_823705B4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236d8a0
	ctx.lr = 0x82370568;
	sub_8236D8A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8237059c
	if (!ctx.cr6.eq) goto loc_8237059C;
	// stw r26,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823689c8
	ctx.lr = 0x82370598;
	sub_823689C8(ctx, base);
	// b 0x823705a8
	goto loc_823705A8;
loc_8237059C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_823705A8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x823705B0;
	sub_8236B838(ctx, base);
	// b 0x823705c0
	goto loc_823705C0;
loc_823705B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_823705C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c0630
	ctx.lr = 0x823705C8;
	sub_821C0630(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823705D4"))) PPC_WEAK_FUNC(sub_823705D4);
PPC_FUNC_IMPL(__imp__sub_823705D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x821c0630
	ctx.lr = 0x823705EC;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823705FC"))) PPC_WEAK_FUNC(sub_823705FC);
PPC_FUNC_IMPL(__imp__sub_823705FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821cc648
	ctx.lr = 0x82370614;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370624"))) PPC_WEAK_FUNC(sub_82370624);
PPC_FUNC_IMPL(__imp__sub_82370624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370628"))) PPC_WEAK_FUNC(sub_82370628);
PPC_FUNC_IMPL(__imp__sub_82370628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-17096(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17096);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82370638;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-1632
	ctx.r31.s64 = ctx.r1.s64 + -1632;
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823708f8
	if (!ctx.cr6.eq) goto loc_823708F8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d820
	ctx.lr = 0x82370658;
	sub_8236D820(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
	// li r6,1288
	ctx.r6.s64 = 1288;
	// addi r5,r31,272
	ctx.r5.s64 = ctx.r31.s64 + 272;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237067C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// ble cr6,0x823708ec
	if (!ctx.cr6.gt) goto loc_823708EC;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236b290
	ctx.lr = 0x82370698;
	sub_8236B290(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x821c07f0
	ctx.lr = 0x823706A4;
	sub_821C07F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823708e4
	if (ctx.cr0.eq) goto loc_823708E4;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x823708e4
	if (!ctx.cr6.eq) goto loc_823708E4;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236a7a8
	ctx.lr = 0x823706C4;
	sub_8236A7A8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236a490
	ctx.lr = 0x823706D4;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82370708
	if (ctx.cr0.eq) goto loc_82370708;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x821c0958
	ctx.lr = 0x823706FC;
	sub_821C0958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237070c
	if (!ctx.cr0.eq) goto loc_8237070C;
loc_82370708:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237070C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823708e4
	if (ctx.cr0.eq) goto loc_823708E4;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x823717a0
	ctx.lr = 0x8237071C;
	sub_823717A0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823708e4
	if (!ctx.cr6.eq) goto loc_823708E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b188
	ctx.lr = 0x82370738;
	sub_8236B188(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b4a0
	ctx.lr = 0x8237074C;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b048
	ctx.lr = 0x8237075C;
	sub_8236B048(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b4a0
	ctx.lr = 0x82370768;
	sub_8236B4A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b048
	ctx.lr = 0x82370778;
	sub_8236B048(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d9e8
	ctx.lr = 0x823707A0;
	sub_8236D9E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r30,r11,-17180
	ctx.r30.s64 = ctx.r11.s64 + -17180;
	// addi r29,r10,-17224
	ctx.r29.s64 = ctx.r10.s64 + -17224;
	// addi r28,r9,-17248
	ctx.r28.s64 = ctx.r9.s64 + -17248;
	// addi r27,r8,29112
	ctx.r27.s64 = ctx.r8.s64 + 29112;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r9,r11,-17288
	ctx.r9.s64 = ctx.r11.s64 + -17288;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// li r8,94
	ctx.r8.s64 = 94;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823707E8;
	sub_82372320(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8234f138
	ctx.lr = 0x823707F0;
	sub_8234F138(ctx, base);
	// bl 0x8236ba70
	ctx.lr = 0x823707F4;
	sub_8236BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8237083c
	if (ctx.cr6.eq) goto loc_8237083C;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236b970
	ctx.lr = 0x82370808;
	sub_8236B970(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d968
	ctx.lr = 0x82370814;
	sub_8236D968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236d8a0
	ctx.lr = 0x82370824;
	sub_8236D8A0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236b838
	ctx.lr = 0x8237082C;
	sub_8236B838(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236b838
	ctx.lr = 0x8237083C;
	sub_8236B838(ctx, base);
loc_8237083C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237085C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x823708dc
	if (!ctx.cr0.gt) goto loc_823708DC;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d9e8
	ctx.lr = 0x82370874;
	sub_8236D9E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r9,r11,-17316
	ctx.r9.s64 = ctx.r11.s64 + -17316;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// li r8,112
	ctx.r8.s64 = 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8237089C;
	sub_82372320(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823708dc
	if (ctx.cr6.eq) goto loc_823708DC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823708B0:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823708C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823708b0
	if (ctx.cr6.lt) goto loc_823708B0;
loc_823708DC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a8c0
	ctx.lr = 0x823708E4;
	sub_8236A8C0(ctx, base);
loc_823708E4:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236a8c0
	ctx.lr = 0x823708EC;
	sub_8236A8C0(ctx, base);
loc_823708EC:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x823708F4;
	sub_8236B838(ctx, base);
	// b 0x8237092c
	goto loc_8237092C;
loc_823708F8:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-17224
	ctx.r6.s64 = ctx.r8.s64 + -17224;
	// addi r9,r11,-17336
	ctx.r9.s64 = ctx.r11.s64 + -17336;
	// addi r7,r10,-17180
	ctx.r7.s64 = ctx.r10.s64 + -17180;
	// addi r5,r5,-17248
	ctx.r5.s64 = ctx.r5.s64 + -17248;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,125
	ctx.r8.s64 = 125;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8237092C;
	sub_82372320(ctx, base);
loc_8237092C:
	// addi r1,r31,1632
	ctx.r1.s64 = ctx.r31.s64 + 1632;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370630"))) PPC_WEAK_FUNC(sub_82370630);
PPC_FUNC_IMPL(__imp__sub_82370630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82370638;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-1632
	ctx.r31.s64 = ctx.r1.s64 + -1632;
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823708f8
	if (!ctx.cr6.eq) goto loc_823708F8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d820
	ctx.lr = 0x82370658;
	sub_8236D820(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
	// li r6,1288
	ctx.r6.s64 = 1288;
	// addi r5,r31,272
	ctx.r5.s64 = ctx.r31.s64 + 272;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237067C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// ble cr6,0x823708ec
	if (!ctx.cr6.gt) goto loc_823708EC;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236b290
	ctx.lr = 0x82370698;
	sub_8236B290(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x821c07f0
	ctx.lr = 0x823706A4;
	sub_821C07F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823708e4
	if (ctx.cr0.eq) goto loc_823708E4;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x823708e4
	if (!ctx.cr6.eq) goto loc_823708E4;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236a7a8
	ctx.lr = 0x823706C4;
	sub_8236A7A8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236a490
	ctx.lr = 0x823706D4;
	sub_8236A490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82370708
	if (ctx.cr0.eq) goto loc_82370708;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x821c0958
	ctx.lr = 0x823706FC;
	sub_821C0958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237070c
	if (!ctx.cr0.eq) goto loc_8237070C;
loc_82370708:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237070C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823708e4
	if (ctx.cr0.eq) goto loc_823708E4;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x823717a0
	ctx.lr = 0x8237071C;
	sub_823717A0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823708e4
	if (!ctx.cr6.eq) goto loc_823708E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b188
	ctx.lr = 0x82370738;
	sub_8236B188(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b4a0
	ctx.lr = 0x8237074C;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b048
	ctx.lr = 0x8237075C;
	sub_8236B048(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b4a0
	ctx.lr = 0x82370768;
	sub_8236B4A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b048
	ctx.lr = 0x82370778;
	sub_8236B048(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d9e8
	ctx.lr = 0x823707A0;
	sub_8236D9E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r30,r11,-17180
	ctx.r30.s64 = ctx.r11.s64 + -17180;
	// addi r29,r10,-17224
	ctx.r29.s64 = ctx.r10.s64 + -17224;
	// addi r28,r9,-17248
	ctx.r28.s64 = ctx.r9.s64 + -17248;
	// addi r27,r8,29112
	ctx.r27.s64 = ctx.r8.s64 + 29112;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r9,r11,-17288
	ctx.r9.s64 = ctx.r11.s64 + -17288;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// li r8,94
	ctx.r8.s64 = 94;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823707E8;
	sub_82372320(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8234f138
	ctx.lr = 0x823707F0;
	sub_8234F138(ctx, base);
	// bl 0x8236ba70
	ctx.lr = 0x823707F4;
	sub_8236BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8237083c
	if (ctx.cr6.eq) goto loc_8237083C;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236b970
	ctx.lr = 0x82370808;
	sub_8236B970(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d968
	ctx.lr = 0x82370814;
	sub_8236D968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236d8a0
	ctx.lr = 0x82370824;
	sub_8236D8A0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236b838
	ctx.lr = 0x8237082C;
	sub_8236B838(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236b838
	ctx.lr = 0x8237083C;
	sub_8236B838(ctx, base);
loc_8237083C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237085C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x823708dc
	if (!ctx.cr0.gt) goto loc_823708DC;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d9e8
	ctx.lr = 0x82370874;
	sub_8236D9E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r9,r11,-17316
	ctx.r9.s64 = ctx.r11.s64 + -17316;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// li r8,112
	ctx.r8.s64 = 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8237089C;
	sub_82372320(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823708dc
	if (ctx.cr6.eq) goto loc_823708DC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823708B0:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823708C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823708b0
	if (ctx.cr6.lt) goto loc_823708B0;
loc_823708DC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a8c0
	ctx.lr = 0x823708E4;
	sub_8236A8C0(ctx, base);
loc_823708E4:
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236a8c0
	ctx.lr = 0x823708EC;
	sub_8236A8C0(ctx, base);
loc_823708EC:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x823708F4;
	sub_8236B838(ctx, base);
	// b 0x8237092c
	goto loc_8237092C;
loc_823708F8:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-17224
	ctx.r6.s64 = ctx.r8.s64 + -17224;
	// addi r9,r11,-17336
	ctx.r9.s64 = ctx.r11.s64 + -17336;
	// addi r7,r10,-17180
	ctx.r7.s64 = ctx.r10.s64 + -17180;
	// addi r5,r5,-17248
	ctx.r5.s64 = ctx.r5.s64 + -17248;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,125
	ctx.r8.s64 = 125;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8237092C;
	sub_82372320(ctx, base);
loc_8237092C:
	// addi r1,r31,1632
	ctx.r1.s64 = ctx.r31.s64 + 1632;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370934"))) PPC_WEAK_FUNC(sub_82370934);
PPC_FUNC_IMPL(__imp__sub_82370934) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821cc648
	ctx.lr = 0x8237094C;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237095C"))) PPC_WEAK_FUNC(sub_8237095C);
PPC_FUNC_IMPL(__imp__sub_8237095C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236a8c0
	ctx.lr = 0x82370974;
	sub_8236A8C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370984"))) PPC_WEAK_FUNC(sub_82370984);
PPC_FUNC_IMPL(__imp__sub_82370984) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a8c0
	ctx.lr = 0x8237099C;
	sub_8236A8C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823709AC"))) PPC_WEAK_FUNC(sub_823709AC);
PPC_FUNC_IMPL(__imp__sub_823709AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236b838
	ctx.lr = 0x823709C4;
	sub_8236B838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823709D4"))) PPC_WEAK_FUNC(sub_823709D4);
PPC_FUNC_IMPL(__imp__sub_823709D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821cc648
	ctx.lr = 0x823709EC;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823709FC"))) PPC_WEAK_FUNC(sub_823709FC);
PPC_FUNC_IMPL(__imp__sub_823709FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370A00"))) PPC_WEAK_FUNC(sub_82370A00);
PPC_FUNC_IMPL(__imp__sub_82370A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82370A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370a24
	if (ctx.cr6.gt) goto loc_82370A24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82370A24:
	// add. r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x82370a54
	if (ctx.cr0.eq) goto loc_82370A54;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x82370A38;
	sub_8236A338(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370a54
	if (ctx.cr6.eq) goto loc_82370A54;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8233e4e0
	ctx.lr = 0x82370A54;
	sub_8233E4E0(ctx, base);
loc_82370A54:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x82370A5C;
	sub_8236A3F0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370A6C"))) PPC_WEAK_FUNC(sub_82370A6C);
PPC_FUNC_IMPL(__imp__sub_82370A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370A70"))) PPC_WEAK_FUNC(sub_82370A70);
PPC_FUNC_IMPL(__imp__sub_82370A70) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82370aa4
	if (!ctx.cr6.eq) goto loc_82370AA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82370a00
	ctx.lr = 0x82370AA4;
	sub_82370A00(ctx, base);
loc_82370AA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82370AF8"))) PPC_WEAK_FUNC(sub_82370AF8);
PPC_FUNC_IMPL(__imp__sub_82370AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-16960(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16960);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82370B08;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8236f258
	ctx.lr = 0x82370B28;
	sub_8236F258(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370B00"))) PPC_WEAK_FUNC(sub_82370B00);
PPC_FUNC_IMPL(__imp__sub_82370B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82370B08;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8236f258
	ctx.lr = 0x82370B28;
	sub_8236F258(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370B4C"))) PPC_WEAK_FUNC(sub_82370B4C);
PPC_FUNC_IMPL(__imp__sub_82370B4C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x821c0630
	ctx.lr = 0x82370B64;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370B74"))) PPC_WEAK_FUNC(sub_82370B74);
PPC_FUNC_IMPL(__imp__sub_82370B74) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8236f4a8
	ctx.lr = 0x82370B90;
	sub_8236F4A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370BA0"))) PPC_WEAK_FUNC(sub_82370BA0);
PPC_FUNC_IMPL(__imp__sub_82370BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-16888(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16888);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// bl 0x823704b8
	ctx.lr = 0x82370BCC;
	sub_823704B8(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82370BDC;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8236f4a8
	ctx.lr = 0x82370BF4;
	sub_8236F4A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82370BFC;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82370BA8"))) PPC_WEAK_FUNC(sub_82370BA8);
PPC_FUNC_IMPL(__imp__sub_82370BA8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// bl 0x823704b8
	ctx.lr = 0x82370BCC;
	sub_823704B8(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82370BDC;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8236f4a8
	ctx.lr = 0x82370BF4;
	sub_8236F4A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82370BFC;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82370C14"))) PPC_WEAK_FUNC(sub_82370C14);
PPC_FUNC_IMPL(__imp__sub_82370C14) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x821c0630
	ctx.lr = 0x82370C2C;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370C3C"))) PPC_WEAK_FUNC(sub_82370C3C);
PPC_FUNC_IMPL(__imp__sub_82370C3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8236f4a8
	ctx.lr = 0x82370C58;
	sub_8236F4A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370C68"))) PPC_WEAK_FUNC(sub_82370C68);
PPC_FUNC_IMPL(__imp__sub_82370C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8236a878
	ctx.lr = 0x82370C84;
	sub_8236A878(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370C94"))) PPC_WEAK_FUNC(sub_82370C94);
PPC_FUNC_IMPL(__imp__sub_82370C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370C98"))) PPC_WEAK_FUNC(sub_82370C98);
PPC_FUNC_IMPL(__imp__sub_82370C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82370CA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82370d28
	if (!ctx.cr6.gt) goto loc_82370D28;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82370CC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82370d14
	if (!ctx.cr6.eq) goto loc_82370D14;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82370d0c
	if (!ctx.cr6.lt) goto loc_82370D0C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370d0c
	if (ctx.cr6.eq) goto loc_82370D0C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363fd8
	ctx.lr = 0x82370D0C;
	sub_82363FD8(ctx, base);
loc_82370D0C:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82370D14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82370cc0
	if (ctx.cr6.lt) goto loc_82370CC0;
loc_82370D28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370D30"))) PPC_WEAK_FUNC(sub_82370D30);
PPC_FUNC_IMPL(__imp__sub_82370D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-16816
	ctx.r11.s64 = ctx.r11.s64 + -16816;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370D40"))) PPC_WEAK_FUNC(sub_82370D40);
PPC_FUNC_IMPL(__imp__sub_82370D40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16816
	ctx.r11.s64 = ctx.r11.s64 + -16816;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82370d6c
	if (ctx.cr0.eq) goto loc_82370D6C;
	// bl 0x8236a3f0
	ctx.lr = 0x82370D6C;
	sub_8236A3F0(ctx, base);
loc_82370D6C:
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

__attribute__((alias("__imp__sub_82370D84"))) PPC_WEAK_FUNC(sub_82370D84);
PPC_FUNC_IMPL(__imp__sub_82370D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370D88"))) PPC_WEAK_FUNC(sub_82370D88);
PPC_FUNC_IMPL(__imp__sub_82370D88) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x821c0630
	sub_821C0630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370D90"))) PPC_WEAK_FUNC(sub_82370D90);
PPC_FUNC_IMPL(__imp__sub_82370D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-16792(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16792);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82370DA0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370e2c
	if (ctx.cr6.eq) goto loc_82370E2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82370DC8:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82370e04
	if (ctx.cr6.eq) goto loc_82370E04;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82370DE4:
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
	// bne 0x82370de4
	if (!ctx.cr0.eq) goto loc_82370DE4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82370E04:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82370dc8
	if (ctx.cr6.lt) goto loc_82370DC8;
loc_82370E2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82370E34;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370D98"))) PPC_WEAK_FUNC(sub_82370D98);
PPC_FUNC_IMPL(__imp__sub_82370D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82370DA0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370e2c
	if (ctx.cr6.eq) goto loc_82370E2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82370DC8:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82370e04
	if (ctx.cr6.eq) goto loc_82370E04;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82370DE4:
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
	// bne 0x82370de4
	if (!ctx.cr0.eq) goto loc_82370DE4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82370E04:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82370dc8
	if (ctx.cr6.lt) goto loc_82370DC8;
loc_82370E2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82370E34;
	sub_821C0630(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370E3C"))) PPC_WEAK_FUNC(sub_82370E3C);
PPC_FUNC_IMPL(__imp__sub_82370E3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x821c0630
	ctx.lr = 0x82370E54;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370E64"))) PPC_WEAK_FUNC(sub_82370E64);
PPC_FUNC_IMPL(__imp__sub_82370E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370E68"))) PPC_WEAK_FUNC(sub_82370E68);
PPC_FUNC_IMPL(__imp__sub_82370E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-16700(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16700);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r10,-16712
	ctx.r10.s64 = ctx.r10.s64 + -16712;
	// lfs f0,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8236e710
	ctx.lr = 0x82370EAC;
	sub_8236E710(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8236f258
	ctx.lr = 0x82370EB4;
	sub_8236F258(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82370E70"))) PPC_WEAK_FUNC(sub_82370E70);
PPC_FUNC_IMPL(__imp__sub_82370E70) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r10,-16712
	ctx.r10.s64 = ctx.r10.s64 + -16712;
	// lfs f0,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8236e710
	ctx.lr = 0x82370EAC;
	sub_8236E710(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8236f258
	ctx.lr = 0x82370EB4;
	sub_8236F258(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82370EEC"))) PPC_WEAK_FUNC(sub_82370EEC);
PPC_FUNC_IMPL(__imp__sub_82370EEC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8236f4a8
	ctx.lr = 0x82370F08;
	sub_8236F4A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370F18"))) PPC_WEAK_FUNC(sub_82370F18);
PPC_FUNC_IMPL(__imp__sub_82370F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-16648(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16648);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82370F28;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-16712
	ctx.r11.s64 = ctx.r11.s64 + -16712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82370F6C;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236f4a8
	ctx.lr = 0x82370F84;
	sub_8236F4A8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370F20"))) PPC_WEAK_FUNC(sub_82370F20);
PPC_FUNC_IMPL(__imp__sub_82370F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82370F28;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-16712
	ctx.r11.s64 = ctx.r11.s64 + -16712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82370F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82370F6C;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236f4a8
	ctx.lr = 0x82370F84;
	sub_8236F4A8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82370F8C"))) PPC_WEAK_FUNC(sub_82370F8C);
PPC_FUNC_IMPL(__imp__sub_82370F8C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8236f4a8
	ctx.lr = 0x82370FA8;
	sub_8236F4A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370FB8"))) PPC_WEAK_FUNC(sub_82370FB8);
PPC_FUNC_IMPL(__imp__sub_82370FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x8236a878
	ctx.lr = 0x82370FD4;
	sub_8236A878(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82370FE4"))) PPC_WEAK_FUNC(sub_82370FE4);
PPC_FUNC_IMPL(__imp__sub_82370FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82370FE8"))) PPC_WEAK_FUNC(sub_82370FE8);
PPC_FUNC_IMPL(__imp__sub_82370FE8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x82370a70
	ctx.lr = 0x82371004;
	sub_82370A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371014"))) PPC_WEAK_FUNC(sub_82371014);
PPC_FUNC_IMPL(__imp__sub_82371014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371018"))) PPC_WEAK_FUNC(sub_82371018);
PPC_FUNC_IMPL(__imp__sub_82371018) {
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
	// bl 0x82370f20
	ctx.lr = 0x82371038;
	sub_82370F20(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371048
	if (ctx.cr0.eq) goto loc_82371048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82371048;
	sub_8236A3F0(ctx, base);
loc_82371048:
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

__attribute__((alias("__imp__sub_82371064"))) PPC_WEAK_FUNC(sub_82371064);
PPC_FUNC_IMPL(__imp__sub_82371064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371068"))) PPC_WEAK_FUNC(sub_82371068);
PPC_FUNC_IMPL(__imp__sub_82371068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-16248(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16248);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82371078;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82371290
	if (ctx.cr6.eq) goto loc_82371290;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r28,r3,24
	ctx.r28.s64 = ctx.r3.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823710C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237126c
	if (ctx.cr0.eq) goto loc_8237126C;
	// addi r27,r29,32
	ctx.r27.s64 = ctx.r29.s64 + 32;
	// bl 0x82360ef0
	ctx.lr = 0x823710D8;
	sub_82360EF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x8236e720
	ctx.lr = 0x823710E4;
	sub_8236E720(ctx, base);
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8236a338
	ctx.lr = 0x823710F0;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82371110
	if (ctx.cr0.eq) goto loc_82371110;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b188
	ctx.lr = 0x82371108;
	sub_8236B188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82371114
	goto loc_82371114;
loc_82371110:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82371114:
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82371144
	if (ctx.cr6.eq) goto loc_82371144;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82371124:
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
	// bne 0x82371124
	if (!ctx.cr0.eq) goto loc_82371124;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82371144:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x82371158;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x82371168;
	sub_8236B048(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x82371174;
	sub_8236B4A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x82371184;
	sub_8236B048(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0740
	ctx.lr = 0x82371190;
	sub_821C0740(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d8a0
	ctx.lr = 0x823711A0;
	sub_8236D8A0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823711C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82371208
	if (!ctx.cr0.lt) goto loc_82371208;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r9,r10,-16372
	ctx.r9.s64 = ctx.r10.s64 + -16372;
	// addi r7,r11,-16404
	ctx.r7.s64 = ctx.r11.s64 + -16404;
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,57
	ctx.r8.s64 = 57;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82371204;
	sub_82372320(ctx, base);
	// b 0x82371258
	goto loc_82371258;
loc_82371208:
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x8236e690
	ctx.lr = 0x82371210;
	sub_8236E690(ctx, base);
	// stfd f31,72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f31.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-16404
	ctx.r7.s64 = ctx.r8.s64 + -16404;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r9,r11,-16456
	ctx.r9.s64 = ctx.r11.s64 + -16456;
	// addi r6,r6,-16316
	ctx.r6.s64 = ctx.r6.s64 + -16316;
	// stw r23,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r23.u32);
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82371258;
	sub_82372320(ctx, base);
loc_82371258:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x82371260;
	sub_8236B838(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82371268;
	sub_821C0630(ctx, base);
	// b 0x823712c4
	goto loc_823712C4;
loc_8237126C:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r9,r11,-16512
	ctx.r9.s64 = ctx.r11.s64 + -16512;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,69
	ctx.r8.s64 = 69;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823712b0
	goto loc_823712B0;
loc_82371290:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r9,r11,-16576
	ctx.r9.s64 = ctx.r11.s64 + -16576;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,74
	ctx.r8.s64 = 74;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823712B0:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r7,r10,-16404
	ctx.r7.s64 = ctx.r10.s64 + -16404;
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// bl 0x82372320
	ctx.lr = 0x823712C4;
	sub_82372320(ctx, base);
loc_823712C4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371070"))) PPC_WEAK_FUNC(sub_82371070);
PPC_FUNC_IMPL(__imp__sub_82371070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82371078;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82371290
	if (ctx.cr6.eq) goto loc_82371290;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r28,r3,24
	ctx.r28.s64 = ctx.r3.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823710C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237126c
	if (ctx.cr0.eq) goto loc_8237126C;
	// addi r27,r29,32
	ctx.r27.s64 = ctx.r29.s64 + 32;
	// bl 0x82360ef0
	ctx.lr = 0x823710D8;
	sub_82360EF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x8236e720
	ctx.lr = 0x823710E4;
	sub_8236E720(ctx, base);
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8236a338
	ctx.lr = 0x823710F0;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82371110
	if (ctx.cr0.eq) goto loc_82371110;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236b188
	ctx.lr = 0x82371108;
	sub_8236B188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82371114
	goto loc_82371114;
loc_82371110:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82371114:
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82371144
	if (ctx.cr6.eq) goto loc_82371144;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82371124:
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
	// bne 0x82371124
	if (!ctx.cr0.eq) goto loc_82371124;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82371144:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x82371158;
	sub_8236B4A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x82371168;
	sub_8236B048(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x82371174;
	sub_8236B4A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x82371184;
	sub_8236B048(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0740
	ctx.lr = 0x82371190;
	sub_821C0740(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d8a0
	ctx.lr = 0x823711A0;
	sub_8236D8A0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823711C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82371208
	if (!ctx.cr0.lt) goto loc_82371208;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r9,r10,-16372
	ctx.r9.s64 = ctx.r10.s64 + -16372;
	// addi r7,r11,-16404
	ctx.r7.s64 = ctx.r11.s64 + -16404;
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,57
	ctx.r8.s64 = 57;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82371204;
	sub_82372320(ctx, base);
	// b 0x82371258
	goto loc_82371258;
loc_82371208:
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x8236e690
	ctx.lr = 0x82371210;
	sub_8236E690(ctx, base);
	// stfd f31,72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f31.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-16404
	ctx.r7.s64 = ctx.r8.s64 + -16404;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r9,r11,-16456
	ctx.r9.s64 = ctx.r11.s64 + -16456;
	// addi r6,r6,-16316
	ctx.r6.s64 = ctx.r6.s64 + -16316;
	// stw r23,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r23.u32);
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82371258;
	sub_82372320(ctx, base);
loc_82371258:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x82371260;
	sub_8236B838(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82371268;
	sub_821C0630(ctx, base);
	// b 0x823712c4
	goto loc_823712C4;
loc_8237126C:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r9,r11,-16512
	ctx.r9.s64 = ctx.r11.s64 + -16512;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,69
	ctx.r8.s64 = 69;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823712b0
	goto loc_823712B0;
loc_82371290:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r9,r11,-16576
	ctx.r9.s64 = ctx.r11.s64 + -16576;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,74
	ctx.r8.s64 = 74;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823712B0:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r7,r10,-16404
	ctx.r7.s64 = ctx.r10.s64 + -16404;
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// bl 0x82372320
	ctx.lr = 0x823712C4;
	sub_82372320(ctx, base);
loc_823712C4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823712D4"))) PPC_WEAK_FUNC(sub_823712D4);
PPC_FUNC_IMPL(__imp__sub_823712D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350110
	ctx.lr = 0x823712EC;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823712FC"))) PPC_WEAK_FUNC(sub_823712FC);
PPC_FUNC_IMPL(__imp__sub_823712FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x82371314;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371324"))) PPC_WEAK_FUNC(sub_82371324);
PPC_FUNC_IMPL(__imp__sub_82371324) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821cc648
	ctx.lr = 0x8237133C;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237134C"))) PPC_WEAK_FUNC(sub_8237134C);
PPC_FUNC_IMPL(__imp__sub_8237134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371350"))) PPC_WEAK_FUNC(sub_82371350);
PPC_FUNC_IMPL(__imp__sub_82371350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-15848(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15848);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82371360;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-1776
	ctx.r31.s64 = ctx.r1.s64 + -1776;
	// stwu r1,-1776(r1)
	ea = -1776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8237165c
	if (!ctx.cr6.eq) goto loc_8237165C;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d820
	ctx.lr = 0x82371380;
	sub_8236D820(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r24,r25,24
	ctx.r24.s64 = ctx.r25.s64 + 24;
	// li r6,1500
	ctx.r6.s64 = 1500;
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823713A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// ble cr6,0x823715e4
	if (!ctx.cr6.gt) goto loc_823715E4;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b290
	ctx.lr = 0x823713C4;
	sub_8236B290(ctx, base);
	// stb r23,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r23.u8);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821c07f0
	ctx.lr = 0x823713D4;
	sub_821C07F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371584
	if (ctx.cr0.eq) goto loc_82371584;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x82371584
	if (!ctx.cr6.eq) goto loc_82371584;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d9e8
	ctx.lr = 0x823713F8;
	sub_8236D9E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r29,r11,-15904
	ctx.r29.s64 = ctx.r11.s64 + -15904;
	// addi r28,r10,-16316
	ctx.r28.s64 = ctx.r10.s64 + -16316;
	// addi r27,r9,-16420
	ctx.r27.s64 = ctx.r9.s64 + -16420;
	// addi r26,r8,29112
	ctx.r26.s64 = ctx.r8.s64 + 29112;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r9,r11,-15928
	ctx.r9.s64 = ctx.r11.s64 + -15928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// li r8,101
	ctx.r8.s64 = 101;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82371440;
	sub_82372320(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a7a8
	ctx.lr = 0x8237144C;
	sub_8236A7A8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a490
	ctx.lr = 0x8237145C;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371560
	if (ctx.cr0.eq) goto loc_82371560;
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82371470:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82371490
	if (!ctx.cr0.eq) goto loc_82371490;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82371470
	if (!ctx.cr6.eq) goto loc_82371470;
loc_82371490:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82371560
	if (!ctx.cr0.eq) goto loc_82371560;
	// bl 0x821c3150
	ctx.lr = 0x8237149C;
	sub_821C3150(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x823714A0;
	sub_82371718(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq 0x823714d0
	if (ctx.cr0.eq) goto loc_823714D0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823714B0:
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
	// bne 0x823714b0
	if (!ctx.cr0.eq) goto loc_823714B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823714D0:
	// bl 0x820cdf68
	ctx.lr = 0x823714D4;
	sub_820CDF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236fcd8
	ctx.lr = 0x823714E0;
	sub_8236FCD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823714FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r9,r11,-15976
	ctx.r9.s64 = ctx.r11.s64 + -15976;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,111
	ctx.r8.s64 = 111;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82371520;
	sub_82372320(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82371528:
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
	// bne 0x82371528
	if (!ctx.cr0.eq) goto loc_82371528;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82370d98
	ctx.lr = 0x82371554;
	sub_82370D98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x8237155C;
	sub_821C0630(ctx, base);
	// b 0x823715dc
	goto loc_823715DC;
loc_82371560:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r9,r11,-16020
	ctx.r9.s64 = ctx.r11.s64 + -16020;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,116
	ctx.r8.s64 = 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823715d8
	goto loc_823715D8;
loc_82371584:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r10,-15904
	ctx.r7.s64 = ctx.r10.s64 + -15904;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// beq cr6,0x823715c0
	if (ctx.cr6.eq) goto loc_823715C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r9,r11,-16064
	ctx.r9.s64 = ctx.r11.s64 + -16064;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,121
	ctx.r8.s64 = 121;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823715d8
	goto loc_823715D8;
loc_823715C0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r11,-16092
	ctx.r9.s64 = ctx.r11.s64 + -16092;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,125
	ctx.r8.s64 = 125;
	// li r3,2
	ctx.r3.s64 = 2;
loc_823715D8:
	// bl 0x82372320
	ctx.lr = 0x823715DC;
	sub_82372320(ctx, base);
loc_823715DC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a8c0
	ctx.lr = 0x823715E4;
	sub_8236A8C0(ctx, base);
loc_823715E4:
	// addi r3,r25,16
	ctx.r3.s64 = ctx.r25.s64 + 16;
	// bl 0x8236e6c0
	ctx.lr = 0x823715EC;
	sub_8236E6C0(ctx, base);
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82371650
	if (!ctx.cr6.gt) goto loc_82371650;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371638
	if (ctx.cr6.eq) goto loc_82371638;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8237160C:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82371624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237160c
	if (ctx.cr6.lt) goto loc_8237160C;
loc_82371638:
	// stw r23,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r23.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82371650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82371650:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x82371658;
	sub_8236B838(ctx, base);
	// b 0x82371690
	goto loc_82371690;
loc_8237165C:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r9,r11,-16160
	ctx.r9.s64 = ctx.r11.s64 + -16160;
	// addi r7,r10,-15904
	ctx.r7.s64 = ctx.r10.s64 + -15904;
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,141
	ctx.r8.s64 = 141;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82371690;
	sub_82372320(ctx, base);
loc_82371690:
	// addi r1,r31,1776
	ctx.r1.s64 = ctx.r31.s64 + 1776;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371358"))) PPC_WEAK_FUNC(sub_82371358);
PPC_FUNC_IMPL(__imp__sub_82371358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82371360;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-1776
	ctx.r31.s64 = ctx.r1.s64 + -1776;
	// stwu r1,-1776(r1)
	ea = -1776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8237165c
	if (!ctx.cr6.eq) goto loc_8237165C;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d820
	ctx.lr = 0x82371380;
	sub_8236D820(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r24,r25,24
	ctx.r24.s64 = ctx.r25.s64 + 24;
	// li r6,1500
	ctx.r6.s64 = 1500;
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823713A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// ble cr6,0x823715e4
	if (!ctx.cr6.gt) goto loc_823715E4;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236b290
	ctx.lr = 0x823713C4;
	sub_8236B290(ctx, base);
	// stb r23,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r23.u8);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821c07f0
	ctx.lr = 0x823713D4;
	sub_821C07F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371584
	if (ctx.cr0.eq) goto loc_82371584;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x82371584
	if (!ctx.cr6.eq) goto loc_82371584;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d9e8
	ctx.lr = 0x823713F8;
	sub_8236D9E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r29,r11,-15904
	ctx.r29.s64 = ctx.r11.s64 + -15904;
	// addi r28,r10,-16316
	ctx.r28.s64 = ctx.r10.s64 + -16316;
	// addi r27,r9,-16420
	ctx.r27.s64 = ctx.r9.s64 + -16420;
	// addi r26,r8,29112
	ctx.r26.s64 = ctx.r8.s64 + 29112;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r9,r11,-15928
	ctx.r9.s64 = ctx.r11.s64 + -15928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// li r8,101
	ctx.r8.s64 = 101;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82371440;
	sub_82372320(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a7a8
	ctx.lr = 0x8237144C;
	sub_8236A7A8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a490
	ctx.lr = 0x8237145C;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371560
	if (ctx.cr0.eq) goto loc_82371560;
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82371470:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82371490
	if (!ctx.cr0.eq) goto loc_82371490;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82371470
	if (!ctx.cr6.eq) goto loc_82371470;
loc_82371490:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82371560
	if (!ctx.cr0.eq) goto loc_82371560;
	// bl 0x821c3150
	ctx.lr = 0x8237149C;
	sub_821C3150(ctx, base);
	// bl 0x82371718
	ctx.lr = 0x823714A0;
	sub_82371718(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq 0x823714d0
	if (ctx.cr0.eq) goto loc_823714D0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823714B0:
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
	// bne 0x823714b0
	if (!ctx.cr0.eq) goto loc_823714B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823714D0:
	// bl 0x820cdf68
	ctx.lr = 0x823714D4;
	sub_820CDF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236fcd8
	ctx.lr = 0x823714E0;
	sub_8236FCD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823714FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r9,r11,-15976
	ctx.r9.s64 = ctx.r11.s64 + -15976;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,111
	ctx.r8.s64 = 111;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82371520;
	sub_82372320(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82371528:
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
	// bne 0x82371528
	if (!ctx.cr0.eq) goto loc_82371528;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82370d98
	ctx.lr = 0x82371554;
	sub_82370D98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x8237155C;
	sub_821C0630(ctx, base);
	// b 0x823715dc
	goto loc_823715DC;
loc_82371560:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r9,r11,-16020
	ctx.r9.s64 = ctx.r11.s64 + -16020;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,116
	ctx.r8.s64 = 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823715d8
	goto loc_823715D8;
loc_82371584:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r10,-15904
	ctx.r7.s64 = ctx.r10.s64 + -15904;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// beq cr6,0x823715c0
	if (ctx.cr6.eq) goto loc_823715C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r9,r11,-16064
	ctx.r9.s64 = ctx.r11.s64 + -16064;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,121
	ctx.r8.s64 = 121;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823715d8
	goto loc_823715D8;
loc_823715C0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r11,-16092
	ctx.r9.s64 = ctx.r11.s64 + -16092;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,125
	ctx.r8.s64 = 125;
	// li r3,2
	ctx.r3.s64 = 2;
loc_823715D8:
	// bl 0x82372320
	ctx.lr = 0x823715DC;
	sub_82372320(ctx, base);
loc_823715DC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a8c0
	ctx.lr = 0x823715E4;
	sub_8236A8C0(ctx, base);
loc_823715E4:
	// addi r3,r25,16
	ctx.r3.s64 = ctx.r25.s64 + 16;
	// bl 0x8236e6c0
	ctx.lr = 0x823715EC;
	sub_8236E6C0(ctx, base);
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82371650
	if (!ctx.cr6.gt) goto loc_82371650;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371638
	if (ctx.cr6.eq) goto loc_82371638;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8237160C:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82371624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237160c
	if (ctx.cr6.lt) goto loc_8237160C;
loc_82371638:
	// stw r23,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r23.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82371650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82371650:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x82371658;
	sub_8236B838(ctx, base);
	// b 0x82371690
	goto loc_82371690;
loc_8237165C:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-16316
	ctx.r6.s64 = ctx.r8.s64 + -16316;
	// addi r9,r11,-16160
	ctx.r9.s64 = ctx.r11.s64 + -16160;
	// addi r7,r10,-15904
	ctx.r7.s64 = ctx.r10.s64 + -15904;
	// addi r5,r5,-16420
	ctx.r5.s64 = ctx.r5.s64 + -16420;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,141
	ctx.r8.s64 = 141;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82371690;
	sub_82372320(ctx, base);
loc_82371690:
	// addi r1,r31,1776
	ctx.r1.s64 = ctx.r31.s64 + 1776;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371698"))) PPC_WEAK_FUNC(sub_82371698);
PPC_FUNC_IMPL(__imp__sub_82371698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1776
	ctx.r31.s64 = ctx.r12.s64 + -1776;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821cc648
	ctx.lr = 0x823716B0;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823716C0"))) PPC_WEAK_FUNC(sub_823716C0);
PPC_FUNC_IMPL(__imp__sub_823716C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1776
	ctx.r31.s64 = ctx.r12.s64 + -1776;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236a8c0
	ctx.lr = 0x823716D8;
	sub_8236A8C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823716E8"))) PPC_WEAK_FUNC(sub_823716E8);
PPC_FUNC_IMPL(__imp__sub_823716E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1776
	ctx.r31.s64 = ctx.r12.s64 + -1776;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82371700;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371710"))) PPC_WEAK_FUNC(sub_82371710);
PPC_FUNC_IMPL(__imp__sub_82371710) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x82370c98
	sub_82370C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371718"))) PPC_WEAK_FUNC(sub_82371718);
PPC_FUNC_IMPL(__imp__sub_82371718) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8237172C"))) PPC_WEAK_FUNC(sub_8237172C);
PPC_FUNC_IMPL(__imp__sub_8237172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371730"))) PPC_WEAK_FUNC(sub_82371730);
PPC_FUNC_IMPL(__imp__sub_82371730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371770
	if (ctx.cr6.eq) goto loc_82371770;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-15560
	ctx.r6.s64 = ctx.r8.s64 + -15560;
	// addi r9,r11,-15672
	ctx.r9.s64 = ctx.r11.s64 + -15672;
	// addi r7,r10,-15704
	ctx.r7.s64 = ctx.r10.s64 + -15704;
	// addi r5,r5,-15720
	ctx.r5.s64 = ctx.r5.s64 + -15720;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,29
	ctx.r8.s64 = 29;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82372320
	sub_82372320(ctx, base);
	return;
loc_82371770:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371778"))) PPC_WEAK_FUNC(sub_82371778);
PPC_FUNC_IMPL(__imp__sub_82371778) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82371798"))) PPC_WEAK_FUNC(sub_82371798);
PPC_FUNC_IMPL(__imp__sub_82371798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237179C"))) PPC_WEAK_FUNC(sub_8237179C);
PPC_FUNC_IMPL(__imp__sub_8237179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823717A0"))) PPC_WEAK_FUNC(sub_823717A0);
PPC_FUNC_IMPL(__imp__sub_823717A0) {
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
	// cmplwi cr6,r11,666
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 666, ctx.xer);
	// bne cr6,0x823717f4
	if (!ctx.cr6.eq) goto loc_823717F4;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-15432
	ctx.r6.s64 = ctx.r8.s64 + -15432;
	// addi r9,r11,-15476
	ctx.r9.s64 = ctx.r11.s64 + -15476;
	// addi r7,r10,-15500
	ctx.r7.s64 = ctx.r10.s64 + -15500;
	// addi r5,r5,-15520
	ctx.r5.s64 = ctx.r5.s64 + -15520;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,41
	ctx.r8.s64 = 41;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823717F4;
	sub_82372320(ctx, base);
loc_823717F4:
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
}

__attribute__((alias("__imp__sub_8237180C"))) PPC_WEAK_FUNC(sub_8237180C);
PPC_FUNC_IMPL(__imp__sub_8237180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371810"))) PPC_WEAK_FUNC(sub_82371810);
PPC_FUNC_IMPL(__imp__sub_82371810) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371818"))) PPC_WEAK_FUNC(sub_82371818);
PPC_FUNC_IMPL(__imp__sub_82371818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8233e4e0
	sub_8233E4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371824"))) PPC_WEAK_FUNC(sub_82371824);
PPC_FUNC_IMPL(__imp__sub_82371824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371828"))) PPC_WEAK_FUNC(sub_82371828);
PPC_FUNC_IMPL(__imp__sub_82371828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x8233e4e0
	sub_8233E4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371834"))) PPC_WEAK_FUNC(sub_82371834);
PPC_FUNC_IMPL(__imp__sub_82371834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371838"))) PPC_WEAK_FUNC(sub_82371838);
PPC_FUNC_IMPL(__imp__sub_82371838) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-15400
	ctx.r10.s64 = ctx.r10.s64 + -15400;
	// li r9,666
	ctx.r9.s64 = 666;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237185C"))) PPC_WEAK_FUNC(sub_8237185C);
PPC_FUNC_IMPL(__imp__sub_8237185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371860"))) PPC_WEAK_FUNC(sub_82371860);
PPC_FUNC_IMPL(__imp__sub_82371860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-15376(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15376);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15400
	ctx.r11.s64 = ctx.r11.s64 + -15400;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x821c0630
	ctx.lr = 0x8237189C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236db30
	ctx.lr = 0x823718A4;
	sub_8236DB30(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82371868"))) PPC_WEAK_FUNC(sub_82371868);
PPC_FUNC_IMPL(__imp__sub_82371868) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15400
	ctx.r11.s64 = ctx.r11.s64 + -15400;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x821c0630
	ctx.lr = 0x8237189C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236db30
	ctx.lr = 0x823718A4;
	sub_8236DB30(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_823718BC"))) PPC_WEAK_FUNC(sub_823718BC);
PPC_FUNC_IMPL(__imp__sub_823718BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8236db30
	ctx.lr = 0x823718D4;
	sub_8236DB30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823718E4"))) PPC_WEAK_FUNC(sub_823718E4);
PPC_FUNC_IMPL(__imp__sub_823718E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823718E8"))) PPC_WEAK_FUNC(sub_823718E8);
PPC_FUNC_IMPL(__imp__sub_823718E8) {
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
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371944
	if (!ctx.cr6.eq) goto loc_82371944;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-15432
	ctx.r6.s64 = ctx.r8.s64 + -15432;
	// addi r9,r11,-15476
	ctx.r9.s64 = ctx.r11.s64 + -15476;
	// addi r7,r10,-15320
	ctx.r7.s64 = ctx.r10.s64 + -15320;
	// addi r5,r5,-15520
	ctx.r5.s64 = ctx.r5.s64 + -15520;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,51
	ctx.r8.s64 = 51;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82371944;
	sub_82372320(ctx, base);
loc_82371944:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82371978
	if (ctx.cr6.eq) goto loc_82371978;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82371958:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82371958
	if (!ctx.cr0.eq) goto loc_82371958;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82371978:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82371994"))) PPC_WEAK_FUNC(sub_82371994);
PPC_FUNC_IMPL(__imp__sub_82371994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371998"))) PPC_WEAK_FUNC(sub_82371998);
PPC_FUNC_IMPL(__imp__sub_82371998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-15288(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15288);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x823689c8
	ctx.lr = 0x823719C8;
	sub_823689C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x823719D0;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_823719A0"))) PPC_WEAK_FUNC(sub_823719A0);
PPC_FUNC_IMPL(__imp__sub_823719A0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x823689c8
	ctx.lr = 0x823719C8;
	sub_823689C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x823719D0;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_823719E8"))) PPC_WEAK_FUNC(sub_823719E8);
PPC_FUNC_IMPL(__imp__sub_823719E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x821c0630
	ctx.lr = 0x82371A00;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371A10"))) PPC_WEAK_FUNC(sub_82371A10);
PPC_FUNC_IMPL(__imp__sub_82371A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82371A18;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-15520
	ctx.r29.s64 = ctx.r11.s64 + -15520;
	// addi r28,r10,-15432
	ctx.r28.s64 = ctx.r10.s64 + -15432;
	// addi r27,r9,-15188
	ctx.r27.s64 = ctx.r9.s64 + -15188;
	// cmplwi cr6,r8,666
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 666, ctx.xer);
	// bne cr6,0x82371a70
	if (!ctx.cr6.eq) goto loc_82371A70;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-15476
	ctx.r9.s64 = ctx.r11.s64 + -15476;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// li r8,90
	ctx.r8.s64 = 90;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82371A70;
	sub_82372320(ctx, base);
loc_82371A70:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371aa8
	if (!ctx.cr6.eq) goto loc_82371AA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-15232
	ctx.r9.s64 = ctx.r11.s64 + -15232;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,95
	ctx.r8.s64 = 95;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82371AA4;
	sub_82372320(ctx, base);
	// b 0x82371b08
	goto loc_82371B08;
loc_82371AA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821c0740
	ctx.lr = 0x82371AB4;
	sub_821C0740(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x82371AC0;
	sub_8236B4A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x82371AD0;
	sub_8236B048(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b4a0
	ctx.lr = 0x82371ADC;
	sub_8236B4A0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x82371AEC;
	sub_8236B048(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8236c048
	ctx.lr = 0x82371AF8;
	sub_8236C048(ctx, base);
	// li r5,336
	ctx.r5.s64 = 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x82371B08;
	sub_8236B048(ctx, base);
loc_82371B08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371B10"))) PPC_WEAK_FUNC(sub_82371B10);
PPC_FUNC_IMPL(__imp__sub_82371B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-15088(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15088);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82371B20;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821c0958
	ctx.lr = 0x82371B50;
	sub_821C0958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371b8c
	if (ctx.cr0.eq) goto loc_82371B8C;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x82371B70;
	sub_8236A7A8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a490
	ctx.lr = 0x82371B80;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82371b90
	if (!ctx.cr0.eq) goto loc_82371B90;
loc_82371B8C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82371B90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371bc0
	if (ctx.cr0.eq) goto loc_82371BC0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x82371BA4;
	sub_8236A7A8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a490
	ctx.lr = 0x82371BB4;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82371bc4
	if (!ctx.cr0.eq) goto loc_82371BC4;
loc_82371BC0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82371BC4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371be8
	if (ctx.cr0.eq) goto loc_82371BE8;
	// li r5,336
	ctx.r5.s64 = 336;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a490
	ctx.lr = 0x82371BDC;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82371bec
	if (!ctx.cr0.eq) goto loc_82371BEC;
loc_82371BE8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82371BEC:
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82371c74
	if (ctx.cr0.eq) goto loc_82371C74;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236a338
	ctx.lr = 0x82371BFC;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82371c14
	if (ctx.cr0.eq) goto loc_82371C14;
	// bl 0x8236be28
	ctx.lr = 0x82371C0C;
	sub_8236BE28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82371c18
	goto loc_82371C18;
loc_82371C14:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82371C18:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82350190
	ctx.lr = 0x82371C20;
	sub_82350190(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82371c54
	if (ctx.cr6.eq) goto loc_82371C54;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82371C34:
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
	// bne 0x82371c34
	if (!ctx.cr0.eq) goto loc_82371C34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82371C54:
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x8236c178
	ctx.lr = 0x82371C64;
	sub_8236C178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_82371C74:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82371cb4
	if (!ctx.cr0.eq) goto loc_82371CB4;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-15432
	ctx.r6.s64 = ctx.r8.s64 + -15432;
	// addi r9,r11,-15140
	ctx.r9.s64 = ctx.r11.s64 + -15140;
	// addi r7,r10,-15164
	ctx.r7.s64 = ctx.r10.s64 + -15164;
	// addi r5,r5,-15520
	ctx.r5.s64 = ctx.r5.s64 + -15520;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,137
	ctx.r8.s64 = 137;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82371CB0;
	sub_82372320(ctx, base);
	// b 0x82371ce8
	goto loc_82371CE8;
loc_82371CB4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82371CCC;
	sub_8233E4E0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// bl 0x8233e4e0
	ctx.lr = 0x82371CDC;
	sub_8233E4E0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r27,36
	ctx.r3.s64 = ctx.r27.s64 + 36;
	// bl 0x823689c8
	ctx.lr = 0x82371CE8;
	sub_823689C8(ctx, base);
loc_82371CE8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82371CF0;
	sub_821C0630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x82371CF8;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371B18"))) PPC_WEAK_FUNC(sub_82371B18);
PPC_FUNC_IMPL(__imp__sub_82371B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82371B20;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821c0958
	ctx.lr = 0x82371B50;
	sub_821C0958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371b8c
	if (ctx.cr0.eq) goto loc_82371B8C;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x82371B70;
	sub_8236A7A8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a490
	ctx.lr = 0x82371B80;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82371b90
	if (!ctx.cr0.eq) goto loc_82371B90;
loc_82371B8C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82371B90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371bc0
	if (ctx.cr0.eq) goto loc_82371BC0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a7a8
	ctx.lr = 0x82371BA4;
	sub_8236A7A8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a490
	ctx.lr = 0x82371BB4;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82371bc4
	if (!ctx.cr0.eq) goto loc_82371BC4;
loc_82371BC0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82371BC4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371be8
	if (ctx.cr0.eq) goto loc_82371BE8;
	// li r5,336
	ctx.r5.s64 = 336;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a490
	ctx.lr = 0x82371BDC;
	sub_8236A490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82371bec
	if (!ctx.cr0.eq) goto loc_82371BEC;
loc_82371BE8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82371BEC:
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82371c74
	if (ctx.cr0.eq) goto loc_82371C74;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236a338
	ctx.lr = 0x82371BFC;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82371c14
	if (ctx.cr0.eq) goto loc_82371C14;
	// bl 0x8236be28
	ctx.lr = 0x82371C0C;
	sub_8236BE28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82371c18
	goto loc_82371C18;
loc_82371C14:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82371C18:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82350190
	ctx.lr = 0x82371C20;
	sub_82350190(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82371c54
	if (ctx.cr6.eq) goto loc_82371C54;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82371C34:
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
	// bne 0x82371c34
	if (!ctx.cr0.eq) goto loc_82371C34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82371C54:
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// bl 0x8236c178
	ctx.lr = 0x82371C64;
	sub_8236C178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_82371C74:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82371cb4
	if (!ctx.cr0.eq) goto loc_82371CB4;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-15432
	ctx.r6.s64 = ctx.r8.s64 + -15432;
	// addi r9,r11,-15140
	ctx.r9.s64 = ctx.r11.s64 + -15140;
	// addi r7,r10,-15164
	ctx.r7.s64 = ctx.r10.s64 + -15164;
	// addi r5,r5,-15520
	ctx.r5.s64 = ctx.r5.s64 + -15520;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,137
	ctx.r8.s64 = 137;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82371CB0;
	sub_82372320(ctx, base);
	// b 0x82371ce8
	goto loc_82371CE8;
loc_82371CB4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82371CCC;
	sub_8233E4E0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// bl 0x8233e4e0
	ctx.lr = 0x82371CDC;
	sub_8233E4E0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r27,36
	ctx.r3.s64 = ctx.r27.s64 + 36;
	// bl 0x823689c8
	ctx.lr = 0x82371CE8;
	sub_823689C8(ctx, base);
loc_82371CE8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82371CF0;
	sub_821C0630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x82371CF8;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371D04"))) PPC_WEAK_FUNC(sub_82371D04);
PPC_FUNC_IMPL(__imp__sub_82371D04) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x821c0630
	ctx.lr = 0x82371D1C;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371D2C"))) PPC_WEAK_FUNC(sub_82371D2C);
PPC_FUNC_IMPL(__imp__sub_82371D2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82371D44;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371D54"))) PPC_WEAK_FUNC(sub_82371D54);
PPC_FUNC_IMPL(__imp__sub_82371D54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82350110
	ctx.lr = 0x82371D6C;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371D7C"))) PPC_WEAK_FUNC(sub_82371D7C);
PPC_FUNC_IMPL(__imp__sub_82371D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371D80"))) PPC_WEAK_FUNC(sub_82371D80);
PPC_FUNC_IMPL(__imp__sub_82371D80) {
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
	// bl 0x82371868
	ctx.lr = 0x82371DA0;
	sub_82371868(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371db0
	if (ctx.cr0.eq) goto loc_82371DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82371DB0;
	sub_8236A3F0(ctx, base);
loc_82371DB0:
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

__attribute__((alias("__imp__sub_82371DCC"))) PPC_WEAK_FUNC(sub_82371DCC);
PPC_FUNC_IMPL(__imp__sub_82371DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371DD0"))) PPC_WEAK_FUNC(sub_82371DD0);
PPC_FUNC_IMPL(__imp__sub_82371DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-14976(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14976);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82371e08
	if (ctx.cr6.eq) goto loc_82371E08;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8236bab8
	ctx.lr = 0x82371E08;
	sub_8236BAB8(ctx, base);
loc_82371E08:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371DD8"))) PPC_WEAK_FUNC(sub_82371DD8);
PPC_FUNC_IMPL(__imp__sub_82371DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82371e08
	if (ctx.cr6.eq) goto loc_82371E08;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8236bab8
	ctx.lr = 0x82371E08;
	sub_8236BAB8(ctx, base);
loc_82371E08:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371E1C"))) PPC_WEAK_FUNC(sub_82371E1C);
PPC_FUNC_IMPL(__imp__sub_82371E1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8234f138
	ctx.lr = 0x82371E38;
	sub_8234F138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371E48"))) PPC_WEAK_FUNC(sub_82371E48);
PPC_FUNC_IMPL(__imp__sub_82371E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82371E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82371e6c
	if (ctx.cr6.gt) goto loc_82371E6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82371E6C:
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x82371e98
	if (ctx.cr0.eq) goto loc_82371E98;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x82371E80;
	sub_8236A338(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236f800
	ctx.lr = 0x82371E98;
	sub_8236F800(ctx, base);
loc_82371E98:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82371ebc
	if (ctx.cr6.eq) goto loc_82371EBC;
loc_82371EA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236bbb8
	ctx.lr = 0x82371EB0;
	sub_8236BBB8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82371ea8
	if (!ctx.cr0.eq) goto loc_82371EA8;
loc_82371EBC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x82371EC4;
	sub_8236A3F0(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371ED4"))) PPC_WEAK_FUNC(sub_82371ED4);
PPC_FUNC_IMPL(__imp__sub_82371ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371ED8"))) PPC_WEAK_FUNC(sub_82371ED8);
PPC_FUNC_IMPL(__imp__sub_82371ED8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82371f0c
	if (!ctx.cr6.eq) goto loc_82371F0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82371e48
	ctx.lr = 0x82371F0C;
	sub_82371E48(ctx, base);
loc_82371F0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82371dd8
	ctx.lr = 0x82371F28;
	sub_82371DD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82371F4C"))) PPC_WEAK_FUNC(sub_82371F4C);
PPC_FUNC_IMPL(__imp__sub_82371F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371F50"))) PPC_WEAK_FUNC(sub_82371F50);
PPC_FUNC_IMPL(__imp__sub_82371F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-14784(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14784);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82371F60;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-14856
	ctx.r4.s64 = ctx.r10.s64 + -14856;
	// bl 0x8236bb28
	ctx.lr = 0x82371FC4;
	sub_8236BB28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82371ed8
	ctx.lr = 0x82371FD0;
	sub_82371ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82371FD8;
	sub_8236BBB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-14880
	ctx.r4.s64 = ctx.r11.s64 + -14880;
	// bl 0x8236bb28
	ctx.lr = 0x82371FE8;
	sub_8236BB28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82371ed8
	ctx.lr = 0x82371FF4;
	sub_82371ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82371FFC;
	sub_8236BBB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-14904
	ctx.r4.s64 = ctx.r11.s64 + -14904;
	// bl 0x8236bb28
	ctx.lr = 0x8237200C;
	sub_8236BB28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82371ed8
	ctx.lr = 0x82372018;
	sub_82371ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82372020;
	sub_8236BBB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-14928
	ctx.r4.s64 = ctx.r11.s64 + -14928;
	// bl 0x8236bb28
	ctx.lr = 0x82372030;
	sub_8236BB28(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371ed8
	ctx.lr = 0x8237203C;
	sub_82371ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82372044;
	sub_8236BBB8(ctx, base);
	// li r11,3074
	ctx.r11.s64 = 3074;
	// sth r11,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82371F58"))) PPC_WEAK_FUNC(sub_82371F58);
PPC_FUNC_IMPL(__imp__sub_82371F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82371F60;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r10,-14856
	ctx.r4.s64 = ctx.r10.s64 + -14856;
	// bl 0x8236bb28
	ctx.lr = 0x82371FC4;
	sub_8236BB28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82371ed8
	ctx.lr = 0x82371FD0;
	sub_82371ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82371FD8;
	sub_8236BBB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-14880
	ctx.r4.s64 = ctx.r11.s64 + -14880;
	// bl 0x8236bb28
	ctx.lr = 0x82371FE8;
	sub_8236BB28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82371ed8
	ctx.lr = 0x82371FF4;
	sub_82371ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82371FFC;
	sub_8236BBB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-14904
	ctx.r4.s64 = ctx.r11.s64 + -14904;
	// bl 0x8236bb28
	ctx.lr = 0x8237200C;
	sub_8236BB28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82371ed8
	ctx.lr = 0x82372018;
	sub_82371ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82372020;
	sub_8236BBB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,-14928
	ctx.r4.s64 = ctx.r11.s64 + -14928;
	// bl 0x8236bb28
	ctx.lr = 0x82372030;
	sub_8236BB28(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82371ed8
	ctx.lr = 0x8237203C;
	sub_82371ED8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82372044;
	sub_8236BBB8(ctx, base);
	// li r11,3074
	ctx.r11.s64 = 3074;
	// sth r11,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372058"))) PPC_WEAK_FUNC(sub_82372058);
PPC_FUNC_IMPL(__imp__sub_82372058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821c5310
	ctx.lr = 0x82372074;
	sub_821C5310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372084"))) PPC_WEAK_FUNC(sub_82372084);
PPC_FUNC_IMPL(__imp__sub_82372084) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x821c53b0
	ctx.lr = 0x823720A0;
	sub_821C53B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823720B0"))) PPC_WEAK_FUNC(sub_823720B0);
PPC_FUNC_IMPL(__imp__sub_823720B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x823720C8;
	sub_8236BBB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823720D8"))) PPC_WEAK_FUNC(sub_823720D8);
PPC_FUNC_IMPL(__imp__sub_823720D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x823720F0;
	sub_8236BBB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372100"))) PPC_WEAK_FUNC(sub_82372100);
PPC_FUNC_IMPL(__imp__sub_82372100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82372118;
	sub_8236BBB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372128"))) PPC_WEAK_FUNC(sub_82372128);
PPC_FUNC_IMPL(__imp__sub_82372128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236bbb8
	ctx.lr = 0x82372140;
	sub_8236BBB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372150"))) PPC_WEAK_FUNC(sub_82372150);
PPC_FUNC_IMPL(__imp__sub_82372150) {
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
	// bl 0x82372b38
	ctx.lr = 0x82372168;
	sub_82372B38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-14664
	ctx.r11.s64 = ctx.r11.s64 + -14664;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82372184;
	sub_8233EAF0(ctx, base);
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

__attribute__((alias("__imp__sub_8237219C"))) PPC_WEAK_FUNC(sub_8237219C);
PPC_FUNC_IMPL(__imp__sub_8237219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823721A0"))) PPC_WEAK_FUNC(sub_823721A0);
PPC_FUNC_IMPL(__imp__sub_823721A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-14664
	ctx.r11.s64 = ctx.r11.s64 + -14664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82372bc0
	sub_82372BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823721B0"))) PPC_WEAK_FUNC(sub_823721B0);
PPC_FUNC_IMPL(__imp__sub_823721B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x823721B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r24,r3,16
	ctx.r24.s64 = ctx.r3.s64 + 16;
	// li r23,5
	ctx.r23.s64 = 5;
	// addi r22,r11,-14656
	ctx.r22.s64 = ctx.r11.s64 + -14656;
loc_823721E8:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82372234
	if (ctx.cr6.eq) goto loc_82372234;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372ca0
	ctx.lr = 0x82372200;
	sub_82372CA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82372234
	if (ctx.cr0.eq) goto loc_82372234;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82372234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82372234:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x823721e8
	if (!ctx.cr0.eq) goto loc_823721E8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372248"))) PPC_WEAK_FUNC(sub_82372248);
PPC_FUNC_IMPL(__imp__sub_82372248) {
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
	// addi r11,r11,-14664
	ctx.r11.s64 = ctx.r11.s64 + -14664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82372bc0
	ctx.lr = 0x82372274;
	sub_82372BC0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82372284
	if (ctx.cr0.eq) goto loc_82372284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dc6e0
	ctx.lr = 0x82372284;
	sub_820DC6E0(ctx, base);
loc_82372284:
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

__attribute__((alias("__imp__sub_823722A0"))) PPC_WEAK_FUNC(sub_823722A0);
PPC_FUNC_IMPL(__imp__sub_823722A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823722A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r31,r11,-25552
	ctx.r31.s64 = ctx.r11.s64 + -25552;
	// beq cr6,0x823722dc
	if (ctx.cr6.eq) goto loc_823722DC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x823722e4
	if (!ctx.cr6.eq) goto loc_823722E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r11,-14624
	ctx.r31.s64 = ctx.r11.s64 + -14624;
	// b 0x823722e4
	goto loc_823722E4;
loc_823722DC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r11,-14636
	ctx.r31.s64 = ctx.r11.s64 + -14636;
loc_823722E4:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e2c0
	ctx.lr = 0x823722F0;
	sub_8233E2C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x82372300
	if (ctx.cr0.eq) goto loc_82372300;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
loc_82372300:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r3,r11,-14652
	ctx.r3.s64 = ctx.r11.s64 + -14652;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82356a58
	ctx.lr = 0x82372318;
	sub_82356A58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372320"))) PPC_WEAK_FUNC(sub_82372320);
PPC_FUNC_IMPL(__imp__sub_82372320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x82372328;
	__savegprlr_21(ctx, base);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32183
	ctx.r25.s64 = -2109145088;
	// stw r9,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r9.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,23920(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23920);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237249c
	if (ctx.cr6.eq) goto loc_8237249C;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233eaf0
	ctx.lr = 0x82372370;
	sub_8233EAF0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,792
	ctx.r10.s64 = ctx.r1.s64 + 792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233cea0
	ctx.lr = 0x82372390;
	sub_8233CEA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82341db0
	ctx.lr = 0x823723AC;
	sub_82341DB0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// addi r31,r11,-25772
	ctx.r31.s64 = ctx.r11.s64 + -25772;
	// addi r30,r10,-14500
	ctx.r30.s64 = ctx.r10.s64 + -14500;
	// addi r29,r9,-14536
	ctx.r29.s64 = ctx.r9.s64 + -14536;
	// addi r28,r8,-14552
	ctx.r28.s64 = ctx.r8.s64 + -14552;
	// blt cr6,0x823723fc
	if (ctx.cr6.lt) goto loc_823723FC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r9,r11,-14572
	ctx.r9.s64 = ctx.r11.s64 + -14572;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,217
	ctx.r8.s64 = 217;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823723FC;
	sub_82372320(ctx, base);
loc_823723FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82372460
	if (ctx.cr6.eq) goto loc_82372460;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82372460
	if (ctx.cr6.eq) goto loc_82372460;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r5,r11,-14580
	ctx.r5.s64 = ctx.r11.s64 + -14580;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8236d970
	ctx.lr = 0x82372428;
	sub_8236D970(ctx, base);
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// blt cr6,0x8237245c
	if (ctx.cr6.lt) goto loc_8237245C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r9,r11,-14612
	ctx.r9.s64 = ctx.r11.s64 + -14612;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r8,231
	ctx.r8.s64 = 231;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8237245C;
	sub_82372320(ctx, base);
loc_8237245C:
	// addi r27,r1,368
	ctx.r27.s64 = ctx.r1.s64 + 368;
loc_82372460:
	// lwz r31,23920(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 23920);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8237249c
	if (ctx.cr0.eq) goto loc_8237249C;
loc_8237246C:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823721b0
	ctx.lr = 0x8237248C;
	sub_823721B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372bb8
	ctx.lr = 0x82372494;
	sub_82372BB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8237246c
	if (!ctx.cr0.eq) goto loc_8237246C;
loc_8237249C:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823724A4"))) PPC_WEAK_FUNC(sub_823724A4);
PPC_FUNC_IMPL(__imp__sub_823724A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823724A8"))) PPC_WEAK_FUNC(sub_823724A8);
PPC_FUNC_IMPL(__imp__sub_823724A8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82247340
	ctx.lr = 0x823724BC;
	sub_82247340(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823724D0"))) PPC_WEAK_FUNC(sub_823724D0);
PPC_FUNC_IMPL(__imp__sub_823724D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823724D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,23928
	ctx.r30.s64 = ctx.r11.s64 + 23928;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,23936(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23936);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8237250c
	if (!ctx.cr0.eq) goto loc_8237250C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237ac50
	ctx.lr = 0x82372504;
	sub_8237AC50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23936, ctx.r11.u8);
loc_8237250C:
	// subf r3,r29,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r29.s64;
	// bl 0x823413b0
	ctx.lr = 0x82372514;
	sub_823413B0(ctx, base);
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372530"))) PPC_WEAK_FUNC(sub_82372530);
PPC_FUNC_IMPL(__imp__sub_82372530) {
	PPC_FUNC_PROLOGUE();
	// b 0x82247328
	sub_82247328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372534"))) PPC_WEAK_FUNC(sub_82372534);
PPC_FUNC_IMPL(__imp__sub_82372534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372538"))) PPC_WEAK_FUNC(sub_82372538);
PPC_FUNC_IMPL(__imp__sub_82372538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372548"))) PPC_WEAK_FUNC(sub_82372548);
PPC_FUNC_IMPL(__imp__sub_82372548) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b16d0
	ctx.lr = 0x82372564;
	sub_822B16D0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8237257C"))) PPC_WEAK_FUNC(sub_8237257C);
PPC_FUNC_IMPL(__imp__sub_8237257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372580"))) PPC_WEAK_FUNC(sub_82372580);
PPC_FUNC_IMPL(__imp__sub_82372580) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822b1490
	ctx.lr = 0x823725A4;
	sub_822B1490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823725cc
	if (!ctx.cr0.eq) goto loc_823725CC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823725B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823725b0
	if (!ctx.cr6.eq) goto loc_823725B0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_823725CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_823725E8"))) PPC_WEAK_FUNC(sub_823725E8);
PPC_FUNC_IMPL(__imp__sub_823725E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b1400
	sub_822B1400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823725EC"))) PPC_WEAK_FUNC(sub_823725EC);
PPC_FUNC_IMPL(__imp__sub_823725EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823725F0"))) PPC_WEAK_FUNC(sub_823725F0);
PPC_FUNC_IMPL(__imp__sub_823725F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823725F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi. r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,17
	ctx.r5.s64 = 17;
	// bne 0x82372618
	if (!ctx.cr0.eq) goto loc_82372618;
	// li r5,254
	ctx.r5.s64 = 254;
loc_82372618:
	// bl 0x822b15b0
	ctx.lr = 0x8237261C;
	sub_822B15B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82372658
	if (ctx.cr6.eq) goto loc_82372658;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x822b15f0
	ctx.lr = 0x82372648;
	sub_822B15F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372658
	if (ctx.cr0.eq) goto loc_82372658;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8237268c
	goto loc_8237268C;
loc_82372658:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b15d8
	ctx.lr = 0x8237267C;
	sub_822B15D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372688
	if (ctx.cr0.eq) goto loc_82372688;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82372688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237268C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372694"))) PPC_WEAK_FUNC(sub_82372694);
PPC_FUNC_IMPL(__imp__sub_82372694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372698"))) PPC_WEAK_FUNC(sub_82372698);
PPC_FUNC_IMPL(__imp__sub_82372698) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823726cc
	if (!ctx.cr6.eq) goto loc_823726CC;
	// li r3,-10
	ctx.r3.s64 = -10;
	// b 0x8237273c
	goto loc_8237273C;
loc_823726CC:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// bl 0x822b1610
	ctx.lr = 0x823726F8;
	sub_822B1610(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82372738
	if (!ctx.cr6.eq) goto loc_82372738;
	// bl 0x822b16d8
	ctx.lr = 0x82372704;
	sub_822B16D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822b15c8
	ctx.lr = 0x82372710;
	sub_822B15C8(ctx, base);
	// cmpwi cr6,r31,10013
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10013, ctx.xer);
	// beq cr6,0x82372730
	if (ctx.cr6.eq) goto loc_82372730;
	// cmpwi cr6,r31,10047
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10047, ctx.xer);
	// ble cr6,0x82372728
	if (!ctx.cr6.gt) goto loc_82372728;
	// cmpwi cr6,r31,10049
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10049, ctx.xer);
	// ble cr6,0x82372730
	if (!ctx.cr6.gt) goto loc_82372730;
loc_82372728:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8237273c
	goto loc_8237273C;
loc_82372730:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8237273c
	goto loc_8237273C;
loc_82372738:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237273C:
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

__attribute__((alias("__imp__sub_82372754"))) PPC_WEAK_FUNC(sub_82372754);
PPC_FUNC_IMPL(__imp__sub_82372754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372758"))) PPC_WEAK_FUNC(sub_82372758);
PPC_FUNC_IMPL(__imp__sub_82372758) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8237278c
	if (!ctx.cr6.eq) goto loc_8237278C;
	// li r3,-10
	ctx.r3.s64 = -10;
	// b 0x823728c0
	goto loc_823728C0;
loc_8237278C:
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// bl 0x822b16b0
	ctx.lr = 0x823727BC;
	sub_822B16B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82372898
	if (!ctx.cr0.lt) goto loc_82372898;
	// bl 0x822b16d8
	ctx.lr = 0x823727C8;
	sub_822B16D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,10047
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10047, ctx.xer);
	// bgt cr6,0x82372818
	if (ctx.cr6.gt) goto loc_82372818;
	// beq cr6,0x82372890
	if (ctx.cr6.eq) goto loc_82372890;
	// cmpwi cr6,r3,10004
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10004, ctx.xer);
	// beq cr6,0x82372810
	if (ctx.cr6.eq) goto loc_82372810;
	// cmpwi cr6,r3,10022
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10022, ctx.xer);
	// beq cr6,0x82372890
	if (ctx.cr6.eq) goto loc_82372890;
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x82372808
	if (ctx.cr6.eq) goto loc_82372808;
	// cmpwi cr6,r3,10039
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10039, ctx.xer);
	// beq cr6,0x82372890
	if (ctx.cr6.eq) goto loc_82372890;
	// cmpwi cr6,r3,10040
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10040, ctx.xer);
	// bne cr6,0x82372888
	if (!ctx.cr6.eq) goto loc_82372888;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x823728c0
	goto loc_823728C0;
loc_82372808:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x823728c0
	goto loc_823728C0;
loc_82372810:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x823728c0
	goto loc_823728C0;
loc_82372818:
	// cmpwi cr6,r10,10049
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10049, ctx.xer);
	// beq cr6,0x82372890
	if (ctx.cr6.eq) goto loc_82372890;
	// ble cr6,0x82372888
	if (!ctx.cr6.gt) goto loc_82372888;
	// cmpwi cr6,r10,10051
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10051, ctx.xer);
	// ble cr6,0x8237284c
	if (!ctx.cr6.gt) goto loc_8237284C;
	// cmpwi cr6,r10,10052
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10052, ctx.xer);
	// ble cr6,0x82372888
	if (!ctx.cr6.gt) goto loc_82372888;
	// cmpwi cr6,r10,10054
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10054, ctx.xer);
	// ble cr6,0x8237284c
	if (!ctx.cr6.gt) goto loc_8237284C;
	// cmpwi cr6,r10,10060
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10060, ctx.xer);
	// beq cr6,0x8237284c
	if (ctx.cr6.eq) goto loc_8237284C;
	// cmpwi cr6,r10,10065
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10065, ctx.xer);
	// bne cr6,0x82372888
	if (!ctx.cr6.eq) goto loc_82372888;
loc_8237284C:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-14380
	ctx.r7.s64 = ctx.r8.s64 + -14380;
	// addi r9,r11,-14420
	ctx.r9.s64 = ctx.r11.s64 + -14420;
	// addi r6,r6,-14468
	ctx.r6.s64 = ctx.r6.s64 + -14468;
	// addi r5,r5,-14484
	ctx.r5.s64 = ctx.r5.s64 + -14484;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,187
	ctx.r8.s64 = 187;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82372880;
	sub_82372320(ctx, base);
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x823728c0
	goto loc_823728C0;
loc_82372888:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823728c0
	goto loc_823728C0;
loc_82372890:
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x823728c0
	goto loc_823728C0;
loc_82372898:
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// lis r7,-32183
	ctx.r7.s64 = -2109145088;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// ld r11,23960(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 23960);
	// ld r10,23944(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 23944);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r11,23960(r8)
	PPC_STORE_U64(ctx.r8.u32 + 23960, ctx.r11.u64);
	// std r10,23944(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23944, ctx.r10.u64);
loc_823728C0:
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

__attribute__((alias("__imp__sub_823728D8"))) PPC_WEAK_FUNC(sub_823728D8);
PPC_FUNC_IMPL(__imp__sub_823728D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8237290c
	if (!ctx.cr6.eq) goto loc_8237290C;
	// li r3,-10
	ctx.r3.s64 = -10;
	// b 0x82372a40
	goto loc_82372A40;
loc_8237290C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x822b1678
	ctx.lr = 0x82372934;
	sub_822B1678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82372a08
	if (!ctx.cr0.lt) goto loc_82372A08;
	// bl 0x822b16d8
	ctx.lr = 0x82372940;
	sub_822B16D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,10051
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10051, ctx.xer);
	// bgt cr6,0x82372994
	if (ctx.cr6.gt) goto loc_82372994;
	// cmpwi cr6,r3,10050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10050, ctx.xer);
	// bge cr6,0x823729b4
	if (!ctx.cr6.lt) goto loc_823729B4;
	// cmpwi cr6,r3,10004
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10004, ctx.xer);
	// beq cr6,0x8237298c
	if (ctx.cr6.eq) goto loc_8237298C;
	// cmpwi cr6,r3,10022
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10022, ctx.xer);
	// beq cr6,0x82372984
	if (ctx.cr6.eq) goto loc_82372984;
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x8237297c
	if (ctx.cr6.eq) goto loc_8237297C;
	// cmpwi cr6,r3,10040
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10040, ctx.xer);
	// bne cr6,0x82372a00
	if (!ctx.cr6.eq) goto loc_82372A00;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x82372a40
	goto loc_82372A40;
loc_8237297C:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x82372a40
	goto loc_82372A40;
loc_82372984:
	// li r3,-9
	ctx.r3.s64 = -9;
	// b 0x82372a40
	goto loc_82372A40;
loc_8237298C:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x82372a40
	goto loc_82372A40;
loc_82372994:
	// cmpwi cr6,r10,10053
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10053, ctx.xer);
	// blt cr6,0x82372a00
	if (ctx.cr6.lt) goto loc_82372A00;
	// cmpwi cr6,r10,10054
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10054, ctx.xer);
	// ble cr6,0x823729b4
	if (!ctx.cr6.gt) goto loc_823729B4;
	// cmpwi cr6,r10,10060
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10060, ctx.xer);
	// beq cr6,0x823729b4
	if (ctx.cr6.eq) goto loc_823729B4;
	// cmpwi cr6,r10,10065
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10065, ctx.xer);
	// bne cr6,0x82372a00
	if (!ctx.cr6.eq) goto loc_82372A00;
loc_823729B4:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-14312
	ctx.r7.s64 = ctx.r8.s64 + -14312;
	// addi r9,r11,-14352
	ctx.r9.s64 = ctx.r11.s64 + -14352;
	// addi r6,r6,-14468
	ctx.r6.s64 = ctx.r6.s64 + -14468;
	// addi r5,r5,-14484
	ctx.r5.s64 = ctx.r5.s64 + -14484;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,244
	ctx.r8.s64 = 244;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823729E8;
	sub_82372320(ctx, base);
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,-5
	ctx.r3.s64 = -5;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82372a40
	goto loc_82372A40;
loc_82372A00:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82372a40
	goto loc_82372A40;
loc_82372A08:
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lis r7,-32183
	ctx.r7.s64 = -2109145088;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ld r11,23952(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 23952);
	// ld r10,23968(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 23968);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r10,23968(r8)
	PPC_STORE_U64(ctx.r8.u32 + 23968, ctx.r10.u64);
	// std r11,23952(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23952, ctx.r11.u64);
loc_82372A40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82372A58"))) PPC_WEAK_FUNC(sub_82372A58);
PPC_FUNC_IMPL(__imp__sub_82372A58) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82372a94
	if (!ctx.cr0.eq) goto loc_82372A94;
	// bl 0x822b15c8
	ctx.lr = 0x82372A84;
	sub_822B15C8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82372A94:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82372AAC"))) PPC_WEAK_FUNC(sub_82372AAC);
PPC_FUNC_IMPL(__imp__sub_82372AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372AB0"))) PPC_WEAK_FUNC(sub_82372AB0);
PPC_FUNC_IMPL(__imp__sub_82372AB0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8237b5d0
	ctx.lr = 0x82372AD0;
	sub_8237B5D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822471d0
	ctx.lr = 0x82372AD8;
	sub_822471D0(ctx, base);
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

__attribute__((alias("__imp__sub_82372AF0"))) PPC_WEAK_FUNC(sub_82372AF0);
PPC_FUNC_IMPL(__imp__sub_82372AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82247250
	sub_82247250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372AFC"))) PPC_WEAK_FUNC(sub_82372AFC);
PPC_FUNC_IMPL(__imp__sub_82372AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372B00"))) PPC_WEAK_FUNC(sub_82372B00);
PPC_FUNC_IMPL(__imp__sub_82372B00) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8237b658
	ctx.lr = 0x82372B14;
	sub_8237B658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82372b20
	if (!ctx.cr0.eq) goto loc_82372B20;
	// bl 0x822471d0
	ctx.lr = 0x82372B20;
	sub_822471D0(ctx, base);
loc_82372B20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372B30"))) PPC_WEAK_FUNC(sub_82372B30);
PPC_FUNC_IMPL(__imp__sub_82372B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82246e18
	sub_82246E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372B38"))) PPC_WEAK_FUNC(sub_82372B38);
PPC_FUNC_IMPL(__imp__sub_82372B38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-14280
	ctx.r10.s64 = ctx.r10.s64 + -14280;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372B58"))) PPC_WEAK_FUNC(sub_82372B58);
PPC_FUNC_IMPL(__imp__sub_82372B58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82372b6c
	if (ctx.cr6.eq) goto loc_82372B6C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82372B6C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82372b80
	if (ctx.cr6.eq) goto loc_82372B80;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82372B80:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82372ba0
	if (ctx.cr6.eq) goto loc_82372BA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82372ba0
	if (!ctx.cr6.eq) goto loc_82372BA0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82372BA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372BB4"))) PPC_WEAK_FUNC(sub_82372BB4);
PPC_FUNC_IMPL(__imp__sub_82372BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372BB8"))) PPC_WEAK_FUNC(sub_82372BB8);
PPC_FUNC_IMPL(__imp__sub_82372BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372BC0"))) PPC_WEAK_FUNC(sub_82372BC0);
PPC_FUNC_IMPL(__imp__sub_82372BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-14280
	ctx.r11.s64 = ctx.r11.s64 + -14280;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82372b58
	sub_82372B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372BD0"))) PPC_WEAK_FUNC(sub_82372BD0);
PPC_FUNC_IMPL(__imp__sub_82372BD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14280
	ctx.r11.s64 = ctx.r11.s64 + -14280;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82372b58
	ctx.lr = 0x82372BF4;
	sub_82372B58(ctx, base);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82372c00
	if (ctx.cr0.eq) goto loc_82372C00;
	// bl 0x820dc6e0
	ctx.lr = 0x82372C00;
	sub_820DC6E0(ctx, base);
loc_82372C00:
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

__attribute__((alias("__imp__sub_82372C18"))) PPC_WEAK_FUNC(sub_82372C18);
PPC_FUNC_IMPL(__imp__sub_82372C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82372C20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82372c94
	if (ctx.cr6.eq) goto loc_82372C94;
	// bl 0x8237c598
	ctx.lr = 0x82372C48;
	sub_8237C598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237c4e0
	ctx.lr = 0x82372C5C;
	sub_8237C4E0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82372c70
	if (ctx.cr6.lt) goto loc_82372C70;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82372C70:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236a420
	ctx.lr = 0x82372C80;
	sub_8236A420(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82372c94
	if (ctx.cr6.eq) goto loc_82372C94;
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82372C94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372CA0"))) PPC_WEAK_FUNC(sub_82372CA0);
PPC_FUNC_IMPL(__imp__sub_82372CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82372CA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82372CBC:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82372CCC:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82372ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372CCC;
	// addi r7,r1,268
	ctx.r7.s64 = ctx.r1.s64 + 268;
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82372c18
	ctx.lr = 0x82372CEC;
	sub_82372C18(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// subfe r31,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bge cr6,0x82372d50
	if (!ctx.cr6.lt) goto loc_82372D50;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82372d50
	if (ctx.cr0.eq) goto loc_82372D50;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82372D14:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82372d14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372D14;
	// addi r7,r1,260
	ctx.r7.s64 = ctx.r1.s64 + 260;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82372c18
	ctx.lr = 0x82372D34;
	sub_82372C18(ctx, base);
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// bge cr6,0x82372d50
	if (!ctx.cr6.lt) goto loc_82372D50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82341820
	ctx.lr = 0x82372D48;
	sub_82341820(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82372D50:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82372d60
	if (ctx.cr0.eq) goto loc_82372D60;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82372cbc
	if (!ctx.cr0.eq) goto loc_82372CBC;
loc_82372D60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372D6C"))) PPC_WEAK_FUNC(sub_82372D6C);
PPC_FUNC_IMPL(__imp__sub_82372D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372D70"))) PPC_WEAK_FUNC(sub_82372D70);
PPC_FUNC_IMPL(__imp__sub_82372D70) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82372dcc
	if (!ctx.cr6.eq) goto loc_82372DCC;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-14204
	ctx.r6.s64 = ctx.r8.s64 + -14204;
	// addi r9,r11,-14236
	ctx.r9.s64 = ctx.r11.s64 + -14236;
	// addi r7,r10,-14260
	ctx.r7.s64 = ctx.r10.s64 + -14260;
	// addi r5,r5,-14276
	ctx.r5.s64 = ctx.r5.s64 + -14276;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82372DC8;
	sub_82372320(ctx, base);
	// b 0x82372dd8
	goto loc_82372DD8;
loc_82372DCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_82372DD8:
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

__attribute__((alias("__imp__sub_82372DF0"))) PPC_WEAK_FUNC(sub_82372DF0);
PPC_FUNC_IMPL(__imp__sub_82372DF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x82374950
	sub_82374950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372DF8"))) PPC_WEAK_FUNC(sub_82372DF8);
PPC_FUNC_IMPL(__imp__sub_82372DF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x82374d38
	sub_82374D38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372E00"))) PPC_WEAK_FUNC(sub_82372E00);
PPC_FUNC_IMPL(__imp__sub_82372E00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372E08"))) PPC_WEAK_FUNC(sub_82372E08);
PPC_FUNC_IMPL(__imp__sub_82372E08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372E10"))) PPC_WEAK_FUNC(sub_82372E10);
PPC_FUNC_IMPL(__imp__sub_82372E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-14032(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14032);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82372E20;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82372e80
	if (ctx.cr6.eq) goto loc_82372E80;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-14204
	ctx.r6.s64 = ctx.r8.s64 + -14204;
	// addi r9,r11,29056
	ctx.r9.s64 = ctx.r11.s64 + 29056;
	// addi r7,r10,-14068
	ctx.r7.s64 = ctx.r10.s64 + -14068;
	// addi r5,r5,-14276
	ctx.r5.s64 = ctx.r5.s64 + -14276;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,33
	ctx.r8.s64 = 33;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82372ee0
	goto loc_82372EE0;
loc_82372E80:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82372ea0
	if (!ctx.cr6.eq) goto loc_82372EA0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-14204
	ctx.r6.s64 = ctx.r8.s64 + -14204;
	// addi r9,r11,-14120
	ctx.r9.s64 = ctx.r11.s64 + -14120;
	// li r8,38
	ctx.r8.s64 = 38;
	// b 0x82372ec0
	goto loc_82372EC0;
loc_82372EA0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82372ee8
	if (!ctx.cr6.eq) goto loc_82372EE8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-14204
	ctx.r6.s64 = ctx.r8.s64 + -14204;
	// addi r9,r11,-14176
	ctx.r9.s64 = ctx.r11.s64 + -14176;
	// li r8,43
	ctx.r8.s64 = 43;
loc_82372EC0:
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// addi r5,r5,-14276
	ctx.r5.s64 = ctx.r5.s64 + -14276;
	// addi r7,r10,-14068
	ctx.r7.s64 = ctx.r10.s64 + -14068;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82372EE0:
	// bl 0x82372320
	ctx.lr = 0x82372EE4;
	sub_82372320(ctx, base);
	// b 0x82372f54
	goto loc_82372F54;
loc_82372EE8:
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823689c8
	ctx.lr = 0x82372EF8;
	sub_823689C8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82372f2c
	if (ctx.cr6.eq) goto loc_82372F2C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82372F0C:
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
	// bne 0x82372f0c
	if (!ctx.cr0.eq) goto loc_82372F0C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82372F2C:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x823741b0
	ctx.lr = 0x82372F38;
	sub_823741B0(ctx, base);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82372F54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x82372F5C;
	sub_821C0630(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372E18"))) PPC_WEAK_FUNC(sub_82372E18);
PPC_FUNC_IMPL(__imp__sub_82372E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82372E20;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82372e80
	if (ctx.cr6.eq) goto loc_82372E80;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-14204
	ctx.r6.s64 = ctx.r8.s64 + -14204;
	// addi r9,r11,29056
	ctx.r9.s64 = ctx.r11.s64 + 29056;
	// addi r7,r10,-14068
	ctx.r7.s64 = ctx.r10.s64 + -14068;
	// addi r5,r5,-14276
	ctx.r5.s64 = ctx.r5.s64 + -14276;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,33
	ctx.r8.s64 = 33;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82372ee0
	goto loc_82372EE0;
loc_82372E80:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82372ea0
	if (!ctx.cr6.eq) goto loc_82372EA0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-14204
	ctx.r6.s64 = ctx.r8.s64 + -14204;
	// addi r9,r11,-14120
	ctx.r9.s64 = ctx.r11.s64 + -14120;
	// li r8,38
	ctx.r8.s64 = 38;
	// b 0x82372ec0
	goto loc_82372EC0;
loc_82372EA0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82372ee8
	if (!ctx.cr6.eq) goto loc_82372EE8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-14204
	ctx.r6.s64 = ctx.r8.s64 + -14204;
	// addi r9,r11,-14176
	ctx.r9.s64 = ctx.r11.s64 + -14176;
	// li r8,43
	ctx.r8.s64 = 43;
loc_82372EC0:
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// addi r5,r5,-14276
	ctx.r5.s64 = ctx.r5.s64 + -14276;
	// addi r7,r10,-14068
	ctx.r7.s64 = ctx.r10.s64 + -14068;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82372EE0:
	// bl 0x82372320
	ctx.lr = 0x82372EE4;
	sub_82372320(ctx, base);
	// b 0x82372f54
	goto loc_82372F54;
loc_82372EE8:
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823689c8
	ctx.lr = 0x82372EF8;
	sub_823689C8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82372f2c
	if (ctx.cr6.eq) goto loc_82372F2C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82372F0C:
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
	// bne 0x82372f0c
	if (!ctx.cr0.eq) goto loc_82372F0C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82372F2C:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x823741b0
	ctx.lr = 0x82372F38;
	sub_823741B0(ctx, base);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82372F54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0630
	ctx.lr = 0x82372F5C;
	sub_821C0630(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372F68"))) PPC_WEAK_FUNC(sub_82372F68);
PPC_FUNC_IMPL(__imp__sub_82372F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x821c0630
	ctx.lr = 0x82372F80;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372F90"))) PPC_WEAK_FUNC(sub_82372F90);
PPC_FUNC_IMPL(__imp__sub_82372F90) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822b14b8
	ctx.lr = 0x82372FA8;
	sub_822B14B8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372FC0"))) PPC_WEAK_FUNC(sub_82372FC0);
PPC_FUNC_IMPL(__imp__sub_82372FC0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822b14c8
	ctx.lr = 0x82372FE8;
	sub_822B14C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82373018
	if (ctx.cr6.lt) goto loc_82373018;
	// beq cr6,0x82373010
	if (ctx.cr6.eq) goto loc_82373010;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82373008
	if (ctx.cr6.lt) goto loc_82373008;
	// bne cr6,0x8237301c
	if (!ctx.cr6.eq) goto loc_8237301C;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8237301c
	goto loc_8237301C;
loc_82373008:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8237301c
	goto loc_8237301C;
loc_82373010:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8237301c
	goto loc_8237301C;
loc_82373018:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8237301C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82373024;
	sub_82375128(ctx, base);
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

