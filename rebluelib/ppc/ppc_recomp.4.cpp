#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820AFD44"))) PPC_WEAK_FUNC(sub_820AFD44);
PPC_FUNC_IMPL(__imp__sub_820AFD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFD48"))) PPC_WEAK_FUNC(sub_820AFD48);
PPC_FUNC_IMPL(__imp__sub_820AFD48) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820af840
	sub_820AF840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFD5C"))) PPC_WEAK_FUNC(sub_820AFD5C);
PPC_FUNC_IMPL(__imp__sub_820AFD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFD60"))) PPC_WEAK_FUNC(sub_820AFD60);
PPC_FUNC_IMPL(__imp__sub_820AFD60) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820af840
	sub_820AF840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFD74"))) PPC_WEAK_FUNC(sub_820AFD74);
PPC_FUNC_IMPL(__imp__sub_820AFD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFD78"))) PPC_WEAK_FUNC(sub_820AFD78);
PPC_FUNC_IMPL(__imp__sub_820AFD78) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820afa00
	sub_820AFA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFD84"))) PPC_WEAK_FUNC(sub_820AFD84);
PPC_FUNC_IMPL(__imp__sub_820AFD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFD88"))) PPC_WEAK_FUNC(sub_820AFD88);
PPC_FUNC_IMPL(__imp__sub_820AFD88) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820afac0
	sub_820AFAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFD90"))) PPC_WEAK_FUNC(sub_820AFD90);
PPC_FUNC_IMPL(__imp__sub_820AFD90) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820afb70
	sub_820AFB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFD98"))) PPC_WEAK_FUNC(sub_820AFD98);
PPC_FUNC_IMPL(__imp__sub_820AFD98) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82085820
	ctx.lr = 0x820AFDAC;
	sub_82085820(ctx, base);
	// lfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
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

__attribute__((alias("__imp__sub_820AFDC0"))) PPC_WEAK_FUNC(sub_820AFDC0);
PPC_FUNC_IMPL(__imp__sub_820AFDC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820afbf0
	sub_820AFBF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFDC8"))) PPC_WEAK_FUNC(sub_820AFDC8);
PPC_FUNC_IMPL(__imp__sub_820AFDC8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82085820
	ctx.lr = 0x820AFDDC;
	sub_82085820(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
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

__attribute__((alias("__imp__sub_820AFDF0"))) PPC_WEAK_FUNC(sub_820AFDF0);
PPC_FUNC_IMPL(__imp__sub_820AFDF0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820af840
	sub_820AF840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFE08"))) PPC_WEAK_FUNC(sub_820AFE08);
PPC_FUNC_IMPL(__imp__sub_820AFE08) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820af840
	sub_820AF840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFE20"))) PPC_WEAK_FUNC(sub_820AFE20);
PPC_FUNC_IMPL(__imp__sub_820AFE20) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820afa00
	sub_820AFA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFE2C"))) PPC_WEAK_FUNC(sub_820AFE2C);
PPC_FUNC_IMPL(__imp__sub_820AFE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFE30"))) PPC_WEAK_FUNC(sub_820AFE30);
PPC_FUNC_IMPL(__imp__sub_820AFE30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820afac0
	sub_820AFAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFE38"))) PPC_WEAK_FUNC(sub_820AFE38);
PPC_FUNC_IMPL(__imp__sub_820AFE38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820afb70
	sub_820AFB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFE40"))) PPC_WEAK_FUNC(sub_820AFE40);
PPC_FUNC_IMPL(__imp__sub_820AFE40) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82085820
	ctx.lr = 0x820AFE54;
	sub_82085820(ctx, base);
	// lfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
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

__attribute__((alias("__imp__sub_820AFE68"))) PPC_WEAK_FUNC(sub_820AFE68);
PPC_FUNC_IMPL(__imp__sub_820AFE68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820afbf0
	sub_820AFBF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFE70"))) PPC_WEAK_FUNC(sub_820AFE70);
PPC_FUNC_IMPL(__imp__sub_820AFE70) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82085820
	ctx.lr = 0x820AFE84;
	sub_82085820(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
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

__attribute__((alias("__imp__sub_820AFE98"))) PPC_WEAK_FUNC(sub_820AFE98);
PPC_FUNC_IMPL(__imp__sub_820AFE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820AFEA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820afedc
	if (!ctx.cr6.eq) goto loc_820AFEDC;
	// bl 0x820ddca8
	ctx.lr = 0x820AFEC4;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afed4
	if (ctx.cr6.eq) goto loc_820AFED4;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820afef8
	goto loc_820AFEF8;
loc_820AFED4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820afef8
	goto loc_820AFEF8;
loc_820AFEDC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820aff08
	if (!ctx.cr6.eq) goto loc_820AFF08;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820aff50
	if (ctx.cr6.eq) goto loc_820AFF50;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820AFEF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820aff28
	if (ctx.cr6.eq) goto loc_820AFF28;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820aff28
	goto loc_820AFF28;
loc_820AFF08:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820aff50
	if (ctx.cr6.eq) goto loc_820AFF50;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820AFF24;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820AFF28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820aff50
	if (ctx.cr6.eq) goto loc_820AFF50;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820aff48
	if (!ctx.cr6.eq) goto loc_820AFF48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820AFF44;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820AFF48:
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x820aff54
	goto loc_820AFF54;
loc_820AFF50:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_820AFF54:
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bge cr6,0x820affb4
	if (!ctx.cr6.lt) goto loc_820AFFB4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r6,r29,272
	ctx.r6.s64 = ctx.r29.s64 * 272;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,68
	ctx.r5.s64 = ctx.r11.s64 + 68;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// stwx r7,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r7.u32);
	// stw r10,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r10.u32);
loc_820AFF80:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x820affa4
	if (ctx.cr6.eq) goto loc_820AFFA4;
	// addi r9,r9,272
	ctx.r9.s64 = ctx.r9.s64 + 272;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,272
	ctx.r8.s64 = ctx.r8.s64 + 272;
	// stw r10,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r10.u32);
	// cmplwi cr6,r9,1088
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1088, ctx.xer);
	// blt cr6,0x820aff80
	if (ctx.cr6.lt) goto loc_820AFF80;
loc_820AFFA4:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,1164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1164, ctx.r10.u8);
	// stb r9,2048(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2048, ctx.r9.u8);
loc_820AFFB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFFBC"))) PPC_WEAK_FUNC(sub_820AFFBC);
PPC_FUNC_IMPL(__imp__sub_820AFFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFFC0"))) PPC_WEAK_FUNC(sub_820AFFC0);
PPC_FUNC_IMPL(__imp__sub_820AFFC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// beq cr6,0x820affec
	if (ctx.cr6.eq) goto loc_820AFFEC;
	// mulli r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 * 272;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820AFFEC:
	// stw r3,1160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1160, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AFFF4"))) PPC_WEAK_FUNC(sub_820AFFF4);
PPC_FUNC_IMPL(__imp__sub_820AFFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFFF8"))) PPC_WEAK_FUNC(sub_820AFFF8);
PPC_FUNC_IMPL(__imp__sub_820AFFF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x820b0008
	if (ctx.cr6.lt) goto loc_820B0008;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820B0008:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 * 272;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B0020"))) PPC_WEAK_FUNC(sub_820B0020);
PPC_FUNC_IMPL(__imp__sub_820B0020) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b007c
	if (ctx.cr6.eq) goto loc_820B007C;
	// bl 0x820aed38
	ctx.lr = 0x820B0048;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0064
	if (ctx.cr6.eq) goto loc_820B0064;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b0068
	goto loc_820B0068;
loc_820B0064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B0068:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820B007C;
	sub_82089220(ctx, base);
loc_820B007C:
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

__attribute__((alias("__imp__sub_820B0094"))) PPC_WEAK_FUNC(sub_820B0094);
PPC_FUNC_IMPL(__imp__sub_820B0094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0098"))) PPC_WEAK_FUNC(sub_820B0098);
PPC_FUNC_IMPL(__imp__sub_820B0098) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b00f0
	if (ctx.cr6.eq) goto loc_820B00F0;
	// bl 0x820aed38
	ctx.lr = 0x820B00C0;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b00dc
	if (ctx.cr6.eq) goto loc_820B00DC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b00e0
	goto loc_820B00E0;
loc_820B00DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B00E0:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// std r31,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r31.u64);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820B00F0;
	sub_82089220(ctx, base);
loc_820B00F0:
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

__attribute__((alias("__imp__sub_820B0104"))) PPC_WEAK_FUNC(sub_820B0104);
PPC_FUNC_IMPL(__imp__sub_820B0104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0108"))) PPC_WEAK_FUNC(sub_820B0108);
PPC_FUNC_IMPL(__imp__sub_820B0108) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b01f4
	if (ctx.cr6.eq) goto loc_820B01F4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
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
	// beq cr6,0x820b01f4
	if (ctx.cr6.eq) goto loc_820B01F4;
loc_820B0164:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820b0180
	if (ctx.cr6.eq) goto loc_820B0180;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b0164
	if (!ctx.cr6.eq) goto loc_820B0164;
	// b 0x820b01f4
	goto loc_820B01F4;
loc_820B0180:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x820b01f4
	if (ctx.cr6.lt) goto loc_820B01F4;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x820b01f4
	if (ctx.cr6.gt) goto loc_820B01F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208bf20
	ctx.lr = 0x820B01A0;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b01b8
	if (ctx.cr6.eq) goto loc_820B01B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820943b8
	ctx.lr = 0x820B01B4;
	sub_820943B8(ctx, base);
	// b 0x820b01f4
	goto loc_820B01F4;
loc_820B01B8:
	// bl 0x820aed38
	ctx.lr = 0x820B01BC;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b01d8
	if (ctx.cr6.eq) goto loc_820B01D8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b01dc
	goto loc_820B01DC;
loc_820B01D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B01DC:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// bl 0x82089220
	ctx.lr = 0x820B01F4;
	sub_82089220(ctx, base);
loc_820B01F4:
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

__attribute__((alias("__imp__sub_820B0210"))) PPC_WEAK_FUNC(sub_820B0210);
PPC_FUNC_IMPL(__imp__sub_820B0210) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b028c
	if (ctx.cr6.eq) goto loc_820B028C;
	// bl 0x8208bf20
	ctx.lr = 0x820B0230;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b02c4
	if (ctx.cr6.eq) goto loc_820B02C4;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,476(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,348(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
loc_820B0258:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b027c
	if (ctx.cr6.eq) goto loc_820B027C;
loc_820B0264:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820b02ac
	if (ctx.cr6.eq) goto loc_820B02AC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b0264
	if (!ctx.cr6.eq) goto loc_820B0264;
loc_820B027C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x820b0258
	if (ctx.cr6.lt) goto loc_820B0258;
loc_820B028C:
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B02AC:
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
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
loc_820B02C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x8208a518
	ctx.lr = 0x820B02D0;
	sub_8208A518(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b028c
	if (ctx.cr6.eq) goto loc_820B028C;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_820B02F0"))) PPC_WEAK_FUNC(sub_820B02F0);
PPC_FUNC_IMPL(__imp__sub_820B02F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b0348
	if (ctx.cr6.eq) goto loc_820B0348;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820b0348
	if (ctx.cr6.lt) goto loc_820B0348;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820b034c
	if (!ctx.cr6.gt) goto loc_820B034C;
loc_820B0348:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B034C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b03d8
	if (ctx.cr6.eq) goto loc_820B03D8;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820b03d8
	if (ctx.cr6.eq) goto loc_820B03D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208bf20
	ctx.lr = 0x820B0368;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b03a0
	if (ctx.cr6.eq) goto loc_820B03A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b03d8
	if (!ctx.cr6.eq) goto loc_820B03D8;
	// lfs f0,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820b03d8
	if (ctx.cr6.eq) goto loc_820B03D8;
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// stfs f31,160(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// b 0x820b03d8
	goto loc_820B03D8;
loc_820B03A0:
	// bl 0x820aed38
	ctx.lr = 0x820B03A4;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b03c0
	if (ctx.cr6.eq) goto loc_820B03C0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b03c4
	goto loc_820B03C4;
loc_820B03C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B03C4:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820B03D8;
	sub_82089220(ctx, base);
loc_820B03D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B03F0"))) PPC_WEAK_FUNC(sub_820B03F0);
PPC_FUNC_IMPL(__imp__sub_820B03F0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b044c
	if (ctx.cr6.eq) goto loc_820B044C;
	// bl 0x8208bf20
	ctx.lr = 0x820B040C;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0428
	if (ctx.cr6.eq) goto loc_820B0428;
	// lfs f1,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B0428:
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x8208a518
	ctx.lr = 0x820B0430;
	sub_8208A518(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b044c
	if (ctx.cr6.eq) goto loc_820B044C;
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B044C:
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

__attribute__((alias("__imp__sub_820B0468"))) PPC_WEAK_FUNC(sub_820B0468);
PPC_FUNC_IMPL(__imp__sub_820B0468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b04c0
	if (ctx.cr6.eq) goto loc_820B04C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820b04c0
	if (ctx.cr6.lt) goto loc_820B04C0;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820b04c4
	if (!ctx.cr6.gt) goto loc_820B04C4;
loc_820B04C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B04C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b0550
	if (ctx.cr6.eq) goto loc_820B0550;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820b0550
	if (ctx.cr6.eq) goto loc_820B0550;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208bf20
	ctx.lr = 0x820B04E0;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0518
	if (ctx.cr6.eq) goto loc_820B0518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b0550
	if (!ctx.cr6.eq) goto loc_820B0550;
	// lfs f0,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820b0550
	if (ctx.cr6.eq) goto loc_820B0550;
	// lhz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 224);
	// stfs f31,228(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,224(r3)
	PPC_STORE_U16(ctx.r3.u32 + 224, ctx.r11.u16);
	// b 0x820b0550
	goto loc_820B0550;
loc_820B0518:
	// bl 0x820aed38
	ctx.lr = 0x820B051C;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0538
	if (ctx.cr6.eq) goto loc_820B0538;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b053c
	goto loc_820B053C;
loc_820B0538:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B053C:
	// li r11,8192
	ctx.r11.s64 = 8192;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820B0550;
	sub_82089220(ctx, base);
loc_820B0550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B0568"))) PPC_WEAK_FUNC(sub_820B0568);
PPC_FUNC_IMPL(__imp__sub_820B0568) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b05c4
	if (ctx.cr6.eq) goto loc_820B05C4;
	// bl 0x8208bf20
	ctx.lr = 0x820B0584;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b05a0
	if (ctx.cr6.eq) goto loc_820B05A0;
	// lfs f1,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B05A0:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x8208a518
	ctx.lr = 0x820B05A8;
	sub_8208A518(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b05c4
	if (ctx.cr6.eq) goto loc_820B05C4;
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B05C4:
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

__attribute__((alias("__imp__sub_820B05E0"))) PPC_WEAK_FUNC(sub_820B05E0);
PPC_FUNC_IMPL(__imp__sub_820B05E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B05E8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b0630
	if (ctx.cr6.eq) goto loc_820B0630;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820b0634
	if (!ctx.cr6.lt) goto loc_820B0634;
loc_820B0630:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820B0634:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b0684
	if (ctx.cr6.eq) goto loc_820B0684;
	// bl 0x820aed38
	ctx.lr = 0x820B0644;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b065c
	if (ctx.cr6.eq) goto loc_820B065C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x820b0660
	goto loc_820B0660;
loc_820B065C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B0660:
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r29,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r29.u8);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// bl 0x82089220
	ctx.lr = 0x820B0684;
	sub_82089220(ctx, base);
loc_820B0684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B0690"))) PPC_WEAK_FUNC(sub_820B0690);
PPC_FUNC_IMPL(__imp__sub_820B0690) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b06e4
	if (ctx.cr6.eq) goto loc_820B06E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820b06e8
	if (!ctx.cr6.lt) goto loc_820B06E8;
loc_820B06E4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820B06E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b0730
	if (ctx.cr6.eq) goto loc_820B0730;
	// bl 0x820aed38
	ctx.lr = 0x820B06F8;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0710
	if (ctx.cr6.eq) goto loc_820B0710;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x820b0714
	goto loc_820B0714;
loc_820B0710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B0714:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stb r31,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r31.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82089220
	ctx.lr = 0x820B0730;
	sub_82089220(ctx, base);
loc_820B0730:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_820B074C"))) PPC_WEAK_FUNC(sub_820B074C);
PPC_FUNC_IMPL(__imp__sub_820B074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0750"))) PPC_WEAK_FUNC(sub_820B0750);
PPC_FUNC_IMPL(__imp__sub_820B0750) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b07a4
	if (ctx.cr6.eq) goto loc_820B07A4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820b07a8
	if (!ctx.cr6.lt) goto loc_820B07A8;
loc_820B07A4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820B07A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b07ec
	if (ctx.cr6.eq) goto loc_820B07EC;
	// bl 0x820aed38
	ctx.lr = 0x820B07B8;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b07d0
	if (ctx.cr6.eq) goto loc_820B07D0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x820b07d4
	goto loc_820B07D4;
loc_820B07D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B07D4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r31,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r31.u8);
	// bl 0x82089220
	ctx.lr = 0x820B07EC;
	sub_82089220(ctx, base);
loc_820B07EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_820B0808"))) PPC_WEAK_FUNC(sub_820B0808);
PPC_FUNC_IMPL(__imp__sub_820B0808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B0810;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b0858
	if (ctx.cr6.eq) goto loc_820B0858;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820b085c
	if (!ctx.cr6.lt) goto loc_820B085C;
loc_820B0858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B085C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b08a8
	if (ctx.cr6.eq) goto loc_820B08A8;
	// bl 0x820aed38
	ctx.lr = 0x820B086C;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0888
	if (ctx.cr6.eq) goto loc_820B0888;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b088c
	goto loc_820B088C;
loc_820B0888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B088C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// bl 0x82089220
	ctx.lr = 0x820B08A8;
	sub_82089220(ctx, base);
loc_820B08A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B08B4"))) PPC_WEAK_FUNC(sub_820B08B4);
PPC_FUNC_IMPL(__imp__sub_820B08B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B08B8"))) PPC_WEAK_FUNC(sub_820B08B8);
PPC_FUNC_IMPL(__imp__sub_820B08B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2136, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82313430
	sub_82313430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B08D8"))) PPC_WEAK_FUNC(sub_820B08D8);
PPC_FUNC_IMPL(__imp__sub_820B08D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B08DC"))) PPC_WEAK_FUNC(sub_820B08DC);
PPC_FUNC_IMPL(__imp__sub_820B08DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B08E0"))) PPC_WEAK_FUNC(sub_820B08E0);
PPC_FUNC_IMPL(__imp__sub_820B08E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b0904
	if (ctx.cr6.eq) goto loc_820B0904;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2136, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820B0904:
	// b 0x82313508
	sub_82313508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B0908"))) PPC_WEAK_FUNC(sub_820B0908);
PPC_FUNC_IMPL(__imp__sub_820B0908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B090C"))) PPC_WEAK_FUNC(sub_820B090C);
PPC_FUNC_IMPL(__imp__sub_820B090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0910"))) PPC_WEAK_FUNC(sub_820B0910);
PPC_FUNC_IMPL(__imp__sub_820B0910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820aed38
	ctx.lr = 0x820B0930;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b094c
	if (ctx.cr6.eq) goto loc_820B094C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b0950
	goto loc_820B0950;
loc_820B094C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B0950:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820B0964;
	sub_82089220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B097C"))) PPC_WEAK_FUNC(sub_820B097C);
PPC_FUNC_IMPL(__imp__sub_820B097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0980"))) PPC_WEAK_FUNC(sub_820B0980);
PPC_FUNC_IMPL(__imp__sub_820B0980) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820aed38
	ctx.lr = 0x820B0998;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b09b4
	if (ctx.cr6.eq) goto loc_820B09B4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b09b8
	goto loc_820B09B8;
loc_820B09B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B09B8:
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820B09C8;
	sub_82089220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B09DC"))) PPC_WEAK_FUNC(sub_820B09DC);
PPC_FUNC_IMPL(__imp__sub_820B09DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B09E0"))) PPC_WEAK_FUNC(sub_820B09E0);
PPC_FUNC_IMPL(__imp__sub_820B09E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820aed38
	ctx.lr = 0x820B0A00;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0a1c
	if (ctx.cr6.eq) goto loc_820B0A1C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b0a20
	goto loc_820B0A20;
loc_820B0A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B0A20:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820B0A34;
	sub_82089220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B0A4C"))) PPC_WEAK_FUNC(sub_820B0A4C);
PPC_FUNC_IMPL(__imp__sub_820B0A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0A50"))) PPC_WEAK_FUNC(sub_820B0A50);
PPC_FUNC_IMPL(__imp__sub_820B0A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b0a8c
	if (ctx.cr6.eq) goto loc_820B0A8C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820b0a8c
	if (ctx.cr6.lt) goto loc_820B0A8C;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820b0a90
	if (!ctx.cr6.gt) goto loc_820B0A90;
loc_820B0A8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B0A90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// stfs f1,36(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B0AC4"))) PPC_WEAK_FUNC(sub_820B0AC4);
PPC_FUNC_IMPL(__imp__sub_820B0AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0AC8"))) PPC_WEAK_FUNC(sub_820B0AC8);
PPC_FUNC_IMPL(__imp__sub_820B0AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B0AD8"))) PPC_WEAK_FUNC(sub_820B0AD8);
PPC_FUNC_IMPL(__imp__sub_820B0AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820B0AE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// beq cr6,0x820b0b74
	if (ctx.cr6.eq) goto loc_820B0B74;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r31,64
	ctx.r31.s64 = 64;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r25,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820B0B60;
	sub_8233E4E0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820b0ad8
	ctx.lr = 0x820B0B6C;
	sub_820B0AD8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820B0B74:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820b0b90
	if (!ctx.cr6.eq) goto loc_820B0B90;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b0f94
	if (ctx.cr6.eq) goto loc_820B0F94;
loc_820B0B90:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
	// rlwinm r8,r10,0,1,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820b0bd8
	if (ctx.cr6.eq) goto loc_820B0BD8;
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820b0bd8
	if (ctx.cr6.lt) goto loc_820B0BD8;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// ble cr6,0x820b0bdc
	if (!ctx.cr6.gt) goto loc_820B0BDC;
loc_820B0BD8:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_820B0BDC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b0f94
	if (ctx.cr6.eq) goto loc_820B0F94;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r10,0,1,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820b0c18
	if (ctx.cr6.eq) goto loc_820B0C18;
	// lfs f13,588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820b0c18
	if (ctx.cr6.lt) goto loc_820B0C18;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ble cr6,0x820b0c1c
	if (!ctx.cr6.gt) goto loc_820B0C1C;
loc_820B0C18:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820B0C1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b0f94
	if (ctx.cr6.eq) goto loc_820B0F94;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b0ca0
	if (ctx.cr6.eq) goto loc_820B0CA0;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b0f94
	if (ctx.cr6.eq) goto loc_820B0F94;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x820b0f94
	if (!ctx.cr6.lt) goto loc_820B0F94;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26328);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b0c9c
	if (ctx.cr6.eq) goto loc_820B0C9C;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwimi r10,r24,10,21,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r24.u32, 10) & 0xFFFFFFFFFFFFF7FF) | (ctx.r10.u64 & 0x800);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b0c8c
	if (ctx.cr6.eq) goto loc_820B0C8C;
	// lwz r11,508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b0c90
	if (ctx.cr6.eq) goto loc_820B0C90;
loc_820B0C8C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820B0C90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b0f94
	if (ctx.cr6.eq) goto loc_820B0F94;
loc_820B0C9C:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_820B0CA0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b0cdc
	if (!ctx.cr6.eq) goto loc_820B0CDC;
	// bl 0x820ddca8
	ctx.lr = 0x820B0CBC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0cd0
	if (ctx.cr6.eq) goto loc_820B0CD0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x820b0cf8
	goto loc_820B0CF8;
loc_820B0CD0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x820b0cf8
	goto loc_820B0CF8;
loc_820B0CDC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b0d08
	if (!ctx.cr6.eq) goto loc_820B0D08;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b0f94
	if (ctx.cr6.eq) goto loc_820B0F94;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B0CF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b0d28
	if (ctx.cr6.eq) goto loc_820B0D28;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// b 0x820b0d28
	goto loc_820B0D28;
loc_820B0D08:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b0f94
	if (ctx.cr6.eq) goto loc_820B0F94;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B0D24;
	sub_820F3178(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820B0D28:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b0f94
	if (ctx.cr6.eq) goto loc_820B0F94;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x820aed38
	ctx.lr = 0x820B0D4C;
	sub_820AED38(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0d68
	if (ctx.cr6.eq) goto loc_820B0D68;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r25,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r25.u32);
	// b 0x820b0d6c
	goto loc_820B0D6C;
loc_820B0D68:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_820B0D6C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
loc_820B0D80:
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
	// bne 0x820b0d80
	if (!ctx.cr0.eq) goto loc_820B0D80;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x820b0dbc
	if (!ctx.cr6.eq) goto loc_820B0DBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820B0DB8;
	sub_820F5F90(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
loc_820B0DBC:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820b0df4
	if (!ctx.cr6.eq) goto loc_820B0DF4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x820b0df8
	goto loc_820B0DF8;
loc_820B0DF4:
	// li r11,-2
	ctx.r11.s64 = -2;
loc_820B0DF8:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b0e3c
	if (!ctx.cr6.eq) goto loc_820B0E3C;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b0e3c
	if (!ctx.cr6.eq) goto loc_820B0E3C;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b0e34
	if (ctx.cr6.eq) goto loc_820B0E34;
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// b 0x820b0e40
	goto loc_820B0E40;
loc_820B0E34:
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// b 0x820b0e40
	goto loc_820B0E40;
loc_820B0E3C:
	// stw r24,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r24.u32);
loc_820B0E40:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stb r9,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r9.u8);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r7,r10,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820b0e7c
	if (!ctx.cr6.eq) goto loc_820B0E7C;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b0e7c
	if (!ctx.cr6.eq) goto loc_820B0E7C;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x820b0e84
	goto loc_820B0E84;
loc_820B0E7C:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_820B0E84:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820b0e94
	if (ctx.cr6.lt) goto loc_820B0E94;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_820B0E94:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b0eb0
	if (ctx.cr6.eq) goto loc_820B0EB0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_820B0EB0:
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b0efc
	if (ctx.cr6.eq) goto loc_820B0EFC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b0efc
	if (ctx.cr6.eq) goto loc_820B0EFC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,25448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25448);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B0EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// b 0x820b0f1c
	goto loc_820B0F1C;
loc_820B0EFC:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820b0f14
	if (!ctx.cr6.eq) goto loc_820B0F14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820B0F10;
	sub_820F5F90(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
loc_820B0F14:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_820B0F1C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b0f34
	if (!ctx.cr6.eq) goto loc_820B0F34;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// b 0x820b0f3c
	goto loc_820B0F3C;
loc_820B0F34:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_820B0F3C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b0f5c
	if (ctx.cr6.eq) goto loc_820B0F5C;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b0f5c
	if (ctx.cr6.eq) goto loc_820B0F5C;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x820b0f60
	goto loc_820B0F60;
loc_820B0F5C:
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_820B0F60:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// stb r10,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r10.u8);
	// lhz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stb r8,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r8.u8);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// bl 0x82089220
	ctx.lr = 0x820B0F88;
	sub_82089220(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820B0F94:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B0FA0"))) PPC_WEAK_FUNC(sub_820B0FA0);
PPC_FUNC_IMPL(__imp__sub_820B0FA0) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b0fd0
	if (!ctx.cr6.eq) goto loc_820B0FD0;
loc_820B0FB4:
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
loc_820B0FD0:
	// bl 0x8208bf20
	ctx.lr = 0x820B0FD4;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0fb4
	if (ctx.cr6.eq) goto loc_820B0FB4;
	// bl 0x82094808
	ctx.lr = 0x820B0FE0;
	sub_82094808(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B0FF0"))) PPC_WEAK_FUNC(sub_820B0FF0);
PPC_FUNC_IMPL(__imp__sub_820B0FF0) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b10dc
	if (ctx.cr6.eq) goto loc_820B10DC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8208a518
	ctx.lr = 0x820B1018;
	sub_8208A518(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1054
	if (ctx.cr6.eq) goto loc_820B1054;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820b1044
	if (!ctx.cr6.eq) goto loc_820B1044;
loc_820B102C:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_820B1044:
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b111c
	if (!ctx.cr6.eq) goto loc_820B111C;
loc_820B1054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208bf20
	ctx.lr = 0x820B105C;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b10dc
	if (ctx.cr6.eq) goto loc_820B10DC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bgt cr6,0x820b10c0
	if (ctx.cr6.gt) goto loc_820B10C0;
	// beq cr6,0x820b111c
	if (ctx.cr6.eq) goto loc_820B111C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x820b1098
	if (ctx.cr6.gt) goto loc_820B1098;
	// beq cr6,0x820b111c
	if (ctx.cr6.eq) goto loc_820B111C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820b111c
	if (ctx.cr6.eq) goto loc_820B111C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820b1134
	if (ctx.cr6.eq) goto loc_820B1134;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// b 0x820b1118
	goto loc_820B1118;
loc_820B1098:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x820b102c
	if (ctx.cr6.eq) goto loc_820B102C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x820b10dc
	if (!ctx.cr6.eq) goto loc_820B10DC;
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
loc_820B10C0:
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bgt cr6,0x820b110c
	if (ctx.cr6.gt) goto loc_820B110C;
	// beq cr6,0x820b1134
	if (ctx.cr6.eq) goto loc_820B1134;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x820b10f4
	if (ctx.cr6.eq) goto loc_820B10F4;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x820b111c
	if (ctx.cr6.eq) goto loc_820B111C;
loc_820B10DC:
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
loc_820B10F4:
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_820B110C:
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// beq cr6,0x820b1134
	if (ctx.cr6.eq) goto loc_820B1134;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
loc_820B1118:
	// bne cr6,0x820b10dc
	if (!ctx.cr6.eq) goto loc_820B10DC;
loc_820B111C:
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_820B1134:
	// li r3,4
	ctx.r3.s64 = 4;
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

__attribute__((alias("__imp__sub_820B114C"))) PPC_WEAK_FUNC(sub_820B114C);
PPC_FUNC_IMPL(__imp__sub_820B114C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1150"))) PPC_WEAK_FUNC(sub_820B1150);
PPC_FUNC_IMPL(__imp__sub_820B1150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B1158;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b11a0
	if (ctx.cr6.eq) goto loc_820B11A0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820b11a4
	if (!ctx.cr6.lt) goto loc_820B11A4;
loc_820B11A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B11A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b11f8
	if (ctx.cr6.eq) goto loc_820B11F8;
	// bl 0x820aed38
	ctx.lr = 0x820B11B4;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b11d0
	if (ctx.cr6.eq) goto loc_820B11D0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b11d4
	goto loc_820B11D4;
loc_820B11D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B11D4:
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// bl 0x82089220
	ctx.lr = 0x820B11F8;
	sub_82089220(ctx, base);
loc_820B11F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B1204"))) PPC_WEAK_FUNC(sub_820B1204);
PPC_FUNC_IMPL(__imp__sub_820B1204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1208"))) PPC_WEAK_FUNC(sub_820B1208);
PPC_FUNC_IMPL(__imp__sub_820B1208) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b122c
	if (ctx.cr6.eq) goto loc_820B122C;
	// bl 0x8208bf20
	ctx.lr = 0x820B1220;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b122c
	if (ctx.cr6.eq) goto loc_820B122C;
	// stfs f1,492(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
loc_820B122C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B123C"))) PPC_WEAK_FUNC(sub_820B123C);
PPC_FUNC_IMPL(__imp__sub_820B123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1240"))) PPC_WEAK_FUNC(sub_820B1240);
PPC_FUNC_IMPL(__imp__sub_820B1240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15640);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820b125c
	if (ctx.cr6.eq) goto loc_820B125C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x820b1260
	if (!ctx.cr6.eq) goto loc_820B1260;
loc_820B125C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820B1260:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b1270
	if (ctx.cr6.eq) goto loc_820B1270;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820B1270:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820b1280
	if (!ctx.cr6.eq) goto loc_820B1280;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820B1280:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820b1290
	if (!ctx.cr6.eq) goto loc_820B1290;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820B1290:
	// li r10,4
	ctx.r10.s64 = 4;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B12A8"))) PPC_WEAK_FUNC(sub_820B12A8);
PPC_FUNC_IMPL(__imp__sub_820B12A8) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b12d0
	if (!ctx.cr6.eq) goto loc_820B12D0;
loc_820B12BC:
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
loc_820B12D0:
	// bl 0x8208bf20
	ctx.lr = 0x820B12D4;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b12bc
	if (ctx.cr6.eq) goto loc_820B12BC;
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B12F0"))) PPC_WEAK_FUNC(sub_820B12F0);
PPC_FUNC_IMPL(__imp__sub_820B12F0) {
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
	// bl 0x8233ca70
	ctx.lr = 0x820B1300;
	sub_8233CA70(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,968(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 968);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820b0a50
	ctx.lr = 0x820B1318;
	sub_820B0A50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B1328"))) PPC_WEAK_FUNC(sub_820B1328);
PPC_FUNC_IMPL(__imp__sub_820B1328) {
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
	// bl 0x8233ca70
	ctx.lr = 0x820B1340;
	sub_8233CA70(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,968(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 968);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820b09e0
	ctx.lr = 0x820B135C;
	sub_820B09E0(ctx, base);
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

__attribute__((alias("__imp__sub_820B1370"))) PPC_WEAK_FUNC(sub_820B1370);
PPC_FUNC_IMPL(__imp__sub_820B1370) {
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
	// bl 0x8233ca70
	ctx.lr = 0x820B1388;
	sub_8233CA70(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,968(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 968);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820b0468
	ctx.lr = 0x820B13A4;
	sub_820B0468(ctx, base);
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

__attribute__((alias("__imp__sub_820B13B8"))) PPC_WEAK_FUNC(sub_820B13B8);
PPC_FUNC_IMPL(__imp__sub_820B13B8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,15352
	ctx.r31.s64 = ctx.r11.s64 + 15352;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b13e8
	if (ctx.cr6.eq) goto loc_820B13E8;
	// bl 0x82172d60
	ctx.lr = 0x820B13E8;
	sub_82172D60(ctx, base);
loc_820B13E8:
	// lhz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// sth r11,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r11.u16);
	// bl 0x82097888
	ctx.lr = 0x820B1404;
	sub_82097888(ctx, base);
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

__attribute__((alias("__imp__sub_820B141C"))) PPC_WEAK_FUNC(sub_820B141C);
PPC_FUNC_IMPL(__imp__sub_820B141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1420"))) PPC_WEAK_FUNC(sub_820B1420);
PPC_FUNC_IMPL(__imp__sub_820B1420) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,15352
	ctx.r11.s64 = ctx.r11.s64 + 15352;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r10,76
	ctx.r31.s64 = ctx.r10.s64 + 76;
	// bne cr6,0x820b144c
	if (!ctx.cr6.eq) goto loc_820B144C;
	// lwz r31,268(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
loc_820B144C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b1460
	if (ctx.cr6.eq) goto loc_820B1460;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820B1460;
	sub_8233E4E0(ctx, base);
loc_820B1460:
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r3,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_820B147C"))) PPC_WEAK_FUNC(sub_820B147C);
PPC_FUNC_IMPL(__imp__sub_820B147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1480"))) PPC_WEAK_FUNC(sub_820B1480);
PPC_FUNC_IMPL(__imp__sub_820B1480) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,15352
	ctx.r31.s64 = ctx.r11.s64 + 15352;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b14b8
	if (ctx.cr6.eq) goto loc_820B14B8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820B14B8;
	sub_82080000(ctx, base);
loc_820B14B8:
	// lhz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// sth r11,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r11.u16);
	// bne cr6,0x820b14dc
	if (!ctx.cr6.eq) goto loc_820B14DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b14fc
	goto loc_820B14FC;
loc_820B14DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82087078
	ctx.lr = 0x820B14E8;
	sub_82087078(ctx, base);
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x820b14f8
	if (!ctx.cr6.eq) goto loc_820B14F8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B14F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B14FC:
	// bl 0x82097948
	ctx.lr = 0x820B1500;
	sub_82097948(ctx, base);
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

__attribute__((alias("__imp__sub_820B1518"))) PPC_WEAK_FUNC(sub_820B1518);
PPC_FUNC_IMPL(__imp__sub_820B1518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B1520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8208bf20
	ctx.lr = 0x820B1534;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1558
	if (ctx.cr6.eq) goto loc_820B1558;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f3,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82094c68
	ctx.lr = 0x820B1550;
	sub_82094C68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820B1558:
	// bl 0x820aed38
	ctx.lr = 0x820B155C;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1578
	if (ctx.cr6.eq) goto loc_820B1578;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b157c
	goto loc_820B157C;
loc_820B1578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B157C:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// bl 0x82089220
	ctx.lr = 0x820B15A8;
	sub_82089220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B15B0"))) PPC_WEAK_FUNC(sub_820B15B0);
PPC_FUNC_IMPL(__imp__sub_820B15B0) {
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
	// bl 0x8208bf20
	ctx.lr = 0x820B15C8;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b15f8
	if (ctx.cr6.eq) goto loc_820B15F8;
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
loc_820B15F8:
	// bl 0x820aed38
	ctx.lr = 0x820B15FC;
	sub_820AED38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1618
	if (ctx.cr6.eq) goto loc_820B1618;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// b 0x820b161c
	goto loc_820B161C;
loc_820B1618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B161C:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82089220
	ctx.lr = 0x820B162C;
	sub_82089220(ctx, base);
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

__attribute__((alias("__imp__sub_820B1640"))) PPC_WEAK_FUNC(sub_820B1640);
PPC_FUNC_IMPL(__imp__sub_820B1640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15352
	ctx.r10.s64 = ctx.r11.s64 + 15352;
	// stfs f1,284(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 284, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B1650"))) PPC_WEAK_FUNC(sub_820B1650);
PPC_FUNC_IMPL(__imp__sub_820B1650) {
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
	// bl 0x8208bf20
	ctx.lr = 0x820B1660;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b1684
	if (!ctx.cr6.eq) goto loc_820B1684;
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
loc_820B1684:
	// bl 0x82094db8
	ctx.lr = 0x820B1688;
	sub_82094DB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820b16a0
	if (!ctx.cr6.lt) goto loc_820B16A0;
	// lfs f1,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
loc_820B16A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B16B0"))) PPC_WEAK_FUNC(sub_820B16B0);
PPC_FUNC_IMPL(__imp__sub_820B16B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B16B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8208bf20
	ctx.lr = 0x820B16CC;
	sub_8208BF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b16f8
	if (!ctx.cr6.eq) goto loc_820B16F8;
loc_820B16D4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820B16F8:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b16d4
	if (ctx.cr6.eq) goto loc_820B16D4;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b16d4
	if (!ctx.cr6.lt) goto loc_820B16D4;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b16d4
	if (ctx.cr6.eq) goto loc_820B16D4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b1764
	if (ctx.cr6.eq) goto loc_820B1764;
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// ld r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x823413b0
	ctx.lr = 0x820B1744;
	sub_823413B0(ctx, base);
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// b 0x820b1768
	goto loc_820B1768;
loc_820B1764:
	// lfs f0,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
loc_820B1768:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209a728
	ctx.lr = 0x820B1774;
	sub_8209A728(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// bl 0x82095608
	ctx.lr = 0x820B177C;
	sub_82095608(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B178C"))) PPC_WEAK_FUNC(sub_820B178C);
PPC_FUNC_IMPL(__imp__sub_820B178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1790"))) PPC_WEAK_FUNC(sub_820B1790);
PPC_FUNC_IMPL(__imp__sub_820B1790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 * 272;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r9,r11,336
	ctx.r9.s64 = ctx.r11.s64 + 336;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B17A8"))) PPC_WEAK_FUNC(sub_820B17A8);
PPC_FUNC_IMPL(__imp__sub_820B17A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820b2210
	sub_820B2210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B17AC"))) PPC_WEAK_FUNC(sub_820B17AC);
PPC_FUNC_IMPL(__imp__sub_820B17AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B17B0"))) PPC_WEAK_FUNC(sub_820B17B0);
PPC_FUNC_IMPL(__imp__sub_820B17B0) {
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
	// bl 0x82087078
	ctx.lr = 0x820B17C4;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b17e0
	if (!ctx.cr6.eq) goto loc_820B17E0;
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
loc_820B17E0:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r11,r11,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// addi r10,r11,-512
	ctx.r10.s64 = ctx.r11.s64 + -512;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82172d60
	ctx.lr = 0x820B17F8;
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
}

__attribute__((alias("__imp__sub_820B1810"))) PPC_WEAK_FUNC(sub_820B1810);
PPC_FUNC_IMPL(__imp__sub_820B1810) {
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
	// bl 0x82087078
	ctx.lr = 0x820B1824;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b1844
	if (!ctx.cr6.eq) goto loc_820B1844;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_820B1844:
	// lwz r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820b1884
	if (ctx.cr6.eq) goto loc_820B1884;
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B185C:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b1874
	if (ctx.cr6.eq) goto loc_820B1874;
	// lhz r10,116(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b18a4
	if (!ctx.cr6.eq) goto loc_820B18A4;
loc_820B1874:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820b185c
	if (ctx.cr6.lt) goto loc_820B185C;
loc_820B1884:
	// li r31,1
	ctx.r31.s64 = 1;
loc_820B1888:
	// bl 0x82172d60
	ctx.lr = 0x820B188C;
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
loc_820B18A4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b1888
	goto loc_820B1888;
}

__attribute__((alias("__imp__sub_820B18AC"))) PPC_WEAK_FUNC(sub_820B18AC);
PPC_FUNC_IMPL(__imp__sub_820B18AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B18B0"))) PPC_WEAK_FUNC(sub_820B18B0);
PPC_FUNC_IMPL(__imp__sub_820B18B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82087078
	ctx.lr = 0x820B18C8;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b18e4
	if (!ctx.cr6.eq) goto loc_820B18E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820b18fc
	goto loc_820B18FC;
loc_820B18E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821636a8
	ctx.lr = 0x820B18EC;
	sub_821636A8(ctx, base);
	// lfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820B18F8;
	sub_82172D60(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_820B18FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B1914"))) PPC_WEAK_FUNC(sub_820B1914);
PPC_FUNC_IMPL(__imp__sub_820B1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1918"))) PPC_WEAK_FUNC(sub_820B1918);
PPC_FUNC_IMPL(__imp__sub_820B1918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// stw r3,2068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2068, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B1928"))) PPC_WEAK_FUNC(sub_820B1928);
PPC_FUNC_IMPL(__imp__sub_820B1928) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82087078
	ctx.lr = 0x820B193C;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b1964
	if (!ctx.cr6.eq) goto loc_820B1964;
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
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B1964:
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820b1994
	if (!ctx.cr6.eq) goto loc_820B1994;
	// bl 0x82172d60
	ctx.lr = 0x820B1974;
	sub_82172D60(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B1994:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r6,76(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x820b1a74
	if (ctx.cr6.lt) goto loc_820B1A74;
	// addi r5,r6,-3
	ctx.r5.s64 = ctx.r6.s64 + -3;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B19BC:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820b19e0
	if (!ctx.cr6.lt) goto loc_820B19E0;
	// lwz r10,84(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820b19e0
	if (ctx.cr0.eq) goto loc_820B19E0;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x820b19e0
	if (ctx.cr6.gt) goto loc_820B19E0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820B19E0:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820b1a0c
	if (!ctx.cr6.lt) goto loc_820B1A0C;
	// lwz r10,84(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r10,r10,36
	ctx.xer.ca = ctx.r10.u32 > 4294967259;
	ctx.r10.s64 = ctx.r10.s64 + 36;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820b1a0c
	if (ctx.cr0.eq) goto loc_820B1A0C;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x820b1a0c
	if (ctx.cr6.gt) goto loc_820B1A0C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820B1A0C:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820b1a34
	if (!ctx.cr6.lt) goto loc_820B1A34;
	// lwz r10,84(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r10,r10,72
	ctx.xer.ca = ctx.r10.u32 > 4294967223;
	ctx.r10.s64 = ctx.r10.s64 + 72;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820b1a34
	if (ctx.cr0.eq) goto loc_820B1A34;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x820b1a34
	if (ctx.cr6.gt) goto loc_820B1A34;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820B1A34:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820b1a60
	if (!ctx.cr6.lt) goto loc_820B1A60;
	// lwz r10,84(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r10,r10,108
	ctx.xer.ca = ctx.r10.u32 > 4294967187;
	ctx.r10.s64 = ctx.r10.s64 + 108;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820b1a60
	if (ctx.cr0.eq) goto loc_820B1A60;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x820b1a60
	if (ctx.cr6.gt) goto loc_820B1A60;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820B1A60:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x820b19bc
	if (ctx.cr6.lt) goto loc_820B19BC;
loc_820B1A74:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820b1ac0
	if (!ctx.cr6.lt) goto loc_820B1AC0;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r8,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_820B1A90:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820b1ab4
	if (!ctx.cr6.lt) goto loc_820B1AB4;
	// lwz r11,84(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820b1ab4
	if (ctx.cr0.eq) goto loc_820B1AB4;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x820b1ab4
	if (ctx.cr6.gt) goto loc_820B1AB4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820B1AB4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bdnz 0x820b1a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B1A90;
loc_820B1AC0:
	// bl 0x82172d60
	ctx.lr = 0x820B1AC4;
	sub_82172D60(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B1ADC"))) PPC_WEAK_FUNC(sub_820B1ADC);
PPC_FUNC_IMPL(__imp__sub_820B1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1AE0"))) PPC_WEAK_FUNC(sub_820B1AE0);
PPC_FUNC_IMPL(__imp__sub_820B1AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820B1AE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x820B1AF8;
	sub_82081C00(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r30,r9,26740
	ctx.r30.s64 = ctx.r9.s64 + 26740;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,26740(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26740, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x820b2158
	ctx.lr = 0x820B1B18;
	sub_820B2158(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// ori r11,r7,128
	ctx.r11.u64 = ctx.r7.u64 | 128;
	// stb r11,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r11.u8);
	// lwz r3,-27096(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820B1B38;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b1b44
	if (!ctx.cr6.eq) goto loc_820B1B44;
	// bl 0x821b3000
	ctx.lr = 0x820B1B44;
	sub_821B3000(ctx, base);
loc_820B1B44:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b1b58
	if (ctx.cr6.eq) goto loc_820B1B58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820B1B58:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r10,r10,-4696
	ctx.r10.s64 = ctx.r10.s64 + -4696;
	// addi r9,r9,-4592
	ctx.r9.s64 = ctx.r9.s64 + -4592;
	// addi r8,r8,2776
	ctx.r8.s64 = ctx.r8.s64 + 2776;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r7,r7,-3856
	ctx.r7.s64 = ctx.r7.s64 + -3856;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r6,r6,-3408
	ctx.r6.s64 = ctx.r6.s64 + -3408;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r5,r5,-2792
	ctx.r5.s64 = ctx.r5.s64 + -2792;
	// stw r7,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// addi r3,r3,-2568
	ctx.r3.s64 = ctx.r3.s64 + -2568;
	// addi r4,r4,-2688
	ctx.r4.s64 = ctx.r4.s64 + -2688;
	// addi r11,r11,-2472
	ctx.r11.s64 = ctx.r11.s64 + -2472;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// addi r10,r30,-2352
	ctx.r10.s64 = ctx.r30.s64 + -2352;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r9,r29,-696
	ctx.r9.s64 = ctx.r29.s64 + -696;
	// addi r8,r28,-672
	ctx.r8.s64 = ctx.r28.s64 + -672;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r7,r27,-648
	ctx.r7.s64 = ctx.r27.s64 + -648;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// addi r6,r26,-632
	ctx.r6.s64 = ctx.r26.s64 + -632;
	// stw r8,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r8.u32);
	// addi r5,r25,-624
	ctx.r5.s64 = ctx.r25.s64 + -624;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// addi r3,r23,-576
	ctx.r3.s64 = ctx.r23.s64 + -576;
	// addi r4,r24,-616
	ctx.r4.s64 = ctx.r24.s64 + -616;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// addi r11,r22,-568
	ctx.r11.s64 = ctx.r22.s64 + -568;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r21,-528
	ctx.r10.s64 = ctx.r21.s64 + -528;
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// addi r9,r20,-504
	ctx.r9.s64 = ctx.r20.s64 + -504;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r8,r19,-480
	ctx.r8.s64 = ctx.r19.s64 + -480;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r7,r18,-464
	ctx.r7.s64 = ctx.r18.s64 + -464;
	// stw r9,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// addi r6,r17,-456
	ctx.r6.s64 = ctx.r17.s64 + -456;
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// addi r5,r16,-448
	ctx.r5.s64 = ctx.r16.s64 + -448;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// addi r4,r15,-408
	ctx.r4.s64 = ctx.r15.s64 + -408;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// addi r11,r3,-400
	ctx.r11.s64 = ctx.r3.s64 + -400;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r14,-360
	ctx.r10.s64 = ctx.r14.s64 + -360;
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r7,r7,-64
	ctx.r7.s64 = ctx.r7.s64 + -64;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// stw r7,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r7.u32);
	// addi r4,r4,264
	ctx.r4.s64 = ctx.r4.s64 + 264;
	// stw r6,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r6.u32);
	// addi r3,r3,528
	ctx.r3.s64 = ctx.r3.s64 + 528;
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// addi r11,r11,752
	ctx.r11.s64 = ctx.r11.s64 + 752;
	// stw r4,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// addi r9,r9,1008
	ctx.r9.s64 = ctx.r9.s64 + 1008;
	// addi r8,r8,1128
	ctx.r8.s64 = ctx.r8.s64 + 1128;
	// addi r7,r30,1384
	ctx.r7.s64 = ctx.r30.s64 + 1384;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r6,r29,1504
	ctx.r6.s64 = ctx.r29.s64 + 1504;
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// addi r5,r28,1680
	ctx.r5.s64 = ctx.r28.s64 + 1680;
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// addi r4,r27,1872
	ctx.r4.s64 = ctx.r27.s64 + 1872;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// addi r3,r26,2056
	ctx.r3.s64 = ctx.r26.s64 + 2056;
	// stw r5,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r5.u32);
	// addi r11,r25,152
	ctx.r11.s64 = ctx.r25.s64 + 152;
	// stw r4,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r4.u32);
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// addi r9,r24,-2120
	ctx.r9.s64 = ctx.r24.s64 + -2120;
	// addi r8,r23,-2000
	ctx.r8.s64 = ctx.r23.s64 + -2000;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// addi r7,r22,2232
	ctx.r7.s64 = ctx.r22.s64 + 2232;
	// addi r6,r21,2272
	ctx.r6.s64 = ctx.r21.s64 + 2272;
	// addi r5,r20,2320
	ctx.r5.s64 = ctx.r20.s64 + 2320;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// addi r4,r19,2528
	ctx.r4.s64 = ctx.r19.s64 + 2528;
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// addi r3,r18,2640
	ctx.r3.s64 = ctx.r18.s64 + 2640;
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// addi r11,r17,2760
	ctx.r11.s64 = ctx.r17.s64 + 2760;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// addi r9,r16,4080
	ctx.r9.s64 = ctx.r16.s64 + 4080;
	// addi r8,r15,4000
	ctx.r8.s64 = ctx.r15.s64 + 4000;
	// addi r7,r14,4432
	ctx.r7.s64 = ctx.r14.s64 + 4432;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// addi r6,r10,4616
	ctx.r6.s64 = ctx.r10.s64 + 4616;
	// stw r8,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820B1E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32226
	ctx.r4.s64 = -2111963136;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r4,-21912
	ctx.r4.s64 = ctx.r4.s64 + -21912;
	// addi r11,r11,4672
	ctx.r11.s64 = ctx.r11.s64 + 4672;
	// addi r10,r10,2432
	ctx.r10.s64 = ctx.r10.s64 + 2432;
	// stw r4,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r4.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// addi r4,r3,5152
	ctx.r4.s64 = ctx.r3.s64 + 5152;
	// addi r9,r9,4776
	ctx.r9.s64 = ctx.r9.s64 + 4776;
	// addi r8,r8,4848
	ctx.r8.s64 = ctx.r8.s64 + 4848;
	// stw r4,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r4.u32);
	// addi r7,r7,4904
	ctx.r7.s64 = ctx.r7.s64 + 4904;
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// addi r6,r6,4976
	ctx.r6.s64 = ctx.r6.s64 + 4976;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// addi r5,r5,-21912
	ctx.r5.s64 = ctx.r5.s64 + -21912;
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// addi r3,r30,5048
	ctx.r3.s64 = ctx.r30.s64 + 5048;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// addi r11,r29,5248
	ctx.r11.s64 = ctx.r29.s64 + 5248;
	// stw r5,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r5.u32);
	// addi r10,r28,5400
	ctx.r10.s64 = ctx.r28.s64 + 5400;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// addi r9,r27,5552
	ctx.r9.s64 = ctx.r27.s64 + 5552;
	// addi r8,r26,-912
	ctx.r8.s64 = ctx.r26.s64 + -912;
	// addi r7,r25,-824
	ctx.r7.s64 = ctx.r25.s64 + -824;
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// stw r7,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r7.u32);
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// addi r6,r24,5696
	ctx.r6.s64 = ctx.r24.s64 + 5696;
	// addi r5,r23,5712
	ctx.r5.s64 = ctx.r23.s64 + 5712;
	// addi r4,r22,5808
	ctx.r4.s64 = ctx.r22.s64 + 5808;
	// stw r6,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r6.u32);
	// addi r3,r21,6032
	ctx.r3.s64 = ctx.r21.s64 + 6032;
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// addi r11,r20,6056
	ctx.r11.s64 = ctx.r20.s64 + 6056;
	// stw r4,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r4.u32);
	// addi r10,r19,6064
	ctx.r10.s64 = ctx.r19.s64 + 6064;
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r9,r18,6160
	ctx.r9.s64 = ctx.r18.s64 + 6160;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r8,r17,6320
	ctx.r8.s64 = ctx.r17.s64 + 6320;
	// addi r7,r16,6424
	ctx.r7.s64 = ctx.r16.s64 + 6424;
	// addi r6,r15,6440
	ctx.r6.s64 = ctx.r15.s64 + 6440;
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
	// stw r7,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r7.u32);
	// stw r6,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r6.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B1F40"))) PPC_WEAK_FUNC(sub_820B1F40);
PPC_FUNC_IMPL(__imp__sub_820B1F40) {
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
	// beq cr6,0x820b203c
	if (ctx.cr6.eq) goto loc_820B203C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,26740
	ctx.r31.s64 = ctx.r11.s64 + 26740;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820B1F74;
	sub_823052D8(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
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
	// bne cr6,0x820b2030
	if (!ctx.cr6.eq) goto loc_820B2030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b2030
	if (ctx.cr6.eq) goto loc_820B2030;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820b2030
	if (!ctx.cr6.lt) goto loc_820B2030;
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
	// beq cr6,0x820b2008
	if (ctx.cr6.eq) goto loc_820B2008;
loc_820B1FE0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820b2000
	if (ctx.cr6.eq) goto loc_820B2000;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820b1fe0
	if (!ctx.cr6.eq) goto loc_820B1FE0;
	// b 0x820b2008
	goto loc_820B2008;
loc_820B2000:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820B2008:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820b2020
	if (!ctx.cr6.eq) goto loc_820B2020;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820B2020:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820B202C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820B2030:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820B203C;
	sub_823051A8(ctx, base);
loc_820B203C:
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

__attribute__((alias("__imp__sub_820B2054"))) PPC_WEAK_FUNC(sub_820B2054);
PPC_FUNC_IMPL(__imp__sub_820B2054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2058"))) PPC_WEAK_FUNC(sub_820B2058);
PPC_FUNC_IMPL(__imp__sub_820B2058) {
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
	// addi r31,r11,26740
	ctx.r31.s64 = ctx.r11.s64 + 26740;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820B2080;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b20a4
	if (ctx.cr6.eq) goto loc_820B20A4;
loc_820B208C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b20d4
	if (!ctx.cr6.eq) goto loc_820B20D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b208c
	if (!ctx.cr6.eq) goto loc_820B208C;
loc_820B20A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b20fc
	if (!ctx.cr6.eq) goto loc_820B20FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2158
	ctx.lr = 0x820B20B8;
	sub_820B2158(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b20fc
	if (!ctx.cr6.eq) goto loc_820B20FC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820B20CC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b2140
	goto loc_820B2140;
loc_820B20D4:
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
	// b 0x820b2130
	goto loc_820B2130;
loc_820B20FC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
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
loc_820B2130:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820B213C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820B2140:
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

__attribute__((alias("__imp__sub_820B2158"))) PPC_WEAK_FUNC(sub_820B2158);
PPC_FUNC_IMPL(__imp__sub_820B2158) {
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
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82082030
	ctx.lr = 0x820B218C;
	sub_82082030(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,26740
	ctx.r11.s64 = ctx.r11.s64 + 26740;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b21a8
	if (ctx.cr6.eq) goto loc_820B21A8;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820b21ac
	goto loc_820B21AC;
loc_820B21A8:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820B21AC:
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
	// beq cr6,0x820b21ec
	if (ctx.cr6.eq) goto loc_820B21EC;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820B21E4:
	// stwu r3,96(r10)
	ea = 96 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b21e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B21E4;
loc_820B21EC:
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

__attribute__((alias("__imp__sub_820B220C"))) PPC_WEAK_FUNC(sub_820B220C);
PPC_FUNC_IMPL(__imp__sub_820B220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2210"))) PPC_WEAK_FUNC(sub_820B2210);
PPC_FUNC_IMPL(__imp__sub_820B2210) {
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
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mulli r11,r3,272
	ctx.r11.s64 = ctx.r3.s64 * 272;
	// addi r31,r10,15640
	ctx.r31.s64 = ctx.r10.s64 + 15640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x820b22e4
	if (ctx.cr6.eq) goto loc_820B22E4;
	// stfsx f1,r11,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b22e4
	if (ctx.cr6.eq) goto loc_820B22E4;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_820B2268:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820b2288
	if (!ctx.cr6.eq) goto loc_820B2288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820b2268
	if (ctx.cr6.lt) goto loc_820B2268;
	// b 0x820b22e4
	goto loc_820B22E4;
loc_820B2288:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820b22e4
	if (ctx.cr6.eq) goto loc_820B22E4;
loc_820B2298:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b22d0
	if (ctx.cr6.eq) goto loc_820B22D0;
	// lwz r11,436(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 436);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820b22d0
	if (!ctx.cr6.eq) goto loc_820B22D0;
	// lfs f0,188(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820b22d0
	if (ctx.cr6.eq) goto loc_820B22D0;
	// lhz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 156);
	// stfs f31,188(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 188, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,156(r4)
	PPC_STORE_U16(ctx.r4.u32 + 156, ctx.r11.u16);
loc_820B22D0:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8208d650
	ctx.lr = 0x820B22D8;
	sub_8208D650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b2298
	if (!ctx.cr6.eq) goto loc_820B2298;
loc_820B22E4:
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

__attribute__((alias("__imp__sub_820B2300"))) PPC_WEAK_FUNC(sub_820B2300);
PPC_FUNC_IMPL(__imp__sub_820B2300) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2340
	if (!ctx.cr6.eq) goto loc_820B2340;
	// bl 0x820ddca8
	ctx.lr = 0x820B2328;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2338
	if (ctx.cr6.eq) goto loc_820B2338;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b235c
	goto loc_820B235C;
loc_820B2338:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b235c
	goto loc_820B235C;
loc_820B2340:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2388
	if (!ctx.cr6.eq) goto loc_820B2388;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b23d0
	if (ctx.cr6.eq) goto loc_820B23D0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B235C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2378
	if (ctx.cr6.eq) goto loc_820B2378;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B2378:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b23b0
	if (ctx.cr6.eq) goto loc_820B23B0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b23b0
	goto loc_820B23B0;
loc_820B2388:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2398
	if (!ctx.cr6.eq) goto loc_820B2398;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b23b0
	goto loc_820B23B0;
loc_820B2398:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B23AC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B23B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b23d0
	if (ctx.cr6.eq) goto loc_820B23D0;
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
loc_820B23D0:
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

__attribute__((alias("__imp__sub_820B23E8"))) PPC_WEAK_FUNC(sub_820B23E8);
PPC_FUNC_IMPL(__imp__sub_820B23E8) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2428
	if (!ctx.cr6.eq) goto loc_820B2428;
	// bl 0x820ddca8
	ctx.lr = 0x820B2410;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2420
	if (ctx.cr6.eq) goto loc_820B2420;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b2444
	goto loc_820B2444;
loc_820B2420:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2444
	goto loc_820B2444;
loc_820B2428:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2470
	if (!ctx.cr6.eq) goto loc_820B2470;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b24b8
	if (ctx.cr6.eq) goto loc_820B24B8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B2444:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2460
	if (ctx.cr6.eq) goto loc_820B2460;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B2460:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2498
	if (ctx.cr6.eq) goto loc_820B2498;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b2498
	goto loc_820B2498;
loc_820B2470:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2480
	if (!ctx.cr6.eq) goto loc_820B2480;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2498
	goto loc_820B2498;
loc_820B2480:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B2494;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B2498:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b24b8
	if (ctx.cr6.eq) goto loc_820B24B8;
	// lfs f1,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
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
loc_820B24B8:
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B24D8"))) PPC_WEAK_FUNC(sub_820B24D8);
PPC_FUNC_IMPL(__imp__sub_820B24D8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2520
	if (!ctx.cr6.eq) goto loc_820B2520;
	// bl 0x820ddca8
	ctx.lr = 0x820B2508;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2518
	if (ctx.cr6.eq) goto loc_820B2518;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b253c
	goto loc_820B253C;
loc_820B2518:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b253c
	goto loc_820B253C;
loc_820B2520:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2568
	if (!ctx.cr6.eq) goto loc_820B2568;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b25c8
	if (ctx.cr6.eq) goto loc_820B25C8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B253C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2558
	if (ctx.cr6.eq) goto loc_820B2558;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B2558:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2590
	if (ctx.cr6.eq) goto loc_820B2590;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b2590
	goto loc_820B2590;
loc_820B2568:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2578
	if (!ctx.cr6.eq) goto loc_820B2578;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2590
	goto loc_820B2590;
loc_820B2578:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B258C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B2590:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b25c8
	if (ctx.cr6.eq) goto loc_820B25C8;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b25cc
	if (!ctx.cr6.lt) goto loc_820B25CC;
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mulli r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b25cc
	if (ctx.cr6.eq) goto loc_820B25CC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820b25cc
	goto loc_820B25CC;
loc_820B25C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B25CC:
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

__attribute__((alias("__imp__sub_820B25E4"))) PPC_WEAK_FUNC(sub_820B25E4);
PPC_FUNC_IMPL(__imp__sub_820B25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B25E8"))) PPC_WEAK_FUNC(sub_820B25E8);
PPC_FUNC_IMPL(__imp__sub_820B25E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B25F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B2614;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2698
	if (ctx.cr6.eq) goto loc_820B2698;
loc_820B2620:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820b2674
	if (!ctx.cr6.lt) goto loc_820B2674;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mulli r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 * 44;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2674
	if (ctx.cr6.eq) goto loc_820B2674;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2658
	if (ctx.cr6.eq) goto loc_820B2658;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820b265c
	goto loc_820B265C;
loc_820B2658:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B265C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b2668
	if (ctx.cr6.eq) goto loc_820B2668;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820B2668:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// bl 0x820de708
	ctx.lr = 0x820B2674;
	sub_820DE708(ctx, base);
loc_820B2674:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820B268C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b2620
	if (!ctx.cr6.eq) goto loc_820B2620;
loc_820B2698:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B26A0"))) PPC_WEAK_FUNC(sub_820B26A0);
PPC_FUNC_IMPL(__imp__sub_820B26A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820B26A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b26ec
	if (!ctx.cr6.eq) goto loc_820B26EC;
	// bl 0x820ddca8
	ctx.lr = 0x820B26D4;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b26e4
	if (ctx.cr6.eq) goto loc_820B26E4;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b2708
	goto loc_820B2708;
loc_820B26E4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b2708
	goto loc_820B2708;
loc_820B26EC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2734
	if (!ctx.cr6.eq) goto loc_820B2734;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b27e0
	if (ctx.cr6.eq) goto loc_820B27E0;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820B2708:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2724
	if (ctx.cr6.eq) goto loc_820B2724;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,-263
	ctx.r11.s64 = ctx.r11.s64 + -263;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_820B2724:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b275c
	if (ctx.cr6.eq) goto loc_820B275C;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820b275c
	goto loc_820B275C;
loc_820B2734:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2744
	if (!ctx.cr6.eq) goto loc_820B2744;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b2758
	goto loc_820B2758;
loc_820B2744:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B2758;
	sub_820F3178(ctx, base);
loc_820B2758:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B275C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b27e0
	if (ctx.cr6.eq) goto loc_820B27E0;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820b277c
	if (ctx.cr6.lt) goto loc_820B277C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820B277C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f7f48
	ctx.lr = 0x820B2784;
	sub_820F7F48(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mulli r10,r29,44
	ctx.r10.s64 = ctx.r29.s64 * 44;
	// addi r30,r31,360
	ctx.r30.s64 = ctx.r31.s64 + 360;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x82257540
	ctx.lr = 0x820B27A4;
	sub_82257540(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820b27bc
	if (ctx.cr6.eq) goto loc_820B27BC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257540
	ctx.lr = 0x820B27BC;
	sub_82257540(ctx, base);
loc_820B27BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820b27d4
	if (ctx.cr6.eq) goto loc_820B27D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82257540
	ctx.lr = 0x820B27D4;
	sub_82257540(ctx, base);
loc_820B27D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820B27E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B27EC"))) PPC_WEAK_FUNC(sub_820B27EC);
PPC_FUNC_IMPL(__imp__sub_820B27EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B27F0"))) PPC_WEAK_FUNC(sub_820B27F0);
PPC_FUNC_IMPL(__imp__sub_820B27F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820B27F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82085870
	ctx.lr = 0x820B282C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b287c
	if (ctx.cr6.eq) goto loc_820B287C;
loc_820B2838:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8ad0
	ctx.lr = 0x820B2858;
	sub_820F8AD0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B2870;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b2838
	if (!ctx.cr6.eq) goto loc_820B2838;
loc_820B287C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2884"))) PPC_WEAK_FUNC(sub_820B2884);
PPC_FUNC_IMPL(__imp__sub_820B2884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2888"))) PPC_WEAK_FUNC(sub_820B2888);
PPC_FUNC_IMPL(__imp__sub_820B2888) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820B28AC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b28d0
	if (ctx.cr6.eq) goto loc_820B28D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f9d58
	ctx.lr = 0x820B28BC;
	sub_820F9D58(ctx, base);
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
loc_820B28D0:
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

__attribute__((alias("__imp__sub_820B28E8"))) PPC_WEAK_FUNC(sub_820B28E8);
PPC_FUNC_IMPL(__imp__sub_820B28E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820B28F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B2918;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b295c
	if (ctx.cr6.eq) goto loc_820B295C;
loc_820B2924:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f9a88
	ctx.lr = 0x820B2938;
	sub_820F9A88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B2950;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b2924
	if (!ctx.cr6.eq) goto loc_820B2924;
loc_820B295C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2964"))) PPC_WEAK_FUNC(sub_820B2964);
PPC_FUNC_IMPL(__imp__sub_820B2964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2968"))) PPC_WEAK_FUNC(sub_820B2968);
PPC_FUNC_IMPL(__imp__sub_820B2968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B2970;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B2990;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2a04
	if (ctx.cr6.eq) goto loc_820B2A04;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
loc_820B29A0:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// beq cr6,0x820b29c0
	if (ctx.cr6.eq) goto loc_820B29C0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b29e0
	if (!ctx.cr6.eq) goto loc_820B29E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x820b29cc
	goto loc_820B29CC;
loc_820B29C0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b29e0
	if (ctx.cr6.eq) goto loc_820B29E0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_820B29CC:
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x820f8590
	ctx.lr = 0x820B29E0;
	sub_820F8590(ctx, base);
loc_820B29E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820B29F8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b29a0
	if (!ctx.cr6.eq) goto loc_820B29A0;
loc_820B2A04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2A0C"))) PPC_WEAK_FUNC(sub_820B2A0C);
PPC_FUNC_IMPL(__imp__sub_820B2A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2A10"))) PPC_WEAK_FUNC(sub_820B2A10);
PPC_FUNC_IMPL(__imp__sub_820B2A10) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2a50
	if (!ctx.cr6.eq) goto loc_820B2A50;
	// bl 0x820ddca8
	ctx.lr = 0x820B2A38;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2a48
	if (ctx.cr6.eq) goto loc_820B2A48;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b2a6c
	goto loc_820B2A6C;
loc_820B2A48:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2a6c
	goto loc_820B2A6C;
loc_820B2A50:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2a98
	if (!ctx.cr6.eq) goto loc_820B2A98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2ae4
	if (ctx.cr6.eq) goto loc_820B2AE4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B2A6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2a88
	if (ctx.cr6.eq) goto loc_820B2A88;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B2A88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2ac0
	if (ctx.cr6.eq) goto loc_820B2AC0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b2ac0
	goto loc_820B2AC0;
loc_820B2A98:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2aa8
	if (!ctx.cr6.eq) goto loc_820B2AA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2ac0
	goto loc_820B2AC0;
loc_820B2AA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B2ABC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B2AC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2ae4
	if (ctx.cr6.eq) goto loc_820B2AE4;
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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
loc_820B2AE4:
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

__attribute__((alias("__imp__sub_820B2AFC"))) PPC_WEAK_FUNC(sub_820B2AFC);
PPC_FUNC_IMPL(__imp__sub_820B2AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2B00"))) PPC_WEAK_FUNC(sub_820B2B00);
PPC_FUNC_IMPL(__imp__sub_820B2B00) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2b58
	if (!ctx.cr6.eq) goto loc_820B2B58;
	// bl 0x820ddca8
	ctx.lr = 0x820B2B40;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2b50
	if (ctx.cr6.eq) goto loc_820B2B50;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b2b74
	goto loc_820B2B74;
loc_820B2B50:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2b74
	goto loc_820B2B74;
loc_820B2B58:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2ba0
	if (!ctx.cr6.eq) goto loc_820B2BA0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2c00
	if (ctx.cr6.eq) goto loc_820B2C00;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B2B74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2b90
	if (ctx.cr6.eq) goto loc_820B2B90;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B2B90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2bc8
	if (ctx.cr6.eq) goto loc_820B2BC8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b2bc8
	goto loc_820B2BC8;
loc_820B2BA0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2bb0
	if (!ctx.cr6.eq) goto loc_820B2BB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2bc8
	goto loc_820B2BC8;
loc_820B2BB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B2BC4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B2BC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2c00
	if (ctx.cr6.eq) goto loc_820B2C00;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x820f90e0
	ctx.lr = 0x820B2BFC;
	sub_820F90E0(ctx, base);
	// b 0x820b2c0c
	goto loc_820B2C0C;
loc_820B2C00:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
loc_820B2C0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_820B2C2C"))) PPC_WEAK_FUNC(sub_820B2C2C);
PPC_FUNC_IMPL(__imp__sub_820B2C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2C30"))) PPC_WEAK_FUNC(sub_820B2C30);
PPC_FUNC_IMPL(__imp__sub_820B2C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B2C38;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820b2c64
	if (!ctx.cr6.eq) goto loc_820B2C64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820b2d4c
	if (ctx.cr6.eq) goto loc_820B2D4C;
loc_820B2C64:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2c90
	if (!ctx.cr6.eq) goto loc_820B2C90;
	// bl 0x820ddca8
	ctx.lr = 0x820B2C78;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2c88
	if (ctx.cr6.eq) goto loc_820B2C88;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b2cac
	goto loc_820B2CAC;
loc_820B2C88:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2cac
	goto loc_820B2CAC;
loc_820B2C90:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2cd8
	if (!ctx.cr6.eq) goto loc_820B2CD8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2d4c
	if (ctx.cr6.eq) goto loc_820B2D4C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B2CAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2cc8
	if (ctx.cr6.eq) goto loc_820B2CC8;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B2CC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2d00
	if (ctx.cr6.eq) goto loc_820B2D00;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b2d00
	goto loc_820B2D00;
loc_820B2CD8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2ce8
	if (!ctx.cr6.eq) goto loc_820B2CE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2d00
	goto loc_820B2D00;
loc_820B2CE8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B2CFC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B2D00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2d4c
	if (ctx.cr6.eq) goto loc_820B2D4C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x820b2d2c
	if (ctx.cr6.lt) goto loc_820B2D2C;
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820b2d30
	if (!ctx.cr6.gt) goto loc_820B2D30;
loc_820B2D2C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_820B2D30:
	// lfs f0,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820f8cc0
	ctx.lr = 0x820B2D4C;
	sub_820F8CC0(ctx, base);
loc_820B2D4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2D58"))) PPC_WEAK_FUNC(sub_820B2D58);
PPC_FUNC_IMPL(__imp__sub_820B2D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B2D60;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820b2d8c
	if (!ctx.cr6.eq) goto loc_820B2D8C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820b2e48
	if (ctx.cr6.eq) goto loc_820B2E48;
loc_820B2D8C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2db8
	if (!ctx.cr6.eq) goto loc_820B2DB8;
	// bl 0x820ddca8
	ctx.lr = 0x820B2DA0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2db0
	if (ctx.cr6.eq) goto loc_820B2DB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b2dd4
	goto loc_820B2DD4;
loc_820B2DB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2dd4
	goto loc_820B2DD4;
loc_820B2DB8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2e00
	if (!ctx.cr6.eq) goto loc_820B2E00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2e48
	if (ctx.cr6.eq) goto loc_820B2E48;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B2DD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2df0
	if (ctx.cr6.eq) goto loc_820B2DF0;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B2DF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2e28
	if (ctx.cr6.eq) goto loc_820B2E28;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b2e28
	goto loc_820B2E28;
loc_820B2E00:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2e10
	if (!ctx.cr6.eq) goto loc_820B2E10;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2e28
	goto loc_820B2E28;
loc_820B2E10:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B2E24;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B2E28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2e48
	if (ctx.cr6.eq) goto loc_820B2E48;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820f8cc0
	ctx.lr = 0x820B2E48;
	sub_820F8CC0(ctx, base);
loc_820B2E48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2E54"))) PPC_WEAK_FUNC(sub_820B2E54);
PPC_FUNC_IMPL(__imp__sub_820B2E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2E58"))) PPC_WEAK_FUNC(sub_820B2E58);
PPC_FUNC_IMPL(__imp__sub_820B2E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B2E60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bne cr6,0x820b2ea4
	if (!ctx.cr6.eq) goto loc_820B2EA4;
	// bl 0x820ddca8
	ctx.lr = 0x820B2E8C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2e9c
	if (ctx.cr6.eq) goto loc_820B2E9C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b2ec0
	goto loc_820B2EC0;
loc_820B2E9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b2ec0
	goto loc_820B2EC0;
loc_820B2EA4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2ef0
	if (!ctx.cr6.eq) goto loc_820B2EF0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2f94
	if (ctx.cr6.eq) goto loc_820B2F94;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B2EC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2edc
	if (ctx.cr6.eq) goto loc_820B2EDC;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B2EDC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2ee8
	if (ctx.cr6.eq) goto loc_820B2EE8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820B2EE8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x820b2f14
	goto loc_820B2F14;
loc_820B2EF0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b2f00
	if (!ctx.cr6.eq) goto loc_820B2F00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b2f14
	goto loc_820B2F14;
loc_820B2F00:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B2F14;
	sub_820F3178(ctx, base);
loc_820B2F14:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2f94
	if (ctx.cr6.eq) goto loc_820B2F94;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x820b2f4c
	if (ctx.cr6.eq) goto loc_820B2F4C;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x820b2f78
	goto loc_820B2F78;
loc_820B2F4C:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2f64
	if (ctx.cr6.eq) goto loc_820B2F64;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x820b2f78
	goto loc_820B2F78;
loc_820B2F64:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2f78
	if (ctx.cr6.eq) goto loc_820B2F78;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_820B2F78:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f92e0
	ctx.lr = 0x820B2F8C;
	sub_820F92E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820B2F94:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2FA8"))) PPC_WEAK_FUNC(sub_820B2FA8);
PPC_FUNC_IMPL(__imp__sub_820B2FA8) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2fe8
	if (!ctx.cr6.eq) goto loc_820B2FE8;
	// bl 0x820ddca8
	ctx.lr = 0x820B2FD0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2fe0
	if (ctx.cr6.eq) goto loc_820B2FE0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b3004
	goto loc_820B3004;
loc_820B2FE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3004
	goto loc_820B3004;
loc_820B2FE8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3030
	if (!ctx.cr6.eq) goto loc_820B3030;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3078
	if (ctx.cr6.eq) goto loc_820B3078;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B3004:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3020
	if (ctx.cr6.eq) goto loc_820B3020;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B3020:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3058
	if (ctx.cr6.eq) goto loc_820B3058;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b3058
	goto loc_820B3058;
loc_820B3030:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b3040
	if (!ctx.cr6.eq) goto loc_820B3040;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3058
	goto loc_820B3058;
loc_820B3040:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B3054;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B3058:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3078
	if (ctx.cr6.eq) goto loc_820B3078;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
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
loc_820B3078:
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

__attribute__((alias("__imp__sub_820B3090"))) PPC_WEAK_FUNC(sub_820B3090);
PPC_FUNC_IMPL(__imp__sub_820B3090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B3098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B30B8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3104
	if (ctx.cr6.eq) goto loc_820B3104;
loc_820B30C4:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x820b30e0
	if (ctx.cr6.eq) goto loc_820B30E0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8590
	ctx.lr = 0x820B30E0;
	sub_820F8590(ctx, base);
loc_820B30E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B30F8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b30c4
	if (!ctx.cr6.eq) goto loc_820B30C4;
loc_820B3104:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B310C"))) PPC_WEAK_FUNC(sub_820B310C);
PPC_FUNC_IMPL(__imp__sub_820B310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3110"))) PPC_WEAK_FUNC(sub_820B3110);
PPC_FUNC_IMPL(__imp__sub_820B3110) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3158
	if (!ctx.cr6.eq) goto loc_820B3158;
	// bl 0x820ddca8
	ctx.lr = 0x820B3140;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3150
	if (ctx.cr6.eq) goto loc_820B3150;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b3174
	goto loc_820B3174;
loc_820B3150:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3174
	goto loc_820B3174;
loc_820B3158:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b31a0
	if (!ctx.cr6.eq) goto loc_820B31A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b31f8
	if (ctx.cr6.eq) goto loc_820B31F8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B3174:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3190
	if (ctx.cr6.eq) goto loc_820B3190;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-263
	ctx.r10.s64 = ctx.r10.s64 + -263;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B3190:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b31c8
	if (ctx.cr6.eq) goto loc_820B31C8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b31c8
	goto loc_820B31C8;
loc_820B31A0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b31b0
	if (!ctx.cr6.eq) goto loc_820B31B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b31c8
	goto loc_820B31C8;
loc_820B31B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B31C4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B31C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b31f8
	if (ctx.cr6.eq) goto loc_820B31F8;
	// lwz r9,288(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// lfs f0,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x820b3204
	goto loc_820B3204;
loc_820B31F8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
loc_820B3204:
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

__attribute__((alias("__imp__sub_820B321C"))) PPC_WEAK_FUNC(sub_820B321C);
PPC_FUNC_IMPL(__imp__sub_820B321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3220"))) PPC_WEAK_FUNC(sub_820B3220);
PPC_FUNC_IMPL(__imp__sub_820B3220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B3228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3264
	if (!ctx.cr6.eq) goto loc_820B3264;
	// bl 0x820ddca8
	ctx.lr = 0x820B324C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b325c
	if (ctx.cr6.eq) goto loc_820B325C;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b3280
	goto loc_820B3280;
loc_820B325C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b3280
	goto loc_820B3280;
loc_820B3264:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b32ac
	if (!ctx.cr6.eq) goto loc_820B32AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b3314
	if (ctx.cr6.eq) goto loc_820B3314;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820B3280:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b329c
	if (ctx.cr6.eq) goto loc_820B329C;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,-263
	ctx.r11.s64 = ctx.r11.s64 + -263;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_820B329C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b32d4
	if (ctx.cr6.eq) goto loc_820B32D4;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820b32d4
	goto loc_820B32D4;
loc_820B32AC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b32bc
	if (!ctx.cr6.eq) goto loc_820B32BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b32d0
	goto loc_820B32D0;
loc_820B32BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,263
	ctx.r6.s64 = 263;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B32D0;
	sub_820F3178(ctx, base);
loc_820B32D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B32D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3314
	if (ctx.cr6.eq) goto loc_820B3314;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f7f48
	ctx.lr = 0x820B32E4;
	sub_820F7F48(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b3304
	if (ctx.cr6.eq) goto loc_820B3304;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_820B3304:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820b3314
	if (ctx.cr6.eq) goto loc_820B3314;
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_820B3314:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B331C"))) PPC_WEAK_FUNC(sub_820B331C);
PPC_FUNC_IMPL(__imp__sub_820B331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3320"))) PPC_WEAK_FUNC(sub_820B3320);
PPC_FUNC_IMPL(__imp__sub_820B3320) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b3358
	if (!ctx.cr6.eq) goto loc_820B3358;
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
loc_820B3358:
	// bl 0x820ddca8
	ctx.lr = 0x820B335C;
	sub_820DDCA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r4,178(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 178);
	// bl 0x820f56c8
	ctx.lr = 0x820B3370;
	sub_820F56C8(ctx, base);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x820b3388
	if (!ctx.cr6.eq) goto loc_820B3388;
	// bl 0x820f5f90
	ctx.lr = 0x820B3384;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820B3388:
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
}

__attribute__((alias("__imp__sub_820B33A0"))) PPC_WEAK_FUNC(sub_820B33A0);
PPC_FUNC_IMPL(__imp__sub_820B33A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820B33A8;
	__savegprlr_21(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r11,r11,8960
	ctx.r11.s64 = ctx.r11.s64 + 8960;
	// addi r10,r10,9192
	ctx.r10.s64 = ctx.r10.s64 + 9192;
	// addi r9,r9,10472
	ctx.r9.s64 = ctx.r9.s64 + 10472;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// addi r8,r8,10376
	ctx.r8.s64 = ctx.r8.s64 + 10376;
	// addi r7,r7,9432
	ctx.r7.s64 = ctx.r7.s64 + 9432;
	// addi r6,r6,9704
	ctx.r6.s64 = ctx.r6.s64 + 9704;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r5,r5,9888
	ctx.r5.s64 = ctx.r5.s64 + 9888;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r4,r4,10224
	ctx.r4.s64 = ctx.r4.s64 + 10224;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r11,r31,11312
	ctx.r11.s64 = ctx.r31.s64 + 11312;
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// addi r10,r30,11608
	ctx.r10.s64 = ctx.r30.s64 + 11608;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// addi r9,r29,11864
	ctx.r9.s64 = ctx.r29.s64 + 11864;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// addi r8,r28,12200
	ctx.r8.s64 = ctx.r28.s64 + 12200;
	// addi r7,r27,12432
	ctx.r7.s64 = ctx.r27.s64 + 12432;
	// addi r6,r26,11008
	ctx.r6.s64 = ctx.r26.s64 + 11008;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// addi r5,r25,10600
	ctx.r5.s64 = ctx.r25.s64 + 10600;
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// addi r4,r24,10768
	ctx.r4.s64 = ctx.r24.s64 + 10768;
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// addi r11,r23,12560
	ctx.r11.s64 = ctx.r23.s64 + 12560;
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// addi r10,r22,12832
	ctx.r10.s64 = ctx.r22.s64 + 12832;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// addi r9,r21,13088
	ctx.r9.s64 = ctx.r21.s64 + 13088;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B3490"))) PPC_WEAK_FUNC(sub_820B3490);
PPC_FUNC_IMPL(__imp__sub_820B3490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B3498;
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f30,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// ori r27,r9,1
	ctx.r27.u64 = ctx.r9.u64 | 1;
	// ori r28,r7,6
	ctx.r28.u64 = ctx.r7.u64 | 6;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
loc_820B34D4:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820b3528
	if (!ctx.cr6.eq) goto loc_820B3528;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b35b4
	if (!ctx.cr6.eq) goto loc_820B35B4;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820B34EC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b34f8
	if (!ctx.cr6.eq) goto loc_820B34F8;
	// bl 0x821b3000
	ctx.lr = 0x820B34F8;
	sub_821B3000(ctx, base);
loc_820B34F8:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b3520
	if (ctx.cr6.eq) goto loc_820B3520;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3520
	if (ctx.cr6.eq) goto loc_820B3520;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820b3544
	goto loc_820B3544;
loc_820B3520:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3544
	goto loc_820B3544;
loc_820B3528:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820b3570
	if (!ctx.cr6.eq) goto loc_820B3570;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b35b4
	if (ctx.cr6.eq) goto loc_820B35B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b35b4
	if (!ctx.cr6.eq) goto loc_820B35B4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B3544:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3560
	if (ctx.cr6.eq) goto loc_820B3560;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B3560:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b359c
	if (ctx.cr6.eq) goto loc_820B359C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b359c
	goto loc_820B359C;
loc_820B3570:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820b3580
	if (!ctx.cr6.eq) goto loc_820B3580;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b3598
	goto loc_820B3598;
loc_820B3580:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B3598;
	sub_820F3178(ctx, base);
loc_820B3598:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B359C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b35b4
	if (ctx.cr6.eq) goto loc_820B35B4;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x820b34d4
	if (!ctx.cr6.gt) goto loc_820B34D4;
	// stfs f31,292(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// b 0x820b34d4
	goto loc_820B34D4;
loc_820B35B4:
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

__attribute__((alias("__imp__sub_820B35C4"))) PPC_WEAK_FUNC(sub_820B35C4);
PPC_FUNC_IMPL(__imp__sub_820B35C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B35C8"))) PPC_WEAK_FUNC(sub_820B35C8);
PPC_FUNC_IMPL(__imp__sub_820B35C8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B3600;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b364c
	if (ctx.cr6.eq) goto loc_820B364C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820B3614:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x820b362c
	if (!ctx.cr6.gt) goto loc_820B362C;
	// lfs f0,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820b362c
	if (!ctx.cr6.gt) goto loc_820B362C;
	// stfs f31,296(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
loc_820B362C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820B3644;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b3614
	if (!ctx.cr6.eq) goto loc_820B3614;
loc_820B364C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_820B366C"))) PPC_WEAK_FUNC(sub_820B366C);
PPC_FUNC_IMPL(__imp__sub_820B366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3670"))) PPC_WEAK_FUNC(sub_820B3670);
PPC_FUNC_IMPL(__imp__sub_820B3670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B3678;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r27,r10,1
	ctx.r27.u64 = ctx.r10.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r9,6
	ctx.r28.u64 = ctx.r9.u64 | 6;
loc_820B36A4:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820b36f8
	if (!ctx.cr6.eq) goto loc_820B36F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b377c
	if (!ctx.cr6.eq) goto loc_820B377C;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820B36BC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b36c8
	if (!ctx.cr6.eq) goto loc_820B36C8;
	// bl 0x821b3000
	ctx.lr = 0x820B36C8;
	sub_821B3000(ctx, base);
loc_820B36C8:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b36f0
	if (ctx.cr6.eq) goto loc_820B36F0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b36f0
	if (ctx.cr6.eq) goto loc_820B36F0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820b3714
	goto loc_820B3714;
loc_820B36F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3714
	goto loc_820B3714;
loc_820B36F8:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820b3740
	if (!ctx.cr6.eq) goto loc_820B3740;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b377c
	if (ctx.cr6.eq) goto loc_820B377C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b377c
	if (!ctx.cr6.eq) goto loc_820B377C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B3714:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3730
	if (ctx.cr6.eq) goto loc_820B3730;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B3730:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b376c
	if (ctx.cr6.eq) goto loc_820B376C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b376c
	goto loc_820B376C;
loc_820B3740:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820b3750
	if (!ctx.cr6.eq) goto loc_820B3750;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b3768
	goto loc_820B3768;
loc_820B3750:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B3768;
	sub_820F3178(ctx, base);
loc_820B3768:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B376C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b377c
	if (ctx.cr6.eq) goto loc_820B377C;
	// stfs f31,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// b 0x820b36a4
	goto loc_820B36A4;
loc_820B377C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B3788"))) PPC_WEAK_FUNC(sub_820B3788);
PPC_FUNC_IMPL(__imp__sub_820B3788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B3790;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B37B8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b381c
	if (ctx.cr6.eq) goto loc_820B381C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r29,r11,20000
	ctx.r29.s64 = ctx.r11.s64 + 20000;
	// lfs f30,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
loc_820B37D4:
	// lbz r10,380(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 380);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lfsx f13,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bne cr6,0x820b37f8
	if (!ctx.cr6.eq) goto loc_820B37F8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820B37F8:
	// stfs f0,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820B3814;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b37d4
	if (!ctx.cr6.eq) goto loc_820B37D4;
loc_820B381C:
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

__attribute__((alias("__imp__sub_820B382C"))) PPC_WEAK_FUNC(sub_820B382C);
PPC_FUNC_IMPL(__imp__sub_820B382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3830"))) PPC_WEAK_FUNC(sub_820B3830);
PPC_FUNC_IMPL(__imp__sub_820B3830) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3870
	if (!ctx.cr6.eq) goto loc_820B3870;
	// bl 0x820ddca8
	ctx.lr = 0x820B3858;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3868
	if (ctx.cr6.eq) goto loc_820B3868;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b388c
	goto loc_820B388C;
loc_820B3868:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b388c
	goto loc_820B388C;
loc_820B3870:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b38b8
	if (!ctx.cr6.eq) goto loc_820B38B8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3900
	if (ctx.cr6.eq) goto loc_820B3900;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B388C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b38a8
	if (ctx.cr6.eq) goto loc_820B38A8;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B38A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b38e0
	if (ctx.cr6.eq) goto loc_820B38E0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b38e0
	goto loc_820B38E0;
loc_820B38B8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b38c8
	if (!ctx.cr6.eq) goto loc_820B38C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b38e0
	goto loc_820B38E0;
loc_820B38C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B38DC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B38E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3900
	if (ctx.cr6.eq) goto loc_820B3900;
	// lfs f1,292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f1.f64 = double(temp.f32);
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
loc_820B3900:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_820B3920"))) PPC_WEAK_FUNC(sub_820B3920);
PPC_FUNC_IMPL(__imp__sub_820B3920) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3960
	if (!ctx.cr6.eq) goto loc_820B3960;
	// bl 0x820ddca8
	ctx.lr = 0x820B3948;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3958
	if (ctx.cr6.eq) goto loc_820B3958;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b397c
	goto loc_820B397C;
loc_820B3958:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b397c
	goto loc_820B397C;
loc_820B3960:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b39a8
	if (!ctx.cr6.eq) goto loc_820B39A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b39f0
	if (ctx.cr6.eq) goto loc_820B39F0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B397C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3998
	if (ctx.cr6.eq) goto loc_820B3998;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B3998:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b39d0
	if (ctx.cr6.eq) goto loc_820B39D0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b39d0
	goto loc_820B39D0;
loc_820B39A8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b39b8
	if (!ctx.cr6.eq) goto loc_820B39B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b39d0
	goto loc_820B39D0;
loc_820B39B8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B39CC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B39D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b39f0
	if (ctx.cr6.eq) goto loc_820B39F0;
	// lfs f1,296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
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
loc_820B39F0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_820B3A10"))) PPC_WEAK_FUNC(sub_820B3A10);
PPC_FUNC_IMPL(__imp__sub_820B3A10) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3a50
	if (!ctx.cr6.eq) goto loc_820B3A50;
	// bl 0x820ddca8
	ctx.lr = 0x820B3A38;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3a48
	if (ctx.cr6.eq) goto loc_820B3A48;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b3a6c
	goto loc_820B3A6C;
loc_820B3A48:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3a6c
	goto loc_820B3A6C;
loc_820B3A50:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3a98
	if (!ctx.cr6.eq) goto loc_820B3A98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3ae0
	if (ctx.cr6.eq) goto loc_820B3AE0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B3A6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3a88
	if (ctx.cr6.eq) goto loc_820B3A88;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B3A88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3ac0
	if (ctx.cr6.eq) goto loc_820B3AC0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b3ac0
	goto loc_820B3AC0;
loc_820B3A98:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b3aa8
	if (!ctx.cr6.eq) goto loc_820B3AA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3ac0
	goto loc_820B3AC0;
loc_820B3AA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B3ABC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B3AC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3ae0
	if (ctx.cr6.eq) goto loc_820B3AE0;
	// lfs f1,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
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
loc_820B3AE0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_820B3B00"))) PPC_WEAK_FUNC(sub_820B3B00);
PPC_FUNC_IMPL(__imp__sub_820B3B00) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3b40
	if (!ctx.cr6.eq) goto loc_820B3B40;
	// bl 0x820ddca8
	ctx.lr = 0x820B3B28;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3b38
	if (ctx.cr6.eq) goto loc_820B3B38;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b3b5c
	goto loc_820B3B5C;
loc_820B3B38:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3b5c
	goto loc_820B3B5C;
loc_820B3B40:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3b88
	if (!ctx.cr6.eq) goto loc_820B3B88;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3c04
	if (ctx.cr6.eq) goto loc_820B3C04;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B3B5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3b78
	if (ctx.cr6.eq) goto loc_820B3B78;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B3B78:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3bb0
	if (ctx.cr6.eq) goto loc_820B3BB0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b3bb0
	goto loc_820B3BB0;
loc_820B3B88:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b3b98
	if (!ctx.cr6.eq) goto loc_820B3B98;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3bb0
	goto loc_820B3BB0;
loc_820B3B98:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B3BAC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B3BB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3c04
	if (ctx.cr6.eq) goto loc_820B3C04;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820b3bec
	if (!ctx.cr6.eq) goto loc_820B3BEC;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lbz r9,380(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 380);
	// addi r8,r10,20000
	ctx.r8.s64 = ctx.r10.s64 + 20000;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// lfsx f0,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
loc_820B3BEC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
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
loc_820B3C04:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_820B3C24"))) PPC_WEAK_FUNC(sub_820B3C24);
PPC_FUNC_IMPL(__imp__sub_820B3C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3C28"))) PPC_WEAK_FUNC(sub_820B3C28);
PPC_FUNC_IMPL(__imp__sub_820B3C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B3C30;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820b3ca4
	if (ctx.cr6.lt) goto loc_820B3CA4;
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820b3ca4
	if (ctx.cr6.gt) goto loc_820B3CA4;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820b3ca4
	if (ctx.cr6.lt) goto loc_820B3CA4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820b3ca4
	if (ctx.cr6.gt) goto loc_820B3CA4;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820b3ca4
	if (ctx.cr6.lt) goto loc_820B3CA4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820b3ca4
	if (ctx.cr6.gt) goto loc_820B3CA4;
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820b3ca4
	if (ctx.cr6.lt) goto loc_820B3CA4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x820b3ca8
	if (!ctx.cr6.gt) goto loc_820B3CA8;
loc_820B3CA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B3CA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3da8
	if (ctx.cr6.eq) goto loc_820B3DA8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B3CCC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3da8
	if (ctx.cr6.eq) goto loc_820B3DA8;
loc_820B3CD4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r3,316
	ctx.r11.s64 = ctx.r3.s64 + 316;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820b3d40
	if (!ctx.cr6.eq) goto loc_820B3D40;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820b3d40
	if (!ctx.cr6.eq) goto loc_820B3D40;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820b3d40
	if (!ctx.cr6.eq) goto loc_820B3D40;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820b3d44
	if (ctx.cr6.eq) goto loc_820B3D44;
loc_820B3D40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820B3D44:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b3d64
	if (ctx.cr6.eq) goto loc_820B3D64;
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// oris r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 268435456;
	// stw r9,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r9.u32);
loc_820B3D64:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r28,8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82085870
	ctx.lr = 0x820B3DA0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b3cd4
	if (!ctx.cr6.eq) goto loc_820B3CD4;
loc_820B3DA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B3DB0"))) PPC_WEAK_FUNC(sub_820B3DB0);
PPC_FUNC_IMPL(__imp__sub_820B3DB0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3df8
	if (!ctx.cr6.eq) goto loc_820B3DF8;
	// bl 0x820ddca8
	ctx.lr = 0x820B3DE0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3df0
	if (ctx.cr6.eq) goto loc_820B3DF0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b3e14
	goto loc_820B3E14;
loc_820B3DF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b3e14
	goto loc_820B3E14;
loc_820B3DF8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b3e44
	if (!ctx.cr6.eq) goto loc_820B3E44;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3ec4
	if (ctx.cr6.eq) goto loc_820B3EC4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B3E14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3e30
	if (ctx.cr6.eq) goto loc_820B3E30;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B3E30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3e3c
	if (ctx.cr6.eq) goto loc_820B3E3C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820B3E3C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x820b3e6c
	goto loc_820B3E6C;
loc_820B3E44:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b3e54
	if (!ctx.cr6.eq) goto loc_820B3E54;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b3e68
	goto loc_820B3E68;
loc_820B3E54:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B3E68;
	sub_820F3178(ctx, base);
loc_820B3E68:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B3E6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3ec4
	if (ctx.cr6.eq) goto loc_820B3EC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// beq cr6,0x820b3eb8
	if (ctx.cr6.eq) goto loc_820B3EB8;
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b3eb8
	if (!ctx.cr6.eq) goto loc_820B3EB8;
	// bl 0x82226f90
	ctx.lr = 0x820B3E98;
	sub_82226F90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3eb0
	if (ctx.cr6.eq) goto loc_820B3EB0;
	// bl 0x820f0fe0
	ctx.lr = 0x820B3EAC;
	sub_820F0FE0(ctx, base);
	// b 0x820b3eb8
	goto loc_820B3EB8;
loc_820B3EB0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f4f68
	ctx.lr = 0x820B3EB8;
	sub_820F4F68(ctx, base);
loc_820B3EB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152ff0
	ctx.lr = 0x820B3EC4;
	sub_82152FF0(ctx, base);
loc_820B3EC4:
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

__attribute__((alias("__imp__sub_820B3EDC"))) PPC_WEAK_FUNC(sub_820B3EDC);
PPC_FUNC_IMPL(__imp__sub_820B3EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3EE0"))) PPC_WEAK_FUNC(sub_820B3EE0);
PPC_FUNC_IMPL(__imp__sub_820B3EE0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820B3F04;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3f44
	if (ctx.cr6.eq) goto loc_820B3F44;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// addi r10,r3,316
	ctx.r10.s64 = ctx.r3.s64 + 316;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,320(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,328(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
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
loc_820B3F44:
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
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_820B3F78"))) PPC_WEAK_FUNC(sub_820B3F78);
PPC_FUNC_IMPL(__imp__sub_820B3F78) {
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
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16112
	ctx.r11.s64 = ctx.r11.s64 + -16112;
	// addi r9,r11,224
	ctx.r9.s64 = ctx.r11.s64 + 224;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3fd4
	if (ctx.cr6.eq) goto loc_820B3FD4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820b3fbc
	if (!ctx.cr6.eq) goto loc_820B3FBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820B3FB8;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820B3FBC:
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
loc_820B3FD4:
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

__attribute__((alias("__imp__sub_820B3FEC"))) PPC_WEAK_FUNC(sub_820B3FEC);
PPC_FUNC_IMPL(__imp__sub_820B3FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3FF0"))) PPC_WEAK_FUNC(sub_820B3FF0);
PPC_FUNC_IMPL(__imp__sub_820B3FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B3FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4018;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4080
	if (ctx.cr6.eq) goto loc_820B4080;
loc_820B4020:
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// bne cr6,0x820b4040
	if (!ctx.cr6.eq) goto loc_820B4040;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x820b405c
	goto loc_820B405C;
loc_820B4040:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x820b4050
	if (!ctx.cr6.eq) goto loc_820B4050;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x820b405c
	goto loc_820B405C;
loc_820B4050:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x820b4060
	if (!ctx.cr6.eq) goto loc_820B4060;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_820B405C:
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
loc_820B4060:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4078;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b4020
	if (!ctx.cr6.eq) goto loc_820B4020;
loc_820B4080:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B4088"))) PPC_WEAK_FUNC(sub_820B4088);
PPC_FUNC_IMPL(__imp__sub_820B4088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B4090;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B40B4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b41c4
	if (ctx.cr6.eq) goto loc_820B41C4;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r31,r11,6936
	ctx.r31.s64 = ctx.r11.s64 + 6936;
loc_820B40C4:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x820b40d4
	if (!ctx.cr6.eq) goto loc_820B40D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b4130
	goto loc_820B4130;
loc_820B40D4:
	// rlwinm r11,r29,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x820b4108
	if (!ctx.cr6.lt) goto loc_820B4108;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820b4108
	if (!ctx.cr6.eq) goto loc_820B4108;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4110
	if (!ctx.cr6.eq) goto loc_820B4110;
loc_820B4108:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b4130
	goto loc_820B4130;
loc_820B4110:
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
loc_820B4114:
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
	// bne 0x820b4114
	if (!ctx.cr0.eq) goto loc_820B4114;
loc_820B4130:
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820b4144
	if (!ctx.cr6.eq) goto loc_820B4144;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b41a0
	goto loc_820B41A0;
loc_820B4144:
	// rlwinm r11,r30,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x820b4178
	if (!ctx.cr6.lt) goto loc_820B4178;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820b4178
	if (!ctx.cr6.eq) goto loc_820B4178;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4180
	if (!ctx.cr6.eq) goto loc_820B4180;
loc_820B4178:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b41a0
	goto loc_820B41A0;
loc_820B4180:
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
loc_820B4184:
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
	// bne 0x820b4184
	if (!ctx.cr0.eq) goto loc_820B4184;
loc_820B41A0:
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820B41BC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b40c4
	if (!ctx.cr6.eq) goto loc_820B40C4;
loc_820B41C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B41CC"))) PPC_WEAK_FUNC(sub_820B41CC);
PPC_FUNC_IMPL(__imp__sub_820B41CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B41D0"))) PPC_WEAK_FUNC(sub_820B41D0);
PPC_FUNC_IMPL(__imp__sub_820B41D0) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4204;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4240
	if (ctx.cr6.eq) goto loc_820B4240;
loc_820B420C:
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4220
	if (ctx.cr6.eq) goto loc_820B4220;
	// stfs f31,300(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
loc_820B4220:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4238;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b420c
	if (!ctx.cr6.eq) goto loc_820B420C;
loc_820B4240:
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

__attribute__((alias("__imp__sub_820B425C"))) PPC_WEAK_FUNC(sub_820B425C);
PPC_FUNC_IMPL(__imp__sub_820B425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B4260"))) PPC_WEAK_FUNC(sub_820B4260);
PPC_FUNC_IMPL(__imp__sub_820B4260) {
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
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820B427C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b42a8
	if (ctx.cr6.eq) goto loc_820B42A8;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b42a8
	if (ctx.cr6.eq) goto loc_820B42A8;
	// lfs f1,300(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B42A8:
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

__attribute__((alias("__imp__sub_820B42C4"))) PPC_WEAK_FUNC(sub_820B42C4);
PPC_FUNC_IMPL(__imp__sub_820B42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B42C8"))) PPC_WEAK_FUNC(sub_820B42C8);
PPC_FUNC_IMPL(__imp__sub_820B42C8) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B42FC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4338
	if (ctx.cr6.eq) goto loc_820B4338;
loc_820B4304:
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4318
	if (ctx.cr6.eq) goto loc_820B4318;
	// stfs f31,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
loc_820B4318:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4330;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b4304
	if (!ctx.cr6.eq) goto loc_820B4304;
loc_820B4338:
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

__attribute__((alias("__imp__sub_820B4354"))) PPC_WEAK_FUNC(sub_820B4354);
PPC_FUNC_IMPL(__imp__sub_820B4354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B4358"))) PPC_WEAK_FUNC(sub_820B4358);
PPC_FUNC_IMPL(__imp__sub_820B4358) {
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
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820B4374;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b43a0
	if (ctx.cr6.eq) goto loc_820B43A0;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b43a0
	if (ctx.cr6.eq) goto loc_820B43A0;
	// lfs f1,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B43A0:
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

__attribute__((alias("__imp__sub_820B43BC"))) PPC_WEAK_FUNC(sub_820B43BC);
PPC_FUNC_IMPL(__imp__sub_820B43BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B43C0"))) PPC_WEAK_FUNC(sub_820B43C0);
PPC_FUNC_IMPL(__imp__sub_820B43C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B43C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4408
	if (!ctx.cr6.eq) goto loc_820B4408;
	// bl 0x820ddca8
	ctx.lr = 0x820B43F0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4400
	if (ctx.cr6.eq) goto loc_820B4400;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b442c
	goto loc_820B442C;
loc_820B4400:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b442c
	goto loc_820B442C;
loc_820B4408:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b443c
	if (!ctx.cr6.eq) goto loc_820B443C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820b4428
	if (!ctx.cr6.eq) goto loc_820B4428;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b4464
	goto loc_820B4464;
loc_820B4428:
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820B442C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b4464
	if (ctx.cr6.eq) goto loc_820B4464;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820b4464
	goto loc_820B4464;
loc_820B443C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b444c
	if (!ctx.cr6.eq) goto loc_820B444C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b4460
	goto loc_820B4460;
loc_820B444C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B4460;
	sub_820F3178(ctx, base);
loc_820B4460:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B4464:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820B447C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b44a8
	if (ctx.cr6.eq) goto loc_820B44A8;
loc_820B4484:
	// stw r31,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r31.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820B44A0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b4484
	if (!ctx.cr6.eq) goto loc_820B4484;
loc_820B44A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B44B0"))) PPC_WEAK_FUNC(sub_820B44B0);
PPC_FUNC_IMPL(__imp__sub_820B44B0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x820b44c0
	sub_820B44C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B44BC"))) PPC_WEAK_FUNC(sub_820B44BC);
PPC_FUNC_IMPL(__imp__sub_820B44BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B44C0"))) PPC_WEAK_FUNC(sub_820B44C0);
PPC_FUNC_IMPL(__imp__sub_820B44C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B44C8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4510
	if (!ctx.cr6.eq) goto loc_820B4510;
	// bl 0x820ddca8
	ctx.lr = 0x820B44F8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4508
	if (ctx.cr6.eq) goto loc_820B4508;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b452c
	goto loc_820B452C;
loc_820B4508:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b452c
	goto loc_820B452C;
loc_820B4510:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4558
	if (!ctx.cr6.eq) goto loc_820B4558;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b47d8
	if (ctx.cr6.eq) goto loc_820B47D8;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820B452C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4548
	if (ctx.cr6.eq) goto loc_820B4548;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -261;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_820B4548:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b4580
	if (ctx.cr6.eq) goto loc_820B4580;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820b4580
	goto loc_820B4580;
loc_820B4558:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b4568
	if (!ctx.cr6.eq) goto loc_820B4568;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b457c
	goto loc_820B457C;
loc_820B4568:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B457C;
	sub_820F3178(ctx, base);
loc_820B457C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B4580:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b47d8
	if (ctx.cr6.eq) goto loc_820B47D8;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820B4598;
	sub_8233E4E0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82257cb8
	ctx.lr = 0x820B45A8;
	sub_82257CB8(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257540
	ctx.lr = 0x820B45B8;
	sub_82257540(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// lfs f31,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4674
	if (ctx.cr6.eq) goto loc_820B4674;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lfs f12,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lfs f11,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,328(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lfs f7,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fdivs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fdivs f4,f30,f10
	ctx.f4.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fdivs f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r6,r31,316
	ctx.r6.s64 = ctx.r31.s64 + 316;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x820b46b4
	goto loc_820B46B4;
loc_820B4674:
	// lfs f0,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f3,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f3.f64 = double(temp.f32);
	// bne cr6,0x820b46a4
	if (!ctx.cr6.eq) goto loc_820B46A4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lbz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// lfsx f0,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
loc_820B46A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// bl 0x820b7070
	ctx.lr = 0x820B46B4;
	sub_820B7070(ctx, base);
loc_820B46B4:
	// lfs f13,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820b4744
	if (!ctx.cr6.lt) goto loc_820B4744;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820b46e4
	if (!ctx.cr6.lt) goto loc_820B46E4;
	// lfs f13,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820B46E4:
	// lfs f13,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f7,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82257540
	ctx.lr = 0x820B4728;
	sub_82257540(ctx, base);
	// lfs f5,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,4(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f2,8(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// b 0x820b4754
	goto loc_820B4754;
loc_820B4744:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82257540
	ctx.lr = 0x820B4754;
	sub_82257540(ctx, base);
loc_820B4754:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b47a8
	if (!ctx.cr6.eq) goto loc_820B47A8;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b4774
	if (!ctx.cr6.lt) goto loc_820B4774;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820b4780
	goto loc_820B4780;
loc_820B4774:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820b4780
	if (!ctx.cr6.gt) goto loc_820B4780;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820B4780:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b4798
	if (!ctx.cr6.lt) goto loc_820B4798;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820b47a4
	goto loc_820B47A4;
loc_820B4798:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820b47a4
	if (!ctx.cr6.gt) goto loc_820B47A4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820B47A4:
	// stfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_820B47A8:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f12,f0,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820B47D8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B4804"))) PPC_WEAK_FUNC(sub_820B4804);
PPC_FUNC_IMPL(__imp__sub_820B4804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B4808"))) PPC_WEAK_FUNC(sub_820B4808);
PPC_FUNC_IMPL(__imp__sub_820B4808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820B4810;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r27,r10,1
	ctx.r27.u64 = ctx.r10.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r9,6
	ctx.r28.u64 = ctx.r9.u64 | 6;
loc_820B4838:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820b488c
	if (!ctx.cr6.eq) goto loc_820B488C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4910
	if (!ctx.cr6.eq) goto loc_820B4910;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820B4850;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b485c
	if (!ctx.cr6.eq) goto loc_820B485C;
	// bl 0x821b3000
	ctx.lr = 0x820B485C;
	sub_821B3000(ctx, base);
loc_820B485C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4884
	if (ctx.cr6.eq) goto loc_820B4884;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4884
	if (ctx.cr6.eq) goto loc_820B4884;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820b48a8
	goto loc_820B48A8;
loc_820B4884:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b48a8
	goto loc_820B48A8;
loc_820B488C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820b48d4
	if (!ctx.cr6.eq) goto loc_820B48D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4910
	if (ctx.cr6.eq) goto loc_820B4910;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4910
	if (!ctx.cr6.eq) goto loc_820B4910;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B48A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b48c4
	if (ctx.cr6.eq) goto loc_820B48C4;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B48C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4900
	if (ctx.cr6.eq) goto loc_820B4900;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b4900
	goto loc_820B4900;
loc_820B48D4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820b48e4
	if (!ctx.cr6.eq) goto loc_820B48E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b4900
	goto loc_820B4900;
loc_820B48E4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B48FC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B4900:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4910
	if (ctx.cr6.eq) goto loc_820B4910;
	// stw r26,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r26.u32);
	// b 0x820b4838
	goto loc_820B4838;
loc_820B4910:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B4918"))) PPC_WEAK_FUNC(sub_820B4918);
PPC_FUNC_IMPL(__imp__sub_820B4918) {
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
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820B4934;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4950
	if (ctx.cr6.eq) goto loc_820B4950;
	// lwz r3,372(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B4950:
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

__attribute__((alias("__imp__sub_820B4964"))) PPC_WEAK_FUNC(sub_820B4964);
PPC_FUNC_IMPL(__imp__sub_820B4964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B4968"))) PPC_WEAK_FUNC(sub_820B4968);
PPC_FUNC_IMPL(__imp__sub_820B4968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820B4970;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4990;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4a78
	if (ctx.cr6.eq) goto loc_820B4A78;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,255
	ctx.r30.s64 = 255;
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,-18000
	ctx.r27.s64 = ctx.r11.s64 + -18000;
	// addi r31,r10,-16112
	ctx.r31.s64 = ctx.r10.s64 + -16112;
loc_820B49C0:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r7,r28
	ctx.r9.u64 = ctx.r7.u64 & ctx.r28.u64;
	// bne cr6,0x820b49e4
	if (!ctx.cr6.eq) goto loc_820B49E4;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_820B49E4:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820b49f4
	if (!ctx.cr6.eq) goto loc_820B49F4;
	// li r9,2
	ctx.r9.s64 = 2;
loc_820B49F4:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820b4a08
	if (!ctx.cr6.eq) goto loc_820B4A08;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x820b4a10
	goto loc_820B4A10;
loc_820B4A08:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bge cr6,0x820b4a58
	if (!ctx.cr6.lt) goto loc_820B4A58;
loc_820B4A10:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4a58
	if (ctx.cr6.eq) goto loc_820B4A58;
	// addi r10,r9,34
	ctx.r10.s64 = ctx.r9.s64 + 34;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_820B4A34:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f31,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stb r30,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r30.u8);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r7,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4a34
	if (!ctx.cr6.eq) goto loc_820B4A34;
loc_820B4A58:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4A70;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b49c0
	if (!ctx.cr6.eq) goto loc_820B49C0;
loc_820B4A78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B4A84"))) PPC_WEAK_FUNC(sub_820B4A84);
PPC_FUNC_IMPL(__imp__sub_820B4A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B4A88"))) PPC_WEAK_FUNC(sub_820B4A88);
PPC_FUNC_IMPL(__imp__sub_820B4A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B4A90;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4AB4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4b24
	if (ctx.cr6.eq) goto loc_820B4B24;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmuls f31,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r31,r11,-16112
	ctx.r31.s64 = ctx.r11.s64 + -16112;
loc_820B4AC8:
	// stfs f31,376(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// li r9,156
	ctx.r9.s64 = 156;
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
loc_820B4AD4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4aec
	if (ctx.cr6.eq) goto loc_820B4AEC;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820b4b00
	if (ctx.cr6.eq) goto loc_820B4B00;
loc_820B4AEC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,220
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 220, ctx.xer);
	// blt cr6,0x820b4ad4
	if (ctx.cr6.lt) goto loc_820B4AD4;
	// b 0x820b4b04
	goto loc_820B4B04;
loc_820B4B00:
	// stfs f31,424(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 424, temp.u32);
loc_820B4B04:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4B1C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b4ac8
	if (!ctx.cr6.eq) goto loc_820B4AC8;
loc_820B4B24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B4B30"))) PPC_WEAK_FUNC(sub_820B4B30);
PPC_FUNC_IMPL(__imp__sub_820B4B30) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4b78
	if (!ctx.cr6.eq) goto loc_820B4B78;
	// bl 0x820ddca8
	ctx.lr = 0x820B4B60;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4b70
	if (ctx.cr6.eq) goto loc_820B4B70;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b4b94
	goto loc_820B4B94;
loc_820B4B70:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b4b94
	goto loc_820B4B94;
loc_820B4B78:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4bc0
	if (!ctx.cr6.eq) goto loc_820B4BC0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4c04
	if (ctx.cr6.eq) goto loc_820B4C04;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B4B94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4bb0
	if (ctx.cr6.eq) goto loc_820B4BB0;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B4BB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4be8
	if (ctx.cr6.eq) goto loc_820B4BE8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b4be8
	goto loc_820B4BE8;
loc_820B4BC0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b4bd0
	if (!ctx.cr6.eq) goto loc_820B4BD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b4be8
	goto loc_820B4BE8;
loc_820B4BD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B4BE4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B4BE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4c04
	if (ctx.cr6.eq) goto loc_820B4C04;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,672(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// rlwinm r3,r9,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// b 0x820b4c08
	goto loc_820B4C08;
loc_820B4C04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B4C08:
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

__attribute__((alias("__imp__sub_820B4C20"))) PPC_WEAK_FUNC(sub_820B4C20);
PPC_FUNC_IMPL(__imp__sub_820B4C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B4C28;
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
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4C50;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4cd0
	if (ctx.cr6.eq) goto loc_820B4CD0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
loc_820B4C68:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b4ca8
	if (ctx.cr6.eq) goto loc_820B4CA8;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b4c94
	if (!ctx.cr6.lt) goto loc_820B4C94;
	// stfs f31,464(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820b4cb0
	goto loc_820B4CB0;
loc_820B4C94:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820b4ca0
	if (!ctx.cr6.gt) goto loc_820B4CA0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820B4CA0:
	// stfs f0,464(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// b 0x820b4cb0
	goto loc_820B4CB0;
loc_820B4CA8:
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
loc_820B4CB0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4CC8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b4c68
	if (!ctx.cr6.eq) goto loc_820B4C68;
loc_820B4CD0:
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

__attribute__((alias("__imp__sub_820B4CE0"))) PPC_WEAK_FUNC(sub_820B4CE0);
PPC_FUNC_IMPL(__imp__sub_820B4CE0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4d28
	if (!ctx.cr6.eq) goto loc_820B4D28;
	// bl 0x820ddca8
	ctx.lr = 0x820B4D10;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4d20
	if (ctx.cr6.eq) goto loc_820B4D20;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b4d44
	goto loc_820B4D44;
loc_820B4D20:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b4d44
	goto loc_820B4D44;
loc_820B4D28:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4d74
	if (!ctx.cr6.eq) goto loc_820B4D74;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4dcc
	if (ctx.cr6.eq) goto loc_820B4DCC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B4D44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4d60
	if (ctx.cr6.eq) goto loc_820B4D60;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B4D60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4d6c
	if (ctx.cr6.eq) goto loc_820B4D6C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820B4D6C:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x820b4d9c
	goto loc_820B4D9C;
loc_820B4D74:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b4d84
	if (!ctx.cr6.eq) goto loc_820B4D84;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820b4d9c
	goto loc_820B4D9C;
loc_820B4D84:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B4D98;
	sub_820F3178(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_820B4D9C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b4dcc
	if (ctx.cr6.eq) goto loc_820B4DCC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r8,468
	ctx.r11.s64 = ctx.r8.s64 + 468;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B4DB4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b4db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B4DB4;
	// lwz r11,672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 672);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// b 0x820b4dd0
	goto loc_820B4DD0;
loc_820B4DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B4DD0:
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

__attribute__((alias("__imp__sub_820B4DE8"))) PPC_WEAK_FUNC(sub_820B4DE8);
PPC_FUNC_IMPL(__imp__sub_820B4DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B4DF0;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4E14;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4ed0
	if (ctx.cr6.eq) goto loc_820B4ED0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820B4E28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4ea4
	if (ctx.cr6.eq) goto loc_820B4EA4;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r8,672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// addi r10,r3,468
	ctx.r10.s64 = ctx.r3.s64 + 468;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// ori r9,r8,8
	ctx.r9.u64 = ctx.r8.u64 | 8;
	// stw r9,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r9.u32);
loc_820B4E4C:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b4e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B4E4C;
	// lfs f0,484(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820b4e6c
	if (!ctx.cr6.gt) goto loc_820B4E6C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820B4E6C:
	// lfs f0,476(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820b4e80
	if (!ctx.cr6.gt) goto loc_820B4E80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B4E80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4e98
	if (!ctx.cr6.eq) goto loc_820B4E98;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4eb0
	if (ctx.cr6.eq) goto loc_820B4EB0;
loc_820B4E98:
	// rlwinm r11,r9,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// b 0x820b4eb0
	goto loc_820B4EB0;
loc_820B4EA4:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
loc_820B4EB0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B4EC8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b4e28
	if (!ctx.cr6.eq) goto loc_820B4E28;
loc_820B4ED0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B4EDC"))) PPC_WEAK_FUNC(sub_820B4EDC);
PPC_FUNC_IMPL(__imp__sub_820B4EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B4EE0"))) PPC_WEAK_FUNC(sub_820B4EE0);
PPC_FUNC_IMPL(__imp__sub_820B4EE0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4f28
	if (!ctx.cr6.eq) goto loc_820B4F28;
	// bl 0x820ddca8
	ctx.lr = 0x820B4F10;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4f20
	if (ctx.cr6.eq) goto loc_820B4F20;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b4f44
	goto loc_820B4F44;
loc_820B4F20:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b4f44
	goto loc_820B4F44;
loc_820B4F28:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b4f74
	if (!ctx.cr6.eq) goto loc_820B4F74;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4fcc
	if (ctx.cr6.eq) goto loc_820B4FCC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B4F44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4f60
	if (ctx.cr6.eq) goto loc_820B4F60;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B4F60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4f6c
	if (ctx.cr6.eq) goto loc_820B4F6C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820B4F6C:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x820b4f9c
	goto loc_820B4F9C;
loc_820B4F74:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b4f84
	if (!ctx.cr6.eq) goto loc_820B4F84;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820b4f9c
	goto loc_820B4F9C;
loc_820B4F84:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B4F98;
	sub_820F3178(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_820B4F9C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b4fcc
	if (ctx.cr6.eq) goto loc_820B4FCC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r8,524
	ctx.r11.s64 = ctx.r8.s64 + 524;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B4FB4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b4fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B4FB4;
	// lwz r11,672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 672);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x820b4fd0
	goto loc_820B4FD0;
loc_820B4FCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B4FD0:
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

__attribute__((alias("__imp__sub_820B4FE8"))) PPC_WEAK_FUNC(sub_820B4FE8);
PPC_FUNC_IMPL(__imp__sub_820B4FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820B4FF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5010;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5134
	if (ctx.cr6.eq) goto loc_820B5134;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r11,6936
	ctx.r29.s64 = ctx.r11.s64 + 6936;
loc_820B5028:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// beq cr6,0x820b50f0
	if (ctx.cr6.eq) goto loc_820B50F0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b5048
	if (ctx.cr6.eq) goto loc_820B5048;
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x82172d60
	ctx.lr = 0x820B5048;
	sub_82172D60(ctx, base);
loc_820B5048:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// stw r8,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B5064:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b5064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B5064;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820b5088
	if (!ctx.cr6.eq) goto loc_820B5088;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r26.u32);
	// b 0x820b5110
	goto loc_820B5110;
loc_820B5088:
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x820b50bc
	if (!ctx.cr6.lt) goto loc_820B50BC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r29,20
	ctx.r9.s64 = ctx.r29.s64 + 20;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820b50bc
	if (!ctx.cr6.eq) goto loc_820B50BC;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b50c8
	if (!ctx.cr6.eq) goto loc_820B50C8;
loc_820B50BC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r26.u32);
	// b 0x820b5110
	goto loc_820B5110;
loc_820B50C8:
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
loc_820B50CC:
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
	// bne 0x820b50cc
	if (!ctx.cr0.eq) goto loc_820B50CC;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// b 0x820b5110
	goto loc_820B5110;
loc_820B50F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b5100
	if (ctx.cr6.eq) goto loc_820B5100;
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x82172d60
	ctx.lr = 0x820B5100;
	sub_82172D60(ctx, base);
loc_820B5100:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// stw r26,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r26.u32);
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
loc_820B5110:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5128;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b5028
	if (!ctx.cr6.eq) goto loc_820B5028;
loc_820B5134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B513C"))) PPC_WEAK_FUNC(sub_820B513C);
PPC_FUNC_IMPL(__imp__sub_820B513C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5140"))) PPC_WEAK_FUNC(sub_820B5140);
PPC_FUNC_IMPL(__imp__sub_820B5140) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5188
	if (!ctx.cr6.eq) goto loc_820B5188;
	// bl 0x820ddca8
	ctx.lr = 0x820B5170;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5180
	if (ctx.cr6.eq) goto loc_820B5180;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b51a4
	goto loc_820B51A4;
loc_820B5180:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b51a4
	goto loc_820B51A4;
loc_820B5188:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b51d0
	if (!ctx.cr6.eq) goto loc_820B51D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5230
	if (ctx.cr6.eq) goto loc_820B5230;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B51A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b51c0
	if (ctx.cr6.eq) goto loc_820B51C0;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B51C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b51f8
	if (ctx.cr6.eq) goto loc_820B51F8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b51f8
	goto loc_820B51F8;
loc_820B51D0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b51e0
	if (!ctx.cr6.eq) goto loc_820B51E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b51f8
	goto loc_820B51F8;
loc_820B51E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B51F4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B51F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5230
	if (ctx.cr6.eq) goto loc_820B5230;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// addi r9,r11,548
	ctx.r9.s64 = ctx.r11.s64 + 548;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r8,552(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r7,556(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// lwz r6,560(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// lwz r5,672(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// rlwinm r3,r5,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x1;
	// b 0x820b5234
	goto loc_820B5234;
loc_820B5230:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B5234:
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

__attribute__((alias("__imp__sub_820B524C"))) PPC_WEAK_FUNC(sub_820B524C);
PPC_FUNC_IMPL(__imp__sub_820B524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5250"))) PPC_WEAK_FUNC(sub_820B5250);
PPC_FUNC_IMPL(__imp__sub_820B5250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B5258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5278;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b52e0
	if (ctx.cr6.eq) goto loc_820B52E0;
loc_820B5280:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b52b8
	if (ctx.cr6.eq) goto loc_820B52B8;
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r6.u32);
	// b 0x820b52c0
	goto loc_820B52C0;
loc_820B52B8:
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
loc_820B52C0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B52D8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b5280
	if (!ctx.cr6.eq) goto loc_820B5280;
loc_820B52E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B52E8"))) PPC_WEAK_FUNC(sub_820B52E8);
PPC_FUNC_IMPL(__imp__sub_820B52E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B52F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bne cr6,0x820b5328
	if (!ctx.cr6.eq) goto loc_820B5328;
	// bl 0x820ddca8
	ctx.lr = 0x820B5310;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5320
	if (ctx.cr6.eq) goto loc_820B5320;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b5344
	goto loc_820B5344;
loc_820B5320:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b5344
	goto loc_820B5344;
loc_820B5328:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5370
	if (!ctx.cr6.eq) goto loc_820B5370;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b53dc
	if (ctx.cr6.eq) goto loc_820B53DC;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820B5344:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5360
	if (ctx.cr6.eq) goto loc_820B5360;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -261;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_820B5360:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b5398
	if (ctx.cr6.eq) goto loc_820B5398;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820b5398
	goto loc_820B5398;
loc_820B5370:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b5380
	if (!ctx.cr6.eq) goto loc_820B5380;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b5394
	goto loc_820B5394;
loc_820B5380:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B5394;
	sub_820F3178(ctx, base);
loc_820B5394:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B5398:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b53dc
	if (ctx.cr6.eq) goto loc_820B53DC;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x8233e4e0
	ctx.lr = 0x820B53B0;
	sub_8233E4E0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r8,672(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B53C8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b53c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B53C8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820B53DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B53E8"))) PPC_WEAK_FUNC(sub_820B53E8);
PPC_FUNC_IMPL(__imp__sub_820B53E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B53F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x820b5478
	if (ctx.cr6.eq) goto loc_820B5478;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B5468:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b5468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B5468;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_820B5478:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5490;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b54f0
	if (ctx.cr6.eq) goto loc_820B54F0;
loc_820B549C:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b54c4
	if (ctx.cr6.eq) goto loc_820B54C4;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820B54C0;
	sub_8233E4E0(ctx, base);
	// b 0x820b54cc
	goto loc_820B54CC;
loc_820B54C4:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
loc_820B54CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820B54E4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b549c
	if (!ctx.cr6.eq) goto loc_820B549C;
loc_820B54F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B54F8"))) PPC_WEAK_FUNC(sub_820B54F8);
PPC_FUNC_IMPL(__imp__sub_820B54F8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5540
	if (!ctx.cr6.eq) goto loc_820B5540;
	// bl 0x820ddca8
	ctx.lr = 0x820B5528;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5538
	if (ctx.cr6.eq) goto loc_820B5538;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b555c
	goto loc_820B555C;
loc_820B5538:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b555c
	goto loc_820B555C;
loc_820B5540:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b558c
	if (!ctx.cr6.eq) goto loc_820B558C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b55d8
	if (ctx.cr6.eq) goto loc_820B55D8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B555C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5578
	if (ctx.cr6.eq) goto loc_820B5578;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B5578:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5584
	if (ctx.cr6.eq) goto loc_820B5584;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820B5584:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x820b55b4
	goto loc_820B55B4;
loc_820B558C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b559c
	if (!ctx.cr6.eq) goto loc_820B559C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b55b0
	goto loc_820B55B0;
loc_820B559C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B55B0;
	sub_820F3178(ctx, base);
loc_820B55B0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B55B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b55d8
	if (ctx.cr6.eq) goto loc_820B55D8;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820B55CC;
	sub_8233E4E0(ctx, base);
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x820b55dc
	goto loc_820B55DC;
loc_820B55D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B55DC:
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

__attribute__((alias("__imp__sub_820B55F4"))) PPC_WEAK_FUNC(sub_820B55F4);
PPC_FUNC_IMPL(__imp__sub_820B55F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B55F8"))) PPC_WEAK_FUNC(sub_820B55F8);
PPC_FUNC_IMPL(__imp__sub_820B55F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B5600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5620;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5680
	if (ctx.cr6.eq) goto loc_820B5680;
loc_820B562C:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820b5654
	if (ctx.cr6.eq) goto loc_820B5654;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820B5650;
	sub_8233E4E0(ctx, base);
	// b 0x820b565c
	goto loc_820B565C;
loc_820B5654:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
loc_820B565C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5674;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b562c
	if (!ctx.cr6.eq) goto loc_820B562C;
loc_820B5680:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B5688"))) PPC_WEAK_FUNC(sub_820B5688);
PPC_FUNC_IMPL(__imp__sub_820B5688) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b56d0
	if (!ctx.cr6.eq) goto loc_820B56D0;
	// bl 0x820ddca8
	ctx.lr = 0x820B56B8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b56c8
	if (ctx.cr6.eq) goto loc_820B56C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b56ec
	goto loc_820B56EC;
loc_820B56C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b56ec
	goto loc_820B56EC;
loc_820B56D0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5718
	if (!ctx.cr6.eq) goto loc_820B5718;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5778
	if (ctx.cr6.eq) goto loc_820B5778;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B56EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5708
	if (ctx.cr6.eq) goto loc_820B5708;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B5708:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5740
	if (ctx.cr6.eq) goto loc_820B5740;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b5740
	goto loc_820B5740;
loc_820B5718:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b5728
	if (!ctx.cr6.eq) goto loc_820B5728;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b5740
	goto loc_820B5740;
loc_820B5728:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B573C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B5740:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5778
	if (ctx.cr6.eq) goto loc_820B5778;
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// addi r9,r11,428
	ctx.r9.s64 = ctx.r11.s64 + 428;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r8,432(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r7,436(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// lwz r6,440(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// lwz r5,672(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// rlwinm r3,r5,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x1;
	// b 0x820b577c
	goto loc_820B577C;
loc_820B5778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B577C:
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

__attribute__((alias("__imp__sub_820B5794"))) PPC_WEAK_FUNC(sub_820B5794);
PPC_FUNC_IMPL(__imp__sub_820B5794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5798"))) PPC_WEAK_FUNC(sub_820B5798);
PPC_FUNC_IMPL(__imp__sub_820B5798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B57A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B57C0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5828
	if (ctx.cr6.eq) goto loc_820B5828;
loc_820B57C8:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5800
	if (ctx.cr6.eq) goto loc_820B5800;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r6.u32);
	// b 0x820b5808
	goto loc_820B5808;
loc_820B5800:
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
loc_820B5808:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5820;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b57c8
	if (!ctx.cr6.eq) goto loc_820B57C8;
loc_820B5828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B5830"))) PPC_WEAK_FUNC(sub_820B5830);
PPC_FUNC_IMPL(__imp__sub_820B5830) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5878
	if (!ctx.cr6.eq) goto loc_820B5878;
	// bl 0x820ddca8
	ctx.lr = 0x820B5860;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5870
	if (ctx.cr6.eq) goto loc_820B5870;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b5894
	goto loc_820B5894;
loc_820B5870:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b5894
	goto loc_820B5894;
loc_820B5878:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b58c4
	if (!ctx.cr6.eq) goto loc_820B58C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b5970
	if (ctx.cr6.eq) goto loc_820B5970;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820B5894:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b58b0
	if (ctx.cr6.eq) goto loc_820B58B0;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B58B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b58bc
	if (ctx.cr6.eq) goto loc_820B58BC;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
loc_820B58BC:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x820b58ec
	goto loc_820B58EC;
loc_820B58C4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b58d4
	if (!ctx.cr6.eq) goto loc_820B58D4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820b58ec
	goto loc_820B58EC;
loc_820B58D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B58E8;
	sub_820F3178(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_820B58EC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b5970
	if (ctx.cr6.eq) goto loc_820B5970;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r8,492
	ctx.r11.s64 = ctx.r8.s64 + 492;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B5904:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b5904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B5904;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,672(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 672);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r3,r9,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
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
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// b 0x820b5974
	goto loc_820B5974;
loc_820B5970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B5974:
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

__attribute__((alias("__imp__sub_820B598C"))) PPC_WEAK_FUNC(sub_820B598C);
PPC_FUNC_IMPL(__imp__sub_820B598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5990"))) PPC_WEAK_FUNC(sub_820B5990);
PPC_FUNC_IMPL(__imp__sub_820B5990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B5998;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,964(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 964);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x820b5a60
	if (ctx.cr6.eq) goto loc_820B5A60;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lbz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lfs f5,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
loc_820B5A60:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5A78;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5adc
	if (ctx.cr6.eq) goto loc_820B5ADC;
loc_820B5A80:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5ab4
	if (ctx.cr6.eq) goto loc_820B5AB4;
	// li r9,8
	ctx.r9.s64 = 8;
	// ori r8,r11,16
	ctx.r8.u64 = ctx.r11.u64 | 16;
	// addi r10,r3,492
	ctx.r10.s64 = ctx.r3.s64 + 492;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// stw r8,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B5AA4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b5aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B5AA4;
	// b 0x820b5abc
	goto loc_820B5ABC;
loc_820B5AB4:
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
loc_820B5ABC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5AD4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b5a80
	if (!ctx.cr6.eq) goto loc_820B5A80;
loc_820B5ADC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B5AE4"))) PPC_WEAK_FUNC(sub_820B5AE4);
PPC_FUNC_IMPL(__imp__sub_820B5AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5AE8"))) PPC_WEAK_FUNC(sub_820B5AE8);
PPC_FUNC_IMPL(__imp__sub_820B5AE8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5b30
	if (!ctx.cr6.eq) goto loc_820B5B30;
	// bl 0x820ddca8
	ctx.lr = 0x820B5B18;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5b28
	if (ctx.cr6.eq) goto loc_820B5B28;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b5b4c
	goto loc_820B5B4C;
loc_820B5B28:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b5b4c
	goto loc_820B5B4C;
loc_820B5B30:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5b78
	if (!ctx.cr6.eq) goto loc_820B5B78;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5bc4
	if (ctx.cr6.eq) goto loc_820B5BC4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B5B4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5b68
	if (ctx.cr6.eq) goto loc_820B5B68;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B5B68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5ba0
	if (ctx.cr6.eq) goto loc_820B5BA0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b5ba0
	goto loc_820B5BA0;
loc_820B5B78:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b5b88
	if (!ctx.cr6.eq) goto loc_820B5B88;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b5ba0
	goto loc_820B5BA0;
loc_820B5B88:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B5B9C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B5BA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5bc4
	if (ctx.cr6.eq) goto loc_820B5BC4;
	// lwz r10,564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,672(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// rlwinm r3,r8,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x1;
	// b 0x820b5bc8
	goto loc_820B5BC8;
loc_820B5BC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B5BC8:
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

__attribute__((alias("__imp__sub_820B5BE0"))) PPC_WEAK_FUNC(sub_820B5BE0);
PPC_FUNC_IMPL(__imp__sub_820B5BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B5BE8;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5C0C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5c80
	if (ctx.cr6.eq) goto loc_820B5C80;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820B5C20:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5c58
	if (ctx.cr6.eq) goto loc_820B5C58;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820b5c40
	if (ctx.cr6.gt) goto loc_820B5C40;
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
loc_820B5C40:
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r10.u32);
	// b 0x820b5c60
	goto loc_820B5C60;
loc_820B5C58:
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
loc_820B5C60:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5C78;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b5c20
	if (!ctx.cr6.eq) goto loc_820B5C20;
loc_820B5C80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B5C8C"))) PPC_WEAK_FUNC(sub_820B5C8C);
PPC_FUNC_IMPL(__imp__sub_820B5C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5C90"))) PPC_WEAK_FUNC(sub_820B5C90);
PPC_FUNC_IMPL(__imp__sub_820B5C90) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5cd8
	if (!ctx.cr6.eq) goto loc_820B5CD8;
	// bl 0x820ddca8
	ctx.lr = 0x820B5CC0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5cd0
	if (ctx.cr6.eq) goto loc_820B5CD0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b5cf4
	goto loc_820B5CF4;
loc_820B5CD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b5cf4
	goto loc_820B5CF4;
loc_820B5CD8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5d20
	if (!ctx.cr6.eq) goto loc_820B5D20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5d80
	if (ctx.cr6.eq) goto loc_820B5D80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B5CF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5d10
	if (ctx.cr6.eq) goto loc_820B5D10;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B5D10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5d48
	if (ctx.cr6.eq) goto loc_820B5D48;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b5d48
	goto loc_820B5D48;
loc_820B5D20:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b5d30
	if (!ctx.cr6.eq) goto loc_820B5D30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b5d48
	goto loc_820B5D48;
loc_820B5D30:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B5D44;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B5D48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5d80
	if (ctx.cr6.eq) goto loc_820B5D80;
	// lwz r10,572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// addi r9,r11,572
	ctx.r9.s64 = ctx.r11.s64 + 572;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r8,576(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r7,580(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// lwz r6,584(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
	// lwz r5,672(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// rlwinm r3,r5,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x1;
	// b 0x820b5d84
	goto loc_820B5D84;
loc_820B5D80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B5D84:
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

__attribute__((alias("__imp__sub_820B5D9C"))) PPC_WEAK_FUNC(sub_820B5D9C);
PPC_FUNC_IMPL(__imp__sub_820B5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5DA0"))) PPC_WEAK_FUNC(sub_820B5DA0);
PPC_FUNC_IMPL(__imp__sub_820B5DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B5DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5DC8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5e04
	if (ctx.cr6.eq) goto loc_820B5E04;
loc_820B5DD4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82100ff8
	ctx.lr = 0x820B5DE0;
	sub_82100FF8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5DF8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b5dd4
	if (!ctx.cr6.eq) goto loc_820B5DD4;
loc_820B5E04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B5E0C"))) PPC_WEAK_FUNC(sub_820B5E0C);
PPC_FUNC_IMPL(__imp__sub_820B5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5E10"))) PPC_WEAK_FUNC(sub_820B5E10);
PPC_FUNC_IMPL(__imp__sub_820B5E10) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820B5E34;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5e74
	if (ctx.cr6.eq) goto loc_820B5E74;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B5E4C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b5e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B5E4C;
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
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
loc_820B5E74:
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

__attribute__((alias("__imp__sub_820B5E8C"))) PPC_WEAK_FUNC(sub_820B5E8C);
PPC_FUNC_IMPL(__imp__sub_820B5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5E90"))) PPC_WEAK_FUNC(sub_820B5E90);
PPC_FUNC_IMPL(__imp__sub_820B5E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B5E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5EB8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5f1c
	if (ctx.cr6.eq) goto loc_820B5F1C;
loc_820B5EC0:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5ef4
	if (ctx.cr6.eq) goto loc_820B5EF4;
	// li r9,9
	ctx.r9.s64 = 9;
	// ori r8,r11,2048
	ctx.r8.u64 = ctx.r11.u64 | 2048;
	// addi r10,r3,620
	ctx.r10.s64 = ctx.r3.s64 + 620;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// stw r8,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B5EE4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b5ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B5EE4;
	// b 0x820b5efc
	goto loc_820B5EFC;
loc_820B5EF4:
	// rlwinm r10,r11,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
loc_820B5EFC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B5F14;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b5ec0
	if (!ctx.cr6.eq) goto loc_820B5EC0;
loc_820B5F1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B5F24"))) PPC_WEAK_FUNC(sub_820B5F24);
PPC_FUNC_IMPL(__imp__sub_820B5F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5F28"))) PPC_WEAK_FUNC(sub_820B5F28);
PPC_FUNC_IMPL(__imp__sub_820B5F28) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5f70
	if (!ctx.cr6.eq) goto loc_820B5F70;
	// bl 0x820ddca8
	ctx.lr = 0x820B5F58;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5f68
	if (ctx.cr6.eq) goto loc_820B5F68;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b5f8c
	goto loc_820B5F8C;
loc_820B5F68:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b5f8c
	goto loc_820B5F8C;
loc_820B5F70:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b5fbc
	if (!ctx.cr6.eq) goto loc_820B5FBC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6014
	if (ctx.cr6.eq) goto loc_820B6014;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B5F8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5fa8
	if (ctx.cr6.eq) goto loc_820B5FA8;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B5FA8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b5fb4
	if (ctx.cr6.eq) goto loc_820B5FB4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820B5FB4:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x820b5fe4
	goto loc_820B5FE4;
loc_820B5FBC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b5fcc
	if (!ctx.cr6.eq) goto loc_820B5FCC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820b5fe4
	goto loc_820B5FE4;
loc_820B5FCC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B5FE0;
	sub_820F3178(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_820B5FE4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b6014
	if (ctx.cr6.eq) goto loc_820B6014;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r8,584
	ctx.r11.s64 = ctx.r8.s64 + 584;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B5FFC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b5ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B5FFC;
	// lwz r11,672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 672);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// b 0x820b6018
	goto loc_820B6018;
loc_820B6014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B6018:
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

__attribute__((alias("__imp__sub_820B6030"))) PPC_WEAK_FUNC(sub_820B6030);
PPC_FUNC_IMPL(__imp__sub_820B6030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820B6038;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B605C;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b61a0
	if (ctx.cr6.eq) goto loc_820B61A0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,6936
	ctx.r27.s64 = ctx.r11.s64 + 6936;
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820B6080:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820b614c
	if (ctx.cr6.eq) goto loc_820B614C;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820b609c
	if (!ctx.cr6.gt) goto loc_820B609C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820B609C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820b60b0
	if (!ctx.cr6.eq) goto loc_820B60B0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x820b610c
	goto loc_820B610C;
loc_820B60B0:
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x820b60e4
	if (!ctx.cr6.lt) goto loc_820B60E4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r27,20
	ctx.r9.s64 = ctx.r27.s64 + 20;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820b60e4
	if (!ctx.cr6.eq) goto loc_820B60E4;
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820b60ec
	if (!ctx.cr6.eq) goto loc_820B60EC;
loc_820B60E4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x820b610c
	goto loc_820B610C;
loc_820B60EC:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
loc_820B60F0:
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
	// bne 0x820b60f0
	if (!ctx.cr0.eq) goto loc_820B60F0;
loc_820B610C:
	// lwz r3,688(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b611c
	if (ctx.cr6.eq) goto loc_820B611C;
	// bl 0x82172d60
	ctx.lr = 0x820B611C;
	sub_82172D60(ctx, base);
loc_820B611C:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// stw r31,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r31.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r30,584
	ctx.r10.s64 = ctx.r30.s64 + 584;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B613C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b613c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B613C;
	// b 0x820b6160
	goto loc_820B6160;
loc_820B614C:
	// lwz r3,688(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6160
	if (ctx.cr6.eq) goto loc_820B6160;
	// bl 0x82172d60
	ctx.lr = 0x820B615C;
	sub_82172D60(ctx, base);
	// stw r26,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r26.u32);
loc_820B6160:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// bne cr6,0x820b6178
	if (!ctx.cr6.eq) goto loc_820B6178;
	// rlwinm r10,r11,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
loc_820B6178:
	// stw r10,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82085870
	ctx.lr = 0x820B6194;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b6080
	if (!ctx.cr6.eq) goto loc_820B6080;
loc_820B61A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B61AC"))) PPC_WEAK_FUNC(sub_820B61AC);
PPC_FUNC_IMPL(__imp__sub_820B61AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B61B0"))) PPC_WEAK_FUNC(sub_820B61B0);
PPC_FUNC_IMPL(__imp__sub_820B61B0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b61f8
	if (!ctx.cr6.eq) goto loc_820B61F8;
	// bl 0x820ddca8
	ctx.lr = 0x820B61E0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b61f0
	if (ctx.cr6.eq) goto loc_820B61F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b6214
	goto loc_820B6214;
loc_820B61F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b6214
	goto loc_820B6214;
loc_820B61F8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b6240
	if (!ctx.cr6.eq) goto loc_820B6240;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6294
	if (ctx.cr6.eq) goto loc_820B6294;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B6214:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b6230
	if (ctx.cr6.eq) goto loc_820B6230;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B6230:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6268
	if (ctx.cr6.eq) goto loc_820B6268;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b6268
	goto loc_820B6268;
loc_820B6240:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b6250
	if (!ctx.cr6.eq) goto loc_820B6250;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b6268
	goto loc_820B6268;
loc_820B6250:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B6264;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B6268:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b6294
	if (ctx.cr6.eq) goto loc_820B6294;
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,664(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,668(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,672(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// rlwinm r3,r7,20,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0x1;
	// b 0x820b6298
	goto loc_820B6298;
loc_820B6294:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B6298:
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

__attribute__((alias("__imp__sub_820B62B0"))) PPC_WEAK_FUNC(sub_820B62B0);
PPC_FUNC_IMPL(__imp__sub_820B62B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B62B8;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B62DC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6358
	if (ctx.cr6.eq) goto loc_820B6358;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820B62F0:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6330
	if (ctx.cr6.eq) goto loc_820B6330;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820b6310
	if (ctx.cr6.gt) goto loc_820B6310;
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
loc_820B6310:
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 660, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r9.u32);
	// b 0x820b6338
	goto loc_820B6338;
loc_820B6330:
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
loc_820B6338:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B6350;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b62f0
	if (!ctx.cr6.eq) goto loc_820B62F0;
loc_820B6358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B6364"))) PPC_WEAK_FUNC(sub_820B6364);
PPC_FUNC_IMPL(__imp__sub_820B6364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6368"))) PPC_WEAK_FUNC(sub_820B6368);
PPC_FUNC_IMPL(__imp__sub_820B6368) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b63b0
	if (!ctx.cr6.eq) goto loc_820B63B0;
	// bl 0x820ddca8
	ctx.lr = 0x820B6398;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b63a8
	if (ctx.cr6.eq) goto loc_820B63A8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b63cc
	goto loc_820B63CC;
loc_820B63A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b63cc
	goto loc_820B63CC;
loc_820B63B0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b63f8
	if (!ctx.cr6.eq) goto loc_820B63F8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6438
	if (ctx.cr6.eq) goto loc_820B6438;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B63CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b63e8
	if (ctx.cr6.eq) goto loc_820B63E8;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B63E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6420
	if (ctx.cr6.eq) goto loc_820B6420;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b6420
	goto loc_820B6420;
loc_820B63F8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b6408
	if (!ctx.cr6.eq) goto loc_820B6408;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b6420
	goto loc_820B6420;
loc_820B6408:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B641C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B6420:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b6438
	if (ctx.cr6.eq) goto loc_820B6438;
	// addi r4,r11,692
	ctx.r4.s64 = ctx.r11.s64 + 692;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820B6438;
	sub_8233E4E0(ctx, base);
loc_820B6438:
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

__attribute__((alias("__imp__sub_820B6450"))) PPC_WEAK_FUNC(sub_820B6450);
PPC_FUNC_IMPL(__imp__sub_820B6450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820B6458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B6478;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b64b4
	if (ctx.cr6.eq) goto loc_820B64B4;
loc_820B6484:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82100d48
	ctx.lr = 0x820B6490;
	sub_82100D48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B64A8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b6484
	if (!ctx.cr6.eq) goto loc_820B6484;
loc_820B64B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B64BC"))) PPC_WEAK_FUNC(sub_820B64BC);
PPC_FUNC_IMPL(__imp__sub_820B64BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B64C0"))) PPC_WEAK_FUNC(sub_820B64C0);
PPC_FUNC_IMPL(__imp__sub_820B64C0) {
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
	// bne cr6,0x820b64fc
	if (!ctx.cr6.eq) goto loc_820B64FC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,788
	ctx.r8.u64 = ctx.r10.u64 | 788;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// b 0x820b65a4
	goto loc_820B65A4;
loc_820B64FC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b6528
	if (!ctx.cr6.eq) goto loc_820B6528;
	// bl 0x820ddca8
	ctx.lr = 0x820B6510;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6520
	if (ctx.cr6.eq) goto loc_820B6520;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b6544
	goto loc_820B6544;
loc_820B6520:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b6544
	goto loc_820B6544;
loc_820B6528:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b6554
	if (!ctx.cr6.eq) goto loc_820B6554;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b65a4
	if (ctx.cr6.eq) goto loc_820B65A4;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820B6544:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b656c
	if (ctx.cr6.eq) goto loc_820B656C;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820b656c
	goto loc_820B656C;
loc_820B6554:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B6568;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B656C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b65a4
	if (ctx.cr6.eq) goto loc_820B65A4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820b658c
	if (!ctx.cr6.eq) goto loc_820B658C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820B6588;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820B658C:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r10,20000
	ctx.r8.s64 = ctx.r10.s64 + 20000;
	// ori r7,r9,788
	ctx.r7.u64 = ctx.r9.u64 | 788;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
loc_820B65A4:
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

__attribute__((alias("__imp__sub_820B65BC"))) PPC_WEAK_FUNC(sub_820B65BC);
PPC_FUNC_IMPL(__imp__sub_820B65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B65C0"))) PPC_WEAK_FUNC(sub_820B65C0);
PPC_FUNC_IMPL(__imp__sub_820B65C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,792
	ctx.r8.u64 = ctx.r10.u64 | 792;
	// stfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B65D8"))) PPC_WEAK_FUNC(sub_820B65D8);
PPC_FUNC_IMPL(__imp__sub_820B65D8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b6620
	if (!ctx.cr6.eq) goto loc_820B6620;
	// bl 0x820ddca8
	ctx.lr = 0x820B6608;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6618
	if (ctx.cr6.eq) goto loc_820B6618;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b663c
	goto loc_820B663C;
loc_820B6618:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b663c
	goto loc_820B663C;
loc_820B6620:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b6668
	if (!ctx.cr6.eq) goto loc_820B6668;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b66ac
	if (ctx.cr6.eq) goto loc_820B66AC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B663C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b6658
	if (ctx.cr6.eq) goto loc_820B6658;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B6658:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6690
	if (ctx.cr6.eq) goto loc_820B6690;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b6690
	goto loc_820B6690;
loc_820B6668:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b6678
	if (!ctx.cr6.eq) goto loc_820B6678;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b6690
	goto loc_820B6690;
loc_820B6678:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B668C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B6690:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b66ac
	if (ctx.cr6.eq) goto loc_820B66AC;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,672(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// rlwinm r3,r9,19,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1;
	// b 0x820b66b0
	goto loc_820B66B0;
loc_820B66AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B66B0:
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

__attribute__((alias("__imp__sub_820B66C8"))) PPC_WEAK_FUNC(sub_820B66C8);
PPC_FUNC_IMPL(__imp__sub_820B66C8) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b6708
	if (!ctx.cr6.eq) goto loc_820B6708;
	// bl 0x820ddca8
	ctx.lr = 0x820B66F0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6700
	if (ctx.cr6.eq) goto loc_820B6700;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b6724
	goto loc_820B6724;
loc_820B6700:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b6724
	goto loc_820B6724;
loc_820B6708:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b6750
	if (!ctx.cr6.eq) goto loc_820B6750;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b678c
	if (ctx.cr6.eq) goto loc_820B678C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B6724:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b6740
	if (ctx.cr6.eq) goto loc_820B6740;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B6740:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6778
	if (ctx.cr6.eq) goto loc_820B6778;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b6778
	goto loc_820B6778;
loc_820B6750:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b6760
	if (!ctx.cr6.eq) goto loc_820B6760;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b6778
	goto loc_820B6778;
loc_820B6760:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B6774;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B6778:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b678c
	if (ctx.cr6.eq) goto loc_820B678C;
	// lwz r10,672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// rlwinm r9,r10,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r9,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r9.u32);
loc_820B678C:
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

__attribute__((alias("__imp__sub_820B67A0"))) PPC_WEAK_FUNC(sub_820B67A0);
PPC_FUNC_IMPL(__imp__sub_820B67A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B67A8;
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
	// bne cr6,0x820b67e4
	if (!ctx.cr6.eq) goto loc_820B67E4;
	// bl 0x820ddca8
	ctx.lr = 0x820B67CC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b67dc
	if (ctx.cr6.eq) goto loc_820B67DC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b6800
	goto loc_820B6800;
loc_820B67DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b6800
	goto loc_820B6800;
loc_820B67E4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b682c
	if (!ctx.cr6.eq) goto loc_820B682C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6874
	if (ctx.cr6.eq) goto loc_820B6874;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B6800:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b681c
	if (ctx.cr6.eq) goto loc_820B681C;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B681C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6854
	if (ctx.cr6.eq) goto loc_820B6854;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b6854
	goto loc_820B6854;
loc_820B682C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b683c
	if (!ctx.cr6.eq) goto loc_820B683C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b6854
	goto loc_820B6854;
loc_820B683C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B6850;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B6854:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b6874
	if (ctx.cr6.eq) goto loc_820B6874;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82153418
	ctx.lr = 0x820B686C;
	sub_82153418(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820B6874:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B6880"))) PPC_WEAK_FUNC(sub_820B6880);
PPC_FUNC_IMPL(__imp__sub_820B6880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,821
	ctx.r8.u64 = ctx.r10.u64 | 821;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B689C"))) PPC_WEAK_FUNC(sub_820B689C);
PPC_FUNC_IMPL(__imp__sub_820B689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B68A0"))) PPC_WEAK_FUNC(sub_820B68A0);
PPC_FUNC_IMPL(__imp__sub_820B68A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b68f0
	if (!ctx.cr6.eq) goto loc_820B68F0;
	// bl 0x820ddca8
	ctx.lr = 0x820B68D8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b68e8
	if (ctx.cr6.eq) goto loc_820B68E8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b690c
	goto loc_820B690C;
loc_820B68E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b690c
	goto loc_820B690C;
loc_820B68F0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b693c
	if (!ctx.cr6.eq) goto loc_820B693C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b69c0
	if (ctx.cr6.eq) goto loc_820B69C0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B690C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b6928
	if (ctx.cr6.eq) goto loc_820B6928;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -261;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B6928:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6934
	if (ctx.cr6.eq) goto loc_820B6934;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820B6934:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x820b6964
	goto loc_820B6964;
loc_820B693C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b694c
	if (!ctx.cr6.eq) goto loc_820B694C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820b6960
	goto loc_820B6960;
loc_820B694C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B6960;
	sub_820F3178(ctx, base);
loc_820B6960:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_820B6964:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b69c0
	if (ctx.cr6.eq) goto loc_820B69C0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r7,-16112
	ctx.r11.s64 = ctx.r7.s64 + -16112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
loc_820B6998:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b69b0
	if (ctx.cr6.eq) goto loc_820B69B0;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820b69e0
	if (ctx.cr6.eq) goto loc_820B69E0;
loc_820B69B0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// blt cr6,0x820b6998
	if (ctx.cr6.lt) goto loc_820B6998;
loc_820B69C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B69C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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
loc_820B69E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820b6ee8
	ctx.lr = 0x820B69E8;
	sub_820B6EE8(ctx, base);
	// b 0x820b69c4
	goto loc_820B69C4;
}

__attribute__((alias("__imp__sub_820B69EC"))) PPC_WEAK_FUNC(sub_820B69EC);
PPC_FUNC_IMPL(__imp__sub_820B69EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B69F0"))) PPC_WEAK_FUNC(sub_820B69F0);
PPC_FUNC_IMPL(__imp__sub_820B69F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B69F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x820b6a64
	if (!ctx.cr6.lt) goto loc_820B6A64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820B6A20;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6a64
	if (ctx.cr6.eq) goto loc_820B6A64;
loc_820B6A28:
	// lbz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 380);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820b6a44
	if (ctx.cr6.eq) goto loc_820B6A44;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// stb r31,380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 380, ctx.r31.u8);
	// oris r9,r11,4096
	ctx.r9.u64 = ctx.r11.u64 | 268435456;
	// stw r9,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r9.u32);
loc_820B6A44:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B6A5C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b6a28
	if (!ctx.cr6.eq) goto loc_820B6A28;
loc_820B6A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B6A6C"))) PPC_WEAK_FUNC(sub_820B6A6C);
PPC_FUNC_IMPL(__imp__sub_820B6A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6A70"))) PPC_WEAK_FUNC(sub_820B6A70);
PPC_FUNC_IMPL(__imp__sub_820B6A70) {
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
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820B6A8C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6aa8
	if (ctx.cr6.eq) goto loc_820B6AA8;
	// lbz r3,380(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 380);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B6AA8:
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

__attribute__((alias("__imp__sub_820B6ABC"))) PPC_WEAK_FUNC(sub_820B6ABC);
PPC_FUNC_IMPL(__imp__sub_820B6ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6AC0"))) PPC_WEAK_FUNC(sub_820B6AC0);
PPC_FUNC_IMPL(__imp__sub_820B6AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820B6AC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B6AF0;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6bc0
	if (ctx.cr6.eq) goto loc_820B6BC0;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
loc_820B6B00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6b1c
	if (ctx.cr6.eq) goto loc_820B6B1C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82100ef0
	ctx.lr = 0x820B6B18;
	sub_82100EF0(ctx, base);
	// b 0x820b6b9c
	goto loc_820B6B9C;
loc_820B6B1C:
	// lwz r8,784(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// addi r11,r30,780
	ctx.r11.s64 = ctx.r30.s64 + 780;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b6b64
	if (ctx.cr6.eq) goto loc_820B6B64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
loc_820B6B3C:
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x820b6b60
	if (ctx.cr6.eq) goto loc_820B6B60;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x820b6b3c
	if (ctx.cr6.lt) goto loc_820B6B3C;
	// b 0x820b6b64
	goto loc_820B6B64;
loc_820B6B60:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_820B6B64:
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820b6b9c
	if (!ctx.cr6.lt) goto loc_820B6B9C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r7,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_820B6B9C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,261
	ctx.r6.s64 = 261;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820B6BB4;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b6b00
	if (!ctx.cr6.eq) goto loc_820B6B00;
loc_820B6BC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B6BC8"))) PPC_WEAK_FUNC(sub_820B6BC8);
PPC_FUNC_IMPL(__imp__sub_820B6BC8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820B6BD0;
	__savegprlr_14(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,13456
	ctx.r11.s64 = ctx.r11.s64 + 13456;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// addi r10,r10,13768
	ctx.r10.s64 = ctx.r10.s64 + 13768;
	// addi r9,r9,13936
	ctx.r9.s64 = ctx.r9.s64 + 13936;
	// addi r8,r8,14216
	ctx.r8.s64 = ctx.r8.s64 + 14216;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r7,r7,14384
	ctx.r7.s64 = ctx.r7.s64 + 14384;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// addi r6,r6,14624
	ctx.r6.s64 = ctx.r6.s64 + 14624;
	// addi r5,r5,14864
	ctx.r5.s64 = ctx.r5.s64 + 14864;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r4,r4,15104
	ctx.r4.s64 = ctx.r4.s64 + 15104;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r11,r31,15400
	ctx.r11.s64 = ctx.r31.s64 + 15400;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// addi r10,r30,16096
	ctx.r10.s64 = ctx.r30.s64 + 16096;
	// addi r9,r29,15792
	ctx.r9.s64 = ctx.r29.s64 + 15792;
	// addi r8,r28,16248
	ctx.r8.s64 = ctx.r28.s64 + 16248;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// addi r7,r27,16368
	ctx.r7.s64 = ctx.r27.s64 + 16368;
	// addi r6,r26,26784
	ctx.r6.s64 = ctx.r26.s64 + 26784;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,17344
	ctx.r5.s64 = ctx.r25.s64 + 17344;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// addi r4,r24,17584
	ctx.r4.s64 = ctx.r24.s64 + 17584;
	// stw r6,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r6.u32);
	// addi r11,r23,17600
	ctx.r11.s64 = ctx.r23.s64 + 17600;
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// addi r10,r22,18440
	ctx.r10.s64 = ctx.r22.s64 + 18440;
	// addi r9,r21,18712
	ctx.r9.s64 = ctx.r21.s64 + 18712;
	// addi r8,r20,27120
	ctx.r8.s64 = ctx.r20.s64 + 27120;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,27248
	ctx.r7.s64 = ctx.r19.s64 + 27248;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// addi r6,r18,18792
	ctx.r6.s64 = ctx.r18.s64 + 18792;
	// stw r8,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r8.u32);
	// addi r5,r17,19080
	ctx.r5.s64 = ctx.r17.s64 + 19080;
	// stw r7,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r7.u32);
	// addi r4,r16,19248
	ctx.r4.s64 = ctx.r16.s64 + 19248;
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// addi r11,r15,19488
	ctx.r11.s64 = ctx.r15.s64 + 19488;
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// addi r9,r10,19680
	ctx.r9.s64 = ctx.r10.s64 + 19680;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// addi r8,r14,19944
	ctx.r8.s64 = ctx.r14.s64 + 19944;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r6,20456
	ctx.r6.s64 = ctx.r6.s64 + 20456;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r6,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r6.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// addi r7,r7,20192
	ctx.r7.s64 = ctx.r7.s64 + 20192;
	// addi r5,r5,20800
	ctx.r5.s64 = ctx.r5.s64 + 20800;
	// addi r4,r4,21072
	ctx.r4.s64 = ctx.r4.s64 + 21072;
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// addi r11,r11,21224
	ctx.r11.s64 = ctx.r11.s64 + 21224;
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// addi r10,r10,21480
	ctx.r10.s64 = ctx.r10.s64 + 21480;
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// addi r9,r9,22152
	ctx.r9.s64 = ctx.r9.s64 + 22152;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// addi r8,r8,22424
	ctx.r8.s64 = ctx.r8.s64 + 22424;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// addi r6,r30,23520
	ctx.r6.s64 = ctx.r30.s64 + 23520;
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r8,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r8.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r6,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r6.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r7,r31,23272
	ctx.r7.s64 = ctx.r31.s64 + 23272;
	// addi r5,r29,24624
	ctx.r5.s64 = ctx.r29.s64 + 24624;
	// addi r4,r28,24360
	ctx.r4.s64 = ctx.r28.s64 + 24360;
	// stw r7,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r7.u32);
	// addi r11,r27,23696
	ctx.r11.s64 = ctx.r27.s64 + 23696;
	// stw r5,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r5.u32);
	// addi r10,r26,23968
	ctx.r10.s64 = ctx.r26.s64 + 23968;
	// stw r4,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// addi r9,r25,24080
	ctx.r9.s64 = ctx.r25.s64 + 24080;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// addi r8,r24,24208
	ctx.r8.s64 = ctx.r24.s64 + 24208;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// addi r6,r22,25448
	ctx.r6.s64 = ctx.r22.s64 + 25448;
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r8,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r8.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// addi r7,r23,25680
	ctx.r7.s64 = ctx.r23.s64 + 25680;
	// addi r5,r21,16848
	ctx.r5.s64 = ctx.r21.s64 + 16848;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// stw r7,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r7.u32);
	// addi r4,r20,16992
	ctx.r4.s64 = ctx.r20.s64 + 16992;
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// addi r11,r19,17096
	ctx.r11.s64 = ctx.r19.s64 + 17096;
	// addi r10,r18,17240
	ctx.r10.s64 = ctx.r18.s64 + 17240;
	// stw r4,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r4.u32);
	// addi r9,r17,16520
	ctx.r9.s64 = ctx.r17.s64 + 16520;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// addi r8,r16,25792
	ctx.r8.s64 = ctx.r16.s64 + 25792;
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r9,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r9.u32);
	// addi r7,r15,25264
	ctx.r7.s64 = ctx.r15.s64 + 25264;
	// stw r8,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r8.u32);
	// addi r5,r6,25008
	ctx.r5.s64 = ctx.r6.s64 + 25008;
	// addi r4,r14,26072
	ctx.r4.s64 = ctx.r14.s64 + 26072;
	// stw r7,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r7.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r5,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r4,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// addi r11,r11,26312
	ctx.r11.s64 = ctx.r11.s64 + 26312;
	// addi r10,r10,26048
	ctx.r10.s64 = ctx.r10.s64 + 26048;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// lis r30,-32226
	ctx.r30.s64 = -2111963136;
	// addi r9,r9,26528
	ctx.r9.s64 = ctx.r9.s64 + 26528;
	// addi r8,r8,22576
	ctx.r8.s64 = ctx.r8.s64 + 22576;
	// addi r7,r7,22928
	ctx.r7.s64 = ctx.r7.s64 + 22928;
	// stw r9,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r9.u32);
	// addi r6,r6,26752
	ctx.r6.s64 = ctx.r6.s64 + 26752;
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
	// addi r5,r5,21752
	ctx.r5.s64 = ctx.r5.s64 + 21752;
	// stw r7,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r7.u32);
	// addi r4,r4,22008
	ctx.r4.s64 = ctx.r4.s64 + 22008;
	// stw r6,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r6.u32);
	// addi r11,r31,27328
	ctx.r11.s64 = ctx.r31.s64 + 27328;
	// stw r5,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r5.u32);
	// addi r10,r30,-21912
	ctx.r10.s64 = ctx.r30.s64 + -21912;
	// stw r4,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r4.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r10,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r10.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B6EE4"))) PPC_WEAK_FUNC(sub_820B6EE4);
PPC_FUNC_IMPL(__imp__sub_820B6EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6EE8"))) PPC_WEAK_FUNC(sub_820B6EE8);
PPC_FUNC_IMPL(__imp__sub_820B6EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,364(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// addi r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 + 172;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x820b6fcc
	if (ctx.cr6.lt) goto loc_820B6FCC;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_820B6F0C:
	// lfs f10,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f4,f7,f12,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// bgt cr6,0x820b705c
	if (ctx.cr6.gt) goto loc_820B705C;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f4,f7,f12,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// bgt cr6,0x820b7030
	if (ctx.cr6.gt) goto loc_820B7030;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f4,f7,f12,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// bgt cr6,0x820b7044
	if (ctx.cr6.gt) goto loc_820B7044;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f4,f7,f12,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// bgt cr6,0x820b7058
	if (ctx.cr6.gt) goto loc_820B7058;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,-3
	ctx.r8.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820b6f0c
	if (ctx.cr6.lt) goto loc_820B6F0C;
loc_820B6FCC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820b705c
	if (!ctx.cr6.lt) goto loc_820B705C;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_820B6FE8:
	// lfs f10,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f12,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f4,f7,f0,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// bgt cr6,0x820b705c
	if (ctx.cr6.gt) goto loc_820B705C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820b6fe8
	if (ctx.cr6.lt) goto loc_820B6FE8;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820B7030:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820B7044:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820B7058:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_820B705C:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B706C"))) PPC_WEAK_FUNC(sub_820B706C);
PPC_FUNC_IMPL(__imp__sub_820B706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7070"))) PPC_WEAK_FUNC(sub_820B7070);
PPC_FUNC_IMPL(__imp__sub_820B7070) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8233fa34
	ctx.lr = 0x820B7088;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
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
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f1,f0
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8233c950
	ctx.lr = 0x820B70E4;
	sub_8233C950(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8233c870
	ctx.lr = 0x820B70F0;
	sub_8233C870(ctx, base);
	// fsubs f13,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fdivs f11,f29,f13
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f13.f64));
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fdivs f10,f27,f12
	ctx.f10.f64 = double(float(ctx.f27.f64 / ctx.f12.f64));
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fdivs f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f31.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f7,56(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8233fa80
	ctx.lr = 0x820B7130;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_820B7144"))) PPC_WEAK_FUNC(sub_820B7144);
PPC_FUNC_IMPL(__imp__sub_820B7144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7148"))) PPC_WEAK_FUNC(sub_820B7148);
PPC_FUNC_IMPL(__imp__sub_820B7148) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820B7150;
	__savegprlr_14(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,29440
	ctx.r11.s64 = ctx.r11.s64 + 29440;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// addi r10,r10,29656
	ctx.r10.s64 = ctx.r10.s64 + 29656;
	// addi r9,r9,29672
	ctx.r9.s64 = ctx.r9.s64 + 29672;
	// addi r8,r8,29736
	ctx.r8.s64 = ctx.r8.s64 + 29736;
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r7,r7,29752
	ctx.r7.s64 = ctx.r7.s64 + 29752;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r6,r6,29768
	ctx.r6.s64 = ctx.r6.s64 + 29768;
	// addi r5,r5,-6736
	ctx.r5.s64 = ctx.r5.s64 + -6736;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r4,r4,29784
	ctx.r4.s64 = ctx.r4.s64 + 29784;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r11,r31,29840
	ctx.r11.s64 = ctx.r31.s64 + 29840;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// addi r10,r30,29936
	ctx.r10.s64 = ctx.r30.s64 + 29936;
	// addi r9,r29,30112
	ctx.r9.s64 = ctx.r29.s64 + 30112;
	// addi r8,r28,30032
	ctx.r8.s64 = ctx.r28.s64 + 30032;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// addi r7,r27,30176
	ctx.r7.s64 = ctx.r27.s64 + 30176;
	// addi r6,r26,30232
	ctx.r6.s64 = ctx.r26.s64 + 30232;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,30288
	ctx.r5.s64 = ctx.r25.s64 + 30288;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r4,r24,30368
	ctx.r4.s64 = ctx.r24.s64 + 30368;
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// addi r11,r23,30472
	ctx.r11.s64 = ctx.r23.s64 + 30472;
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lis r20,-32226
	ctx.r20.s64 = -2111963136;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r19,-32226
	ctx.r19.s64 = -2111963136;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32226
	ctx.r17.s64 = -2111963136;
	// lis r16,-32226
	ctx.r16.s64 = -2111963136;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// addi r10,r22,30576
	ctx.r10.s64 = ctx.r22.s64 + 30576;
	// addi r9,r21,29720
	ctx.r9.s64 = ctx.r21.s64 + 29720;
	// addi r8,r20,-21912
	ctx.r8.s64 = ctx.r20.s64 + -21912;
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-21912
	ctx.r7.s64 = ctx.r19.s64 + -21912;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// addi r6,r18,29408
	ctx.r6.s64 = ctx.r18.s64 + 29408;
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// addi r5,r17,-21912
	ctx.r5.s64 = ctx.r17.s64 + -21912;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r4,r16,-21912
	ctx.r4.s64 = ctx.r16.s64 + -21912;
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// addi r11,r15,30680
	ctx.r11.s64 = ctx.r15.s64 + 30680;
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// addi r9,r10,30712
	ctx.r9.s64 = ctx.r10.s64 + 30712;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// addi r8,r14,30728
	ctx.r8.s64 = ctx.r14.s64 + 30728;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r8,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r8.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r10,r7,30784
	ctx.r10.s64 = ctx.r7.s64 + 30784;
	// addi r9,r6,30848
	ctx.r9.s64 = ctx.r6.s64 + 30848;
	// addi r8,r5,30912
	ctx.r8.s64 = ctx.r5.s64 + 30912;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// addi r7,r4,30944
	ctx.r7.s64 = ctx.r4.s64 + 30944;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// addi r6,r11,-21912
	ctx.r6.s64 = ctx.r11.s64 + -21912;
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// stw r7,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r7.u32);
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B72DC"))) PPC_WEAK_FUNC(sub_820B72DC);
PPC_FUNC_IMPL(__imp__sub_820B72DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B72E0"))) PPC_WEAK_FUNC(sub_820B72E0);
PPC_FUNC_IMPL(__imp__sub_820B72E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r10,r11,-17184
	ctx.r10.s64 = ctx.r11.s64 + -17184;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,288(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// b 0x82247920
	sub_82247920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B72FC"))) PPC_WEAK_FUNC(sub_820B72FC);
PPC_FUNC_IMPL(__imp__sub_820B72FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7300"))) PPC_WEAK_FUNC(sub_820B7300);
PPC_FUNC_IMPL(__imp__sub_820B7300) {
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
	// bne cr6,0x820b7344
	if (!ctx.cr6.eq) goto loc_820B7344;
	// bl 0x820ddca8
	ctx.lr = 0x820B732C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b733c
	if (ctx.cr6.eq) goto loc_820B733C;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b7360
	goto loc_820B7360;
loc_820B733C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b7360
	goto loc_820B7360;
loc_820B7344:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b7370
	if (!ctx.cr6.eq) goto loc_820B7370;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b73c0
	if (ctx.cr6.eq) goto loc_820B73C0;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820B7360:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b7390
	if (ctx.cr6.eq) goto loc_820B7390;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820b7390
	goto loc_820B7390;
loc_820B7370:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b73c0
	if (ctx.cr6.eq) goto loc_820B73C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B738C;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820B7390:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b73c0
	if (ctx.cr6.eq) goto loc_820B73C0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820b73b0
	if (!ctx.cr6.eq) goto loc_820B73B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820B73AC;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820B73B0:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r10,-17184
	ctx.r9.s64 = ctx.r10.s64 + -17184;
	// stw r11,284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 284, ctx.r11.u32);
loc_820B73C0:
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

__attribute__((alias("__imp__sub_820B73D8"))) PPC_WEAK_FUNC(sub_820B73D8);
PPC_FUNC_IMPL(__imp__sub_820B73D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-17184
	ctx.r10.s64 = ctx.r11.s64 + -17184;
	// lwz r3,284(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B73E8"))) PPC_WEAK_FUNC(sub_820B73E8);
PPC_FUNC_IMPL(__imp__sub_820B73E8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r7,r9,-17184
	ctx.r7.s64 = ctx.r9.s64 + -17184;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r11,1
	ctx.r11.s64 = 1;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,280(r7)
	PPC_STORE_U32(ctx.r7.u32 + 280, ctx.r11.u32);
	// stw r10,276(r7)
	PPC_STORE_U32(ctx.r7.u32 + 276, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7414"))) PPC_WEAK_FUNC(sub_820B7414);
PPC_FUNC_IMPL(__imp__sub_820B7414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7418"))) PPC_WEAK_FUNC(sub_820B7418);
PPC_FUNC_IMPL(__imp__sub_820B7418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-17184
	ctx.r10.s64 = ctx.r11.s64 + -17184;
	// stw r3,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7428"))) PPC_WEAK_FUNC(sub_820B7428);
PPC_FUNC_IMPL(__imp__sub_820B7428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-17184
	ctx.r10.s64 = ctx.r11.s64 + -17184;
	// lwz r3,276(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7438"))) PPC_WEAK_FUNC(sub_820B7438);
PPC_FUNC_IMPL(__imp__sub_820B7438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-17184
	ctx.r10.s64 = ctx.r11.s64 + -17184;
	// lwz r3,280(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7448"))) PPC_WEAK_FUNC(sub_820B7448);
PPC_FUNC_IMPL(__imp__sub_820B7448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-17184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7454"))) PPC_WEAK_FUNC(sub_820B7454);
PPC_FUNC_IMPL(__imp__sub_820B7454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7458"))) PPC_WEAK_FUNC(sub_820B7458);
PPC_FUNC_IMPL(__imp__sub_820B7458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7484
	if (!ctx.cr6.lt) goto loc_820B7484;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820B7484:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B748C"))) PPC_WEAK_FUNC(sub_820B748C);
PPC_FUNC_IMPL(__imp__sub_820B748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7490"))) PPC_WEAK_FUNC(sub_820B7490);
PPC_FUNC_IMPL(__imp__sub_820B7490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stw r9,2360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2360, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,2356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2360, ctx.r10.u32);
	// stw r10,2356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2356, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B74EC"))) PPC_WEAK_FUNC(sub_820B74EC);
PPC_FUNC_IMPL(__imp__sub_820B74EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B74F0"))) PPC_WEAK_FUNC(sub_820B74F0);
PPC_FUNC_IMPL(__imp__sub_820B74F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stw r9,2360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2360, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,2356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,2360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2360, ctx.r10.u32);
	// stw r9,2356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2356, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7550"))) PPC_WEAK_FUNC(sub_820B7550);
PPC_FUNC_IMPL(__imp__sub_820B7550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7598
	if (!ctx.cr6.lt) goto loc_820B7598;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7598
	if (ctx.cr6.eq) goto loc_820B7598;
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b7598
	if (ctx.cr6.eq) goto loc_820B7598;
	// lbz r11,2448(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2448);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_820B7598:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B75A0"))) PPC_WEAK_FUNC(sub_820B75A0);
PPC_FUNC_IMPL(__imp__sub_820B75A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b75d4
	if (!ctx.cr6.lt) goto loc_820B75D4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b75d4
	if (ctx.cr6.eq) goto loc_820B75D4;
	// lwz r11,2352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
loc_820B75D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B75DC"))) PPC_WEAK_FUNC(sub_820B75DC);
PPC_FUNC_IMPL(__imp__sub_820B75DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B75E0"))) PPC_WEAK_FUNC(sub_820B75E0);
PPC_FUNC_IMPL(__imp__sub_820B75E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7610
	if (!ctx.cr6.lt) goto loc_820B7610;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7610
	if (ctx.cr6.eq) goto loc_820B7610;
	// lwz r3,2356(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2356);
	// blr 
	return;
loc_820B7610:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

