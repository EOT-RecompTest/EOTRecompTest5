#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820C3348"))) PPC_WEAK_FUNC(sub_820C3348);
PPC_FUNC_IMPL(__imp__sub_820C3348) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7008
	ctx.lr = 0x820C3368;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c33a0
	if (ctx.cr6.eq) goto loc_820C33A0;
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// stfs f31,280(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r30,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, ctx.r30.u8);
	// beq cr6,0x820c33a0
	if (ctx.cr6.eq) goto loc_820C33A0;
loc_820C3388:
	// stb r30,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c6fb0
	ctx.lr = 0x820C3394;
	sub_820C6FB0(ctx, base);
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c3388
	if (!ctx.cr6.eq) goto loc_820C3388;
loc_820C33A0:
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

__attribute__((alias("__imp__sub_820C33BC"))) PPC_WEAK_FUNC(sub_820C33BC);
PPC_FUNC_IMPL(__imp__sub_820C33BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C33C0"))) PPC_WEAK_FUNC(sub_820C33C0);
PPC_FUNC_IMPL(__imp__sub_820C33C0) {
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
	ctx.lr = 0x820C33D8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c33f4
	if (!ctx.cr6.eq) goto loc_820C33F4;
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
loc_820C33F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c3444
	if (ctx.cr6.eq) goto loc_820C3444;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c3414
	if (ctx.cr6.eq) goto loc_820C3414;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820c3444
	goto loc_820C3444;
loc_820C3414:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c342c
	if (ctx.cr6.eq) goto loc_820C342C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820c3444
	goto loc_820C3444;
loc_820C342C:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_820C3444:
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
}

__attribute__((alias("__imp__sub_820C345C"))) PPC_WEAK_FUNC(sub_820C345C);
PPC_FUNC_IMPL(__imp__sub_820C345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3460"))) PPC_WEAK_FUNC(sub_820C3460);
PPC_FUNC_IMPL(__imp__sub_820C3460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C3468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C347C;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c348c
	if (!ctx.cr6.eq) goto loc_820C348C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820C348C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c34a4
	if (ctx.cr6.eq) goto loc_820C34A4;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_820C34A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c34bc
	if (ctx.cr6.eq) goto loc_820C34BC;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
loc_820C34BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c34d4
	if (ctx.cr6.eq) goto loc_820C34D4;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r9.u8);
loc_820C34D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C34E0"))) PPC_WEAK_FUNC(sub_820C34E0);
PPC_FUNC_IMPL(__imp__sub_820C34E0) {
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
	ctx.lr = 0x820C34F0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c350c
	if (!ctx.cr6.eq) goto loc_820C350C;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C350C:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c352c
	if (ctx.cr6.eq) goto loc_820C352C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C352C:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c354c
	if (ctx.cr6.eq) goto loc_820C354C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C354C:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
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
}

__attribute__((alias("__imp__sub_820C3568"))) PPC_WEAK_FUNC(sub_820C3568);
PPC_FUNC_IMPL(__imp__sub_820C3568) {
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
	// bl 0x820c35b8
	ctx.lr = 0x820C35A4;
	sub_820C35B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C35B4"))) PPC_WEAK_FUNC(sub_820C35B4);
PPC_FUNC_IMPL(__imp__sub_820C35B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C35B8"))) PPC_WEAK_FUNC(sub_820C35B8);
PPC_FUNC_IMPL(__imp__sub_820C35B8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C35D8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3614
	if (ctx.cr6.eq) goto loc_820C3614;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820c3614
	if (ctx.cr6.eq) goto loc_820C3614;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c35fc
	if (!ctx.cr6.eq) goto loc_820C35FC;
	// bl 0x821833b0
	ctx.lr = 0x820C35F8;
	sub_821833B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C35FC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8217f468
	ctx.lr = 0x820C3610;
	sub_8217F468(ctx, base);
	// b 0x820c3618
	goto loc_820C3618;
loc_820C3614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C3618:
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

__attribute__((alias("__imp__sub_820C3630"))) PPC_WEAK_FUNC(sub_820C3630);
PPC_FUNC_IMPL(__imp__sub_820C3630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820C3638;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C364C;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3718
	if (ctx.cr6.eq) goto loc_820C3718;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x820c3718
	if (ctx.cr6.eq) goto loc_820C3718;
	// lwz r28,68(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820c3670
	if (!ctx.cr6.eq) goto loc_820C3670;
	// bl 0x821833b0
	ctx.lr = 0x820C366C;
	sub_821833B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820C3670:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C367C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c3688
	if (!ctx.cr6.eq) goto loc_820C3688;
	// bl 0x821b3000
	ctx.lr = 0x820C3688;
	sub_821B3000(ctx, base);
loc_820C3688:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820c36b8
	if (!ctx.cr6.gt) goto loc_820C36B8;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820C36B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82181480
	ctx.lr = 0x820C36EC;
	sub_82181480(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217e6c0
	ctx.lr = 0x820C36FC;
	sub_8217E6C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082c20
	ctx.lr = 0x820C370C;
	sub_82082C20(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820C3718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3724"))) PPC_WEAK_FUNC(sub_820C3724);
PPC_FUNC_IMPL(__imp__sub_820C3724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3728"))) PPC_WEAK_FUNC(sub_820C3728);
PPC_FUNC_IMPL(__imp__sub_820C3728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820c3630
	ctx.lr = 0x820C3760;
	sub_820C3630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3770"))) PPC_WEAK_FUNC(sub_820C3770);
PPC_FUNC_IMPL(__imp__sub_820C3770) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c3630
	sub_820C3630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3774"))) PPC_WEAK_FUNC(sub_820C3774);
PPC_FUNC_IMPL(__imp__sub_820C3774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3778"))) PPC_WEAK_FUNC(sub_820C3778);
PPC_FUNC_IMPL(__imp__sub_820C3778) {
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
	// bl 0x820c37c8
	ctx.lr = 0x820C37B4;
	sub_820C37C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C37C4"))) PPC_WEAK_FUNC(sub_820C37C4);
PPC_FUNC_IMPL(__imp__sub_820C37C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C37C8"))) PPC_WEAK_FUNC(sub_820C37C8);
PPC_FUNC_IMPL(__imp__sub_820C37C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C37D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C37E0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c38a4
	if (ctx.cr6.eq) goto loc_820C38A4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820c38a4
	if (ctx.cr6.eq) goto loc_820C38A4;
	// lwz r28,68(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820c3804
	if (!ctx.cr6.eq) goto loc_820C3804;
	// bl 0x821833b0
	ctx.lr = 0x820C3800;
	sub_821833B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820C3804:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C3810;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c381c
	if (!ctx.cr6.eq) goto loc_820C381C;
	// bl 0x821b3000
	ctx.lr = 0x820C381C;
	sub_821B3000(ctx, base);
loc_820C381C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820c384c
	if (!ctx.cr6.gt) goto loc_820C384C;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_820C384C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// bl 0x82181608
	ctx.lr = 0x820C3878;
	sub_82181608(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217e6c0
	ctx.lr = 0x820C3888;
	sub_8217E6C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082c20
	ctx.lr = 0x820C3898;
	sub_82082C20(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820C38A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C38B0"))) PPC_WEAK_FUNC(sub_820C38B0);
PPC_FUNC_IMPL(__imp__sub_820C38B0) {
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
	ctx.lr = 0x820C38C8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c38f0
	if (ctx.cr6.eq) goto loc_820C38F0;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c38e4
	if (!ctx.cr6.eq) goto loc_820C38E4;
	// bl 0x821833b0
	ctx.lr = 0x820C38E0;
	sub_821833B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C38E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8217e6c0
	ctx.lr = 0x820C38F0;
	sub_8217E6C0(ctx, base);
loc_820C38F0:
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

__attribute__((alias("__imp__sub_820C3904"))) PPC_WEAK_FUNC(sub_820C3904);
PPC_FUNC_IMPL(__imp__sub_820C3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3908"))) PPC_WEAK_FUNC(sub_820C3908);
PPC_FUNC_IMPL(__imp__sub_820C3908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C3910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C3920;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c396c
	if (ctx.cr6.eq) goto loc_820C396C;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c3944
	if (!ctx.cr6.eq) goto loc_820C3944;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r31,68(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C3944:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8233d240
	ctx.lr = 0x820C394C;
	sub_8233D240(ctx, base);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820c395c
	if (ctx.cr6.lt) goto loc_820C395C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820C395C:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820C396C;
	sub_8233E4E0(ctx, base);
loc_820C396C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3974"))) PPC_WEAK_FUNC(sub_820C3974);
PPC_FUNC_IMPL(__imp__sub_820C3974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3978"))) PPC_WEAK_FUNC(sub_820C3978);
PPC_FUNC_IMPL(__imp__sub_820C3978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C3980;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C3990;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3a70
	if (ctx.cr6.eq) goto loc_820C3A70;
	// lwz r28,68(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820c39ac
	if (!ctx.cr6.eq) goto loc_820C39AC;
	// bl 0x821833b0
	ctx.lr = 0x820C39A8;
	sub_821833B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820C39AC:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C39B8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c39c4
	if (!ctx.cr6.eq) goto loc_820C39C4;
	// bl 0x821b3000
	ctx.lr = 0x820C39C4;
	sub_821B3000(ctx, base);
loc_820C39C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// lis r26,-13569
	ctx.r26.s64 = -889257984;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820c39f4
	if (!ctx.cr6.gt) goto loc_820C39F4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r26)
	PPC_STORE_U32(ctx.r26.u32 + -13570, ctx.r10.u32);
loc_820C39F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82181690
	ctx.lr = 0x820C3A1C;
	sub_82181690(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217e6c0
	ctx.lr = 0x820C3A28;
	sub_8217E6C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c3a70
	if (ctx.cr6.eq) goto loc_820C3A70;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// bge cr6,0x820c3a48
	if (!ctx.cr6.lt) goto loc_820C3A48;
	// stw r9,-13570(r26)
	PPC_STORE_U32(ctx.r26.u32 + -13570, ctx.r9.u32);
loc_820C3A48:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820c3a64
	if (ctx.cr6.eq) goto loc_820C3A64;
	// stw r9,-13570(r26)
	PPC_STORE_U32(ctx.r26.u32 + -13570, ctx.r9.u32);
loc_820C3A64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_820C3A70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3A78"))) PPC_WEAK_FUNC(sub_820C3A78);
PPC_FUNC_IMPL(__imp__sub_820C3A78) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C3A90;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3ab4
	if (ctx.cr6.eq) goto loc_820C3AB4;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3aac
	if (!ctx.cr6.eq) goto loc_820C3AAC;
	// bl 0x821833b0
	ctx.lr = 0x820C3AA8;
	sub_821833B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C3AAC:
	// stfs f31,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_820C3AB4:
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

__attribute__((alias("__imp__sub_820C3AC8"))) PPC_WEAK_FUNC(sub_820C3AC8);
PPC_FUNC_IMPL(__imp__sub_820C3AC8) {
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
	ctx.lr = 0x820C3AE0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3b20
	if (ctx.cr6.eq) goto loc_820C3B20;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3afc
	if (!ctx.cr6.eq) goto loc_820C3AFC;
	// bl 0x821833b0
	ctx.lr = 0x820C3AF8;
	sub_821833B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C3AFC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
loc_820C3B20:
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

__attribute__((alias("__imp__sub_820C3B34"))) PPC_WEAK_FUNC(sub_820C3B34);
PPC_FUNC_IMPL(__imp__sub_820C3B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3B38"))) PPC_WEAK_FUNC(sub_820C3B38);
PPC_FUNC_IMPL(__imp__sub_820C3B38) {
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
	ctx.lr = 0x820C3B50;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3b98
	if (ctx.cr6.eq) goto loc_820C3B98;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3b74
	if (!ctx.cr6.eq) goto loc_820C3B74;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C3B74:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
loc_820C3B98:
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

__attribute__((alias("__imp__sub_820C3BAC"))) PPC_WEAK_FUNC(sub_820C3BAC);
PPC_FUNC_IMPL(__imp__sub_820C3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3BB0"))) PPC_WEAK_FUNC(sub_820C3BB0);
PPC_FUNC_IMPL(__imp__sub_820C3BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C3BB8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820c7008
	ctx.lr = 0x820C3BC4;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c3bdc
	if (!ctx.cr6.eq) goto loc_820C3BDC;
loc_820C3BCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820C3BDC:
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c3bf8
	if (!ctx.cr6.eq) goto loc_820C3BF8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r31,68(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C3BF8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c3bcc
	if (ctx.cr6.eq) goto loc_820C3BCC;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x821822d8
	ctx.lr = 0x820C3C1C;
	sub_821822D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// bl 0x8217eb10
	ctx.lr = 0x820C3C34;
	sub_8217EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3c50
	if (!ctx.cr6.eq) goto loc_820C3C50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820C3C50:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8217fcd0
	ctx.lr = 0x820C3C60;
	sub_8217FCD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820C3C6C:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820c3c90
	if (!ctx.cr6.eq) goto loc_820C3C90;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c3c90
	if (ctx.cr6.eq) goto loc_820C3C90;
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
loc_820C3C90:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217ffc0
	ctx.lr = 0x820C3CBC;
	sub_8217FFC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3ce0
	if (ctx.cr6.eq) goto loc_820C3CE0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820c3cd4
	if (ctx.cr6.eq) goto loc_820C3CD4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_820C3CD4:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x820c3c6c
	goto loc_820C3C6C;
loc_820C3CE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3CF0"))) PPC_WEAK_FUNC(sub_820C3CF0);
PPC_FUNC_IMPL(__imp__sub_820C3CF0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C3D10;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3d34
	if (ctx.cr6.eq) goto loc_820C3D34;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3d2c
	if (!ctx.cr6.eq) goto loc_820C3D2C;
	// bl 0x821833b0
	ctx.lr = 0x820C3D28;
	sub_821833B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C3D2C:
	// stw r31,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r31.u32);
	// stw r30,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r30.u32);
loc_820C3D34:
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

__attribute__((alias("__imp__sub_820C3D4C"))) PPC_WEAK_FUNC(sub_820C3D4C);
PPC_FUNC_IMPL(__imp__sub_820C3D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3D50"))) PPC_WEAK_FUNC(sub_820C3D50);
PPC_FUNC_IMPL(__imp__sub_820C3D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C3D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C3D68;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3db8
	if (ctx.cr6.eq) goto loc_820C3DB8;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c3d84
	if (!ctx.cr6.eq) goto loc_820C3D84;
	// bl 0x821833b0
	ctx.lr = 0x820C3D80;
	sub_821833B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820C3D84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ac088
	ctx.lr = 0x820C3D8C;
	sub_820AC088(ctx, base);
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r3,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c6e50
	ctx.lr = 0x820C3DB8;
	sub_820C6E50(ctx, base);
loc_820C3DB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3DC0"))) PPC_WEAK_FUNC(sub_820C3DC0);
PPC_FUNC_IMPL(__imp__sub_820C3DC0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C3DE0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3ec0
	if (ctx.cr6.eq) goto loc_820C3EC0;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3e04
	if (!ctx.cr6.eq) goto loc_820C3E04;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C3E04:
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f11,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsqrts f9,f13
	ctx.f9.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsqrts f8,f11
	ctx.f8.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x820ac088
	ctx.lr = 0x820C3E44;
	sub_820AC088(ctx, base);
	// rlwinm r6,r3,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r5,r3,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r4,r3,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f7
	ctx.f3.f64 = double(ctx.f7.s64);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// fcfid f1,f5
	ctx.f1.f64 = double(ctx.f5.s64);
	// fcfid f13,f4
	ctx.f13.f64 = double(ctx.f4.s64);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// frsp f11,f2
	ctx.f11.f64 = double(float(ctx.f2.f64));
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_820C3EC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_820C3ED8"))) PPC_WEAK_FUNC(sub_820C3ED8);
PPC_FUNC_IMPL(__imp__sub_820C3ED8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C3EF8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3f58
	if (ctx.cr6.eq) goto loc_820C3F58;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3f14
	if (!ctx.cr6.eq) goto loc_820C3F14;
	// bl 0x82183258
	ctx.lr = 0x820C3F10;
	sub_82183258(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C3F14:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// addi r31,r11,44
	ctx.r31.s64 = ctx.r11.s64 + 44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c3f28
	if (!ctx.cr6.eq) goto loc_820C3F28;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_820C3F28:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c3f38
	if (ctx.cr6.eq) goto loc_820C3F38;
	// bl 0x82172d60
	ctx.lr = 0x820C3F38;
	sub_82172D60(ctx, base);
loc_820C3F38:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820c3f4c
	if (!ctx.cr6.eq) goto loc_820C3F4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820c3f58
	goto loc_820C3F58;
loc_820C3F4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82087078
	ctx.lr = 0x820C3F54;
	sub_82087078(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_820C3F58:
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

__attribute__((alias("__imp__sub_820C3F70"))) PPC_WEAK_FUNC(sub_820C3F70);
PPC_FUNC_IMPL(__imp__sub_820C3F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820C3F78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C3F94;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4028
	if (ctx.cr6.eq) goto loc_820C4028;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3fb0
	if (!ctx.cr6.eq) goto loc_820C3FB0;
	// bl 0x82183258
	ctx.lr = 0x820C3FAC;
	sub_82183258(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C3FB0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c3fc4
	if (ctx.cr6.eq) goto loc_820C3FC4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x820c3fc8
	goto loc_820C3FC8;
loc_820C3FC4:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_820C3FC8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c3fe0
	if (ctx.cr6.eq) goto loc_820C3FE0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_820C3FE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c3ff8
	if (ctx.cr6.eq) goto loc_820C3FF8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_820C3FF8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820c4010
	if (ctx.cr6.eq) goto loc_820C4010;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
loc_820C4010:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820c4028
	if (ctx.cr6.eq) goto loc_820C4028;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_820C4028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C4030"))) PPC_WEAK_FUNC(sub_820C4030);
PPC_FUNC_IMPL(__imp__sub_820C4030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820C4038;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C4054;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c40f0
	if (ctx.cr6.eq) goto loc_820C40F0;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4078
	if (!ctx.cr6.eq) goto loc_820C4078;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_820C4078:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c408c
	if (ctx.cr6.eq) goto loc_820C408C;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x820c4090
	goto loc_820C4090;
loc_820C408C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_820C4090:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c40a8
	if (ctx.cr6.eq) goto loc_820C40A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_820C40A8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c40c0
	if (ctx.cr6.eq) goto loc_820C40C0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
loc_820C40C0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820c40d8
	if (ctx.cr6.eq) goto loc_820C40D8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
loc_820C40D8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820c40f0
	if (ctx.cr6.eq) goto loc_820C40F0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
loc_820C40F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C40F8"))) PPC_WEAK_FUNC(sub_820C40F8);
PPC_FUNC_IMPL(__imp__sub_820C40F8) {
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
	ctx.lr = 0x820C4110;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4148
	if (ctx.cr6.eq) goto loc_820C4148;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c412c
	if (!ctx.cr6.eq) goto loc_820C412C;
	// bl 0x82183258
	ctx.lr = 0x820C4128;
	sub_82183258(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C412C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// bne cr6,0x820c4144
	if (!ctx.cr6.eq) goto loc_820C4144;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_820C4144:
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
loc_820C4148:
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

__attribute__((alias("__imp__sub_820C415C"))) PPC_WEAK_FUNC(sub_820C415C);
PPC_FUNC_IMPL(__imp__sub_820C415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4160"))) PPC_WEAK_FUNC(sub_820C4160);
PPC_FUNC_IMPL(__imp__sub_820C4160) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C4180;
	sub_820C7008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c41ac
	if (ctx.cr6.eq) goto loc_820C41AC;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c41a0
	if (!ctx.cr6.eq) goto loc_820C41A0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82183258
	ctx.lr = 0x820C41A0;
	sub_82183258(ctx, base);
loc_820C41A0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8217bda0
	ctx.lr = 0x820C41AC;
	sub_8217BDA0(ctx, base);
loc_820C41AC:
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

__attribute__((alias("__imp__sub_820C41C4"))) PPC_WEAK_FUNC(sub_820C41C4);
PPC_FUNC_IMPL(__imp__sub_820C41C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C41C8"))) PPC_WEAK_FUNC(sub_820C41C8);
PPC_FUNC_IMPL(__imp__sub_820C41C8) {
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
	ctx.lr = 0x820C41D8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c41f0
	if (!ctx.cr6.eq) goto loc_820C41F0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C41F0:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c420c
	if (!ctx.cr6.eq) goto loc_820C420C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_820C420C:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4220"))) PPC_WEAK_FUNC(sub_820C4220);
PPC_FUNC_IMPL(__imp__sub_820C4220) {
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
	ctx.lr = 0x820C4238;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4288
	if (ctx.cr6.eq) goto loc_820C4288;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c425c
	if (!ctx.cr6.eq) goto loc_820C425C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_820C425C:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c4288
	if (!ctx.cr6.lt) goto loc_820C4288;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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
loc_820C4288:
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

__attribute__((alias("__imp__sub_820C42A0"))) PPC_WEAK_FUNC(sub_820C42A0);
PPC_FUNC_IMPL(__imp__sub_820C42A0) {
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
	ctx.lr = 0x820C42B0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c42c8
	if (!ctx.cr6.eq) goto loc_820C42C8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C42C8:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c42e4
	if (!ctx.cr6.eq) goto loc_820C42E4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_820C42E4:
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C42F8"))) PPC_WEAK_FUNC(sub_820C42F8);
PPC_FUNC_IMPL(__imp__sub_820C42F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C4300;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C430C;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4378
	if (ctx.cr6.eq) goto loc_820C4378;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4328
	if (!ctx.cr6.eq) goto loc_820C4328;
	// bl 0x82183258
	ctx.lr = 0x820C4324;
	sub_82183258(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C4328:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c4378
	if (!ctx.cr6.lt) goto loc_820C4378;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4378
	if (ctx.cr6.eq) goto loc_820C4378;
	// addi r11,r9,80
	ctx.r11.s64 = ctx.r9.s64 + 80;
loc_820C4358:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c4384
	if (ctx.cr6.eq) goto loc_820C4384;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820c4358
	if (ctx.cr6.lt) goto loc_820C4358;
loc_820C4378:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820C4384:
	// mulli r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 * 84;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820C439C;
	sub_8233EAF0(ctx, base);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r11,r29,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF000000;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// or r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stw r9,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C43B8"))) PPC_WEAK_FUNC(sub_820C43B8);
PPC_FUNC_IMPL(__imp__sub_820C43B8) {
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
	ctx.lr = 0x820C43D0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4418
	if (ctx.cr6.eq) goto loc_820C4418;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c43ec
	if (!ctx.cr6.eq) goto loc_820C43EC;
	// bl 0x82183258
	ctx.lr = 0x820C43E8;
	sub_82183258(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C43EC:
	// srawi r10,r31,24
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 24;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// clrlwi r8,r31,8
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFFFF;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r10,r8,84
	ctx.r10.s64 = ctx.r8.s64 * 84;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
loc_820C4418:
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

__attribute__((alias("__imp__sub_820C442C"))) PPC_WEAK_FUNC(sub_820C442C);
PPC_FUNC_IMPL(__imp__sub_820C442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4430"))) PPC_WEAK_FUNC(sub_820C4430);
PPC_FUNC_IMPL(__imp__sub_820C4430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C4438;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C4448;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c44d8
	if (ctx.cr6.eq) goto loc_820C44D8;
	// lwz r29,72(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820c446c
	if (!ctx.cr6.eq) goto loc_820C446C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r29,72(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_820C446C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c44d8
	if (ctx.cr6.eq) goto loc_820C44D8;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_820C4478:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820c44c8
	if (!ctx.cr6.lt) goto loc_820C44C8;
	// lwz r9,96(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820c44c8
	if (!ctx.cr6.lt) goto loc_820C44C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c44c8
	if (ctx.cr6.eq) goto loc_820C44C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820c6be0
	ctx.lr = 0x820C44C4;
	sub_820C6BE0(ctx, base);
	// b 0x820c44cc
	goto loc_820C44CC;
loc_820C44C8:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_820C44CC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// bne 0x820c4478
	if (!ctx.cr0.eq) goto loc_820C4478;
loc_820C44D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C44E0"))) PPC_WEAK_FUNC(sub_820C44E0);
PPC_FUNC_IMPL(__imp__sub_820C44E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C44E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C44F8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4574
	if (ctx.cr6.eq) goto loc_820C4574;
	// lwz r30,72(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820c4514
	if (!ctx.cr6.eq) goto loc_820C4514;
	// bl 0x82183258
	ctx.lr = 0x820C4510;
	sub_82183258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C4514:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c4574
	if (ctx.cr6.eq) goto loc_820C4574;
loc_820C451C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820c4568
	if (!ctx.cr6.lt) goto loc_820C4568;
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820c4568
	if (!ctx.cr6.lt) goto loc_820C4568;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4568
	if (ctx.cr6.eq) goto loc_820C4568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820c6810
	ctx.lr = 0x820C4568;
	sub_820C6810(ctx, base);
loc_820C4568:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,136
	ctx.r29.s64 = ctx.r29.s64 + 136;
	// bne 0x820c451c
	if (!ctx.cr0.eq) goto loc_820C451C;
loc_820C4574:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C457C"))) PPC_WEAK_FUNC(sub_820C457C);
PPC_FUNC_IMPL(__imp__sub_820C457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4580"))) PPC_WEAK_FUNC(sub_820C4580);
PPC_FUNC_IMPL(__imp__sub_820C4580) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C45A0;
	sub_820C7008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c45cc
	if (ctx.cr6.eq) goto loc_820C45CC;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c45c0
	if (!ctx.cr6.eq) goto loc_820C45C0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821832e0
	ctx.lr = 0x820C45C0;
	sub_821832E0(ctx, base);
loc_820C45C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8217c458
	ctx.lr = 0x820C45CC;
	sub_8217C458(ctx, base);
loc_820C45CC:
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

__attribute__((alias("__imp__sub_820C45E4"))) PPC_WEAK_FUNC(sub_820C45E4);
PPC_FUNC_IMPL(__imp__sub_820C45E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C45E8"))) PPC_WEAK_FUNC(sub_820C45E8);
PPC_FUNC_IMPL(__imp__sub_820C45E8) {
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
	ctx.lr = 0x820C45F8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4614
	if (!ctx.cr6.eq) goto loc_820C4614;
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
loc_820C4614:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4630
	if (!ctx.cr6.eq) goto loc_820C4630;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_820C4630:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4644"))) PPC_WEAK_FUNC(sub_820C4644);
PPC_FUNC_IMPL(__imp__sub_820C4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4648"))) PPC_WEAK_FUNC(sub_820C4648);
PPC_FUNC_IMPL(__imp__sub_820C4648) {
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
	ctx.lr = 0x820C4658;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4680
	if (ctx.cr6.eq) goto loc_820C4680;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c467c
	if (!ctx.cr6.eq) goto loc_820C467C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_820C467C:
	// bl 0x8217c560
	ctx.lr = 0x820C4680;
	sub_8217C560(ctx, base);
loc_820C4680:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4690"))) PPC_WEAK_FUNC(sub_820C4690);
PPC_FUNC_IMPL(__imp__sub_820C4690) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C46A8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c46c8
	if (ctx.cr6.eq) goto loc_820C46C8;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c46c4
	if (!ctx.cr6.eq) goto loc_820C46C4;
	// bl 0x821832e0
	ctx.lr = 0x820C46C0;
	sub_821832E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C46C4:
	// stfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
loc_820C46C8:
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

__attribute__((alias("__imp__sub_820C46DC"))) PPC_WEAK_FUNC(sub_820C46DC);
PPC_FUNC_IMPL(__imp__sub_820C46DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C46E0"))) PPC_WEAK_FUNC(sub_820C46E0);
PPC_FUNC_IMPL(__imp__sub_820C46E0) {
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
	ctx.lr = 0x820C46F0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4714
	if (!ctx.cr6.eq) goto loc_820C4714;
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
loc_820C4714:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4730
	if (!ctx.cr6.eq) goto loc_820C4730;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_820C4730:
	// lfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
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

__attribute__((alias("__imp__sub_820C4744"))) PPC_WEAK_FUNC(sub_820C4744);
PPC_FUNC_IMPL(__imp__sub_820C4744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4748"))) PPC_WEAK_FUNC(sub_820C4748);
PPC_FUNC_IMPL(__imp__sub_820C4748) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7008
	ctx.lr = 0x820C4760;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c47a0
	if (ctx.cr6.eq) goto loc_820C47A0;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c477c
	if (!ctx.cr6.eq) goto loc_820C477C;
	// bl 0x821832e0
	ctx.lr = 0x820C4778;
	sub_821832E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C477C:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_820C47A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_820C47B4"))) PPC_WEAK_FUNC(sub_820C47B4);
PPC_FUNC_IMPL(__imp__sub_820C47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C47B8"))) PPC_WEAK_FUNC(sub_820C47B8);
PPC_FUNC_IMPL(__imp__sub_820C47B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820c7008
	ctx.lr = 0x820C47C8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c47ec
	if (!ctx.cr6.eq) goto loc_820C47EC;
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
	// blr 
	return;
loc_820C47EC:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4808
	if (!ctx.cr6.eq) goto loc_820C4808;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_820C4808:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4834"))) PPC_WEAK_FUNC(sub_820C4834);
PPC_FUNC_IMPL(__imp__sub_820C4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4838"))) PPC_WEAK_FUNC(sub_820C4838);
PPC_FUNC_IMPL(__imp__sub_820C4838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C4840;
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
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x820c4864
	if (!ctx.cr6.eq) goto loc_820C4864;
loc_820C4858:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820C4864:
	// bl 0x820ddca8
	ctx.lr = 0x820C4868;
	sub_820DDCA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r6,178(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 178);
	// bl 0x8217cfd8
	ctx.lr = 0x820C4884;
	sub_8217CFD8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4858
	if (ctx.cr6.eq) goto loc_820C4858;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C4898"))) PPC_WEAK_FUNC(sub_820C4898);
PPC_FUNC_IMPL(__imp__sub_820C4898) {
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
	ctx.lr = 0x820C48A8;
	sub_820C7008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c48d4
	if (ctx.cr6.eq) goto loc_820C48D4;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c48d4
	if (ctx.cr6.eq) goto loc_820C48D4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-26328
	ctx.r3.s64 = ctx.r11.s64 + -26328;
	// bl 0x8217d388
	ctx.lr = 0x820C48D4;
	sub_8217D388(ctx, base);
loc_820C48D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C48E4"))) PPC_WEAK_FUNC(sub_820C48E4);
PPC_FUNC_IMPL(__imp__sub_820C48E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C48E8"))) PPC_WEAK_FUNC(sub_820C48E8);
PPC_FUNC_IMPL(__imp__sub_820C48E8) {
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
	ctx.lr = 0x820C48F8;
	sub_820C7008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4918
	if (!ctx.cr6.eq) goto loc_820C4918;
loc_820C4904:
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
loc_820C4918:
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c4904
	if (ctx.cr6.eq) goto loc_820C4904;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r3,r10,-26328
	ctx.r3.s64 = ctx.r10.s64 + -26328;
	// bl 0x8217d508
	ctx.lr = 0x820C4934;
	sub_8217D508(ctx, base);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4948"))) PPC_WEAK_FUNC(sub_820C4948);
PPC_FUNC_IMPL(__imp__sub_820C4948) {
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
	ctx.lr = 0x820C4960;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4998
	if (ctx.cr6.eq) goto loc_820C4998;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c4998
	if (ctx.cr6.eq) goto loc_820C4998;
loc_820C4974:
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820c49b0
	if (ctx.cr6.eq) goto loc_820C49B0;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820c49b0
	if (ctx.cr6.eq) goto loc_820C49B0;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4974
	if (!ctx.cr6.eq) goto loc_820C4974;
loc_820C4998:
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
loc_820C49B0:
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
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

__attribute__((alias("__imp__sub_820C49C8"))) PPC_WEAK_FUNC(sub_820C49C8);
PPC_FUNC_IMPL(__imp__sub_820C49C8) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x820c49f0
	if (ctx.cr6.lt) goto loc_820C49F0;
loc_820C49DC:
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
loc_820C49F0:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8217da30
	ctx.lr = 0x820C4A08;
	sub_8217DA30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c49dc
	if (ctx.cr6.eq) goto loc_820C49DC;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4A24"))) PPC_WEAK_FUNC(sub_820C4A24);
PPC_FUNC_IMPL(__imp__sub_820C4A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4A28"))) PPC_WEAK_FUNC(sub_820C4A28);
PPC_FUNC_IMPL(__imp__sub_820C4A28) {
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
	ctx.lr = 0x820C4A38;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4a54
	if (!ctx.cr6.eq) goto loc_820C4A54;
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
loc_820C4A54:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c4a68
	if (ctx.cr6.eq) goto loc_820C4A68;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
loc_820C4A68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4A78"))) PPC_WEAK_FUNC(sub_820C4A78);
PPC_FUNC_IMPL(__imp__sub_820C4A78) {
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
	ctx.lr = 0x820C4A88;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4aa4
	if (!ctx.cr6.eq) goto loc_820C4AA4;
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
loc_820C4AA4:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c4ab8
	if (ctx.cr6.eq) goto loc_820C4AB8;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
loc_820C4AB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4AC8"))) PPC_WEAK_FUNC(sub_820C4AC8);
PPC_FUNC_IMPL(__imp__sub_820C4AC8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C4AE8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4b6c
	if (ctx.cr6.eq) goto loc_820C4B6C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4b0c
	if (!ctx.cr6.eq) goto loc_820C4B0C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C4B0C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f13,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x820c4b40
	if (ctx.cr6.eq) goto loc_820C4B40;
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820c4b3c
	if (!ctx.cr6.eq) goto loc_820C4B3C;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4b3c
	if (ctx.cr6.eq) goto loc_820C4B3C;
	// lfs f0,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
loc_820C4B3C:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_820C4B40:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c4b68
	if (ctx.cr6.eq) goto loc_820C4B68;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820c4b64
	if (!ctx.cr6.eq) goto loc_820C4B64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c4b64
	if (ctx.cr6.eq) goto loc_820C4B64;
	// lfs f0,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
loc_820C4B64:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820C4B68:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820C4B6C:
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

__attribute__((alias("__imp__sub_820C4B84"))) PPC_WEAK_FUNC(sub_820C4B84);
PPC_FUNC_IMPL(__imp__sub_820C4B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4B88"))) PPC_WEAK_FUNC(sub_820C4B88);
PPC_FUNC_IMPL(__imp__sub_820C4B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x820c7008
	ctx.lr = 0x820C4BA8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4bcc
	if (ctx.cr6.eq) goto loc_820C4BCC;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4bc4
	if (!ctx.cr6.eq) goto loc_820C4BC4;
	// bl 0x821833b0
	ctx.lr = 0x820C4BC0;
	sub_821833B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C4BC4:
	// stfs f31,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f30,44(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_820C4BCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4BE4"))) PPC_WEAK_FUNC(sub_820C4BE4);
PPC_FUNC_IMPL(__imp__sub_820C4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4BE8"))) PPC_WEAK_FUNC(sub_820C4BE8);
PPC_FUNC_IMPL(__imp__sub_820C4BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C4BF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82181928
	ctx.lr = 0x820C4C00;
	sub_82181928(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r30,r11,6392
	ctx.r30.s64 = ctx.r11.s64 + 6392;
	// bne cr6,0x820c4c3c
	if (!ctx.cr6.eq) goto loc_820C4C3C;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x820c4c60
	if (!ctx.cr6.lt) goto loc_820C4C60;
	// rlwinm r11,r31,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233d268
	ctx.lr = 0x820C4C3C;
	sub_8233D268(ctx, base);
loc_820C4C3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233d240
	ctx.lr = 0x820C4C44;
	sub_8233D240(ctx, base);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r31,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r30,16392
	ctx.r10.s64 = ctx.r30.s64 + 16392;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820C4C60;
	sub_8233E4E0(ctx, base);
loc_820C4C60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C4C68"))) PPC_WEAK_FUNC(sub_820C4C68);
PPC_FUNC_IMPL(__imp__sub_820C4C68) {
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
	ctx.lr = 0x820C4C80;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4ca8
	if (!ctx.cr6.eq) goto loc_820C4CA8;
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
loc_820C4CA8:
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4cc4
	if (!ctx.cr6.eq) goto loc_820C4CC4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C4CC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8217f098
	ctx.lr = 0x820C4CD0;
	sub_8217F098(ctx, base);
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

__attribute__((alias("__imp__sub_820C4CE4"))) PPC_WEAK_FUNC(sub_820C4CE4);
PPC_FUNC_IMPL(__imp__sub_820C4CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4CE8"))) PPC_WEAK_FUNC(sub_820C4CE8);
PPC_FUNC_IMPL(__imp__sub_820C4CE8) {
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
	ctx.lr = 0x820C4D00;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4d28
	if (!ctx.cr6.eq) goto loc_820C4D28;
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
loc_820C4D28:
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4d44
	if (!ctx.cr6.eq) goto loc_820C4D44;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C4D44:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8217f098
	ctx.lr = 0x820C4D50;
	sub_8217F098(ctx, base);
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

__attribute__((alias("__imp__sub_820C4D64"))) PPC_WEAK_FUNC(sub_820C4D64);
PPC_FUNC_IMPL(__imp__sub_820C4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4D68"))) PPC_WEAK_FUNC(sub_820C4D68);
PPC_FUNC_IMPL(__imp__sub_820C4D68) {
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
	ctx.lr = 0x820C4D80;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4da8
	if (!ctx.cr6.eq) goto loc_820C4DA8;
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
loc_820C4DA8:
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4dc4
	if (!ctx.cr6.eq) goto loc_820C4DC4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C4DC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8217f1d8
	ctx.lr = 0x820C4DCC;
	sub_8217F1D8(ctx, base);
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

__attribute__((alias("__imp__sub_820C4DE0"))) PPC_WEAK_FUNC(sub_820C4DE0);
PPC_FUNC_IMPL(__imp__sub_820C4DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820c7008
	ctx.lr = 0x820C4DF4;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4e1c
	if (!ctx.cr6.eq) goto loc_820C4E1C;
loc_820C4DFC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C4E1C:
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c4e38
	if (!ctx.cr6.eq) goto loc_820C4E38;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r31,68(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C4E38:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821822d8
	ctx.lr = 0x820C4E44;
	sub_821822D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// bl 0x8217eb10
	ctx.lr = 0x820C4E5C;
	sub_8217EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c4dfc
	if (ctx.cr6.eq) goto loc_820C4DFC;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8217fcd0
	ctx.lr = 0x820C4E78;
	sub_8217FCD0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4EA0"))) PPC_WEAK_FUNC(sub_820C4EA0);
PPC_FUNC_IMPL(__imp__sub_820C4EA0) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C4EBC;
	sub_820C7008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C4EC8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4ee4
	if (ctx.cr6.eq) goto loc_820C4EE4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c4ee4
	if (ctx.cr6.eq) goto loc_820C4EE4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82182a88
	ctx.lr = 0x820C4EE4;
	sub_82182A88(ctx, base);
loc_820C4EE4:
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

__attribute__((alias("__imp__sub_820C4EFC"))) PPC_WEAK_FUNC(sub_820C4EFC);
PPC_FUNC_IMPL(__imp__sub_820C4EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4F00"))) PPC_WEAK_FUNC(sub_820C4F00);
PPC_FUNC_IMPL(__imp__sub_820C4F00) {
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
	ctx.lr = 0x820C4F10;
	sub_820C7008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4f30
	if (ctx.cr6.eq) goto loc_820C4F30;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c4f30
	if (ctx.cr6.eq) goto loc_820C4F30;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821829f0
	ctx.lr = 0x820C4F30;
	sub_821829F0(ctx, base);
loc_820C4F30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4F40"))) PPC_WEAK_FUNC(sub_820C4F40);
PPC_FUNC_IMPL(__imp__sub_820C4F40) {
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
	ctx.lr = 0x820C4F58;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4f7c
	if (ctx.cr6.eq) goto loc_820C4F7C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 | 1;
	// bne cr6,0x820c4f78
	if (!ctx.cr6.eq) goto loc_820C4F78;
	// rlwinm r4,r11,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_820C4F78:
	// bl 0x821835e0
	ctx.lr = 0x820C4F7C;
	sub_821835E0(ctx, base);
loc_820C4F7C:
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

__attribute__((alias("__imp__sub_820C4F90"))) PPC_WEAK_FUNC(sub_820C4F90);
PPC_FUNC_IMPL(__imp__sub_820C4F90) {
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
	ctx.lr = 0x820C4FA0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4fb0
	if (ctx.cr6.eq) goto loc_820C4FB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821834a8
	ctx.lr = 0x820C4FB0;
	sub_821834A8(ctx, base);
loc_820C4FB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4FC0"))) PPC_WEAK_FUNC(sub_820C4FC0);
PPC_FUNC_IMPL(__imp__sub_820C4FC0) {
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
	ctx.lr = 0x820C4FD0;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4fe8
	if (!ctx.cr6.eq) goto loc_820C4FE8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C4FE8:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c5008
	if (!ctx.cr6.eq) goto loc_820C5008;
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
loc_820C5008:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// li r10,128
	ctx.r10.s64 = 128;
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
	ctx.lr = 0x820C502C;
	sub_82173FD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C503C"))) PPC_WEAK_FUNC(sub_820C503C);
PPC_FUNC_IMPL(__imp__sub_820C503C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5040"))) PPC_WEAK_FUNC(sub_820C5040);
PPC_FUNC_IMPL(__imp__sub_820C5040) {
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
	ctx.lr = 0x820C5050;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c505c
	if (ctx.cr6.eq) goto loc_820C505C;
	// bl 0x82183560
	ctx.lr = 0x820C505C;
	sub_82183560(ctx, base);
loc_820C505C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C506C"))) PPC_WEAK_FUNC(sub_820C506C);
PPC_FUNC_IMPL(__imp__sub_820C506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5070"))) PPC_WEAK_FUNC(sub_820C5070);
PPC_FUNC_IMPL(__imp__sub_820C5070) {
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
	ctx.lr = 0x820C5080;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c50b0
	if (ctx.cr6.eq) goto loc_820C50B0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// rlwinm r11,r11,0,31,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC01;
	// addi r10,r11,-1025
	ctx.r10.s64 = ctx.r11.s64 + -1025;
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
loc_820C50B0:
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

__attribute__((alias("__imp__sub_820C50C4"))) PPC_WEAK_FUNC(sub_820C50C4);
PPC_FUNC_IMPL(__imp__sub_820C50C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C50C8"))) PPC_WEAK_FUNC(sub_820C50C8);
PPC_FUNC_IMPL(__imp__sub_820C50C8) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,20
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 20;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c5114
	if (!ctx.cr6.eq) goto loc_820C5114;
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r9,r11,1168
	ctx.r9.s64 = ctx.r11.s64 + 1168;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_820C5114:
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820c5190
	if (!ctx.cr6.lt) goto loc_820C5190;
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,-29208
	ctx.r11.s64 = ctx.r8.s64 + -29208;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c5190
	if (ctx.cr6.eq) goto loc_820C5190;
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r7,r8,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820c5190
	if (!ctx.cr6.eq) goto loc_820C5190;
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820c5190
	if (!ctx.cr6.lt) goto loc_820C5190;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820c5190
	if (!ctx.cr6.lt) goto loc_820C5190;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
loc_820C5190:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5198"))) PPC_WEAK_FUNC(sub_820C5198);
PPC_FUNC_IMPL(__imp__sub_820C5198) {
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
	// srawi r11,r3,20
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 20;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c51e0
	if (!ctx.cr6.eq) goto loc_820C51E0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cc80
	ctx.lr = 0x820C51DC;
	sub_8208CC80(ctx, base);
	// b 0x820c5238
	goto loc_820C5238;
loc_820C51E0:
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820c5204
	if (!ctx.cr6.lt) goto loc_820C5204;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c520c
	if (!ctx.cr6.eq) goto loc_820C520C;
loc_820C5204:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c5258
	goto loc_820C5258;
loc_820C520C:
	// lwz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r8,r9,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c5204
	if (!ctx.cr6.eq) goto loc_820C5204;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821aaf28
	ctx.lr = 0x820C5238;
	sub_821AAF28(ctx, base);
loc_820C5238:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c5248
	if (ctx.cr6.eq) goto loc_820C5248;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_820C5248:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c5258
	if (ctx.cr6.eq) goto loc_820C5258;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820C5258:
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

__attribute__((alias("__imp__sub_820C5270"))) PPC_WEAK_FUNC(sub_820C5270);
PPC_FUNC_IMPL(__imp__sub_820C5270) {
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
	// bne cr6,0x820c52b0
	if (!ctx.cr6.eq) goto loc_820C52B0;
	// bl 0x820ddca8
	ctx.lr = 0x820C5298;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c52a8
	if (ctx.cr6.eq) goto loc_820C52A8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c52cc
	goto loc_820C52CC;
loc_820C52A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c52cc
	goto loc_820C52CC;
loc_820C52B0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c52dc
	if (!ctx.cr6.eq) goto loc_820C52DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c5318
	if (ctx.cr6.eq) goto loc_820C5318;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C52CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c52f8
	if (ctx.cr6.eq) goto loc_820C52F8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820c52f8
	goto loc_820C52F8;
loc_820C52DC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c5318
	if (ctx.cr6.eq) goto loc_820C5318;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C52F8;
	sub_820F3178(ctx, base);
loc_820C52F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5318
	if (ctx.cr6.eq) goto loc_820C5318;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,6392
	ctx.r8.s64 = ctx.r10.s64 + 6392;
	// ori r7,r9,32776
	ctx.r7.u64 = ctx.r9.u64 | 32776;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
loc_820C5318:
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

__attribute__((alias("__imp__sub_820C532C"))) PPC_WEAK_FUNC(sub_820C532C);
PPC_FUNC_IMPL(__imp__sub_820C532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5330"))) PPC_WEAK_FUNC(sub_820C5330);
PPC_FUNC_IMPL(__imp__sub_820C5330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C5338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C534C;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5388
	if (ctx.cr6.eq) goto loc_820C5388;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c5370
	if (!ctx.cr6.eq) goto loc_820C5370;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_820C5370:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8217c738
	ctx.lr = 0x820C5388;
	sub_8217C738(ctx, base);
loc_820C5388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5390"))) PPC_WEAK_FUNC(sub_820C5390);
PPC_FUNC_IMPL(__imp__sub_820C5390) {
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
	// bl 0x8233fa38
	ctx.lr = 0x820C53A8;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bl 0x820c7008
	ctx.lr = 0x820C53C8;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c53e0
	if (!ctx.cr6.eq) goto loc_820C53E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820c5418
	goto loc_820C5418;
loc_820C53E0:
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c53fc
	if (!ctx.cr6.eq) goto loc_820C53FC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C53FC:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8217f4f8
	ctx.lr = 0x820C5418;
	sub_8217F4F8(ctx, base);
loc_820C5418:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8233fa84
	ctx.lr = 0x820C5424;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_820C5438"))) PPC_WEAK_FUNC(sub_820C5438);
PPC_FUNC_IMPL(__imp__sub_820C5438) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820c5448
	if (!ctx.cr6.eq) goto loc_820C5448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820C5448:
	// b 0x820c66a8
	sub_820C66A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C544C"))) PPC_WEAK_FUNC(sub_820C544C);
PPC_FUNC_IMPL(__imp__sub_820C544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5450"))) PPC_WEAK_FUNC(sub_820C5450);
PPC_FUNC_IMPL(__imp__sub_820C5450) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820c5460
	if (!ctx.cr6.eq) goto loc_820C5460;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820C5460:
	// b 0x820c6608
	sub_820C6608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5464"))) PPC_WEAK_FUNC(sub_820C5464);
PPC_FUNC_IMPL(__imp__sub_820C5464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5468"))) PPC_WEAK_FUNC(sub_820C5468);
PPC_FUNC_IMPL(__imp__sub_820C5468) {
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
	ctx.lr = 0x820C5478;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c5494
	if (!ctx.cr6.eq) goto loc_820C5494;
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
loc_820C5494:
	// lwz r3,292(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C54A8"))) PPC_WEAK_FUNC(sub_820C54A8);
PPC_FUNC_IMPL(__imp__sub_820C54A8) {
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
	// bl 0x820c7008
	ctx.lr = 0x820C54C4;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5560
	if (ctx.cr6.eq) goto loc_820C5560;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c54e0
	if (!ctx.cr6.eq) goto loc_820C54E0;
	// bl 0x821833b0
	ctx.lr = 0x820C54DC;
	sub_821833B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820C54E0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820c54f0
	if (ctx.cr6.eq) goto loc_820C54F0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x820c54f8
	if (!ctx.cr6.eq) goto loc_820C54F8;
loc_820C54F0:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lwz r30,-9488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9488);
loc_820C54F8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x820c5510
	if (!ctx.cr6.eq) goto loc_820C5510;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c5560
	if (!ctx.cr6.eq) goto loc_820C5560;
loc_820C5510:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5520
	if (ctx.cr6.eq) goto loc_820C5520;
	// bl 0x82172d60
	ctx.lr = 0x820C5520;
	sub_82172D60(ctx, base);
loc_820C5520:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82087078
	ctx.lr = 0x820C552C;
	sub_82087078(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r31,84(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r30,269(r11)
	PPC_STORE_U8(ctx.r11.u32 + 269, ctx.r30.u8);
	// beq cr6,0x820c5560
	if (ctx.cr6.eq) goto loc_820C5560;
loc_820C5548:
	// stb r30,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c6fb0
	ctx.lr = 0x820C5554;
	sub_820C6FB0(ctx, base);
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c5548
	if (!ctx.cr6.eq) goto loc_820C5548;
loc_820C5560:
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

__attribute__((alias("__imp__sub_820C5578"))) PPC_WEAK_FUNC(sub_820C5578);
PPC_FUNC_IMPL(__imp__sub_820C5578) {
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
	ctx.lr = 0x820C5588;
	sub_820C7008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c55cc
	if (ctx.cr6.eq) goto loc_820C55CC;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c55ac
	if (!ctx.cr6.eq) goto loc_820C55AC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C55AC:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c55cc
	if (ctx.cr6.eq) goto loc_820C55CC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C55CC:
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

__attribute__((alias("__imp__sub_820C55E0"))) PPC_WEAK_FUNC(sub_820C55E0);
PPC_FUNC_IMPL(__imp__sub_820C55E0) {
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
	// bl 0x82087078
	ctx.lr = 0x820C55F8;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c560c
	if (ctx.cr6.eq) goto loc_820C560C;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// stw r31,-9488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9488, ctx.r31.u32);
	// bl 0x82172d60
	ctx.lr = 0x820C560C;
	sub_82172D60(ctx, base);
loc_820C560C:
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

__attribute__((alias("__imp__sub_820C5620"))) PPC_WEAK_FUNC(sub_820C5620);
PPC_FUNC_IMPL(__imp__sub_820C5620) {
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
	// bl 0x82087078
	ctx.lr = 0x820C5638;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5654
	if (ctx.cr6.eq) goto loc_820C5654;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82172d60
	ctx.lr = 0x820C5654;
	sub_82172D60(ctx, base);
loc_820C5654:
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

__attribute__((alias("__imp__sub_820C5668"))) PPC_WEAK_FUNC(sub_820C5668);
PPC_FUNC_IMPL(__imp__sub_820C5668) {
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
	// bl 0x82087078
	ctx.lr = 0x820C5680;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c569c
	if (ctx.cr6.eq) goto loc_820C569C;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82172d60
	ctx.lr = 0x820C569C;
	sub_82172D60(ctx, base);
loc_820C569C:
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

__attribute__((alias("__imp__sub_820C56B0"))) PPC_WEAK_FUNC(sub_820C56B0);
PPC_FUNC_IMPL(__imp__sub_820C56B0) {
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
	// bl 0x82087078
	ctx.lr = 0x820C56C8;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c56e4
	if (ctx.cr6.eq) goto loc_820C56E4;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82172d60
	ctx.lr = 0x820C56E4;
	sub_82172D60(ctx, base);
loc_820C56E4:
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

__attribute__((alias("__imp__sub_820C56F8"))) PPC_WEAK_FUNC(sub_820C56F8);
PPC_FUNC_IMPL(__imp__sub_820C56F8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82087078
	ctx.lr = 0x820C5710;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5790
	if (ctx.cr6.eq) goto loc_820C5790;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r6,120(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82172d60
	ctx.lr = 0x820C5790;
	sub_82172D60(ctx, base);
loc_820C5790:
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

__attribute__((alias("__imp__sub_820C57A4"))) PPC_WEAK_FUNC(sub_820C57A4);
PPC_FUNC_IMPL(__imp__sub_820C57A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C57A8"))) PPC_WEAK_FUNC(sub_820C57A8);
PPC_FUNC_IMPL(__imp__sub_820C57A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82087078
	ctx.lr = 0x820C57C0;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5840
	if (ctx.cr6.eq) goto loc_820C5840;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r3,92
	ctx.r9.s64 = ctx.r3.s64 + 92;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r6,104(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82172d60
	ctx.lr = 0x820C5840;
	sub_82172D60(ctx, base);
loc_820C5840:
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

__attribute__((alias("__imp__sub_820C5854"))) PPC_WEAK_FUNC(sub_820C5854);
PPC_FUNC_IMPL(__imp__sub_820C5854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5858"))) PPC_WEAK_FUNC(sub_820C5858);
PPC_FUNC_IMPL(__imp__sub_820C5858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820C5860;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C5878;
	sub_820C7008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c588c
	if (!ctx.cr6.eq) goto loc_820C588C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820C588C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c58a0
	if (ctx.cr6.eq) goto loc_820C58A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82182e98
	ctx.lr = 0x820C58A0;
	sub_82182E98(ctx, base);
loc_820C58A0:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r11,-26328
	ctx.r31.s64 = ctx.r11.s64 + -26328;
	// beq cr6,0x820c58cc
	if (ctx.cr6.eq) goto loc_820C58CC;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c58c8
	if (!ctx.cr6.eq) goto loc_820C58C8;
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_820C58C8:
	// bl 0x8217c1e0
	ctx.lr = 0x820C58CC;
	sub_8217C1E0(ctx, base);
loc_820C58CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820c58f0
	if (ctx.cr6.eq) goto loc_820C58F0;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c58ec
	if (!ctx.cr6.eq) goto loc_820C58EC;
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_820C58EC:
	// bl 0x8217c6d8
	ctx.lr = 0x820C58F0;
	sub_8217C6D8(ctx, base);
loc_820C58F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820c5914
	if (ctx.cr6.eq) goto loc_820C5914;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c5910
	if (!ctx.cr6.eq) goto loc_820C5910;
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_820C5910:
	// bl 0x8217e890
	ctx.lr = 0x820C5914;
	sub_8217E890(ctx, base);
loc_820C5914:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5920"))) PPC_WEAK_FUNC(sub_820C5920);
PPC_FUNC_IMPL(__imp__sub_820C5920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820C5928;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C5934;
	sub_820C7008(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c594c
	if (!ctx.cr6.eq) goto loc_820C594C;
loc_820C5940:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_820C594C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c5940
	if (ctx.cr6.eq) goto loc_820C5940;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c6548
	ctx.lr = 0x820C595C;
	sub_820C6548(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82182e98
	ctx.lr = 0x820C5968;
	sub_82182E98(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ld r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r24,136(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r23,140(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// std r25,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r25.u64);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r24,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r24.u32);
	// stw r23,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r23.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820C59EC;
	sub_8233E4E0(ctx, base);
	// ld r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 212);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// std r9,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r9.u64);
	// lwz r30,72(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820c5ab4
	if (ctx.cr6.eq) goto loc_820C5AB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,228
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 228, ctx.xer);
	// bne cr6,0x820c5ab4
	if (!ctx.cr6.eq) goto loc_820C5AB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c64b8
	ctx.lr = 0x820C5A1C;
	sub_820C64B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217c1e0
	ctx.lr = 0x820C5A28;
	sub_8217C1E0(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r31,148
	ctx.r10.s64 = ctx.r31.s64 + 148;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C5A44:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820c5a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C5A44;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C5A6C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820c5a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C5A6C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lbz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 164);
	// lbz r8,165(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 165);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lbz r7,166(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// lbz r6,167(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// lbz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// stb r8,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r8.u8);
	// stb r7,222(r31)
	PPC_STORE_U8(ctx.r31.u32 + 222, ctx.r7.u8);
	// stb r6,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r6.u8);
	// stb r5,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r5.u8);
	// beq cr6,0x820c5940
	if (ctx.cr6.eq) goto loc_820C5940;
loc_820C5AB4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f12,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x820c5b6c
	if (ctx.cr6.eq) goto loc_820C5B6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,176
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 176, ctx.xer);
	// bne cr6,0x820c5b6c
	if (!ctx.cr6.eq) goto loc_820C5B6C;
	// lis r11,-15404
	ctx.r11.s64 = -1009516544;
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r10,40
	ctx.r10.s64 = 40;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ori r9,r11,7
	ctx.r9.u64 = ctx.r11.u64 | 7;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8217c6d8
	ctx.lr = 0x820C5B20;
	sub_8217C6D8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// stw r7,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r7.u32);
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// beq cr6,0x820c5940
	if (ctx.cr6.eq) goto loc_820C5940;
loc_820C5B6C:
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5c84
	if (ctx.cr6.eq) goto loc_820C5C84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,212
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 212, ctx.xer);
	// bne cr6,0x820c5c84
	if (!ctx.cr6.eq) goto loc_820C5C84;
	// lis r10,-15404
	ctx.r10.s64 = -1009516544;
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,76
	ctx.r8.s64 = 76;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x8217e890
	ctx.lr = 0x820C5BEC;
	sub_8217E890(ctx, base);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 132);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lwz r30,8(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lwz r28,4(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lwz r27,8(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stfs f11,184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r4.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// std r10,188(r31)
	PPC_STORE_U64(ctx.r31.u32 + 188, ctx.r10.u64);
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// stw r27,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// stw r6,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r6.u32);
	// beq cr6,0x820c5c88
	if (ctx.cr6.eq) goto loc_820C5C88;
loc_820C5C84:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820C5C88:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5C90"))) PPC_WEAK_FUNC(sub_820C5C90);
PPC_FUNC_IMPL(__imp__sub_820C5C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820C5C98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C5CB0;
	sub_820C7008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c5cc4
	if (!ctx.cr6.eq) goto loc_820C5CC4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820C5CC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c5cd8
	if (ctx.cr6.eq) goto loc_820C5CD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182c50
	ctx.lr = 0x820C5CD8;
	sub_82182C50(ctx, base);
loc_820C5CD8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c5cfc
	if (ctx.cr6.eq) goto loc_820C5CFC;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c5cf4
	if (!ctx.cr6.eq) goto loc_820C5CF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183258
	ctx.lr = 0x820C5CF4;
	sub_82183258(ctx, base);
loc_820C5CF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8217c008
	ctx.lr = 0x820C5CFC;
	sub_8217C008(ctx, base);
loc_820C5CFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820c5d20
	if (ctx.cr6.eq) goto loc_820C5D20;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c5d18
	if (!ctx.cr6.eq) goto loc_820C5D18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821832e0
	ctx.lr = 0x820C5D18;
	sub_821832E0(ctx, base);
loc_820C5D18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8217c638
	ctx.lr = 0x820C5D20;
	sub_8217C638(ctx, base);
loc_820C5D20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820c5d44
	if (ctx.cr6.eq) goto loc_820C5D44;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c5d3c
	if (!ctx.cr6.eq) goto loc_820C5D3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821833b0
	ctx.lr = 0x820C5D3C;
	sub_821833B0(ctx, base);
loc_820C5D3C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8217e780
	ctx.lr = 0x820C5D44;
	sub_8217E780(ctx, base);
loc_820C5D44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5D50"))) PPC_WEAK_FUNC(sub_820C5D50);
PPC_FUNC_IMPL(__imp__sub_820C5D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820C5D58;
	__savegprlr_21(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820c7008
	ctx.lr = 0x820C5D64;
	sub_820C7008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c5d7c
	if (!ctx.cr6.eq) goto loc_820C5D7C;
loc_820C5D70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_820C5D7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c5d70
	if (ctx.cr6.eq) goto loc_820C5D70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c6548
	ctx.lr = 0x820C5D8C;
	sub_820C6548(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// ld r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r26,44(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r25,48(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r24,52(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r23,56(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r22,60(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r21,64(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r24.u32);
	// stw r23,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r23.u32);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820C5E10;
	sub_8233E4E0(ctx, base);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 136);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r8,212(r1)
	PPC_STORE_U64(ctx.r1.u32 + 212, ctx.r8.u64);
	// bl 0x82182c50
	ctx.lr = 0x820C5E2C;
	sub_82182C50(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820c5edc
	if (!ctx.cr6.eq) goto loc_820C5EDC;
	// lwz r30,72(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820c6014
	if (ctx.cr6.eq) goto loc_820C6014;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c64b8
	ctx.lr = 0x820C5E4C;
	sub_820C64B8(ctx, base);
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C5E64:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820c5e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C5E64;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C5E88:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820c5e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C5E88;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,221(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 221);
	// lbz r8,222(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 222);
	// lbz r7,223(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 223);
	// lbz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stb r10,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r10.u8);
	// stb r9,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r9.u8);
	// stb r8,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r8.u8);
	// stb r7,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r7.u8);
	// stb r6,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r6.u8);
	// bl 0x8217c008
	ctx.lr = 0x820C5ED0;
	sub_8217C008(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_820C5EDC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820c5f58
	if (!ctx.cr6.eq) goto loc_820C5F58;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6014
	if (ctx.cr6.eq) goto loc_820C6014;
	// lis r10,-15404
	ctx.r10.s64 = -1009516544;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r10,7
	ctx.r6.u64 = ctx.r10.u64 | 7;
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r8,40
	ctx.r8.s64 = 40;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,168(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x8217c638
	ctx.lr = 0x820C5F4C;
	sub_8217C638(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_820C5F58:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820c6014
	if (!ctx.cr6.eq) goto loc_820C6014;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6014
	if (ctx.cr6.eq) goto loc_820C6014;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r10,-15404
	ctx.r10.s64 = -1009516544;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// ori r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 5;
	// lwz r30,160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r29,76
	ctx.r29.s64 = 76;
	// lwz r28,164(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,168(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// ld r26,188(r31)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r31.u32 + 188);
	// lfs f12,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lwz r25,196(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lfs f11,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lwz r24,200(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r23,204(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r22,208(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r26,132(r1)
	PPC_STORE_U64(ctx.r1.u32 + 132, ctx.r26.u64);
	// stw r25,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r25.u32);
	// stw r24,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r24.u32);
	// stw r23,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r23.u32);
	// stw r22,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r22.u32);
	// bl 0x8217e780
	ctx.lr = 0x820C6014;
	sub_8217E780(ctx, base);
loc_820C6014:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C6020"))) PPC_WEAK_FUNC(sub_820C6020);
PPC_FUNC_IMPL(__imp__sub_820C6020) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820C6028;
	__savegprlr_14(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,11160
	ctx.r11.s64 = ctx.r11.s64 + 11160;
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
	// addi r10,r10,11240
	ctx.r10.s64 = ctx.r10.s64 + 11240;
	// addi r9,r9,11304
	ctx.r9.s64 = ctx.r9.s64 + 11304;
	// addi r8,r8,11368
	ctx.r8.s64 = ctx.r8.s64 + 11368;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r7,r7,11432
	ctx.r7.s64 = ctx.r7.s64 + 11432;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r6,r6,11520
	ctx.r6.s64 = ctx.r6.s64 + 11520;
	// addi r5,r5,11672
	ctx.r5.s64 = ctx.r5.s64 + 11672;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r4,r4,11760
	ctx.r4.s64 = ctx.r4.s64 + 11760;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r11,r31,11920
	ctx.r11.s64 = ctx.r31.s64 + 11920;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
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
	// addi r10,r30,11848
	ctx.r10.s64 = ctx.r30.s64 + 11848;
	// addi r9,r29,11992
	ctx.r9.s64 = ctx.r29.s64 + 11992;
	// addi r8,r28,12384
	ctx.r8.s64 = ctx.r28.s64 + 12384;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// addi r7,r27,12928
	ctx.r7.s64 = ctx.r27.s64 + 12928;
	// addi r6,r26,12992
	ctx.r6.s64 = ctx.r26.s64 + 12992;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,13056
	ctx.r5.s64 = ctx.r25.s64 + 13056;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// addi r4,r24,13128
	ctx.r4.s64 = ctx.r24.s64 + 13128;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// addi r11,r23,13248
	ctx.r11.s64 = ctx.r23.s64 + 13248;
	// stw r5,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r5.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r4,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r4.u32);
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
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
	// addi r10,r22,13408
	ctx.r10.s64 = ctx.r22.s64 + 13408;
	// addi r9,r21,13672
	ctx.r9.s64 = ctx.r21.s64 + 13672;
	// addi r8,r20,14200
	ctx.r8.s64 = ctx.r20.s64 + 14200;
	// stw r10,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,14512
	ctx.r7.s64 = ctx.r19.s64 + 14512;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// addi r6,r18,14600
	ctx.r6.s64 = ctx.r18.s64 + 14600;
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// addi r5,r17,14968
	ctx.r5.s64 = ctx.r17.s64 + 14968;
	// stw r7,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r7.u32);
	// addi r4,r16,19336
	ctx.r4.s64 = ctx.r16.s64 + 19336;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// addi r11,r15,19144
	ctx.r11.s64 = ctx.r15.s64 + 19144;
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// addi r9,r10,19432
	ctx.r9.s64 = ctx.r10.s64 + 19432;
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// addi r8,r14,21392
	ctx.r8.s64 = ctx.r14.s64 + 21392;
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r9,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r9.u32);
	// stw r8,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r8.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// addi r6,r6,15160
	ctx.r6.s64 = ctx.r6.s64 + 15160;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
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
	// addi r7,r7,15048
	ctx.r7.s64 = ctx.r7.s64 + 15048;
	// addi r5,r5,15696
	ctx.r5.s64 = ctx.r5.s64 + 15696;
	// addi r4,r4,15808
	ctx.r4.s64 = ctx.r4.s64 + 15808;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// addi r11,r11,19560
	ctx.r11.s64 = ctx.r11.s64 + 19560;
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// addi r10,r10,19688
	ctx.r10.s64 = ctx.r10.s64 + 19688;
	// stw r4,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r4.u32);
	// addi r9,r9,19816
	ctx.r9.s64 = ctx.r9.s64 + 19816;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// addi r8,r8,19936
	ctx.r8.s64 = ctx.r8.s64 + 19936;
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// addi r6,r30,16240
	ctx.r6.s64 = ctx.r30.s64 + 16240;
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// stw r8,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r8.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
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
	// addi r7,r31,16088
	ctx.r7.s64 = ctx.r31.s64 + 16088;
	// addi r5,r29,16432
	ctx.r5.s64 = ctx.r29.s64 + 16432;
	// addi r4,r28,16632
	ctx.r4.s64 = ctx.r28.s64 + 16632;
	// stw r7,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// addi r11,r27,16736
	ctx.r11.s64 = ctx.r27.s64 + 16736;
	// stw r5,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r5.u32);
	// addi r10,r26,16840
	ctx.r10.s64 = ctx.r26.s64 + 16840;
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// addi r9,r25,16928
	ctx.r9.s64 = ctx.r25.s64 + 16928;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// addi r8,r24,17056
	ctx.r8.s64 = ctx.r24.s64 + 17056;
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// addi r6,r22,17336
	ctx.r6.s64 = ctx.r22.s64 + 17336;
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// stw r8,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r8.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r6,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r6.u32);
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
	// addi r7,r23,17144
	ctx.r7.s64 = ctx.r23.s64 + 17144;
	// addi r5,r21,17456
	ctx.r5.s64 = ctx.r21.s64 + 17456;
	// lis r15,-32244
	ctx.r15.s64 = -2113142784;
	// stw r7,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r7.u32);
	// addi r4,r20,17632
	ctx.r4.s64 = ctx.r20.s64 + 17632;
	// stw r5,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r5.u32);
	// addi r11,r19,17792
	ctx.r11.s64 = ctx.r19.s64 + 17792;
	// addi r10,r18,17896
	ctx.r10.s64 = ctx.r18.s64 + 17896;
	// stw r4,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r4.u32);
	// addi r9,r17,17992
	ctx.r9.s64 = ctx.r17.s64 + 17992;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// addi r8,r16,18064
	ctx.r8.s64 = ctx.r16.s64 + 18064;
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r9,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r9.u32);
	// addi r7,r15,18144
	ctx.r7.s64 = ctx.r15.s64 + 18144;
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// addi r5,r6,18248
	ctx.r5.s64 = ctx.r6.s64 + 18248;
	// addi r4,r14,18360
	ctx.r4.s64 = ctx.r14.s64 + 18360;
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// stw r5,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r5.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// addi r11,r11,18488
	ctx.r11.s64 = ctx.r11.s64 + 18488;
	// addi r10,r10,18584
	ctx.r10.s64 = ctx.r10.s64 + 18584;
	// addi r9,r9,18664
	ctx.r9.s64 = ctx.r9.s64 + 18664;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// addi r8,r8,18760
	ctx.r8.s64 = ctx.r8.s64 + 18760;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// addi r7,r7,18888
	ctx.r7.s64 = ctx.r7.s64 + 18888;
	// stw r9,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r9.u32);
	// addi r6,r6,18984
	ctx.r6.s64 = ctx.r6.s64 + 18984;
	// stw r8,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r8.u32);
	// addi r5,r5,19064
	ctx.r5.s64 = ctx.r5.s64 + 19064;
	// stw r7,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r7.u32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r6,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r6.u32);
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// stw r5,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r5.u32);
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
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// addi r4,r4,15280
	ctx.r4.s64 = ctx.r4.s64 + 15280;
	// addi r11,r31,15600
	ctx.r11.s64 = ctx.r31.s64 + 15600;
	// addi r10,r30,14712
	ctx.r10.s64 = ctx.r30.s64 + 14712;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// addi r9,r29,20128
	ctx.r9.s64 = ctx.r29.s64 + 20128;
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// addi r8,r28,20224
	ctx.r8.s64 = ctx.r28.s64 + 20224;
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// addi r7,r27,13536
	ctx.r7.s64 = ctx.r27.s64 + 13536;
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// addi r6,r26,20288
	ctx.r6.s64 = ctx.r26.s64 + 20288;
	// stw r8,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r8.u32);
	// addi r5,r25,20592
	ctx.r5.s64 = ctx.r25.s64 + 20592;
	// stw r7,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r7.u32);
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// stw r6,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r6.u32);
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// stw r5,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r5.u32);
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// lis r19,-32244
	ctx.r19.s64 = -2113142784;
	// lis r18,-32244
	ctx.r18.s64 = -2113142784;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// addi r4,r24,20680
	ctx.r4.s64 = ctx.r24.s64 + 20680;
	// addi r11,r23,20888
	ctx.r11.s64 = ctx.r23.s64 + 20888;
	// addi r10,r22,14120
	ctx.r10.s64 = ctx.r22.s64 + 14120;
	// stw r4,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// lis r16,-32244
	ctx.r16.s64 = -2113142784;
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// lis r15,-32244
	ctx.r15.s64 = -2113142784;
	// stw r10,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// addi r9,r21,21104
	ctx.r9.s64 = ctx.r21.s64 + 21104;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r8,r20,21296
	ctx.r8.s64 = ctx.r20.s64 + 21296;
	// addi r7,r19,21584
	ctx.r7.s64 = ctx.r19.s64 + 21584;
	// stw r9,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r9.u32);
	// addi r6,r18,21560
	ctx.r6.s64 = ctx.r18.s64 + 21560;
	// stw r8,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r8.u32);
	// addi r5,r17,21608
	ctx.r5.s64 = ctx.r17.s64 + 21608;
	// stw r7,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r7.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r6,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r6.u32);
	// addi r4,r16,21672
	ctx.r4.s64 = ctx.r16.s64 + 21672;
	// stw r5,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r5.u32);
	// addi r11,r15,21880
	ctx.r11.s64 = ctx.r15.s64 + 21880;
	// addi r9,r10,21984
	ctx.r9.s64 = ctx.r10.s64 + 21984;
	// stw r4,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r4.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// addi r8,r14,22816
	ctx.r8.s64 = ctx.r14.s64 + 22816;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r9,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r9.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r8,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r8.u32);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r7,r7,23888
	ctx.r7.s64 = ctx.r7.s64 + 23888;
	// addi r6,r6,22616
	ctx.r6.s64 = ctx.r6.s64 + 22616;
	// addi r5,r5,23696
	ctx.r5.s64 = ctx.r5.s64 + 23696;
	// stw r7,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r7.u32);
	// addi r4,r4,22048
	ctx.r4.s64 = ctx.r4.s64 + 22048;
	// stw r6,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r6.u32);
	// addi r11,r11,22120
	ctx.r11.s64 = ctx.r11.s64 + 22120;
	// stw r5,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r5.u32);
	// addi r10,r10,22192
	ctx.r10.s64 = ctx.r10.s64 + 22192;
	// stw r4,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r4.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r10,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
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
	// addi r9,r9,22264
	ctx.r9.s64 = ctx.r9.s64 + 22264;
	// addi r8,r8,22440
	ctx.r8.s64 = ctx.r8.s64 + 22440;
	// addi r7,r31,13752
	ctx.r7.s64 = ctx.r31.s64 + 13752;
	// stw r9,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r9.u32);
	// addi r6,r30,14280
	ctx.r6.s64 = ctx.r30.s64 + 14280;
	// stw r8,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r8.u32);
	// addi r5,r29,14192
	ctx.r5.s64 = ctx.r29.s64 + 14192;
	// stw r7,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r7.u32);
	// addi r4,r28,20368
	ctx.r4.s64 = ctx.r28.s64 + 20368;
	// stw r6,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r6.u32);
	// addi r11,r27,20544
	ctx.r11.s64 = ctx.r27.s64 + 20544;
	// stw r5,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// addi r10,r26,20416
	ctx.r10.s64 = ctx.r26.s64 + 20416;
	// stw r4,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r4.u32);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stw r10,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r10.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C64B8"))) PPC_WEAK_FUNC(sub_820C64B8);
PPC_FUNC_IMPL(__imp__sub_820C64B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-15404
	ctx.r9.s64 = -1009516544;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r7,r9,6
	ctx.r7.u64 = ctx.r9.u64 | 6;
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// li r6,92
	ctx.r6.s64 = 92;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r11.u8);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r11,86(r3)
	PPC_STORE_U8(ctx.r3.u32 + 86, ctx.r11.u8);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r11,87(r3)
	PPC_STORE_U8(ctx.r3.u32 + 87, ctx.r11.u8);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6548"))) PPC_WEAK_FUNC(sub_820C6548);
PPC_FUNC_IMPL(__imp__sub_820C6548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-15404
	ctx.r9.s64 = -1009516544;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r7,r9,4
	ctx.r7.u64 = ctx.r9.u64 | 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r6,144
	ctx.r6.s64 = 144;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lfs f0,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lfs f13,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f12,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stfs f12,132(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f13,140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6604"))) PPC_WEAK_FUNC(sub_820C6604);
PPC_FUNC_IMPL(__imp__sub_820C6604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6608"))) PPC_WEAK_FUNC(sub_820C6608);
PPC_FUNC_IMPL(__imp__sub_820C6608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C6610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8256);
	// lwz r10,8252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8252);
	// divwu r9,r3,r11
	ctx.r9.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r8,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x820C6654;
	sub_820F63E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820c6680
	if (ctx.cr6.eq) goto loc_820C6680;
loc_820C6660:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820c667c
	if (ctx.cr6.eq) goto loc_820C667C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820c6660
	if (!ctx.cr6.eq) goto loc_820C6660;
	// b 0x820c6680
	goto loc_820C6680;
loc_820C667C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820C6680:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x820c669c
	if (ctx.cr6.eq) goto loc_820C669C;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820C669C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C66A8"))) PPC_WEAK_FUNC(sub_820C66A8);
PPC_FUNC_IMPL(__imp__sub_820C66A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C66B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-26328
	ctx.r10.s64 = ctx.r11.s64 + -26328;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8244);
	// lwz r10,8240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8240);
	// divwu r9,r3,r11
	ctx.r9.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r8,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x820C66F4;
	sub_820F63E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820c6720
	if (ctx.cr6.eq) goto loc_820C6720;
loc_820C6700:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820c671c
	if (ctx.cr6.eq) goto loc_820C671C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820c6700
	if (!ctx.cr6.eq) goto loc_820C6700;
	// b 0x820c6720
	goto loc_820C6720;
loc_820C671C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820C6720:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x820c673c
	if (ctx.cr6.eq) goto loc_820C673C;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820C673C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C6748"))) PPC_WEAK_FUNC(sub_820C6748);
PPC_FUNC_IMPL(__imp__sub_820C6748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6774
	if (ctx.cr6.lt) goto loc_820C6774;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x820c677c
	goto loc_820C677C;
loc_820C6774:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r11,17,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820C677C:
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6798
	if (ctx.cr6.lt) goto loc_820C6798;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x820c67a0
	goto loc_820C67A0;
loc_820C6798:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r11,17,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820C67A0:
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c67bc
	if (ctx.cr6.lt) goto loc_820C67BC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x820c67c4
	goto loc_820C67C4;
loc_820C67BC:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r11,17,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820C67C4:
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c67f0
	if (ctx.cr6.lt) goto loc_820C67F0;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// li r3,255
	ctx.r3.s64 = 255;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
loc_820C67F0:
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r3,r8,17,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFF;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C680C"))) PPC_WEAK_FUNC(sub_820C680C);
PPC_FUNC_IMPL(__imp__sub_820C680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6810"))) PPC_WEAK_FUNC(sub_820C6810);
PPC_FUNC_IMPL(__imp__sub_820C6810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 + 68;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6850
	if (ctx.cr6.lt) goto loc_820C6850;
	// li r8,255
	ctx.r8.s64 = 255;
	// b 0x820c6858
	goto loc_820C6858;
loc_820C6850:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r8,r10,17,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C6858:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6874
	if (ctx.cr6.lt) goto loc_820C6874;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x820c687c
	goto loc_820C687C;
loc_820C6874:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r10,17,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C687C:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6898
	if (ctx.cr6.lt) goto loc_820C6898;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x820c68a0
	goto loc_820C68A0;
loc_820C6898:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,17,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C68A0:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c68bc
	if (ctx.cr6.lt) goto loc_820C68BC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x820c68c4
	goto loc_820C68C4;
loc_820C68BC:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r11,17,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820C68C4:
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r4,84
	ctx.r11.s64 = ctx.r4.s64 + 84;
	// rlwimi r10,r7,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r10,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lfs f12,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x820c691c
	if (ctx.cr6.lt) goto loc_820C691C;
	// li r8,255
	ctx.r8.s64 = 255;
	// b 0x820c6924
	goto loc_820C6924;
loc_820C691C:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r8,r10,17,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C6924:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6940
	if (ctx.cr6.lt) goto loc_820C6940;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x820c6948
	goto loc_820C6948;
loc_820C6940:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r10,17,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C6948:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6964
	if (ctx.cr6.lt) goto loc_820C6964;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x820c696c
	goto loc_820C696C;
loc_820C6964:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,17,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C696C:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6988
	if (ctx.cr6.lt) goto loc_820C6988;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x820c6990
	goto loc_820C6990;
loc_820C6988:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r11,17,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820C6990:
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 + 100;
	// rlwimi r10,r7,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r10,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lfs f12,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f11,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,40(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,44(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f8,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x820c69e8
	if (ctx.cr6.lt) goto loc_820C69E8;
	// li r8,255
	ctx.r8.s64 = 255;
	// b 0x820c69f0
	goto loc_820C69F0;
loc_820C69E8:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r8,r10,17,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C69F0:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6a0c
	if (ctx.cr6.lt) goto loc_820C6A0C;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x820c6a14
	goto loc_820C6A14;
loc_820C6A0C:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r10,17,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C6A14:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6a30
	if (ctx.cr6.lt) goto loc_820C6A30;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x820c6a38
	goto loc_820C6A38;
loc_820C6A30:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,17,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C6A38:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6a54
	if (ctx.cr6.lt) goto loc_820C6A54;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x820c6a5c
	goto loc_820C6A5C;
loc_820C6A54:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r11,17,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820C6A5C:
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 + 116;
	// rlwimi r10,r7,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r10,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// lfs f12,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f11,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,64(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f8,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x820c6ab4
	if (ctx.cr6.lt) goto loc_820C6AB4;
	// li r8,255
	ctx.r8.s64 = 255;
	// b 0x820c6abc
	goto loc_820C6ABC;
loc_820C6AB4:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r8,r10,17,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C6ABC:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6ad8
	if (ctx.cr6.lt) goto loc_820C6AD8;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x820c6ae0
	goto loc_820C6AE0;
loc_820C6AD8:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r10,17,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C6AE0:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6afc
	if (ctx.cr6.lt) goto loc_820C6AFC;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x820c6b04
	goto loc_820C6B04;
loc_820C6AFC:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,17,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFF;
loc_820C6B04:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820c6b20
	if (ctx.cr6.lt) goto loc_820C6B20;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x820c6b28
	goto loc_820C6B28;
loc_820C6B20:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r11,17,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFF;
loc_820C6B28:
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lfs f0,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f13,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lwz r8,132(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// ori r7,r8,5
	ctx.r7.u64 = ctx.r8.u64 | 5;
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6B5C"))) PPC_WEAK_FUNC(sub_820C6B5C);
PPC_FUNC_IMPL(__imp__sub_820C6B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6B60"))) PPC_WEAK_FUNC(sub_820C6B60);
PPC_FUNC_IMPL(__imp__sub_820C6B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// addi r6,r7,31376
	ctx.r6.s64 = ctx.r7.s64 + 31376;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// lfs f0,244(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6BE0"))) PPC_WEAK_FUNC(sub_820C6BE0);
PPC_FUNC_IMPL(__imp__sub_820C6BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r9,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f10,-32(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lfd f9,-32(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r6,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r6.u64);
	// lfd f8,-32(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rlwinm r5,r9,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// std r5,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// lfd f7,-32(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f0,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,80(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f9,68(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f10,76(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,72(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,12(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,16(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f4,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lfd f3,-32(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f2,-32(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f1,-32(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// fcfid f10,f2
	ctx.f10.f64 = double(ctx.f2.s64);
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f11,f3
	ctx.f11.f64 = double(ctx.f3.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f9,f1
	ctx.f9.f64 = double(ctx.f1.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,84(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,88(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f2,92(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,96(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,56(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r5,r6,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r6,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// std r5,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// lfd f9,-32(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f8,-32(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rlwinm r11,r6,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// std r11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r11.u64);
	// lfd f6,-24(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// frsp f11,f2
	ctx.f11.f64 = double(float(ctx.f2.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,100(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,104(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f10,108(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f9,112(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f6,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f5,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,32(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f4,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,60(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f3,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,64(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r7,r8,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// rlwinm r5,r8,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// std r5,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// lfd f10,-32(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// rlwinm r6,r8,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// std r6,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r6.u64);
	// lfd f12,-24(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f11,f2
	ctx.f11.f64 = double(ctx.f2.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,116(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// frsp f7,f13
	ctx.f7.f64 = double(float(ctx.f13.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// stfs f3,124(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
	// stfs f2,128(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 128, temp.u32);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6E50"))) PPC_WEAK_FUNC(sub_820C6E50);
PPC_FUNC_IMPL(__imp__sub_820C6E50) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,2(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// addi r4,r9,31376
	ctx.r4.s64 = ctx.r9.s64 + 31376;
	// lbz r5,3(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// or r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 | ctx.r6.u64;
	// lfs f0,244(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// li r30,1
	ctx.r30.s64 = 1;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r10,r5,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// rlwinm r7,r5,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,80(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,76(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,72(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fmuls f6,f1,f1
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// fmr f7,f1
	ctx.f7.f64 = ctx.f1.f64;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r6,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// stw r5,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// stw r4,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,84(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// stb r30,269(r9)
	PPC_STORE_U8(ctx.r9.u32 + 269, ctx.r30.u8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c6f94
	if (ctx.cr6.eq) goto loc_820C6F94;
loc_820C6F7C:
	// stb r30,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c6fb0
	ctx.lr = 0x820C6F88;
	sub_820C6FB0(ctx, base);
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c6f7c
	if (!ctx.cr6.eq) goto loc_820C6F7C;
loc_820C6F94:
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

__attribute__((alias("__imp__sub_820C6FAC"))) PPC_WEAK_FUNC(sub_820C6FAC);
PPC_FUNC_IMPL(__imp__sub_820C6FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6FB0"))) PPC_WEAK_FUNC(sub_820C6FB0);
PPC_FUNC_IMPL(__imp__sub_820C6FB0) {
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
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c6fec
	if (ctx.cr6.eq) goto loc_820C6FEC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820C6FD4:
	// stb r30,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c6fb0
	ctx.lr = 0x820C6FE0;
	sub_820C6FB0(ctx, base);
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820c6fd4
	if (!ctx.cr6.eq) goto loc_820C6FD4;
loc_820C6FEC:
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

__attribute__((alias("__imp__sub_820C7004"))) PPC_WEAK_FUNC(sub_820C7004);
PPC_FUNC_IMPL(__imp__sub_820C7004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7008"))) PPC_WEAK_FUNC(sub_820C7008);
PPC_FUNC_IMPL(__imp__sub_820C7008) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-2
	ctx.r11.s64 = -2;
loc_820C7010:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820c7078
	if (ctx.cr6.eq) goto loc_820C7078;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x820c7010
	if (ctx.cr6.lt) goto loc_820C7010;
	// rlwinm r11,r3,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820c708c
	if (!ctx.cr6.eq) goto loc_820C708C;
	// rlwinm r11,r3,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x7FFF;
	// clrlwi r9,r3,1
	ctx.r9.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x820c70e0
	if (!ctx.cr6.lt) goto loc_820C70E0;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-26328
	ctx.r10.s64 = ctx.r10.s64 + -26328;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820c70e0
	if (!ctx.cr6.eq) goto loc_820C70E0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_820C7078:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-26328
	ctx.r9.s64 = ctx.r11.s64 + -26328;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_820C708C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c70e0
	if (ctx.cr6.eq) goto loc_820C70E0;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820c70e0
	if (!ctx.cr6.lt) goto loc_820C70E0;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c70e0
	if (ctx.cr6.eq) goto loc_820C70E0;
	// lwz r9,492(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820c70e0
	if (!ctx.cr6.lt) goto loc_820C70E0;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_820C70E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C70E8"))) PPC_WEAK_FUNC(sub_820C70E8);
PPC_FUNC_IMPL(__imp__sub_820C70E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c713c
	if (ctx.cr6.eq) goto loc_820C713C;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// slw r8,r9,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r3.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c713c
	if (ctx.cr6.eq) goto loc_820C713C;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c713c
	if (!ctx.cr6.lt) goto loc_820C713C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820C713C:
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

__attribute__((alias("__imp__sub_820C714C"))) PPC_WEAK_FUNC(sub_820C714C);
PPC_FUNC_IMPL(__imp__sub_820C714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7150"))) PPC_WEAK_FUNC(sub_820C7150);
PPC_FUNC_IMPL(__imp__sub_820C7150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c7200
	if (ctx.cr6.eq) goto loc_820C7200;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// slw r8,r9,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r3.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c7200
	if (ctx.cr6.eq) goto loc_820C7200;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7200
	if (!ctx.cr6.lt) goto loc_820C7200;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c71b4
	if (ctx.cr6.eq) goto loc_820C71B4;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r7,r8,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x820c71b4
	if (!ctx.cr6.gt) goto loc_820C71B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C71B4:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,31376
	ctx.r6.s64 = ctx.r7.s64 + 31376;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lfs f0,48(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c71f4
	if (ctx.cr6.eq) goto loc_820C71F4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c71f8
	if (ctx.cr6.eq) goto loc_820C71F8;
loc_820C71F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C71F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_820C7200:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7208"))) PPC_WEAK_FUNC(sub_820C7208);
PPC_FUNC_IMPL(__imp__sub_820C7208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c72b8
	if (ctx.cr6.eq) goto loc_820C72B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// slw r8,r9,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r3.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c72b8
	if (ctx.cr6.eq) goto loc_820C72B8;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c72b8
	if (!ctx.cr6.lt) goto loc_820C72B8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c726c
	if (ctx.cr6.eq) goto loc_820C726C;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r7,r8,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x820c726c
	if (!ctx.cr6.gt) goto loc_820C726C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C726C:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,31376
	ctx.r6.s64 = ctx.r7.s64 + 31376;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lfs f0,48(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c72ac
	if (!ctx.cr6.eq) goto loc_820C72AC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c72b0
	if (!ctx.cr6.eq) goto loc_820C72B0;
loc_820C72AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C72B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_820C72B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C72C0"))) PPC_WEAK_FUNC(sub_820C72C0);
PPC_FUNC_IMPL(__imp__sub_820C72C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c7324
	if (ctx.cr6.eq) goto loc_820C7324;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// slw r8,r9,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r3.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c7324
	if (ctx.cr6.eq) goto loc_820C7324;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7324
	if (!ctx.cr6.lt) goto loc_820C7324;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r8
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// blr 
	return;
loc_820C7324:
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

__attribute__((alias("__imp__sub_820C7334"))) PPC_WEAK_FUNC(sub_820C7334);
PPC_FUNC_IMPL(__imp__sub_820C7334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7338"))) PPC_WEAK_FUNC(sub_820C7338);
PPC_FUNC_IMPL(__imp__sub_820C7338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7360
	if (!ctx.cr6.eq) goto loc_820C7360;
loc_820C7350:
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
loc_820C7360:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7350
	if (!ctx.cr6.lt) goto loc_820C7350;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C737C"))) PPC_WEAK_FUNC(sub_820C737C);
PPC_FUNC_IMPL(__imp__sub_820C737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7380"))) PPC_WEAK_FUNC(sub_820C7380);
PPC_FUNC_IMPL(__imp__sub_820C7380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c73a0
	if (!ctx.cr6.eq) goto loc_820C73A0;
loc_820C7398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C73A0:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7398
	if (!ctx.cr6.lt) goto loc_820C7398;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c73cc
	if (ctx.cr6.eq) goto loc_820C73CC;
	// lbzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x820c73cc
	if (!ctx.cr6.gt) goto loc_820C73CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C73CC:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c7400
	if (ctx.cr6.eq) goto loc_820C7400;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c7404
	if (ctx.cr6.eq) goto loc_820C7404;
loc_820C7400:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C7404:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C740C"))) PPC_WEAK_FUNC(sub_820C740C);
PPC_FUNC_IMPL(__imp__sub_820C740C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7410"))) PPC_WEAK_FUNC(sub_820C7410);
PPC_FUNC_IMPL(__imp__sub_820C7410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7430
	if (!ctx.cr6.eq) goto loc_820C7430;
loc_820C7428:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C7430:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7428
	if (!ctx.cr6.lt) goto loc_820C7428;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c745c
	if (ctx.cr6.eq) goto loc_820C745C;
	// lbzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x820c745c
	if (!ctx.cr6.gt) goto loc_820C745C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C745C:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c7490
	if (!ctx.cr6.eq) goto loc_820C7490;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c7494
	if (!ctx.cr6.eq) goto loc_820C7494;
loc_820C7490:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C7494:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C749C"))) PPC_WEAK_FUNC(sub_820C749C);
PPC_FUNC_IMPL(__imp__sub_820C749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C74A0"))) PPC_WEAK_FUNC(sub_820C74A0);
PPC_FUNC_IMPL(__imp__sub_820C74A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c74c8
	if (!ctx.cr6.eq) goto loc_820C74C8;
loc_820C74B8:
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
loc_820C74C8:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c74b8
	if (!ctx.cr6.lt) goto loc_820C74B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C74F0"))) PPC_WEAK_FUNC(sub_820C74F0);
PPC_FUNC_IMPL(__imp__sub_820C74F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7518
	if (!ctx.cr6.eq) goto loc_820C7518;
loc_820C7508:
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
loc_820C7518:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7508
	if (!ctx.cr6.lt) goto loc_820C7508;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7534"))) PPC_WEAK_FUNC(sub_820C7534);
PPC_FUNC_IMPL(__imp__sub_820C7534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7538"))) PPC_WEAK_FUNC(sub_820C7538);
PPC_FUNC_IMPL(__imp__sub_820C7538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7558
	if (!ctx.cr6.eq) goto loc_820C7558;
loc_820C7550:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C7558:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7550
	if (!ctx.cr6.lt) goto loc_820C7550;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c7584
	if (ctx.cr6.eq) goto loc_820C7584;
	// lbzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x820c7584
	if (!ctx.cr6.gt) goto loc_820C7584;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C7584:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c75b8
	if (ctx.cr6.eq) goto loc_820C75B8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c75bc
	if (ctx.cr6.eq) goto loc_820C75BC;
loc_820C75B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C75BC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C75C4"))) PPC_WEAK_FUNC(sub_820C75C4);
PPC_FUNC_IMPL(__imp__sub_820C75C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C75C8"))) PPC_WEAK_FUNC(sub_820C75C8);
PPC_FUNC_IMPL(__imp__sub_820C75C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c75e8
	if (!ctx.cr6.eq) goto loc_820C75E8;
loc_820C75E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C75E8:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c75e0
	if (!ctx.cr6.lt) goto loc_820C75E0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c7614
	if (ctx.cr6.eq) goto loc_820C7614;
	// lbzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x820c7614
	if (!ctx.cr6.gt) goto loc_820C7614;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C7614:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c7648
	if (!ctx.cr6.eq) goto loc_820C7648;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c764c
	if (!ctx.cr6.eq) goto loc_820C764C;
loc_820C7648:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C764C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7654"))) PPC_WEAK_FUNC(sub_820C7654);
PPC_FUNC_IMPL(__imp__sub_820C7654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7658"))) PPC_WEAK_FUNC(sub_820C7658);
PPC_FUNC_IMPL(__imp__sub_820C7658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7680
	if (!ctx.cr6.eq) goto loc_820C7680;
loc_820C7670:
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
loc_820C7680:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7670
	if (!ctx.cr6.lt) goto loc_820C7670;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C76A8"))) PPC_WEAK_FUNC(sub_820C76A8);
PPC_FUNC_IMPL(__imp__sub_820C76A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c76d0
	if (!ctx.cr6.eq) goto loc_820C76D0;
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
loc_820C76D0:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C76E0"))) PPC_WEAK_FUNC(sub_820C76E0);
PPC_FUNC_IMPL(__imp__sub_820C76E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7700
	if (!ctx.cr6.eq) goto loc_820C7700;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C7700:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c7734
	if (ctx.cr6.eq) goto loc_820C7734;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c7738
	if (ctx.cr6.eq) goto loc_820C7738;
loc_820C7734:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C7738:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7740"))) PPC_WEAK_FUNC(sub_820C7740);
PPC_FUNC_IMPL(__imp__sub_820C7740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7760
	if (!ctx.cr6.eq) goto loc_820C7760;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C7760:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c7794
	if (!ctx.cr6.eq) goto loc_820C7794;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820c7798
	if (!ctx.cr6.eq) goto loc_820C7798;
loc_820C7794:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C7798:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C77A0"))) PPC_WEAK_FUNC(sub_820C77A0);
PPC_FUNC_IMPL(__imp__sub_820C77A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c77c8
	if (!ctx.cr6.eq) goto loc_820C77C8;
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
loc_820C77C8:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C77E4"))) PPC_WEAK_FUNC(sub_820C77E4);
PPC_FUNC_IMPL(__imp__sub_820C77E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C77E8"))) PPC_WEAK_FUNC(sub_820C77E8);
PPC_FUNC_IMPL(__imp__sub_820C77E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r9,r11,31216
	ctx.r9.s64 = ctx.r11.s64 + 31216;
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r10,92(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// stw r10,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C780C"))) PPC_WEAK_FUNC(sub_820C780C);
PPC_FUNC_IMPL(__imp__sub_820C780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7810"))) PPC_WEAK_FUNC(sub_820C7810);
PPC_FUNC_IMPL(__imp__sub_820C7810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r9,r11,31216
	ctx.r9.s64 = ctx.r11.s64 + 31216;
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r10,92(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// andc r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// stw r10,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7834"))) PPC_WEAK_FUNC(sub_820C7834);
PPC_FUNC_IMPL(__imp__sub_820C7834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7838"))) PPC_WEAK_FUNC(sub_820C7838);
PPC_FUNC_IMPL(__imp__sub_820C7838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,31216
	ctx.r10.s64 = ctx.r11.s64 + 31216;
	// lwz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7848"))) PPC_WEAK_FUNC(sub_820C7848);
PPC_FUNC_IMPL(__imp__sub_820C7848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,31216
	ctx.r10.s64 = ctx.r11.s64 + 31216;
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7858"))) PPC_WEAK_FUNC(sub_820C7858);
PPC_FUNC_IMPL(__imp__sub_820C7858) {
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
	// bne cr6,0x820c789c
	if (!ctx.cr6.eq) goto loc_820C789C;
	// bl 0x820ddca8
	ctx.lr = 0x820C7884;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c7894
	if (ctx.cr6.eq) goto loc_820C7894;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c78b8
	goto loc_820C78B8;
loc_820C7894:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820c78b8
	goto loc_820C78B8;
loc_820C789C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c78c8
	if (!ctx.cr6.eq) goto loc_820C78C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c7910
	if (ctx.cr6.eq) goto loc_820C7910;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820C78B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c78e8
	if (ctx.cr6.eq) goto loc_820C78E8;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820c78e8
	goto loc_820C78E8;
loc_820C78C8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c7910
	if (ctx.cr6.eq) goto loc_820C7910;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C78E4;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820C78E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c7910
	if (ctx.cr6.eq) goto loc_820C7910;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c7908
	if (!ctx.cr6.eq) goto loc_820C7908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820C7904;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820C7908:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x820c7914
	goto loc_820C7914;
loc_820C7910:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_820C7914:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r10,31216
	ctx.r9.s64 = ctx.r10.s64 + 31216;
	// stw r11,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820C7938"))) PPC_WEAK_FUNC(sub_820C7938);
PPC_FUNC_IMPL(__imp__sub_820C7938) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c8078
	sub_820C8078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C793C"))) PPC_WEAK_FUNC(sub_820C793C);
PPC_FUNC_IMPL(__imp__sub_820C793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7940"))) PPC_WEAK_FUNC(sub_820C7940);
PPC_FUNC_IMPL(__imp__sub_820C7940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r10,r11,31216
	ctx.r10.s64 = ctx.r11.s64 + 31216;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c79ec
	if (ctx.cr6.eq) goto loc_820C79EC;
	// lbz r11,4896(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c79ec
	if (ctx.cr6.eq) goto loc_820C79EC;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r6,r3,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_820C797C:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 + 100;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820c79b0
	if (ctx.cr6.eq) goto loc_820C79B0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// blt cr6,0x820c797c
	if (ctx.cr6.lt) goto loc_820C797C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_820C79B0:
	// addi r6,r10,104
	ctx.r6.s64 = ctx.r10.s64 + 104;
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// addi r7,r10,108
	ctx.r7.s64 = ctx.r10.s64 + 108;
	// li r8,6
	ctx.r8.s64 = 6;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// stwx r4,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820C79D4:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x820c79d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C79D4;
	// addi r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 + 132;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_820C79EC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C79F4"))) PPC_WEAK_FUNC(sub_820C79F4);
PPC_FUNC_IMPL(__imp__sub_820C79F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C79F8"))) PPC_WEAK_FUNC(sub_820C79F8);
PPC_FUNC_IMPL(__imp__sub_820C79F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,31216
	ctx.r9.s64 = ctx.r11.s64 + 31216;
	// slw r8,r10,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,4896(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r6,r3,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_820C7A30:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r9,100
	ctx.r10.s64 = ctx.r9.s64 + 100;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820c7a60
	if (ctx.cr6.eq) goto loc_820C7A60;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// blt cr6,0x820c7a30
	if (ctx.cr6.lt) goto loc_820C7A30;
	// blr 
	return;
loc_820C7A60:
	// addi r8,r9,104
	ctx.r8.s64 = ctx.r9.s64 + 104;
	// addi r7,r9,120
	ctx.r7.s64 = ctx.r9.s64 + 120;
	// li r6,2
	ctx.r6.s64 = 2;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// stwx r4,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// stfsx f1,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7A7C"))) PPC_WEAK_FUNC(sub_820C7A7C);
PPC_FUNC_IMPL(__imp__sub_820C7A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7A80"))) PPC_WEAK_FUNC(sub_820C7A80);
PPC_FUNC_IMPL(__imp__sub_820C7A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c7f90
	sub_820C7F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C7A84"))) PPC_WEAK_FUNC(sub_820C7A84);
PPC_FUNC_IMPL(__imp__sub_820C7A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7A88"))) PPC_WEAK_FUNC(sub_820C7A88);
PPC_FUNC_IMPL(__imp__sub_820C7A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lbz r9,4896(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4896);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r3,4896(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4896, ctx.r3.u8);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r5,4800
	ctx.r5.s64 = 4800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x8233eaf0
	sub_8233EAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C7ABC"))) PPC_WEAK_FUNC(sub_820C7ABC);
PPC_FUNC_IMPL(__imp__sub_820C7ABC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7AC0"))) PPC_WEAK_FUNC(sub_820C7AC0);
PPC_FUNC_IMPL(__imp__sub_820C7AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,31216
	ctx.r10.s64 = ctx.r11.s64 + 31216;
	// lbz r3,4896(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7AD0"))) PPC_WEAK_FUNC(sub_820C7AD0);
PPC_FUNC_IMPL(__imp__sub_820C7AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r5,4800
	ctx.r5.s64 = 4800;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x8233eaf0
	sub_8233EAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C7AE8"))) PPC_WEAK_FUNC(sub_820C7AE8);
PPC_FUNC_IMPL(__imp__sub_820C7AE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7AF0"))) PPC_WEAK_FUNC(sub_820C7AF0);
PPC_FUNC_IMPL(__imp__sub_820C7AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,31216
	ctx.r9.s64 = ctx.r11.s64 + 31216;
	// slw r8,r10,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7B14"))) PPC_WEAK_FUNC(sub_820C7B14);
PPC_FUNC_IMPL(__imp__sub_820C7B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7B18"))) PPC_WEAK_FUNC(sub_820C7B18);
PPC_FUNC_IMPL(__imp__sub_820C7B18) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7B20"))) PPC_WEAK_FUNC(sub_820C7B20);
PPC_FUNC_IMPL(__imp__sub_820C7B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c7b70
	if (ctx.cr6.eq) goto loc_820C7B70;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// slw r8,r9,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r3.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c7b70
	if (ctx.cr6.eq) goto loc_820C7B70;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7b70
	if (!ctx.cr6.lt) goto loc_820C7B70;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r3,r9,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// blr 
	return;
loc_820C7B70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7B78"))) PPC_WEAK_FUNC(sub_820C7B78);
PPC_FUNC_IMPL(__imp__sub_820C7B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7b98
	if (!ctx.cr6.eq) goto loc_820C7B98;
loc_820C7B90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C7B98:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7b90
	if (!ctx.cr6.lt) goto loc_820C7B90;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7BB0"))) PPC_WEAK_FUNC(sub_820C7BB0);
PPC_FUNC_IMPL(__imp__sub_820C7BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,31216
	ctx.r11.s64 = ctx.r11.s64 + 31216;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c7bd0
	if (!ctx.cr6.eq) goto loc_820C7BD0;
loc_820C7BC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C7BD0:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820c7bc8
	if (!ctx.cr6.lt) goto loc_820C7BC8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7BE8"))) PPC_WEAK_FUNC(sub_820C7BE8);
PPC_FUNC_IMPL(__imp__sub_820C7BE8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// slw r8,r10,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// addi r9,r11,31216
	ctx.r9.s64 = ctx.r11.s64 + 31216;
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// beq cr6,0x820c7c14
	if (ctx.cr6.eq) goto loc_820C7C14;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r11.u32);
	// blr 
	return;
loc_820C7C14:
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// stw r11,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7C20"))) PPC_WEAK_FUNC(sub_820C7C20);
PPC_FUNC_IMPL(__imp__sub_820C7C20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82160e70
	sub_82160E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C7C24"))) PPC_WEAK_FUNC(sub_820C7C24);
PPC_FUNC_IMPL(__imp__sub_820C7C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7C28"))) PPC_WEAK_FUNC(sub_820C7C28);
PPC_FUNC_IMPL(__imp__sub_820C7C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,31216
	ctx.r10.s64 = ctx.r11.s64 + 31216;
	// lbz r3,5080(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5080);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7C38"))) PPC_WEAK_FUNC(sub_820C7C38);
PPC_FUNC_IMPL(__imp__sub_820C7C38) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820C7C40;
	__savegprlr_14(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,30376
	ctx.r11.s64 = ctx.r11.s64 + 30376;
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
	// addi r10,r10,30432
	ctx.r10.s64 = ctx.r10.s64 + 30432;
	// addi r9,r9,30528
	ctx.r9.s64 = ctx.r9.s64 + 30528;
	// addi r8,r8,30624
	ctx.r8.s64 = ctx.r8.s64 + 30624;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// addi r7,r7,28904
	ctx.r7.s64 = ctx.r7.s64 + 28904;
	// stw r8,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r8.u32);
	// addi r6,r6,29008
	ctx.r6.s64 = ctx.r6.s64 + 29008;
	// addi r5,r5,29192
	ctx.r5.s64 = ctx.r5.s64 + 29192;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r4,r4,29376
	ctx.r4.s64 = ctx.r4.s64 + 29376;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r11,r31,29496
	ctx.r11.s64 = ctx.r31.s64 + 29496;
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r4,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r4.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
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
	// addi r10,r30,29568
	ctx.r10.s64 = ctx.r30.s64 + 29568;
	// addi r9,r29,29712
	ctx.r9.s64 = ctx.r29.s64 + 29712;
	// addi r8,r28,29856
	ctx.r8.s64 = ctx.r28.s64 + 29856;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r8,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// addi r7,r27,29936
	ctx.r7.s64 = ctx.r27.s64 + 29936;
	// addi r6,r26,30008
	ctx.r6.s64 = ctx.r26.s64 + 30008;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,30152
	ctx.r5.s64 = ctx.r25.s64 + 30152;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// addi r4,r24,30296
	ctx.r4.s64 = ctx.r24.s64 + 30296;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// addi r11,r23,30696
	ctx.r11.s64 = ctx.r23.s64 + 30696;
	// stw r5,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r4,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r4.u32);
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
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
	// addi r10,r22,30736
	ctx.r10.s64 = ctx.r22.s64 + 30736;
	// addi r9,r21,30808
	ctx.r9.s64 = ctx.r21.s64 + 30808;
	// addi r8,r20,31032
	ctx.r8.s64 = ctx.r20.s64 + 31032;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,31040
	ctx.r7.s64 = ctx.r19.s64 + 31040;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// addi r6,r18,31224
	ctx.r6.s64 = ctx.r18.s64 + 31224;
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// addi r5,r17,31368
	ctx.r5.s64 = ctx.r17.s64 + 31368;
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// addi r4,r16,31424
	ctx.r4.s64 = ctx.r16.s64 + 31424;
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// addi r11,r15,31440
	ctx.r11.s64 = ctx.r15.s64 + 31440;
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// addi r9,r10,30776
	ctx.r9.s64 = ctx.r10.s64 + 30776;
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// addi r8,r14,30792
	ctx.r8.s64 = ctx.r14.s64 + 30792;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r8,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r8.u32);
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// addi r6,r6,-6736
	ctx.r6.s64 = ctx.r6.s64 + -6736;
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r30,-32226
	ctx.r30.s64 = -2111963136;
	// addi r7,r7,-21912
	ctx.r7.s64 = ctx.r7.s64 + -21912;
	// addi r5,r5,-21912
	ctx.r5.s64 = ctx.r5.s64 + -21912;
	// addi r4,r4,-6736
	ctx.r4.s64 = ctx.r4.s64 + -6736;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// addi r10,r10,-6736
	ctx.r10.s64 = ctx.r10.s64 + -6736;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// addi r9,r9,31360
	ctx.r9.s64 = ctx.r9.s64 + 31360;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// addi r8,r8,-7056
	ctx.r8.s64 = ctx.r8.s64 + -7056;
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// addi r6,r30,-21912
	ctx.r6.s64 = ctx.r30.s64 + -21912;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r6,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r6.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// lis r22,-32226
	ctx.r22.s64 = -2111963136;
	// addi r7,r31,31464
	ctx.r7.s64 = ctx.r31.s64 + 31464;
	// addi r5,r29,31472
	ctx.r5.s64 = ctx.r29.s64 + 31472;
	// addi r4,r28,31512
	ctx.r4.s64 = ctx.r28.s64 + 31512;
	// stw r7,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r7.u32);
	// addi r11,r27,-6736
	ctx.r11.s64 = ctx.r27.s64 + -6736;
	// stw r5,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r5.u32);
	// addi r10,r26,31520
	ctx.r10.s64 = ctx.r26.s64 + 31520;
	// stw r4,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// addi r9,r25,31608
	ctx.r9.s64 = ctx.r25.s64 + 31608;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// addi r8,r24,31664
	ctx.r8.s64 = ctx.r24.s64 + 31664;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// addi r6,r22,-21912
	ctx.r6.s64 = ctx.r22.s64 + -21912;
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// lis r23,-32226
	ctx.r23.s64 = -2111963136;
	// stw r8,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r8.u32);
	// lis r21,-32242
	ctx.r21.s64 = -2113011712;
	// stw r6,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r6.u32);
	// lis r20,-32226
	ctx.r20.s64 = -2111963136;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r19,-32242
	ctx.r19.s64 = -2113011712;
	// lis r18,-32242
	ctx.r18.s64 = -2113011712;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// lis r16,-32226
	ctx.r16.s64 = -2111963136;
	// addi r7,r23,-21912
	ctx.r7.s64 = ctx.r23.s64 + -21912;
	// addi r5,r21,-6736
	ctx.r5.s64 = ctx.r21.s64 + -6736;
	// lis r15,-32226
	ctx.r15.s64 = -2111963136;
	// stw r7,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// addi r4,r20,-21912
	ctx.r4.s64 = ctx.r20.s64 + -21912;
	// stw r5,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// addi r11,r19,-6736
	ctx.r11.s64 = ctx.r19.s64 + -6736;
	// addi r10,r18,-6736
	ctx.r10.s64 = ctx.r18.s64 + -6736;
	// stw r4,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// addi r9,r17,31720
	ctx.r9.s64 = ctx.r17.s64 + 31720;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// addi r8,r16,-21912
	ctx.r8.s64 = ctx.r16.s64 + -21912;
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// lis r14,-32226
	ctx.r14.s64 = -2111963136;
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// addi r7,r15,-21912
	ctx.r7.s64 = ctx.r15.s64 + -21912;
	// stw r8,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r8.u32);
	// addi r5,r6,-15536
	ctx.r5.s64 = ctx.r6.s64 + -15536;
	// stw r7,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r7.u32);
	// addi r4,r14,-21912
	ctx.r4.s64 = ctx.r14.s64 + -21912;
	// stw r5,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r5.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// stw r4,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// addi r10,r10,-21912
	ctx.r10.s64 = ctx.r10.s64 + -21912;
	// addi r9,r9,-21912
	ctx.r9.s64 = ctx.r9.s64 + -21912;
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// addi r8,r8,-21912
	ctx.r8.s64 = ctx.r8.s64 + -21912;
	// stw r10,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r10.u32);
	// addi r7,r7,-21912
	ctx.r7.s64 = ctx.r7.s64 + -21912;
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// addi r6,r6,-21912
	ctx.r6.s64 = ctx.r6.s64 + -21912;
	// stw r8,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r8.u32);
	// addi r5,r5,-21912
	ctx.r5.s64 = ctx.r5.s64 + -21912;
	// stw r7,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r7.u32);
	// lis r4,-32226
	ctx.r4.s64 = -2111963136;
	// stw r6,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r6.u32);
	// lis r31,-32226
	ctx.r31.s64 = -2111963136;
	// stw r5,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r5.u32);
	// lis r30,-32226
	ctx.r30.s64 = -2111963136;
	// lis r29,-32226
	ctx.r29.s64 = -2111963136;
	// lis r28,-32226
	ctx.r28.s64 = -2111963136;
	// lis r27,-32226
	ctx.r27.s64 = -2111963136;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// addi r4,r4,-21912
	ctx.r4.s64 = ctx.r4.s64 + -21912;
	// addi r11,r31,-21912
	ctx.r11.s64 = ctx.r31.s64 + -21912;
	// addi r10,r30,-21912
	ctx.r10.s64 = ctx.r30.s64 + -21912;
	// stw r4,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r4.u32);
	// addi r9,r29,-21912
	ctx.r9.s64 = ctx.r29.s64 + -21912;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// addi r8,r28,-21912
	ctx.r8.s64 = ctx.r28.s64 + -21912;
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// addi r7,r27,-21912
	ctx.r7.s64 = ctx.r27.s64 + -21912;
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// addi r6,r26,31776
	ctx.r6.s64 = ctx.r26.s64 + 31776;
	// stw r8,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r8.u32);
	// addi r5,r25,31784
	ctx.r5.s64 = ctx.r25.s64 + 31784;
	// stw r7,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r7.u32);
	// stw r6,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r6.u32);
	// stw r5,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r5.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C7F90"))) PPC_WEAK_FUNC(sub_820C7F90);
PPC_FUNC_IMPL(__imp__sub_820C7F90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r10,31216
	ctx.r7.s64 = ctx.r10.s64 + 31216;
	// slw r8,r9,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r10,64(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820C7FCC:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c7ffc
	if (ctx.cr6.eq) goto loc_820C7FFC;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820c7ffc
	if (!ctx.cr6.eq) goto loc_820C7FFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820C7FFC:
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c8018
	if (ctx.cr6.eq) goto loc_820C8018;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820c8018
	if (!ctx.cr6.eq) goto loc_820C8018;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820C8018:
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c8034
	if (ctx.cr6.eq) goto loc_820C8034;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820c8034
	if (!ctx.cr6.eq) goto loc_820C8034;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820C8034:
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c8050
	if (ctx.cr6.eq) goto loc_820C8050;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820c8050
	if (!ctx.cr6.eq) goto loc_820C8050;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820C8050:
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c806c
	if (ctx.cr6.eq) goto loc_820C806C;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820c806c
	if (!ctx.cr6.eq) goto loc_820C806C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820C806C:
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// bdnz 0x820c7fcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C7FCC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C8078"))) PPC_WEAK_FUNC(sub_820C8078);
PPC_FUNC_IMPL(__imp__sub_820C8078) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// beq cr6,0x820c8124
	if (ctx.cr6.eq) goto loc_820C8124;
	// addi r31,r11,31216
	ctx.r31.s64 = ctx.r11.s64 + 31216;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c80c0
	if (ctx.cr6.eq) goto loc_820C80C0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820C80B8;
	sub_82080000(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_820C80C0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c80d4
	if (ctx.cr6.eq) goto loc_820C80D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_820C80D4:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820c80f0
	if (!ctx.cr6.gt) goto loc_820C80F0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820C80F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820C8100;
	sub_82082030(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x820C811C;
	sub_8233EAF0(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// b 0x820c812c
	goto loc_820C812C;
loc_820C8124:
	// addi r10,r11,31216
	ctx.r10.s64 = ctx.r11.s64 + 31216;
	// stw r30,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r30.u32);
loc_820C812C:
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

__attribute__((alias("__imp__sub_820C8144"))) PPC_WEAK_FUNC(sub_820C8144);
PPC_FUNC_IMPL(__imp__sub_820C8144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C8148"))) PPC_WEAK_FUNC(sub_820C8148);
PPC_FUNC_IMPL(__imp__sub_820C8148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820C8150;
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
loc_820C817C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820c81d0
	if (!ctx.cr6.eq) goto loc_820C81D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c8254
	if (!ctx.cr6.eq) goto loc_820C8254;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C8194;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c81a0
	if (!ctx.cr6.eq) goto loc_820C81A0;
	// bl 0x821b3000
	ctx.lr = 0x820C81A0;
	sub_821B3000(ctx, base);
loc_820C81A0:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c81c8
	if (ctx.cr6.eq) goto loc_820C81C8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c81c8
	if (ctx.cr6.eq) goto loc_820C81C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820c81ec
	goto loc_820C81EC;
loc_820C81C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c81ec
	goto loc_820C81EC;
loc_820C81D0:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820c8218
	if (!ctx.cr6.eq) goto loc_820C8218;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8254
	if (ctx.cr6.eq) goto loc_820C8254;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c8254
	if (!ctx.cr6.eq) goto loc_820C8254;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C81EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8208
	if (ctx.cr6.eq) goto loc_820C8208;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-260
	ctx.r10.s64 = ctx.r10.s64 + -260;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820C8208:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8244
	if (ctx.cr6.eq) goto loc_820C8244;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820c8244
	goto loc_820C8244;
loc_820C8218:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820c8228
	if (!ctx.cr6.eq) goto loc_820C8228;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c8240
	goto loc_820C8240;
loc_820C8228:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C8240;
	sub_820F3178(ctx, base);
loc_820C8240:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C8244:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8254
	if (ctx.cr6.eq) goto loc_820C8254;
	// stfs f31,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// b 0x820c817c
	goto loc_820C817C;
loc_820C8254:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8260"))) PPC_WEAK_FUNC(sub_820C8260);
PPC_FUNC_IMPL(__imp__sub_820C8260) {
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
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820C8298;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c82e8
	if (ctx.cr6.eq) goto loc_820C82E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820C82AC:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// stfs f31,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// bgt cr6,0x820c82c4
	if (ctx.cr6.gt) goto loc_820C82C4;
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
loc_820C82C4:
	// stw r10,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820C82E0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c82ac
	if (!ctx.cr6.eq) goto loc_820C82AC;
loc_820C82E8:
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

__attribute__((alias("__imp__sub_820C8308"))) PPC_WEAK_FUNC(sub_820C8308);
PPC_FUNC_IMPL(__imp__sub_820C8308) {
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
	// bne cr6,0x820c8348
	if (!ctx.cr6.eq) goto loc_820C8348;
	// bl 0x820ddca8
	ctx.lr = 0x820C8330;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c8340
	if (ctx.cr6.eq) goto loc_820C8340;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c8364
	goto loc_820C8364;
loc_820C8340:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c8364
	goto loc_820C8364;
loc_820C8348:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c8390
	if (!ctx.cr6.eq) goto loc_820C8390;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c83d8
	if (ctx.cr6.eq) goto loc_820C83D8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C8364:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8380
	if (ctx.cr6.eq) goto loc_820C8380;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-260
	ctx.r10.s64 = ctx.r10.s64 + -260;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820C8380:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c83b8
	if (ctx.cr6.eq) goto loc_820C83B8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820c83b8
	goto loc_820C83B8;
loc_820C8390:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820c83a0
	if (!ctx.cr6.eq) goto loc_820C83A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c83b8
	goto loc_820C83B8;
loc_820C83A0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C83B4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C83B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c83d8
	if (ctx.cr6.eq) goto loc_820C83D8;
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
loc_820C83D8:
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

__attribute__((alias("__imp__sub_820C83F8"))) PPC_WEAK_FUNC(sub_820C83F8);
PPC_FUNC_IMPL(__imp__sub_820C83F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C8400;
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
loc_820C8428:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820c847c
	if (!ctx.cr6.eq) goto loc_820C847C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c8510
	if (!ctx.cr6.eq) goto loc_820C8510;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C8440;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c844c
	if (!ctx.cr6.eq) goto loc_820C844C;
	// bl 0x821b3000
	ctx.lr = 0x820C844C;
	sub_821B3000(ctx, base);
loc_820C844C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c8474
	if (ctx.cr6.eq) goto loc_820C8474;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8474
	if (ctx.cr6.eq) goto loc_820C8474;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820c8498
	goto loc_820C8498;
loc_820C8474:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820c8498
	goto loc_820C8498;
loc_820C847C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820c84c4
	if (!ctx.cr6.eq) goto loc_820C84C4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8510
	if (ctx.cr6.eq) goto loc_820C8510;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c8510
	if (!ctx.cr6.eq) goto loc_820C8510;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C8498:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c84b4
	if (ctx.cr6.eq) goto loc_820C84B4;
	// lwz r11,280(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 280);
	// addi r11,r11,-260
	ctx.r11.s64 = ctx.r11.s64 + -260;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 & ctx.r5.u64;
loc_820C84B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c84ec
	if (ctx.cr6.eq) goto loc_820C84EC;
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// b 0x820c84ec
	goto loc_820C84EC;
loc_820C84C4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820c84d4
	if (!ctx.cr6.eq) goto loc_820C84D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820c84ec
	goto loc_820C84EC;
loc_820C84D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C84E8;
	sub_820F3178(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_820C84EC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c8510
	if (ctx.cr6.eq) goto loc_820C8510;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,304(r5)
	PPC_STORE_U32(ctx.r5.u32 + 304, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,308(r5)
	PPC_STORE_U32(ctx.r5.u32 + 308, ctx.r10.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,312(r5)
	PPC_STORE_U32(ctx.r5.u32 + 312, ctx.r9.u32);
	// b 0x820c8428
	goto loc_820C8428;
loc_820C8510:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8518"))) PPC_WEAK_FUNC(sub_820C8518);
PPC_FUNC_IMPL(__imp__sub_820C8518) {
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
	// bne cr6,0x820c8560
	if (!ctx.cr6.eq) goto loc_820C8560;
	// bl 0x820ddca8
	ctx.lr = 0x820C8548;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c8558
	if (ctx.cr6.eq) goto loc_820C8558;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c857c
	goto loc_820C857C;
loc_820C8558:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c857c
	goto loc_820C857C;
loc_820C8560:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c85a8
	if (!ctx.cr6.eq) goto loc_820C85A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c85f0
	if (ctx.cr6.eq) goto loc_820C85F0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C857C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8598
	if (ctx.cr6.eq) goto loc_820C8598;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-260
	ctx.r10.s64 = ctx.r10.s64 + -260;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820C8598:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c85d0
	if (ctx.cr6.eq) goto loc_820C85D0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820c85d0
	goto loc_820C85D0;
loc_820C85A8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820c85b8
	if (!ctx.cr6.eq) goto loc_820C85B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c85d0
	goto loc_820C85D0;
loc_820C85B8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C85CC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C85D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c85f0
	if (ctx.cr6.eq) goto loc_820C85F0;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,308(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,312(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
loc_820C85F0:
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

__attribute__((alias("__imp__sub_820C8608"))) PPC_WEAK_FUNC(sub_820C8608);
PPC_FUNC_IMPL(__imp__sub_820C8608) {
	PPC_FUNC_PROLOGUE();
	// lis r3,192
	ctx.r3.s64 = 12582912;
	// ori r3,r3,65518
	ctx.r3.u64 = ctx.r3.u64 | 65518;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C8614"))) PPC_WEAK_FUNC(sub_820C8614);
PPC_FUNC_IMPL(__imp__sub_820C8614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C8618"))) PPC_WEAK_FUNC(sub_820C8618);
PPC_FUNC_IMPL(__imp__sub_820C8618) {
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
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820C863C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c8708
	if (ctx.cr6.eq) goto loc_820C8708;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,308(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c868c
	if (ctx.cr6.eq) goto loc_820C868C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c86a0
	goto loc_820C86A0;
loc_820C868C:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c86a0
	if (!ctx.cr6.eq) goto loc_820C86A0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_820C86A0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lfs f0,320(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f12,336(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f11,344(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r10,356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,364(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lfs f10,368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,60(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f9,372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,64(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f8,376(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,68(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f7,380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,72(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// bne cr6,0x820c8708
	if (!ctx.cr6.eq) goto loc_820C8708;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_820C8708:
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

__attribute__((alias("__imp__sub_820C871C"))) PPC_WEAK_FUNC(sub_820C871C);
PPC_FUNC_IMPL(__imp__sub_820C871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C8720"))) PPC_WEAK_FUNC(sub_820C8720);
PPC_FUNC_IMPL(__imp__sub_820C8720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820C8728;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820C874C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c8a00
	if (ctx.cr6.eq) goto loc_820C8A00;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r29,r11,6936
	ctx.r29.s64 = ctx.r11.s64 + 6936;
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r10,-7224
	ctx.r27.s64 = ctx.r10.s64 + -7224;
loc_820C877C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// stfs f13,316(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// bgt cr6,0x820c87a8
	if (ctx.cr6.gt) goto loc_820C87A8;
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
loc_820C87A8:
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// lfs f13,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820c87e0
	if (ctx.cr6.eq) goto loc_820C87E0;
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
loc_820C87E0:
	// lfs f1,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,336(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// bl 0x8233c950
	ctx.lr = 0x820C87EC;
	sub_8233C950(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f1,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,344(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// bl 0x8233c950
	ctx.lr = 0x820C8800;
	sub_8233C950(ctx, base);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// beq cr6,0x820c884c
	if (ctx.cr6.eq) goto loc_820C884C;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c8840
	if (ctx.cr6.eq) goto loc_820C8840;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r3,r27,16696
	ctx.r3.s64 = ctx.r27.s64 + 16696;
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// bl 0x82173038
	ctx.lr = 0x820C8840;
	sub_82173038(ctx, base);
loc_820C8840:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// bl 0x82172d60
	ctx.lr = 0x820C8848;
	sub_82172D60(ctx, base);
	// stw r28,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r28.u32);
loc_820C884C:
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820c88dc
	if (ctx.cr6.eq) goto loc_820C88DC;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x820c888c
	if (!ctx.cr6.lt) goto loc_820C888C;
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
	// bne cr6,0x820c888c
	if (!ctx.cr6.eq) goto loc_820C888C;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c8894
	if (!ctx.cr6.eq) goto loc_820C8894;
loc_820C888C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820c88b4
	goto loc_820C88B4;
loc_820C8894:
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
loc_820C8898:
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
	// bne 0x820c8898
	if (!ctx.cr0.eq) goto loc_820C8898;
loc_820C88B4:
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c88dc
	if (ctx.cr6.eq) goto loc_820C88DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c88dc
	if (ctx.cr6.eq) goto loc_820C88DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82177f68
	ctx.lr = 0x820C88DC;
	sub_82177F68(ctx, base);
loc_820C88DC:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f13,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f12,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lfs f11,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,380(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,80
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 80, ctx.xer);
	// bne cr6,0x820c89d8
	if (!ctx.cr6.eq) goto loc_820C89D8;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// beq cr6,0x820c8944
	if (ctx.cr6.eq) goto loc_820C8944;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8938
	if (ctx.cr6.eq) goto loc_820C8938;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x820C8938;
	sub_82178200(ctx, base);
loc_820C8938:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// bl 0x82172d60
	ctx.lr = 0x820C8940;
	sub_82172D60(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
loc_820C8944:
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820c89dc
	if (ctx.cr6.eq) goto loc_820C89DC;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x820c8984
	if (!ctx.cr6.lt) goto loc_820C8984;
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
	// bne cr6,0x820c8984
	if (!ctx.cr6.eq) goto loc_820C8984;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c898c
	if (!ctx.cr6.eq) goto loc_820C898C;
loc_820C8984:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820c89ac
	goto loc_820C89AC;
loc_820C898C:
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
loc_820C8990:
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
	// bne 0x820c8990
	if (!ctx.cr0.eq) goto loc_820C8990;
loc_820C89AC:
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c89dc
	if (ctx.cr6.eq) goto loc_820C89DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c89dc
	if (ctx.cr6.eq) goto loc_820C89DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82177f68
	ctx.lr = 0x820C89D4;
	sub_82177F68(ctx, base);
	// b 0x820c89dc
	goto loc_820C89DC;
loc_820C89D8:
	// stw r24,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r24.u32);
loc_820C89DC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82085870
	ctx.lr = 0x820C89F4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c877c
	if (!ctx.cr6.eq) goto loc_820C877C;
loc_820C8A00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8A0C"))) PPC_WEAK_FUNC(sub_820C8A0C);
PPC_FUNC_IMPL(__imp__sub_820C8A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C8A10"))) PPC_WEAK_FUNC(sub_820C8A10);
PPC_FUNC_IMPL(__imp__sub_820C8A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C8A18;
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
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820C8A3C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c8a98
	if (ctx.cr6.eq) goto loc_820C8A98;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
loc_820C8A50:
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// addi r11,r3,284
	ctx.r11.s64 = ctx.r3.s64 + 284;
	// stw r31,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c8a78
	if (ctx.cr6.eq) goto loc_820C8A78;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,12(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
loc_820C8A78:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820C8A90;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c8a50
	if (!ctx.cr6.eq) goto loc_820C8A50;
loc_820C8A98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8AA4"))) PPC_WEAK_FUNC(sub_820C8AA4);
PPC_FUNC_IMPL(__imp__sub_820C8AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C8AA8"))) PPC_WEAK_FUNC(sub_820C8AA8);
PPC_FUNC_IMPL(__imp__sub_820C8AA8) {
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
	// bne cr6,0x820c8ae8
	if (!ctx.cr6.eq) goto loc_820C8AE8;
	// bl 0x820ddca8
	ctx.lr = 0x820C8AD0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c8ae0
	if (ctx.cr6.eq) goto loc_820C8AE0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c8b04
	goto loc_820C8B04;
loc_820C8AE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c8b04
	goto loc_820C8B04;
loc_820C8AE8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c8b30
	if (!ctx.cr6.eq) goto loc_820C8B30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8b78
	if (ctx.cr6.eq) goto loc_820C8B78;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C8B04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8b20
	if (ctx.cr6.eq) goto loc_820C8B20;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-260
	ctx.r10.s64 = ctx.r10.s64 + -260;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820C8B20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8b58
	if (ctx.cr6.eq) goto loc_820C8B58;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820c8b58
	goto loc_820C8B58;
loc_820C8B30:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820c8b40
	if (!ctx.cr6.eq) goto loc_820C8B40;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c8b58
	goto loc_820C8B58;
loc_820C8B40:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C8B54;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C8B58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8b78
	if (ctx.cr6.eq) goto loc_820C8B78;
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
loc_820C8B78:
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

__attribute__((alias("__imp__sub_820C8B90"))) PPC_WEAK_FUNC(sub_820C8B90);
PPC_FUNC_IMPL(__imp__sub_820C8B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82107a20
	sub_82107A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8B94"))) PPC_WEAK_FUNC(sub_820C8B94);
PPC_FUNC_IMPL(__imp__sub_820C8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C8B98"))) PPC_WEAK_FUNC(sub_820C8B98);
PPC_FUNC_IMPL(__imp__sub_820C8B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C8BA0;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r26,r10,1
	ctx.r26.u64 = ctx.r10.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r27,r9,6
	ctx.r27.u64 = ctx.r9.u64 | 6;
loc_820C8BC8:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820c8c1c
	if (!ctx.cr6.eq) goto loc_820C8C1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c8cb0
	if (!ctx.cr6.eq) goto loc_820C8CB0;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C8BE0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c8bec
	if (!ctx.cr6.eq) goto loc_820C8BEC;
	// bl 0x821b3000
	ctx.lr = 0x820C8BEC;
	sub_821B3000(ctx, base);
loc_820C8BEC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c8c14
	if (ctx.cr6.eq) goto loc_820C8C14;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8c14
	if (ctx.cr6.eq) goto loc_820C8C14;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820c8c38
	goto loc_820C8C38;
loc_820C8C14:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c8c38
	goto loc_820C8C38;
loc_820C8C1C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820c8c64
	if (!ctx.cr6.eq) goto loc_820C8C64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8cb0
	if (ctx.cr6.eq) goto loc_820C8CB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c8cb0
	if (!ctx.cr6.eq) goto loc_820C8CB0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C8C38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8c54
	if (ctx.cr6.eq) goto loc_820C8C54;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-260
	ctx.r10.s64 = ctx.r10.s64 + -260;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820C8C54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8c90
	if (ctx.cr6.eq) goto loc_820C8C90;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820c8c90
	goto loc_820C8C90;
loc_820C8C64:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820c8c74
	if (!ctx.cr6.eq) goto loc_820C8C74;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c8c90
	goto loc_820C8C90;
loc_820C8C74:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C8C8C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820C8C90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8cb0
	if (ctx.cr6.eq) goto loc_820C8CB0;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// stb r9,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r9.u8);
	// lfs f0,436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// b 0x820c8bc8
	goto loc_820C8BC8;
loc_820C8CB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8CB8"))) PPC_WEAK_FUNC(sub_820C8CB8);
PPC_FUNC_IMPL(__imp__sub_820C8CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820C8CC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820C8CE0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c8d7c
	if (ctx.cr6.eq) goto loc_820C8D7C;
loc_820C8CEC:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lbz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8d18
	if (ctx.cr6.eq) goto loc_820C8D18;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c8d18
	if (!ctx.cr6.eq) goto loc_820C8D18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c93f8
	ctx.lr = 0x820C8D14;
	sub_820C93F8(ctx, base);
	// b 0x820c8d34
	goto loc_820C8D34;
loc_820C8D18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c8d34
	if (!ctx.cr6.eq) goto loc_820C8D34;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8d34
	if (ctx.cr6.eq) goto loc_820C8D34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9370
	ctx.lr = 0x820C8D34;
	sub_820C9370(ctx, base);
loc_820C8D34:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// bne cr6,0x820c8d4c
	if (!ctx.cr6.eq) goto loc_820C8D4C;
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_820C8D4C:
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820C8D70;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c8cec
	if (!ctx.cr6.eq) goto loc_820C8CEC;
loc_820C8D7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8D84"))) PPC_WEAK_FUNC(sub_820C8D84);
PPC_FUNC_IMPL(__imp__sub_820C8D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C8D88"))) PPC_WEAK_FUNC(sub_820C8D88);
PPC_FUNC_IMPL(__imp__sub_820C8D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C8D90;
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
loc_820C8DB8:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820c8e0c
	if (!ctx.cr6.eq) goto loc_820C8E0C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c8ea8
	if (!ctx.cr6.eq) goto loc_820C8EA8;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C8DD0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c8ddc
	if (!ctx.cr6.eq) goto loc_820C8DDC;
	// bl 0x821b3000
	ctx.lr = 0x820C8DDC;
	sub_821B3000(ctx, base);
loc_820C8DDC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c8e04
	if (ctx.cr6.eq) goto loc_820C8E04;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8e04
	if (ctx.cr6.eq) goto loc_820C8E04;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820c8e28
	goto loc_820C8E28;
loc_820C8E04:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820c8e28
	goto loc_820C8E28;
loc_820C8E0C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820c8e54
	if (!ctx.cr6.eq) goto loc_820C8E54;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8ea8
	if (ctx.cr6.eq) goto loc_820C8EA8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c8ea8
	if (!ctx.cr6.eq) goto loc_820C8EA8;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C8E28:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c8e44
	if (ctx.cr6.eq) goto loc_820C8E44;
	// lwz r11,280(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 280);
	// addi r11,r11,-260
	ctx.r11.s64 = ctx.r11.s64 + -260;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 & ctx.r5.u64;
loc_820C8E44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c8e7c
	if (ctx.cr6.eq) goto loc_820C8E7C;
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// b 0x820c8e7c
	goto loc_820C8E7C;
loc_820C8E54:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820c8e64
	if (!ctx.cr6.eq) goto loc_820C8E64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820c8e7c
	goto loc_820C8E7C;
loc_820C8E64:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C8E78;
	sub_820F3178(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_820C8E7C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c8ea8
	if (ctx.cr6.eq) goto loc_820C8EA8;
	// lwz r11,300(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 300);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// lfs f0,440(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lwz r9,300(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 300);
	// rlwinm r8,r9,11,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7;
	// stw r8,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r8.u32);
	// b 0x820c8db8
	goto loc_820C8DB8;
loc_820C8EA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8EB0"))) PPC_WEAK_FUNC(sub_820C8EB0);
PPC_FUNC_IMPL(__imp__sub_820C8EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820C8EB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820C8ED8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c8f84
	if (ctx.cr6.eq) goto loc_820C8F84;
loc_820C8EE4:
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r9,r11,256
	ctx.r9.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x820c8efc
	if (!ctx.cr6.eq) goto loc_820C8EFC;
	// rlwinm r9,r11,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_820C8EFC:
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r11,r8,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm r7,r9,6,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c8f60
	if (ctx.cr6.eq) goto loc_820C8F60;
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8f48
	if (ctx.cr6.eq) goto loc_820C8F48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c8f48
	if (!ctx.cr6.eq) goto loc_820C8F48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c92e8
	ctx.lr = 0x820C8F44;
	sub_820C92E8(ctx, base);
	// b 0x820c8f60
	goto loc_820C8F60;
loc_820C8F48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c8f60
	if (!ctx.cr6.eq) goto loc_820C8F60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c8f60
	if (ctx.cr6.eq) goto loc_820C8F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9250
	ctx.lr = 0x820C8F60;
	sub_820C9250(ctx, base);
loc_820C8F60:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820C8F78;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c8ee4
	if (!ctx.cr6.eq) goto loc_820C8EE4;
loc_820C8F84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C8F8C"))) PPC_WEAK_FUNC(sub_820C8F8C);
PPC_FUNC_IMPL(__imp__sub_820C8F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C8F90"))) PPC_WEAK_FUNC(sub_820C8F90);
PPC_FUNC_IMPL(__imp__sub_820C8F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C8F98;
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
loc_820C8FC0:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820c9014
	if (!ctx.cr6.eq) goto loc_820C9014;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c90c0
	if (!ctx.cr6.eq) goto loc_820C90C0;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820C8FD8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c8fe4
	if (!ctx.cr6.eq) goto loc_820C8FE4;
	// bl 0x821b3000
	ctx.lr = 0x820C8FE4;
	sub_821B3000(ctx, base);
loc_820C8FE4:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c900c
	if (ctx.cr6.eq) goto loc_820C900C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c900c
	if (ctx.cr6.eq) goto loc_820C900C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820c9030
	goto loc_820C9030;
loc_820C900C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820c9030
	goto loc_820C9030;
loc_820C9014:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820c905c
	if (!ctx.cr6.eq) goto loc_820C905C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c90c0
	if (ctx.cr6.eq) goto loc_820C90C0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c90c0
	if (!ctx.cr6.eq) goto loc_820C90C0;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C9030:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c904c
	if (ctx.cr6.eq) goto loc_820C904C;
	// lwz r11,280(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 280);
	// addi r11,r11,-260
	ctx.r11.s64 = ctx.r11.s64 + -260;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 & ctx.r5.u64;
loc_820C904C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9084
	if (ctx.cr6.eq) goto loc_820C9084;
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// b 0x820c9084
	goto loc_820C9084;
loc_820C905C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820c906c
	if (!ctx.cr6.eq) goto loc_820C906C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820c9084
	goto loc_820C9084;
loc_820C906C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C9080;
	sub_820F3178(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_820C9084:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c90c0
	if (ctx.cr6.eq) goto loc_820C90C0;
	// lwz r11,300(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 300);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// lwz r9,300(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 300);
	// rlwinm r8,r9,19,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1;
	// stb r8,9(r29)
	PPC_STORE_U8(ctx.r29.u32 + 9, ctx.r8.u8);
	// lfs f0,468(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lfs f13,472(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// lfs f12,476(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// b 0x820c8fc0
	goto loc_820C8FC0;
loc_820C90C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C90C8"))) PPC_WEAK_FUNC(sub_820C90C8);
PPC_FUNC_IMPL(__imp__sub_820C90C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C90D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820C90F0;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c916c
	if (ctx.cr6.eq) goto loc_820C916C;
loc_820C90FC:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,300(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 300);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// bne cr6,0x820c9114
	if (!ctx.cr6.eq) goto loc_820C9114;
	// rlwinm r10,r11,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
loc_820C9114:
	// stw r10,300(r5)
	PPC_STORE_U32(ctx.r5.u32 + 300, ctx.r10.u32);
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// bne cr6,0x820c9130
	if (!ctx.cr6.eq) goto loc_820C9130;
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_820C9130:
	// stw r10,300(r5)
	PPC_STORE_U32(ctx.r5.u32 + 300, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,468(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 468, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,472(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 472, temp.u32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,476(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 476, temp.u32);
	// bl 0x82085870
	ctx.lr = 0x820C9160;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c90fc
	if (!ctx.cr6.eq) goto loc_820C90FC;
loc_820C916C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9174"))) PPC_WEAK_FUNC(sub_820C9174);
PPC_FUNC_IMPL(__imp__sub_820C9174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9178"))) PPC_WEAK_FUNC(sub_820C9178);
PPC_FUNC_IMPL(__imp__sub_820C9178) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820C9180;
	__savegprlr_23(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-32440
	ctx.r11.s64 = ctx.r11.s64 + -32440;
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
	// addi r10,r10,-32160
	ctx.r10.s64 = ctx.r10.s64 + -32160;
	// addi r9,r9,-31992
	ctx.r9.s64 = ctx.r9.s64 + -31992;
	// addi r8,r8,-31752
	ctx.r8.s64 = ctx.r8.s64 + -31752;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r7,-31464
	ctx.r7.s64 = ctx.r7.s64 + -31464;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r6,r6,-31224
	ctx.r6.s64 = ctx.r6.s64 + -31224;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// addi r5,r5,-31208
	ctx.r5.s64 = ctx.r5.s64 + -31208;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// addi r4,r4,-30944
	ctx.r4.s64 = ctx.r4.s64 + -30944;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r11,r31,-30192
	ctx.r11.s64 = ctx.r31.s64 + -30192;
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
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
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// addi r10,r30,-30040
	ctx.r10.s64 = ctx.r30.s64 + -30040;
	// addi r9,r29,-29808
	ctx.r9.s64 = ctx.r29.s64 + -29808;
	// addi r8,r28,-29800
	ctx.r8.s64 = ctx.r28.s64 + -29800;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r7,r27,-29512
	ctx.r7.s64 = ctx.r27.s64 + -29512;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// addi r6,r26,-29304
	ctx.r6.s64 = ctx.r26.s64 + -29304;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// addi r5,r25,-29008
	ctx.r5.s64 = ctx.r25.s64 + -29008;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// addi r4,r24,-28784
	ctx.r4.s64 = ctx.r24.s64 + -28784;
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// addi r11,r23,-28472
	ctx.r11.s64 = ctx.r23.s64 + -28472;
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9250"))) PPC_WEAK_FUNC(sub_820C9250);
PPC_FUNC_IMPL(__imp__sub_820C9250) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,20000
	ctx.r30.s64 = ctx.r11.s64 + 20000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// bl 0x823052d8
	ctx.lr = 0x820C9284;
	sub_823052D8(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c92c0
	if (ctx.cr6.eq) goto loc_820C92C0;
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c92c4
	if (!ctx.cr6.eq) goto loc_820C92C4;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16736
	ctx.r3.s64 = ctx.r11.s64 + -16736;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// bl 0x82106098
	ctx.lr = 0x820C92C0;
	sub_82106098(ctx, base);
loc_820C92C0:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
loc_820C92C4:
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// bl 0x823051a8
	ctx.lr = 0x820C92CC;
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

__attribute__((alias("__imp__sub_820C92E4"))) PPC_WEAK_FUNC(sub_820C92E4);
PPC_FUNC_IMPL(__imp__sub_820C92E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C92E8"))) PPC_WEAK_FUNC(sub_820C92E8);
PPC_FUNC_IMPL(__imp__sub_820C92E8) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,20000
	ctx.r30.s64 = ctx.r11.s64 + 20000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// bl 0x823052d8
	ctx.lr = 0x820C931C;
	sub_823052D8(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c934c
	if (ctx.cr6.eq) goto loc_820C934C;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16736
	ctx.r3.s64 = ctx.r11.s64 + -16736;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// bl 0x822184b8
	ctx.lr = 0x820C9348;
	sub_822184B8(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
loc_820C934C:
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// bl 0x823051a8
	ctx.lr = 0x820C9354;
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

__attribute__((alias("__imp__sub_820C936C"))) PPC_WEAK_FUNC(sub_820C936C);
PPC_FUNC_IMPL(__imp__sub_820C936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9370"))) PPC_WEAK_FUNC(sub_820C9370);
PPC_FUNC_IMPL(__imp__sub_820C9370) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,20000
	ctx.r30.s64 = ctx.r11.s64 + 20000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// bl 0x823052d8
	ctx.lr = 0x820C93A4;
	sub_823052D8(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c93d4
	if (!ctx.cr6.eq) goto loc_820C93D4;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16856
	ctx.r3.s64 = ctx.r11.s64 + -16856;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// bl 0x82106098
	ctx.lr = 0x820C93D0;
	sub_82106098(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
loc_820C93D4:
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// bl 0x823051a8
	ctx.lr = 0x820C93DC;
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

__attribute__((alias("__imp__sub_820C93F4"))) PPC_WEAK_FUNC(sub_820C93F4);
PPC_FUNC_IMPL(__imp__sub_820C93F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C93F8"))) PPC_WEAK_FUNC(sub_820C93F8);
PPC_FUNC_IMPL(__imp__sub_820C93F8) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,20000
	ctx.r30.s64 = ctx.r11.s64 + 20000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// bl 0x823052d8
	ctx.lr = 0x820C942C;
	sub_823052D8(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c945c
	if (ctx.cr6.eq) goto loc_820C945C;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16856
	ctx.r3.s64 = ctx.r11.s64 + -16856;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// bl 0x822184b8
	ctx.lr = 0x820C9458;
	sub_822184B8(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
loc_820C945C:
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// bl 0x823051a8
	ctx.lr = 0x820C9464;
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

__attribute__((alias("__imp__sub_820C947C"))) PPC_WEAK_FUNC(sub_820C947C);
PPC_FUNC_IMPL(__imp__sub_820C947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9480"))) PPC_WEAK_FUNC(sub_820C9480);
PPC_FUNC_IMPL(__imp__sub_820C9480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C9488;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x820ddca8
	ctx.lr = 0x820C94A4;
	sub_820DDCA8(ctx, base);
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
	ctx.lr = 0x820C94BC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9508
	if (ctx.cr6.eq) goto loc_820C9508;
loc_820C94C8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c94e4
	if (ctx.cr6.eq) goto loc_820C94E4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820daea8
	ctx.lr = 0x820C94E0;
	sub_820DAEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C94E4:
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
	ctx.lr = 0x820C94FC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c94c8
	if (!ctx.cr6.eq) goto loc_820C94C8;
loc_820C9508:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9514"))) PPC_WEAK_FUNC(sub_820C9514);
PPC_FUNC_IMPL(__imp__sub_820C9514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9518"))) PPC_WEAK_FUNC(sub_820C9518);
PPC_FUNC_IMPL(__imp__sub_820C9518) {
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
	// bl 0x820ddca8
	ctx.lr = 0x820C9530;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c9550
	if (!ctx.cr6.eq) goto loc_820C9550;
loc_820C9538:
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
loc_820C9550:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9538
	if (ctx.cr6.eq) goto loc_820C9538;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82170688
	ctx.lr = 0x820C9564;
	sub_82170688(ctx, base);
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

__attribute__((alias("__imp__sub_820C9578"))) PPC_WEAK_FUNC(sub_820C9578);
PPC_FUNC_IMPL(__imp__sub_820C9578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e438
	ctx.lr = 0x820C9580;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r3.u64);
	// std r4,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r4.u64);
	// std r5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// std r6,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r6.u64);
	// std r7,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r7.u64);
	// std r8,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r8.u64);
	// std r9,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r9.u64);
	// std r10,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r10.u64);
	// bl 0x820ddca8
	ctx.lr = 0x820C95A8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9698
	if (ctx.cr6.eq) goto loc_820C9698;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c9698
	if (ctx.cr6.eq) goto loc_820C9698;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r11,192
	ctx.r31.s64 = ctx.r11.s64 + 192;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r28,8(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r27,0(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r26,4(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r25,8(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r24,0(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r23,4(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r22,8(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r21,0(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r20,4(r6)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r19,8(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r18,0(r5)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r17,4(r5)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r16,8(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r4,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r4.u32);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// stw r31,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r31.u32);
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r30,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r30.u32);
	// stw r29,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r29.u32);
	// stw r28,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r28.u32);
	// stw r9,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r9.u32);
	// stw r27,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r27.u32);
	// stw r26,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r26.u32);
	// stw r25,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r25.u32);
	// stw r8,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r8.u32);
	// stw r24,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r24.u32);
	// stw r23,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r23.u32);
	// stw r22,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r22.u32);
	// stw r7,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r7.u32);
	// stw r21,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r21.u32);
	// stw r20,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r20.u32);
	// stw r19,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r19.u32);
	// stw r6,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r6.u32);
	// stw r18,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r18.u32);
	// stw r17,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r17.u32);
	// stw r16,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r16.u32);
	// stw r5,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r5.u32);
loc_820C9698:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e488
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C96A0"))) PPC_WEAK_FUNC(sub_820C96A0);
PPC_FUNC_IMPL(__imp__sub_820C96A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C96A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x820ddca8
	ctx.lr = 0x820C96C8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c96f8
	if (ctx.cr6.eq) goto loc_820C96F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c96f8
	if (ctx.cr6.eq) goto loc_820C96F8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821708b8
	ctx.lr = 0x820C96F8;
	sub_821708B8(ctx, base);
loc_820C96F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9700"))) PPC_WEAK_FUNC(sub_820C9700);
PPC_FUNC_IMPL(__imp__sub_820C9700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C9708;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x820ddca8
	ctx.lr = 0x820C9728;
	sub_820DDCA8(ctx, base);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820dda28
	ctx.lr = 0x820C9744;
	sub_820DDA28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C974C"))) PPC_WEAK_FUNC(sub_820C974C);
PPC_FUNC_IMPL(__imp__sub_820C974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9750"))) PPC_WEAK_FUNC(sub_820C9750);
PPC_FUNC_IMPL(__imp__sub_820C9750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820C9758;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x820ddca8
	ctx.lr = 0x820C9774;
	sub_820DDCA8(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820dda28
	ctx.lr = 0x820C9790;
	sub_820DDA28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9798"))) PPC_WEAK_FUNC(sub_820C9798);
PPC_FUNC_IMPL(__imp__sub_820C9798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820C97A0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x820ddca8
	ctx.lr = 0x820C97CC;
	sub_820DDCA8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ddb60
	ctx.lr = 0x820C97F8;
	sub_820DDB60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9804"))) PPC_WEAK_FUNC(sub_820C9804);
PPC_FUNC_IMPL(__imp__sub_820C9804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9808"))) PPC_WEAK_FUNC(sub_820C9808);
PPC_FUNC_IMPL(__imp__sub_820C9808) {
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
	// addi r31,r11,-21792
	ctx.r31.s64 = ctx.r11.s64 + -21792;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x823052d8
	ctx.lr = 0x820C9834;
	sub_823052D8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c9864
	if (ctx.cr6.eq) goto loc_820C9864;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_820C9844:
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c9858
	if (ctx.cr6.eq) goto loc_820C9858;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820C9858:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c9844
	if (!ctx.cr6.eq) goto loc_820C9844;
loc_820C9864:
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x823051a8
	ctx.lr = 0x820C986C;
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

__attribute__((alias("__imp__sub_820C9884"))) PPC_WEAK_FUNC(sub_820C9884);
PPC_FUNC_IMPL(__imp__sub_820C9884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9888"))) PPC_WEAK_FUNC(sub_820C9888);
PPC_FUNC_IMPL(__imp__sub_820C9888) {
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
	// bne cr6,0x820c98c8
	if (!ctx.cr6.eq) goto loc_820C98C8;
	// bl 0x820ddca8
	ctx.lr = 0x820C98B0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c98c0
	if (ctx.cr6.eq) goto loc_820C98C0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c98e4
	goto loc_820C98E4;
loc_820C98C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c98e4
	goto loc_820C98E4;
loc_820C98C8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c98f4
	if (!ctx.cr6.eq) goto loc_820C98F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9974
	if (ctx.cr6.eq) goto loc_820C9974;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C98E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9910
	if (ctx.cr6.eq) goto loc_820C9910;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820c9910
	goto loc_820C9910;
loc_820C98F4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c9974
	if (ctx.cr6.eq) goto loc_820C9974;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C9910;
	sub_820F3178(ctx, base);
loc_820C9910:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9974
	if (ctx.cr6.eq) goto loc_820C9974;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c9974
	if (ctx.cr6.eq) goto loc_820C9974;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c9974
	if (ctx.cr6.eq) goto loc_820C9974;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820c9958
	if (!ctx.cr6.eq) goto loc_820C9958;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
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
loc_820C9958:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
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
loc_820C9974:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
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

__attribute__((alias("__imp__sub_820C9990"))) PPC_WEAK_FUNC(sub_820C9990);
PPC_FUNC_IMPL(__imp__sub_820C9990) {
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
	// bne cr6,0x820c99d8
	if (!ctx.cr6.eq) goto loc_820C99D8;
	// bl 0x820ddca8
	ctx.lr = 0x820C99C0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c99d0
	if (ctx.cr6.eq) goto loc_820C99D0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c99f4
	goto loc_820C99F4;
loc_820C99D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c99f4
	goto loc_820C99F4;
loc_820C99D8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c9a04
	if (!ctx.cr6.eq) goto loc_820C9A04;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9a40
	if (ctx.cr6.eq) goto loc_820C9A40;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C99F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9a20
	if (ctx.cr6.eq) goto loc_820C9A20;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820c9a20
	goto loc_820C9A20;
loc_820C9A04:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c9a40
	if (ctx.cr6.eq) goto loc_820C9A40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C9A20;
	sub_820F3178(ctx, base);
loc_820C9A20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9a40
	if (ctx.cr6.eq) goto loc_820C9A40;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c9a40
	if (ctx.cr6.eq) goto loc_820C9A40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820ca938
	ctx.lr = 0x820C9A3C;
	sub_820CA938(ctx, base);
	// b 0x820c9a48
	goto loc_820C9A48;
loc_820C9A40:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_820C9A48:
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

__attribute__((alias("__imp__sub_820C9A60"))) PPC_WEAK_FUNC(sub_820C9A60);
PPC_FUNC_IMPL(__imp__sub_820C9A60) {
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
	// bne cr6,0x820c9aa8
	if (!ctx.cr6.eq) goto loc_820C9AA8;
	// bl 0x820ddca8
	ctx.lr = 0x820C9A90;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9aa0
	if (ctx.cr6.eq) goto loc_820C9AA0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c9ac4
	goto loc_820C9AC4;
loc_820C9AA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c9ac4
	goto loc_820C9AC4;
loc_820C9AA8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c9ad4
	if (!ctx.cr6.eq) goto loc_820C9AD4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9b38
	if (ctx.cr6.eq) goto loc_820C9B38;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C9AC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9af0
	if (ctx.cr6.eq) goto loc_820C9AF0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820c9af0
	goto loc_820C9AF0;
loc_820C9AD4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c9b38
	if (ctx.cr6.eq) goto loc_820C9B38;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C9AF0;
	sub_820F3178(ctx, base);
loc_820C9AF0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9b38
	if (ctx.cr6.eq) goto loc_820C9B38;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c9b38
	if (ctx.cr6.eq) goto loc_820C9B38;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c9b38
	if (ctx.cr6.eq) goto loc_820C9B38;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c9b38
	if (ctx.cr6.eq) goto loc_820C9B38;
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820c9b38
	if (!ctx.cr6.lt) goto loc_820C9B38;
	// mulli r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 * 104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x820c9b40
	goto loc_820C9B40;
loc_820C9B38:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_820C9B40:
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

__attribute__((alias("__imp__sub_820C9B58"))) PPC_WEAK_FUNC(sub_820C9B58);
PPC_FUNC_IMPL(__imp__sub_820C9B58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820ddca8
	ctx.lr = 0x820C9B80;
	sub_820DDCA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820C9B98;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9bd0
	if (ctx.cr6.eq) goto loc_820C9BD0;
loc_820C9BA0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c9bb0
	if (ctx.cr6.eq) goto loc_820C9BB0;
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820C9BB0:
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
	ctx.lr = 0x820C9BC8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c9ba0
	if (!ctx.cr6.eq) goto loc_820C9BA0;
loc_820C9BD0:
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

__attribute__((alias("__imp__sub_820C9BEC"))) PPC_WEAK_FUNC(sub_820C9BEC);
PPC_FUNC_IMPL(__imp__sub_820C9BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9BF0"))) PPC_WEAK_FUNC(sub_820C9BF0);
PPC_FUNC_IMPL(__imp__sub_820C9BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C9BF8;
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
	// bl 0x820ddca8
	ctx.lr = 0x820C9C0C;
	sub_820DDCA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820C9C24;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9c5c
	if (ctx.cr6.eq) goto loc_820C9C5C;
loc_820C9C2C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c9c3c
	if (ctx.cr6.eq) goto loc_820C9C3C;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_820C9C3C:
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
	ctx.lr = 0x820C9C54;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c9c2c
	if (!ctx.cr6.eq) goto loc_820C9C2C;
loc_820C9C5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9C64"))) PPC_WEAK_FUNC(sub_820C9C64);
PPC_FUNC_IMPL(__imp__sub_820C9C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9C68"))) PPC_WEAK_FUNC(sub_820C9C68);
PPC_FUNC_IMPL(__imp__sub_820C9C68) {
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
	// bl 0x820ddca8
	ctx.lr = 0x820C9C7C;
	sub_820DDCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9cc0
	if (ctx.cr6.eq) goto loc_820C9CC0;
	// bl 0x820dde10
	ctx.lr = 0x820C9C8C;
	sub_820DDE10(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820c9ca8
	if (!ctx.cr6.eq) goto loc_820C9CA8;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820c9cb4
	goto loc_820C9CB4;
loc_820C9CA8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C9CB4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_820C9CC0:
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

__attribute__((alias("__imp__sub_820C9CD4"))) PPC_WEAK_FUNC(sub_820C9CD4);
PPC_FUNC_IMPL(__imp__sub_820C9CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9CD8"))) PPC_WEAK_FUNC(sub_820C9CD8);
PPC_FUNC_IMPL(__imp__sub_820C9CD8) {
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
	// bl 0x820ddca8
	ctx.lr = 0x820C9CF4;
	sub_820DDCA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9d48
	if (ctx.cr6.eq) goto loc_820C9D48;
	// bl 0x820dde10
	ctx.lr = 0x820C9D04;
	sub_820DDE10(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x820c9d18
	if (!ctx.cr6.eq) goto loc_820C9D18;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820C9D18:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820c9d30
	if (!ctx.cr6.eq) goto loc_820C9D30;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820c9d3c
	goto loc_820C9D3C;
loc_820C9D30:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C9D3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_820C9D48:
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

__attribute__((alias("__imp__sub_820C9D60"))) PPC_WEAK_FUNC(sub_820C9D60);
PPC_FUNC_IMPL(__imp__sub_820C9D60) {
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
	// bne cr6,0x820c9da0
	if (!ctx.cr6.eq) goto loc_820C9DA0;
	// bl 0x820ddca8
	ctx.lr = 0x820C9D88;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9d98
	if (ctx.cr6.eq) goto loc_820C9D98;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820c9dbc
	goto loc_820C9DBC;
loc_820C9D98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c9dbc
	goto loc_820C9DBC;
loc_820C9DA0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c9dcc
	if (!ctx.cr6.eq) goto loc_820C9DCC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9e18
	if (ctx.cr6.eq) goto loc_820C9E18;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820C9DBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c9de8
	if (ctx.cr6.eq) goto loc_820C9DE8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820c9de8
	goto loc_820C9DE8;
loc_820C9DCC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c9e18
	if (ctx.cr6.eq) goto loc_820C9E18;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820C9DE8;
	sub_820F3178(ctx, base);
loc_820C9DE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9e18
	if (ctx.cr6.eq) goto loc_820C9E18;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c9e18
	if (ctx.cr6.eq) goto loc_820C9E18;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
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
loc_820C9E18:
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

__attribute__((alias("__imp__sub_820C9E30"))) PPC_WEAK_FUNC(sub_820C9E30);
PPC_FUNC_IMPL(__imp__sub_820C9E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820C9E38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820ddca8
	ctx.lr = 0x820C9E4C;
	sub_820DDCA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82085870
	ctx.lr = 0x820C9E64;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c9f4c
	if (ctx.cr6.eq) goto loc_820C9F4C;
loc_820C9E70:
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820c9f28
	if (ctx.cr6.eq) goto loc_820C9F28;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f13,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f12,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f11,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f10,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f9,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f8,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,96(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f5,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,52(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f4,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,56(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f3,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f2,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f1,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,60(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// bl 0x820aeba8
	ctx.lr = 0x820C9F18;
	sub_820AEBA8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820aec50
	ctx.lr = 0x820C9F28;
	sub_820AEC50(ctx, base);
loc_820C9F28:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82085870
	ctx.lr = 0x820C9F40;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c9e70
	if (!ctx.cr6.eq) goto loc_820C9E70;
loc_820C9F4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9F54"))) PPC_WEAK_FUNC(sub_820C9F54);
PPC_FUNC_IMPL(__imp__sub_820C9F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9F58"))) PPC_WEAK_FUNC(sub_820C9F58);
PPC_FUNC_IMPL(__imp__sub_820C9F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820C9F60;
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
	// bl 0x820ddca8
	ctx.lr = 0x820C9F74;
	sub_820DDCA8(ctx, base);
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
	ctx.lr = 0x820C9F8C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca054
	if (ctx.cr6.eq) goto loc_820CA054;
loc_820C9F94:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ca034
	if (ctx.cr6.eq) goto loc_820CA034;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f12,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f11,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f10,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f9,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f8,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,68(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lfs f7,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f6,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f4,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f1,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_820CA034:
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
	ctx.lr = 0x820CA04C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c9f94
	if (!ctx.cr6.eq) goto loc_820C9F94;
loc_820CA054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA05C"))) PPC_WEAK_FUNC(sub_820CA05C);
PPC_FUNC_IMPL(__imp__sub_820CA05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA060"))) PPC_WEAK_FUNC(sub_820CA060);
PPC_FUNC_IMPL(__imp__sub_820CA060) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x820ddca8
	ctx.lr = 0x820CA098;
	sub_820DDCA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820CA0B0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca100
	if (ctx.cr6.eq) goto loc_820CA100;
loc_820CA0B8:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ca0e0
	if (ctx.cr6.eq) goto loc_820CA0E0;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stfs f31,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f30,116(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// ori r8,r9,5
	ctx.r8.u64 = ctx.r9.u64 | 5;
	// stfs f29,120(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
loc_820CA0E0:
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
	ctx.lr = 0x820CA0F8;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ca0b8
	if (!ctx.cr6.eq) goto loc_820CA0B8;
loc_820CA100:
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

__attribute__((alias("__imp__sub_820CA124"))) PPC_WEAK_FUNC(sub_820CA124);
PPC_FUNC_IMPL(__imp__sub_820CA124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

