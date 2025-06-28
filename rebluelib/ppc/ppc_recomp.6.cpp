#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820BC8A0"))) PPC_WEAK_FUNC(sub_820BC8A0);
PPC_FUNC_IMPL(__imp__sub_820BC8A0) {
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
	// bne cr6,0x820bc8e0
	if (!ctx.cr6.eq) goto loc_820BC8E0;
	// bl 0x820ddca8
	ctx.lr = 0x820BC8C8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc8d8
	if (ctx.cr6.eq) goto loc_820BC8D8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bc8fc
	goto loc_820BC8FC;
loc_820BC8D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bc8fc
	goto loc_820BC8FC;
loc_820BC8E0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bc90c
	if (!ctx.cr6.eq) goto loc_820BC90C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bc948
	if (ctx.cr6.eq) goto loc_820BC948;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BC8FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bc928
	if (ctx.cr6.eq) goto loc_820BC928;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bc928
	goto loc_820BC928;
loc_820BC90C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bc948
	if (ctx.cr6.eq) goto loc_820BC948;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BC928;
	sub_820F3178(ctx, base);
loc_820BC928:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc948
	if (ctx.cr6.eq) goto loc_820BC948;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
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
loc_820BC948:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_820BC960"))) PPC_WEAK_FUNC(sub_820BC960);
PPC_FUNC_IMPL(__imp__sub_820BC960) {
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
	// bne cr6,0x820bc9a0
	if (!ctx.cr6.eq) goto loc_820BC9A0;
	// bl 0x820ddca8
	ctx.lr = 0x820BC988;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc998
	if (ctx.cr6.eq) goto loc_820BC998;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bc9bc
	goto loc_820BC9BC;
loc_820BC998:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bc9bc
	goto loc_820BC9BC;
loc_820BC9A0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bc9cc
	if (!ctx.cr6.eq) goto loc_820BC9CC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bc9f0
	if (ctx.cr6.eq) goto loc_820BC9F0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BC9BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bc9e8
	if (ctx.cr6.eq) goto loc_820BC9E8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bc9e8
	goto loc_820BC9E8;
loc_820BC9CC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bc9f0
	if (ctx.cr6.eq) goto loc_820BC9F0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BC9E8;
	sub_820F3178(ctx, base);
loc_820BC9E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bca08
	if (!ctx.cr6.eq) goto loc_820BCA08;
loc_820BC9F0:
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
loc_820BCA08:
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bca1c
	if (ctx.cr6.eq) goto loc_820BCA1C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_820BCA1C:
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

__attribute__((alias("__imp__sub_820BCA30"))) PPC_WEAK_FUNC(sub_820BCA30);
PPC_FUNC_IMPL(__imp__sub_820BCA30) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x820bc960
	ctx.lr = 0x820BCA48;
	sub_820BC960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bca68
	if (ctx.cr6.eq) goto loc_820BCA68;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bca60
	if (ctx.cr6.eq) goto loc_820BCA60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x820bca64
	goto loc_820BCA64;
loc_820BCA60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BCA64:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820BCA68:
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

__attribute__((alias("__imp__sub_820BCA7C"))) PPC_WEAK_FUNC(sub_820BCA7C);
PPC_FUNC_IMPL(__imp__sub_820BCA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCA80"))) PPC_WEAK_FUNC(sub_820BCA80);
PPC_FUNC_IMPL(__imp__sub_820BCA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BCA88;
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
	ctx.lr = 0x820BCAA4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcae4
	if (ctx.cr6.eq) goto loc_820BCAE4;
loc_820BCAB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1f08
	ctx.lr = 0x820BCAC0;
	sub_820F1F08(ctx, base);
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
	ctx.lr = 0x820BCAD8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bcab0
	if (!ctx.cr6.eq) goto loc_820BCAB0;
loc_820BCAE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BCAEC"))) PPC_WEAK_FUNC(sub_820BCAEC);
PPC_FUNC_IMPL(__imp__sub_820BCAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCAF0"))) PPC_WEAK_FUNC(sub_820BCAF0);
PPC_FUNC_IMPL(__imp__sub_820BCAF0) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bcb30
	if (!ctx.cr6.eq) goto loc_820BCB30;
	// bl 0x820ddca8
	ctx.lr = 0x820BCB18;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcb28
	if (ctx.cr6.eq) goto loc_820BCB28;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bcb4c
	goto loc_820BCB4C;
loc_820BCB28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bcb4c
	goto loc_820BCB4C;
loc_820BCB30:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bcb5c
	if (!ctx.cr6.eq) goto loc_820BCB5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bcb80
	if (ctx.cr6.eq) goto loc_820BCB80;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BCB4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bcb78
	if (ctx.cr6.eq) goto loc_820BCB78;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bcb78
	goto loc_820BCB78;
loc_820BCB5C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bcb80
	if (ctx.cr6.eq) goto loc_820BCB80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BCB78;
	sub_820F3178(ctx, base);
loc_820BCB78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bcb98
	if (!ctx.cr6.eq) goto loc_820BCB98;
loc_820BCB80:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_820BCB98:
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bcbbc
	if (!ctx.cr6.eq) goto loc_820BCBBC;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_820BCBBC:
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r10,264
	ctx.r10.s64 = 264;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82173fd0
	ctx.lr = 0x820BCBE0;
	sub_82173FD0(ctx, base);
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

__attribute__((alias("__imp__sub_820BCBF4"))) PPC_WEAK_FUNC(sub_820BCBF4);
PPC_FUNC_IMPL(__imp__sub_820BCBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCBF8"))) PPC_WEAK_FUNC(sub_820BCBF8);
PPC_FUNC_IMPL(__imp__sub_820BCBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BCC00;
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
	ctx.lr = 0x820BCC1C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcc58
	if (ctx.cr6.eq) goto loc_820BCC58;
loc_820BCC28:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1fc8
	ctx.lr = 0x820BCC34;
	sub_820F1FC8(ctx, base);
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
	ctx.lr = 0x820BCC4C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bcc28
	if (!ctx.cr6.eq) goto loc_820BCC28;
loc_820BCC58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BCC60"))) PPC_WEAK_FUNC(sub_820BCC60);
PPC_FUNC_IMPL(__imp__sub_820BCC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BCC68;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820bcda8
	if (ctx.cr6.eq) goto loc_820BCDA8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820BCCA4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcda8
	if (ctx.cr6.eq) goto loc_820BCDA8;
loc_820BCCB0:
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820BCCC4;
	sub_8233E4E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820c03f8
	ctx.lr = 0x820BCCD4;
	sub_820C03F8(ctx, base);
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f4,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f11,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820BCD5C;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820efed0
	ctx.lr = 0x820BCD64;
	sub_820EFED0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcd84
	if (ctx.cr6.eq) goto loc_820BCD84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BCD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BCD84:
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
	ctx.lr = 0x820BCD9C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bccb0
	if (!ctx.cr6.eq) goto loc_820BCCB0;
loc_820BCDA8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BCDB4"))) PPC_WEAK_FUNC(sub_820BCDB4);
PPC_FUNC_IMPL(__imp__sub_820BCDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCDB8"))) PPC_WEAK_FUNC(sub_820BCDB8);
PPC_FUNC_IMPL(__imp__sub_820BCDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BCDC0;
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bce04
	if (!ctx.cr6.eq) goto loc_820BCE04;
	// bl 0x820ddca8
	ctx.lr = 0x820BCDEC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcdfc
	if (ctx.cr6.eq) goto loc_820BCDFC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bce20
	goto loc_820BCE20;
loc_820BCDFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bce20
	goto loc_820BCE20;
loc_820BCE04:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bce30
	if (!ctx.cr6.eq) goto loc_820BCE30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bcedc
	if (ctx.cr6.eq) goto loc_820BCEDC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BCE20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bce4c
	if (ctx.cr6.eq) goto loc_820BCE4C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bce4c
	goto loc_820BCE4C;
loc_820BCE30:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bcedc
	if (ctx.cr6.eq) goto loc_820BCEDC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BCE4C;
	sub_820F3178(ctx, base);
loc_820BCE4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bcedc
	if (ctx.cr6.eq) goto loc_820BCEDC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bce74
	if (ctx.cr6.eq) goto loc_820BCE74;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_820BCE74:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820bce94
	if (ctx.cr6.eq) goto loc_820BCE94;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_820BCE94:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bceb4
	if (ctx.cr6.eq) goto loc_820BCEB4;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_820BCEB4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820bcf3c
	if (ctx.cr6.eq) goto loc_820BCF3C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820BCEDC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x820bcf00
	if (ctx.cr6.eq) goto loc_820BCF00;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_820BCF00:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820bcf14
	if (ctx.cr6.eq) goto loc_820BCF14;
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_820BCF14:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bcf28
	if (ctx.cr6.eq) goto loc_820BCF28;
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_820BCF28:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820bcf3c
	if (ctx.cr6.eq) goto loc_820BCF3C;
	// stfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_820BCF3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BCF44"))) PPC_WEAK_FUNC(sub_820BCF44);
PPC_FUNC_IMPL(__imp__sub_820BCF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCF48"))) PPC_WEAK_FUNC(sub_820BCF48);
PPC_FUNC_IMPL(__imp__sub_820BCF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820BCF50;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,264
	ctx.r6.s64 = 264;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820BCF84;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd0a0
	if (ctx.cr6.eq) goto loc_820BD0A0;
loc_820BCF90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820c02e8
	ctx.lr = 0x820BCFA4;
	sub_820C02E8(ctx, base);
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f12,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820BD044;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820efed0
	ctx.lr = 0x820BD04C;
	sub_820EFED0(ctx, base);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bd07c
	if (ctx.cr6.eq) goto loc_820BD07C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BD070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,304(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r8.u32);
loc_820BD07C:
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
	ctx.lr = 0x820BD094;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bcf90
	if (!ctx.cr6.eq) goto loc_820BCF90;
loc_820BD0A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD0B4"))) PPC_WEAK_FUNC(sub_820BD0B4);
PPC_FUNC_IMPL(__imp__sub_820BD0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD0B8"))) PPC_WEAK_FUNC(sub_820BD0B8);
PPC_FUNC_IMPL(__imp__sub_820BD0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BD0C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820BD0DC;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd1bc
	if (ctx.cr6.eq) goto loc_820BD1BC;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,-258
	ctx.r9.s64 = ctx.r11.s64 + -258;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r5,r3
	ctx.r28.u64 = ctx.r5.u64 & ctx.r3.u64;
	// bne cr6,0x820bd114
	if (!ctx.cr6.eq) goto loc_820BD114;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r11.u32);
loc_820BD114:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820BD12C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd1bc
	if (ctx.cr6.eq) goto loc_820BD1BC;
loc_820BD138:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bd154
	if (ctx.cr6.eq) goto loc_820BD154;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820bd198
	if (ctx.cr6.eq) goto loc_820BD198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f0038
	ctx.lr = 0x820BD154;
	sub_820F0038(ctx, base);
loc_820BD154:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f08c8
	ctx.lr = 0x820BD160;
	sub_820F08C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f16c0
	ctx.lr = 0x820BD168;
	sub_820F16C0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bd198
	if (ctx.cr6.eq) goto loc_820BD198;
	// lwz r11,300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bd198
	if (ctx.cr6.eq) goto loc_820BD198;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820bd198
	if (!ctx.cr6.eq) goto loc_820BD198;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4870
	ctx.lr = 0x820BD198;
	sub_820E4870(ctx, base);
loc_820BD198:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820BD1B0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bd138
	if (!ctx.cr6.eq) goto loc_820BD138;
loc_820BD1BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD1C4"))) PPC_WEAK_FUNC(sub_820BD1C4);
PPC_FUNC_IMPL(__imp__sub_820BD1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD1C8"))) PPC_WEAK_FUNC(sub_820BD1C8);
PPC_FUNC_IMPL(__imp__sub_820BD1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BD1D0;
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
	ctx.lr = 0x820BD1EC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd224
	if (ctx.cr6.eq) goto loc_820BD224;
loc_820BD1F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f0038
	ctx.lr = 0x820BD200;
	sub_820F0038(ctx, base);
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
	ctx.lr = 0x820BD218;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bd1f8
	if (!ctx.cr6.eq) goto loc_820BD1F8;
loc_820BD224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD22C"))) PPC_WEAK_FUNC(sub_820BD22C);
PPC_FUNC_IMPL(__imp__sub_820BD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD230"))) PPC_WEAK_FUNC(sub_820BD230);
PPC_FUNC_IMPL(__imp__sub_820BD230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820BD238;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x820bd2dc
	if (ctx.cr6.eq) goto loc_820BD2DC;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bgt cr6,0x820bd2dc
	if (ctx.cr6.gt) goto loc_820BD2DC;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_820BD2DC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820bd314
	if (ctx.cr6.eq) goto loc_820BD314;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bgt cr6,0x820bd314
	if (ctx.cr6.gt) goto loc_820BD314;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820BD314:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82306770
	ctx.lr = 0x820BD324;
	sub_82306770(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// subfe r27,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r30,r10,r30
	temp.u8 = (~ctx.r10.u32 + ctx.r30.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82085870
	ctx.lr = 0x820BD34C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd434
	if (ctx.cr6.eq) goto loc_820BD434;
loc_820BD358:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820BD368;
	sub_8233E4E0(ctx, base);
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f8,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f4,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f12,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f2,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f5,184(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f1,196(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f8,212(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// beq cr6,0x820bd3f8
	if (ctx.cr6.eq) goto loc_820BD3F8;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
loc_820BD3F8:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1b10
	ctx.lr = 0x820BD410;
	sub_820F1B10(ctx, base);
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
	ctx.lr = 0x820BD428;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bd358
	if (!ctx.cr6.eq) goto loc_820BD358;
loc_820BD434:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD43C"))) PPC_WEAK_FUNC(sub_820BD43C);
PPC_FUNC_IMPL(__imp__sub_820BD43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD440"))) PPC_WEAK_FUNC(sub_820BD440);
PPC_FUNC_IMPL(__imp__sub_820BD440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820BD448;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa24
	ctx.lr = 0x820BD450;
	__savefpr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmr f24,f0
	ctx.f24.f64 = ctx.f0.f64;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmr f23,f13
	ctx.f23.f64 = ctx.f13.f64;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f27,f13
	ctx.f27.f64 = ctx.f13.f64;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// beq cr6,0x820bd4d4
	if (ctx.cr6.eq) goto loc_820BD4D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x820bd4d8
	if (!ctx.cr6.eq) goto loc_820BD4D8;
loc_820BD4D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820BD4D8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bd658
	if (ctx.cr6.eq) goto loc_820BD658;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lfs f6,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// lfs f7,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f7,f7
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// fmadds f11,f12,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// fadds f10,f11,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x820bd540
	if (ctx.cr6.gt) goto loc_820BD540;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_820BD540:
	// lfs f10,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f11,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x820bd564
	if (ctx.cr6.gt) goto loc_820BD564;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_820BD564:
	// fmadds f0,f12,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f8,1128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	ctx.f8.f64 = double(temp.f32);
	// fadds f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fdivs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fmuls f30,f6,f3
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f31,f12,f3
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f29,f7,f3
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f2,f11,f30
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmadds f1,f31,f9,f2
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f0,f10,f29,f1
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f7,f30,f0
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f6,f31,f0
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f4,f12,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f10,f11,f11,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x820bd5ec
	if (!ctx.cr6.gt) goto loc_820BD5EC;
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fmuls f26,f0,f9
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f27,f12,f9
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f28,f11,f9
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// b 0x820bd610
	goto loc_820BD610;
loc_820BD5EC:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820c01b0
	ctx.lr = 0x820BD5F8;
	sub_820C01B0(ctx, base);
	// lfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f26.f64 = double(temp.f32);
loc_820BD610:
	// fmuls f0,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// fmuls f13,f28,f30
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// fmuls f12,f27,f29
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// fmsubs f11,f28,f29,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f10,f27,f31,f13
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmsubs f9,f26,f30,f12
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f12.f64));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lfs f25,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f25.f64 = double(temp.f32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lfs f23,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f23.f64 = double(temp.f32);
	// lfs f24,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f24.f64 = double(temp.f32);
loc_820BD658:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82085870
	ctx.lr = 0x820BD670;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bd868
	if (ctx.cr6.eq) goto loc_820BD868;
loc_820BD67C:
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820bd724
	if (ctx.cr6.eq) goto loc_820BD724;
	// lfs f0,260(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// stw r10,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r9.u32);
	// lfs f10,256(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f27,f10
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmuls f8,f28,f10
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f10.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmuls f7,f26,f10
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r6.u32);
	// stw r8,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r8.u32);
	// stw r7,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r7.u32);
	// lfs f6,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f23
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f23.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f3,f24,f6
	ctx.f3.f64 = double(float(ctx.f24.f64 * ctx.f6.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmuls f5,f25,f6
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f6.f64));
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r5,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r5.u32);
	// stw r3,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r3.u32);
	// stw r4,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r4.u32);
loc_820BD724:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bd74c
	if (ctx.cr6.eq) goto loc_820BD74C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r10.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r9,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r9.u32);
	// bl 0x820f16c0
	ctx.lr = 0x820BD74C;
	sub_820F16C0(ctx, base);
loc_820BD74C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820efed0
	ctx.lr = 0x820BD754;
	sub_820EFED0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bd808
	if (ctx.cr6.eq) goto loc_820BD808;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bd780
	if (!ctx.cr6.eq) goto loc_820BD780;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820bd7a0
	if (ctx.cr6.eq) goto loc_820BD7A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x820bd7b0
	goto loc_820BD7B0;
loc_820BD780:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820bd7a0
	if (ctx.cr6.eq) goto loc_820BD7A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BD7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BD7A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bd7bc
	if (ctx.cr6.eq) goto loc_820BD7BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_820BD7B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BD7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BD7BC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd7d4
	if (ctx.cr6.eq) goto loc_820BD7D4;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
loc_820BD7D4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bd808
	if (ctx.cr6.eq) goto loc_820BD808;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// beq cr6,0x820bd808
	if (ctx.cr6.eq) goto loc_820BD808;
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bd808
	if (ctx.cr6.eq) goto loc_820BD808;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_820BD808:
	// lwz r11,236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd844
	if (ctx.cr6.eq) goto loc_820BD844;
	// lwz r31,184(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bd844
	if (ctx.cr6.eq) goto loc_820BD844;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_820BD828:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BD83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x820bd828
	if (!ctx.cr0.eq) goto loc_820BD828;
loc_820BD844:
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
	ctx.lr = 0x820BD85C;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bd67c
	if (!ctx.cr6.eq) goto loc_820BD67C;
loc_820BD868:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa70
	ctx.lr = 0x820BD874;
	__restfpr_23(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD878"))) PPC_WEAK_FUNC(sub_820BD878);
PPC_FUNC_IMPL(__imp__sub_820BD878) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x820bd230
	sub_820BD230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD880"))) PPC_WEAK_FUNC(sub_820BD880);
PPC_FUNC_IMPL(__imp__sub_820BD880) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x820bd440
	sub_820BD440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD888"))) PPC_WEAK_FUNC(sub_820BD888);
PPC_FUNC_IMPL(__imp__sub_820BD888) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820bd230
	sub_820BD230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD890"))) PPC_WEAK_FUNC(sub_820BD890);
PPC_FUNC_IMPL(__imp__sub_820BD890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820BD898;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82226ed8
	ctx.lr = 0x820BD8AC;
	sub_82226ED8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r11,1504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1504);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r24,r8,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x820bd8d8
	if (ctx.cr6.eq) goto loc_820BD8D8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820bd8dc
	if (!ctx.cr6.eq) goto loc_820BD8DC;
loc_820BD8D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BD8DC:
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x820bd94c
	if (!ctx.cr6.eq) goto loc_820BD94C;
	// bl 0x82226f90
	ctx.lr = 0x820BD8F0;
	sub_82226F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bd94c
	if (!ctx.cr6.eq) goto loc_820BD94C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820BD914;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bda10
	if (ctx.cr6.eq) goto loc_820BDA10;
loc_820BD91C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820f4f68
	ctx.lr = 0x820BD924;
	sub_820F4F68(ctx, base);
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
	ctx.lr = 0x820BD93C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bd91c
	if (!ctx.cr6.eq) goto loc_820BD91C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820BD94C:
	// bl 0x820ddd08
	ctx.lr = 0x820BD950;
	sub_820DDD08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820BD96C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bda10
	if (ctx.cr6.eq) goto loc_820BDA10;
loc_820BD978:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bd9e0
	if (!ctx.cr6.eq) goto loc_820BD9E0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x820bd9bc
	if (!ctx.cr6.eq) goto loc_820BD9BC;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bd9bc
	if (!ctx.cr6.eq) goto loc_820BD9BC;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd9bc
	if (ctx.cr6.eq) goto loc_820BD9BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bd9bc
	if (ctx.cr6.eq) goto loc_820BD9BC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x820bd9e0
	if (ctx.cr6.eq) goto loc_820BD9E0;
loc_820BD9BC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd9d4
	if (ctx.cr6.eq) goto loc_820BD9D4;
	// bl 0x820f0fe0
	ctx.lr = 0x820BD9D0;
	sub_820F0FE0(ctx, base);
	// b 0x820bd9ec
	goto loc_820BD9EC;
loc_820BD9D4:
	// rlwinm r4,r28,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	// bl 0x820f1090
	ctx.lr = 0x820BD9DC;
	sub_820F1090(ctx, base);
	// b 0x820bd9ec
	goto loc_820BD9EC;
loc_820BD9E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4f68
	ctx.lr = 0x820BD9EC;
	sub_820F4F68(ctx, base);
loc_820BD9EC:
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
	ctx.lr = 0x820BDA04;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bd978
	if (!ctx.cr6.eq) goto loc_820BD978;
loc_820BDA10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BDA18"))) PPC_WEAK_FUNC(sub_820BDA18);
PPC_FUNC_IMPL(__imp__sub_820BDA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820BDA20;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r24,r11,1
	ctx.r24.u64 = ctx.r11.u64 | 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// ori r22,r10,6
	ctx.r22.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820bda6c
	if (!ctx.cr6.eq) goto loc_820BDA6C;
	// bl 0x820ddca8
	ctx.lr = 0x820BDA4C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bda60
	if (ctx.cr6.eq) goto loc_820BDA60;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x820bda80
	goto loc_820BDA80;
loc_820BDA60:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x820bda80
	goto loc_820BDA80;
loc_820BDA6C:
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820bda90
	if (!ctx.cr6.eq) goto loc_820BDA90;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bdd74
	if (ctx.cr6.eq) goto loc_820BDD74;
	// lwz r26,44(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BDA80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bdab0
	if (ctx.cr6.eq) goto loc_820BDAB0;
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// b 0x820bdab0
	goto loc_820BDAB0;
loc_820BDA90:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bdd74
	if (ctx.cr6.eq) goto loc_820BDD74;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BDAAC;
	sub_820F3178(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_820BDAB0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820bdd74
	if (ctx.cr6.eq) goto loc_820BDD74;
	// bl 0x820ddca8
	ctx.lr = 0x820BDABC;
	sub_820DDCA8(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lhz r9,178(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 178);
	// rlwinm r7,r23,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-29208
	ctx.r30.s64 = ctx.r11.s64 + -29208;
	// beq cr6,0x820bdb04
	if (ctx.cr6.eq) goto loc_820BDB04;
	// lhz r8,178(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 178);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820bdb00
	if (ctx.cr6.eq) goto loc_820BDB00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x821b0898
	ctx.lr = 0x820BDAF4;
	sub_821B0898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bdb04
	if (ctx.cr6.eq) goto loc_820BDB04;
loc_820BDB00:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_820BDB04:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820f5598
	ctx.lr = 0x820BDB18;
	sub_820F5598(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bdb68
	if (ctx.cr6.eq) goto loc_820BDB68;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bdd74
	if (ctx.cr6.eq) goto loc_820BDD74;
	// lhz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 178);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bdb68
	if (!ctx.cr6.lt) goto loc_820BDB68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bdb68
	if (ctx.cr6.eq) goto loc_820BDB68;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bdb68
	if (ctx.cr6.eq) goto loc_820BDB68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f1130
	ctx.lr = 0x820BDB68;
	sub_820F1130(ctx, base);
loc_820BDB68:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820bdd74
	if (ctx.cr6.eq) goto loc_820BDD74;
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bdd50
	if (ctx.cr6.eq) goto loc_820BDD50;
	// lwz r11,280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820bdcb8
	if (!ctx.cr6.eq) goto loc_820BDCB8;
	// lwz r27,224(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820bdd50
	if (ctx.cr6.eq) goto loc_820BDD50;
loc_820BDB94:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bdbac
	if (!ctx.cr6.eq) goto loc_820BDBAC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BDBA8;
	sub_820F5F90(ctx, base);
	// stw r3,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
loc_820BDBAC:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820bda18
	ctx.lr = 0x820BDBC0;
	sub_820BDA18(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820bdbec
	if (!ctx.cr6.eq) goto loc_820BDBEC;
	// bl 0x820ddca8
	ctx.lr = 0x820BDBCC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bdbe0
	if (ctx.cr6.eq) goto loc_820BDBE0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x820bdc24
	goto loc_820BDC24;
loc_820BDBE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x820bdc24
	goto loc_820BDC24;
loc_820BDBEC:
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820bdbfc
	if (!ctx.cr6.eq) goto loc_820BDBFC;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x820bdc24
	goto loc_820BDC24;
loc_820BDBFC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820bdc0c
	if (!ctx.cr6.eq) goto loc_820BDC0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bdc20
	goto loc_820BDC20;
loc_820BDC0C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820BDC20;
	sub_820F3178(ctx, base);
loc_820BDC20:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820BDC24:
	// lwz r11,340(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 340);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,160(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r30,80(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bdc60
	if (ctx.cr6.eq) goto loc_820BDC60;
loc_820BDC40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820abe28
	ctx.lr = 0x820BDC4C;
	sub_820ABE28(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820bdc9c
	if (ctx.cr6.eq) goto loc_820BDC9C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820bdc40
	if (ctx.cr6.lt) goto loc_820BDC40;
loc_820BDC60:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f08c8
	ctx.lr = 0x820BDC6C;
	sub_820F08C8(ctx, base);
loc_820BDC6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r27,96
	ctx.r4.s64 = ctx.r27.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f1b10
	ctx.lr = 0x820BDC84;
	sub_820F1B10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820efed0
	ctx.lr = 0x820BDC8C;
	sub_820EFED0(ctx, base);
	// lwz r27,232(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820bdb94
	if (!ctx.cr6.eq) goto loc_820BDB94;
	// b 0x820bdd50
	goto loc_820BDD50;
loc_820BDC9C:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// beq cr6,0x820bdc60
	if (ctx.cr6.eq) goto loc_820BDC60;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820e24f0
	ctx.lr = 0x820BDCB4;
	sub_820E24F0(ctx, base);
	// b 0x820bdc6c
	goto loc_820BDC6C;
loc_820BDCB8:
	// lwz r31,224(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bdd50
	if (ctx.cr6.eq) goto loc_820BDD50;
loc_820BDCC4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bdcdc
	if (!ctx.cr6.eq) goto loc_820BDCDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BDCD8;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BDCDC:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820bda18
	ctx.lr = 0x820BDCF0;
	sub_820BDA18(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820bdd0c
	if (!ctx.cr6.eq) goto loc_820BDD0C;
	// bl 0x820ddca8
	ctx.lr = 0x820BDCFC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bdd14
	if (ctx.cr6.eq) goto loc_820BDD14;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bdd3c
	goto loc_820BDD3C;
loc_820BDD0C:
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x820bdd1c
	if (!ctx.cr6.eq) goto loc_820BDD1C;
loc_820BDD14:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820bdd3c
	goto loc_820BDD3C;
loc_820BDD1C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x820bdd3c
	if (ctx.cr6.eq) goto loc_820BDD3C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820BDD38;
	sub_820F3178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_820BDD3C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f08c8
	ctx.lr = 0x820BDD44;
	sub_820F08C8(ctx, base);
	// lwz r31,232(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820bdcc4
	if (!ctx.cr6.eq) goto loc_820BDCC4;
loc_820BDD50:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bdd68
	if (!ctx.cr6.eq) goto loc_820BDD68;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BDD64;
	sub_820F5F90(ctx, base);
	// stw r3,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r3.u32);
loc_820BDD68:
	// lwz r3,28(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_820BDD74:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BDD80"))) PPC_WEAK_FUNC(sub_820BDD80);
PPC_FUNC_IMPL(__imp__sub_820BDD80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82226d78
	sub_82226D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BDD84"))) PPC_WEAK_FUNC(sub_820BDD84);
PPC_FUNC_IMPL(__imp__sub_820BDD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDD88"))) PPC_WEAK_FUNC(sub_820BDD88);
PPC_FUNC_IMPL(__imp__sub_820BDD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BDD90;
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
	ctx.lr = 0x820BDDAC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bde0c
	if (ctx.cr6.eq) goto loc_820BDE0C;
loc_820BDDB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bddd0
	if (!ctx.cr6.eq) goto loc_820BDDD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4c88
	ctx.lr = 0x820BDDD0;
	sub_820F4C88(ctx, base);
loc_820BDDD0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bdde8
	if (ctx.cr6.eq) goto loc_820BDDE8;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_820BDDE8:
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
	ctx.lr = 0x820BDE00;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bddb8
	if (!ctx.cr6.eq) goto loc_820BDDB8;
loc_820BDE0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BDE14"))) PPC_WEAK_FUNC(sub_820BDE14);
PPC_FUNC_IMPL(__imp__sub_820BDE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDE18"))) PPC_WEAK_FUNC(sub_820BDE18);
PPC_FUNC_IMPL(__imp__sub_820BDE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820BDE20;
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
loc_820BDE48:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820bde9c
	if (!ctx.cr6.eq) goto loc_820BDE9C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820bdf08
	if (!ctx.cr6.eq) goto loc_820BDF08;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820BDE60;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bde6c
	if (!ctx.cr6.eq) goto loc_820BDE6C;
	// bl 0x821b3000
	ctx.lr = 0x820BDE6C;
	sub_821B3000(ctx, base);
loc_820BDE6C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bde94
	if (ctx.cr6.eq) goto loc_820BDE94;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bde94
	if (ctx.cr6.eq) goto loc_820BDE94;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820bdeb8
	goto loc_820BDEB8;
loc_820BDE94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bdeb8
	goto loc_820BDEB8;
loc_820BDE9C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820bdec8
	if (!ctx.cr6.eq) goto loc_820BDEC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bdf08
	if (ctx.cr6.eq) goto loc_820BDF08;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820bdf08
	if (!ctx.cr6.eq) goto loc_820BDF08;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BDEB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bdeec
	if (ctx.cr6.eq) goto loc_820BDEEC;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bdeec
	goto loc_820BDEEC;
loc_820BDEC8:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820bded8
	if (!ctx.cr6.eq) goto loc_820BDED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bdeec
	goto loc_820BDEEC;
loc_820BDED8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BDEEC;
	sub_820F3178(ctx, base);
loc_820BDEEC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bdf08
	if (ctx.cr6.eq) goto loc_820BDF08;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// or r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 | ctx.r26.u64;
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// b 0x820bde48
	goto loc_820BDE48;
loc_820BDF08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BDF10"))) PPC_WEAK_FUNC(sub_820BDF10);
PPC_FUNC_IMPL(__imp__sub_820BDF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820BDF18;
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
loc_820BDF40:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820bdf94
	if (!ctx.cr6.eq) goto loc_820BDF94;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820be000
	if (!ctx.cr6.eq) goto loc_820BE000;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820BDF58;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bdf64
	if (!ctx.cr6.eq) goto loc_820BDF64;
	// bl 0x821b3000
	ctx.lr = 0x820BDF64;
	sub_821B3000(ctx, base);
loc_820BDF64:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bdf8c
	if (ctx.cr6.eq) goto loc_820BDF8C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bdf8c
	if (ctx.cr6.eq) goto loc_820BDF8C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820bdfb0
	goto loc_820BDFB0;
loc_820BDF8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bdfb0
	goto loc_820BDFB0;
loc_820BDF94:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820bdfc0
	if (!ctx.cr6.eq) goto loc_820BDFC0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be000
	if (ctx.cr6.eq) goto loc_820BE000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820be000
	if (!ctx.cr6.eq) goto loc_820BE000;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BDFB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bdfe4
	if (ctx.cr6.eq) goto loc_820BDFE4;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bdfe4
	goto loc_820BDFE4;
loc_820BDFC0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820bdfd0
	if (!ctx.cr6.eq) goto loc_820BDFD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bdfe4
	goto loc_820BDFE4;
loc_820BDFD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BDFE4;
	sub_820F3178(ctx, base);
loc_820BDFE4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be000
	if (ctx.cr6.eq) goto loc_820BE000;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// andc r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r26.u64;
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// b 0x820bdf40
	goto loc_820BDF40;
loc_820BE000:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE008"))) PPC_WEAK_FUNC(sub_820BE008);
PPC_FUNC_IMPL(__imp__sub_820BE008) {
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
	// bne cr6,0x820be048
	if (!ctx.cr6.eq) goto loc_820BE048;
	// bl 0x820ddca8
	ctx.lr = 0x820BE030;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be040
	if (ctx.cr6.eq) goto loc_820BE040;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820be064
	goto loc_820BE064;
loc_820BE040:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820be064
	goto loc_820BE064;
loc_820BE048:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820be074
	if (!ctx.cr6.eq) goto loc_820BE074;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be0b0
	if (ctx.cr6.eq) goto loc_820BE0B0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BE064:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be090
	if (ctx.cr6.eq) goto loc_820BE090;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820be090
	goto loc_820BE090;
loc_820BE074:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820be0b0
	if (ctx.cr6.eq) goto loc_820BE0B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BE090;
	sub_820F3178(ctx, base);
loc_820BE090:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be0b0
	if (ctx.cr6.eq) goto loc_820BE0B0;
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
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
loc_820BE0B0:
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

__attribute__((alias("__imp__sub_820BE0C8"))) PPC_WEAK_FUNC(sub_820BE0C8);
PPC_FUNC_IMPL(__imp__sub_820BE0C8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820bd440
	sub_820BD440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE0D0"))) PPC_WEAK_FUNC(sub_820BE0D0);
PPC_FUNC_IMPL(__imp__sub_820BE0D0) {
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
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,4323
	ctx.r6.s64 = ctx.r11.s64 + 4323;
	// addi r7,r9,-18000
	ctx.r7.s64 = ctx.r9.s64 + -18000;
loc_820BE0F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820be10c
	if (ctx.cr6.eq) goto loc_820BE10C;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// addi r11,r11,-257
	ctx.r11.s64 = ctx.r11.s64 + -257;
loc_820BE10C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bge cr6,0x820be180
	if (!ctx.cr6.lt) goto loc_820BE180;
loc_820BE128:
	// slw r8,r5,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r4,r8,25
	ctx.r4.u64 = ctx.r8.u32 & 0x7F;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820be16c
	if (ctx.cr6.eq) goto loc_820BE16C;
loc_820BE138:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820be148
	if (ctx.cr6.eq) goto loc_820BE148;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x820be14c
	goto loc_820BE14C;
loc_820BE148:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_820BE14C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820be16c
	if (ctx.cr6.eq) goto loc_820BE16C;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r4,r8,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820be138
	if (!ctx.cr6.eq) goto loc_820BE138;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x820be184
	goto loc_820BE184;
loc_820BE16C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x820be128
	if (ctx.cr6.lt) goto loc_820BE128;
loc_820BE180:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820BE184:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be1f4
	if (ctx.cr6.eq) goto loc_820BE1F4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_820BE198:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// beq cr6,0x820be1bc
	if (ctx.cr6.eq) goto loc_820BE1BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820be198
	if (ctx.cr6.eq) goto loc_820BE198;
loc_820BE1BC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820be0f8
	if (!ctx.cr6.eq) goto loc_820BE0F8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820be1dc
	if (!ctx.cr6.eq) goto loc_820BE1DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BE1D8;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BE1DC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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
loc_820BE1F4:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_820BE20C"))) PPC_WEAK_FUNC(sub_820BE20C);
PPC_FUNC_IMPL(__imp__sub_820BE20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE210"))) PPC_WEAK_FUNC(sub_820BE210);
PPC_FUNC_IMPL(__imp__sub_820BE210) {
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
	// bne cr6,0x820be250
	if (!ctx.cr6.eq) goto loc_820BE250;
	// bl 0x820ddca8
	ctx.lr = 0x820BE238;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be248
	if (ctx.cr6.eq) goto loc_820BE248;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820be26c
	goto loc_820BE26C;
loc_820BE248:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820be26c
	goto loc_820BE26C;
loc_820BE250:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820be27c
	if (!ctx.cr6.eq) goto loc_820BE27C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be2bc
	if (ctx.cr6.eq) goto loc_820BE2BC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BE26C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be298
	if (ctx.cr6.eq) goto loc_820BE298;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820be298
	goto loc_820BE298;
loc_820BE27C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820be2bc
	if (ctx.cr6.eq) goto loc_820BE2BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BE298;
	sub_820F3178(ctx, base);
loc_820BE298:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be2bc
	if (ctx.cr6.eq) goto loc_820BE2BC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,4323
	ctx.r3.s64 = ctx.r11.s64 + 4323;
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
loc_820BE2BC:
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

__attribute__((alias("__imp__sub_820BE2D4"))) PPC_WEAK_FUNC(sub_820BE2D4);
PPC_FUNC_IMPL(__imp__sub_820BE2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE2D8"))) PPC_WEAK_FUNC(sub_820BE2D8);
PPC_FUNC_IMPL(__imp__sub_820BE2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BE2E0;
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
loc_820BE304:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820be358
	if (!ctx.cr6.eq) goto loc_820BE358;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820be3b4
	if (!ctx.cr6.eq) goto loc_820BE3B4;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820BE31C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820be328
	if (!ctx.cr6.eq) goto loc_820BE328;
	// bl 0x821b3000
	ctx.lr = 0x820BE328;
	sub_821B3000(ctx, base);
loc_820BE328:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820be350
	if (ctx.cr6.eq) goto loc_820BE350;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820be350
	if (ctx.cr6.eq) goto loc_820BE350;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820be374
	goto loc_820BE374;
loc_820BE350:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820be374
	goto loc_820BE374;
loc_820BE358:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820be384
	if (!ctx.cr6.eq) goto loc_820BE384;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be3b4
	if (ctx.cr6.eq) goto loc_820BE3B4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820be3b4
	if (!ctx.cr6.eq) goto loc_820BE3B4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BE374:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be3a8
	if (ctx.cr6.eq) goto loc_820BE3A8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820be3a8
	goto loc_820BE3A8;
loc_820BE384:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820be394
	if (!ctx.cr6.eq) goto loc_820BE394;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820be3a8
	goto loc_820BE3A8;
loc_820BE394:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BE3A8;
	sub_820F3178(ctx, base);
loc_820BE3A8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820be304
	if (!ctx.cr6.eq) goto loc_820BE304;
loc_820BE3B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE3BC"))) PPC_WEAK_FUNC(sub_820BE3BC);
PPC_FUNC_IMPL(__imp__sub_820BE3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE3C0"))) PPC_WEAK_FUNC(sub_820BE3C0);
PPC_FUNC_IMPL(__imp__sub_820BE3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820BE3C8;
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
loc_820BE3F0:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820be444
	if (!ctx.cr6.eq) goto loc_820BE444;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820be4a8
	if (!ctx.cr6.eq) goto loc_820BE4A8;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820BE408;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820be414
	if (!ctx.cr6.eq) goto loc_820BE414;
	// bl 0x821b3000
	ctx.lr = 0x820BE414;
	sub_821B3000(ctx, base);
loc_820BE414:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820be43c
	if (ctx.cr6.eq) goto loc_820BE43C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820be43c
	if (ctx.cr6.eq) goto loc_820BE43C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820be460
	goto loc_820BE460;
loc_820BE43C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820be460
	goto loc_820BE460;
loc_820BE444:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820be470
	if (!ctx.cr6.eq) goto loc_820BE470;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be4a8
	if (ctx.cr6.eq) goto loc_820BE4A8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820be4a8
	if (!ctx.cr6.eq) goto loc_820BE4A8;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BE460:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820be494
	if (ctx.cr6.eq) goto loc_820BE494;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820be494
	goto loc_820BE494;
loc_820BE470:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820be480
	if (!ctx.cr6.eq) goto loc_820BE480;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820be494
	goto loc_820BE494;
loc_820BE480:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BE494;
	sub_820F3178(ctx, base);
loc_820BE494:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be4a8
	if (ctx.cr6.eq) goto loc_820BE4A8;
	// stw r26,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r26.u32);
	// b 0x820be3f0
	goto loc_820BE3F0;
loc_820BE4A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE4B0"))) PPC_WEAK_FUNC(sub_820BE4B0);
PPC_FUNC_IMPL(__imp__sub_820BE4B0) {
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
	ctx.lr = 0x820BE4CC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be4e8
	if (ctx.cr6.eq) goto loc_820BE4E8;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BE4E8:
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

__attribute__((alias("__imp__sub_820BE4FC"))) PPC_WEAK_FUNC(sub_820BE4FC);
PPC_FUNC_IMPL(__imp__sub_820BE4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE500"))) PPC_WEAK_FUNC(sub_820BE500);
PPC_FUNC_IMPL(__imp__sub_820BE500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820BE508;
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
	ctx.lr = 0x820BE528;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be56c
	if (ctx.cr6.eq) goto loc_820BE56C;
loc_820BE534:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820efb90
	ctx.lr = 0x820BE540;
	sub_820EFB90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820be578
	if (!ctx.cr6.eq) goto loc_820BE578;
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
	ctx.lr = 0x820BE560;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820be534
	if (!ctx.cr6.eq) goto loc_820BE534;
loc_820BE56C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820BE578:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE584"))) PPC_WEAK_FUNC(sub_820BE584);
PPC_FUNC_IMPL(__imp__sub_820BE584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE588"))) PPC_WEAK_FUNC(sub_820BE588);
PPC_FUNC_IMPL(__imp__sub_820BE588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BE590;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lfs f30,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x820be5c8
	if (ctx.cr6.gt) goto loc_820BE5C8;
	// lfs f31,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f31.f64 = double(temp.f32);
loc_820BE5C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820BE5E0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820be628
	if (ctx.cr6.eq) goto loc_820BE628;
loc_820BE5EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820efb90
	ctx.lr = 0x820BE5F8;
	sub_820EFB90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820be63c
	if (!ctx.cr6.eq) goto loc_820BE63C;
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
	ctx.lr = 0x820BE61C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820be5ec
	if (!ctx.cr6.eq) goto loc_820BE5EC;
loc_820BE628:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820BE63C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x820be64c
	if (ctx.cr6.gt) goto loc_820BE64C;
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x820be650
	goto loc_820BE650;
loc_820BE64C:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820BE650:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bne cr6,0x820be668
	if (!ctx.cr6.eq) goto loc_820BE668;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
loc_820BE668:
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE68C"))) PPC_WEAK_FUNC(sub_820BE68C);
PPC_FUNC_IMPL(__imp__sub_820BE68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE690"))) PPC_WEAK_FUNC(sub_820BE690);
PPC_FUNC_IMPL(__imp__sub_820BE690) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,29496
	ctx.r11.s64 = ctx.r11.s64 + 29496;
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE6DC"))) PPC_WEAK_FUNC(sub_820BE6DC);
PPC_FUNC_IMPL(__imp__sub_820BE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE6E0"))) PPC_WEAK_FUNC(sub_820BE6E0);
PPC_FUNC_IMPL(__imp__sub_820BE6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,29496
	ctx.r11.s64 = ctx.r11.s64 + 29496;
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE73C"))) PPC_WEAK_FUNC(sub_820BE73C);
PPC_FUNC_IMPL(__imp__sub_820BE73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE740"))) PPC_WEAK_FUNC(sub_820BE740);
PPC_FUNC_IMPL(__imp__sub_820BE740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bge cr6,0x820be784
	if (!ctx.cr6.lt) goto loc_820BE784;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,29496
	ctx.r11.s64 = ctx.r11.s64 + 29496;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820be784
	if (!ctx.cr6.eq) goto loc_820BE784;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820be784
	if (ctx.cr6.eq) goto loc_820BE784;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820BE784:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE794"))) PPC_WEAK_FUNC(sub_820BE794);
PPC_FUNC_IMPL(__imp__sub_820BE794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE798"))) PPC_WEAK_FUNC(sub_820BE798);
PPC_FUNC_IMPL(__imp__sub_820BE798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// blt cr6,0x820be7ac
	if (ctx.cr6.lt) goto loc_820BE7AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820be7dc
	goto loc_820BE7DC;
loc_820BE7AC:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,29496
	ctx.r11.s64 = ctx.r11.s64 + 29496;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820be7d4
	if (ctx.cr6.eq) goto loc_820BE7D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820be7dc
	goto loc_820BE7DC;
loc_820BE7D4:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_820BE7DC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820be7f4
	if (ctx.cr6.gt) goto loc_820BE7F4;
	// lfs f1,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
loc_820BE7F4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820be80c
	if (ctx.cr6.gt) goto loc_820BE80C;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
loc_820BE80C:
	// stfs f1,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE814"))) PPC_WEAK_FUNC(sub_820BE814);
PPC_FUNC_IMPL(__imp__sub_820BE814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE818"))) PPC_WEAK_FUNC(sub_820BE818);
PPC_FUNC_IMPL(__imp__sub_820BE818) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,29496
	ctx.r11.s64 = ctx.r11.s64 + 29496;
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE864"))) PPC_WEAK_FUNC(sub_820BE864);
PPC_FUNC_IMPL(__imp__sub_820BE864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE868"))) PPC_WEAK_FUNC(sub_820BE868);
PPC_FUNC_IMPL(__imp__sub_820BE868) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,29496
	ctx.r11.s64 = ctx.r11.s64 + 29496;
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE8B4"))) PPC_WEAK_FUNC(sub_820BE8B4);
PPC_FUNC_IMPL(__imp__sub_820BE8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE8B8"))) PPC_WEAK_FUNC(sub_820BE8B8);
PPC_FUNC_IMPL(__imp__sub_820BE8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820BE8C0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
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
	ctx.lr = 0x820BE8E4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bea9c
	if (ctx.cr6.eq) goto loc_820BEA9C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_820BE8FC:
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f9,f12,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fmuls f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f5,96(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmuls f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f3,104(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// fmuls f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f4,100(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// stfs f1,96(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmuls f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// fmuls f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f12,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f4,112(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fmuls f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f3,116(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fmuls f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f2,120(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f9,112(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fmuls f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// fmuls f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f10,116(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f8,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lfs f7,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// lfs f6,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f1,f31,f2
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f2.f64));
	// fmuls f0,f8,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// fmuls f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f5,128(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f7,136(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f6,132(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// bl 0x820efed0
	ctx.lr = 0x820BEA40;
	sub_820EFED0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bea60
	if (ctx.cr6.eq) goto loc_820BEA60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BEA60:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bea78
	if (ctx.cr6.eq) goto loc_820BEA78;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
loc_820BEA78:
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
	ctx.lr = 0x820BEA90;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820be8fc
	if (!ctx.cr6.eq) goto loc_820BE8FC;
loc_820BEA9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEAA8"))) PPC_WEAK_FUNC(sub_820BEAA8);
PPC_FUNC_IMPL(__imp__sub_820BEAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BEAB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r5,4096
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4096, ctx.xer);
	// bge cr6,0x820beaec
	if (!ctx.cr6.lt) goto loc_820BEAEC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820beaec
	if (ctx.cr6.eq) goto loc_820BEAEC;
	// lwz r27,448(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
loc_820BEAEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820BEB04;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820beb58
	if (ctx.cr6.eq) goto loc_820BEB58;
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
loc_820BEB14:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// sth r30,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r30.u16);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820beb34
	if (ctx.cr6.eq) goto loc_820BEB34;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1130
	ctx.lr = 0x820BEB34;
	sub_820F1130(ctx, base);
loc_820BEB34:
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
	ctx.lr = 0x820BEB4C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820beb14
	if (!ctx.cr6.eq) goto loc_820BEB14;
loc_820BEB58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEB60"))) PPC_WEAK_FUNC(sub_820BEB60);
PPC_FUNC_IMPL(__imp__sub_820BEB60) {
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
	// bne cr6,0x820beba0
	if (!ctx.cr6.eq) goto loc_820BEBA0;
	// bl 0x820ddca8
	ctx.lr = 0x820BEB88;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820beb98
	if (ctx.cr6.eq) goto loc_820BEB98;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bebbc
	goto loc_820BEBBC;
loc_820BEB98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bebbc
	goto loc_820BEBBC;
loc_820BEBA0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bebcc
	if (!ctx.cr6.eq) goto loc_820BEBCC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bec08
	if (ctx.cr6.eq) goto loc_820BEC08;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BEBBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bebe8
	if (ctx.cr6.eq) goto loc_820BEBE8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bebe8
	goto loc_820BEBE8;
loc_820BEBCC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bec08
	if (ctx.cr6.eq) goto loc_820BEC08;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BEBE8;
	sub_820F3178(ctx, base);
loc_820BEBE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bec08
	if (ctx.cr6.eq) goto loc_820BEC08;
	// lhz r3,178(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 178);
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
loc_820BEC08:
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

__attribute__((alias("__imp__sub_820BEC20"))) PPC_WEAK_FUNC(sub_820BEC20);
PPC_FUNC_IMPL(__imp__sub_820BEC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BEC28;
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
	ctx.lr = 0x820BEC48;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bec8c
	if (ctx.cr6.eq) goto loc_820BEC8C;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
loc_820BEC54:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// bne cr6,0x820bec68
	if (!ctx.cr6.eq) goto loc_820BEC68;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_820BEC68:
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
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
	ctx.lr = 0x820BEC84;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bec54
	if (!ctx.cr6.eq) goto loc_820BEC54;
loc_820BEC8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEC94"))) PPC_WEAK_FUNC(sub_820BEC94);
PPC_FUNC_IMPL(__imp__sub_820BEC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEC98"))) PPC_WEAK_FUNC(sub_820BEC98);
PPC_FUNC_IMPL(__imp__sub_820BEC98) {
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
	// bne cr6,0x820becd8
	if (!ctx.cr6.eq) goto loc_820BECD8;
	// bl 0x820ddca8
	ctx.lr = 0x820BECC0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820becd0
	if (ctx.cr6.eq) goto loc_820BECD0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820becf4
	goto loc_820BECF4;
loc_820BECD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820becf4
	goto loc_820BECF4;
loc_820BECD8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bed04
	if (!ctx.cr6.eq) goto loc_820BED04;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bed44
	if (ctx.cr6.eq) goto loc_820BED44;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BECF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bed20
	if (ctx.cr6.eq) goto loc_820BED20;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bed20
	goto loc_820BED20;
loc_820BED04:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bed44
	if (ctx.cr6.eq) goto loc_820BED44;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BED20;
	sub_820F3178(ctx, base);
loc_820BED20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bed44
	if (ctx.cr6.eq) goto loc_820BED44;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
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
loc_820BED44:
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

__attribute__((alias("__imp__sub_820BED5C"))) PPC_WEAK_FUNC(sub_820BED5C);
PPC_FUNC_IMPL(__imp__sub_820BED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BED60"))) PPC_WEAK_FUNC(sub_820BED60);
PPC_FUNC_IMPL(__imp__sub_820BED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BED68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x820bee10
	if (ctx.cr6.eq) goto loc_820BEE10;
	// bl 0x82085870
	ctx.lr = 0x820BED90;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bee58
	if (ctx.cr6.eq) goto loc_820BEE58;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r27,r11,-29208
	ctx.r27.s64 = ctx.r11.s64 + -29208;
loc_820BEDA8:
	// lhz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 178);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bede4
	if (!ctx.cr6.lt) goto loc_820BEDE4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bede4
	if (ctx.cr6.eq) goto loc_820BEDE4;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bede4
	if (ctx.cr6.eq) goto loc_820BEDE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1130
	ctx.lr = 0x820BEDE4;
	sub_820F1130(ctx, base);
loc_820BEDE4:
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
	ctx.lr = 0x820BEDFC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820beda8
	if (!ctx.cr6.eq) goto loc_820BEDA8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820BEE10:
	// bl 0x82085870
	ctx.lr = 0x820BEE14;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bee58
	if (ctx.cr6.eq) goto loc_820BEE58;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BEE24:
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1130
	ctx.lr = 0x820BEE34;
	sub_820F1130(ctx, base);
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
	ctx.lr = 0x820BEE4C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bee24
	if (!ctx.cr6.eq) goto loc_820BEE24;
loc_820BEE58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEE60"))) PPC_WEAK_FUNC(sub_820BEE60);
PPC_FUNC_IMPL(__imp__sub_820BEE60) {
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
	// bne cr6,0x820beea0
	if (!ctx.cr6.eq) goto loc_820BEEA0;
	// bl 0x820ddca8
	ctx.lr = 0x820BEE88;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bee98
	if (ctx.cr6.eq) goto loc_820BEE98;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820beebc
	goto loc_820BEEBC;
loc_820BEE98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820beebc
	goto loc_820BEEBC;
loc_820BEEA0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820beecc
	if (!ctx.cr6.eq) goto loc_820BEECC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bef08
	if (ctx.cr6.eq) goto loc_820BEF08;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BEEBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820beee8
	if (ctx.cr6.eq) goto loc_820BEEE8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820beee8
	goto loc_820BEEE8;
loc_820BEECC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bef08
	if (ctx.cr6.eq) goto loc_820BEF08;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BEEE8;
	sub_820F3178(ctx, base);
loc_820BEEE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bef08
	if (ctx.cr6.eq) goto loc_820BEF08;
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
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
loc_820BEF08:
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

__attribute__((alias("__imp__sub_820BEF20"))) PPC_WEAK_FUNC(sub_820BEF20);
PPC_FUNC_IMPL(__imp__sub_820BEF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BEF28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
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
	ctx.lr = 0x820BEF48;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820befc4
	if (ctx.cr6.eq) goto loc_820BEFC4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r27,r11,-29208
	ctx.r27.s64 = ctx.r11.s64 + -29208;
loc_820BEF5C:
	// lhz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 178);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820befa0
	if (!ctx.cr6.lt) goto loc_820BEFA0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820befa0
	if (ctx.cr6.eq) goto loc_820BEFA0;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bef9c
	if (!ctx.cr6.eq) goto loc_820BEF9C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820BEF9C:
	// bl 0x820f1130
	ctx.lr = 0x820BEFA0;
	sub_820F1130(ctx, base);
loc_820BEFA0:
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
	ctx.lr = 0x820BEFB8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bef5c
	if (!ctx.cr6.eq) goto loc_820BEF5C;
loc_820BEFC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEFCC"))) PPC_WEAK_FUNC(sub_820BEFCC);
PPC_FUNC_IMPL(__imp__sub_820BEFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEFD0"))) PPC_WEAK_FUNC(sub_820BEFD0);
PPC_FUNC_IMPL(__imp__sub_820BEFD0) {
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
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf014
	if (!ctx.cr6.eq) goto loc_820BF014;
	// bl 0x820ddca8
	ctx.lr = 0x820BEFFC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf00c
	if (ctx.cr6.eq) goto loc_820BF00C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bf030
	goto loc_820BF030;
loc_820BF00C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bf030
	goto loc_820BF030;
loc_820BF014:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf040
	if (!ctx.cr6.eq) goto loc_820BF040;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf0d0
	if (ctx.cr6.eq) goto loc_820BF0D0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BF030:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf05c
	if (ctx.cr6.eq) goto loc_820BF05C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bf05c
	goto loc_820BF05C;
loc_820BF040:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bf0d0
	if (ctx.cr6.eq) goto loc_820BF0D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BF05C;
	sub_820F3178(ctx, base);
loc_820BF05C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf0d0
	if (ctx.cr6.eq) goto loc_820BF0D0;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820bf0d0
	if (ctx.cr6.eq) goto loc_820BF0D0;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x820bf0d0
	if (!ctx.cr6.eq) goto loc_820BF0D0;
	// lwz r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820abe28
	ctx.lr = 0x820BF08C;
	sub_820ABE28(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x820bf0d0
	if (ctx.cr6.lt) goto loc_820BF0D0;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf0a8
	if (ctx.cr6.eq) goto loc_820BF0A8;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
loc_820BF0A8:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820bf0d0
	if (ctx.cr6.gt) goto loc_820BF0D0;
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// li r10,144
	ctx.r10.s64 = 144;
	// divw r3,r11,r10
	ctx.r3.s32 = ctx.r11.s32 / ctx.r10.s32;
	// b 0x820bf0d4
	goto loc_820BF0D4;
loc_820BF0D0:
	// li r3,255
	ctx.r3.s64 = 255;
loc_820BF0D4:
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

__attribute__((alias("__imp__sub_820BF0EC"))) PPC_WEAK_FUNC(sub_820BF0EC);
PPC_FUNC_IMPL(__imp__sub_820BF0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF0F0"))) PPC_WEAK_FUNC(sub_820BF0F0);
PPC_FUNC_IMPL(__imp__sub_820BF0F0) {
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
	// bne cr6,0x820bf130
	if (!ctx.cr6.eq) goto loc_820BF130;
	// bl 0x820ddca8
	ctx.lr = 0x820BF118;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf128
	if (ctx.cr6.eq) goto loc_820BF128;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bf14c
	goto loc_820BF14C;
loc_820BF128:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bf14c
	goto loc_820BF14C;
loc_820BF130:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf15c
	if (!ctx.cr6.eq) goto loc_820BF15C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf1bc
	if (ctx.cr6.eq) goto loc_820BF1BC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BF14C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf178
	if (ctx.cr6.eq) goto loc_820BF178;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bf178
	goto loc_820BF178;
loc_820BF15C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bf1bc
	if (ctx.cr6.eq) goto loc_820BF1BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BF178;
	sub_820F3178(ctx, base);
loc_820BF178:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf1bc
	if (ctx.cr6.eq) goto loc_820BF1BC;
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820bf1bc
	if (ctx.cr6.eq) goto loc_820BF1BC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bf1a4
	if (!ctx.cr6.eq) goto loc_820BF1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BF1A0;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BF1A4:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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
loc_820BF1BC:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_820BF1D4"))) PPC_WEAK_FUNC(sub_820BF1D4);
PPC_FUNC_IMPL(__imp__sub_820BF1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF1D8"))) PPC_WEAK_FUNC(sub_820BF1D8);
PPC_FUNC_IMPL(__imp__sub_820BF1D8) {
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
	// bne cr6,0x820bf218
	if (!ctx.cr6.eq) goto loc_820BF218;
	// bl 0x820ddca8
	ctx.lr = 0x820BF200;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf210
	if (ctx.cr6.eq) goto loc_820BF210;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bf234
	goto loc_820BF234;
loc_820BF210:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bf234
	goto loc_820BF234;
loc_820BF218:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf244
	if (!ctx.cr6.eq) goto loc_820BF244;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf2a4
	if (ctx.cr6.eq) goto loc_820BF2A4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BF234:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf260
	if (ctx.cr6.eq) goto loc_820BF260;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bf260
	goto loc_820BF260;
loc_820BF244:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bf2a4
	if (ctx.cr6.eq) goto loc_820BF2A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BF260;
	sub_820F3178(ctx, base);
loc_820BF260:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf2a4
	if (ctx.cr6.eq) goto loc_820BF2A4;
	// lwz r31,224(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820bf2a4
	if (ctx.cr6.eq) goto loc_820BF2A4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bf28c
	if (!ctx.cr6.eq) goto loc_820BF28C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BF288;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BF28C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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
loc_820BF2A4:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_820BF2BC"))) PPC_WEAK_FUNC(sub_820BF2BC);
PPC_FUNC_IMPL(__imp__sub_820BF2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF2C0"))) PPC_WEAK_FUNC(sub_820BF2C0);
PPC_FUNC_IMPL(__imp__sub_820BF2C0) {
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
	// bne cr6,0x820bf300
	if (!ctx.cr6.eq) goto loc_820BF300;
	// bl 0x820ddca8
	ctx.lr = 0x820BF2E8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf2f8
	if (ctx.cr6.eq) goto loc_820BF2F8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bf31c
	goto loc_820BF31C;
loc_820BF2F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bf31c
	goto loc_820BF31C;
loc_820BF300:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf32c
	if (!ctx.cr6.eq) goto loc_820BF32C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf38c
	if (ctx.cr6.eq) goto loc_820BF38C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BF31C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf348
	if (ctx.cr6.eq) goto loc_820BF348;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bf348
	goto loc_820BF348;
loc_820BF32C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bf38c
	if (ctx.cr6.eq) goto loc_820BF38C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BF348;
	sub_820F3178(ctx, base);
loc_820BF348:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf38c
	if (ctx.cr6.eq) goto loc_820BF38C;
	// lwz r31,232(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820bf38c
	if (ctx.cr6.eq) goto loc_820BF38C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bf374
	if (!ctx.cr6.eq) goto loc_820BF374;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BF370;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BF374:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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
loc_820BF38C:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_820BF3A4"))) PPC_WEAK_FUNC(sub_820BF3A4);
PPC_FUNC_IMPL(__imp__sub_820BF3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF3A8"))) PPC_WEAK_FUNC(sub_820BF3A8);
PPC_FUNC_IMPL(__imp__sub_820BF3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820BF3B0;
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf3f4
	if (!ctx.cr6.eq) goto loc_820BF3F4;
	// bl 0x820ddca8
	ctx.lr = 0x820BF3DC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf3ec
	if (ctx.cr6.eq) goto loc_820BF3EC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bf410
	goto loc_820BF410;
loc_820BF3EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bf410
	goto loc_820BF410;
loc_820BF3F4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf420
	if (!ctx.cr6.eq) goto loc_820BF420;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf4cc
	if (ctx.cr6.eq) goto loc_820BF4CC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BF410:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf43c
	if (ctx.cr6.eq) goto loc_820BF43C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bf43c
	goto loc_820BF43C;
loc_820BF420:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bf4cc
	if (ctx.cr6.eq) goto loc_820BF4CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BF43C;
	sub_820F3178(ctx, base);
loc_820BF43C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf4cc
	if (ctx.cr6.eq) goto loc_820BF4CC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bf464
	if (ctx.cr6.eq) goto loc_820BF464;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_820BF464:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820bf484
	if (ctx.cr6.eq) goto loc_820BF484;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_820BF484:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bf4a4
	if (ctx.cr6.eq) goto loc_820BF4A4;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_820BF4A4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820bf528
	if (ctx.cr6.eq) goto loc_820BF528;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820BF4CC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820bf4ec
	if (ctx.cr6.eq) goto loc_820BF4EC;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820BF4EC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820bf500
	if (ctx.cr6.eq) goto loc_820BF500;
	// stfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820BF500:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bf514
	if (ctx.cr6.eq) goto loc_820BF514;
	// stfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_820BF514:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820bf528
	if (ctx.cr6.eq) goto loc_820BF528;
	// stfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_820BF528:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BF530"))) PPC_WEAK_FUNC(sub_820BF530);
PPC_FUNC_IMPL(__imp__sub_820BF530) {
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
	ctx.lr = 0x820BF54C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf57c
	if (ctx.cr6.eq) goto loc_820BF57C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// addi r10,r11,-129
	ctx.r10.s64 = ctx.r11.s64 + -129;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BF57C:
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

__attribute__((alias("__imp__sub_820BF590"))) PPC_WEAK_FUNC(sub_820BF590);
PPC_FUNC_IMPL(__imp__sub_820BF590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BF598;
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
	ctx.lr = 0x820BF5B4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf5ec
	if (ctx.cr6.eq) goto loc_820BF5EC;
loc_820BF5C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1a90
	ctx.lr = 0x820BF5C8;
	sub_820F1A90(ctx, base);
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
	ctx.lr = 0x820BF5E0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bf5c0
	if (!ctx.cr6.eq) goto loc_820BF5C0;
loc_820BF5EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BF5F4"))) PPC_WEAK_FUNC(sub_820BF5F4);
PPC_FUNC_IMPL(__imp__sub_820BF5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF5F8"))) PPC_WEAK_FUNC(sub_820BF5F8);
PPC_FUNC_IMPL(__imp__sub_820BF5F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,29496
	ctx.r11.s64 = ctx.r9.s64 + 29496;
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
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bne cr6,0x820bf64c
	if (!ctx.cr6.eq) goto loc_820BF64C;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
loc_820BF64C:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF654"))) PPC_WEAK_FUNC(sub_820BF654);
PPC_FUNC_IMPL(__imp__sub_820BF654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF658"))) PPC_WEAK_FUNC(sub_820BF658);
PPC_FUNC_IMPL(__imp__sub_820BF658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820BF660;
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
	ctx.lr = 0x820BF688;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf6ec
	if (ctx.cr6.eq) goto loc_820BF6EC;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r29,r11,0,1,8
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r28,32640
	ctx.r28.s64 = 2139095040;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820BF6AC:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x820bf6cc
	if (ctx.cr6.eq) goto loc_820BF6CC;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x820bf6c8
	if (ctx.cr6.eq) goto loc_820BF6C8;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x820bf6cc
	if (ctx.cr6.lt) goto loc_820BF6CC;
loc_820BF6C8:
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_820BF6CC:
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
	ctx.lr = 0x820BF6E4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bf6ac
	if (!ctx.cr6.eq) goto loc_820BF6AC;
loc_820BF6EC:
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

__attribute__((alias("__imp__sub_820BF6FC"))) PPC_WEAK_FUNC(sub_820BF6FC);
PPC_FUNC_IMPL(__imp__sub_820BF6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF700"))) PPC_WEAK_FUNC(sub_820BF700);
PPC_FUNC_IMPL(__imp__sub_820BF700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	ctx.lr = 0x820BF71C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf738
	if (ctx.cr6.eq) goto loc_820BF738;
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BF738:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF754"))) PPC_WEAK_FUNC(sub_820BF754);
PPC_FUNC_IMPL(__imp__sub_820BF754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF758"))) PPC_WEAK_FUNC(sub_820BF758);
PPC_FUNC_IMPL(__imp__sub_820BF758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BF760;
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
	ctx.lr = 0x820BF780;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf7c4
	if (ctx.cr6.eq) goto loc_820BF7C4;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
loc_820BF78C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bne cr6,0x820bf7a0
	if (!ctx.cr6.eq) goto loc_820BF7A0;
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
loc_820BF7A0:
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
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
	ctx.lr = 0x820BF7BC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bf78c
	if (!ctx.cr6.eq) goto loc_820BF78C;
loc_820BF7C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BF7CC"))) PPC_WEAK_FUNC(sub_820BF7CC);
PPC_FUNC_IMPL(__imp__sub_820BF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF7D0"))) PPC_WEAK_FUNC(sub_820BF7D0);
PPC_FUNC_IMPL(__imp__sub_820BF7D0) {
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
	// bne cr6,0x820bf810
	if (!ctx.cr6.eq) goto loc_820BF810;
	// bl 0x820ddca8
	ctx.lr = 0x820BF7F8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf808
	if (ctx.cr6.eq) goto loc_820BF808;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bf82c
	goto loc_820BF82C;
loc_820BF808:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bf82c
	goto loc_820BF82C;
loc_820BF810:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf83c
	if (!ctx.cr6.eq) goto loc_820BF83C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf880
	if (ctx.cr6.eq) goto loc_820BF880;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BF82C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf858
	if (ctx.cr6.eq) goto loc_820BF858;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bf858
	goto loc_820BF858;
loc_820BF83C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bf880
	if (ctx.cr6.eq) goto loc_820BF880;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BF858;
	sub_820F3178(ctx, base);
loc_820BF858:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf880
	if (ctx.cr6.eq) goto loc_820BF880;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
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
loc_820BF880:
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

__attribute__((alias("__imp__sub_820BF898"))) PPC_WEAK_FUNC(sub_820BF898);
PPC_FUNC_IMPL(__imp__sub_820BF898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BF8A0;
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
	ctx.lr = 0x820BF8C0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf904
	if (ctx.cr6.eq) goto loc_820BF904;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
loc_820BF8CC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bne cr6,0x820bf8e0
	if (!ctx.cr6.eq) goto loc_820BF8E0;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
loc_820BF8E0:
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
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
	ctx.lr = 0x820BF8FC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bf8cc
	if (!ctx.cr6.eq) goto loc_820BF8CC;
loc_820BF904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BF90C"))) PPC_WEAK_FUNC(sub_820BF90C);
PPC_FUNC_IMPL(__imp__sub_820BF90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF910"))) PPC_WEAK_FUNC(sub_820BF910);
PPC_FUNC_IMPL(__imp__sub_820BF910) {
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
	// bne cr6,0x820bf950
	if (!ctx.cr6.eq) goto loc_820BF950;
	// bl 0x820ddca8
	ctx.lr = 0x820BF938;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf948
	if (ctx.cr6.eq) goto loc_820BF948;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bf96c
	goto loc_820BF96C;
loc_820BF948:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bf96c
	goto loc_820BF96C;
loc_820BF950:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bf97c
	if (!ctx.cr6.eq) goto loc_820BF97C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf9c0
	if (ctx.cr6.eq) goto loc_820BF9C0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BF96C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bf998
	if (ctx.cr6.eq) goto loc_820BF998;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bf998
	goto loc_820BF998;
loc_820BF97C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bf9c0
	if (ctx.cr6.eq) goto loc_820BF9C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BF998;
	sub_820F3178(ctx, base);
loc_820BF998:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf9c0
	if (ctx.cr6.eq) goto loc_820BF9C0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
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
loc_820BF9C0:
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

__attribute__((alias("__imp__sub_820BF9D8"))) PPC_WEAK_FUNC(sub_820BF9D8);
PPC_FUNC_IMPL(__imp__sub_820BF9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	ctx.lr = 0x820BF9F4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfa18
	if (ctx.cr6.eq) goto loc_820BFA18;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
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
	// blr 
	return;
loc_820BFA18:
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

__attribute__((alias("__imp__sub_820BFA2C"))) PPC_WEAK_FUNC(sub_820BFA2C);
PPC_FUNC_IMPL(__imp__sub_820BFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFA30"))) PPC_WEAK_FUNC(sub_820BFA30);
PPC_FUNC_IMPL(__imp__sub_820BFA30) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820BFA54;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfaa0
	if (ctx.cr6.eq) goto loc_820BFAA0;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r9,r11,-18000
	ctx.r9.s64 = ctx.r11.s64 + -18000;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lwz r30,16668(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	// bne cr6,0x820bfa80
	if (!ctx.cr6.eq) goto loc_820BFA80;
	// bl 0x820f5f90
	ctx.lr = 0x820BFA7C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BFA80:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
loc_820BFAA0:
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

__attribute__((alias("__imp__sub_820BFAB8"))) PPC_WEAK_FUNC(sub_820BFAB8);
PPC_FUNC_IMPL(__imp__sub_820BFAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-18000
	ctx.r9.s64 = ctx.r11.s64 + -18000;
	// lwz r11,16668(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BFAD0"))) PPC_WEAK_FUNC(sub_820BFAD0);
PPC_FUNC_IMPL(__imp__sub_820BFAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820BFAD8;
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
loc_820BFB00:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820bfb54
	if (!ctx.cr6.eq) goto loc_820BFB54;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820bfbc4
	if (!ctx.cr6.eq) goto loc_820BFBC4;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820BFB18;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bfb24
	if (!ctx.cr6.eq) goto loc_820BFB24;
	// bl 0x821b3000
	ctx.lr = 0x820BFB24;
	sub_821B3000(ctx, base);
loc_820BFB24:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bfb4c
	if (ctx.cr6.eq) goto loc_820BFB4C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfb4c
	if (ctx.cr6.eq) goto loc_820BFB4C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820bfb70
	goto loc_820BFB70;
loc_820BFB4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bfb70
	goto loc_820BFB70;
loc_820BFB54:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820bfb80
	if (!ctx.cr6.eq) goto loc_820BFB80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bfbc4
	if (ctx.cr6.eq) goto loc_820BFBC4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820bfbc4
	if (!ctx.cr6.eq) goto loc_820BFBC4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BFB70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bfba4
	if (ctx.cr6.eq) goto loc_820BFBA4;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820bfba4
	goto loc_820BFBA4;
loc_820BFB80:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820bfb90
	if (!ctx.cr6.eq) goto loc_820BFB90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bfba4
	goto loc_820BFBA4;
loc_820BFB90:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BFBA4;
	sub_820F3178(ctx, base);
loc_820BFBA4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfbc4
	if (ctx.cr6.eq) goto loc_820BFBC4;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// b 0x820bfb00
	goto loc_820BFB00;
loc_820BFBC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BFBCC"))) PPC_WEAK_FUNC(sub_820BFBCC);
PPC_FUNC_IMPL(__imp__sub_820BFBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFBD0"))) PPC_WEAK_FUNC(sub_820BFBD0);
PPC_FUNC_IMPL(__imp__sub_820BFBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820BFBD8;
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
	ctx.lr = 0x820BFBF8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfc34
	if (ctx.cr6.eq) goto loc_820BFC34;
loc_820BFC04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2070
	ctx.lr = 0x820BFC10;
	sub_820F2070(ctx, base);
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
	ctx.lr = 0x820BFC28;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bfc04
	if (!ctx.cr6.eq) goto loc_820BFC04;
loc_820BFC34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BFC3C"))) PPC_WEAK_FUNC(sub_820BFC3C);
PPC_FUNC_IMPL(__imp__sub_820BFC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFC40"))) PPC_WEAK_FUNC(sub_820BFC40);
PPC_FUNC_IMPL(__imp__sub_820BFC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BFC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820BFC64;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfcb4
	if (ctx.cr6.eq) goto loc_820BFCB4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_820BFC84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2070
	ctx.lr = 0x820BFC90;
	sub_820F2070(ctx, base);
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
	ctx.lr = 0x820BFCA8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bfc84
	if (!ctx.cr6.eq) goto loc_820BFC84;
loc_820BFCB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BFCBC"))) PPC_WEAK_FUNC(sub_820BFCBC);
PPC_FUNC_IMPL(__imp__sub_820BFCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFCC0"))) PPC_WEAK_FUNC(sub_820BFCC0);
PPC_FUNC_IMPL(__imp__sub_820BFCC0) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bfd0c
	if (ctx.cr6.eq) goto loc_820BFD0C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bfd0c
	if (ctx.cr6.eq) goto loc_820BFD0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820BFCEC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfd0c
	if (ctx.cr6.eq) goto loc_820BFD0C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BFD0C:
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

__attribute__((alias("__imp__sub_820BFD20"))) PPC_WEAK_FUNC(sub_820BFD20);
PPC_FUNC_IMPL(__imp__sub_820BFD20) {
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
	ctx.lr = 0x820BFD3C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfd58
	if (ctx.cr6.eq) goto loc_820BFD58;
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BFD58:
	// li r3,256
	ctx.r3.s64 = 256;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BFD6C"))) PPC_WEAK_FUNC(sub_820BFD6C);
PPC_FUNC_IMPL(__imp__sub_820BFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFD70"))) PPC_WEAK_FUNC(sub_820BFD70);
PPC_FUNC_IMPL(__imp__sub_820BFD70) {
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
	ctx.lr = 0x820BFD8C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bfda8
	if (ctx.cr6.eq) goto loc_820BFDA8;
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BFDA8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BFDBC"))) PPC_WEAK_FUNC(sub_820BFDBC);
PPC_FUNC_IMPL(__imp__sub_820BFDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFDC0"))) PPC_WEAK_FUNC(sub_820BFDC0);
PPC_FUNC_IMPL(__imp__sub_820BFDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820bfddc
	if (!ctx.cr6.eq) goto loc_820BFDDC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_820BFDDC:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820bfdec
	if (!ctx.cr6.eq) goto loc_820BFDEC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820BFDEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820f43c8
	sub_820F43C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BFDF4"))) PPC_WEAK_FUNC(sub_820BFDF4);
PPC_FUNC_IMPL(__imp__sub_820BFDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFDF8"))) PPC_WEAK_FUNC(sub_820BFDF8);
PPC_FUNC_IMPL(__imp__sub_820BFDF8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820BFE00;
	__savegprlr_14(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-14392
	ctx.r11.s64 = ctx.r11.s64 + -14392;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// addi r10,r10,-14176
	ctx.r10.s64 = ctx.r10.s64 + -14176;
	// addi r9,r9,-13216
	ctx.r9.s64 = ctx.r9.s64 + -13216;
	// addi r8,r8,-12872
	ctx.r8.s64 = ctx.r8.s64 + -12872;
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// addi r7,r7,-12472
	ctx.r7.s64 = ctx.r7.s64 + -12472;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// addi r6,r6,-12104
	ctx.r6.s64 = ctx.r6.s64 + -12104;
	// addi r5,r5,-11832
	ctx.r5.s64 = ctx.r5.s64 + -11832;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// addi r4,r4,-10104
	ctx.r4.s64 = ctx.r4.s64 + -10104;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// addi r11,r31,-10120
	ctx.r11.s64 = ctx.r31.s64 + -10120;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lis r27,-32244
	ctx.r27.s64 = -2113142784;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// addi r10,r30,-9704
	ctx.r10.s64 = ctx.r30.s64 + -9704;
	// addi r9,r29,-8832
	ctx.r9.s64 = ctx.r29.s64 + -8832;
	// addi r8,r28,-8824
	ctx.r8.s64 = ctx.r28.s64 + -8824;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// stw r9,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r9.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r7,r27,-832
	ctx.r7.s64 = ctx.r27.s64 + -832;
	// addi r6,r26,-8680
	ctx.r6.s64 = ctx.r26.s64 + -8680;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-8432
	ctx.r5.s64 = ctx.r25.s64 + -8432;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// addi r4,r24,-8184
	ctx.r4.s64 = ctx.r24.s64 + -8184;
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// addi r11,r23,-7992
	ctx.r11.s64 = ctx.r23.s64 + -7992;
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r19,-32244
	ctx.r19.s64 = -2113142784;
	// lis r18,-32244
	ctx.r18.s64 = -2113142784;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// lis r16,-32244
	ctx.r16.s64 = -2113142784;
	// lis r15,-32244
	ctx.r15.s64 = -2113142784;
	// addi r10,r22,-10112
	ctx.r10.s64 = ctx.r22.s64 + -10112;
	// addi r9,r21,-7984
	ctx.r9.s64 = ctx.r21.s64 + -7984;
	// addi r8,r20,-7664
	ctx.r8.s64 = ctx.r20.s64 + -7664;
	// stw r10,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-7464
	ctx.r7.s64 = ctx.r19.s64 + -7464;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r6,r18,-7232
	ctx.r6.s64 = ctx.r18.s64 + -7232;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r5,r17,-6912
	ctx.r5.s64 = ctx.r17.s64 + -6912;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r4,r16,-6512
	ctx.r4.s64 = ctx.r16.s64 + -6512;
	// stw r6,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r6.u32);
	// addi r11,r15,-6432
	ctx.r11.s64 = ctx.r15.s64 + -6432;
	// stw r5,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// addi r9,r10,-6336
	ctx.r9.s64 = ctx.r10.s64 + -6336;
	// stw r4,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r4.u32);
	// addi r8,r14,-6248
	ctx.r8.s64 = ctx.r14.s64 + -6248;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r9,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r9.u32);
	// stw r8,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r8.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r6,r6,-6040
	ctx.r6.s64 = ctx.r6.s64 + -6040;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r6,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r6.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// addi r7,r7,-6120
	ctx.r7.s64 = ctx.r7.s64 + -6120;
	// addi r5,r5,-6776
	ctx.r5.s64 = ctx.r5.s64 + -6776;
	// addi r4,r4,-5960
	ctx.r4.s64 = ctx.r4.s64 + -5960;
	// stw r7,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r7.u32);
	// addi r11,r11,-5464
	ctx.r11.s64 = ctx.r11.s64 + -5464;
	// stw r5,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r5.u32);
	// addi r10,r10,-5280
	ctx.r10.s64 = ctx.r10.s64 + -5280;
	// stw r4,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r4.u32);
	// addi r9,r9,-5088
	ctx.r9.s64 = ctx.r9.s64 + -5088;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// addi r8,r8,-4968
	ctx.r8.s64 = ctx.r8.s64 + -4968;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// addi r6,r30,-4512
	ctx.r6.s64 = ctx.r30.s64 + -4512;
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// stw r8,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r8.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r6,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r6.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// lis r27,-32244
	ctx.r27.s64 = -2113142784;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// addi r7,r31,-4768
	ctx.r7.s64 = ctx.r31.s64 + -4768;
	// addi r5,r29,-4320
	ctx.r5.s64 = ctx.r29.s64 + -4320;
	// addi r4,r28,-6992
	ctx.r4.s64 = ctx.r28.s64 + -6992;
	// stw r7,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// addi r11,r27,-4144
	ctx.r11.s64 = ctx.r27.s64 + -4144;
	// stw r5,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r5.u32);
	// addi r10,r26,-3856
	ctx.r10.s64 = ctx.r26.s64 + -3856;
	// stw r4,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// addi r9,r25,-3624
	ctx.r9.s64 = ctx.r25.s64 + -3624;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// addi r8,r24,-3392
	ctx.r8.s64 = ctx.r24.s64 + -3392;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// addi r6,r22,-2768
	ctx.r6.s64 = ctx.r22.s64 + -2768;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r6,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r6.u32);
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r19,-32244
	ctx.r19.s64 = -2113142784;
	// lis r18,-32244
	ctx.r18.s64 = -2113142784;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// lis r16,-32244
	ctx.r16.s64 = -2113142784;
	// addi r7,r23,-3160
	ctx.r7.s64 = ctx.r23.s64 + -3160;
	// addi r5,r21,-2672
	ctx.r5.s64 = ctx.r21.s64 + -2672;
	// lis r15,-32244
	ctx.r15.s64 = -2113142784;
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// addi r4,r20,-2568
	ctx.r4.s64 = ctx.r20.s64 + -2568;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// addi r11,r19,-2472
	ctx.r11.s64 = ctx.r19.s64 + -2472;
	// addi r10,r18,-2304
	ctx.r10.s64 = ctx.r18.s64 + -2304;
	// stw r4,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
	// addi r9,r17,-2216
	ctx.r9.s64 = ctx.r17.s64 + -2216;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// addi r8,r16,-2096
	ctx.r8.s64 = ctx.r16.s64 + -2096;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// addi r7,r15,-1896
	ctx.r7.s64 = ctx.r15.s64 + -1896;
	// stw r8,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// addi r5,r6,-1776
	ctx.r5.s64 = ctx.r6.s64 + -1776;
	// stw r7,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r7.u32);
	// addi r4,r14,-1576
	ctx.r4.s64 = ctx.r14.s64 + -1576;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r5,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// addi r11,r11,-10096
	ctx.r11.s64 = ctx.r11.s64 + -10096;
	// addi r10,r10,-1488
	ctx.r10.s64 = ctx.r10.s64 + -1488;
	// addi r9,r9,-1352
	ctx.r9.s64 = ctx.r9.s64 + -1352;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// addi r8,r8,-1072
	ctx.r8.s64 = ctx.r8.s64 + -1072;
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// addi r7,r7,-960
	ctx.r7.s64 = ctx.r7.s64 + -960;
	// stw r9,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r9.u32);
	// addi r6,r6,-736
	ctx.r6.s64 = ctx.r6.s64 + -736;
	// stw r8,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r8.u32);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// stw r7,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r7.u32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// lis r27,-32244
	ctx.r27.s64 = -2113142784;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// addi r5,r5,-656
	ctx.r5.s64 = ctx.r5.s64 + -656;
	// addi r4,r4,-576
	ctx.r4.s64 = ctx.r4.s64 + -576;
	// addi r11,r31,-1328
	ctx.r11.s64 = ctx.r31.s64 + -1328;
	// stw r5,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r5.u32);
	// addi r10,r30,-13984
	ctx.r10.s64 = ctx.r30.s64 + -13984;
	// stw r4,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
	// addi r9,r29,-13776
	ctx.r9.s64 = ctx.r29.s64 + -13776;
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// addi r8,r28,-13696
	ctx.r8.s64 = ctx.r28.s64 + -13696;
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// addi r7,r27,-13320
	ctx.r7.s64 = ctx.r27.s64 + -13320;
	// stw r9,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r9.u32);
	// addi r6,r26,-13584
	ctx.r6.s64 = ctx.r26.s64 + -13584;
	// stw r8,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r8.u32);
	// stw r7,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r7.u32);
	// stw r6,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r6.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0144"))) PPC_WEAK_FUNC(sub_820C0144);
PPC_FUNC_IMPL(__imp__sub_820C0144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0148"))) PPC_WEAK_FUNC(sub_820C0148);
PPC_FUNC_IMPL(__imp__sub_820C0148) {
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
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c018c
	if (ctx.cr6.eq) goto loc_820C018C;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C018C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C018C:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// andc r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820C01B0"))) PPC_WEAK_FUNC(sub_820C01B0);
PPC_FUNC_IMPL(__imp__sub_820C01B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x820c01e4
	if (!ctx.cr6.lt) goto loc_820C01E4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x820c01f8
	if (!ctx.cr6.lt) goto loc_820C01F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c01f8
	goto loc_820C01F8;
loc_820C01E4:
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x820c01f8
	if (!ctx.cr6.lt) goto loc_820C01F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C01F8:
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfsx f10,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fdivs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfs f3,4(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f1,8(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfsx f0,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r11,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// fmuls f3,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f2,f9,f4
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// stfs f1,8(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0290"))) PPC_WEAK_FUNC(sub_820C0290);
PPC_FUNC_IMPL(__imp__sub_820C0290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C02E4"))) PPC_WEAK_FUNC(sub_820C02E4);
PPC_FUNC_IMPL(__imp__sub_820C02E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C02E8"))) PPC_WEAK_FUNC(sub_820C02E8);
PPC_FUNC_IMPL(__imp__sub_820C02E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8233fa30
	ctx.lr = 0x820C02FC;
	__savefpr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// bl 0x8233c950
	ctx.lr = 0x820C0314;
	sub_8233C950(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8233c950
	ctx.lr = 0x820C0320;
	sub_8233C950(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233c950
	ctx.lr = 0x820C032C;
	sub_8233C950(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8233c870
	ctx.lr = 0x820C0338;
	sub_8233C870(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8233c870
	ctx.lr = 0x820C0344;
	sub_8233C870(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233c870
	ctx.lr = 0x820C0350;
	sub_8233C870(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f12,f29,f27
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// fmuls f11,f30,f28
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// fmuls f10,f27,f28
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fmuls f9,f30,f29
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fmuls f8,f30,f26
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f26.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f7,f26,f27
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f27.f64));
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f29,f26
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f5,f26,f28
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f4,f13,f30
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fneg f3,f12
	ctx.f3.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f2,f13,f29
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fneg f1,f11
	ctx.f1.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmadds f12,f4,f29,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f11,f4,f28,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f3.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f10,f2,f27,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f27.f64 + ctx.f1.f64));
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f9,f0,f28,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f9.f64));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8233fa7c
	ctx.lr = 0x820C03E4;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C03F4"))) PPC_WEAK_FUNC(sub_820C03F4);
PPC_FUNC_IMPL(__imp__sub_820C03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C03F8"))) PPC_WEAK_FUNC(sub_820C03F8);
PPC_FUNC_IMPL(__imp__sub_820C03F8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820c0494
	if (ctx.cr6.eq) goto loc_820C0494;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82257f50
	ctx.lr = 0x820C0450;
	sub_82257F50(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820C0460;
	sub_8233E4E0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822578d8
	ctx.lr = 0x820C0470;
	sub_822578D8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
loc_820C0494:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_820C04AC"))) PPC_WEAK_FUNC(sub_820C04AC);
PPC_FUNC_IMPL(__imp__sub_820C04AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C04B0"))) PPC_WEAK_FUNC(sub_820C04B0);
PPC_FUNC_IMPL(__imp__sub_820C04B0) {
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
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c04f4
	if (!ctx.cr6.eq) goto loc_820C04F4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C04F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C04F4:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// or r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 | ctx.r11.u64;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820C0518"))) PPC_WEAK_FUNC(sub_820C0518);
PPC_FUNC_IMPL(__imp__sub_820C0518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C0520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82087078
	ctx.lr = 0x820C0534;
	sub_82087078(ctx, base);
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820c0578
	if (!ctx.cr6.eq) goto loc_820C0578;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c055c
	if (ctx.cr6.eq) goto loc_820C055C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820b91d0
	ctx.lr = 0x820C0558;
	sub_820B91D0(ctx, base);
	// b 0x820c057c
	goto loc_820C057C;
loc_820C055C:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c0570
	if (ctx.cr6.eq) goto loc_820C0570;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x820c057c
	goto loc_820C057C;
loc_820C0570:
	// bl 0x820b90a0
	ctx.lr = 0x820C0574;
	sub_820B90A0(ctx, base);
	// b 0x820c057c
	goto loc_820C057C;
loc_820C0578:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820C057C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0598
	if (ctx.cr6.eq) goto loc_820C0598;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820c05a0
	goto loc_820C05A0;
loc_820C0598:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_820C05A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c05b0
	if (ctx.cr6.eq) goto loc_820C05B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82172d60
	ctx.lr = 0x820C05B0;
	sub_82172D60(ctx, base);
loc_820C05B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C05B8"))) PPC_WEAK_FUNC(sub_820C05B8);
PPC_FUNC_IMPL(__imp__sub_820C05B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x820c05c8
	if (ctx.cr6.lt) goto loc_820C05C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C05C8:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-24
	ctx.r8.s64 = ctx.r11.s64 + -24;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C05E4"))) PPC_WEAK_FUNC(sub_820C05E4);
PPC_FUNC_IMPL(__imp__sub_820C05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C05E8"))) PPC_WEAK_FUNC(sub_820C05E8);
PPC_FUNC_IMPL(__imp__sub_820C05E8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x820c05f8
	if (ctx.cr6.lt) goto loc_820C05F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C05F8:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20
	ctx.r8.s64 = ctx.r11.s64 + -20;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0614"))) PPC_WEAK_FUNC(sub_820C0614);
PPC_FUNC_IMPL(__imp__sub_820C0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0618"))) PPC_WEAK_FUNC(sub_820C0618);
PPC_FUNC_IMPL(__imp__sub_820C0618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x820c0628
	if (ctx.cr6.lt) goto loc_820C0628;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C0628:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r7,r10,31376
	ctx.r7.s64 = ctx.r10.s64 + 31376;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,204(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820c065c
	if (!ctx.cr6.lt) goto loc_820C065C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C065C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0664"))) PPC_WEAK_FUNC(sub_820C0664);
PPC_FUNC_IMPL(__imp__sub_820C0664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0668"))) PPC_WEAK_FUNC(sub_820C0668);
PPC_FUNC_IMPL(__imp__sub_820C0668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r3,25549(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25549);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0674"))) PPC_WEAK_FUNC(sub_820C0674);
PPC_FUNC_IMPL(__imp__sub_820C0674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0678"))) PPC_WEAK_FUNC(sub_820C0678);
PPC_FUNC_IMPL(__imp__sub_820C0678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C0680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820C06A0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0700
	if (ctx.cr6.eq) goto loc_820C0700;
loc_820C06AC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c06c4
	if (!ctx.cr6.eq) goto loc_820C06C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820C06C0;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820C06C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82104598
	ctx.lr = 0x820C06D0;
	sub_82104598(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// li r6,258
	ctx.r6.s64 = 258;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820C06F4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c06ac
	if (!ctx.cr6.eq) goto loc_820C06AC;
loc_820C0700:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0708"))) PPC_WEAK_FUNC(sub_820C0708);
PPC_FUNC_IMPL(__imp__sub_820C0708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C0710;
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
	ctx.lr = 0x820C072C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0788
	if (ctx.cr6.eq) goto loc_820C0788;
loc_820C0738:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c0750
	if (!ctx.cr6.eq) goto loc_820C0750;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820C074C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820C0750:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82104840
	ctx.lr = 0x820C0758;
	sub_82104840(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// rlwinm r10,r11,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820C077C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c0738
	if (!ctx.cr6.eq) goto loc_820C0738;
loc_820C0788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0790"))) PPC_WEAK_FUNC(sub_820C0790);
PPC_FUNC_IMPL(__imp__sub_820C0790) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bge cr6,0x820c07e8
	if (!ctx.cr6.lt) goto loc_820C07E8;
	// bl 0x820ac088
	ctx.lr = 0x820C07B0;
	sub_820AC088(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// rlwinm r8,r3,16,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF00;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r4,r11,304
	ctx.r4.s64 = ctx.r11.s64 + 304;
	// rlwinm r6,r3,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stwx r9,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u32);
loc_820C07E8:
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

__attribute__((alias("__imp__sub_820C07FC"))) PPC_WEAK_FUNC(sub_820C07FC);
PPC_FUNC_IMPL(__imp__sub_820C07FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0800"))) PPC_WEAK_FUNC(sub_820C0800);
PPC_FUNC_IMPL(__imp__sub_820C0800) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,5656
	ctx.r8.s64 = ctx.r9.s64 + 5656;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,5656(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5656, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0820"))) PPC_WEAK_FUNC(sub_820C0820);
PPC_FUNC_IMPL(__imp__sub_820C0820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c2b00
	ctx.lr = 0x820C083C;
	sub_820C2B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820c0860
	if (!ctx.cr6.eq) goto loc_820C0860;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820C085C;
	sub_8233E4E0(ctx, base);
	// b 0x820c0870
	goto loc_820C0870;
loc_820C0860:
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820C0870:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f10,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x820c0894
	if (!ctx.cr6.lt) goto loc_820C0894;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x820c08a0
	goto loc_820C08A0;
loc_820C0894:
	// fcmpu cr6,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x820c08a0
	if (!ctx.cr6.gt) goto loc_820C08A0;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
loc_820C08A0:
	// lfs f11,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x820c08b4
	if (!ctx.cr6.lt) goto loc_820C08B4;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x820c08c0
	goto loc_820C08C0;
loc_820C08B4:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x820c08c0
	if (!ctx.cr6.gt) goto loc_820C08C0;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_820C08C0:
	// lfs f12,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820c08d4
	if (!ctx.cr6.lt) goto loc_820C08D4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x820c08e0
	goto loc_820C08E0;
loc_820C08D4:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x820c08e0
	if (!ctx.cr6.gt) goto loc_820C08E0;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_820C08E0:
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r11,r11,27648
	ctx.r11.s64 = ctx.r11.s64 + 27648;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// beq cr6,0x820c0900
	if (ctx.cr6.eq) goto loc_820C0900;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
loc_820C0900:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x820c0918
	if (ctx.cr6.eq) goto loc_820C0918;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
loc_820C0918:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x820c0930
	if (ctx.cr6.eq) goto loc_820C0930;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
loc_820C0930:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0944"))) PPC_WEAK_FUNC(sub_820C0944);
PPC_FUNC_IMPL(__imp__sub_820C0944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0948"))) PPC_WEAK_FUNC(sub_820C0948);
PPC_FUNC_IMPL(__imp__sub_820C0948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820c2b00
	ctx.lr = 0x820C0964;
	sub_820C2B00(ctx, base);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,27648
	ctx.r11.s64 = ctx.r11.s64 + 27648;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820c0984
	if (!ctx.cr6.eq) goto loc_820C0984;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_820C0984:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lfs f0,396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// sth r4,180(r1)
	PPC_STORE_U16(ctx.r1.u32 + 180, ctx.r4.u16);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// sth r10,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r10.u16);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// cmplwi cr6,r7,108
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 108, ctx.xer);
	// bne cr6,0x820c0a00
	if (!ctx.cr6.eq) goto loc_820C0A00;
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_820C0A00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820c0a30
	if (!ctx.cr6.eq) goto loc_820C0A30;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820C0A1C;
	sub_8233E4E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C0A30:
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,-32476
	ctx.r9.s64 = ctx.r10.s64 + -32476;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0A54"))) PPC_WEAK_FUNC(sub_820C0A54);
PPC_FUNC_IMPL(__imp__sub_820C0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0A58"))) PPC_WEAK_FUNC(sub_820C0A58);
PPC_FUNC_IMPL(__imp__sub_820C0A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// ori r8,r9,48888
	ctx.r8.u64 = ctx.r9.u64 | 48888;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-18000
	ctx.r8.s64 = ctx.r11.s64 + -18000;
	// ori r7,r9,48888
	ctx.r7.u64 = ctx.r9.u64 | 48888;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stfsx f1,r10,r7
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
loc_820C0AA4:
	// stfs f0,412(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 412, temp.u32);
	// stb r10,417(r11)
	PPC_STORE_U8(ctx.r11.u32 + 417, ctx.r10.u8);
	// lwz r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r8.u32);
	// stb r10,429(r11)
	PPC_STORE_U8(ctx.r11.u32 + 429, ctx.r10.u8);
	// stfs f0,424(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// lwz r7,404(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// rlwinm r6,r7,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r6,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r6.u32);
	// stb r10,441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 441, ctx.r10.u8);
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// lwz r5,404(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// rlwinm r4,r5,0,30,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r4,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r4.u32);
	// stb r10,453(r11)
	PPC_STORE_U8(ctx.r11.u32 + 453, ctx.r10.u8);
	// stfs f0,448(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// lwz r3,404(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// rlwinm r9,r3,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c0aa4
	if (!ctx.cr6.eq) goto loc_820C0AA4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0B04"))) PPC_WEAK_FUNC(sub_820C0B04);
PPC_FUNC_IMPL(__imp__sub_820C0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0B08"))) PPC_WEAK_FUNC(sub_820C0B08);
PPC_FUNC_IMPL(__imp__sub_820C0B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,308
	ctx.r8.u64 = ctx.r10.u64 | 308;
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0B20"))) PPC_WEAK_FUNC(sub_820C0B20);
PPC_FUNC_IMPL(__imp__sub_820C0B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,308
	ctx.r8.u64 = ctx.r10.u64 | 308;
	// stfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0B38"))) PPC_WEAK_FUNC(sub_820C0B38);
PPC_FUNC_IMPL(__imp__sub_820C0B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x820c0b50
	if (ctx.cr6.lt) goto loc_820C0B50;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820C0B50:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lfsx f1,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0B6C"))) PPC_WEAK_FUNC(sub_820C0B6C);
PPC_FUNC_IMPL(__imp__sub_820C0B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0B70"))) PPC_WEAK_FUNC(sub_820C0B70);
PPC_FUNC_IMPL(__imp__sub_820C0B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,884
	ctx.r8.u64 = ctx.r10.u64 | 884;
	// stbx r3,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0B88"))) PPC_WEAK_FUNC(sub_820C0B88);
PPC_FUNC_IMPL(__imp__sub_820C0B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,10704
	ctx.r3.s64 = ctx.r11.s64 + 10704;
	// b 0x82141000
	sub_82141000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0B9C"))) PPC_WEAK_FUNC(sub_820C0B9C);
PPC_FUNC_IMPL(__imp__sub_820C0B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0BA0"))) PPC_WEAK_FUNC(sub_820C0BA0);
PPC_FUNC_IMPL(__imp__sub_820C0BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-22040
	ctx.r8.s64 = ctx.r11.s64 + -22040;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0BE8"))) PPC_WEAK_FUNC(sub_820C0BE8);
PPC_FUNC_IMPL(__imp__sub_820C0BE8) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r30,r10,-22040
	ctx.r30.s64 = ctx.r10.s64 + -22040;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c0c6c
	if (ctx.cr6.eq) goto loc_820C0C6C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// ori r8,r10,44520
	ctx.r8.u64 = ctx.r10.u64 | 44520;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820c0c44
	if (!ctx.cr6.eq) goto loc_820C0C44;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,44520
	ctx.r8.u64 = ctx.r9.u64 | 44520;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_820C0C44:
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0c64
	if (ctx.cr6.eq) goto loc_820C0C64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C0C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C0C64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_820C0C6C:
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

__attribute__((alias("__imp__sub_820C0C84"))) PPC_WEAK_FUNC(sub_820C0C84);
PPC_FUNC_IMPL(__imp__sub_820C0C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0C88"))) PPC_WEAK_FUNC(sub_820C0C88);
PPC_FUNC_IMPL(__imp__sub_820C0C88) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c0ca0
	if (!ctx.cr6.eq) goto loc_820C0CA0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820C0CA0:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r3,r11,-21012
	ctx.r3.s64 = ctx.r11.s64 + -21012;
	// b 0x82146ef0
	sub_82146EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0CB8"))) PPC_WEAK_FUNC(sub_820C0CB8);
PPC_FUNC_IMPL(__imp__sub_820C0CB8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82145438
	sub_82145438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0CE4"))) PPC_WEAK_FUNC(sub_820C0CE4);
PPC_FUNC_IMPL(__imp__sub_820C0CE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0CE8"))) PPC_WEAK_FUNC(sub_820C0CE8);
PPC_FUNC_IMPL(__imp__sub_820C0CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r7,r9,31376
	ctx.r7.s64 = ctx.r9.s64 + 31376;
	// lfs f0,92(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0D44"))) PPC_WEAK_FUNC(sub_820C0D44);
PPC_FUNC_IMPL(__imp__sub_820C0D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0D48"))) PPC_WEAK_FUNC(sub_820C0D48);
PPC_FUNC_IMPL(__imp__sub_820C0D48) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c0d78
	if (ctx.cr6.eq) goto loc_820C0D78;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c0d78
	if (ctx.cr6.eq) goto loc_820C0D78;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_820C0D78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0D80"))) PPC_WEAK_FUNC(sub_820C0D80);
PPC_FUNC_IMPL(__imp__sub_820C0D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r5,72(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stfs f1,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f2,84(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x820c0e1c
	if (ctx.cr6.lt) goto loc_820C0E1C;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C0DC8:
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r8,r11,444
	ctx.r8.s64 = ctx.r11.s64 + 444;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// stfs f1,80(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 80, temp.u32);
	// stfs f2,84(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 84, temp.u32);
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfs f1,228(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 228, temp.u32);
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// stfs f2,232(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 232, temp.u32);
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f1,-68(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + -68, temp.u32);
	// stfs f2,-64(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + -64, temp.u32);
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f1,80(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 80, temp.u32);
	// stfs f2,84(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 84, temp.u32);
	// blt cr6,0x820c0dc8
	if (ctx.cr6.lt) goto loc_820C0DC8;
loc_820C0E1C:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// mulli r11,r9,148
	ctx.r11.s64 = ctx.r9.s64 * 148;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820C0E30:
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// stfs f1,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// stfs f2,84(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// bdnz 0x820c0e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C0E30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0E4C"))) PPC_WEAK_FUNC(sub_820C0E4C);
PPC_FUNC_IMPL(__imp__sub_820C0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0E50"))) PPC_WEAK_FUNC(sub_820C0E50);
PPC_FUNC_IMPL(__imp__sub_820C0E50) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c0ee0
	if (ctx.cr6.eq) goto loc_820C0EE0;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,20000
	ctx.r8.s64 = ctx.r10.s64 + 20000;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// addi r7,r11,-20996
	ctx.r7.s64 = ctx.r11.s64 + -20996;
	// lwzx r31,r9,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c0ee0
	if (ctx.cr6.eq) goto loc_820C0EE0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820ac088
	ctx.lr = 0x820C0E94;
	sub_820AC088(ctx, base);
	// rlwinm r9,r3,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r8,r3,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// beq cr6,0x820c0ee0
	if (ctx.cr6.eq) goto loc_820C0EE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C0ECC:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// stw r9,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// bdnz 0x820c0ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C0ECC;
loc_820C0EE0:
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

__attribute__((alias("__imp__sub_820C0EF4"))) PPC_WEAK_FUNC(sub_820C0EF4);
PPC_FUNC_IMPL(__imp__sub_820C0EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0EF8"))) PPC_WEAK_FUNC(sub_820C0EF8);
PPC_FUNC_IMPL(__imp__sub_820C0EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r7,255
	ctx.r7.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r10,255
	ctx.r10.s64 = 255;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820c0f48
	if (ctx.cr6.eq) goto loc_820C0F48;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r6,r4,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r11,20000
	ctx.r5.s64 = ctx.r11.s64 + 20000;
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// addi r4,r11,-20996
	ctx.r4.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r6,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c0f48
	if (ctx.cr6.eq) goto loc_820C0F48;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lbz r10,-13(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -13);
	// lbz r9,-14(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// lbz r8,-15(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
loc_820C0F48:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lfs f0,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0FCC"))) PPC_WEAK_FUNC(sub_820C0FCC);
PPC_FUNC_IMPL(__imp__sub_820C0FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0FD0"))) PPC_WEAK_FUNC(sub_820C0FD0);
PPC_FUNC_IMPL(__imp__sub_820C0FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C0FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bge cr6,0x820c1090
	if (!ctx.cr6.lt) goto loc_820C1090;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1090
	if (ctx.cr6.eq) goto loc_820C1090;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r10,20000
	ctx.r31.s64 = ctx.r10.s64 + 20000;
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,-20996
	ctx.r10.s64 = ctx.r10.s64 + -20996;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c1090
	if (ctx.cr6.eq) goto loc_820C1090;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c1028
	if (ctx.cr6.eq) goto loc_820C1028;
	// bl 0x82172d60
	ctx.lr = 0x820C1028;
	sub_82172D60(ctx, base);
loc_820C1028:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,9644
	ctx.r3.s64 = ctx.r31.s64 + 9644;
	// bl 0x82139fe8
	ctx.lr = 0x820C1034;
	sub_82139FE8(ctx, base);
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
	ctx.lr = 0x820C104C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r8,r9,44536
	ctx.r8.u64 = ctx.r9.u64 | 44536;
	// addi r6,r11,-20992
	ctx.r6.s64 = ctx.r11.s64 + -20992;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r9,r11,44532
	ctx.r9.u64 = ctx.r11.u64 | 44532;
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r7,44532
	ctx.r4.u64 = ctx.r7.u64 | 44532;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r10,r3,44536
	ctx.r10.u64 = ctx.r3.u64 | 44536;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
loc_820C1090:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1098"))) PPC_WEAK_FUNC(sub_820C1098);
PPC_FUNC_IMPL(__imp__sub_820C1098) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820c10a8
	if (!ctx.cr6.eq) goto loc_820C10A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c10c0
	goto loc_820C10C0;
loc_820C10A8:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_820C10C0:
	// b 0x821452b0
	sub_821452B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C10C4"))) PPC_WEAK_FUNC(sub_820C10C4);
PPC_FUNC_IMPL(__imp__sub_820C10C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C10C8"))) PPC_WEAK_FUNC(sub_820C10C8);
PPC_FUNC_IMPL(__imp__sub_820C10C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c11dc
	if (ctx.cr6.eq) goto loc_820C11DC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r31,r10,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c11dc
	if (ctx.cr6.eq) goto loc_820C11DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145368
	ctx.lr = 0x820C1110;
	sub_82145368(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x820c11dc
	if (!ctx.cr6.gt) goto loc_820C11DC;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// ble cr6,0x820c11dc
	if (!ctx.cr6.gt) goto loc_820C11DC;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820c11b0
	if (ctx.cr6.lt) goto loc_820C11B0;
	// addi r8,r30,-3
	ctx.r8.s64 = ctx.r30.s64 + -3;
	// li r11,148
	ctx.r11.s64 = 148;
loc_820C1160:
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// fadds f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stfs f0,144(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 144, temp.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,292(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 292, temp.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,440(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 440, temp.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f10,588(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 588, temp.u32);
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// blt cr6,0x820c1160
	if (ctx.cr6.lt) goto loc_820C1160;
loc_820C11B0:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x820c11dc
	if (!ctx.cr6.lt) goto loc_820C11DC;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// mulli r11,r10,148
	ctx.r11.s64 = ctx.r10.s64 * 148;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C11C4:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// stfs f0,144(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 144, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bdnz 0x820c11c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C11C4;
loc_820C11DC:
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

__attribute__((alias("__imp__sub_820C11F4"))) PPC_WEAK_FUNC(sub_820C11F4);
PPC_FUNC_IMPL(__imp__sub_820C11F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C11F8"))) PPC_WEAK_FUNC(sub_820C11F8);
PPC_FUNC_IMPL(__imp__sub_820C11F8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1228
	if (ctx.cr6.eq) goto loc_820C1228;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c1228
	if (ctx.cr6.eq) goto loc_820C1228;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// blr 
	return;
loc_820C1228:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1230"))) PPC_WEAK_FUNC(sub_820C1230);
PPC_FUNC_IMPL(__imp__sub_820C1230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1260"))) PPC_WEAK_FUNC(sub_820C1260);
PPC_FUNC_IMPL(__imp__sub_820C1260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mulli r10,r4,148
	ctx.r10.s64 = ctx.r4.s64 * 148;
	// lfs f0,28(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f12,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,144(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f11,136(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,120(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f8,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,144(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f7,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,140(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f7,136(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lfs f6,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,124(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,104(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfs f4,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,144(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f3,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,140(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f3,136(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lfs f2,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,128(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lfs f1,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,108(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f0,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f13,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,140(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f13,136(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lfs f12,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lfs f11,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,112(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lfs f10,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,144(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f9,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,140(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f9,136(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1358"))) PPC_WEAK_FUNC(sub_820C1358);
PPC_FUNC_IMPL(__imp__sub_820C1358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mulli r11,r4,148
	ctx.r11.s64 = ctx.r4.s64 * 148;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f13,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f12,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f11,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f10,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f9,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f8,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,52(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f7,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f6,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f5,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,16(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f4,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f3,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f2,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,40(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f1,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f0,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f13,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f12,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfs f11,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f10,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f9,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C143C"))) PPC_WEAK_FUNC(sub_820C143C);
PPC_FUNC_IMPL(__imp__sub_820C143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1440"))) PPC_WEAK_FUNC(sub_820C1440);
PPC_FUNC_IMPL(__imp__sub_820C1440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c157c
	if (ctx.cr6.eq) goto loc_820C157C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c157c
	if (ctx.cr6.eq) goto loc_820C157C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lfs f0,248(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f13.u64);
	// lbz r9,-17(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -17);
	// stb r9,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r9.u8);
	// lwz r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r6,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r6.u32);
	// blt cr6,0x820c1544
	if (ctx.cr6.lt) goto loc_820C1544;
	// addi r4,r3,-3
	ctx.r4.s64 = ctx.r3.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C14B4:
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r6,r11,444
	ctx.r6.s64 = ctx.r11.s64 + 444;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// lwz r5,76(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// stb r9,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r9.u8);
	// lwz r5,-32(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r5,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r5.u32);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,224(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// stb r9,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r9.u8);
	// lwz r5,-32(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r5,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, ctx.r5.u32);
	// lwz r5,68(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r5,r8,-148
	ctx.r5.s64 = ctx.r8.s64 + -148;
	// lwz r8,-72(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -72);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stb r9,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r9.u8);
	// lwz r5,-32(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r5,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r5.u32);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// lwz r6,76(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r6,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
	// stb r9,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r9.u8);
	// lwz r5,-32(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r5,520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 520, ctx.r5.u32);
	// blt cr6,0x820c14b4
	if (ctx.cr6.lt) goto loc_820C14B4;
loc_820C1544:
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x820c157c
	if (!ctx.cr6.lt) goto loc_820C157C;
	// subf r11,r7,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r7.s64;
	// mulli r8,r7,148
	ctx.r8.s64 = ctx.r7.s64 * 148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820C1558:
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r8,148
	ctx.r8.s64 = ctx.r8.s64 + 148;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// stb r9,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r9.u8);
	// lwz r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r6,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// bdnz 0x820c1558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C1558;
loc_820C157C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1584"))) PPC_WEAK_FUNC(sub_820C1584);
PPC_FUNC_IMPL(__imp__sub_820C1584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1588"))) PPC_WEAK_FUNC(sub_820C1588);
PPC_FUNC_IMPL(__imp__sub_820C1588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c15e0
	if (ctx.cr6.eq) goto loc_820C15E0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c15e0
	if (ctx.cr6.eq) goto loc_820C15E0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lbz r6,-13(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -13);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
loc_820C15E0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C15F0"))) PPC_WEAK_FUNC(sub_820C15F0);
PPC_FUNC_IMPL(__imp__sub_820C15F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1620
	if (ctx.cr6.eq) goto loc_820C1620;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c1620
	if (ctx.cr6.eq) goto loc_820C1620;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// blr 
	return;
loc_820C1620:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1628"))) PPC_WEAK_FUNC(sub_820C1628);
PPC_FUNC_IMPL(__imp__sub_820C1628) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,-20996
	ctx.r8.s64 = ctx.r11.s64 + -20996;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1658"))) PPC_WEAK_FUNC(sub_820C1658);
PPC_FUNC_IMPL(__imp__sub_820C1658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C1660;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82087078
	ctx.lr = 0x820C1670;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c16e0
	if (ctx.cr6.eq) goto loc_820C16E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82087078
	ctx.lr = 0x820C1684;
	sub_82087078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c16a0
	if (!ctx.cr6.eq) goto loc_820C16A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820C1698;
	sub_82172D60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820C16A0:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x820c16c4
	if (!ctx.cr6.eq) goto loc_820C16C4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c16d0
	if (ctx.cr6.eq) goto loc_820C16D0;
	// bl 0x82172d60
	ctx.lr = 0x820C16B8;
	sub_82172D60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x820c16d0
	goto loc_820C16D0;
loc_820C16C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217a590
	ctx.lr = 0x820C16D0;
	sub_8217A590(ctx, base);
loc_820C16D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820C16D8;
	sub_82172D60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82172d60
	ctx.lr = 0x820C16E0;
	sub_82172D60(ctx, base);
loc_820C16E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C16E8"))) PPC_WEAK_FUNC(sub_820C16E8);
PPC_FUNC_IMPL(__imp__sub_820C16E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C16F0;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82087078
	ctx.lr = 0x820C1710;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c1730
	if (!ctx.cr6.eq) goto loc_820C1730;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_820C1730:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-16900
	ctx.r3.s64 = ctx.r11.s64 + -16900;
	// bl 0x8213de58
	ctx.lr = 0x820C1758;
	sub_8213DE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820C1764;
	sub_82172D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_820C1778"))) PPC_WEAK_FUNC(sub_820C1778);
PPC_FUNC_IMPL(__imp__sub_820C1778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C1780;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820c01b0
	ctx.lr = 0x820C17D4;
	sub_820C01B0(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-16900
	ctx.r3.s64 = ctx.r11.s64 + -16900;
	// bl 0x8213d828
	ctx.lr = 0x820C17FC;
	sub_8213D828(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1808"))) PPC_WEAK_FUNC(sub_820C1808);
PPC_FUNC_IMPL(__imp__sub_820C1808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16900
	ctx.r3.s64 = ctx.r11.s64 + -16900;
	// b 0x8213d828
	sub_8213D828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C182C"))) PPC_WEAK_FUNC(sub_820C182C);
PPC_FUNC_IMPL(__imp__sub_820C182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1830"))) PPC_WEAK_FUNC(sub_820C1830);
PPC_FUNC_IMPL(__imp__sub_820C1830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,48636
	ctx.r8.u64 = ctx.r10.u64 | 48636;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820C184C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820c1868
	if (ctx.cr6.eq) goto loc_820C1868;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c184c
	if (!ctx.cr6.eq) goto loc_820C184C;
	// blr 
	return;
loc_820C1868:
	// stfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1870"))) PPC_WEAK_FUNC(sub_820C1870);
PPC_FUNC_IMPL(__imp__sub_820C1870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,48636
	ctx.r8.u64 = ctx.r10.u64 | 48636;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820C188C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820c18a8
	if (ctx.cr6.eq) goto loc_820C18A8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c188c
	if (!ctx.cr6.eq) goto loc_820C188C;
	// blr 
	return;
loc_820C18A8:
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r4,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C18DC"))) PPC_WEAK_FUNC(sub_820C18DC);
PPC_FUNC_IMPL(__imp__sub_820C18DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C18E0"))) PPC_WEAK_FUNC(sub_820C18E0);
PPC_FUNC_IMPL(__imp__sub_820C18E0) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,48636
	ctx.r8.u64 = ctx.r10.u64 | 48636;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c1988
	if (ctx.cr6.eq) goto loc_820C1988;
loc_820C190C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820c1938
	if (ctx.cr6.eq) goto loc_820C1938;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c190c
	if (!ctx.cr6.eq) goto loc_820C190C;
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
loc_820C1938:
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820c1988
	if (!ctx.cr6.lt) goto loc_820C1988;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820c1988
	if (!ctx.cr6.eq) goto loc_820C1988;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c197c
	if (ctx.cr6.eq) goto loc_820C197C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820C197C;
	sub_82080000(ctx, base);
loc_820C197C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_820C1988:
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

__attribute__((alias("__imp__sub_820C199C"))) PPC_WEAK_FUNC(sub_820C199C);
PPC_FUNC_IMPL(__imp__sub_820C199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C19A0"))) PPC_WEAK_FUNC(sub_820C19A0);
PPC_FUNC_IMPL(__imp__sub_820C19A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C19A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,20000
	ctx.r29.s64 = ctx.r11.s64 + 20000;
	// ori r9,r10,48636
	ctx.r9.u64 = ctx.r10.u64 | 48636;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c1a3c
	if (ctx.cr6.eq) goto loc_820C1A3C;
loc_820C19CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820c19f0
	if (ctx.cr6.eq) goto loc_820C19F0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c19cc
	if (!ctx.cr6.eq) goto loc_820C19CC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820C19F0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,48640
	ctx.r9.u64 = ctx.r10.u64 | 48640;
	// lwzx r10,r29,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820c1a10
	if (!ctx.cr6.eq) goto loc_820C1A10;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,48640
	ctx.r9.u64 = ctx.r10.u64 | 48640;
	// stwx r31,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r31.u32);
loc_820C1A10:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8213ddc0
	ctx.lr = 0x820C1A1C;
	sub_8213DDC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c1a30
	if (ctx.cr6.eq) goto loc_820C1A30;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820C1A30:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48636
	ctx.r10.u64 = ctx.r11.u64 | 48636;
	// stwx r30,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r30.u32);
loc_820C1A3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1A44"))) PPC_WEAK_FUNC(sub_820C1A44);
PPC_FUNC_IMPL(__imp__sub_820C1A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1A48"))) PPC_WEAK_FUNC(sub_820C1A48);
PPC_FUNC_IMPL(__imp__sub_820C1A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,820
	ctx.r8.u64 = ctx.r10.u64 | 820;
	// bne cr6,0x820c1a6c
	if (!ctx.cr6.eq) goto loc_820C1A6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// blr 
	return;
loc_820C1A6C:
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r10,796
	ctx.r7.s64 = ctx.r10.s64 + 796;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 808, ctx.r11.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 812, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 816, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1AB4"))) PPC_WEAK_FUNC(sub_820C1AB4);
PPC_FUNC_IMPL(__imp__sub_820C1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1AB8"))) PPC_WEAK_FUNC(sub_820C1AB8);
PPC_FUNC_IMPL(__imp__sub_820C1AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r8,r11,768
	ctx.r8.s64 = ctx.r11.s64 + 768;
	// stw r10,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r10.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 776, ctx.r6.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1AEC"))) PPC_WEAK_FUNC(sub_820C1AEC);
PPC_FUNC_IMPL(__imp__sub_820C1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1AF0"))) PPC_WEAK_FUNC(sub_820C1AF0);
PPC_FUNC_IMPL(__imp__sub_820C1AF0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820c1b18
	if (!ctx.cr6.lt) goto loc_820C1B18;
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
	// bne cr6,0x820c1b20
	if (!ctx.cr6.eq) goto loc_820C1B20;
loc_820C1B18:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820C1B20:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820c1b88
	if (!ctx.cr6.lt) goto loc_820C1B88;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820c1b88
	if (ctx.cr6.eq) goto loc_820C1B88;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c1b88
	if (ctx.cr6.eq) goto loc_820C1B88;
loc_820C1B60:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c1b78
	if (ctx.cr6.eq) goto loc_820C1B78;
	// lwz r8,148(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820c1b8c
	if (ctx.cr6.eq) goto loc_820C1B8C;
loc_820C1B78:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820c1b60
	if (ctx.cr6.lt) goto loc_820C1B60;
loc_820C1B88:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_820C1B8C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1B94"))) PPC_WEAK_FUNC(sub_820C1B94);
PPC_FUNC_IMPL(__imp__sub_820C1B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1B98"))) PPC_WEAK_FUNC(sub_820C1B98);
PPC_FUNC_IMPL(__imp__sub_820C1B98) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// bne cr6,0x820c1c3c
	if (!ctx.cr6.eq) goto loc_820C1C3C;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_820C1C3C:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1C44"))) PPC_WEAK_FUNC(sub_820C1C44);
PPC_FUNC_IMPL(__imp__sub_820C1C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1C48"))) PPC_WEAK_FUNC(sub_820C1C48);
PPC_FUNC_IMPL(__imp__sub_820C1C48) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820c1c58
	if (!ctx.cr6.eq) goto loc_820C1C58;
loc_820C1C50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C1C58:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820c1c50
	if (ctx.cr6.eq) goto loc_820C1C50;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820c1c50
	if (!ctx.cr6.lt) goto loc_820C1C50;
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
	// beq cr6,0x820c1c50
	if (ctx.cr6.eq) goto loc_820C1C50;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820c1c50
	if (!ctx.cr6.lt) goto loc_820C1C50;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c1c50
	if (ctx.cr6.eq) goto loc_820C1C50;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c1c50
	if (!ctx.cr6.lt) goto loc_820C1C50;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c1c50
	if (ctx.cr6.eq) goto loc_820C1C50;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c1c50
	if (ctx.cr6.eq) goto loc_820C1C50;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1CE8"))) PPC_WEAK_FUNC(sub_820C1CE8);
PPC_FUNC_IMPL(__imp__sub_820C1CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// b 0x82138ff0
	sub_82138FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1CFC"))) PPC_WEAK_FUNC(sub_820C1CFC);
PPC_FUNC_IMPL(__imp__sub_820C1CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1D00"))) PPC_WEAK_FUNC(sub_820C1D00);
PPC_FUNC_IMPL(__imp__sub_820C1D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// b 0x82139158
	sub_82139158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1D14"))) PPC_WEAK_FUNC(sub_820C1D14);
PPC_FUNC_IMPL(__imp__sub_820C1D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1D18"))) PPC_WEAK_FUNC(sub_820C1D18);
PPC_FUNC_IMPL(__imp__sub_820C1D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,20000
	ctx.r10.s64 = ctx.r10.s64 + 20000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r10,964
	ctx.r7.s64 = ctx.r10.s64 + 964;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,968
	ctx.r10.s64 = ctx.r10.s64 + 968;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stfs f1,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// addi r6,r8,31376
	ctx.r6.s64 = ctx.r8.s64 + 31376;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f0,92(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1DC8"))) PPC_WEAK_FUNC(sub_820C1DC8);
PPC_FUNC_IMPL(__imp__sub_820C1DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x820c1e08
	if (!ctx.cr6.lt) goto loc_820C1E08;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,20000
	ctx.r10.s64 = ctx.r10.s64 + 20000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r10,964
	ctx.r7.s64 = ctx.r10.s64 + 964;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820c1e08
	if (!ctx.cr6.eq) goto loc_820C1E08;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,968
	ctx.r10.s64 = ctx.r10.s64 + 968;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c1e10
	if (!ctx.cr6.eq) goto loc_820C1E10;
loc_820C1E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C1E10:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c1e24
	if (ctx.cr6.eq) goto loc_820C1E24;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820c1e6c
	goto loc_820C1E6C;
loc_820C1E24:
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lwz r11,5544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5544);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c1e40
	if (!ctx.cr6.eq) goto loc_820C1E40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,5544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5544, ctx.r11.u32);
loc_820C1E40:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,5548
	ctx.r8.s64 = ctx.r10.s64 + 5548;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,5548(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 5548, temp.u32);
	// stfs f13,12(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
loc_820C1E6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1E94"))) PPC_WEAK_FUNC(sub_820C1E94);
PPC_FUNC_IMPL(__imp__sub_820C1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1E98"))) PPC_WEAK_FUNC(sub_820C1E98);
PPC_FUNC_IMPL(__imp__sub_820C1E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,20000
	ctx.r10.s64 = ctx.r10.s64 + 20000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r10,964
	ctx.r7.s64 = ctx.r10.s64 + 964;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,968
	ctx.r10.s64 = ctx.r10.s64 + 968;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r7,r9,31376
	ctx.r7.s64 = ctx.r9.s64 + 31376;
	// lfs f0,92(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1F0C"))) PPC_WEAK_FUNC(sub_820C1F0C);
PPC_FUNC_IMPL(__imp__sub_820C1F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1F10"))) PPC_WEAK_FUNC(sub_820C1F10);
PPC_FUNC_IMPL(__imp__sub_820C1F10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bge cr6,0x820c1f50
	if (!ctx.cr6.lt) goto loc_820C1F50;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r11,964
	ctx.r7.s64 = ctx.r11.s64 + 964;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820c1f50
	if (!ctx.cr6.eq) goto loc_820C1F50;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,968
	ctx.r9.s64 = ctx.r11.s64 + 968;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c1f58
	if (!ctx.cr6.eq) goto loc_820C1F58;
loc_820C1F50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C1F58:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1F60"))) PPC_WEAK_FUNC(sub_820C1F60);
PPC_FUNC_IMPL(__imp__sub_820C1F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bge cr6,0x820c1fa0
	if (!ctx.cr6.lt) goto loc_820C1FA0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r11,964
	ctx.r7.s64 = ctx.r11.s64 + 964;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820c1fa0
	if (!ctx.cr6.eq) goto loc_820C1FA0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,968
	ctx.r9.s64 = ctx.r11.s64 + 968;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c1fa8
	if (!ctx.cr6.eq) goto loc_820C1FA8;
loc_820C1FA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C1FA8:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c1fa0
	if (ctx.cr6.eq) goto loc_820C1FA0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,92(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c1fd4
	if (!ctx.cr6.eq) goto loc_820C1FD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C1FD4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1FDC"))) PPC_WEAK_FUNC(sub_820C1FDC);
PPC_FUNC_IMPL(__imp__sub_820C1FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1FE0"))) PPC_WEAK_FUNC(sub_820C1FE0);
PPC_FUNC_IMPL(__imp__sub_820C1FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bge cr6,0x820c2020
	if (!ctx.cr6.lt) goto loc_820C2020;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r11,964
	ctx.r7.s64 = ctx.r11.s64 + 964;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820c2020
	if (!ctx.cr6.eq) goto loc_820C2020;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,968
	ctx.r9.s64 = ctx.r11.s64 + 968;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c2028
	if (!ctx.cr6.eq) goto loc_820C2028;
loc_820C2020:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C2028:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c2058
	if (ctx.cr6.eq) goto loc_820C2058;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,-16112
	ctx.r8.s64 = ctx.r10.s64 + -16112;
	// lwz r11,244(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	// and r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_820C2058:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2064"))) PPC_WEAK_FUNC(sub_820C2064);
PPC_FUNC_IMPL(__imp__sub_820C2064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2068"))) PPC_WEAK_FUNC(sub_820C2068);
PPC_FUNC_IMPL(__imp__sub_820C2068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C2070;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x820c01b0
	ctx.lr = 0x820C2094;
	sub_820C01B0(ctx, base);
	// li r11,6144
	ctx.r11.s64 = 6144;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fadds f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82105080
	ctx.lr = 0x820C20F8;
	sub_82105080(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C2104"))) PPC_WEAK_FUNC(sub_820C2104);
PPC_FUNC_IMPL(__imp__sub_820C2104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2108"))) PPC_WEAK_FUNC(sub_820C2108);
PPC_FUNC_IMPL(__imp__sub_820C2108) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C2128;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c2134
	if (!ctx.cr6.eq) goto loc_820C2134;
	// bl 0x821b3000
	ctx.lr = 0x820C2134;
	sub_821B3000(ctx, base);
loc_820C2134:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c21a0
	if (ctx.cr6.eq) goto loc_820C21A0;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r5,-13569
	ctx.r5.s64 = -889257984;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r7,r9,4520
	ctx.r7.s64 = ctx.r9.s64 + 4520;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x820c2178
	if (!ctx.cr6.gt) goto loc_820C2178;
	// stw r7,-13570(r5)
	PPC_STORE_U32(ctx.r5.u32 + -13570, ctx.r7.u32);
loc_820C2178:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820c2194
	if (ctx.cr6.eq) goto loc_820C2194;
	// stw r7,-13570(r5)
	PPC_STORE_U32(ctx.r5.u32 + -13570, ctx.r7.u32);
loc_820C2194:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_820C21A0:
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

__attribute__((alias("__imp__sub_820C21B4"))) PPC_WEAK_FUNC(sub_820C21B4);
PPC_FUNC_IMPL(__imp__sub_820C21B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C21B8"))) PPC_WEAK_FUNC(sub_820C21B8);
PPC_FUNC_IMPL(__imp__sub_820C21B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C21C0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x820c2358
	if (ctx.cr6.eq) goto loc_820C2358;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// addi r31,r10,52
	ctx.r31.s64 = ctx.r10.s64 + 52;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_820C220C:
	// addi r7,r31,-52
	ctx.r7.s64 = ctx.r31.s64 + -52;
	// addi r6,r31,-28
	ctx.r6.s64 = ctx.r31.s64 + -28;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201940
	ctx.lr = 0x820C2220;
	sub_82201940(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c234c
	if (ctx.cr6.eq) goto loc_820C234C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201a78
	ctx.lr = 0x820C2234;
	sub_82201A78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c234c
	if (ctx.cr6.eq) goto loc_820C234C;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f10,f11
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,-24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,-44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f1,f12
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsubs f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fmuls f0,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmsubs f11,f5,f1,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 - ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmsubs f10,f6,f2,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 - ctx.f13.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmsubs f9,f3,f4,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 - ctx.f12.f64));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r5,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r5.u32);
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f1,f31,f2
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f2.f64));
	// fmuls f0,f8,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmuls f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f13,16(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f12,20(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
loc_820C234C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x820c220c
	if (!ctx.cr0.eq) goto loc_820C220C;
loc_820C2358:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C2368"))) PPC_WEAK_FUNC(sub_820C2368);
PPC_FUNC_IMPL(__imp__sub_820C2368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C2370;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	ctx.lr = 0x820C238C;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2438
	if (ctx.cr6.eq) goto loc_820C2438;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
loc_820C23A0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c23b8
	if (!ctx.cr6.eq) goto loc_820C23B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820C23B4;
	sub_820F5F90(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
loc_820C23B8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,252
	ctx.r8.u64 = ctx.r10.u64 | 252;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r7,r9,260
	ctx.r7.u64 = ctx.r9.u64 | 260;
	// ori r6,r6,65525
	ctx.r6.u64 = ctx.r6.u64 | 65525;
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// ori r5,r5,256
	ctx.r5.u64 = ctx.r5.u64 | 256;
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// ori r3,r3,264
	ctx.r3.u64 = ctx.r3.u64 | 264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r9,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u8);
	// stbx r8,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// li r6,264
	ctx.r6.s64 = 264;
	// sthx r10,r31,r4
	PPC_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// sthx r9,r31,r3
	PPC_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820C242C;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c23a0
	if (!ctx.cr6.eq) goto loc_820C23A0;
loc_820C2438:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C2440"))) PPC_WEAK_FUNC(sub_820C2440);
PPC_FUNC_IMPL(__imp__sub_820C2440) {
	PPC_FUNC_PROLOGUE();
	// b 0x82103e60
	sub_82103E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C2444"))) PPC_WEAK_FUNC(sub_820C2444);
PPC_FUNC_IMPL(__imp__sub_820C2444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2448"))) PPC_WEAK_FUNC(sub_820C2448);
PPC_FUNC_IMPL(__imp__sub_820C2448) {
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
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x820c2484
	if (!ctx.cr6.lt) goto loc_820C2484;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x821038e8
	ctx.lr = 0x820C247C;
	sub_821038E8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_820C2484:
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

__attribute__((alias("__imp__sub_820C249C"))) PPC_WEAK_FUNC(sub_820C249C);
PPC_FUNC_IMPL(__imp__sub_820C249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C24A0"))) PPC_WEAK_FUNC(sub_820C24A0);
PPC_FUNC_IMPL(__imp__sub_820C24A0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x820c254c
	if (!ctx.cr6.lt) goto loc_820C254C;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,20000
	ctx.r11.s64 = ctx.r10.s64 + 20000;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c254c
	if (ctx.cr6.eq) goto loc_820C254C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82087078
	ctx.lr = 0x820C24E4;
	sub_82087078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c254c
	if (ctx.cr6.eq) goto loc_820C254C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82082030
	ctx.lr = 0x820C2504;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820c2524
	if (ctx.cr6.eq) goto loc_820C2524;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r10,-32444
	ctx.r9.s64 = ctx.r10.s64 + -32444;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x820c2528
	goto loc_820C2528;
loc_820C2524:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_820C2528:
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// bl 0x820c29f8
	ctx.lr = 0x820C2538;
	sub_820C29F8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82172d60
	ctx.lr = 0x820C254C;
	sub_82172D60(ctx, base);
loc_820C254C:
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

__attribute__((alias("__imp__sub_820C2564"))) PPC_WEAK_FUNC(sub_820C2564);
PPC_FUNC_IMPL(__imp__sub_820C2564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2568"))) PPC_WEAK_FUNC(sub_820C2568);
PPC_FUNC_IMPL(__imp__sub_820C2568) {
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
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x820c265c
	if (!ctx.cr6.lt) goto loc_820C265C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82087078
	ctx.lr = 0x820C2590;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c265c
	if (ctx.cr6.eq) goto loc_820C265C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c2654
	if (ctx.cr6.eq) goto loc_820C2654;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c25d0
	if (ctx.cr6.eq) goto loc_820C25D0;
	// bl 0x820b91d0
	ctx.lr = 0x820C25CC;
	sub_820B91D0(ctx, base);
	// b 0x820c25ec
	goto loc_820C25EC;
loc_820C25D0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c25e4
	if (ctx.cr6.eq) goto loc_820C25E4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x820c25ec
	goto loc_820C25EC;
loc_820C25E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b90a0
	ctx.lr = 0x820C25EC;
	sub_820B90A0(ctx, base);
loc_820C25EC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c2654
	if (!ctx.cr6.eq) goto loc_820C2654;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82082030
	ctx.lr = 0x820C2618;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2638
	if (ctx.cr6.eq) goto loc_820C2638;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-32444
	ctx.r9.s64 = ctx.r10.s64 + -32444;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x820c263c
	goto loc_820C263C;
loc_820C2638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C263C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// bl 0x820c29f8
	ctx.lr = 0x820C2654;
	sub_820C29F8(ctx, base);
loc_820C2654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820C265C;
	sub_82172D60(ctx, base);
loc_820C265C:
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

__attribute__((alias("__imp__sub_820C2674"))) PPC_WEAK_FUNC(sub_820C2674);
PPC_FUNC_IMPL(__imp__sub_820C2674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2678"))) PPC_WEAK_FUNC(sub_820C2678);
PPC_FUNC_IMPL(__imp__sub_820C2678) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820C2680;
	__savegprlr_14(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,1304
	ctx.r11.s64 = ctx.r11.s64 + 1304;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// addi r10,r10,-9784
	ctx.r10.s64 = ctx.r10.s64 + -9784;
	// addi r9,r9,1464
	ctx.r9.s64 = ctx.r9.s64 + 1464;
	// addi r8,r8,1512
	ctx.r8.s64 = ctx.r8.s64 + 1512;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r7,r7,1656
	ctx.r7.s64 = ctx.r7.s64 + 1656;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r6,r6,1800
	ctx.r6.s64 = ctx.r6.s64 + 1800;
	// addi r5,r5,1936
	ctx.r5.s64 = ctx.r5.s64 + 1936;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r4,r4,1560
	ctx.r4.s64 = ctx.r4.s64 + 1560;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r11,r31,1640
	ctx.r11.s64 = ctx.r31.s64 + 1640;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lis r29,-32226
	ctx.r29.s64 = -2111963136;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lis r27,-32226
	ctx.r27.s64 = -2111963136;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// lis r23,-32226
	ctx.r23.s64 = -2111963136;
	// addi r10,r30,2048
	ctx.r10.s64 = ctx.r30.s64 + 2048;
	// addi r9,r29,-21912
	ctx.r9.s64 = ctx.r29.s64 + -21912;
	// addi r8,r28,2928
	ctx.r8.s64 = ctx.r28.s64 + 2928;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// addi r7,r27,-21912
	ctx.r7.s64 = ctx.r27.s64 + -21912;
	// addi r6,r26,2648
	ctx.r6.s64 = ctx.r26.s64 + 2648;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,2824
	ctx.r5.s64 = ctx.r25.s64 + 2824;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r4,r24,2848
	ctx.r4.s64 = ctx.r24.s64 + 2848;
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// addi r11,r23,-21912
	ctx.r11.s64 = ctx.r23.s64 + -21912;
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r19,-32242
	ctx.r19.s64 = -2113011712;
	// lis r18,-32242
	ctx.r18.s64 = -2113011712;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// lis r16,-32244
	ctx.r16.s64 = -2113142784;
	// lis r15,-32244
	ctx.r15.s64 = -2113142784;
	// addi r10,r22,2872
	ctx.r10.s64 = ctx.r22.s64 + 2872;
	// addi r9,r21,2080
	ctx.r9.s64 = ctx.r21.s64 + 2080;
	// addi r8,r20,2376
	ctx.r8.s64 = ctx.r20.s64 + 2376;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-6736
	ctx.r7.s64 = ctx.r19.s64 + -6736;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// addi r6,r18,-6736
	ctx.r6.s64 = ctx.r18.s64 + -6736;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r5,r17,3208
	ctx.r5.s64 = ctx.r17.s64 + 3208;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// addi r4,r16,3256
	ctx.r4.s64 = ctx.r16.s64 + 3256;
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// addi r11,r15,4048
	ctx.r11.s64 = ctx.r15.s64 + 4048;
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// addi r9,r10,4248
	ctx.r9.s64 = ctx.r10.s64 + 4248;
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// addi r8,r14,4656
	ctx.r8.s64 = ctx.r14.s64 + 4656;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r6,r6,4600
	ctx.r6.s64 = ctx.r6.s64 + 4600;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// addi r7,r7,4296
	ctx.r7.s64 = ctx.r7.s64 + 4296;
	// addi r5,r5,4952
	ctx.r5.s64 = ctx.r5.s64 + 4952;
	// addi r4,r4,4704
	ctx.r4.s64 = ctx.r4.s64 + 4704;
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// addi r11,r11,5672
	ctx.r11.s64 = ctx.r11.s64 + 5672;
	// stw r5,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r5.u32);
	// addi r10,r10,5616
	ctx.r10.s64 = ctx.r10.s64 + 5616;
	// stw r4,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// addi r9,r9,5184
	ctx.r9.s64 = ctx.r9.s64 + 5184;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// addi r8,r8,5512
	ctx.r8.s64 = ctx.r8.s64 + 5512;
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// addi r6,r30,3400
	ctx.r6.s64 = ctx.r30.s64 + 3400;
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// stw r8,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r8.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r6,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r6.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// lis r27,-32244
	ctx.r27.s64 = -2113142784;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// addi r7,r31,3304
	ctx.r7.s64 = ctx.r31.s64 + 3304;
	// addi r5,r29,3664
	ctx.r5.s64 = ctx.r29.s64 + 3664;
	// addi r4,r28,3832
	ctx.r4.s64 = ctx.r28.s64 + 3832;
	// stw r7,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r7.u32);
	// addi r11,r27,3456
	ctx.r11.s64 = ctx.r27.s64 + 3456;
	// stw r5,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r5.u32);
	// addi r10,r26,5720
	ctx.r10.s64 = ctx.r26.s64 + 5720;
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// addi r9,r25,5864
	ctx.r9.s64 = ctx.r25.s64 + 5864;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// addi r8,r24,6008
	ctx.r8.s64 = ctx.r24.s64 + 6008;
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// addi r6,r22,6192
	ctx.r6.s64 = ctx.r22.s64 + 6192;
	// stw r9,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r9.u32);
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// stw r8,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r8.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r6,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r6.u32);
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r19,-32244
	ctx.r19.s64 = -2113142784;
	// lis r18,-32244
	ctx.r18.s64 = -2113142784;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// lis r16,-32244
	ctx.r16.s64 = -2113142784;
	// addi r7,r23,6152
	ctx.r7.s64 = ctx.r23.s64 + 6152;
	// addi r5,r21,6256
	ctx.r5.s64 = ctx.r21.s64 + 6256;
	// lis r15,-32244
	ctx.r15.s64 = -2113142784;
	// stw r7,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r7.u32);
	// addi r4,r20,6368
	ctx.r4.s64 = ctx.r20.s64 + 6368;
	// stw r5,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r5.u32);
	// addi r11,r19,6560
	ctx.r11.s64 = ctx.r19.s64 + 6560;
	// addi r10,r18,6728
	ctx.r10.s64 = ctx.r18.s64 + 6728;
	// stw r4,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r4.u32);
	// addi r9,r17,6840
	ctx.r9.s64 = ctx.r17.s64 + 6840;
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// addi r8,r16,7064
	ctx.r8.s64 = ctx.r16.s64 + 7064;
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r9,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r9.u32);
	// addi r7,r15,7240
	ctx.r7.s64 = ctx.r15.s64 + 7240;
	// stw r8,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r8.u32);
	// addi r5,r6,6896
	ctx.r5.s64 = ctx.r6.s64 + 6896;
	// addi r4,r14,7400
	ctx.r4.s64 = ctx.r14.s64 + 7400;
	// stw r7,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r7.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r5,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r5.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r4,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// addi r11,r11,7424
	ctx.r11.s64 = ctx.r11.s64 + 7424;
	// addi r10,r10,7448
	ctx.r10.s64 = ctx.r10.s64 + 7448;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r10,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r10.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// addi r9,r9,7624
	ctx.r9.s64 = ctx.r9.s64 + 7624;
	// addi r8,r8,7832
	ctx.r8.s64 = ctx.r8.s64 + 7832;
	// addi r7,r7,7952
	ctx.r7.s64 = ctx.r7.s64 + 7952;
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// addi r6,r6,8032
	ctx.r6.s64 = ctx.r6.s64 + 8032;
	// stw r8,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r8.u32);
	// addi r5,r5,8160
	ctx.r5.s64 = ctx.r5.s64 + 8160;
	// stw r7,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r7.u32);
	// addi r4,r4,2952
	ctx.r4.s64 = ctx.r4.s64 + 2952;
	// stw r6,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r6.u32);
	// addi r11,r31,3048
	ctx.r11.s64 = ctx.r31.s64 + 3048;
	// stw r5,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r5.u32);
	// addi r10,r30,2976
	ctx.r10.s64 = ctx.r30.s64 + 2976;
	// stw r4,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r4.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// lis r27,-32244
	ctx.r27.s64 = -2113142784;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// addi r9,r29,8632
	ctx.r9.s64 = ctx.r29.s64 + 8632;
	// addi r8,r28,8296
	ctx.r8.s64 = ctx.r28.s64 + 8296;
	// addi r7,r27,8456
	ctx.r7.s64 = ctx.r27.s64 + 8456;
	// stw r9,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r9.u32);
	// addi r6,r26,9064
	ctx.r6.s64 = ctx.r26.s64 + 9064;
	// stw r8,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r8.u32);
	// addi r5,r25,9280
	ctx.r5.s64 = ctx.r25.s64 + 9280;
	// stw r7,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r7.u32);
	// addi r4,r24,9288
	ctx.r4.s64 = ctx.r24.s64 + 9288;
	// stw r6,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r6.u32);
	// addi r11,r23,9576
	ctx.r11.s64 = ctx.r23.s64 + 9576;
	// stw r5,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r5.u32);
	// addi r10,r22,9376
	ctx.r10.s64 = ctx.r22.s64 + 9376;
	// stw r4,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r10,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r10.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C29F4"))) PPC_WEAK_FUNC(sub_820C29F4);
PPC_FUNC_IMPL(__imp__sub_820C29F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C29F8"))) PPC_WEAK_FUNC(sub_820C29F8);
PPC_FUNC_IMPL(__imp__sub_820C29F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,908
	ctx.r8.u64 = ctx.r10.u64 | 908;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r10,r11,896
	ctx.r10.s64 = ctx.r11.s64 + 896;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c2a30
	if (!ctx.cr6.eq) goto loc_820C2A30;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// blr 
	return;
loc_820C2A30:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c2a54
	if (ctx.cr6.eq) goto loc_820C2A54;
loc_820C2A40:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820c2a40
	if (!ctx.cr6.eq) goto loc_820C2A40;
loc_820C2A54:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2A5C"))) PPC_WEAK_FUNC(sub_820C2A5C);
PPC_FUNC_IMPL(__imp__sub_820C2A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2A60"))) PPC_WEAK_FUNC(sub_820C2A60);
PPC_FUNC_IMPL(__imp__sub_820C2A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lwz r11,5544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5544);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c2a7c
	if (!ctx.cr6.eq) goto loc_820C2A7C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,5544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5544, ctx.r11.u32);
loc_820C2A7C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,5548
	ctx.r8.s64 = ctx.r10.s64 + 5548;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,5548(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 5548, temp.u32);
	// stfs f13,12(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2AAC"))) PPC_WEAK_FUNC(sub_820C2AAC);
PPC_FUNC_IMPL(__imp__sub_820C2AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2AB0"))) PPC_WEAK_FUNC(sub_820C2AB0);
PPC_FUNC_IMPL(__imp__sub_820C2AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// addi r7,r9,31376
	ctx.r7.s64 = ctx.r9.s64 + 31376;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lfs f0,92(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2B00"))) PPC_WEAK_FUNC(sub_820C2B00);
PPC_FUNC_IMPL(__imp__sub_820C2B00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,21930
	ctx.r10.s64 = 1437204480;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// li r8,108
	ctx.r8.s64 = 108;
	// sth r11,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r11.u16);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,4689
	ctx.r6.s64 = 4689;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
	// sth r11,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r11.u16);
	// sth r11,70(r3)
	PPC_STORE_U16(ctx.r3.u32 + 70, ctx.r11.u16);
	// stw r6,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// sth r11,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r11.u16);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// sth r11,54(r3)
	PPC_STORE_U16(ctx.r3.u32 + 54, ctx.r11.u16);
	// sth r11,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r11.u16);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// sth r11,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r11.u16);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// sth r11,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r11.u16);
	// sth r11,58(r3)
	PPC_STORE_U16(ctx.r3.u32 + 58, ctx.r11.u16);
	// sth r11,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r11.u16);
	// sth r11,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r11.u16);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// sth r11,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r11.u16);
	// sth r11,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, ctx.r11.u16);
	// sth r11,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r11.u16);
	// sth r11,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r11.u16);
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// sth r11,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r11.u16);
	// sth r11,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r11.u16);
	// sth r11,66(r3)
	PPC_STORE_U16(ctx.r3.u32 + 66, ctx.r11.u16);
	// sth r11,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2B98"))) PPC_WEAK_FUNC(sub_820C2B98);
PPC_FUNC_IMPL(__imp__sub_820C2B98) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2BA8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2bd0
	if (ctx.cr6.eq) goto loc_820C2BD0;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c2bd0
	if (ctx.cr6.eq) goto loc_820C2BD0;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C2BD0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2BE4"))) PPC_WEAK_FUNC(sub_820C2BE4);
PPC_FUNC_IMPL(__imp__sub_820C2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2BE8"))) PPC_WEAK_FUNC(sub_820C2BE8);
PPC_FUNC_IMPL(__imp__sub_820C2BE8) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2BF8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2c14
	if (ctx.cr6.eq) goto loc_820C2C14;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C2C14:
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

__attribute__((alias("__imp__sub_820C2C28"))) PPC_WEAK_FUNC(sub_820C2C28);
PPC_FUNC_IMPL(__imp__sub_820C2C28) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2C40;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2c54
	if (ctx.cr6.eq) goto loc_820C2C54;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// or r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 | ctx.r31.u64;
	// bl 0x821835e0
	ctx.lr = 0x820C2C54;
	sub_821835E0(ctx, base);
loc_820C2C54:
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

__attribute__((alias("__imp__sub_820C2C68"))) PPC_WEAK_FUNC(sub_820C2C68);
PPC_FUNC_IMPL(__imp__sub_820C2C68) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2C80;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2c94
	if (ctx.cr6.eq) goto loc_820C2C94;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// andc r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// bl 0x821835e0
	ctx.lr = 0x820C2C94;
	sub_821835E0(ctx, base);
loc_820C2C94:
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

__attribute__((alias("__imp__sub_820C2CA8"))) PPC_WEAK_FUNC(sub_820C2CA8);
PPC_FUNC_IMPL(__imp__sub_820C2CA8) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2CC0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2cec
	if (ctx.cr6.eq) goto loc_820C2CEC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_820C2CEC:
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

__attribute__((alias("__imp__sub_820C2D00"))) PPC_WEAK_FUNC(sub_820C2D00);
PPC_FUNC_IMPL(__imp__sub_820C2D00) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C2D18;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2d84
	if (ctx.cr6.eq) goto loc_820C2D84;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820c2d44
	if (!ctx.cr6.eq) goto loc_820C2D44;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820c2d48
	if (ctx.cr6.eq) goto loc_820C2D48;
loc_820C2D44:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C2D48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// beq cr6,0x820c2d84
	if (ctx.cr6.eq) goto loc_820C2D84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, ctx.r11.u8);
	// bl 0x820c6fb0
	ctx.lr = 0x820C2D84;
	sub_820C6FB0(ctx, base);
loc_820C2D84:
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

__attribute__((alias("__imp__sub_820C2D98"))) PPC_WEAK_FUNC(sub_820C2D98);
PPC_FUNC_IMPL(__imp__sub_820C2D98) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2DB0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2ddc
	if (ctx.cr6.eq) goto loc_820C2DDC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_820C2DDC:
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

__attribute__((alias("__imp__sub_820C2DF0"))) PPC_WEAK_FUNC(sub_820C2DF0);
PPC_FUNC_IMPL(__imp__sub_820C2DF0) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2E08;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2e34
	if (ctx.cr6.eq) goto loc_820C2E34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
loc_820C2E34:
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

__attribute__((alias("__imp__sub_820C2E48"))) PPC_WEAK_FUNC(sub_820C2E48);
PPC_FUNC_IMPL(__imp__sub_820C2E48) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2E60;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2e78
	if (ctx.cr6.eq) goto loc_820C2E78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
loc_820C2E78:
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

__attribute__((alias("__imp__sub_820C2E8C"))) PPC_WEAK_FUNC(sub_820C2E8C);
PPC_FUNC_IMPL(__imp__sub_820C2E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2E90"))) PPC_WEAK_FUNC(sub_820C2E90);
PPC_FUNC_IMPL(__imp__sub_820C2E90) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C2EA8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2ec0
	if (ctx.cr6.eq) goto loc_820C2EC0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_820C2EC0:
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

__attribute__((alias("__imp__sub_820C2ED4"))) PPC_WEAK_FUNC(sub_820C2ED4);
PPC_FUNC_IMPL(__imp__sub_820C2ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2ED8"))) PPC_WEAK_FUNC(sub_820C2ED8);
PPC_FUNC_IMPL(__imp__sub_820C2ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820C2EE0;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C2F00;
	sub_820C7008(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f4,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f2,f2
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f6,f6
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f8,f8
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x820c3050
	if (ctx.cr6.eq) goto loc_820C3050;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r5,r3,124
	ctx.r5.s64 = ctx.r3.s64 + 124;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r25,4(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r24,8(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r7.u32);
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r5,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r31.u32);
	// stw r30,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r30.u32);
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// stw r29,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r29.u32);
	// stw r28,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r28.u32);
	// stw r27,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r27.u32);
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// stw r26,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r26.u32);
	// stw r25,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r25.u32);
	// stw r24,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r24.u32);
	// stw r8,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r8.u32);
	// bl 0x82182060
	ctx.lr = 0x820C3050;
	sub_82182060(ctx, base);
loc_820C3050:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3060"))) PPC_WEAK_FUNC(sub_820C3060);
PPC_FUNC_IMPL(__imp__sub_820C3060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C3068;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C3080;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3138
	if (ctx.cr6.eq) goto loc_820C3138;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820c30b4
	if (ctx.cr6.eq) goto loc_820C30B4;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lwz r8,132(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// lwz r7,136(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r7,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r7.u32);
loc_820C30B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c30e0
	if (ctx.cr6.eq) goto loc_820C30E0;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,152(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_820C30E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c310c
	if (ctx.cr6.eq) goto loc_820C310C;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r10,r3,156
	ctx.r10.s64 = ctx.r3.s64 + 156;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// lwz r8,164(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// lwz r7,168(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r7,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r7.u32);
loc_820C310C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c3138
	if (ctx.cr6.eq) goto loc_820C3138;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// addi r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 + 172;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,180(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,184(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
loc_820C3138:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f10,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsqrts f9,f13
	ctx.f9.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsqrts f8,f11
	ctx.f8.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// stw r5,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r5.u32);
	// stw r4,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r4.u32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsqrts f3,f7
	ctx.f3.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsqrts f2,f6
	ctx.f2.f64 = double(float(sqrt(ctx.f6.f64)));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsqrts f1,f5
	ctx.f1.f64 = double(float(sqrt(ctx.f5.f64)));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsqrts f10,f0
	ctx.f10.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsqrts f9,f13
	ctx.f9.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsqrts f8,f12
	ctx.f8.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsqrts f3,f7
	ctx.f3.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsqrts f2,f6
	ctx.f2.f64 = double(float(sqrt(ctx.f6.f64)));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsqrts f1,f5
	ctx.f1.f64 = double(float(sqrt(ctx.f5.f64)));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3280"))) PPC_WEAK_FUNC(sub_820C3280);
PPC_FUNC_IMPL(__imp__sub_820C3280) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C3290;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c32ac
	if (ctx.cr6.eq) goto loc_820C32AC;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C32AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C32C0"))) PPC_WEAK_FUNC(sub_820C32C0);
PPC_FUNC_IMPL(__imp__sub_820C32C0) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C32D8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c32e8
	if (ctx.cr6.eq) goto loc_820C32E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82182b68
	ctx.lr = 0x820C32E8;
	sub_82182B68(ctx, base);
loc_820C32E8:
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

__attribute__((alias("__imp__sub_820C32FC"))) PPC_WEAK_FUNC(sub_820C32FC);
PPC_FUNC_IMPL(__imp__sub_820C32FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3300"))) PPC_WEAK_FUNC(sub_820C3300);
PPC_FUNC_IMPL(__imp__sub_820C3300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820c7008
	ctx.lr = 0x820C3310;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c332c
	if (ctx.cr6.eq) goto loc_820C332C;
	// lfs f1,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C332C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

