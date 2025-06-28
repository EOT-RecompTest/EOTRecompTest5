#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8237D98C"))) PPC_WEAK_FUNC(sub_8237D98C);
PPC_FUNC_IMPL(__imp__sub_8237D98C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, ctx.r10.u32);
	// bl 0x8237cb78
	ctx.lr = 0x8237D9A0;
	sub_8237CB78(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D9B0"))) PPC_WEAK_FUNC(sub_8237D9B0);
PPC_FUNC_IMPL(__imp__sub_8237D9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,-88(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + -88);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8237ca88
	ctx.lr = 0x8237D9C8;
	sub_8237CA88(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D9D8"))) PPC_WEAK_FUNC(sub_8237D9D8);
PPC_FUNC_IMPL(__imp__sub_8237D9D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8237da2c
	if (ctx.cr6.eq) goto loc_8237DA2C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8237DA0C:
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
	// bne 0x8237da0c
	if (!ctx.cr0.eq) goto loc_8237DA0C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8237DA2C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x8233e4e0
	ctx.lr = 0x8237DA38;
	sub_8233E4E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x8237DA40;
	sub_821C0630(ctx, base);
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

__attribute__((alias("__imp__sub_8237DA5C"))) PPC_WEAK_FUNC(sub_8237DA5C);
PPC_FUNC_IMPL(__imp__sub_8237DA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DA60"))) PPC_WEAK_FUNC(sub_8237DA60);
PPC_FUNC_IMPL(__imp__sub_8237DA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8237DA68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237dac8
	if (ctx.cr6.eq) goto loc_8237DAC8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237dad8
	if (ctx.cr6.eq) goto loc_8237DAD8;
	// bl 0x8230a6d0
	ctx.lr = 0x8237DA94;
	sub_8230A6D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230a6d0
	ctx.lr = 0x8237DAA0;
	sub_8230A6D0(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8237dabc
	if (!ctx.cr6.eq) goto loc_8237DABC;
	// ld r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// ld r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8237dac0
	if (ctx.cr6.eq) goto loc_8237DAC0;
loc_8237DABC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237DAC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8237dad8
	goto loc_8237DAD8;
loc_8237DAC8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237dad8
	if (!ctx.cr6.eq) goto loc_8237DAD8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8237DAD8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DAE4"))) PPC_WEAK_FUNC(sub_8237DAE4);
PPC_FUNC_IMPL(__imp__sub_8237DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DAE8"))) PPC_WEAK_FUNC(sub_8237DAE8);
PPC_FUNC_IMPL(__imp__sub_8237DAE8) {
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
	// bl 0x8237ded0
	ctx.lr = 0x8237DB08;
	sub_8237DED0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237db18
	if (ctx.cr0.eq) goto loc_8237DB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8237DB18;
	sub_8236A3F0(ctx, base);
loc_8237DB18:
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

__attribute__((alias("__imp__sub_8237DB34"))) PPC_WEAK_FUNC(sub_8237DB34);
PPC_FUNC_IMPL(__imp__sub_8237DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DB38"))) PPC_WEAK_FUNC(sub_8237DB38);
PPC_FUNC_IMPL(__imp__sub_8237DB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8237ded0
	sub_8237DED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DB48"))) PPC_WEAK_FUNC(sub_8237DB48);
PPC_FUNC_IMPL(__imp__sub_8237DB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8237DB50;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 24, ctx.xer);
	// addi r30,r11,-4764
	ctx.r30.s64 = ctx.r11.s64 + -4764;
	// addi r29,r10,-4796
	ctx.r29.s64 = ctx.r10.s64 + -4796;
	// addi r28,r9,-4820
	ctx.r28.s64 = ctx.r9.s64 + -4820;
	// ble cr6,0x8237dbb0
	if (!ctx.cr6.gt) goto loc_8237DBB0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-4912
	ctx.r9.s64 = ctx.r11.s64 + -4912;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// li r8,33
	ctx.r8.s64 = 33;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8237DBB0;
	sub_82372320(ctx, base);
loc_8237DBB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r10,-4920
	ctx.r3.s64 = ctx.r10.s64 + -4920;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8237e5b0
	ctx.lr = 0x8237DBC4;
	sub_8237E5B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e440
	ctx.lr = 0x8237DBD8;
	sub_8237E440(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x8237dc10
	if (!ctx.cr6.eq) goto loc_8237DC10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,41
	ctx.r8.s64 = 41;
	// addi r9,r11,-4984
	ctx.r9.s64 = ctx.r11.s64 + -4984;
loc_8237DBEC:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8237DC08;
	sub_82372320(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237dc34
	goto loc_8237DC34;
loc_8237DC10:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237dc28
	if (ctx.cr6.eq) goto loc_8237DC28;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,46
	ctx.r8.s64 = 46;
	// addi r9,r11,-5008
	ctx.r9.s64 = ctx.r11.s64 + -5008;
	// b 0x8237dbec
	goto loc_8237DBEC;
loc_8237DC28:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8237DC34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DC3C"))) PPC_WEAK_FUNC(sub_8237DC3C);
PPC_FUNC_IMPL(__imp__sub_8237DC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DC40"))) PPC_WEAK_FUNC(sub_8237DC40);
PPC_FUNC_IMPL(__imp__sub_8237DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-4680(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4680);
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// addi r3,r10,-4232
	ctx.r3.s64 = ctx.r10.s64 + -4232;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8237e648
	ctx.lr = 0x8237DC80;
	sub_8237E648(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8237dcbc
	if (!ctx.cr6.eq) goto loc_8237DCBC;
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
	// addi r6,r8,-4796
	ctx.r6.s64 = ctx.r8.s64 + -4796;
	// addi r9,r11,-4716
	ctx.r9.s64 = ctx.r11.s64 + -4716;
	// addi r7,r10,-4748
	ctx.r7.s64 = ctx.r10.s64 + -4748;
	// addi r5,r5,-4764
	ctx.r5.s64 = ctx.r5.s64 + -4764;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8237DCBC;
	sub_82372320(ctx, base);
loc_8237DCBC:
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

__attribute__((alias("__imp__sub_8237DC48"))) PPC_WEAK_FUNC(sub_8237DC48);
PPC_FUNC_IMPL(__imp__sub_8237DC48) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// addi r3,r10,-4232
	ctx.r3.s64 = ctx.r10.s64 + -4232;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8237e648
	ctx.lr = 0x8237DC80;
	sub_8237E648(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8237dcbc
	if (!ctx.cr6.eq) goto loc_8237DCBC;
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
	// addi r6,r8,-4796
	ctx.r6.s64 = ctx.r8.s64 + -4796;
	// addi r9,r11,-4716
	ctx.r9.s64 = ctx.r11.s64 + -4716;
	// addi r7,r10,-4748
	ctx.r7.s64 = ctx.r10.s64 + -4748;
	// addi r5,r5,-4764
	ctx.r5.s64 = ctx.r5.s64 + -4764;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8237DCBC;
	sub_82372320(ctx, base);
loc_8237DCBC:
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

__attribute__((alias("__imp__sub_8237DCD8"))) PPC_WEAK_FUNC(sub_8237DCD8);
PPC_FUNC_IMPL(__imp__sub_8237DCD8) {
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
	// bl 0x8237ded0
	ctx.lr = 0x8237DCF0;
	sub_8237DED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DD00"))) PPC_WEAK_FUNC(sub_8237DD00);
PPC_FUNC_IMPL(__imp__sub_8237DD00) {
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
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8237ded0
	ctx.lr = 0x8237DD2C;
	sub_8237DED0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237dd3c
	if (ctx.cr0.eq) goto loc_8237DD3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8237DD3C;
	sub_8236A3F0(ctx, base);
loc_8237DD3C:
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

__attribute__((alias("__imp__sub_8237DD58"))) PPC_WEAK_FUNC(sub_8237DD58);
PPC_FUNC_IMPL(__imp__sub_8237DD58) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DD64"))) PPC_WEAK_FUNC(sub_8237DD64);
PPC_FUNC_IMPL(__imp__sub_8237DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DD68"))) PPC_WEAK_FUNC(sub_8237DD68);
PPC_FUNC_IMPL(__imp__sub_8237DD68) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8237dee0
	ctx.lr = 0x8237DD84;
	sub_8237DEE0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_8237DDA8"))) PPC_WEAK_FUNC(sub_8237DDA8);
PPC_FUNC_IMPL(__imp__sub_8237DDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-4624(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4624);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8237DDB8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8234f138
	ctx.lr = 0x8237DDD4;
	sub_8234F138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b890
	ctx.lr = 0x8237DDE0;
	sub_8236B890(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236d968
	ctx.lr = 0x8237DDEC;
	sub_8236D968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8237df50
	ctx.lr = 0x8237DDFC;
	sub_8237DF50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b838
	ctx.lr = 0x8237DE08;
	sub_8236B838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DDB0"))) PPC_WEAK_FUNC(sub_8237DDB0);
PPC_FUNC_IMPL(__imp__sub_8237DDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8237DDB8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8234f138
	ctx.lr = 0x8237DDD4;
	sub_8234F138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b890
	ctx.lr = 0x8237DDE0;
	sub_8236B890(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236d968
	ctx.lr = 0x8237DDEC;
	sub_8236D968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8237df50
	ctx.lr = 0x8237DDFC;
	sub_8237DF50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b838
	ctx.lr = 0x8237DE08;
	sub_8236B838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DE14"))) PPC_WEAK_FUNC(sub_8237DE14);
PPC_FUNC_IMPL(__imp__sub_8237DE14) {
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
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x821cc648
	ctx.lr = 0x8237DE2C;
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

__attribute__((alias("__imp__sub_8237DE3C"))) PPC_WEAK_FUNC(sub_8237DE3C);
PPC_FUNC_IMPL(__imp__sub_8237DE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DE40"))) PPC_WEAK_FUNC(sub_8237DE40);
PPC_FUNC_IMPL(__imp__sub_8237DE40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8237e158
	sub_8237E158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DE48"))) PPC_WEAK_FUNC(sub_8237DE48);
PPC_FUNC_IMPL(__imp__sub_8237DE48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8237e1c8
	sub_8237E1C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DE50"))) PPC_WEAK_FUNC(sub_8237DE50);
PPC_FUNC_IMPL(__imp__sub_8237DE50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8237e320
	sub_8237E320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237DE58"))) PPC_WEAK_FUNC(sub_8237DE58);
PPC_FUNC_IMPL(__imp__sub_8237DE58) {
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
	// bl 0x8237e030
	ctx.lr = 0x8237DE74;
	sub_8237E030(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x8237deb8
	if (!ctx.cr0.eq) goto loc_8237DEB8;
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
	// addi r6,r8,-4460
	ctx.r6.s64 = ctx.r8.s64 + -4460;
	// addi r9,r11,-4524
	ctx.r9.s64 = ctx.r11.s64 + -4524;
	// addi r7,r10,-4548
	ctx.r7.s64 = ctx.r10.s64 + -4548;
	// addi r5,r5,-4560
	ctx.r5.s64 = ctx.r5.s64 + -4560;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,110
	ctx.r8.s64 = 110;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8237DEB8;
	sub_82372320(ctx, base);
loc_8237DEB8:
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

__attribute__((alias("__imp__sub_8237DECC"))) PPC_WEAK_FUNC(sub_8237DECC);
PPC_FUNC_IMPL(__imp__sub_8237DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DED0"))) PPC_WEAK_FUNC(sub_8237DED0);
PPC_FUNC_IMPL(__imp__sub_8237DED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-5024
	ctx.r11.s64 = ctx.r11.s64 + -5024;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DEE0"))) PPC_WEAK_FUNC(sub_8237DEE0);
PPC_FUNC_IMPL(__imp__sub_8237DEE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b15b0
	ctx.lr = 0x8237DF04;
	sub_822B15B0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822b15d8
	ctx.lr = 0x8237DF28;
	sub_822B15D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237df34
	if (ctx.cr0.eq) goto loc_8237DF34;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8237DF34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8237DF4C"))) PPC_WEAK_FUNC(sub_8237DF4C);
PPC_FUNC_IMPL(__imp__sub_8237DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DF50"))) PPC_WEAK_FUNC(sub_8237DF50);
PPC_FUNC_IMPL(__imp__sub_8237DF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// bl 0x822b1628
	ctx.lr = 0x8237DF90;
	sub_822B1628(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8237e01c
	if (!ctx.cr0.lt) goto loc_8237E01C;
	// bl 0x822b16d8
	ctx.lr = 0x8237DF9C;
	sub_822B16D8(ctx, base);
	// cmpwi cr6,r3,10051
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10051, ctx.xer);
	// bgt cr6,0x8237dfec
	if (ctx.cr6.gt) goto loc_8237DFEC;
	// cmpwi cr6,r3,10050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10050, ctx.xer);
	// bge cr6,0x8237e00c
	if (!ctx.cr6.lt) goto loc_8237E00C;
	// cmpwi cr6,r3,10004
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10004, ctx.xer);
	// beq cr6,0x8237dfe4
	if (ctx.cr6.eq) goto loc_8237DFE4;
	// cmpwi cr6,r3,10022
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10022, ctx.xer);
	// beq cr6,0x8237dfdc
	if (ctx.cr6.eq) goto loc_8237DFDC;
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x8237dfd4
	if (ctx.cr6.eq) goto loc_8237DFD4;
	// cmpwi cr6,r3,10040
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10040, ctx.xer);
	// bne cr6,0x8237e014
	if (!ctx.cr6.eq) goto loc_8237E014;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x8237e020
	goto loc_8237E020;
loc_8237DFD4:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8237e020
	goto loc_8237E020;
loc_8237DFDC:
	// li r3,-9
	ctx.r3.s64 = -9;
	// b 0x8237e020
	goto loc_8237E020;
loc_8237DFE4:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x8237e020
	goto loc_8237E020;
loc_8237DFEC:
	// cmpwi cr6,r3,10053
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10053, ctx.xer);
	// blt cr6,0x8237e014
	if (ctx.cr6.lt) goto loc_8237E014;
	// cmpwi cr6,r3,10054
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10054, ctx.xer);
	// ble cr6,0x8237e00c
	if (!ctx.cr6.gt) goto loc_8237E00C;
	// cmpwi cr6,r3,10060
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10060, ctx.xer);
	// beq cr6,0x8237e00c
	if (ctx.cr6.eq) goto loc_8237E00C;
	// cmpwi cr6,r3,10065
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10065, ctx.xer);
	// bne cr6,0x8237e014
	if (!ctx.cr6.eq) goto loc_8237E014;
loc_8237E00C:
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x8237e020
	goto loc_8237E020;
loc_8237E014:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8237e020
	goto loc_8237E020;
loc_8237E01C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237E020:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E030"))) PPC_WEAK_FUNC(sub_8237E030);
PPC_FUNC_IMPL(__imp__sub_8237E030) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8237e0bc
	if (ctx.cr6.eq) goto loc_8237E0BC;
	// bl 0x822b15c8
	ctx.lr = 0x8237E04C;
	sub_822B15C8(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8237e05c
	if (!ctx.cr0.eq) goto loc_8237E05C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8237e0bc
	goto loc_8237E0BC;
loc_8237E05C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8237e084
	if (!ctx.cr6.eq) goto loc_8237E084;
	// bl 0x822b16d8
	ctx.lr = 0x8237E068;
	sub_822B16D8(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r8,-4268
	ctx.r7.s64 = ctx.r8.s64 + -4268;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,-4304
	ctx.r9.s64 = ctx.r11.s64 + -4304;
	// li r8,351
	ctx.r8.s64 = 351;
	// b 0x8237e098
	goto loc_8237E098;
loc_8237E084:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r7,r8,-4268
	ctx.r7.s64 = ctx.r8.s64 + -4268;
	// addi r9,r11,-4352
	ctx.r9.s64 = ctx.r11.s64 + -4352;
	// li r8,356
	ctx.r8.s64 = 356;
loc_8237E098:
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r6,-4404
	ctx.r6.s64 = ctx.r6.s64 + -4404;
	// addi r5,r5,-4428
	ctx.r5.s64 = ctx.r5.s64 + -4428;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8237E0B8;
	sub_82372320(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237E0BC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E0D0"))) PPC_WEAK_FUNC(sub_8237E0D0);
PPC_FUNC_IMPL(__imp__sub_8237E0D0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1640
	ctx.lr = 0x8237E118;
	sub_822B1640(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8237e138
	if (ctx.cr6.eq) goto loc_8237E138;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b16e0
	ctx.lr = 0x8237E12C;
	sub_822B16E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x8237e13c
	if (ctx.cr0.eq) goto loc_8237E13C;
loc_8237E138:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237E13C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

__attribute__((alias("__imp__sub_8237E154"))) PPC_WEAK_FUNC(sub_8237E154);
PPC_FUNC_IMPL(__imp__sub_8237E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E158"))) PPC_WEAK_FUNC(sub_8237E158);
PPC_FUNC_IMPL(__imp__sub_8237E158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8237E160;
	__savegprlr_29(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1640
	ctx.lr = 0x8237E198;
	sub_822B1640(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b16e0
	ctx.lr = 0x8237E1A8;
	sub_822B16E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237e1bc
	if (ctx.cr0.eq) goto loc_8237E1BC;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8237e1c0
	if (!ctx.cr6.eq) goto loc_8237E1C0;
loc_8237E1BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237E1C0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237E1C8"))) PPC_WEAK_FUNC(sub_8237E1C8);
PPC_FUNC_IMPL(__imp__sub_8237E1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8237E1D0;
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8237e1f0
	if (!ctx.cr6.eq) goto loc_8237E1F0;
	// li r3,-10
	ctx.r3.s64 = -10;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E1F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237e158
	ctx.lr = 0x8237E1F8;
	sub_8237E158(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8237e218
	if (!ctx.cr0.eq) goto loc_8237E218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237e0d0
	ctx.lr = 0x8237E208;
	sub_8237E0D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237e218
	if (ctx.cr0.eq) goto loc_8237E218;
loc_8237E210:
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E218:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1698
	ctx.lr = 0x8237E22C;
	sub_822B1698(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8237e304
	if (!ctx.cr0.lt) goto loc_8237E304;
	// bl 0x822b16d8
	ctx.lr = 0x8237E238;
	sub_822B16D8(ctx, base);
	// cmpwi cr6,r3,10049
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10049, ctx.xer);
	// bgt cr6,0x8237e294
	if (ctx.cr6.gt) goto loc_8237E294;
	// beq cr6,0x8237e274
	if (ctx.cr6.eq) goto loc_8237E274;
	// cmpwi cr6,r3,10004
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10004, ctx.xer);
	// beq cr6,0x8237e28c
	if (ctx.cr6.eq) goto loc_8237E28C;
	// cmpwi cr6,r3,10022
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10022, ctx.xer);
	// beq cr6,0x8237e274
	if (ctx.cr6.eq) goto loc_8237E274;
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x8237e284
	if (ctx.cr6.eq) goto loc_8237E284;
	// cmpwi cr6,r3,10039
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10039, ctx.xer);
	// beq cr6,0x8237e274
	if (ctx.cr6.eq) goto loc_8237E274;
	// cmpwi cr6,r3,10040
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10040, ctx.xer);
	// beq cr6,0x8237e27c
	if (ctx.cr6.eq) goto loc_8237E27C;
	// cmpwi cr6,r3,10047
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10047, ctx.xer);
	// bne cr6,0x8237e2fc
	if (!ctx.cr6.eq) goto loc_8237E2FC;
loc_8237E274:
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E27C:
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E284:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E28C:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E294:
	// cmpwi cr6,r3,10057
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10057, ctx.xer);
	// bgt cr6,0x8237e2e4
	if (ctx.cr6.gt) goto loc_8237E2E4;
	// beq cr6,0x8237e2c4
	if (ctx.cr6.eq) goto loc_8237E2C4;
	// cmpwi cr6,r3,10050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10050, ctx.xer);
	// blt cr6,0x8237e2fc
	if (ctx.cr6.lt) goto loc_8237E2FC;
	// cmpwi cr6,r3,10051
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10051, ctx.xer);
	// ble cr6,0x8237e210
	if (!ctx.cr6.gt) goto loc_8237E210;
	// cmpwi cr6,r3,10052
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10052, ctx.xer);
	// ble cr6,0x8237e2fc
	if (!ctx.cr6.gt) goto loc_8237E2FC;
	// cmpwi cr6,r3,10054
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10054, ctx.xer);
	// ble cr6,0x8237e210
	if (!ctx.cr6.gt) goto loc_8237E210;
	// b 0x8237e2fc
	goto loc_8237E2FC;
loc_8237E2C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237e0d0
	ctx.lr = 0x8237E2CC;
	sub_8237E0D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// addi r3,r11,-11
	ctx.r3.s64 = ctx.r11.s64 + -11;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E2E4:
	// cmpwi cr6,r3,10060
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10060, ctx.xer);
	// blt cr6,0x8237e2fc
	if (ctx.cr6.lt) goto loc_8237E2FC;
	// cmpwi cr6,r3,10061
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10061, ctx.xer);
	// ble cr6,0x8237e210
	if (!ctx.cr6.gt) goto loc_8237E210;
	// cmpwi cr6,r3,10065
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10065, ctx.xer);
	// beq cr6,0x8237e210
	if (ctx.cr6.eq) goto loc_8237E210;
loc_8237E2FC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E304:
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// ld r11,23976(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23976);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,23976(r9)
	PPC_STORE_U64(ctx.r9.u32 + 23976, ctx.r11.u64);
loc_8237E318:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237E320"))) PPC_WEAK_FUNC(sub_8237E320);
PPC_FUNC_IMPL(__imp__sub_8237E320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8237E328;
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8237e348
	if (!ctx.cr6.eq) goto loc_8237E348;
	// li r3,-10
	ctx.r3.s64 = -10;
	// b 0x8237e414
	goto loc_8237E414;
loc_8237E348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237e158
	ctx.lr = 0x8237E350;
	sub_8237E158(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8237e3fc
	if (ctx.cr0.eq) goto loc_8237E3FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822b1660
	ctx.lr = 0x8237E36C;
	sub_822B1660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8237e424
	if (!ctx.cr0.lt) goto loc_8237E424;
	// bl 0x822b16d8
	ctx.lr = 0x8237E378;
	sub_822B16D8(ctx, base);
	// cmpwi cr6,r3,10051
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10051, ctx.xer);
	// bgt cr6,0x8237e3c8
	if (ctx.cr6.gt) goto loc_8237E3C8;
	// cmpwi cr6,r3,10050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10050, ctx.xer);
	// bge cr6,0x8237e41c
	if (!ctx.cr6.lt) goto loc_8237E41C;
	// cmpwi cr6,r3,10004
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10004, ctx.xer);
	// beq cr6,0x8237e3c0
	if (ctx.cr6.eq) goto loc_8237E3C0;
	// cmpwi cr6,r3,10022
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10022, ctx.xer);
	// beq cr6,0x8237e3b8
	if (ctx.cr6.eq) goto loc_8237E3B8;
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x8237e3b0
	if (ctx.cr6.eq) goto loc_8237E3B0;
	// cmpwi cr6,r3,10040
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10040, ctx.xer);
	// bne cr6,0x8237e3f0
	if (!ctx.cr6.eq) goto loc_8237E3F0;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x8237e414
	goto loc_8237E414;
loc_8237E3B0:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8237e414
	goto loc_8237E414;
loc_8237E3B8:
	// li r3,-9
	ctx.r3.s64 = -9;
	// b 0x8237e414
	goto loc_8237E414;
loc_8237E3C0:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x8237e414
	goto loc_8237E414;
loc_8237E3C8:
	// cmpwi cr6,r3,10053
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10053, ctx.xer);
	// blt cr6,0x8237e3f0
	if (ctx.cr6.lt) goto loc_8237E3F0;
	// cmpwi cr6,r3,10054
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10054, ctx.xer);
	// ble cr6,0x8237e41c
	if (!ctx.cr6.gt) goto loc_8237E41C;
	// cmpwi cr6,r3,10057
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10057, ctx.xer);
	// beq cr6,0x8237e3f8
	if (ctx.cr6.eq) goto loc_8237E3F8;
	// cmpwi cr6,r3,10060
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10060, ctx.xer);
	// beq cr6,0x8237e41c
	if (ctx.cr6.eq) goto loc_8237E41C;
	// cmpwi cr6,r3,10065
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10065, ctx.xer);
	// beq cr6,0x8237e41c
	if (ctx.cr6.eq) goto loc_8237E41C;
loc_8237E3F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8237e414
	goto loc_8237E414;
loc_8237E3F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237E3FC:
	// bl 0x8237e0d0
	ctx.lr = 0x8237E400;
	sub_8237E0D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// addi r3,r11,-11
	ctx.r3.s64 = ctx.r11.s64 + -11;
loc_8237E414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8237E41C:
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x8237e414
	goto loc_8237E414;
loc_8237E424:
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// ld r11,23984(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23984);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,23984(r9)
	PPC_STORE_U64(ctx.r9.u32 + 23984, ctx.r11.u64);
	// b 0x8237e414
	goto loc_8237E414;
}

__attribute__((alias("__imp__sub_8237E43C"))) PPC_WEAK_FUNC(sub_8237E43C);
PPC_FUNC_IMPL(__imp__sub_8237E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E440"))) PPC_WEAK_FUNC(sub_8237E440);
PPC_FUNC_IMPL(__imp__sub_8237E440) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8237f5c8
	ctx.lr = 0x8237E468;
	sub_8237F5C8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237e480
	if (ctx.cr6.eq) goto loc_8237E480;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8237e5a0
	goto loc_8237E5A0;
loc_8237E480:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r9,r10,104
	ctx.r9.s64 = ctx.r10.s64 * 104;
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// addi r7,r8,23992
	ctx.r7.s64 = ctx.r8.s64 + 23992;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8237e4b0
	if (!ctx.cr6.lt) goto loc_8237E4B0;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8237e5a0
	goto loc_8237E5A0;
loc_8237E4B0:
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x8236a3e8
	ctx.lr = 0x8237E4B8;
	sub_8236A3E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e4d0
	if (!ctx.cr6.eq) goto loc_8237E4D0;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x8237e5a0
	goto loc_8237E5A0;
loc_8237E4D0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r9,r10,104
	ctx.r9.s64 = ctx.r10.s64 * 104;
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// addi r7,r8,23992
	ctx.r7.s64 = ctx.r8.s64 + 23992;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r5,84(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8237E4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8237e508
	if (ctx.cr6.eq) goto loc_8237E508;
	// b 0x8237e594
	goto loc_8237E594;
loc_8237E508:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 * 104;
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// addi r8,r9,23992
	ctx.r8.s64 = ctx.r9.s64 + 23992;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8237E534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8237e548
	if (ctx.cr6.eq) goto loc_8237E548;
	// b 0x8237e594
	goto loc_8237E594;
loc_8237E548:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 * 104;
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// addi r8,r9,23992
	ctx.r8.s64 = ctx.r9.s64 + 23992;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8237E570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r4,r5,104
	ctx.r4.s64 = ctx.r5.s64 * 104;
	// lis r3,-32183
	ctx.r3.s64 = -2109145088;
	// addi r11,r3,23992
	ctx.r11.s64 = ctx.r3.s64 + 23992;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_8237E594:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8236a3f0
	ctx.lr = 0x8237E59C;
	sub_8236A3F0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8237E5A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E5B0"))) PPC_WEAK_FUNC(sub_8237E5B0);
PPC_FUNC_IMPL(__imp__sub_8237E5B0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8237e5d8
	goto loc_8237E5D8;
loc_8237E5CC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8237E5D8:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// bge cr6,0x8237e630
	if (!ctx.cr6.lt) goto loc_8237E630;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r6,r7,104
	ctx.r6.s64 = ctx.r7.s64 * 104;
	// lis r5,-32183
	ctx.r5.s64 = -2109145088;
	// addi r4,r5,23992
	ctx.r4.s64 = ctx.r5.s64 + 23992;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237e62c
	if (ctx.cr6.eq) goto loc_8237E62C;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 * 104;
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// addi r8,r9,23992
	ctx.r8.s64 = ctx.r9.s64 + 23992;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82342440
	ctx.lr = 0x8237E61C;
	sub_82342440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e62c
	if (!ctx.cr6.eq) goto loc_8237E62C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8237e634
	goto loc_8237E634;
loc_8237E62C:
	// b 0x8237e5cc
	goto loc_8237E5CC;
loc_8237E630:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8237E634:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E644"))) PPC_WEAK_FUNC(sub_8237E644);
PPC_FUNC_IMPL(__imp__sub_8237E644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E648"))) PPC_WEAK_FUNC(sub_8237E648);
PPC_FUNC_IMPL(__imp__sub_8237E648) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8237e670
	goto loc_8237E670;
loc_8237E664:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8237E670:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// bge cr6,0x8237e6b0
	if (!ctx.cr6.lt) goto loc_8237E6B0;
	// li r5,104
	ctx.r5.s64 = 104;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r6,r7,104
	ctx.r6.s64 = ctx.r7.s64 * 104;
	// lis r3,-32183
	ctx.r3.s64 = -2109145088;
	// addi r11,r3,23992
	ctx.r11.s64 = ctx.r3.s64 + 23992;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x82341410
	ctx.lr = 0x8237E69C;
	sub_82341410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e6ac
	if (!ctx.cr6.eq) goto loc_8237E6AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8237e720
	goto loc_8237E720;
loc_8237E6AC:
	// b 0x8237e664
	goto loc_8237E664;
loc_8237E6B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8237e6c8
	goto loc_8237E6C8;
loc_8237E6BC:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_8237E6C8:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bge cr6,0x8237e71c
	if (!ctx.cr6.lt) goto loc_8237E71C;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r5,r6,104
	ctx.r5.s64 = ctx.r6.s64 * 104;
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// addi r3,r4,23992
	ctx.r3.s64 = ctx.r4.s64 + 23992;
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e718
	if (!ctx.cr6.eq) goto loc_8237E718;
	// li r5,104
	ctx.r5.s64 = 104;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r9,r10,104
	ctx.r9.s64 = ctx.r10.s64 * 104;
	// lis r8,-32183
	ctx.r8.s64 = -2109145088;
	// addi r7,r8,23992
	ctx.r7.s64 = ctx.r8.s64 + 23992;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8237E710;
	sub_8233E4E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8237e720
	goto loc_8237E720;
loc_8237E718:
	// b 0x8237e6bc
	goto loc_8237E6BC;
loc_8237E71C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8237E720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E730"))) PPC_WEAK_FUNC(sub_8237E730);
PPC_FUNC_IMPL(__imp__sub_8237E730) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,-30293
	ctx.r10.s64 = -1985282048;
	// ori r9,r10,52719
	ctx.r9.u64 = ctx.r10.u64 | 52719;
	// lis r8,291
	ctx.r8.s64 = 19070976;
	// ori r7,r8,17767
	ctx.r7.u64 = ctx.r8.u64 | 17767;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r5,30292
	ctx.r5.s64 = 1985216512;
	// ori r4,r5,12816
	ctx.r4.u64 = ctx.r5.u64 | 12816;
	// lis r3,-292
	ctx.r3.s64 = -19136512;
	// ori r11,r3,47768
	ctx.r11.u64 = ctx.r3.u64 | 47768;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r9,-15438
	ctx.r9.s64 = -1011744768;
	// ori r8,r9,57735
	ctx.r8.u64 = ctx.r9.u64 | 57735;
	// lis r7,-3946
	ctx.r7.s64 = -258605056;
	// ori r6,r7,42420
	ctx.r6.u64 = ctx.r7.u64 | 42420;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// std r8,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r8.u64);
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E7A8"))) PPC_WEAK_FUNC(sub_8237E7A8);
PPC_FUNC_IMPL(__imp__sub_8237E7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// ble cr6,0x8237e7d8
	if (!ctx.cr6.gt) goto loc_8237E7D8;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8237e948
	goto loc_8237E948;
loc_8237E7D8:
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8237e944
	if (!ctx.cr6.gt) goto loc_8237E944;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8237e854
	if (!ctx.cr6.eq) goto loc_8237E854;
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// blt cr6,0x8237e854
	if (ctx.cr6.lt) goto loc_8237E854;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8237e958
	ctx.lr = 0x8237E80C;
	sub_8237E958(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8237e824
	if (ctx.cr6.eq) goto loc_8237E824;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8237e948
	goto loc_8237E948;
loc_8237E824:
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ld r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// addi r11,r3,512
	ctx.r11.s64 = ctx.r3.s64 + 512;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r8,r9,64
	ctx.r8.s64 = ctx.r9.s64 + 64;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r6,r7,-64
	ctx.r6.s64 = ctx.r7.s64 + -64;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// b 0x8237e940
	goto loc_8237E940;
loc_8237E854:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// subfic r3,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r3.s64 = 64 - ctx.r4.s64;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8237e878
	if (!ctx.cr6.lt) goto loc_8237E878;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x8237e888
	goto loc_8237E888;
loc_8237E878:
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// subfic r7,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	ctx.r7.s64 = 64 - ctx.r8.s64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
loc_8237E888:
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8237E8B0;
	sub_8233E4E0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r5,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r5.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// bne cr6,0x8237e940
	if (!ctx.cr6.eq) goto loc_8237E940;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8237e958
	ctx.lr = 0x8237E908;
	sub_8237E958(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237e920
	if (ctx.cr6.eq) goto loc_8237E920;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8237e948
	goto loc_8237E948;
loc_8237E920:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// std r9,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r9.u64);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r6.u32);
loc_8237E940:
	// b 0x8237e7d8
	goto loc_8237E7D8;
loc_8237E944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237E948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E958"))) PPC_WEAK_FUNC(sub_8237E958);
PPC_FUNC_IMPL(__imp__sub_8237E958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// b 0x8237e984
	goto loc_8237E984;
loc_8237E978:
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
loc_8237E984:
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bge cr6,0x8237eab8
	if (!ctx.cr6.lt) goto loc_8237EAB8;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbz r3,7(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// rldicr r9,r10,56,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFF00000000000000;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r4,6(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// rldicr r10,r11,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFF000000000000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r4,5(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// rldicr r10,r11,40,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 40) & 0xFFFFFF0000000000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// rldicr r10,r11,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r4,3(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// rldicr r10,r11,24,39
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 24) & 0xFFFFFFFFFF000000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r4,2(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// rldicr r10,r11,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r4,1(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// rldicr r10,r11,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lbzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// or r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stdx r11,r8,r9
	PPC_STORE_U64(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u64);
	// b 0x8237e978
	goto loc_8237E978;
loc_8237EAB8:
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ld r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8237eb90
	ctx.lr = 0x8237EAF4;
	sub_8237EB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237eec0
	ctx.lr = 0x8237EAFC;
	sub_8237EEC0(ctx, base);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8237eb90
	ctx.lr = 0x8237EB14;
	sub_8237EB90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237eec0
	ctx.lr = 0x8237EB1C;
	sub_8237EEC0(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8237eb90
	ctx.lr = 0x8237EB34;
	sub_8237EB90(ctx, base);
	// ld r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// xor r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ld r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ld r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// std r6,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r6.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237EB90"))) PPC_WEAK_FUNC(sub_8237EB90);
PPC_FUNC_IMPL(__imp__sub_8237EB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8237eca0
	ctx.lr = 0x8237EBCC;
	sub_8237ECA0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8237eca0
	ctx.lr = 0x8237EBE8;
	sub_8237ECA0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// ld r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8237eca0
	ctx.lr = 0x8237EC04;
	sub_8237ECA0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// ld r6,24(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8237eca0
	ctx.lr = 0x8237EC20;
	sub_8237ECA0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// ld r6,32(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 32);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8237eca0
	ctx.lr = 0x8237EC3C;
	sub_8237ECA0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// ld r6,40(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 40);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8237eca0
	ctx.lr = 0x8237EC58;
	sub_8237ECA0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// ld r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8237eca0
	ctx.lr = 0x8237EC74;
	sub_8237ECA0(ctx, base);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// ld r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8237eca0
	ctx.lr = 0x8237EC90;
	sub_8237ECA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237ECA0"))) PPC_WEAK_FUNC(sub_8237ECA0);
PPC_FUNC_IMPL(__imp__sub_8237ECA0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// lwz r11,36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,40(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r7,36(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// lwz r6,36(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,-4128
	ctx.r8.s64 = ctx.r9.s64 + -4128;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r7,-4128
	ctx.r6.s64 = ctx.r7.s64 + -4128;
	// addi r5,r6,2048
	ctx.r5.s64 = ctx.r6.s64 + 2048;
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r3,r4,48,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 48) & 0xFFFFFFFFFFFF;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// ldx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r7.u32);
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// addi r11,r3,-4128
	ctx.r11.s64 = ctx.r3.s64 + -4128;
	// addi r10,r11,4096
	ctx.r10.s64 = ctx.r11.s64 + 4096;
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r5
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r5.u32);
	// xor r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,-4128
	ctx.r9.s64 = ctx.r10.s64 + -4128;
	// addi r8,r9,6144
	ctx.r8.s64 = ctx.r9.s64 + 6144;
	// ld r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r6,r7,16,48
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFF;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r3.u32);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r3,r4,-4128
	ctx.r3.s64 = ctx.r4.s64 + -4128;
	// addi r11,r3,6144
	ctx.r11.s64 = ctx.r3.s64 + 6144;
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r4,r5,-4128
	ctx.r4.s64 = ctx.r5.s64 + -4128;
	// addi r3,r4,4096
	ctx.r3.s64 = ctx.r4.s64 + 4096;
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r9,r10,40,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 40) & 0xFFFFFFFFFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r6.u32);
	// ldx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r5.u32);
	// xor r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,-4128
	ctx.r9.s64 = ctx.r10.s64 + -4128;
	// addi r8,r9,2048
	ctx.r8.s64 = ctx.r9.s64 + 2048;
	// ld r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r6,r7,24,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 24) & 0xFFFFFF;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r3.u32);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicl r7,r8,8,56
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// addi r11,r3,-4128
	ctx.r11.s64 = ctx.r3.s64 + -4128;
	// ldx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r5,28(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// lwz r4,28(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lwz r11,52(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8237ee68
	if (ctx.cr6.eq) goto loc_8237EE68;
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x8237ee84
	if (ctx.cr6.eq) goto loc_8237EE84;
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x8237eea0
	if (ctx.cr6.eq) goto loc_8237EEA0;
	// b 0x8237eeb8
	goto loc_8237EEB8;
loc_8237EE68:
	// ld r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicr r6,r7,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// ld r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r3,28(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// std r4,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r4.u64);
	// b 0x8237eeb8
	goto loc_8237EEB8;
loc_8237EE84:
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicr r10,r11,3,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// b 0x8237eeb8
	goto loc_8237EEB8;
loc_8237EEA0:
	// ld r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rldicr r5,r6,3,60
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
loc_8237EEB8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237EEBC"))) PPC_WEAK_FUNC(sub_8237EEBC);
PPC_FUNC_IMPL(__imp__sub_8237EEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237EEC0"))) PPC_WEAK_FUNC(sub_8237EEC0);
PPC_FUNC_IMPL(__imp__sub_8237EEC0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lis r12,-23131
	ctx.r12.s64 = -1515913216;
	// ori r12,r12,42405
	ctx.r12.u64 = ctx.r12.u64 | 42405;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,42405
	ctx.r12.u64 = ctx.r12.u64 | 2779054080;
	// ori r12,r12,42405
	ctx.r12.u64 = ctx.r12.u64 | 42405;
	// xor r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r12.u64;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// lwz r4,20(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// xor r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// ld r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r3,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r3.u64);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// rldicr r5,r6,19,44
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 19) & 0xFFFFFFFFFFF80000;
	// ld r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// xor r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// ld r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r10,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r10.u64);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r6,32(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32);
	// ld r5,24(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r4,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r7,40(r6)
	PPC_STORE_U64(ctx.r6.u32 + 40, ctx.r7.u64);
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,20(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rldicl r9,r10,41,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 41) & 0x1FFFFFFFFFF;
	// ld r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// ld r6,48(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 48);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// lwz r4,20(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r5,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.r5.u64);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r8,56(r7)
	PPC_STORE_U64(ctx.r7.u32 + 56, ctx.r8.u64);
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r3,56(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 56);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 56);
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// rldicr r5,r6,19,44
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 19) & 0xFFFFFFFFFFF80000;
	// lwz r4,20(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// xor r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// ld r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r3,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r3.u64);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// ld r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r6,24(r5)
	PPC_STORE_U64(ctx.r5.u32 + 24, ctx.r6.u64);
	// lwz r4,20(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rldicl r8,r9,41,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 41) & 0x1FFFFFFFFFF;
	// ld r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// ld r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r4,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r7,40(r6)
	PPC_STORE_U64(ctx.r6.u32 + 40, ctx.r7.u64);
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,20(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r3,48(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 48);
	// ld r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r10,48(r9)
	PPC_STORE_U64(ctx.r9.u32 + 48, ctx.r10.u64);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// ld r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 48);
	// lis r12,291
	ctx.r12.s64 = 19070976;
	// ori r12,r12,17767
	ctx.r12.u64 = ctx.r12.u64 | 17767;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,35243
	ctx.r12.u64 = ctx.r12.u64 | 2309685248;
	// ori r12,r12,52719
	ctx.r12.u64 = ctx.r12.u64 | 52719;
	// xor r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r12.u64;
	// ld r4,56(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 56);
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// std r3,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r3.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237F108"))) PPC_WEAK_FUNC(sub_8237F108);
PPC_FUNC_IMPL(__imp__sub_8237F108) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// blt cr6,0x8237f134
	if (ctx.cr6.lt) goto loc_8237F134;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8237f5b4
	goto loc_8237F5B4;
loc_8237F134:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// ld r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r3,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r3.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stbx r6,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,56
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 56, ctx.xer);
	// ble cr6,0x8237f1f0
	if (!ctx.cr6.gt) goto loc_8237F1F0;
loc_8237F194:
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplwi cr6,r7,64
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 64, ctx.xer);
	// bge cr6,0x8237f1d4
	if (!ctx.cr6.lt) goto loc_8237F1D4;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r6,36
	ctx.r5.s64 = ctx.r6.s64 + 36;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r5,r3
	PPC_STORE_U8(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r8,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r8.u32);
	// b 0x8237f194
	goto loc_8237F194;
loc_8237F1D4:
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r6,36
	ctx.r4.s64 = ctx.r6.s64 + 36;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8237e958
	ctx.lr = 0x8237F1E4;
	sub_8237E958(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
loc_8237F1F0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bge cr6,0x8237f230
	if (!ctx.cr6.lt) goto loc_8237F230;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r6,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// b 0x8237f1f0
	goto loc_8237F1F0;
loc_8237F230:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// rldicl r8,r9,8,56
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFF;
	// clrldi r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r6,99(r5)
	PPC_STORE_U8(ctx.r5.u32 + 99, ctx.r6.u8);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// rldicl r11,r3,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// clrldi r10,r11,56
	ctx.r10.u64 = ctx.r11.u64 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r9,98(r8)
	PPC_STORE_U8(ctx.r8.u32 + 98, ctx.r9.u8);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// rldicl r5,r6,24,40
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 24) & 0xFFFFFF;
	// clrldi r4,r5,56
	ctx.r4.u64 = ctx.r5.u64 & 0xFF;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r3,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r3.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// clrldi r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r6,96(r5)
	PPC_STORE_U8(ctx.r5.u32 + 96, ctx.r6.u8);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// rldicl r11,r3,40,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 40) & 0xFFFFFFFFFF;
	// clrldi r10,r11,56
	ctx.r10.u64 = ctx.r11.u64 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r9,95(r8)
	PPC_STORE_U8(ctx.r8.u32 + 95, ctx.r9.u8);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// rldicl r5,r6,48,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 48) & 0xFFFFFFFFFFFF;
	// clrldi r4,r5,56
	ctx.r4.u64 = ctx.r5.u64 & 0xFF;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r3,94(r11)
	PPC_STORE_U8(ctx.r11.u32 + 94, ctx.r3.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// rldicl r8,r9,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r6,93(r5)
	PPC_STORE_U8(ctx.r5.u32 + 93, ctx.r6.u8);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// clrldi r11,r3,56
	ctx.r11.u64 = ctx.r3.u64 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r10,92(r9)
	PPC_STORE_U8(ctx.r9.u32 + 92, ctx.r10.u8);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r8,36
	ctx.r4.s64 = ctx.r8.s64 + 36;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8237e958
	ctx.lr = 0x8237F31C;
	sub_8237E958(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicl r5,r6,8,56
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFF;
	// clrldi r4,r5,56
	ctx.r4.u64 = ctx.r5.u64 & 0xFF;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r3,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r3.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicl r8,r9,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// clrldi r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r6,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r6.u8);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// rldicl r11,r3,24,40
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 24) & 0xFFFFFF;
	// clrldi r10,r11,56
	ctx.r10.u64 = ctx.r11.u64 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r9,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r9.u8);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicl r5,r6,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// clrldi r4,r5,56
	ctx.r4.u64 = ctx.r5.u64 & 0xFF;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r3,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicl r8,r9,40,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 40) & 0xFFFFFFFFFF;
	// clrldi r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r6,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r6.u8);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// rldicl r11,r3,48,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 48) & 0xFFFFFFFFFFFF;
	// clrldi r10,r11,56
	ctx.r10.u64 = ctx.r11.u64 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r9,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r9.u8);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicl r5,r6,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r4,r5,56
	ctx.r4.u64 = ctx.r5.u64 & 0xFF;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// clrldi r8,r9,56
	ctx.r8.u64 = ctx.r9.u64 & 0xFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r7,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// rldicl r3,r4,8,56
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFF;
	// clrldi r11,r3,56
	ctx.r11.u64 = ctx.r3.u64 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r10,15(r9)
	PPC_STORE_U8(ctx.r9.u32 + 15, ctx.r10.u8);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r6,r7,16,48
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFF;
	// clrldi r5,r6,56
	ctx.r5.u64 = ctx.r6.u64 & 0xFF;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r4,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r4.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r9,r10,24,40
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 24) & 0xFFFFFF;
	// clrldi r8,r9,56
	ctx.r8.u64 = ctx.r9.u64 & 0xFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r7,13(r6)
	PPC_STORE_U8(ctx.r6.u32 + 13, ctx.r7.u8);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// rldicl r3,r4,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// clrldi r11,r3,56
	ctx.r11.u64 = ctx.r3.u64 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r10,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, ctx.r10.u8);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// rldicl r6,r7,40,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 40) & 0xFFFFFFFFFF;
	// clrldi r5,r6,56
	ctx.r5.u64 = ctx.r6.u64 & 0xFF;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r4,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r4.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r9,r10,48,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFFFFFFFFFF;
	// clrldi r8,r9,56
	ctx.r8.u64 = ctx.r9.u64 & 0xFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r7,10(r6)
	PPC_STORE_U8(ctx.r6.u32 + 10, ctx.r7.u8);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// rldicl r3,r4,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r11,r3,56
	ctx.r11.u64 = ctx.r3.u64 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r10,9(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9, ctx.r10.u8);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// clrldi r6,r7,56
	ctx.r6.u64 = ctx.r7.u64 & 0xFF;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r5,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, ctx.r5.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// clrldi r9,r10,56
	ctx.r9.u64 = ctx.r10.u64 & 0xFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r8,23(r7)
	PPC_STORE_U8(ctx.r7.u32 + 23, ctx.r8.u8);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// rldicl r4,r5,16,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFF;
	// clrldi r3,r4,56
	ctx.r3.u64 = ctx.r4.u64 & 0xFF;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r11,22(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// rldicl r7,r8,24,40
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 24) & 0xFFFFFF;
	// clrldi r6,r7,56
	ctx.r6.u64 = ctx.r7.u64 & 0xFF;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r5,21(r4)
	PPC_STORE_U8(ctx.r4.u32 + 21, ctx.r5.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// clrldi r9,r10,56
	ctx.r9.u64 = ctx.r10.u64 & 0xFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r8,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r8.u8);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// rldicl r4,r5,40,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 40) & 0xFFFFFFFFFF;
	// clrldi r3,r4,56
	ctx.r3.u64 = ctx.r4.u64 & 0xFF;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r11,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r11.u8);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// rldicl r7,r8,48,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 48) & 0xFFFFFFFFFFFF;
	// clrldi r6,r7,56
	ctx.r6.u64 = ctx.r7.u64 & 0xFF;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r5,18(r4)
	PPC_STORE_U8(ctx.r4.u32 + 18, ctx.r5.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicl r10,r11,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r9,r10,56
	ctx.r9.u64 = ctx.r10.u64 & 0xFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r8,17(r7)
	PPC_STORE_U8(ctx.r7.u32 + 17, ctx.r8.u8);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// clrldi r4,r5,56
	ctx.r4.u64 = ctx.r5.u64 & 0xFF;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r3,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r3.u8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237F5B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237F5C4"))) PPC_WEAK_FUNC(sub_8237F5C4);
PPC_FUNC_IMPL(__imp__sub_8237F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237F5C8"))) PPC_WEAK_FUNC(sub_8237F5C8);
PPC_FUNC_IMPL(__imp__sub_8237F5C8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8237f600
	if (ctx.cr6.lt) goto loc_8237F600;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x8237f600
	if (!ctx.cr6.lt) goto loc_8237F600;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// mulli r8,r9,104
	ctx.r8.s64 = ctx.r9.s64 * 104;
	// lis r7,-32183
	ctx.r7.s64 = -2109145088;
	// addi r6,r7,23992
	ctx.r6.s64 = ctx.r7.s64 + 23992;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8237f608
	if (!ctx.cr6.eq) goto loc_8237F608;
loc_8237F600:
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x8237f60c
	goto loc_8237F60C;
loc_8237F608:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237F60C:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237F610"))) PPC_WEAK_FUNC(sub_8237F610);
PPC_FUNC_IMPL(__imp__sub_8237F610) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26404
	ctx.r31.s64 = ctx.r11.s64 + 26404;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237F654;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,15120
	ctx.r3.s64 = ctx.r10.s64 + 15120;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237F678;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237F690"))) PPC_WEAK_FUNC(sub_8237F690);
PPC_FUNC_IMPL(__imp__sub_8237F690) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26460
	ctx.r31.s64 = ctx.r11.s64 + 26460;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237F6D4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,15312
	ctx.r3.s64 = ctx.r10.s64 + 15312;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237F6F8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237F710"))) PPC_WEAK_FUNC(sub_8237F710);
PPC_FUNC_IMPL(__imp__sub_8237F710) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26516
	ctx.r31.s64 = ctx.r11.s64 + 26516;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237F754;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,15504
	ctx.r3.s64 = ctx.r10.s64 + 15504;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237F778;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237F790"))) PPC_WEAK_FUNC(sub_8237F790);
PPC_FUNC_IMPL(__imp__sub_8237F790) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26572
	ctx.r31.s64 = ctx.r11.s64 + 26572;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237F7D4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,15696
	ctx.r3.s64 = ctx.r10.s64 + 15696;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237F7F8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237F810"))) PPC_WEAK_FUNC(sub_8237F810);
PPC_FUNC_IMPL(__imp__sub_8237F810) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26628
	ctx.r31.s64 = ctx.r11.s64 + 26628;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237F854;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,15888
	ctx.r3.s64 = ctx.r10.s64 + 15888;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237F878;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237F890"))) PPC_WEAK_FUNC(sub_8237F890);
PPC_FUNC_IMPL(__imp__sub_8237F890) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26684
	ctx.r31.s64 = ctx.r11.s64 + 26684;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237F8D4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,16080
	ctx.r3.s64 = ctx.r10.s64 + 16080;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237F8F8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237F910"))) PPC_WEAK_FUNC(sub_8237F910);
PPC_FUNC_IMPL(__imp__sub_8237F910) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26740
	ctx.r31.s64 = ctx.r11.s64 + 26740;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237F954;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,16272
	ctx.r3.s64 = ctx.r10.s64 + 16272;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237F978;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237F990"))) PPC_WEAK_FUNC(sub_8237F990);
PPC_FUNC_IMPL(__imp__sub_8237F990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r11,r11,26816
	ctx.r11.s64 = ctx.r11.s64 + 26816;
	// addi r9,r9,-32536
	ctx.r9.s64 = ctx.r9.s64 + -32536;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8237F9B0:
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// std r10,108(r11)
	PPC_STORE_U64(ctx.r11.u32 + 108, ctx.r10.u64);
	// std r10,116(r11)
	PPC_STORE_U64(ctx.r11.u32 + 116, ctx.r10.u64);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// sth r10,136(r11)
	PPC_STORE_U16(ctx.r11.u32 + 136, ctx.r10.u16);
	// sth r10,138(r11)
	PPC_STORE_U16(ctx.r11.u32 + 138, ctx.r10.u16);
	// stb r10,144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 144, ctx.r10.u8);
	// stb r10,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r10.u8);
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// std r10,228(r11)
	PPC_STORE_U64(ctx.r11.u32 + 228, ctx.r10.u64);
	// std r10,252(r11)
	PPC_STORE_U64(ctx.r11.u32 + 252, ctx.r10.u64);
	// std r10,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r10.u64);
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// std r10,284(r11)
	PPC_STORE_U64(ctx.r11.u32 + 284, ctx.r10.u64);
	// std r10,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r10.u64);
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// stw r10,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r10.u32);
	// stw r10,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r10.u32);
	// sth r10,312(r11)
	PPC_STORE_U16(ctx.r11.u32 + 312, ctx.r10.u16);
	// sth r10,314(r11)
	PPC_STORE_U16(ctx.r11.u32 + 314, ctx.r10.u16);
	// stb r10,320(r11)
	PPC_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
	// stw r9,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r9.u32);
	// stb r10,324(r11)
	PPC_STORE_U8(ctx.r11.u32 + 324, ctx.r10.u8);
	// stw r10,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r10.u32);
	// stw r10,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// stw r10,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// stw r10,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r10.u32);
	// std r10,404(r11)
	PPC_STORE_U64(ctx.r11.u32 + 404, ctx.r10.u64);
	// std r10,428(r11)
	PPC_STORE_U64(ctx.r11.u32 + 428, ctx.r10.u64);
	// std r10,444(r11)
	PPC_STORE_U64(ctx.r11.u32 + 444, ctx.r10.u64);
	// lwz r8,420(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r7.u32);
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// stw r10,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r10.u32);
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
	// std r10,460(r11)
	PPC_STORE_U64(ctx.r11.u32 + 460, ctx.r10.u64);
	// std r10,468(r11)
	PPC_STORE_U64(ctx.r11.u32 + 468, ctx.r10.u64);
	// stw r10,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r10.u32);
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// stw r10,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// sth r10,488(r11)
	PPC_STORE_U16(ctx.r11.u32 + 488, ctx.r10.u16);
	// sth r10,490(r11)
	PPC_STORE_U16(ctx.r11.u32 + 490, ctx.r10.u16);
	// stb r10,496(r11)
	PPC_STORE_U8(ctx.r11.u32 + 496, ctx.r10.u8);
	// stw r9,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r9.u32);
	// stb r10,500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 500, ctx.r10.u8);
	// stw r10,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r10.u32);
	// stw r10,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// stw r10,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// stw r10,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r10.u32);
	// std r10,580(r11)
	PPC_STORE_U64(ctx.r11.u32 + 580, ctx.r10.u64);
	// std r10,604(r11)
	PPC_STORE_U64(ctx.r11.u32 + 604, ctx.r10.u64);
	// std r10,620(r11)
	PPC_STORE_U64(ctx.r11.u32 + 620, ctx.r10.u64);
	// lwz r6,596(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// rlwinm r5,r6,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r5,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r5.u32);
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// stw r10,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r10.u32);
	// stw r10,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r10.u32);
	// std r10,636(r11)
	PPC_STORE_U64(ctx.r11.u32 + 636, ctx.r10.u64);
	// std r10,644(r11)
	PPC_STORE_U64(ctx.r11.u32 + 644, ctx.r10.u64);
	// stw r10,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r10.u32);
	// stw r10,656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 656, ctx.r10.u32);
	// stw r10,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r10.u32);
	// sth r10,664(r11)
	PPC_STORE_U16(ctx.r11.u32 + 664, ctx.r10.u16);
	// sth r10,666(r11)
	PPC_STORE_U16(ctx.r11.u32 + 666, ctx.r10.u16);
	// stb r10,672(r11)
	PPC_STORE_U8(ctx.r11.u32 + 672, ctx.r10.u8);
	// stw r9,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r9.u32);
	// stb r10,676(r11)
	PPC_STORE_U8(ctx.r11.u32 + 676, ctx.r10.u8);
	// stw r10,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r10.u32);
	// stw r10,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r10.u32);
	// stw r10,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r10.u32);
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
	// std r10,756(r11)
	PPC_STORE_U64(ctx.r11.u32 + 756, ctx.r10.u64);
	// std r10,780(r11)
	PPC_STORE_U64(ctx.r11.u32 + 780, ctx.r10.u64);
	// std r10,796(r11)
	PPC_STORE_U64(ctx.r11.u32 + 796, ctx.r10.u64);
	// lwz r4,772(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// rlwinm r3,r4,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r3,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r3.u32);
	// stw r10,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r10.u32);
	// stw r10,688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 688, ctx.r10.u32);
	// stw r10,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r10.u32);
	// stw r10,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r10.u32);
	// std r10,812(r11)
	PPC_STORE_U64(ctx.r11.u32 + 812, ctx.r10.u64);
	// std r10,820(r11)
	PPC_STORE_U64(ctx.r11.u32 + 820, ctx.r10.u64);
	// stw r10,828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 828, ctx.r10.u32);
	// stw r10,832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 832, ctx.r10.u32);
	// stw r10,836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 836, ctx.r10.u32);
	// sth r10,840(r11)
	PPC_STORE_U16(ctx.r11.u32 + 840, ctx.r10.u16);
	// sth r10,842(r11)
	PPC_STORE_U16(ctx.r11.u32 + 842, ctx.r10.u16);
	// stb r10,848(r11)
	PPC_STORE_U8(ctx.r11.u32 + 848, ctx.r10.u8);
	// stw r9,804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 804, ctx.r9.u32);
	// stb r10,852(r11)
	PPC_STORE_U8(ctx.r11.u32 + 852, ctx.r10.u8);
	// stw r10,860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 860, ctx.r10.u32);
	// stw r10,872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 872, ctx.r10.u32);
	// stw r10,876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 876, ctx.r10.u32);
	// stw r10,948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 948, ctx.r10.u32);
	// std r10,932(r11)
	PPC_STORE_U64(ctx.r11.u32 + 932, ctx.r10.u64);
	// std r10,956(r11)
	PPC_STORE_U64(ctx.r11.u32 + 956, ctx.r10.u64);
	// std r10,972(r11)
	PPC_STORE_U64(ctx.r11.u32 + 972, ctx.r10.u64);
	// lwz r8,948(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 948, ctx.r7.u32);
	// stw r10,868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 868, ctx.r10.u32);
	// stw r10,864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 864, ctx.r10.u32);
	// stw r10,884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 884, ctx.r10.u32);
	// stwu r10,880(r11)
	ea = 880 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8237f9b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237F9B0;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// b 0x8233bff8
	sub_8233BFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237FB94"))) PPC_WEAK_FUNC(sub_8237FB94);
PPC_FUNC_IMPL(__imp__sub_8237FB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FB98"))) PPC_WEAK_FUNC(sub_8237FB98);
PPC_FUNC_IMPL(__imp__sub_8237FB98) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,26796
	ctx.r3.s64 = ctx.r10.s64 + 26796;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FBD0;
	sub_82305000(ctx, base);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r3,r8,16544
	ctx.r3.s64 = ctx.r8.s64 + 16544;
	// bl 0x8233bff8
	ctx.lr = 0x8237FBDC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237FBEC"))) PPC_WEAK_FUNC(sub_8237FBEC);
PPC_FUNC_IMPL(__imp__sub_8237FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FBF0"))) PPC_WEAK_FUNC(sub_8237FBF0);
PPC_FUNC_IMPL(__imp__sub_8237FBF0) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,28656
	ctx.r3.s64 = ctx.r10.s64 + 28656;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FC28;
	sub_82305000(ctx, base);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r3,r8,16576
	ctx.r3.s64 = ctx.r8.s64 + 16576;
	// bl 0x8233bff8
	ctx.lr = 0x8237FC34;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237FC44"))) PPC_WEAK_FUNC(sub_8237FC44);
PPC_FUNC_IMPL(__imp__sub_8237FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FC48"))) PPC_WEAK_FUNC(sub_8237FC48);
PPC_FUNC_IMPL(__imp__sub_8237FC48) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,28676
	ctx.r31.s64 = ctx.r11.s64 + 28676;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FC8C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,16608
	ctx.r3.s64 = ctx.r10.s64 + 16608;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237FCB0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237FCC8"))) PPC_WEAK_FUNC(sub_8237FCC8);
PPC_FUNC_IMPL(__imp__sub_8237FCC8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,28732
	ctx.r31.s64 = ctx.r11.s64 + 28732;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FD0C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,16800
	ctx.r3.s64 = ctx.r10.s64 + 16800;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237FD30;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237FD48"))) PPC_WEAK_FUNC(sub_8237FD48);
PPC_FUNC_IMPL(__imp__sub_8237FD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8237FD50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,10608
	ctx.r31.s64 = ctx.r29.s64 + 10608;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FD84;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r30,10608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10608, ctx.r30.u32);
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237FDBC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237FDC4"))) PPC_WEAK_FUNC(sub_8237FDC4);
PPC_FUNC_IMPL(__imp__sub_8237FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237FDC8"))) PPC_WEAK_FUNC(sub_8237FDC8);
PPC_FUNC_IMPL(__imp__sub_8237FDC8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,28788
	ctx.r31.s64 = ctx.r11.s64 + 28788;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FE0C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,17184
	ctx.r3.s64 = ctx.r10.s64 + 17184;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237FE30;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237FE48"))) PPC_WEAK_FUNC(sub_8237FE48);
PPC_FUNC_IMPL(__imp__sub_8237FE48) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,28844
	ctx.r31.s64 = ctx.r11.s64 + 28844;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FE8C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,17376
	ctx.r3.s64 = ctx.r10.s64 + 17376;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237FEB0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237FEC8"))) PPC_WEAK_FUNC(sub_8237FEC8);
PPC_FUNC_IMPL(__imp__sub_8237FEC8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,28900
	ctx.r31.s64 = ctx.r11.s64 + 28900;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FF0C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,17568
	ctx.r3.s64 = ctx.r10.s64 + 17568;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237FF30;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237FF48"))) PPC_WEAK_FUNC(sub_8237FF48);
PPC_FUNC_IMPL(__imp__sub_8237FF48) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,28956
	ctx.r31.s64 = ctx.r11.s64 + 28956;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8237FF8C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,17760
	ctx.r3.s64 = ctx.r10.s64 + 17760;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8237FFB0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8237FFC8"))) PPC_WEAK_FUNC(sub_8237FFC8);
PPC_FUNC_IMPL(__imp__sub_8237FFC8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29012
	ctx.r31.s64 = ctx.r11.s64 + 29012;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238000C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,17952
	ctx.r3.s64 = ctx.r10.s64 + 17952;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380030;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380048"))) PPC_WEAK_FUNC(sub_82380048);
PPC_FUNC_IMPL(__imp__sub_82380048) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29068
	ctx.r31.s64 = ctx.r11.s64 + 29068;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238008C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,18144
	ctx.r3.s64 = ctx.r10.s64 + 18144;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823800B0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823800C8"))) PPC_WEAK_FUNC(sub_823800C8);
PPC_FUNC_IMPL(__imp__sub_823800C8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29124
	ctx.r31.s64 = ctx.r11.s64 + 29124;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238010C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,18336
	ctx.r3.s64 = ctx.r10.s64 + 18336;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380130;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380148"))) PPC_WEAK_FUNC(sub_82380148);
PPC_FUNC_IMPL(__imp__sub_82380148) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29180
	ctx.r31.s64 = ctx.r11.s64 + 29180;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238018C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,18528
	ctx.r3.s64 = ctx.r10.s64 + 18528;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823801B0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823801C8"))) PPC_WEAK_FUNC(sub_823801C8);
PPC_FUNC_IMPL(__imp__sub_823801C8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29236
	ctx.r31.s64 = ctx.r11.s64 + 29236;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238020C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,18720
	ctx.r3.s64 = ctx.r10.s64 + 18720;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380230;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380248"))) PPC_WEAK_FUNC(sub_82380248);
PPC_FUNC_IMPL(__imp__sub_82380248) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29296
	ctx.r31.s64 = ctx.r11.s64 + 29296;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238028C;
	sub_82305000(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// ori r7,r9,20
	ctx.r7.u64 = ctx.r9.u64 | 20;
	// ori r6,r8,24
	ctx.r6.u64 = ctx.r8.u64 | 24;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
loc_823802BC:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823802bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823802BC;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,18912
	ctx.r3.s64 = ctx.r11.s64 + 18912;
	// bl 0x8233bff8
	ctx.lr = 0x823802D4;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823802EC"))) PPC_WEAK_FUNC(sub_823802EC);
PPC_FUNC_IMPL(__imp__sub_823802EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823802F0"))) PPC_WEAK_FUNC(sub_823802F0);
PPC_FUNC_IMPL(__imp__sub_823802F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823802F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,10664
	ctx.r31.s64 = ctx.r29.s64 + 10664;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238032C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r30,10664(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10664, ctx.r30.u32);
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380364;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238036C"))) PPC_WEAK_FUNC(sub_8238036C);
PPC_FUNC_IMPL(__imp__sub_8238036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380370"))) PPC_WEAK_FUNC(sub_82380370);
PPC_FUNC_IMPL(__imp__sub_82380370) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29324
	ctx.r31.s64 = ctx.r11.s64 + 29324;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823803B4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,19136
	ctx.r3.s64 = ctx.r10.s64 + 19136;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823803D8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823803F0"))) PPC_WEAK_FUNC(sub_823803F0);
PPC_FUNC_IMPL(__imp__sub_823803F0) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29380
	ctx.r31.s64 = ctx.r11.s64 + 29380;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380434;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,19328
	ctx.r3.s64 = ctx.r10.s64 + 19328;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380458;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380470"))) PPC_WEAK_FUNC(sub_82380470);
PPC_FUNC_IMPL(__imp__sub_82380470) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29436
	ctx.r31.s64 = ctx.r11.s64 + 29436;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823804B4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,19520
	ctx.r3.s64 = ctx.r10.s64 + 19520;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823804D8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823804F0"))) PPC_WEAK_FUNC(sub_823804F0);
PPC_FUNC_IMPL(__imp__sub_823804F0) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29496
	ctx.r31.s64 = ctx.r11.s64 + 29496;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380534;
	sub_82305000(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ori r7,r9,32788
	ctx.r7.u64 = ctx.r9.u64 | 32788;
	// ori r6,r8,32792
	ctx.r6.u64 = ctx.r8.u64 | 32792;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
loc_82380564:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82380564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82380564;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,19712
	ctx.r3.s64 = ctx.r11.s64 + 19712;
	// bl 0x8233bff8
	ctx.lr = 0x8238057C;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380594"))) PPC_WEAK_FUNC(sub_82380594);
PPC_FUNC_IMPL(__imp__sub_82380594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380598"))) PPC_WEAK_FUNC(sub_82380598);
PPC_FUNC_IMPL(__imp__sub_82380598) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-3244
	ctx.r31.s64 = ctx.r11.s64 + -3244;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823805DC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,19744
	ctx.r3.s64 = ctx.r10.s64 + 19744;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380600;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380618"))) PPC_WEAK_FUNC(sub_82380618);
PPC_FUNC_IMPL(__imp__sub_82380618) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-3188
	ctx.r31.s64 = ctx.r11.s64 + -3188;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238065C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,19936
	ctx.r3.s64 = ctx.r10.s64 + 19936;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380680;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380698"))) PPC_WEAK_FUNC(sub_82380698);
PPC_FUNC_IMPL(__imp__sub_82380698) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-3132
	ctx.r31.s64 = ctx.r11.s64 + -3132;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823806DC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,20128
	ctx.r3.s64 = ctx.r10.s64 + 20128;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380700;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380718"))) PPC_WEAK_FUNC(sub_82380718);
PPC_FUNC_IMPL(__imp__sub_82380718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,35
	ctx.r10.s64 = 35;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,-3072
	ctx.r11.s64 = ctx.r11.s64 + -3072;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82380730:
	// stwu r10,96(r11)
	ea = 96 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82380730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82380730;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,20320
	ctx.r3.s64 = ctx.r11.s64 + 20320;
	// b 0x8233bff8
	sub_8233BFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82380744"))) PPC_WEAK_FUNC(sub_82380744);
PPC_FUNC_IMPL(__imp__sub_82380744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380748"))) PPC_WEAK_FUNC(sub_82380748);
PPC_FUNC_IMPL(__imp__sub_82380748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82380760:
	// stwu r10,92(r11)
	ea = 92 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82380760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82380760;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x8233bff8
	sub_8233BFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82380774"))) PPC_WEAK_FUNC(sub_82380774);
PPC_FUNC_IMPL(__imp__sub_82380774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380778"))) PPC_WEAK_FUNC(sub_82380778);
PPC_FUNC_IMPL(__imp__sub_82380778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82380780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,10720
	ctx.r31.s64 = ctx.r29.s64 + 10720;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823807B4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r30,10720(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10720, ctx.r30.u32);
	// addi r3,r11,20336
	ctx.r3.s64 = ctx.r11.s64 + 20336;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823807EC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823807F4"))) PPC_WEAK_FUNC(sub_823807F4);
PPC_FUNC_IMPL(__imp__sub_823807F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823807F8"))) PPC_WEAK_FUNC(sub_823807F8);
PPC_FUNC_IMPL(__imp__sub_823807F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,2732
	ctx.r31.s64 = ctx.r11.s64 + 2732;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238083C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,20528
	ctx.r3.s64 = ctx.r10.s64 + 20528;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380860;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380878"))) PPC_WEAK_FUNC(sub_82380878);
PPC_FUNC_IMPL(__imp__sub_82380878) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,2788
	ctx.r31.s64 = ctx.r11.s64 + 2788;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823808C8;
	sub_82305000(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,20720
	ctx.r3.s64 = ctx.r10.s64 + 20720;
	// bl 0x8233bff8
	ctx.lr = 0x823808D8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823808F0"))) PPC_WEAK_FUNC(sub_823808F0);
PPC_FUNC_IMPL(__imp__sub_823808F0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,2832
	ctx.r31.s64 = ctx.r11.s64 + 2832;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380940;
	sub_82305000(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,20808
	ctx.r3.s64 = ctx.r10.s64 + 20808;
	// bl 0x8233bff8
	ctx.lr = 0x82380950;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380968"))) PPC_WEAK_FUNC(sub_82380968);
PPC_FUNC_IMPL(__imp__sub_82380968) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,2876
	ctx.r31.s64 = ctx.r11.s64 + 2876;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823809B8;
	sub_82305000(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,20896
	ctx.r3.s64 = ctx.r10.s64 + 20896;
	// bl 0x8233bff8
	ctx.lr = 0x823809C8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823809E0"))) PPC_WEAK_FUNC(sub_823809E0);
PPC_FUNC_IMPL(__imp__sub_823809E0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,2920
	ctx.r31.s64 = ctx.r11.s64 + 2920;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380A30;
	sub_82305000(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,20984
	ctx.r3.s64 = ctx.r10.s64 + 20984;
	// bl 0x8233bff8
	ctx.lr = 0x82380A40;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380A58"))) PPC_WEAK_FUNC(sub_82380A58);
PPC_FUNC_IMPL(__imp__sub_82380A58) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,2964
	ctx.r31.s64 = ctx.r11.s64 + 2964;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380AA4;
	sub_82305000(ctx, base);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21072
	ctx.r3.s64 = ctx.r10.s64 + 21072;
	// bl 0x8233bff8
	ctx.lr = 0x82380AB4;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380ACC"))) PPC_WEAK_FUNC(sub_82380ACC);
PPC_FUNC_IMPL(__imp__sub_82380ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380AD0"))) PPC_WEAK_FUNC(sub_82380AD0);
PPC_FUNC_IMPL(__imp__sub_82380AD0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3004
	ctx.r31.s64 = ctx.r11.s64 + 3004;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380B1C;
	sub_82305000(ctx, base);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21160
	ctx.r3.s64 = ctx.r10.s64 + 21160;
	// bl 0x8233bff8
	ctx.lr = 0x82380B2C;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380B44"))) PPC_WEAK_FUNC(sub_82380B44);
PPC_FUNC_IMPL(__imp__sub_82380B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380B48"))) PPC_WEAK_FUNC(sub_82380B48);
PPC_FUNC_IMPL(__imp__sub_82380B48) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3044
	ctx.r31.s64 = ctx.r11.s64 + 3044;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380B98;
	sub_82305000(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21248
	ctx.r3.s64 = ctx.r10.s64 + 21248;
	// bl 0x8233bff8
	ctx.lr = 0x82380BA8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380BC0"))) PPC_WEAK_FUNC(sub_82380BC0);
PPC_FUNC_IMPL(__imp__sub_82380BC0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3088
	ctx.r31.s64 = ctx.r11.s64 + 3088;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380C10;
	sub_82305000(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21264
	ctx.r3.s64 = ctx.r10.s64 + 21264;
	// bl 0x8233bff8
	ctx.lr = 0x82380C20;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380C38"))) PPC_WEAK_FUNC(sub_82380C38);
PPC_FUNC_IMPL(__imp__sub_82380C38) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3132
	ctx.r31.s64 = ctx.r11.s64 + 3132;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380C88;
	sub_82305000(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21280
	ctx.r3.s64 = ctx.r10.s64 + 21280;
	// bl 0x8233bff8
	ctx.lr = 0x82380C98;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380CB0"))) PPC_WEAK_FUNC(sub_82380CB0);
PPC_FUNC_IMPL(__imp__sub_82380CB0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3176
	ctx.r31.s64 = ctx.r11.s64 + 3176;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380D00;
	sub_82305000(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21296
	ctx.r3.s64 = ctx.r10.s64 + 21296;
	// bl 0x8233bff8
	ctx.lr = 0x82380D10;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380D28"))) PPC_WEAK_FUNC(sub_82380D28);
PPC_FUNC_IMPL(__imp__sub_82380D28) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3220
	ctx.r31.s64 = ctx.r11.s64 + 3220;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380D74;
	sub_82305000(ctx, base);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21312
	ctx.r3.s64 = ctx.r10.s64 + 21312;
	// bl 0x8233bff8
	ctx.lr = 0x82380D84;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380D9C"))) PPC_WEAK_FUNC(sub_82380D9C);
PPC_FUNC_IMPL(__imp__sub_82380D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380DA0"))) PPC_WEAK_FUNC(sub_82380DA0);
PPC_FUNC_IMPL(__imp__sub_82380DA0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3260
	ctx.r31.s64 = ctx.r11.s64 + 3260;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
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
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380DEC;
	sub_82305000(ctx, base);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21328
	ctx.r3.s64 = ctx.r10.s64 + 21328;
	// bl 0x8233bff8
	ctx.lr = 0x82380DFC;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380E14"))) PPC_WEAK_FUNC(sub_82380E14);
PPC_FUNC_IMPL(__imp__sub_82380E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380E18"))) PPC_WEAK_FUNC(sub_82380E18);
PPC_FUNC_IMPL(__imp__sub_82380E18) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3300
	ctx.r31.s64 = ctx.r11.s64 + 3300;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380E5C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,21344
	ctx.r3.s64 = ctx.r10.s64 + 21344;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380E80;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380E98"))) PPC_WEAK_FUNC(sub_82380E98);
PPC_FUNC_IMPL(__imp__sub_82380E98) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3356
	ctx.r31.s64 = ctx.r11.s64 + 3356;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82380EDC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,21536
	ctx.r3.s64 = ctx.r10.s64 + 21536;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82380F00;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82380F18"))) PPC_WEAK_FUNC(sub_82380F18);
PPC_FUNC_IMPL(__imp__sub_82380F18) {
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
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,3412
	ctx.r3.s64 = ctx.r10.s64 + 3412;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x82380F50;
	sub_82305000(ctx, base);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r3,r8,21728
	ctx.r3.s64 = ctx.r8.s64 + 21728;
	// bl 0x8233bff8
	ctx.lr = 0x82380F5C;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380F6C"))) PPC_WEAK_FUNC(sub_82380F6C);
PPC_FUNC_IMPL(__imp__sub_82380F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380F70"))) PPC_WEAK_FUNC(sub_82380F70);
PPC_FUNC_IMPL(__imp__sub_82380F70) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r3,r11,3432
	ctx.r3.s64 = ctx.r11.s64 + 3432;
	// bl 0x82117178
	ctx.lr = 0x82380F88;
	sub_82117178(ctx, base);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21760
	ctx.r3.s64 = ctx.r10.s64 + 21760;
	// bl 0x8233bff8
	ctx.lr = 0x82380F94;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380FA4"))) PPC_WEAK_FUNC(sub_82380FA4);
PPC_FUNC_IMPL(__imp__sub_82380FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380FA8"))) PPC_WEAK_FUNC(sub_82380FA8);
PPC_FUNC_IMPL(__imp__sub_82380FA8) {
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
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,3444
	ctx.r3.s64 = ctx.r10.s64 + 3444;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x82380FE0;
	sub_82305000(ctx, base);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r3,r8,21792
	ctx.r3.s64 = ctx.r8.s64 + 21792;
	// bl 0x8233bff8
	ctx.lr = 0x82380FEC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380FFC"))) PPC_WEAK_FUNC(sub_82380FFC);
PPC_FUNC_IMPL(__imp__sub_82380FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381000"))) PPC_WEAK_FUNC(sub_82381000);
PPC_FUNC_IMPL(__imp__sub_82381000) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r3,r11,3464
	ctx.r3.s64 = ctx.r11.s64 + 3464;
	// bl 0x82117178
	ctx.lr = 0x82381018;
	sub_82117178(ctx, base);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r3,r10,21824
	ctx.r3.s64 = ctx.r10.s64 + 21824;
	// bl 0x8233bff8
	ctx.lr = 0x82381024;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381034"))) PPC_WEAK_FUNC(sub_82381034);
PPC_FUNC_IMPL(__imp__sub_82381034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381038"))) PPC_WEAK_FUNC(sub_82381038);
PPC_FUNC_IMPL(__imp__sub_82381038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// addi r11,r11,3480
	ctx.r11.s64 = ctx.r11.s64 + 3480;
	// li r7,15
	ctx.r7.s64 = 15;
	// addi r11,r11,117
	ctx.r11.s64 = ctx.r11.s64 + 117;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
loc_82381060:
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,-117(r11)
	PPC_STORE_U32(ctx.r11.u32 + -117, ctx.r10.u32);
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// addi r9,r11,-65
	ctx.r9.s64 = ctx.r11.s64 + -65;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82381078:
	// stw r10,-32(r9)
	PPC_STORE_U32(ctx.r9.u32 + -32, ctx.r10.u32);
	// stw r10,-20(r9)
	PPC_STORE_U32(ctx.r9.u32 + -20, ctx.r10.u32);
	// stw r10,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r10.u32);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82381078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381078;
	// stfs f12,-49(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -49, temp.u32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stfs f0,-45(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -45, temp.u32);
	// stfs f13,-41(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -41, temp.u32);
	// stfs f13,-37(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -37, temp.u32);
	// stfs f12,-33(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -33, temp.u32);
	// stfs f12,-29(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29, temp.u32);
	// stfs f13,-25(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -25, temp.u32);
	// stfs f0,-21(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -21, temp.u32);
	// stfs f0,-17(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -17, temp.u32);
	// stfs f0,-13(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -13, temp.u32);
	// stfs f0,-9(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -9, temp.u32);
	// stfs f13,-5(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -5, temp.u32);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bge 0x82381060
	if (!ctx.cr0.lt) goto loc_82381060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823810CC"))) PPC_WEAK_FUNC(sub_823810CC);
PPC_FUNC_IMPL(__imp__sub_823810CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823810D0"))) PPC_WEAK_FUNC(sub_823810D0);
PPC_FUNC_IMPL(__imp__sub_823810D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5400
	ctx.r11.s64 = ctx.r11.s64 + 5400;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823810E8:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823810e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823810E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823810F8"))) PPC_WEAK_FUNC(sub_823810F8);
PPC_FUNC_IMPL(__imp__sub_823810F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5528
	ctx.r31.s64 = ctx.r11.s64 + 5528;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238113C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,21856
	ctx.r3.s64 = ctx.r10.s64 + 21856;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381160;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381178"))) PPC_WEAK_FUNC(sub_82381178);
PPC_FUNC_IMPL(__imp__sub_82381178) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5584
	ctx.r31.s64 = ctx.r11.s64 + 5584;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823811BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,22048
	ctx.r3.s64 = ctx.r10.s64 + 22048;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823811E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823811F8"))) PPC_WEAK_FUNC(sub_823811F8);
PPC_FUNC_IMPL(__imp__sub_823811F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5640
	ctx.r31.s64 = ctx.r11.s64 + 5640;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238123C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,22240
	ctx.r3.s64 = ctx.r10.s64 + 22240;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381260;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381278"))) PPC_WEAK_FUNC(sub_82381278);
PPC_FUNC_IMPL(__imp__sub_82381278) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5696
	ctx.r31.s64 = ctx.r11.s64 + 5696;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823812BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,22432
	ctx.r3.s64 = ctx.r10.s64 + 22432;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823812E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823812F8"))) PPC_WEAK_FUNC(sub_823812F8);
PPC_FUNC_IMPL(__imp__sub_823812F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5752
	ctx.r31.s64 = ctx.r11.s64 + 5752;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238133C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,22624
	ctx.r3.s64 = ctx.r10.s64 + 22624;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381360;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381378"))) PPC_WEAK_FUNC(sub_82381378);
PPC_FUNC_IMPL(__imp__sub_82381378) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5808
	ctx.r31.s64 = ctx.r11.s64 + 5808;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823813BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,22816
	ctx.r3.s64 = ctx.r10.s64 + 22816;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823813E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823813F8"))) PPC_WEAK_FUNC(sub_823813F8);
PPC_FUNC_IMPL(__imp__sub_823813F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5864
	ctx.r31.s64 = ctx.r11.s64 + 5864;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238143C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,23008
	ctx.r3.s64 = ctx.r10.s64 + 23008;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381460;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381478"))) PPC_WEAK_FUNC(sub_82381478);
PPC_FUNC_IMPL(__imp__sub_82381478) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5920
	ctx.r31.s64 = ctx.r11.s64 + 5920;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823814BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,23200
	ctx.r3.s64 = ctx.r10.s64 + 23200;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823814E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823814F8"))) PPC_WEAK_FUNC(sub_823814F8);
PPC_FUNC_IMPL(__imp__sub_823814F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5976
	ctx.r31.s64 = ctx.r11.s64 + 5976;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238153C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,23392
	ctx.r3.s64 = ctx.r10.s64 + 23392;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381560;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381578"))) PPC_WEAK_FUNC(sub_82381578);
PPC_FUNC_IMPL(__imp__sub_82381578) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6032
	ctx.r31.s64 = ctx.r11.s64 + 6032;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823815BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,23584
	ctx.r3.s64 = ctx.r10.s64 + 23584;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823815E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823815F8"))) PPC_WEAK_FUNC(sub_823815F8);
PPC_FUNC_IMPL(__imp__sub_823815F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6088
	ctx.r31.s64 = ctx.r11.s64 + 6088;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238163C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,23776
	ctx.r3.s64 = ctx.r10.s64 + 23776;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381660;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381678"))) PPC_WEAK_FUNC(sub_82381678);
PPC_FUNC_IMPL(__imp__sub_82381678) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6144
	ctx.r31.s64 = ctx.r11.s64 + 6144;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823816BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,23968
	ctx.r3.s64 = ctx.r10.s64 + 23968;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823816E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823816F8"))) PPC_WEAK_FUNC(sub_823816F8);
PPC_FUNC_IMPL(__imp__sub_823816F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6200
	ctx.r31.s64 = ctx.r11.s64 + 6200;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238173C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,24160
	ctx.r3.s64 = ctx.r10.s64 + 24160;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381760;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381778"))) PPC_WEAK_FUNC(sub_82381778);
PPC_FUNC_IMPL(__imp__sub_82381778) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6256
	ctx.r31.s64 = ctx.r11.s64 + 6256;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823817BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,24352
	ctx.r3.s64 = ctx.r10.s64 + 24352;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823817E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823817F8"))) PPC_WEAK_FUNC(sub_823817F8);
PPC_FUNC_IMPL(__imp__sub_823817F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6312
	ctx.r31.s64 = ctx.r11.s64 + 6312;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238183C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,24544
	ctx.r3.s64 = ctx.r10.s64 + 24544;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381860;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381878"))) PPC_WEAK_FUNC(sub_82381878);
PPC_FUNC_IMPL(__imp__sub_82381878) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6368
	ctx.r31.s64 = ctx.r11.s64 + 6368;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823818BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,24736
	ctx.r3.s64 = ctx.r10.s64 + 24736;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823818E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823818F8"))) PPC_WEAK_FUNC(sub_823818F8);
PPC_FUNC_IMPL(__imp__sub_823818F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6424
	ctx.r31.s64 = ctx.r11.s64 + 6424;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238193C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,24928
	ctx.r3.s64 = ctx.r10.s64 + 24928;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381960;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381978"))) PPC_WEAK_FUNC(sub_82381978);
PPC_FUNC_IMPL(__imp__sub_82381978) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6480
	ctx.r31.s64 = ctx.r11.s64 + 6480;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823819BC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,25120
	ctx.r3.s64 = ctx.r10.s64 + 25120;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823819E0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823819F8"))) PPC_WEAK_FUNC(sub_823819F8);
PPC_FUNC_IMPL(__imp__sub_823819F8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6536
	ctx.r31.s64 = ctx.r11.s64 + 6536;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381A3C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,25312
	ctx.r3.s64 = ctx.r10.s64 + 25312;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381A60;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381A78"))) PPC_WEAK_FUNC(sub_82381A78);
PPC_FUNC_IMPL(__imp__sub_82381A78) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6592
	ctx.r31.s64 = ctx.r11.s64 + 6592;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381ABC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,25504
	ctx.r3.s64 = ctx.r10.s64 + 25504;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381AE0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381AF8"))) PPC_WEAK_FUNC(sub_82381AF8);
PPC_FUNC_IMPL(__imp__sub_82381AF8) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6648
	ctx.r31.s64 = ctx.r11.s64 + 6648;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381B3C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,25696
	ctx.r3.s64 = ctx.r10.s64 + 25696;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381B60;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381B78"))) PPC_WEAK_FUNC(sub_82381B78);
PPC_FUNC_IMPL(__imp__sub_82381B78) {
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
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,6704
	ctx.r3.s64 = ctx.r10.s64 + 6704;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x82381BB0;
	sub_82305000(ctx, base);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r3,r8,25888
	ctx.r3.s64 = ctx.r8.s64 + 25888;
	// bl 0x8233bff8
	ctx.lr = 0x82381BBC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381BCC"))) PPC_WEAK_FUNC(sub_82381BCC);
PPC_FUNC_IMPL(__imp__sub_82381BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381BD0"))) PPC_WEAK_FUNC(sub_82381BD0);
PPC_FUNC_IMPL(__imp__sub_82381BD0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6724
	ctx.r31.s64 = ctx.r11.s64 + 6724;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381C14;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,25920
	ctx.r3.s64 = ctx.r10.s64 + 25920;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381C38;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381C50"))) PPC_WEAK_FUNC(sub_82381C50);
PPC_FUNC_IMPL(__imp__sub_82381C50) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6780
	ctx.r31.s64 = ctx.r11.s64 + 6780;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381C94;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,26112
	ctx.r3.s64 = ctx.r10.s64 + 26112;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381CB8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381CD0"))) PPC_WEAK_FUNC(sub_82381CD0);
PPC_FUNC_IMPL(__imp__sub_82381CD0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6836
	ctx.r31.s64 = ctx.r11.s64 + 6836;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381D14;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,26304
	ctx.r3.s64 = ctx.r10.s64 + 26304;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381D38;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381D50"))) PPC_WEAK_FUNC(sub_82381D50);
PPC_FUNC_IMPL(__imp__sub_82381D50) {
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
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,6892
	ctx.r3.s64 = ctx.r10.s64 + 6892;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x82381D88;
	sub_82305000(ctx, base);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r3,r8,26496
	ctx.r3.s64 = ctx.r8.s64 + 26496;
	// bl 0x8233bff8
	ctx.lr = 0x82381D94;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381DA4"))) PPC_WEAK_FUNC(sub_82381DA4);
PPC_FUNC_IMPL(__imp__sub_82381DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381DA8"))) PPC_WEAK_FUNC(sub_82381DA8);
PPC_FUNC_IMPL(__imp__sub_82381DA8) {
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
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,6912
	ctx.r3.s64 = ctx.r10.s64 + 6912;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x82381DE0;
	sub_82305000(ctx, base);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r3,r8,26528
	ctx.r3.s64 = ctx.r8.s64 + 26528;
	// bl 0x8233bff8
	ctx.lr = 0x82381DEC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381DFC"))) PPC_WEAK_FUNC(sub_82381DFC);
PPC_FUNC_IMPL(__imp__sub_82381DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381E00"))) PPC_WEAK_FUNC(sub_82381E00);
PPC_FUNC_IMPL(__imp__sub_82381E00) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6936
	ctx.r31.s64 = ctx.r11.s64 + 6936;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381E44;
	sub_82305000(ctx, base);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// li r10,24576
	ctx.r10.s64 = 24576;
	// ori r7,r9,20
	ctx.r7.u64 = ctx.r9.u64 | 20;
	// ori r6,r8,24
	ctx.r6.u64 = ctx.r8.u64 | 24;
	// li r9,24576
	ctx.r9.s64 = 24576;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
loc_82381E74:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82381e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381E74;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,26560
	ctx.r3.s64 = ctx.r11.s64 + 26560;
	// bl 0x8233bff8
	ctx.lr = 0x82381E8C;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381EA4"))) PPC_WEAK_FUNC(sub_82381EA4);
PPC_FUNC_IMPL(__imp__sub_82381EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381EA8"))) PPC_WEAK_FUNC(sub_82381EA8);
PPC_FUNC_IMPL(__imp__sub_82381EA8) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6964
	ctx.r31.s64 = ctx.r11.s64 + 6964;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381EEC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,26592
	ctx.r3.s64 = ctx.r10.s64 + 26592;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381F10;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381F28"))) PPC_WEAK_FUNC(sub_82381F28);
PPC_FUNC_IMPL(__imp__sub_82381F28) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7020
	ctx.r31.s64 = ctx.r11.s64 + 7020;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381F6C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,26784
	ctx.r3.s64 = ctx.r10.s64 + 26784;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82381F90;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82381FA8"))) PPC_WEAK_FUNC(sub_82381FA8);
PPC_FUNC_IMPL(__imp__sub_82381FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82381FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,10776
	ctx.r31.s64 = ctx.r29.s64 + 10776;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82381FE4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r30,10776(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10776, ctx.r30.u32);
	// addi r3,r11,26976
	ctx.r3.s64 = ctx.r11.s64 + 26976;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8238201C;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382024"))) PPC_WEAK_FUNC(sub_82382024);
PPC_FUNC_IMPL(__imp__sub_82382024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382028"))) PPC_WEAK_FUNC(sub_82382028);
PPC_FUNC_IMPL(__imp__sub_82382028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82382030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,10832
	ctx.r31.s64 = ctx.r29.s64 + 10832;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382064;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r30,10832(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10832, ctx.r30.u32);
	// addi r3,r11,27168
	ctx.r3.s64 = ctx.r11.s64 + 27168;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x8238209C;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823820A4"))) PPC_WEAK_FUNC(sub_823820A4);
PPC_FUNC_IMPL(__imp__sub_823820A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823820A8"))) PPC_WEAK_FUNC(sub_823820A8);
PPC_FUNC_IMPL(__imp__sub_823820A8) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7080
	ctx.r31.s64 = ctx.r11.s64 + 7080;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823820EC;
	sub_82305000(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// ori r7,r9,20
	ctx.r7.u64 = ctx.r9.u64 | 20;
	// ori r6,r8,24
	ctx.r6.u64 = ctx.r8.u64 | 24;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
loc_8238211C:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8238211c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238211C;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,27360
	ctx.r3.s64 = ctx.r11.s64 + 27360;
	// bl 0x8233bff8
	ctx.lr = 0x82382134;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_8238214C"))) PPC_WEAK_FUNC(sub_8238214C);
PPC_FUNC_IMPL(__imp__sub_8238214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382150"))) PPC_WEAK_FUNC(sub_82382150);
PPC_FUNC_IMPL(__imp__sub_82382150) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7108
	ctx.r31.s64 = ctx.r11.s64 + 7108;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382194;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,27392
	ctx.r3.s64 = ctx.r10.s64 + 27392;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823821B8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823821D0"))) PPC_WEAK_FUNC(sub_823821D0);
PPC_FUNC_IMPL(__imp__sub_823821D0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382214;
	sub_82305000(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82382234:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82382234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82382234;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,27584
	ctx.r3.s64 = ctx.r11.s64 + 27584;
	// bl 0x8233bff8
	ctx.lr = 0x8238224C;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382264"))) PPC_WEAK_FUNC(sub_82382264);
PPC_FUNC_IMPL(__imp__sub_82382264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382268"))) PPC_WEAK_FUNC(sub_82382268);
PPC_FUNC_IMPL(__imp__sub_82382268) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7452
	ctx.r31.s64 = ctx.r11.s64 + 7452;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823822AC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,27616
	ctx.r3.s64 = ctx.r10.s64 + 27616;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823822D0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823822E8"))) PPC_WEAK_FUNC(sub_823822E8);
PPC_FUNC_IMPL(__imp__sub_823822E8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7508
	ctx.r31.s64 = ctx.r11.s64 + 7508;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238232C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,27808
	ctx.r3.s64 = ctx.r10.s64 + 27808;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382350;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382368"))) PPC_WEAK_FUNC(sub_82382368);
PPC_FUNC_IMPL(__imp__sub_82382368) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7564
	ctx.r31.s64 = ctx.r11.s64 + 7564;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823823AC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,28000
	ctx.r3.s64 = ctx.r10.s64 + 28000;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823823D0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823823E8"))) PPC_WEAK_FUNC(sub_823823E8);
PPC_FUNC_IMPL(__imp__sub_823823E8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7620
	ctx.r31.s64 = ctx.r11.s64 + 7620;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238242C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,28192
	ctx.r3.s64 = ctx.r10.s64 + 28192;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382450;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382468"))) PPC_WEAK_FUNC(sub_82382468);
PPC_FUNC_IMPL(__imp__sub_82382468) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7676
	ctx.r31.s64 = ctx.r11.s64 + 7676;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823824AC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,28384
	ctx.r3.s64 = ctx.r10.s64 + 28384;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823824D0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823824E8"))) PPC_WEAK_FUNC(sub_823824E8);
PPC_FUNC_IMPL(__imp__sub_823824E8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7732
	ctx.r31.s64 = ctx.r11.s64 + 7732;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238252C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,28576
	ctx.r3.s64 = ctx.r10.s64 + 28576;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382550;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382568"))) PPC_WEAK_FUNC(sub_82382568);
PPC_FUNC_IMPL(__imp__sub_82382568) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7788
	ctx.r31.s64 = ctx.r11.s64 + 7788;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823825AC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,28768
	ctx.r3.s64 = ctx.r10.s64 + 28768;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823825D0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823825E8"))) PPC_WEAK_FUNC(sub_823825E8);
PPC_FUNC_IMPL(__imp__sub_823825E8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7844
	ctx.r31.s64 = ctx.r11.s64 + 7844;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238262C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,28960
	ctx.r3.s64 = ctx.r10.s64 + 28960;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382650;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382668"))) PPC_WEAK_FUNC(sub_82382668);
PPC_FUNC_IMPL(__imp__sub_82382668) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7900
	ctx.r31.s64 = ctx.r11.s64 + 7900;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823826AC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,29152
	ctx.r3.s64 = ctx.r10.s64 + 29152;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823826D0;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823826E8"))) PPC_WEAK_FUNC(sub_823826E8);
PPC_FUNC_IMPL(__imp__sub_823826E8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,7956
	ctx.r31.s64 = ctx.r11.s64 + 7956;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238272C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,29344
	ctx.r3.s64 = ctx.r10.s64 + 29344;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382750;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382768"))) PPC_WEAK_FUNC(sub_82382768);
PPC_FUNC_IMPL(__imp__sub_82382768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82382770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,10888
	ctx.r31.s64 = ctx.r29.s64 + 10888;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823827A4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r30,10888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10888, ctx.r30.u32);
	// addi r3,r11,29536
	ctx.r3.s64 = ctx.r11.s64 + 29536;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823827DC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823827E4"))) PPC_WEAK_FUNC(sub_823827E4);
PPC_FUNC_IMPL(__imp__sub_823827E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823827E8"))) PPC_WEAK_FUNC(sub_823827E8);
PPC_FUNC_IMPL(__imp__sub_823827E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,8032
	ctx.r5.s64 = ctx.r10.s64 + 8032;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lis r4,-32200
	ctx.r4.s64 = -2110259200;
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// stw r9,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r9.u32);
	// stw r8,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r8.u32);
	// addi r3,r4,29776
	ctx.r3.s64 = ctx.r4.s64 + 29776;
	// stb r7,32(r5)
	PPC_STORE_U8(ctx.r5.u32 + 32, ctx.r7.u8);
	// stw r6,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r6.u32);
	// stw r11,176(r5)
	PPC_STORE_U32(ctx.r5.u32 + 176, ctx.r11.u32);
	// stw r10,192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 192, ctx.r10.u32);
	// stw r9,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r9.u32);
	// stw r8,200(r5)
	PPC_STORE_U32(ctx.r5.u32 + 200, ctx.r8.u32);
	// stb r7,204(r5)
	PPC_STORE_U8(ctx.r5.u32 + 204, ctx.r7.u8);
	// stw r6,208(r5)
	PPC_STORE_U32(ctx.r5.u32 + 208, ctx.r6.u32);
	// stw r11,348(r5)
	PPC_STORE_U32(ctx.r5.u32 + 348, ctx.r11.u32);
	// stw r10,364(r5)
	PPC_STORE_U32(ctx.r5.u32 + 364, ctx.r10.u32);
	// stw r9,368(r5)
	PPC_STORE_U32(ctx.r5.u32 + 368, ctx.r9.u32);
	// stw r8,372(r5)
	PPC_STORE_U32(ctx.r5.u32 + 372, ctx.r8.u32);
	// stb r7,376(r5)
	PPC_STORE_U8(ctx.r5.u32 + 376, ctx.r7.u8);
	// stw r6,380(r5)
	PPC_STORE_U32(ctx.r5.u32 + 380, ctx.r6.u32);
	// stw r11,520(r5)
	PPC_STORE_U32(ctx.r5.u32 + 520, ctx.r11.u32);
	// stw r10,536(r5)
	PPC_STORE_U32(ctx.r5.u32 + 536, ctx.r10.u32);
	// stw r9,540(r5)
	PPC_STORE_U32(ctx.r5.u32 + 540, ctx.r9.u32);
	// stw r8,544(r5)
	PPC_STORE_U32(ctx.r5.u32 + 544, ctx.r8.u32);
	// stb r7,548(r5)
	PPC_STORE_U8(ctx.r5.u32 + 548, ctx.r7.u8);
	// stw r6,552(r5)
	PPC_STORE_U32(ctx.r5.u32 + 552, ctx.r6.u32);
	// b 0x8233bff8
	sub_8233BFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382874"))) PPC_WEAK_FUNC(sub_82382874);
PPC_FUNC_IMPL(__imp__sub_82382874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382878"))) PPC_WEAK_FUNC(sub_82382878);
PPC_FUNC_IMPL(__imp__sub_82382878) {
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
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,8012
	ctx.r3.s64 = ctx.r10.s64 + 8012;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x823828B0;
	sub_82305000(ctx, base);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r3,r8,29888
	ctx.r3.s64 = ctx.r8.s64 + 29888;
	// bl 0x8233bff8
	ctx.lr = 0x823828BC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823828CC"))) PPC_WEAK_FUNC(sub_823828CC);
PPC_FUNC_IMPL(__imp__sub_823828CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823828D0"))) PPC_WEAK_FUNC(sub_823828D0);
PPC_FUNC_IMPL(__imp__sub_823828D0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,8720
	ctx.r31.s64 = ctx.r11.s64 + 8720;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382914;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,29920
	ctx.r3.s64 = ctx.r10.s64 + 29920;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382938;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382950"))) PPC_WEAK_FUNC(sub_82382950);
PPC_FUNC_IMPL(__imp__sub_82382950) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,8776
	ctx.r31.s64 = ctx.r11.s64 + 8776;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382994;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,30112
	ctx.r3.s64 = ctx.r10.s64 + 30112;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x823829B8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823829D0"))) PPC_WEAK_FUNC(sub_823829D0);
PPC_FUNC_IMPL(__imp__sub_823829D0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,8832
	ctx.r31.s64 = ctx.r11.s64 + 8832;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382A14;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,30304
	ctx.r3.s64 = ctx.r10.s64 + 30304;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382A38;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382A50"))) PPC_WEAK_FUNC(sub_82382A50);
PPC_FUNC_IMPL(__imp__sub_82382A50) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,8888
	ctx.r31.s64 = ctx.r11.s64 + 8888;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382A94;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,30496
	ctx.r3.s64 = ctx.r10.s64 + 30496;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382AB8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382AD0"))) PPC_WEAK_FUNC(sub_82382AD0);
PPC_FUNC_IMPL(__imp__sub_82382AD0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,8944
	ctx.r31.s64 = ctx.r11.s64 + 8944;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382B14;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,30688
	ctx.r3.s64 = ctx.r10.s64 + 30688;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382B38;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382B50"))) PPC_WEAK_FUNC(sub_82382B50);
PPC_FUNC_IMPL(__imp__sub_82382B50) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,9000
	ctx.r31.s64 = ctx.r11.s64 + 9000;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382B94;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,30880
	ctx.r3.s64 = ctx.r10.s64 + 30880;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382BB8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382BD0"))) PPC_WEAK_FUNC(sub_82382BD0);
PPC_FUNC_IMPL(__imp__sub_82382BD0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,9056
	ctx.r31.s64 = ctx.r11.s64 + 9056;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382C14;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,31072
	ctx.r3.s64 = ctx.r10.s64 + 31072;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382C38;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382C50"))) PPC_WEAK_FUNC(sub_82382C50);
PPC_FUNC_IMPL(__imp__sub_82382C50) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,9112
	ctx.r31.s64 = ctx.r11.s64 + 9112;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382C94;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,31264
	ctx.r3.s64 = ctx.r10.s64 + 31264;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382CB8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382CD0"))) PPC_WEAK_FUNC(sub_82382CD0);
PPC_FUNC_IMPL(__imp__sub_82382CD0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,9168
	ctx.r31.s64 = ctx.r11.s64 + 9168;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382D14;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,31456
	ctx.r3.s64 = ctx.r10.s64 + 31456;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382D38;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382D50"))) PPC_WEAK_FUNC(sub_82382D50);
PPC_FUNC_IMPL(__imp__sub_82382D50) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,9224
	ctx.r31.s64 = ctx.r11.s64 + 9224;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382D94;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,31648
	ctx.r3.s64 = ctx.r10.s64 + 31648;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382DB8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382DD0"))) PPC_WEAK_FUNC(sub_82382DD0);
PPC_FUNC_IMPL(__imp__sub_82382DD0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,9280
	ctx.r31.s64 = ctx.r11.s64 + 9280;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382E14;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,31840
	ctx.r3.s64 = ctx.r10.s64 + 31840;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382E38;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382E50"))) PPC_WEAK_FUNC(sub_82382E50);
PPC_FUNC_IMPL(__imp__sub_82382E50) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,9336
	ctx.r31.s64 = ctx.r11.s64 + 9336;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382E94;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,32032
	ctx.r3.s64 = ctx.r10.s64 + 32032;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382EB8;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382ED0"))) PPC_WEAK_FUNC(sub_82382ED0);
PPC_FUNC_IMPL(__imp__sub_82382ED0) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,9392
	ctx.r31.s64 = ctx.r11.s64 + 9392;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382F14;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,32224
	ctx.r3.s64 = ctx.r10.s64 + 32224;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82382F38;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82382F50"))) PPC_WEAK_FUNC(sub_82382F50);
PPC_FUNC_IMPL(__imp__sub_82382F50) {
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
	// bl 0x822028e0
	ctx.lr = 0x82382F60;
	sub_822028E0(ctx, base);
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,32416
	ctx.r3.s64 = ctx.r11.s64 + 32416;
	// bl 0x8233bff8
	ctx.lr = 0x82382F6C;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82382F7C"))) PPC_WEAK_FUNC(sub_82382F7C);
PPC_FUNC_IMPL(__imp__sub_82382F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382F80"))) PPC_WEAK_FUNC(sub_82382F80);
PPC_FUNC_IMPL(__imp__sub_82382F80) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-11768
	ctx.r31.s64 = ctx.r11.s64 + -11768;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82382FC4;
	sub_82305000(ctx, base);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r30,16408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16408, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,16404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16404, ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82382FE4:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82382fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82382FE4;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r3,r11,32456
	ctx.r3.s64 = ctx.r11.s64 + 32456;
	// bl 0x8233bff8
	ctx.lr = 0x82382FFC;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82383014"))) PPC_WEAK_FUNC(sub_82383014);
PPC_FUNC_IMPL(__imp__sub_82383014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383018"))) PPC_WEAK_FUNC(sub_82383018);
PPC_FUNC_IMPL(__imp__sub_82383018) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,4644
	ctx.r31.s64 = ctx.r11.s64 + 4644;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238305C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,32488
	ctx.r3.s64 = ctx.r10.s64 + 32488;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82383080;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82383098"))) PPC_WEAK_FUNC(sub_82383098);
PPC_FUNC_IMPL(__imp__sub_82383098) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,4700
	ctx.r31.s64 = ctx.r11.s64 + 4700;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823830DC;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,32680
	ctx.r3.s64 = ctx.r10.s64 + 32680;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82383100;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82383118"))) PPC_WEAK_FUNC(sub_82383118);
PPC_FUNC_IMPL(__imp__sub_82383118) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,4760
	ctx.r31.s64 = ctx.r11.s64 + 4760;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8238315C;
	sub_82305000(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8238317C:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8238317c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238317C;
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r3,r11,-32664
	ctx.r3.s64 = ctx.r11.s64 + -32664;
	// bl 0x8233bff8
	ctx.lr = 0x82383194;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823831AC"))) PPC_WEAK_FUNC(sub_823831AC);
PPC_FUNC_IMPL(__imp__sub_823831AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823831B0"))) PPC_WEAK_FUNC(sub_823831B0);
PPC_FUNC_IMPL(__imp__sub_823831B0) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5044
	ctx.r31.s64 = ctx.r11.s64 + 5044;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823831F4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,-32632
	ctx.r3.s64 = ctx.r10.s64 + -32632;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82383218;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82383230"))) PPC_WEAK_FUNC(sub_82383230);
PPC_FUNC_IMPL(__imp__sub_82383230) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5100
	ctx.r31.s64 = ctx.r11.s64 + 5100;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82383274;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,-32440
	ctx.r3.s64 = ctx.r10.s64 + -32440;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82383298;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823832B0"))) PPC_WEAK_FUNC(sub_823832B0);
PPC_FUNC_IMPL(__imp__sub_823832B0) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5156
	ctx.r31.s64 = ctx.r11.s64 + 5156;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x823832F4;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,-32248
	ctx.r3.s64 = ctx.r10.s64 + -32248;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82383318;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82383330"))) PPC_WEAK_FUNC(sub_82383330);
PPC_FUNC_IMPL(__imp__sub_82383330) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,5212
	ctx.r31.s64 = ctx.r11.s64 + 5212;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82383374;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,-32056
	ctx.r3.s64 = ctx.r10.s64 + -32056;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82383398;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_823833B0"))) PPC_WEAK_FUNC(sub_823833B0);
PPC_FUNC_IMPL(__imp__sub_823833B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,27144
	ctx.r11.s64 = ctx.r11.s64 + 27144;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r9,r9,-7332
	ctx.r9.s64 = ctx.r9.s64 + -7332;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383448"))) PPC_WEAK_FUNC(sub_82383448);
PPC_FUNC_IMPL(__imp__sub_82383448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,27192
	ctx.r11.s64 = ctx.r11.s64 + 27192;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r9,r9,-7476
	ctx.r9.s64 = ctx.r9.s64 + -7476;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823834E0"))) PPC_WEAK_FUNC(sub_823834E0);
PPC_FUNC_IMPL(__imp__sub_823834E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,27144
	ctx.r11.s64 = ctx.r11.s64 + 27144;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r9,r9,-7428
	ctx.r9.s64 = ctx.r9.s64 + -7428;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383578"))) PPC_WEAK_FUNC(sub_82383578);
PPC_FUNC_IMPL(__imp__sub_82383578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,27192
	ctx.r11.s64 = ctx.r11.s64 + 27192;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// addi r9,r9,-7380
	ctx.r9.s64 = ctx.r9.s64 + -7380;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383610"))) PPC_WEAK_FUNC(sub_82383610);
PPC_FUNC_IMPL(__imp__sub_82383610) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,4680
	ctx.r31.s64 = ctx.r11.s64 + 4680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8233eaf0
	ctx.lr = 0x82383638;
	sub_8233EAF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18176
	ctx.r4.s64 = ctx.r11.s64 + -18176;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x8238364C;
	sub_8233E4E0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8233eaf0
	ctx.lr = 0x8238365C;
	sub_8233EAF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823836A0"))) PPC_WEAK_FUNC(sub_823836A0);
PPC_FUNC_IMPL(__imp__sub_823836A0) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,5752
	ctx.r31.s64 = ctx.r11.s64 + 5752;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = ctx.r31.s64 + 26;
	// bl 0x8233eaf0
	ctx.lr = 0x823836C8;
	sub_8233EAF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18176
	ctx.r4.s64 = ctx.r11.s64 + -18176;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x823836DC;
	sub_8233E4E0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8233eaf0
	ctx.lr = 0x823836EC;
	sub_8233EAF0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82383730"))) PPC_WEAK_FUNC(sub_82383730);
PPC_FUNC_IMPL(__imp__sub_82383730) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,6824
	ctx.r31.s64 = ctx.r11.s64 + 6824;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x8233eaf0
	ctx.lr = 0x82383758;
	sub_8233EAF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18176
	ctx.r4.s64 = ctx.r11.s64 + -18176;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x8238376C;
	sub_8233E4E0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8233eaf0
	ctx.lr = 0x8238377C;
	sub_8233EAF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823837C0"))) PPC_WEAK_FUNC(sub_823837C0);
PPC_FUNC_IMPL(__imp__sub_823837C0) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8233eaf0
	ctx.lr = 0x823837E8;
	sub_8233EAF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18176
	ctx.r4.s64 = ctx.r11.s64 + -18176;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x823837FC;
	sub_8233E4E0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8233eaf0
	ctx.lr = 0x8238380C;
	sub_8233EAF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82383850"))) PPC_WEAK_FUNC(sub_82383850);
PPC_FUNC_IMPL(__imp__sub_82383850) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,8968
	ctx.r31.s64 = ctx.r11.s64 + 8968;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8233eaf0
	ctx.lr = 0x82383878;
	sub_8233EAF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18176
	ctx.r4.s64 = ctx.r11.s64 + -18176;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x8238388C;
	sub_8233E4E0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8233eaf0
	ctx.lr = 0x8238389C;
	sub_8233EAF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823838E0"))) PPC_WEAK_FUNC(sub_823838E0);
PPC_FUNC_IMPL(__imp__sub_823838E0) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,10040
	ctx.r31.s64 = ctx.r11.s64 + 10040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8233eaf0
	ctx.lr = 0x82383908;
	sub_8233EAF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18176
	ctx.r4.s64 = ctx.r11.s64 + -18176;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x8238391C;
	sub_8233E4E0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8233eaf0
	ctx.lr = 0x8238392C;
	sub_8233EAF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82383970"))) PPC_WEAK_FUNC(sub_82383970);
PPC_FUNC_IMPL(__imp__sub_82383970) {
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
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,11112
	ctx.r31.s64 = ctx.r11.s64 + 11112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x8233eaf0
	ctx.lr = 0x82383998;
	sub_8233EAF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-18176
	ctx.r4.s64 = ctx.r11.s64 + -18176;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x823839AC;
	sub_8233E4E0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8233eaf0
	ctx.lr = 0x823839BC;
	sub_8233EAF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82383A00"))) PPC_WEAK_FUNC(sub_82383A00);
PPC_FUNC_IMPL(__imp__sub_82383A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230b140
	sub_8230B140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82383A04"))) PPC_WEAK_FUNC(sub_82383A04);
PPC_FUNC_IMPL(__imp__sub_82383A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383A08"))) PPC_WEAK_FUNC(sub_82383A08);
PPC_FUNC_IMPL(__imp__sub_82383A08) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-25920
	ctx.r31.s64 = ctx.r11.s64 + -25920;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82383A4C;
	sub_82305000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r10,-31864
	ctx.r3.s64 = ctx.r10.s64 + -31864;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x8233bff8
	ctx.lr = 0x82383A70;
	sub_8233BFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82383A88"))) PPC_WEAK_FUNC(sub_82383A88);
PPC_FUNC_IMPL(__imp__sub_82383A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-23800
	ctx.r3.s64 = ctx.r11.s64 + -23800;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233eaf0
	sub_8233EAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82383A9C"))) PPC_WEAK_FUNC(sub_82383A9C);
PPC_FUNC_IMPL(__imp__sub_82383A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383AA0"))) PPC_WEAK_FUNC(sub_82383AA0);
PPC_FUNC_IMPL(__imp__sub_82383AA0) {
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
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r11,r11,-22604
	ctx.r11.s64 = ctx.r11.s64 + -22604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82388bc4
	ctx.lr = 0x82383ABC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r3,r11,-31792
	ctx.r3.s64 = ctx.r11.s64 + -31792;
	// bl 0x8233bff8
	ctx.lr = 0x82383AC8;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383AD8"))) PPC_WEAK_FUNC(sub_82383AD8);
PPC_FUNC_IMPL(__imp__sub_82383AD8) {
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
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r3,r11,23908
	ctx.r3.s64 = ctx.r11.s64 + 23908;
	// bl 0x8236f5e8
	ctx.lr = 0x82383AF0;
	sub_8236F5E8(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// addi r3,r11,-31768
	ctx.r3.s64 = ctx.r11.s64 + -31768;
	// bl 0x8233bff8
	ctx.lr = 0x82383AFC;
	sub_8233BFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383B0C"))) PPC_WEAK_FUNC(sub_82383B0C);
PPC_FUNC_IMPL(__imp__sub_82383B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383B10"))) PPC_WEAK_FUNC(sub_82383B10);
PPC_FUNC_IMPL(__imp__sub_82383B10) {
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
	// addi r31,r11,26404
	ctx.r31.s64 = ctx.r11.s64 + 26404;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383b98
	if (ctx.cr6.eq) goto loc_82383B98;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383b50
	if (!ctx.cr6.eq) goto loc_82383B50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82383B50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383b98
	if (ctx.cr6.eq) goto loc_82383B98;
loc_82383B58:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82383B88;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383b58
	if (!ctx.cr6.eq) goto loc_82383B58;
loc_82383B98:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bb4
	if (ctx.cr6.eq) goto loc_82383BB4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82383BB4;
	sub_82246E18(ctx, base);
loc_82383BB4:
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

__attribute__((alias("__imp__sub_82383BCC"))) PPC_WEAK_FUNC(sub_82383BCC);
PPC_FUNC_IMPL(__imp__sub_82383BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383BD0"))) PPC_WEAK_FUNC(sub_82383BD0);
PPC_FUNC_IMPL(__imp__sub_82383BD0) {
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
	// addi r31,r11,26460
	ctx.r31.s64 = ctx.r11.s64 + 26460;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383c58
	if (ctx.cr6.eq) goto loc_82383C58;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383c10
	if (!ctx.cr6.eq) goto loc_82383C10;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82383C10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383c58
	if (ctx.cr6.eq) goto loc_82383C58;
loc_82383C18:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82383C48;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383c18
	if (!ctx.cr6.eq) goto loc_82383C18;
loc_82383C58:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383c74
	if (ctx.cr6.eq) goto loc_82383C74;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82383C74;
	sub_82246E18(ctx, base);
loc_82383C74:
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

__attribute__((alias("__imp__sub_82383C8C"))) PPC_WEAK_FUNC(sub_82383C8C);
PPC_FUNC_IMPL(__imp__sub_82383C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383C90"))) PPC_WEAK_FUNC(sub_82383C90);
PPC_FUNC_IMPL(__imp__sub_82383C90) {
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
	// addi r31,r11,26516
	ctx.r31.s64 = ctx.r11.s64 + 26516;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383d18
	if (ctx.cr6.eq) goto loc_82383D18;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383cd0
	if (!ctx.cr6.eq) goto loc_82383CD0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82383CD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383d18
	if (ctx.cr6.eq) goto loc_82383D18;
loc_82383CD8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82383D08;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383cd8
	if (!ctx.cr6.eq) goto loc_82383CD8;
loc_82383D18:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383d34
	if (ctx.cr6.eq) goto loc_82383D34;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82383D34;
	sub_82246E18(ctx, base);
loc_82383D34:
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

__attribute__((alias("__imp__sub_82383D4C"))) PPC_WEAK_FUNC(sub_82383D4C);
PPC_FUNC_IMPL(__imp__sub_82383D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383D50"))) PPC_WEAK_FUNC(sub_82383D50);
PPC_FUNC_IMPL(__imp__sub_82383D50) {
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
	// addi r31,r11,26572
	ctx.r31.s64 = ctx.r11.s64 + 26572;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383dd8
	if (ctx.cr6.eq) goto loc_82383DD8;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383d90
	if (!ctx.cr6.eq) goto loc_82383D90;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82383D90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383dd8
	if (ctx.cr6.eq) goto loc_82383DD8;
loc_82383D98:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82383DC8;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383d98
	if (!ctx.cr6.eq) goto loc_82383D98;
loc_82383DD8:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383df4
	if (ctx.cr6.eq) goto loc_82383DF4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82383DF4;
	sub_82246E18(ctx, base);
loc_82383DF4:
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

__attribute__((alias("__imp__sub_82383E0C"))) PPC_WEAK_FUNC(sub_82383E0C);
PPC_FUNC_IMPL(__imp__sub_82383E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383E10"))) PPC_WEAK_FUNC(sub_82383E10);
PPC_FUNC_IMPL(__imp__sub_82383E10) {
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
	// addi r31,r11,26628
	ctx.r31.s64 = ctx.r11.s64 + 26628;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383e98
	if (ctx.cr6.eq) goto loc_82383E98;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383e50
	if (!ctx.cr6.eq) goto loc_82383E50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82383E50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383e98
	if (ctx.cr6.eq) goto loc_82383E98;
loc_82383E58:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82383E88;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383e58
	if (!ctx.cr6.eq) goto loc_82383E58;
loc_82383E98:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383eb4
	if (ctx.cr6.eq) goto loc_82383EB4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82383EB4;
	sub_82246E18(ctx, base);
loc_82383EB4:
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

__attribute__((alias("__imp__sub_82383ECC"))) PPC_WEAK_FUNC(sub_82383ECC);
PPC_FUNC_IMPL(__imp__sub_82383ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383ED0"))) PPC_WEAK_FUNC(sub_82383ED0);
PPC_FUNC_IMPL(__imp__sub_82383ED0) {
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
	// addi r31,r11,26684
	ctx.r31.s64 = ctx.r11.s64 + 26684;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383f58
	if (ctx.cr6.eq) goto loc_82383F58;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383f10
	if (!ctx.cr6.eq) goto loc_82383F10;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82383F10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383f58
	if (ctx.cr6.eq) goto loc_82383F58;
loc_82383F18:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82383F48;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383f18
	if (!ctx.cr6.eq) goto loc_82383F18;
loc_82383F58:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383f74
	if (ctx.cr6.eq) goto loc_82383F74;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82383F74;
	sub_82246E18(ctx, base);
loc_82383F74:
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

__attribute__((alias("__imp__sub_82383F8C"))) PPC_WEAK_FUNC(sub_82383F8C);
PPC_FUNC_IMPL(__imp__sub_82383F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383F90"))) PPC_WEAK_FUNC(sub_82383F90);
PPC_FUNC_IMPL(__imp__sub_82383F90) {
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
	// addi r31,r11,26740
	ctx.r31.s64 = ctx.r11.s64 + 26740;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384018
	if (ctx.cr6.eq) goto loc_82384018;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383fd0
	if (!ctx.cr6.eq) goto loc_82383FD0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82383FD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384018
	if (ctx.cr6.eq) goto loc_82384018;
loc_82383FD8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82384008;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383fd8
	if (!ctx.cr6.eq) goto loc_82383FD8;
loc_82384018:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384034
	if (ctx.cr6.eq) goto loc_82384034;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82384034;
	sub_82246E18(ctx, base);
loc_82384034:
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

__attribute__((alias("__imp__sub_8238404C"))) PPC_WEAK_FUNC(sub_8238404C);
PPC_FUNC_IMPL(__imp__sub_8238404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384050"))) PPC_WEAK_FUNC(sub_82384050);
PPC_FUNC_IMPL(__imp__sub_82384050) {
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
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,26816
	ctx.r11.s64 = ctx.r11.s64 + 26816;
	// addi r31,r11,1760
	ctx.r31.s64 = ctx.r11.s64 + 1760;
loc_82384074:
	// addi r31,r31,-176
	ctx.r31.s64 = ctx.r31.s64 + -176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82308a40
	ctx.lr = 0x82384080;
	sub_82308A40(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82384074
	if (!ctx.cr0.lt) goto loc_82384074;
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

__attribute__((alias("__imp__sub_823840A0"))) PPC_WEAK_FUNC(sub_823840A0);
PPC_FUNC_IMPL(__imp__sub_823840A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,26796
	ctx.r11.s64 = ctx.r11.s64 + 26796;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82246e18
	sub_82246E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823840BC"))) PPC_WEAK_FUNC(sub_823840BC);
PPC_FUNC_IMPL(__imp__sub_823840BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823840C0"))) PPC_WEAK_FUNC(sub_823840C0);
PPC_FUNC_IMPL(__imp__sub_823840C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,28656
	ctx.r11.s64 = ctx.r11.s64 + 28656;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82246e18
	sub_82246E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823840DC"))) PPC_WEAK_FUNC(sub_823840DC);
PPC_FUNC_IMPL(__imp__sub_823840DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823840E0"))) PPC_WEAK_FUNC(sub_823840E0);
PPC_FUNC_IMPL(__imp__sub_823840E0) {
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
	// addi r31,r11,28676
	ctx.r31.s64 = ctx.r11.s64 + 28676;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384168
	if (ctx.cr6.eq) goto loc_82384168;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82384120
	if (!ctx.cr6.eq) goto loc_82384120;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82384120:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384168
	if (ctx.cr6.eq) goto loc_82384168;
loc_82384128:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82384158;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82384128
	if (!ctx.cr6.eq) goto loc_82384128;
loc_82384168:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384184
	if (ctx.cr6.eq) goto loc_82384184;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82384184;
	sub_82246E18(ctx, base);
loc_82384184:
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

__attribute__((alias("__imp__sub_8238419C"))) PPC_WEAK_FUNC(sub_8238419C);
PPC_FUNC_IMPL(__imp__sub_8238419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823841A0"))) PPC_WEAK_FUNC(sub_823841A0);
PPC_FUNC_IMPL(__imp__sub_823841A0) {
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
	// addi r31,r11,28732
	ctx.r31.s64 = ctx.r11.s64 + 28732;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384228
	if (ctx.cr6.eq) goto loc_82384228;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823841e0
	if (!ctx.cr6.eq) goto loc_823841E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_823841E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384228
	if (ctx.cr6.eq) goto loc_82384228;
loc_823841E8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82384218;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823841e8
	if (!ctx.cr6.eq) goto loc_823841E8;
loc_82384228:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384244
	if (ctx.cr6.eq) goto loc_82384244;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82384244;
	sub_82246E18(ctx, base);
loc_82384244:
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

__attribute__((alias("__imp__sub_8238425C"))) PPC_WEAK_FUNC(sub_8238425C);
PPC_FUNC_IMPL(__imp__sub_8238425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384260"))) PPC_WEAK_FUNC(sub_82384260);
PPC_FUNC_IMPL(__imp__sub_82384260) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r31,r11,10608
	ctx.r31.s64 = ctx.r11.s64 + 10608;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823842e8
	if (ctx.cr6.eq) goto loc_823842E8;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823842a0
	if (!ctx.cr6.eq) goto loc_823842A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_823842A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823842e8
	if (ctx.cr6.eq) goto loc_823842E8;
loc_823842A8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x823842D8;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823842a8
	if (!ctx.cr6.eq) goto loc_823842A8;
loc_823842E8:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384304
	if (ctx.cr6.eq) goto loc_82384304;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x82384304;
	sub_82246E18(ctx, base);
loc_82384304:
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

__attribute__((alias("__imp__sub_8238431C"))) PPC_WEAK_FUNC(sub_8238431C);
PPC_FUNC_IMPL(__imp__sub_8238431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384320"))) PPC_WEAK_FUNC(sub_82384320);
PPC_FUNC_IMPL(__imp__sub_82384320) {
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
	// addi r31,r11,28788
	ctx.r31.s64 = ctx.r11.s64 + 28788;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823843a8
	if (ctx.cr6.eq) goto loc_823843A8;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82384360
	if (!ctx.cr6.eq) goto loc_82384360;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82384360:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823843a8
	if (ctx.cr6.eq) goto loc_823843A8;
loc_82384368:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82384398;
	sub_82080000(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82384368
	if (!ctx.cr6.eq) goto loc_82384368;
loc_823843A8:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823843c4
	if (ctx.cr6.eq) goto loc_823843C4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82246e18
	ctx.lr = 0x823843C4;
	sub_82246E18(ctx, base);
loc_823843C4:
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

__attribute__((alias("__imp__sub_823843DC"))) PPC_WEAK_FUNC(sub_823843DC);
PPC_FUNC_IMPL(__imp__sub_823843DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

