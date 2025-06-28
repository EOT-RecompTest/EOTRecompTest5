#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82318E2C"))) PPC_WEAK_FUNC(sub_82318E2C);
PPC_FUNC_IMPL(__imp__sub_82318E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318E30"))) PPC_WEAK_FUNC(sub_82318E30);
PPC_FUNC_IMPL(__imp__sub_82318E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82318E38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,1596
	ctx.r28.s64 = ctx.r3.s64 + 1596;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823383a8
	ctx.lr = 0x82318E54;
	sub_823383A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318ecc
	if (!ctx.cr6.eq) goto loc_82318ECC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// bl 0x82317c48
	ctx.lr = 0x82318E6C;
	sub_82317C48(ctx, base);
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bne cr6,0x82318e7c
	if (!ctx.cr6.eq) goto loc_82318E7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315b70
	ctx.lr = 0x82318E7C;
	sub_82315B70(ctx, base);
loc_82318E7C:
	// stw r30,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231dbb8
	ctx.lr = 0x82318E88;
	sub_8231DBB8(ctx, base);
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82318e98
	if (!ctx.cr6.eq) goto loc_82318E98;
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
loc_82318E98:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// stb r30,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r30.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318eb8
	if (ctx.cr6.eq) goto loc_82318EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82318EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82318EB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823383a8
	ctx.lr = 0x82318EC4;
	sub_823383A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318ECC:
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318EDC"))) PPC_WEAK_FUNC(sub_82318EDC);
PPC_FUNC_IMPL(__imp__sub_82318EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318EE0"))) PPC_WEAK_FUNC(sub_82318EE0);
PPC_FUNC_IMPL(__imp__sub_82318EE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r10,-23448
	ctx.r7.s64 = ctx.r10.s64 + -23448;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82317e30
	sub_82317E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318EFC"))) PPC_WEAK_FUNC(sub_82318EFC);
PPC_FUNC_IMPL(__imp__sub_82318EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318F00"))) PPC_WEAK_FUNC(sub_82318F00);
PPC_FUNC_IMPL(__imp__sub_82318F00) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, ctx.r10.u32);
	// b 0x82317f08
	sub_82317F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318F14"))) PPC_WEAK_FUNC(sub_82318F14);
PPC_FUNC_IMPL(__imp__sub_82318F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318F18"))) PPC_WEAK_FUNC(sub_82318F18);
PPC_FUNC_IMPL(__imp__sub_82318F18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,892(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 892);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r10,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r10.u32);
	// bne cr6,0x82318f3c
	if (!ctx.cr6.eq) goto loc_82318F3C;
	// stw r11,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, ctx.r11.u32);
	// blr 
	return;
loc_82318F3C:
	// b 0x82317f08
	sub_82317F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318F40"))) PPC_WEAK_FUNC(sub_82318F40);
PPC_FUNC_IMPL(__imp__sub_82318F40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,896(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82318f64
	if (ctx.cr6.eq) goto loc_82318F64;
	// lwz r10,892(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 892);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82318f64
	if (ctx.cr6.eq) goto loc_82318F64;
	// b 0x82317f08
	sub_82317F08(ctx, base);
	return;
loc_82318F64:
	// stw r11,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, ctx.r11.u32);
	// stw r11,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82318F70"))) PPC_WEAK_FUNC(sub_82318F70);
PPC_FUNC_IMPL(__imp__sub_82318F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82318F78;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8231b588
	ctx.lr = 0x82318F90;
	sub_8231B588(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82319190
	if (ctx.cr6.gt) goto loc_82319190;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82319190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82319190;
	// bdzf 4*cr6+eq,0x82319014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82319014;
	// bdzf 4*cr6+eq,0x82319148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82319148;
	// bdzf 4*cr6+eq,0x8231903c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231903C;
	// bdzf 4*cr6+eq,0x82319190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82319190;
	// bdzf 4*cr6+eq,0x82319190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82319190;
	// bne cr6,0x82319108
	if (!ctx.cr6.eq) goto loc_82319108;
	// lwz r11,892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82319190
	if (ctx.cr6.eq) goto loc_82319190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823189d8
	ctx.lr = 0x82318FD8;
	sub_823189D8(ctx, base);
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82318ff8
	if (!ctx.cr6.eq) goto loc_82318FF8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82318FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823161d0
	ctx.lr = 0x82319000;
	sub_823161D0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231dbb8
	ctx.lr = 0x82319008;
	sub_8231DBB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82319014:
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82319190
	if (ctx.cr6.eq) goto loc_82319190;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// bl 0x8231dbb8
	ctx.lr = 0x82319030;
	sub_8231DBB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231903C:
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82319108
	if (!ctx.cr6.eq) goto loc_82319108;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-23448
	ctx.r30.s64 = ctx.r11.s64 + -23448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82316938
	ctx.lr = 0x8231905C;
	sub_82316938(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82319078
	if (ctx.cr6.eq) goto loc_82319078;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82319108
	if (!ctx.cr6.eq) goto loc_82319108;
	// lwz r11,880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82319108
	if (ctx.cr6.eq) goto loc_82319108;
loc_82319078:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316a98
	ctx.lr = 0x8231908C;
	sub_82316A98(ctx, base);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// lwz r7,692(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// mulli r3,r8,1000
	ctx.r3.s64 = ctx.r8.s64 * 1000;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x823413b0
	ctx.lr = 0x823190B0;
	sub_823413B0(ctx, base);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x823190BC;
	sub_823413B0(ctx, base);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfs f0,-7784(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -7784);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fdivs f9,f31,f13
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fcmpu cr6,f5,f9
	ctx.cr6.compare(ctx.f5.f64, ctx.f9.f64);
	// ble cr6,0x82319108
	if (!ctx.cr6.gt) goto loc_82319108;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82319108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316428
	ctx.lr = 0x82319110;
	sub_82316428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823164d0
	ctx.lr = 0x82319118;
	sub_823164D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82319190
	if (ctx.cr6.eq) goto loc_82319190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317a28
	ctx.lr = 0x82319128;
	sub_82317A28(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82319190
	if (!ctx.cr6.eq) goto loc_82319190;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82318e30
	ctx.lr = 0x8231913C;
	sub_82318E30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82319148:
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231916c
	if (!ctx.cr6.eq) goto loc_8231916C;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231916c
	if (!ctx.cr6.eq) goto loc_8231916C;
	// ld r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1528, ctx.r11.u64);
loc_8231916C:
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x823196c8
	ctx.lr = 0x8231917C;
	sub_823196C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,1480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82319190
	if (!ctx.cr6.gt) goto loc_82319190;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_82319190:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231919C"))) PPC_WEAK_FUNC(sub_8231919C);
PPC_FUNC_IMPL(__imp__sub_8231919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823191A0"))) PPC_WEAK_FUNC(sub_823191A0);
PPC_FUNC_IMPL(__imp__sub_823191A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823191A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1668);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82319240
	if (ctx.cr6.eq) goto loc_82319240;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,3164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3164);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823191f0
	if (!ctx.cr6.eq) goto loc_823191F0;
	// stw r30,1668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1668, ctx.r30.u32);
	// bl 0x82316428
	ctx.lr = 0x823191DC;
	sub_82316428(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-7740
	ctx.r4.s64 = ctx.r11.s64 + -7740;
	// bl 0x82337048
	ctx.lr = 0x823191EC;
	sub_82337048(ctx, base);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
loc_823191F0:
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319240
	if (ctx.cr6.eq) goto loc_82319240;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82319240
	if (ctx.cr6.eq) goto loc_82319240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82319218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82319240
	if (!ctx.cr6.eq) goto loc_82319240;
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316428
	ctx.lr = 0x8231922C;
	sub_82316428(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-7780
	ctx.r4.s64 = ctx.r11.s64 + -7780;
	// bl 0x82337048
	ctx.lr = 0x8231923C;
	sub_82337048(ctx, base);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
loc_82319240:
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823192bc
	if (!ctx.cr6.eq) goto loc_823192BC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x82319254;
	sub_8231B588(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823192ac
	if (ctx.cr6.eq) goto loc_823192AC;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82319270
	if (ctx.cr6.eq) goto loc_82319270;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82319334
	if (!ctx.cr6.eq) goto loc_82319334;
loc_82319270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823164d0
	ctx.lr = 0x82319278;
	sub_823164D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82319334
	if (ctx.cr6.eq) goto loc_82319334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823183f8
	ctx.lr = 0x82319288;
	sub_823183F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317a28
	ctx.lr = 0x82319290;
	sub_82317A28(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82319334
	if (!ctx.cr6.eq) goto loc_82319334;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82318e30
	ctx.lr = 0x823192A4;
	sub_82318E30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_823192AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_823192BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82318510
	ctx.lr = 0x823192C4;
	sub_82318510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316de8
	ctx.lr = 0x823192CC;
	sub_82316DE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82318f70
	ctx.lr = 0x823192D8;
	sub_82318F70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823180b0
	ctx.lr = 0x823192E0;
	sub_823180B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316c50
	ctx.lr = 0x823192E8;
	sub_82316C50(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231d790
	ctx.lr = 0x823192F0;
	sub_8231D790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82318238
	ctx.lr = 0x823192F8;
	sub_82318238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82318340
	ctx.lr = 0x82319300;
	sub_82318340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823183f8
	ctx.lr = 0x82319308;
	sub_823183F8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x82319310;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82319320
	if (!ctx.cr6.eq) goto loc_82319320;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231ddc8
	ctx.lr = 0x82319320;
	sub_8231DDC8(ctx, base);
loc_82319320:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
	// bl 0x82315c08
	ctx.lr = 0x82319330;
	sub_82315C08(ctx, base);
	// stw r3,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r3.u32);
loc_82319334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231933C"))) PPC_WEAK_FUNC(sub_8231933C);
PPC_FUNC_IMPL(__imp__sub_8231933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319340"))) PPC_WEAK_FUNC(sub_82319340);
PPC_FUNC_IMPL(__imp__sub_82319340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82319348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,1600
	ctx.r29.s64 = ctx.r3.s64 + 1600;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823383a8
	ctx.lr = 0x8231936C;
	sub_823383A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8231938c
	if (ctx.cr6.eq) goto loc_8231938C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823191a0
	ctx.lr = 0x82319380;
	sub_823191A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823383a8
	ctx.lr = 0x8231938C;
	sub_823383A8(ctx, base);
loc_8231938C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82319394"))) PPC_WEAK_FUNC(sub_82319394);
PPC_FUNC_IMPL(__imp__sub_82319394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319398"))) PPC_WEAK_FUNC(sub_82319398);
PPC_FUNC_IMPL(__imp__sub_82319398) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,-23444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23444);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-23444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23444, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8231b400
	sub_8231B400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823193BC"))) PPC_WEAK_FUNC(sub_823193BC);
PPC_FUNC_IMPL(__imp__sub_823193BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823193C0"))) PPC_WEAK_FUNC(sub_823193C0);
PPC_FUNC_IMPL(__imp__sub_823193C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,-23444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23444);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-23444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23444, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// b 0x82319528
	sub_82319528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823193E0"))) PPC_WEAK_FUNC(sub_823193E0);
PPC_FUNC_IMPL(__imp__sub_823193E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823193E4"))) PPC_WEAK_FUNC(sub_823193E4);
PPC_FUNC_IMPL(__imp__sub_823193E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823193E8"))) PPC_WEAK_FUNC(sub_823193E8);
PPC_FUNC_IMPL(__imp__sub_823193E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,-23444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23444);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r3.u64 = temp.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82319404"))) PPC_WEAK_FUNC(sub_82319404);
PPC_FUNC_IMPL(__imp__sub_82319404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319408"))) PPC_WEAK_FUNC(sub_82319408);
PPC_FUNC_IMPL(__imp__sub_82319408) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bl 0x8231ef20
	ctx.lr = 0x82319428;
	sub_8231EF20(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82319438
	if (ctx.cr6.eq) goto loc_82319438;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82319438:
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

__attribute__((alias("__imp__sub_8231944C"))) PPC_WEAK_FUNC(sub_8231944C);
PPC_FUNC_IMPL(__imp__sub_8231944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319450"))) PPC_WEAK_FUNC(sub_82319450);
PPC_FUNC_IMPL(__imp__sub_82319450) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8231e230
	sub_8231E230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231945C"))) PPC_WEAK_FUNC(sub_8231945C);
PPC_FUNC_IMPL(__imp__sub_8231945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319460"))) PPC_WEAK_FUNC(sub_82319460);
PPC_FUNC_IMPL(__imp__sub_82319460) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8231e250
	ctx.lr = 0x82319480;
	sub_8231E250(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823194b0
	if (!ctx.cr6.eq) goto loc_823194B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823209e8
	ctx.lr = 0x82319490;
	sub_823209E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8231e210
	ctx.lr = 0x8231949C;
	sub_8231E210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82319408
	ctx.lr = 0x823194B0;
	sub_82319408(ctx, base);
loc_823194B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82319398
	ctx.lr = 0x823194B8;
	sub_82319398(ctx, base);
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

__attribute__((alias("__imp__sub_823194D0"))) PPC_WEAK_FUNC(sub_823194D0);
PPC_FUNC_IMPL(__imp__sub_823194D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823194D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82315a90
	ctx.lr = 0x823194FC;
	sub_82315A90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82319510
	if (ctx.cr6.eq) goto loc_82319510;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82319510:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82320bf8
	ctx.lr = 0x82319520;
	sub_82320BF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82319528"))) PPC_WEAK_FUNC(sub_82319528);
PPC_FUNC_IMPL(__imp__sub_82319528) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r31,r11,-24736
	ctx.r31.s64 = ctx.r11.s64 + -24736;
	// lwz r11,-24736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24736);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82319578
	if (!ctx.cr0.eq) goto loc_82319578;
	// bl 0x82321200
	ctx.lr = 0x82319554;
	sub_82321200(ctx, base);
	// bl 0x82320d80
	ctx.lr = 0x82319558;
	sub_82320D80(ctx, base);
	// bl 0x821daa68
	ctx.lr = 0x8231955C;
	sub_821DAA68(ctx, base);
	// bl 0x823384e0
	ctx.lr = 0x82319560;
	sub_823384E0(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319578
	if (ctx.cr6.eq) goto loc_82319578;
	// bl 0x82338268
	ctx.lr = 0x82319570;
	sub_82338268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82319578:
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

__attribute__((alias("__imp__sub_8231958C"))) PPC_WEAK_FUNC(sub_8231958C);
PPC_FUNC_IMPL(__imp__sub_8231958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319590"))) PPC_WEAK_FUNC(sub_82319590);
PPC_FUNC_IMPL(__imp__sub_82319590) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r10,2188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2188, ctx.r10.u32);
	// stw r30,3004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3004, ctx.r30.u32);
	// li r5,1440
	ctx.r5.s64 = 1440;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stfs f0,2180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2180, temp.u32);
	// stw r9,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r9.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x823195DC;
	sub_8233EAF0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// addi r9,r31,2220
	ctx.r9.s64 = ctx.r31.s64 + 2220;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,23130
	ctx.r10.s64 = 1515847680;
	// sth r8,1472(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1472, ctx.r8.u16);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// ori r10,r10,23130
	ctx.r10.u64 = ctx.r10.u64 | 23130;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stw r7,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r7.u32);
loc_82319618:
	// stw r8,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r8.u32);
	// stw r10,-16(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16, ctx.r10.u32);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82319618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82319618;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,2896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2896, ctx.r11.u32);
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// stw r11,3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3036, ctx.r11.u32);
	// stw r11,3040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3040, ctx.r11.u32);
	// stw r11,3044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3044, ctx.r11.u32);
	// lfs f0,-1616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1616);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r11.u32);
	// stfs f0,3128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3128, temp.u32);
	// stw r11,3052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3052, ctx.r11.u32);
	// stw r11,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r11.u32);
	// stw r11,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r11.u32);
	// stw r11,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r11.u32);
	// stw r11,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r11.u32);
	// stw r11,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r11.u32);
	// stw r11,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r11.u32);
	// stw r11,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r11.u32);
	// stw r11,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r11.u32);
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
	// stw r11,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r11.u32);
	// stw r11,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r11.u32);
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// stw r11,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r11.u32);
	// stw r11,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r11.u32);
	// stw r11,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r11.u32);
	// stw r11,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r11.u32);
	// stw r11,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r11.u32);
	// stw r11,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r11.u32);
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
	// stw r11,3152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3152, ctx.r11.u32);
	// stw r11,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r11.u32);
	// stw r30,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r30.u32);
	// stb r11,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_823196C4"))) PPC_WEAK_FUNC(sub_823196C4);
PPC_FUNC_IMPL(__imp__sub_823196C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823196C8"))) PPC_WEAK_FUNC(sub_823196C8);
PPC_FUNC_IMPL(__imp__sub_823196C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823196D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x823196EC;
	sub_8233EAF0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82319a60
	if (ctx.cr6.eq) goto loc_82319A60;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82319a60
	if (ctx.cr6.eq) goto loc_82319A60;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82319a60
	if (ctx.cr6.eq) goto loc_82319A60;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82319a60
	if (ctx.cr6.eq) goto loc_82319A60;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82319a60
	if (ctx.cr6.eq) goto loc_82319A60;
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231972c
	if (!ctx.cr6.eq) goto loc_8231972C;
	// addi r7,r30,1488
	ctx.r7.s64 = ctx.r30.s64 + 1488;
	// b 0x82319740
	goto loc_82319740;
loc_8231972C:
	// lwz r11,1480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mulli r11,r10,720
	ctx.r11.s64 = ctx.r10.s64 * 720;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
loc_82319740:
	// lfs f0,2180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823197e0
	if (ctx.cr6.eq) goto loc_823197E0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,28(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r9,32(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// lwz r8,36(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lwz r5,40(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r5,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// lwz r9,52(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// stw r9,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r9.u32);
	// lwz r8,56(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// stw r8,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r8.u32);
	// lwz r5,60(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// stw r5,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r5.u32);
	// b 0x82319808
	goto loc_82319808;
loc_823197E0:
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// stw r6,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r6.u32);
	// stw r6,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// stw r6,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// stw r6,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r6.u32);
	// stw r6,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r6.u32);
	// stw r6,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r6.u32);
loc_82319808:
	// lwz r11,64(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82319820
	if (!ctx.cr6.gt) goto loc_82319820;
	// stw r29,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r29.u32);
	// b 0x82319824
	goto loc_82319824;
loc_82319820:
	// stw r6,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r6.u32);
loc_82319824:
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// addi r10,r7,80
	ctx.r10.s64 = ctx.r7.s64 + 80;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8231983C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82319878
	if (ctx.cr6.eq) goto loc_82319878;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,2188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2188);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bne cr6,0x82319888
	if (!ctx.cr6.eq) goto loc_82319888;
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// b 0x82319888
	goto loc_82319888;
loc_82319878:
	// stw r6,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r6.u32);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_82319888:
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823198c4
	if (ctx.cr6.eq) goto loc_823198C4;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r8,2188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2188);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// bne cr6,0x823198d4
	if (!ctx.cr6.eq) goto loc_823198D4;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// b 0x823198d4
	goto loc_823198D4;
loc_823198C4:
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
loc_823198D4:
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82319910
	if (ctx.cr6.eq) goto loc_82319910;
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r8,2188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2188);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// bne cr6,0x82319920
	if (!ctx.cr6.eq) goto loc_82319920;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x82319920
	goto loc_82319920;
loc_82319910:
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
loc_82319920:
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8231995c
	if (ctx.cr6.eq) goto loc_8231995C;
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r8,2188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2188);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// bne cr6,0x8231996c
	if (!ctx.cr6.eq) goto loc_8231996C;
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// b 0x8231996c
	goto loc_8231996C;
loc_8231995C:
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
loc_8231996C:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x8231983c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231983C;
	// lwz r11,72(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// ble cr6,0x823199d0
	if (!ctx.cr6.gt) goto loc_823199D0;
	// lwz r11,2192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2192);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bne cr6,0x823199a8
	if (!ctx.cr6.eq) goto loc_823199A8;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// b 0x823199d0
	goto loc_823199D0;
loc_823199A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823199d0
	if (ctx.cr6.lt) goto loc_823199D0;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x823199d0
	if (!ctx.cr6.lt) goto loc_823199D0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x823199d0
	if (!ctx.cr6.gt) goto loc_823199D0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_823199D0:
	// lwz r11,588(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823199f8
	if (!ctx.cr6.gt) goto loc_823199F8;
	// lwz r11,592(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 592);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823199f8
	if (!ctx.cr6.eq) goto loc_823199F8;
	// lwz r11,596(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 596);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// lwz r10,608(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 608);
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
loc_823199F8:
	// stw r3,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r3.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82319a20
	if (!ctx.cr6.eq) goto loc_82319A20;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r11,-23432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82319a20
	if (!ctx.cr6.eq) goto loc_82319A20;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_82319A20:
	// lwz r11,616(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 616);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// lwz r10,620(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 620);
	// stw r10,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r10.u32);
	// lwz r9,624(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 624);
	// stw r9,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r9.u32);
	// lwz r8,628(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 628);
	// stw r8,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r8.u32);
	// lwz r6,632(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 632);
	// stw r6,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r6.u32);
	// lwz r5,636(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 636);
	// stw r5,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r5.u32);
	// lwz r4,640(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 640);
	// stw r4,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r4.u32);
	// lwz r3,644(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 644);
	// stw r3,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r3.u32);
loc_82319A60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82319A68"))) PPC_WEAK_FUNC(sub_82319A68);
PPC_FUNC_IMPL(__imp__sub_82319A68) {
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
	// stw r4,2996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2996, ctx.r4.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r10,2332
	ctx.r6.s64 = ctx.r10.s64 + 2332;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82321718
	ctx.lr = 0x82319AA0;
	sub_82321718(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_82319AB8"))) PPC_WEAK_FUNC(sub_82319AB8);
PPC_FUNC_IMPL(__imp__sub_82319AB8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2996(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2996);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// bl 0x823212e8
	ctx.lr = 0x82319ADC;
	sub_823212E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82319AF8"))) PPC_WEAK_FUNC(sub_82319AF8);
PPC_FUNC_IMPL(__imp__sub_82319AF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2188, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82319B00"))) PPC_WEAK_FUNC(sub_82319B00);
PPC_FUNC_IMPL(__imp__sub_82319B00) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2192, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82319B08"))) PPC_WEAK_FUNC(sub_82319B08);
PPC_FUNC_IMPL(__imp__sub_82319B08) {
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
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r30.u32);
	// beq cr6,0x82319b38
	if (ctx.cr6.eq) goto loc_82319B38;
	// bl 0x82321a70
	ctx.lr = 0x82319B38;
	sub_82321A70(ctx, base);
loc_82319B38:
	// lwz r3,2900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319b48
	if (ctx.cr6.eq) goto loc_82319B48;
	// bl 0x823387e8
	ctx.lr = 0x82319B48;
	sub_823387E8(ctx, base);
loc_82319B48:
	// lwz r3,2912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// bl 0x82339948
	ctx.lr = 0x82319B50;
	sub_82339948(ctx, base);
	// lwz r3,2920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319b60
	if (ctx.cr6.eq) goto loc_82319B60;
	// bl 0x82339948
	ctx.lr = 0x82319B60;
	sub_82339948(ctx, base);
loc_82319B60:
	// lwz r3,2916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319b70
	if (ctx.cr6.eq) goto loc_82319B70;
	// bl 0x82339948
	ctx.lr = 0x82319B70;
	sub_82339948(ctx, base);
loc_82319B70:
	// lwz r3,2984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319b80
	if (ctx.cr6.eq) goto loc_82319B80;
	// bl 0x82321ad0
	ctx.lr = 0x82319B80;
	sub_82321AD0(ctx, base);
loc_82319B80:
	// stw r30,2924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2924, ctx.r30.u32);
	// stw r30,2928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2928, ctx.r30.u32);
	// stw r30,2896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2896, ctx.r30.u32);
	// stw r30,2908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2908, ctx.r30.u32);
	// stw r30,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r30.u32);
	// stw r30,3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3036, ctx.r30.u32);
	// stw r30,3040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3040, ctx.r30.u32);
	// stw r30,3044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3044, ctx.r30.u32);
	// stw r30,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r30.u32);
	// stw r30,3052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3052, ctx.r30.u32);
	// stw r30,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r30.u32);
	// stw r30,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r30.u32);
	// stw r30,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r30.u32);
	// stw r30,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r30.u32);
	// stw r30,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r30.u32);
	// stw r30,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r30.u32);
	// stw r30,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r30.u32);
	// stw r30,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r30.u32);
	// stw r30,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r30.u32);
	// stw r30,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r30.u32);
	// stw r30,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82319BEC"))) PPC_WEAK_FUNC(sub_82319BEC);
PPC_FUNC_IMPL(__imp__sub_82319BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319BF0"))) PPC_WEAK_FUNC(sub_82319BF0);
PPC_FUNC_IMPL(__imp__sub_82319BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x82319BF8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,2944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2944);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a4f0
	ctx.lr = 0x82319C18;
	sub_8233A4F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,688
	ctx.r5.s64 = 688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82319C2C;
	sub_8233EAF0(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// ori r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 8192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r5,r9,-7532
	ctx.r5.s64 = ctx.r9.s64 + -7532;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x82319C4C;
	sub_82339F10(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r7,-7540
	ctx.r5.s64 = ctx.r7.s64 + -7540;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x82319C64;
	sub_82339F10(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339d68
	ctx.lr = 0x82319C70;
	sub_82339D68(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// beq cr6,0x82319d74
	if (ctx.cr6.eq) goto loc_82319D74;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,16467
	ctx.r10.s64 = 1079181312;
	// lis r9,16449
	ctx.r9.s64 = 1078001664;
	// lis r8,16451
	ctx.r8.s64 = 1078132736;
	// lis r7,16467
	ctx.r7.s64 = 1079181312;
	// ori r30,r10,16980
	ctx.r30.u64 = ctx.r10.u64 | 16980;
	// ori r27,r9,19536
	ctx.r27.u64 = ctx.r9.u64 | 19536;
	// ori r21,r8,21829
	ctx.r21.u64 = ctx.r8.u64 | 21829;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r24,r7,17985
	ctx.r24.u64 = ctx.r7.u64 | 17985;
	// li r20,32
	ctx.r20.s64 = 32;
	// addi r26,r11,-7548
	ctx.r26.s64 = ctx.r11.s64 + -7548;
loc_82319CB4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319CC4;
	sub_82339F10(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82319d24
	if (ctx.cr6.gt) goto loc_82319D24;
	// beq cr6,0x82319d14
	if (ctx.cr6.eq) goto loc_82319D14;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82319cf0
	if (ctx.cr6.eq) goto loc_82319CF0;
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82319d68
	if (!ctx.cr6.eq) goto loc_82319D68;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// b 0x82319d68
	goto loc_82319D68;
loc_82319CF0:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82319d08
	if (!ctx.cr6.gt) goto loc_82319D08;
	// stw r23,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r23.u32);
loc_82319D08:
	// stw r27,3012(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3012, ctx.r27.u32);
	// stw r19,3016(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3016, ctx.r19.u32);
	// b 0x82319d68
	goto loc_82319D68;
loc_82319D14:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// b 0x82319d68
	goto loc_82319D68;
loc_82319D24:
	// subf. r11,r24,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r24.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82319d50
	if (ctx.cr0.eq) goto loc_82319D50;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82319d68
	if (!ctx.cr6.eq) goto loc_82319D68;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82319d68
	if (!ctx.cr6.gt) goto loc_82319D68;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// b 0x82319d68
	goto loc_82319D68;
loc_82319D50:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x82319d68
	if (!ctx.cr6.gt) goto loc_82319D68;
	// stw r20,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r20.u32);
loc_82319D68:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82319cb4
	if (ctx.cr6.lt) goto loc_82319CB4;
loc_82319D74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ab0
	ctx.lr = 0x82319D7C;
	sub_82339AB0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82319D84"))) PPC_WEAK_FUNC(sub_82319D84);
PPC_FUNC_IMPL(__imp__sub_82319D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82319D88"))) PPC_WEAK_FUNC(sub_82319D88);
PPC_FUNC_IMPL(__imp__sub_82319D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82319D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r3,2944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2944);
	// bl 0x8233a4f0
	ctx.lr = 0x82319DAC;
	sub_8233A4F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-7356
	ctx.r5.s64 = ctx.r11.s64 + -7356;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319DC0;
	sub_82339F10(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,-7368
	ctx.r5.s64 = ctx.r10.s64 + -7368;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x82319DDC;
	sub_82339F10(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r6,16
	ctx.r6.s64 = 16;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f0,-17956(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17956);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,-7384
	ctx.r5.s64 = ctx.r5.s64 + -7384;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f6.u32);
	// bl 0x82339f10
	ctx.lr = 0x82319E2C;
	sub_82339F10(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r4,-7392
	ctx.r5.s64 = ctx.r4.s64 + -7392;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x82319E44;
	sub_82339F10(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-7400
	ctx.r5.s64 = ctx.r11.s64 + -7400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x82319E5C;
	sub_82339F10(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,-7408
	ctx.r5.s64 = ctx.r10.s64 + -7408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x82319E74;
	sub_82339F10(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,-7420
	ctx.r5.s64 = ctx.r9.s64 + -7420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319E8C;
	sub_82339F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x82319ea0
	if (!ctx.cr6.eq) goto loc_82319EA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82319EA0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-7432
	ctx.r5.s64 = ctx.r11.s64 + -7432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319EB4;
	sub_82339F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bne cr6,0x82319ec8
	if (!ctx.cr6.eq) goto loc_82319EC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82319EC8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-7444
	ctx.r5.s64 = ctx.r11.s64 + -7444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319EDC;
	sub_82339F10(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-7456
	ctx.r5.s64 = ctx.r10.s64 + -7456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319EF4;
	sub_82339F10(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,-7468
	ctx.r5.s64 = ctx.r9.s64 + -7468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319F0C;
	sub_82339F10(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r8,-7484
	ctx.r5.s64 = ctx.r8.s64 + -7484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319F24;
	sub_82339F10(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r7,-7500
	ctx.r5.s64 = ctx.r7.s64 + -7500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319F3C;
	sub_82339F10(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r6,-7512
	ctx.r5.s64 = ctx.r6.s64 + -7512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319F54;
	sub_82339F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x82319f68
	if (!ctx.cr6.eq) goto loc_82319F68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82319F68:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-7524
	ctx.r5.s64 = ctx.r11.s64 + -7524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319F7C;
	sub_82339F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82319f90
	if (!ctx.cr6.eq) goto loc_82319F90;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82319F90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ab0
	ctx.lr = 0x82319F98;
	sub_82339AB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82319FA0"))) PPC_WEAK_FUNC(sub_82319FA0);
PPC_FUNC_IMPL(__imp__sub_82319FA0) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,2944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2944);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a4f0
	ctx.lr = 0x82319FCC;
	sub_8233A4F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-7312
	ctx.r5.s64 = ctx.r10.s64 + -7312;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82339f10
	ctx.lr = 0x82319FE0;
	sub_82339F10(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,-7328
	ctx.r5.s64 = ctx.r9.s64 + -7328;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x82319FF8;
	sub_82339F10(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,-7344
	ctx.r5.s64 = ctx.r8.s64 + -7344;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A010;
	sub_82339F10(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,-7408
	ctx.r5.s64 = ctx.r7.s64 + -7408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A028;
	sub_82339F10(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ab0
	ctx.lr = 0x8231A034;
	sub_82339AB0(ctx, base);
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

__attribute__((alias("__imp__sub_8231A04C"))) PPC_WEAK_FUNC(sub_8231A04C);
PPC_FUNC_IMPL(__imp__sub_8231A04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A050"))) PPC_WEAK_FUNC(sub_8231A050);
PPC_FUNC_IMPL(__imp__sub_8231A050) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,2944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2944);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a4f0
	ctx.lr = 0x8231A07C;
	sub_8233A4F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-7328
	ctx.r5.s64 = ctx.r10.s64 + -7328;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A090;
	sub_82339F10(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,-7296
	ctx.r5.s64 = ctx.r9.s64 + -7296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A0A8;
	sub_82339F10(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// ble cr6,0x8231a0d4
	if (!ctx.cr6.gt) goto loc_8231A0D4;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x8231a0d4
	if (!ctx.cr6.gt) goto loc_8231A0D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8231A0D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ab0
	ctx.lr = 0x8231A0DC;
	sub_82339AB0(ctx, base);
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

__attribute__((alias("__imp__sub_8231A0F4"))) PPC_WEAK_FUNC(sub_8231A0F4);
PPC_FUNC_IMPL(__imp__sub_8231A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A0F8"))) PPC_WEAK_FUNC(sub_8231A0F8);
PPC_FUNC_IMPL(__imp__sub_8231A0F8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,2944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2944);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a4f0
	ctx.lr = 0x8231A124;
	sub_8233A4F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-7484
	ctx.r5.s64 = ctx.r10.s64 + -7484;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A138;
	sub_82339F10(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,-7500
	ctx.r5.s64 = ctx.r9.s64 + -7500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A150;
	sub_82339F10(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,-7284
	ctx.r5.s64 = ctx.r8.s64 + -7284;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A168;
	sub_82339F10(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r7,-7296
	ctx.r5.s64 = ctx.r7.s64 + -7296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A180;
	sub_82339F10(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bne cr6,0x8231a1bc
	if (!ctx.cr6.eq) goto loc_8231A1BC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8231a1bc
	if (!ctx.cr6.gt) goto loc_8231A1BC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8231a1bc
	if (!ctx.cr6.gt) goto loc_8231A1BC;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x8231a1bc
	if (!ctx.cr6.gt) goto loc_8231A1BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8231A1BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ab0
	ctx.lr = 0x8231A1C4;
	sub_82339AB0(ctx, base);
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

__attribute__((alias("__imp__sub_8231A1DC"))) PPC_WEAK_FUNC(sub_8231A1DC);
PPC_FUNC_IMPL(__imp__sub_8231A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A1E0"))) PPC_WEAK_FUNC(sub_8231A1E0);
PPC_FUNC_IMPL(__imp__sub_8231A1E0) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,2944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2944);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a4f0
	ctx.lr = 0x8231A20C;
	sub_8233A4F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-7356
	ctx.r5.s64 = ctx.r10.s64 + -7356;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A220;
	sub_82339F10(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,-7368
	ctx.r5.s64 = ctx.r9.s64 + -7368;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A23C;
	sub_82339F10(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r11,16
	ctx.r11.s64 = 16;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f0,-17956(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -17956);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,-7384
	ctx.r5.s64 = ctx.r10.s64 + -7384;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f6.u32);
	// bl 0x82339f10
	ctx.lr = 0x8231A28C;
	sub_82339F10(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r9,-7392
	ctx.r5.s64 = ctx.r9.s64 + -7392;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A2A4;
	sub_82339F10(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,-7400
	ctx.r5.s64 = ctx.r8.s64 + -7400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A2BC;
	sub_82339F10(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,-7268
	ctx.r5.s64 = ctx.r7.s64 + -7268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A2D4;
	sub_82339F10(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r6,-7484
	ctx.r5.s64 = ctx.r6.s64 + -7484;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A2EC;
	sub_82339F10(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r5,-7500
	ctx.r5.s64 = ctx.r5.s64 + -7500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339f10
	ctx.lr = 0x8231A304;
	sub_82339F10(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r3,-7512
	ctx.r5.s64 = ctx.r3.s64 + -7512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A31C;
	sub_82339F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x8231a330
	if (!ctx.cr6.eq) goto loc_8231A330;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8231A330:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-7524
	ctx.r5.s64 = ctx.r11.s64 + -7524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A344;
	sub_82339F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x8231a358
	if (!ctx.cr6.eq) goto loc_8231A358;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8231A358:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ab0
	ctx.lr = 0x8231A360;
	sub_82339AB0(ctx, base);
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

__attribute__((alias("__imp__sub_8231A378"))) PPC_WEAK_FUNC(sub_8231A378);
PPC_FUNC_IMPL(__imp__sub_8231A378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x8231A380;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,2916(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2916);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r14,r24
	ctx.r14.u64 = ctx.r24.u64;
	// bl 0x82339988
	ctx.lr = 0x8231A3A0;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231a6cc
	if (ctx.cr6.eq) goto loc_8231A6CC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r7,16449
	ctx.r7.s64 = 1078001664;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r6,16451
	ctx.r6.s64 = 1078132736;
	// lis r5,16467
	ctx.r5.s64 = 1079181312;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r15,-1
	ctx.r15.s64 = -1;
	// ori r19,r7,19536
	ctx.r19.u64 = ctx.r7.u64 | 19536;
	// ori r16,r6,21829
	ctx.r16.u64 = ctx.r6.u64 | 21829;
	// ori r17,r5,18006
	ctx.r17.u64 = ctx.r5.u64 | 18006;
	// addi r23,r10,-7228
	ctx.r23.s64 = ctx.r10.s64 + -7228;
	// addi r22,r9,-7236
	ctx.r22.s64 = ctx.r9.s64 + -7236;
	// addi r21,r8,-7248
	ctx.r21.s64 = ctx.r8.s64 + -7248;
	// addi r20,r11,-7256
	ctx.r20.s64 = ctx.r11.s64 + -7256;
loc_8231A3E4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82339958
	ctx.lr = 0x8231A3F8;
	sub_82339958(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231a6a0
	if (ctx.cr6.lt) goto loc_8231A6A0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231A410;
	sub_8233A580(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a710
	ctx.lr = 0x8231A420;
	sub_8233A710(ctx, base);
	// lbz r11,143(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8231a43c
	if (ctx.cr6.eq) goto loc_8231A43C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8231a6dc
	if (!ctx.cr6.eq) goto loc_8231A6DC;
loc_8231A43C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8231a674
	if (!ctx.cr6.eq) goto loc_8231A674;
	// lwz r10,3072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// stw r10,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r10.u32);
	// beq cr6,0x8231a634
	if (ctx.cr6.eq) goto loc_8231A634;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8231a4ac
	if (ctx.cr6.eq) goto loc_8231A4AC;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x8231a68c
	if (!ctx.cr6.eq) goto loc_8231A68C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r4,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r4.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,2944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2944);
	// stw r11,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r11.u32);
	// bl 0x8233a4f0
	ctx.lr = 0x8231A484;
	sub_8233A4F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82339d68
	ctx.lr = 0x8231A48C;
	sub_82339D68(ctx, base);
	// stw r3,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ab0
	ctx.lr = 0x8231A498;
	sub_82339AB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82339978
	ctx.lr = 0x8231A4A8;
	sub_82339978(ctx, base);
	// b 0x8231a6b0
	goto loc_8231A6B0;
loc_8231A4AC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r4,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r4.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,2944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2944);
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// bl 0x8233a4f0
	ctx.lr = 0x8231A4C4;
	sub_8233A4F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82339d68
	ctx.lr = 0x8231A4CC;
	sub_82339D68(ctx, base);
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// stw r3,3108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3108, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231a6d8
	if (ctx.cr6.lt) goto loc_8231A6D8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82339cf0
	ctx.lr = 0x8231A4E8;
	sub_82339CF0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82339cf0
	ctx.lr = 0x8231A4F8;
	sub_82339CF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82339cf0
	ctx.lr = 0x8231A508;
	sub_82339CF0(ctx, base);
	// lwz r11,3108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3108);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231a618
	if (!ctx.cr6.gt) goto loc_8231A618;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8231A520:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233a250
	ctx.lr = 0x8231A534;
	sub_8233A250(ctx, base);
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// beq cr6,0x8231a560
	if (ctx.cr6.eq) goto loc_8231A560;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x8231a564
	goto loc_8231A564;
loc_8231A560:
	// stwx r24,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
loc_8231A564:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82339e58
	ctx.lr = 0x8231A574;
	sub_82339E58(ctx, base);
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,2168(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2168);
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// std r10,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r10.u64);
	// bl 0x82339f10
	ctx.lr = 0x8231A5A0;
	sub_82339F10(ctx, base);
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r3,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233a250
	ctx.lr = 0x8231A5C0;
	sub_8233A250(ctx, base);
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r6,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r6.u32);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// beq cr6,0x8231a5f0
	if (ctx.cr6.eq) goto loc_8231A5F0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// b 0x8231a5f8
	goto loc_8231A5F8;
loc_8231A5F0:
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r24.u32);
loc_8231A5F8:
	// lwz r11,3112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// stw r24,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r24.u32);
	// lwz r10,3108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3108);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8231a520
	if (ctx.cr6.lt) goto loc_8231A520;
loc_8231A618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82339ab0
	ctx.lr = 0x8231A620;
	sub_82339AB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82339978
	ctx.lr = 0x8231A630;
	sub_82339978(ctx, base);
	// b 0x8231a6b0
	goto loc_8231A6B0;
loc_8231A634:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r4,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r4.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,2944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2944);
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
	// bl 0x8233a4f0
	ctx.lr = 0x8231A64C;
	sub_8233A4F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82339d68
	ctx.lr = 0x8231A654;
	sub_82339D68(ctx, base);
	// stw r3,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ab0
	ctx.lr = 0x8231A660;
	sub_82339AB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82339978
	ctx.lr = 0x8231A670;
	sub_82339978(ctx, base);
	// b 0x8231a6b0
	goto loc_8231A6B0;
loc_8231A674:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8231a68c
	if (!ctx.cr6.eq) goto loc_8231A68C;
	// lwz r11,3072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231a68c
	if (!ctx.cr6.gt) goto loc_8231A68C;
	// li r14,1
	ctx.r14.s64 = 1;
loc_8231A68C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82339978
	ctx.lr = 0x8231A69C;
	sub_82339978(ctx, base);
	// b 0x8231a6b0
	goto loc_8231A6B0;
loc_8231A6A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82339968
	ctx.lr = 0x8231A6B0;
	sub_82339968(ctx, base);
loc_8231A6B0:
	// cmpwi cr6,r14,1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 1, ctx.xer);
	// beq cr6,0x8231a6cc
	if (ctx.cr6.eq) goto loc_8231A6CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82339988
	ctx.lr = 0x8231A6C4;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231a3e4
	if (!ctx.cr6.eq) goto loc_8231A3E4;
loc_8231A6CC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8231A6D8:
	// b 0x8231a6d8
	goto loc_8231A6D8;
loc_8231A6DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82339968
	ctx.lr = 0x8231A6EC;
	sub_82339968(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231A6F8"))) PPC_WEAK_FUNC(sub_8231A6F8);
PPC_FUNC_IMPL(__imp__sub_8231A6F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,2916(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2916);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339988
	ctx.lr = 0x8231A71C;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231a7b4
	if (ctx.cr6.eq) goto loc_8231A7B4;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8231A728:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339958
	ctx.lr = 0x8231A73C;
	sub_82339958(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231a7a4
	if (ctx.cr6.lt) goto loc_8231A7A4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231A754;
	sub_8233A580(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a710
	ctx.lr = 0x8231A764;
	sub_8233A710(ctx, base);
	// lbz r11,111(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8231a77c
	if (ctx.cr6.eq) goto loc_8231A77C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8231a7a4
	if (!ctx.cr6.eq) goto loc_8231A7A4;
loc_8231A77C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339978
	ctx.lr = 0x8231A78C;
	sub_82339978(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339988
	ctx.lr = 0x8231A798;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231a728
	if (!ctx.cr6.eq) goto loc_8231A728;
	// b 0x8231a7b4
	goto loc_8231A7B4;
loc_8231A7A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339968
	ctx.lr = 0x8231A7B4;
	sub_82339968(ctx, base);
loc_8231A7B4:
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

__attribute__((alias("__imp__sub_8231A7CC"))) PPC_WEAK_FUNC(sub_8231A7CC);
PPC_FUNC_IMPL(__imp__sub_8231A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A7D0"))) PPC_WEAK_FUNC(sub_8231A7D0);
PPC_FUNC_IMPL(__imp__sub_8231A7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8231A7D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,2944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2944);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8233a4f0
	ctx.lr = 0x8231A7F8;
	sub_8233A4F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82339d68
	ctx.lr = 0x8231A800;
	sub_82339D68(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r26,r11,-7216
	ctx.r26.s64 = ctx.r11.s64 + -7216;
	// ble cr6,0x8231a854
	if (!ctx.cr6.gt) goto loc_8231A854;
loc_8231A818:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A828;
	sub_82339F10(ctx, base);
	// cmpw cr6,r25,r3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8231a854
	if (ctx.cr6.lt) goto loc_8231A854;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x82339e58
	ctx.lr = 0x8231A844;
	sub_82339E58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8231a818
	if (ctx.cr6.lt) goto loc_8231A818;
loc_8231A854:
	// std r27,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r27.u64);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339f10
	ctx.lr = 0x8231A868;
	sub_82339F10(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ab0
	ctx.lr = 0x8231A874;
	sub_82339AB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231A87C"))) PPC_WEAK_FUNC(sub_8231A87C);
PPC_FUNC_IMPL(__imp__sub_8231A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A880"))) PPC_WEAK_FUNC(sub_8231A880);
PPC_FUNC_IMPL(__imp__sub_8231A880) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,2900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2900);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x823385e8
	sub_823385E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231A898"))) PPC_WEAK_FUNC(sub_8231A898);
PPC_FUNC_IMPL(__imp__sub_8231A898) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r9,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r9.u64);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231A930"))) PPC_WEAK_FUNC(sub_8231A930);
PPC_FUNC_IMPL(__imp__sub_8231A930) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r9,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r9.u64);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231A96C"))) PPC_WEAK_FUNC(sub_8231A96C);
PPC_FUNC_IMPL(__imp__sub_8231A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231A970"))) PPC_WEAK_FUNC(sub_8231A970);
PPC_FUNC_IMPL(__imp__sub_8231A970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,132(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 132);
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// ld r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24);
	// std r10,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r10.u64);
	// ld r8,32(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32);
	// std r8,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r8.u64);
	// lwz r7,40(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// stw r7,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r7.u32);
	// lwz r6,136(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 136);
	// stw r6,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r6.u32);
	// lwz r11,2284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2284);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r10,2288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2288);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// lwz r8,2884(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2884);
	// stw r8,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r8.u32);
	// stw r9,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r9.u32);
	// stw r9,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r9.u32);
	// stw r9,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r9.u32);
	// stw r9,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r9.u32);
	// lwz r7,56(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r7.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r5,52
	ctx.r10.s64 = ctx.r5.s64 + 52;
	// addi r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 + 76;
loc_8231AA04:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8231aa04
	if (ctx.cr6.lt) goto loc_8231AA04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231AA48"))) PPC_WEAK_FUNC(sub_8231AA48);
PPC_FUNC_IMPL(__imp__sub_8231AA48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231aa5c
	if (!ctx.cr6.eq) goto loc_8231AA5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8231AA5C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8231aa74
	if (ctx.cr6.eq) goto loc_8231AA74;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8231AA74:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231AA7C"))) PPC_WEAK_FUNC(sub_8231AA7C);
PPC_FUNC_IMPL(__imp__sub_8231AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231AA80"))) PPC_WEAK_FUNC(sub_8231AA80);
PPC_FUNC_IMPL(__imp__sub_8231AA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231AA88;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// std r11,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r11.u64);
	// std r9,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r9.u64);
	// stw r10,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stw r11,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// stw r11,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r11.u32);
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r11.u32);
	// stw r11,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r11.u32);
	// stw r11,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r11.u32);
	// stw r11,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r11.u32);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// stw r11,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// stw r11,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r11.u32);
	// stw r11,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r11.u32);
	// stw r11,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r11.u32);
	// stw r11,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r11.u32);
	// stw r11,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r11.u32);
	// stw r11,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r11.u32);
	// stw r11,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r11.u32);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r11.u32);
	// stw r11,136(r4)
	PPC_STORE_U32(ctx.r4.u32 + 136, ctx.r11.u32);
	// stw r11,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r11.u32);
	// stw r11,144(r4)
	PPC_STORE_U32(ctx.r4.u32 + 144, ctx.r11.u32);
	// stw r11,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8231ab4c
	if (ctx.cr6.eq) goto loc_8231AB4C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8231ab58
	if (ctx.cr6.eq) goto loc_8231AB58;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8231ab58
	if (ctx.cr6.eq) goto loc_8231AB58;
loc_8231AB4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231AB58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,2980(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2980);
	// bl 0x823210c0
	ctx.lr = 0x8231AB64;
	sub_823210C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ab9c
	if (ctx.cr6.eq) goto loc_8231AB9C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231a970
	ctx.lr = 0x8231AB84;
	sub_8231A970(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,2980(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2980);
	// bl 0x823210f8
	ctx.lr = 0x8231AB90;
	sub_823210F8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,1480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1480, ctx.r11.u32);
loc_8231AB9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231ABA8"))) PPC_WEAK_FUNC(sub_8231ABA8);
PPC_FUNC_IMPL(__imp__sub_8231ABA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231ABB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8231a970
	ctx.lr = 0x8231ABD4;
	sub_8231A970(ctx, base);
	// lwz r10,3020(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3020);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231ac38
	if (ctx.cr6.eq) goto loc_8231AC38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// ld r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r6,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r6.u64);
	// ld r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// std r5,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r5.u64);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// lwz r3,2884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2884);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r11,2868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2868);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,2872(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2872);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8231AC38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231AC40"))) PPC_WEAK_FUNC(sub_8231AC40);
PPC_FUNC_IMPL(__imp__sub_8231AC40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82322458
	sub_82322458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231AC64"))) PPC_WEAK_FUNC(sub_8231AC64);
PPC_FUNC_IMPL(__imp__sub_8231AC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231AC68"))) PPC_WEAK_FUNC(sub_8231AC68);
PPC_FUNC_IMPL(__imp__sub_8231AC68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82322480
	sub_82322480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231AC8C"))) PPC_WEAK_FUNC(sub_8231AC8C);
PPC_FUNC_IMPL(__imp__sub_8231AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231AC90"))) PPC_WEAK_FUNC(sub_8231AC90);
PPC_FUNC_IMPL(__imp__sub_8231AC90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82322458
	sub_82322458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231ACB4"))) PPC_WEAK_FUNC(sub_8231ACB4);
PPC_FUNC_IMPL(__imp__sub_8231ACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231ACB8"))) PPC_WEAK_FUNC(sub_8231ACB8);
PPC_FUNC_IMPL(__imp__sub_8231ACB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82322480
	sub_82322480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231ACDC"))) PPC_WEAK_FUNC(sub_8231ACDC);
PPC_FUNC_IMPL(__imp__sub_8231ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231ACE0"))) PPC_WEAK_FUNC(sub_8231ACE0);
PPC_FUNC_IMPL(__imp__sub_8231ACE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823220c0
	sub_823220C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231ACF8"))) PPC_WEAK_FUNC(sub_8231ACF8);
PPC_FUNC_IMPL(__imp__sub_8231ACF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823220c0
	sub_823220C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231AD10"))) PPC_WEAK_FUNC(sub_8231AD10);
PPC_FUNC_IMPL(__imp__sub_8231AD10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x823220a0
	sub_823220A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231AD24"))) PPC_WEAK_FUNC(sub_8231AD24);
PPC_FUNC_IMPL(__imp__sub_8231AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231AD28"))) PPC_WEAK_FUNC(sub_8231AD28);
PPC_FUNC_IMPL(__imp__sub_8231AD28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,2984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2984);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x823220a0
	sub_823220A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231AD3C"))) PPC_WEAK_FUNC(sub_8231AD3C);
PPC_FUNC_IMPL(__imp__sub_8231AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231AD40"))) PPC_WEAK_FUNC(sub_8231AD40);
PPC_FUNC_IMPL(__imp__sub_8231AD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231AD48;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231aebc
	if (ctx.cr6.eq) goto loc_8231AEBC;
	// lwz r28,2916(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2916);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8231aebc
	if (ctx.cr6.eq) goto loc_8231AEBC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231aebc
	if (ctx.cr6.eq) goto loc_8231AEBC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231aebc
	if (ctx.cr6.eq) goto loc_8231AEBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8231aebc
	if (ctx.cr6.eq) goto loc_8231AEBC;
	// lwz r10,1480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1480);
	// lhz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1472);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8231aebc
	if (ctx.cr6.eq) goto loc_8231AEBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r11,720
	ctx.r10.s64 = ctx.r11.s64 * 720;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8231aebc
	if (ctx.cr6.eq) goto loc_8231AEBC;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// bl 0x82339988
	ctx.lr = 0x8231ADC0;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231aebc
	if (ctx.cr6.eq) goto loc_8231AEBC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82339958
	ctx.lr = 0x8231ADDC;
	sub_82339958(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231aeac
	if (ctx.cr6.lt) goto loc_8231AEAC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231ADF4;
	sub_8233A580(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a710
	ctx.lr = 0x8231AE04;
	sub_8233A710(ctx, base);
	// lis r11,17234
	ctx.r11.s64 = 1129447424;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// ori r9,r11,18756
	ctx.r9.u64 = ctx.r11.u64 | 18756;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8231aeac
	if (!ctx.cr6.eq) goto loc_8231AEAC;
	// lhz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,720
	ctx.r11.s64 = ctx.r11.s64 * 720;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x82319bf0
	ctx.lr = 0x8231AE38;
	sub_82319BF0(ctx, base);
	// lhz r9,1472(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r9,720
	ctx.r11.s64 = ctx.r9.s64 * 720;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,724(r7)
	PPC_STORE_U32(ctx.r7.u32 + 724, ctx.r8.u32);
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lhz r5,1472(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// mulli r11,r5,720
	ctx.r11.s64 = ctx.r5.s64 * 720;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,728(r4)
	PPC_STORE_U32(ctx.r4.u32 + 728, ctx.r6.u32);
	// lwz r3,620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lhz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// mulli r11,r11,720
	ctx.r11.s64 = ctx.r11.s64 * 720;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 732, ctx.r3.u32);
	// lwz r8,648(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// lhz r7,1472(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// mulli r11,r7,720
	ctx.r11.s64 = ctx.r7.s64 * 720;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,736(r6)
	PPC_STORE_U32(ctx.r6.u32 + 736, ctx.r8.u32);
	// lhz r5,1472(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// mulli r11,r5,720
	ctx.r11.s64 = ctx.r5.s64 * 720;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,740(r4)
	PPC_STORE_U32(ctx.r4.u32 + 740, ctx.r29.u32);
	// lhz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// mulli r11,r3,720
	ctx.r11.s64 = ctx.r3.s64 * 720;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8231AEAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82339978
	ctx.lr = 0x8231AEBC;
	sub_82339978(ctx, base);
loc_8231AEBC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231AEC4"))) PPC_WEAK_FUNC(sub_8231AEC4);
PPC_FUNC_IMPL(__imp__sub_8231AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231AEC8"))) PPC_WEAK_FUNC(sub_8231AEC8);
PPC_FUNC_IMPL(__imp__sub_8231AEC8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3036);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231afe0
	if (!ctx.cr6.gt) goto loc_8231AFE0;
	// lwz r11,3048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3048);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231af10
	if (!ctx.cr6.eq) goto loc_8231AF10;
	// lwz r10,3020(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3020);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231afe0
	if (ctx.cr6.eq) goto loc_8231AFE0;
	// lwz r10,3052(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3052);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8231afe0
	if (ctx.cr6.eq) goto loc_8231AFE0;
loc_8231AF10:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231af74
	if (ctx.cr6.eq) goto loc_8231AF74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x82321050
	ctx.lr = 0x8231AF28;
	sub_82321050(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231af74
	if (ctx.cr6.eq) goto loc_8231AF74;
loc_8231AF30:
	// lwz r11,3036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3036);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231af70
	if (!ctx.cr6.lt) goto loc_8231AF70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x823210c0
	ctx.lr = 0x8231AF4C;
	sub_823210C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x823210f8
	ctx.lr = 0x8231AF58;
	sub_823210F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x82321050
	ctx.lr = 0x8231AF64;
	sub_82321050(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231af30
	if (!ctx.cr6.eq) goto loc_8231AF30;
	// b 0x8231af74
	goto loc_8231AF74;
loc_8231AF70:
	// stw r30,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r30.u32);
loc_8231AF74:
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231afe0
	if (ctx.cr6.eq) goto loc_8231AFE0;
	// lwz r11,3052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3052);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231afe0
	if (ctx.cr6.eq) goto loc_8231AFE0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82321050
	ctx.lr = 0x8231AF94;
	sub_82321050(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231afe0
	if (ctx.cr6.eq) goto loc_8231AFE0;
loc_8231AF9C:
	// lwz r11,3036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3036);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231afdc
	if (!ctx.cr6.lt) goto loc_8231AFDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x823210c0
	ctx.lr = 0x8231AFB8;
	sub_823210C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x823210f8
	ctx.lr = 0x8231AFC4;
	sub_823210F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x82321050
	ctx.lr = 0x8231AFD0;
	sub_82321050(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231af9c
	if (!ctx.cr6.eq) goto loc_8231AF9C;
	// b 0x8231afe0
	goto loc_8231AFE0;
loc_8231AFDC:
	// stw r30,3052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3052, ctx.r30.u32);
loc_8231AFE0:
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

__attribute__((alias("__imp__sub_8231AFF8"))) PPC_WEAK_FUNC(sub_8231AFF8);
PPC_FUNC_IMPL(__imp__sub_8231AFF8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a710
	ctx.lr = 0x8231B028;
	sub_8233A710(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// srawi r11,r9,24
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 24;
	// rlwimi r7,r4,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwimi r11,r7,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// srawi r4,r9,24
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 24;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r7,r11,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// rldimi r9,r7,8,32
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// std r9,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r9.u64);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r4,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 16;
	// srawi r11,r8,24
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 24;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// rlwimi r4,r9,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// rldimi r8,r4,8,32
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// std r8,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r8.u64);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// rlwimi r4,r7,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// srawi r9,r7,24
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 24;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rldimi r7,r11,8,32
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// std r7,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r7.u64);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// rlwimi r3,r4,8,16,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF00FF);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// srawi r9,r4,24
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 24;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r4,3004(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3004);
	// stw r4,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r4.u32);
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x82321128
	ctx.lr = 0x8231B10C;
	sub_82321128(ctx, base);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// tdllei r8,0
	// divdu r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 / ctx.r8.u64;
	// ld r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// mulld r10,r5,r6
	ctx.r10.s64 = ctx.r5.s64 * ctx.r6.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r4,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r4.u64);
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

__attribute__((alias("__imp__sub_8231B148"))) PPC_WEAK_FUNC(sub_8231B148);
PPC_FUNC_IMPL(__imp__sub_8231B148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,2892(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2892);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8231b1d4
	if (!ctx.cr6.eq) goto loc_8231B1D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8231b194
	if (!ctx.cr6.eq) goto loc_8231B194;
	// lwz r10,3060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231b188
	if (!ctx.cr6.eq) goto loc_8231B188;
	// lwz r10,2940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2940);
	// lwz r3,2912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2912);
	// b 0x8231b1d0
	goto loc_8231B1D0;
loc_8231B188:
	// lwz r10,3064(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3064);
	// lwz r3,3068(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3068);
	// b 0x8231b1d0
	goto loc_8231B1D0;
loc_8231B194:
	// lwz r9,2256(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	// lfs f0,3128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3128);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,2964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2964);
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r3,2920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8231b1d4
	if (!ctx.cr6.gt) goto loc_8231B1D4;
loc_8231B1D0:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8231B1D4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231b1e0
	if (ctx.cr6.eq) goto loc_8231B1E0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_8231B1E0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B1F0"))) PPC_WEAK_FUNC(sub_8231B1F0);
PPC_FUNC_IMPL(__imp__sub_8231B1F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2988, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x8231b204
	if (ctx.cr6.eq) goto loc_8231B204;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8231B204:
	// stw r11,2992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B20C"))) PPC_WEAK_FUNC(sub_8231B20C);
PPC_FUNC_IMPL(__imp__sub_8231B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B210"))) PPC_WEAK_FUNC(sub_8231B210);
PPC_FUNC_IMPL(__imp__sub_8231B210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8231B218;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r8,13
	ctx.r8.s64 = 13;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// and r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x8231b298
	if (!ctx.cr6.eq) goto loc_8231B298;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8231b298
	if (!ctx.cr6.lt) goto loc_8231B298;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8231B298:
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r10,2048
	ctx.r11.s64 = ctx.r10.s64 + 2048;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,10240
	ctx.r4.s64 = 10240;
	// rlwinm r3,r11,0,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// bl 0x8233a9c0
	ctx.lr = 0x8231B2BC;
	sub_8233A9C0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8231b314
	if (!ctx.cr6.gt) goto loc_8231B314;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82320db0
	ctx.lr = 0x8231B2E0;
	sub_82320DB0(ctx, base);
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231b314
	if (!ctx.cr6.gt) goto loc_8231B314;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231b300
	if (!ctx.cr6.eq) goto loc_8231B300;
	// bl 0x823224a8
	ctx.lr = 0x8231B300;
	sub_823224A8(ctx, base);
loc_8231B300:
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82322530
	ctx.lr = 0x8231B310;
	sub_82322530(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_8231B314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321208
	ctx.lr = 0x8231B31C;
	sub_82321208(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231b344
	if (ctx.cr6.lt) goto loc_8231B344;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// bl 0x82321258
	ctx.lr = 0x8231B340;
	sub_82321258(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_8231B344:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8233a848
	ctx.lr = 0x8231B35C;
	sub_8233A848(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231B368"))) PPC_WEAK_FUNC(sub_8231B368);
PPC_FUNC_IMPL(__imp__sub_8231B368) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3036, ctx.r4.u32);
	// stw r5,3040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3040, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B374"))) PPC_WEAK_FUNC(sub_8231B374);
PPC_FUNC_IMPL(__imp__sub_8231B374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B378"))) PPC_WEAK_FUNC(sub_8231B378);
PPC_FUNC_IMPL(__imp__sub_8231B378) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3044, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B380"))) PPC_WEAK_FUNC(sub_8231B380);
PPC_FUNC_IMPL(__imp__sub_8231B380) {
	PPC_FUNC_PROLOGUE();
	// stw r5,2200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2200, ctx.r5.u32);
	// stw r4,2196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2196, ctx.r4.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,2224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2224, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,2228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2228, ctx.r10.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,2232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2232, ctx.r9.u32);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r8,2236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2236, ctx.r8.u32);
	// lwz r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r7,2240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2240, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B3B4"))) PPC_WEAK_FUNC(sub_8231B3B4);
PPC_FUNC_IMPL(__imp__sub_8231B3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B3B8"))) PPC_WEAK_FUNC(sub_8231B3B8);
PPC_FUNC_IMPL(__imp__sub_8231B3B8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82336fb8
	sub_82336FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231B3C8"))) PPC_WEAK_FUNC(sub_8231B3C8);
PPC_FUNC_IMPL(__imp__sub_8231B3C8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b3dc
	if (ctx.cr6.eq) goto loc_8231B3DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3164, ctx.r11.u32);
loc_8231B3DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82336fb8
	sub_82336FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231B3E8"))) PPC_WEAK_FUNC(sub_8231B3E8);
PPC_FUNC_IMPL(__imp__sub_8231B3E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B3FC"))) PPC_WEAK_FUNC(sub_8231B3FC);
PPC_FUNC_IMPL(__imp__sub_8231B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B400"))) PPC_WEAK_FUNC(sub_8231B400);
PPC_FUNC_IMPL(__imp__sub_8231B400) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// addi r31,r11,-24736
	ctx.r31.s64 = ctx.r11.s64 + -24736;
	// addi r8,r10,-7632
	ctx.r8.s64 = ctx.r10.s64 + -7632;
	// lwz r11,-24736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24736);
	// stw r8,-23436(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23436, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231b498
	if (!ctx.cr6.eq) goto loc_8231B498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8231B444;
	sub_8233EAF0(ctx, base);
	// bl 0x823384b0
	ctx.lr = 0x8231B448;
	sub_823384B0(ctx, base);
	// bl 0x821daa68
	ctx.lr = 0x8231B44C;
	sub_821DAA68(ctx, base);
	// bl 0x82320d30
	ctx.lr = 0x8231B450;
	sub_82320D30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b45c
	if (!ctx.cr6.eq) goto loc_8231B45C;
	// bl 0x82322908
	ctx.lr = 0x8231B45C;
	sub_82322908(ctx, base);
loc_8231B45C:
	// bl 0x82320d40
	ctx.lr = 0x8231B460;
	sub_82320D40(ctx, base);
	// bl 0x823211f8
	ctx.lr = 0x8231B464;
	sub_823211F8(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823384a8
	ctx.lr = 0x8231B470;
	sub_823384A8(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b494
	if (!ctx.cr6.eq) goto loc_8231B494;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-7200
	ctx.r4.s64 = ctx.r11.s64 + -7200;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231B494;
	sub_82336FB8(ctx, base);
loc_8231B494:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8231B498:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8231B4B4"))) PPC_WEAK_FUNC(sub_8231B4B4);
PPC_FUNC_IMPL(__imp__sub_8231B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B4B8"))) PPC_WEAK_FUNC(sub_8231B4B8);
PPC_FUNC_IMPL(__imp__sub_8231B4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231B4C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x823382e0
	ctx.lr = 0x8231B4D0;
	sub_823382E0(ctx, base);
	// lwz r3,3000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,2960(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2960);
	// beq cr6,0x8231b4ec
	if (ctx.cr6.eq) goto loc_8231B4EC;
	// bl 0x82339928
	ctx.lr = 0x8231B4E8;
	sub_82339928(ctx, base);
	// stw r30,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r30.u32);
loc_8231B4EC:
	// lwz r3,2984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b504
	if (ctx.cr6.eq) goto loc_8231B504;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82321638
	ctx.lr = 0x8231B500;
	sub_82321638(ctx, base);
	// stw r30,2984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2984, ctx.r30.u32);
loc_8231B504:
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b520
	if (ctx.cr6.eq) goto loc_8231B520;
	// bl 0x823225c0
	ctx.lr = 0x8231B514;
	sub_823225C0(ctx, base);
	// stw r30,3020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3020, ctx.r30.u32);
	// bl 0x82322500
	ctx.lr = 0x8231B51C;
	sub_82322500(ctx, base);
	// bl 0x821daa68
	ctx.lr = 0x8231B520;
	sub_821DAA68(ctx, base);
loc_8231B520:
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b534
	if (ctx.cr6.eq) goto loc_8231B534;
	// bl 0x82320e40
	ctx.lr = 0x8231B530;
	sub_82320E40(ctx, base);
	// stw r30,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r30.u32);
loc_8231B534:
	// lwz r3,2920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b550
	if (ctx.cr6.eq) goto loc_8231B550;
	// bl 0x82339928
	ctx.lr = 0x8231B544;
	sub_82339928(ctx, base);
	// stw r30,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r30.u32);
	// stw r30,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r30.u32);
	// stw r30,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r30.u32);
loc_8231B550:
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2248
	ctx.r3.s64 = ctx.r31.s64 + 2248;
	// bl 0x8233eaf0
	ctx.lr = 0x8231B560;
	sub_8233EAF0(ctx, base);
	// lwz r3,3136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b574
	if (ctx.cr6.eq) goto loc_8231B574;
	// bl 0x82337e18
	ctx.lr = 0x8231B570;
	sub_82337E18(ctx, base);
	// stw r30,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r30.u32);
loc_8231B574:
	// stw r30,2244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2244, ctx.r30.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231B580;
	sub_82338340(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231B588"))) PPC_WEAK_FUNC(sub_8231B588);
PPC_FUNC_IMPL(__imp__sub_8231B588) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231B590"))) PPC_WEAK_FUNC(sub_8231B590);
PPC_FUNC_IMPL(__imp__sub_8231B590) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-24736
	ctx.r30.s64 = ctx.r11.s64 + -24736;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x823382e0
	ctx.lr = 0x8231B5B8;
	sub_823382E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8231b5e0
	if (ctx.cr6.eq) goto loc_8231B5E0;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x82320f10
	ctx.lr = 0x8231B5C8;
	sub_82320F10(ctx, base);
	// lwz r11,3020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231b5e0
	if (ctx.cr6.eq) goto loc_8231B5E0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82322690
	ctx.lr = 0x8231B5E0;
	sub_82322690(ctx, base);
loc_8231B5E0:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82338340
	ctx.lr = 0x8231B5E8;
	sub_82338340(ctx, base);
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

__attribute__((alias("__imp__sub_8231B604"))) PPC_WEAK_FUNC(sub_8231B604);
PPC_FUNC_IMPL(__imp__sub_8231B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B608"))) PPC_WEAK_FUNC(sub_8231B608);
PPC_FUNC_IMPL(__imp__sub_8231B608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231B610;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b670
	if (ctx.cr6.eq) goto loc_8231B670;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,-7020
	ctx.r7.s64 = ctx.r11.s64 + -7020;
	// bl 0x8233aa20
	ctx.lr = 0x8231B638;
	sub_8233AA20(ctx, base);
	// stw r3,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b708
	if (!ctx.cr6.eq) goto loc_8231B708;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-7056
	ctx.r4.s64 = ctx.r10.s64 + -7056;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231B664;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231B670:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// bl 0x82339308
	ctx.lr = 0x8231B6A4;
	sub_82339308(ctx, base);
	// lwz r9,3140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,3148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8231B6BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b6f0
	if (!ctx.cr6.eq) goto loc_8231B6F0;
	// stw r28,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r28.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-7128
	ctx.r4.s64 = ctx.r11.s64 + -7128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231B6E4;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231B6F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82339338
	ctx.lr = 0x8231B700;
	sub_82339338(ctx, base);
	// stw r3,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r3.u32);
	// stw r30,3152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3152, ctx.r30.u32);
loc_8231B708:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231B714"))) PPC_WEAK_FUNC(sub_8231B714);
PPC_FUNC_IMPL(__imp__sub_8231B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B718"))) PPC_WEAK_FUNC(sub_8231B718);
PPC_FUNC_IMPL(__imp__sub_8231B718) {
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
	// lwz r11,2144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8231b744
	if (ctx.cr6.gt) goto loc_8231B744;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3112, ctx.r11.u32);
	// b 0x8231b830
	goto loc_8231B830;
loc_8231B744:
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8231b774
	if (ctx.cr6.eq) goto loc_8231B774;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r3,2956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2956);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r9,-6952
	ctx.r5.s64 = ctx.r9.s64 + -6952;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82337c48
	ctx.lr = 0x8231B770;
	sub_82337C48(ctx, base);
	// b 0x8231b7d0
	goto loc_8231B7D0;
loc_8231B774:
	// lwz r9,3140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,3148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8231B78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b7cc
	if (!ctx.cr6.eq) goto loc_8231B7CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-7128
	ctx.r4.s64 = ctx.r10.s64 + -7128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231B7B4;
	sub_82336FB8(ctx, base);
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
loc_8231B7CC:
	// stw r3,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r3.u32);
loc_8231B7D0:
	// stw r3,3112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3112, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b818
	if (!ctx.cr6.eq) goto loc_8231B818;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-7000
	ctx.r4.s64 = ctx.r10.s64 + -7000;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231B800;
	sub_82336FB8(ctx, base);
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
loc_8231B818:
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8233eaf0
	ctx.lr = 0x8231B830;
	sub_8233EAF0(ctx, base);
loc_8231B830:
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

__attribute__((alias("__imp__sub_8231B848"))) PPC_WEAK_FUNC(sub_8231B848);
PPC_FUNC_IMPL(__imp__sub_8231B848) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x823382e0
	ctx.lr = 0x8231B868;
	sub_823382E0(ctx, base);
	// lwz r3,3068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3068);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b89c
	if (ctx.cr6.eq) goto loc_8231B89C;
	// bl 0x82339928
	ctx.lr = 0x8231B87C;
	sub_82339928(ctx, base);
	// lwz r4,3152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// stw r30,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231b89c
	if (ctx.cr6.eq) goto loc_8231B89C;
	// lwz r11,3144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3144);
	// lwz r3,3148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231B89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231B89C:
	// lwz r4,3112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231b8e0
	if (ctx.cr6.eq) goto loc_8231B8E0;
	// lwz r11,3156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231b8cc
	if (ctx.cr6.eq) goto loc_8231B8CC;
	// lwz r10,3144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3144);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,3148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231B8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8231b8dc
	goto loc_8231B8DC;
loc_8231B8CC:
	// lwz r3,2956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2956);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231b8dc
	if (ctx.cr6.eq) goto loc_8231B8DC;
	// bl 0x82337d50
	ctx.lr = 0x8231B8DC;
	sub_82337D50(ctx, base);
loc_8231B8DC:
	// stw r30,3112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3112, ctx.r30.u32);
loc_8231B8E0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231B8E8;
	sub_82338340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8231B904"))) PPC_WEAK_FUNC(sub_8231B904);
PPC_FUNC_IMPL(__imp__sub_8231B904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231B908"))) PPC_WEAK_FUNC(sub_8231B908);
PPC_FUNC_IMPL(__imp__sub_8231B908) {
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
	// lwz r11,696(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 696);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231babc
	if (!ctx.cr6.eq) goto loc_8231BABC;
	// lwz r11,700(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231babc
	if (!ctx.cr6.eq) goto loc_8231BABC;
	// lwz r11,704(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231babc
	if (!ctx.cr6.eq) goto loc_8231BABC;
	// lwz r11,708(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231babc
	if (!ctx.cr6.eq) goto loc_8231BABC;
	// lwz r11,2328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231b96c
	if (ctx.cr6.lt) goto loc_8231B96C;
	// lwz r11,692(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231babc
	if (!ctx.cr6.eq) goto loc_8231BABC;
loc_8231B96C:
	// lhz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// addi r11,r31,1488
	ctx.r11.s64 = ctx.r31.s64 + 1488;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// mulli r10,r4,720
	ctx.r10.s64 = ctx.r4.s64 * 720;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// ld r10,744(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 744);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r10,712(r30)
	PPC_STORE_U64(ctx.r30.u32 + 712, ctx.r10.u64);
	// lhz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// mulli r10,r4,720
	ctx.r10.s64 = ctx.r4.s64 * 720;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,712(r30)
	PPC_STORE_U64(ctx.r30.u32 + 712, ctx.r10.u64);
	// lwz r9,1512(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8231ba64
	if (!ctx.cr6.eq) goto loc_8231BA64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8231ba64
	if (!ctx.cr6.eq) goto loc_8231BA64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8231ba64
	if (!ctx.cr6.eq) goto loc_8231BA64;
	// lwz r10,2328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8231ba88
	if (ctx.cr6.lt) goto loc_8231BA88;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231ba64
	if (!ctx.cr6.eq) goto loc_8231BA64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231ba88
	if (ctx.cr6.eq) goto loc_8231BA88;
	// addi r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 + 80;
	// addi r10,r30,76
	ctx.r10.s64 = ctx.r30.s64 + 76;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_8231BA2C:
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8231ba64
	if (!ctx.cr6.eq) goto loc_8231BA64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8231ba64
	if (!ctx.cr6.eq) goto loc_8231BA64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8231ba2c
	if (ctx.cr6.lt) goto loc_8231BA2C;
	// b 0x8231ba88
	goto loc_8231BA88;
loc_8231BA64:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-6928
	ctx.r4.s64 = ctx.r10.s64 + -6928;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231BA88;
	sub_82336FB8(ctx, base);
loc_8231BA88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r11.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// lhz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1472);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// stw r8,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r8.u32);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// sth r4,1472(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1472, ctx.r4.u16);
loc_8231BABC:
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

__attribute__((alias("__imp__sub_8231BAD4"))) PPC_WEAK_FUNC(sub_8231BAD4);
PPC_FUNC_IMPL(__imp__sub_8231BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231BAD8"))) PPC_WEAK_FUNC(sub_8231BAD8);
PPC_FUNC_IMPL(__imp__sub_8231BAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231BAE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,1472(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1472);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mulli r10,r10,720
	ctx.r10.s64 = ctx.r10.s64 * 720;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// lwz r9,720(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 720);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8231bb18
	if (!ctx.cr6.eq) goto loc_8231BB18;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231BB18:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231bb64
	if (ctx.cr6.lt) goto loc_8231BB64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a710
	ctx.lr = 0x8231BB30;
	sub_8233A710(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// rlwinm r11,r29,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// bl 0x82319fa0
	ctx.lr = 0x8231BB4C;
	sub_82319FA0(ctx, base);
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// bl 0x8231b908
	ctx.lr = 0x8231BB64;
	sub_8231B908(ctx, base);
loc_8231BB64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231BB70"))) PPC_WEAK_FUNC(sub_8231BB70);
PPC_FUNC_IMPL(__imp__sub_8231BB70) {
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
	// lhz r10,1472(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1472);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mulli r10,r10,720
	ctx.r10.s64 = ctx.r10.s64 * 720;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// lwz r9,720(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 720);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8231bbb0
	if (!ctx.cr6.eq) goto loc_8231BBB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231bbfc
	goto loc_8231BBFC;
loc_8231BBB0:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231bbf8
	if (ctx.cr6.lt) goto loc_8231BBF8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a710
	ctx.lr = 0x8231BBC8;
	sub_8233A710(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82319d88
	ctx.lr = 0x8231BBE0;
	sub_82319D88(ctx, base);
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// bl 0x8231b908
	ctx.lr = 0x8231BBF8;
	sub_8231B908(ctx, base);
loc_8231BBF8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8231BBFC:
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

__attribute__((alias("__imp__sub_8231BC14"))) PPC_WEAK_FUNC(sub_8231BC14);
PPC_FUNC_IMPL(__imp__sub_8231BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231BC18"))) PPC_WEAK_FUNC(sub_8231BC18);
PPC_FUNC_IMPL(__imp__sub_8231BC18) {
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
	// lhz r10,1472(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1472);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mulli r10,r10,720
	ctx.r10.s64 = ctx.r10.s64 * 720;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// lwz r9,720(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 720);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8231bc58
	if (!ctx.cr6.eq) goto loc_8231BC58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231bca0
	goto loc_8231BCA0;
loc_8231BC58:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231bc9c
	if (ctx.cr6.lt) goto loc_8231BC9C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a710
	ctx.lr = 0x8231BC70;
	sub_8233A710(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231a1e0
	ctx.lr = 0x8231BC84;
	sub_8231A1E0(ctx, base);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// bl 0x8231b908
	ctx.lr = 0x8231BC9C;
	sub_8231B908(ctx, base);
loc_8231BC9C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8231BCA0:
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

__attribute__((alias("__imp__sub_8231BCB8"))) PPC_WEAK_FUNC(sub_8231BCB8);
PPC_FUNC_IMPL(__imp__sub_8231BCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x8231BCC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,2916(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2916);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r30,r31,1488
	ctx.r30.s64 = ctx.r31.s64 + 1488;
	// bl 0x82339988
	ctx.lr = 0x8231BCE0;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231bf1c
	if (ctx.cr6.eq) goto loc_8231BF1C;
	// lis r11,17234
	ctx.r11.s64 = 1129447424;
	// lis r10,16467
	ctx.r10.s64 = 1079181312;
	// lis r9,16449
	ctx.r9.s64 = 1078001664;
	// lis r8,16451
	ctx.r8.s64 = 1078132736;
	// lis r7,16467
	ctx.r7.s64 = 1079181312;
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r27,r11,18756
	ctx.r27.u64 = ctx.r11.u64 | 18756;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r28,r10,16980
	ctx.r28.u64 = ctx.r10.u64 | 16980;
	// ori r22,r9,19536
	ctx.r22.u64 = ctx.r9.u64 | 19536;
	// ori r23,r8,21829
	ctx.r23.u64 = ctx.r8.u64 | 21829;
	// ori r26,r7,17985
	ctx.r26.u64 = ctx.r7.u64 | 17985;
loc_8231BD18:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339958
	ctx.lr = 0x8231BD2C;
	sub_82339958(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231beb8
	if (ctx.cr6.lt) goto loc_8231BEB8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8233a580
	ctx.lr = 0x8231BD44;
	sub_8233A580(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8233a710
	ctx.lr = 0x8231BD54;
	sub_8233A710(ctx, base);
	// lwz r11,2176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231bd88
	if (!ctx.cr6.eq) goto loc_8231BD88;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8231bef0
	if (!ctx.cr6.eq) goto loc_8231BEF0;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82319bf0
	ctx.lr = 0x8231BD84;
	sub_82319BF0(ctx, base);
	// b 0x8231be98
	goto loc_8231BE98;
loc_8231BD88:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8231bda8
	if (!ctx.cr6.eq) goto loc_8231BDA8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82319bf0
	ctx.lr = 0x8231BDA4;
	sub_82319BF0(ctx, base);
	// b 0x8231be98
	goto loc_8231BE98;
loc_8231BDA8:
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8231be8c
	if (!ctx.cr6.eq) goto loc_8231BE8C;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8231be28
	if (ctx.cr6.gt) goto loc_8231BE28;
	// beq cr6,0x8231be14
	if (ctx.cr6.eq) goto loc_8231BE14;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8231bde4
	if (ctx.cr6.eq) goto loc_8231BDE4;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8231be98
	if (!ctx.cr6.eq) goto loc_8231BE98;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,664
	ctx.r4.s64 = ctx.r30.s64 + 664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231a0f8
	ctx.lr = 0x8231BDE0;
	sub_8231A0F8(ctx, base);
	// b 0x8231be98
	goto loc_8231BE98;
loc_8231BDE4:
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8231be98
	if (!ctx.cr6.lt) goto loc_8231BE98;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// bl 0x8231a1e0
	ctx.lr = 0x8231BE10;
	sub_8231A1E0(ctx, base);
	// b 0x8231be98
	goto loc_8231BE98;
loc_8231BE14:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,592
	ctx.r4.s64 = ctx.r30.s64 + 592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231a050
	ctx.lr = 0x8231BE24;
	sub_8231A050(ctx, base);
	// b 0x8231be98
	goto loc_8231BE98;
loc_8231BE28:
	// subf. r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231be64
	if (ctx.cr0.eq) goto loc_8231BE64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x8231be98
	if (!ctx.cr6.eq) goto loc_8231BE98;
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8231be98
	if (!ctx.cr6.lt) goto loc_8231BE98;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82319d88
	ctx.lr = 0x8231BE60;
	sub_82319D88(ctx, base);
	// b 0x8231be98
	goto loc_8231BE98;
loc_8231BE64:
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8231be98
	if (!ctx.cr6.lt) goto loc_8231BE98;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// bl 0x82319fa0
	ctx.lr = 0x8231BE88;
	sub_82319FA0(ctx, base);
	// b 0x8231be98
	goto loc_8231BE98;
loc_8231BE8C:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8231be98
	if (!ctx.cr6.eq) goto loc_8231BE98;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_8231BE98:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339978
	ctx.lr = 0x8231BEA8;
	sub_82339978(ctx, base);
	// lwz r11,2176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r11.u32);
	// b 0x8231bec8
	goto loc_8231BEC8;
loc_8231BEB8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339968
	ctx.lr = 0x8231BEC8;
	sub_82339968(ctx, base);
loc_8231BEC8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x8231bf1c
	if (ctx.cr6.eq) goto loc_8231BF1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339988
	ctx.lr = 0x8231BEDC;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231bd18
	if (!ctx.cr6.eq) goto loc_8231BD18;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_8231BEF0:
	// stw r25,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r25.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-6852
	ctx.r4.s64 = ctx.r11.s64 + -6852;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231BF0C;
	sub_82336FB8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339968
	ctx.lr = 0x8231BF1C;
	sub_82339968(ctx, base);
loc_8231BF1C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231BF28"))) PPC_WEAK_FUNC(sub_8231BF28);
PPC_FUNC_IMPL(__imp__sub_8231BF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8231BF30;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2892);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231c0c8
	if (!ctx.cr6.eq) goto loc_8231C0C8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82339988
	ctx.lr = 0x8231BF5C;
	sub_82339988(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231bf90
	if (ctx.cr6.eq) goto loc_8231BF90;
loc_8231BF68:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339958
	ctx.lr = 0x8231BF7C;
	sub_82339958(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339988
	ctx.lr = 0x8231BF88;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231bf68
	if (!ctx.cr6.eq) goto loc_8231BF68;
loc_8231BF90:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339988
	ctx.lr = 0x8231BF9C;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c024
	if (ctx.cr6.eq) goto loc_8231C024;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-6728
	ctx.r29.s64 = ctx.r11.s64 + -6728;
loc_8231BFAC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823399f0
	ctx.lr = 0x8231BFB8;
	sub_823399F0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339958
	ctx.lr = 0x8231BFCC;
	sub_82339958(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8231bff0
	if (!ctx.cr6.gt) goto loc_8231BFF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231BFF0;
	sub_82336FB8(ctx, base);
loc_8231BFF0:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8233e4e0
	ctx.lr = 0x8231C000;
	sub_8233E4E0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339a10
	ctx.lr = 0x8231C010;
	sub_82339A10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339988
	ctx.lr = 0x8231C01C;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231bfac
	if (!ctx.cr6.eq) goto loc_8231BFAC;
loc_8231C024:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82339988
	ctx.lr = 0x8231C030;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c0c8
	if (ctx.cr6.eq) goto loc_8231C0C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r11,-6808
	ctx.r31.s64 = ctx.r11.s64 + -6808;
loc_8231C040:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823399f0
	ctx.lr = 0x8231C04C;
	sub_823399F0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82339958
	ctx.lr = 0x8231C060;
	sub_82339958(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8231c084
	if (!ctx.cr6.gt) goto loc_8231C084;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231C084;
	sub_82336FB8(ctx, base);
loc_8231C084:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8233e4e0
	ctx.lr = 0x8231C094;
	sub_8233E4E0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339a10
	ctx.lr = 0x8231C0A4;
	sub_82339A10(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82339978
	ctx.lr = 0x8231C0B4;
	sub_82339978(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82339988
	ctx.lr = 0x8231C0C0;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231c040
	if (!ctx.cr6.eq) goto loc_8231C040;
loc_8231C0C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231C0D0"))) PPC_WEAK_FUNC(sub_8231C0D0);
PPC_FUNC_IMPL(__imp__sub_8231C0D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2980(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c164
	if (ctx.cr6.eq) goto loc_8231C164;
	// bl 0x82320ea8
	ctx.lr = 0x8231C0F4;
	sub_82320EA8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8231c1d4
	if (!ctx.cr6.eq) goto loc_8231C1D4;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c164
	if (ctx.cr6.eq) goto loc_8231C164;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82322840
	ctx.lr = 0x8231C110;
	sub_82322840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c138
	if (ctx.cr6.eq) goto loc_8231C138;
loc_8231C118:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x82322878
	ctx.lr = 0x8231C124;
	sub_82322878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x82322840
	ctx.lr = 0x8231C130;
	sub_82322840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231c118
	if (!ctx.cr6.eq) goto loc_8231C118;
loc_8231C138:
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x82322628
	ctx.lr = 0x8231C140;
	sub_82322628(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8231c164
	if (ctx.cr6.eq) goto loc_8231C164;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r11.u8);
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
loc_8231C164:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2984);
	// bl 0x82322000
	ctx.lr = 0x8231C170;
	sub_82322000(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8231c194
	if (ctx.cr6.eq) goto loc_8231C194;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r11.u8);
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
loc_8231C194:
	// lwz r11,2928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231c1bc
	if (ctx.cr6.eq) goto loc_8231C1BC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r11.u8);
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
loc_8231C1BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82319b08
	ctx.lr = 0x8231C1C4;
	sub_82319B08(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r10.u8);
loc_8231C1D4:
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

__attribute__((alias("__imp__sub_8231C1E8"))) PPC_WEAK_FUNC(sub_8231C1E8);
PPC_FUNC_IMPL(__imp__sub_8231C1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8231C1F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,2908(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2908);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r26,2900(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2900);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231c234
	if (ctx.cr6.lt) goto loc_8231C234;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,-6652
	ctx.r4.s64 = ctx.r11.s64 + -6652;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231C234;
	sub_82336FB8(ctx, base);
loc_8231C234:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823385b8
	ctx.lr = 0x8231C24C;
	sub_823385B8(ctx, base);
	// lwz r11,2908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2908);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2908, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231C260"))) PPC_WEAK_FUNC(sub_8231C260);
PPC_FUNC_IMPL(__imp__sub_8231C260) {
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
	// lwz r30,2900(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2900);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338588
	ctx.lr = 0x8231C284;
	sub_82338588(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8231c298
	if (!ctx.cr6.eq) goto loc_8231C298;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// b 0x8231c384
	goto loc_8231C384;
loc_8231C298:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8231c384
	if (ctx.cr6.eq) goto loc_8231C384;
	// lwz r10,2896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231c338
	if (!ctx.cr6.eq) goto loc_8231C338;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231c338
	if (!ctx.cr6.eq) goto loc_8231C338;
	// lwz r11,2176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231c338
	if (!ctx.cr6.eq) goto loc_8231C338;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,2912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339958
	ctx.lr = 0x8231C2D8;
	sub_82339958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231c3d4
	if (ctx.cr6.eq) goto loc_8231C3D4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8231c3d4
	if (ctx.cr6.lt) goto loc_8231C3D4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// bne cr6,0x8231c39c
	if (!ctx.cr6.eq) goto loc_8231C39C;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// bne cr6,0x8231c39c
	if (!ctx.cr6.eq) goto loc_8231C39C;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,73
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 73, ctx.xer);
	// bne cr6,0x8231c39c
	if (!ctx.cr6.eq) goto loc_8231C39C;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,68
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// bne cr6,0x8231c39c
	if (!ctx.cr6.eq) goto loc_8231C39C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,2912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339968
	ctx.lr = 0x8231C330;
	sub_82339968(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2896, ctx.r11.u32);
loc_8231C338:
	// lwz r11,2896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231c34c
	if (!ctx.cr6.eq) goto loc_8231C34C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338ca8
	ctx.lr = 0x8231C34C;
	sub_82338CA8(ctx, base);
loc_8231C34C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338588
	ctx.lr = 0x8231C354;
	sub_82338588(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8231c384
	if (!ctx.cr6.eq) goto loc_8231C384;
	// lwz r3,2984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2984);
	// bl 0x82321b70
	ctx.lr = 0x8231C364;
	sub_82321B70(ctx, base);
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c384
	if (ctx.cr6.eq) goto loc_8231C384;
	// bl 0x82320fa8
	ctx.lr = 0x8231C374;
	sub_82320FA8(ctx, base);
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c384
	if (ctx.cr6.eq) goto loc_8231C384;
	// bl 0x82322728
	ctx.lr = 0x8231C384;
	sub_82322728(ctx, base);
loc_8231C384:
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
loc_8231C39C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,2912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339968
	ctx.lr = 0x8231C3AC;
	sub_82339968(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-6588
	ctx.r4.s64 = ctx.r10.s64 + -6588;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231C3D0;
	sub_82336FB8(ctx, base);
	// b 0x8231c384
	goto loc_8231C384;
loc_8231C3D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,2912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339968
	ctx.lr = 0x8231C3E4;
	sub_82339968(ctx, base);
	// b 0x8231c384
	goto loc_8231C384;
}

__attribute__((alias("__imp__sub_8231C3E8"))) PPC_WEAK_FUNC(sub_8231C3E8);
PPC_FUNC_IMPL(__imp__sub_8231C3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231C3F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,2900(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2900);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8231c438
	if (ctx.cr6.eq) goto loc_8231C438;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8231c438
	if (ctx.cr6.eq) goto loc_8231C438;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3164, ctx.r11.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-6544
	ctx.r4.s64 = ctx.r10.s64 + -6544;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231C430;
	sub_82336FB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231C438:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,688
	ctx.r5.s64 = 688;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,1488
	ctx.r3.s64 = ctx.r31.s64 + 1488;
	// stw r30,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r30.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8231C454;
	sub_8233EAF0(ctx, base);
	// stw r30,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,2912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// bl 0x82102cf0
	ctx.lr = 0x8231C464;
	sub_82102CF0(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,2916(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823385b8
	ctx.lr = 0x8231C47C;
	sub_823385B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823385e0
	ctx.lr = 0x8231C488;
	sub_823385E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823385a0
	ctx.lr = 0x8231C490;
	sub_823385A0(ctx, base);
	// li r5,1440
	ctx.r5.s64 = 1440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8233eaf0
	ctx.lr = 0x8231C4A0;
	sub_8233EAF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// sth r11,1472(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1472, ctx.r11.u16);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// stw r30,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r30.u32);
	// stw r30,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r30.u32);
	// stw r30,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231C4D4"))) PPC_WEAK_FUNC(sub_8231C4D4);
PPC_FUNC_IMPL(__imp__sub_8231C4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231C4D8"))) PPC_WEAK_FUNC(sub_8231C4D8);
PPC_FUNC_IMPL(__imp__sub_8231C4D8) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x823382e0
	ctx.lr = 0x8231C4F4;
	sub_823382E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231c50c
	if (!ctx.cr6.eq) goto loc_8231C50C;
loc_8231C500:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8231c554
	goto loc_8231C554;
loc_8231C50C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8231c500
	if (ctx.cr6.eq) goto loc_8231C500;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8231c554
	if (ctx.cr6.eq) goto loc_8231C554;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8231c554
	if (ctx.cr6.eq) goto loc_8231C554;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8231c544
	if (ctx.cr6.eq) goto loc_8231C544;
	// bl 0x82320f78
	ctx.lr = 0x8231C544;
	sub_82320F78(ctx, base);
loc_8231C544:
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c554
	if (ctx.cr6.eq) goto loc_8231C554;
	// bl 0x823226f8
	ctx.lr = 0x8231C554;
	sub_823226F8(ctx, base);
loc_8231C554:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231C55C;
	sub_82338340(ctx, base);
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

__attribute__((alias("__imp__sub_8231C570"))) PPC_WEAK_FUNC(sub_8231C570);
PPC_FUNC_IMPL(__imp__sub_8231C570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231C578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
	// lwz r11,2892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2892);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231c658
	if (ctx.cr6.eq) goto loc_8231C658;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231c658
	if (ctx.cr6.eq) goto loc_8231C658;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8231c5f8
	if (ctx.cr6.gt) goto loc_8231C5F8;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14900
	ctx.r12.s64 = ctx.r12.s64 + -14900;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8231C658;
	case 1:
		goto loc_8231C5F8;
	case 2:
		goto loc_8231C658;
	case 3:
		goto loc_8231C5F8;
	case 4:
		goto loc_8231C5F8;
	case 5:
		goto loc_8231C5F8;
	case 6:
		goto loc_8231C658;
	case 7:
		goto loc_8231C658;
	case 8:
		goto loc_8231C658;
	case 9:
		goto loc_8231C658;
	case 10:
		goto loc_8231C658;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-14760(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14760);
	// lwz r17,-14856(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14856);
	// lwz r17,-14760(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14760);
	// lwz r17,-14856(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14856);
	// lwz r17,-14856(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14856);
	// lwz r17,-14856(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14856);
	// lwz r17,-14760(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14760);
	// lwz r17,-14760(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14760);
	// lwz r17,-14760(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14760);
	// lwz r17,-14760(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14760);
	// lwz r17,-14760(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14760);
loc_8231C5F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8231b148
	ctx.lr = 0x8231C608;
	sub_8231B148(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c658
	if (ctx.cr6.eq) goto loc_8231C658;
	// lwz r11,2928(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231c658
	if (!ctx.cr6.eq) goto loc_8231C658;
	// addi r31,r7,2924
	ctx.r31.s64 = ctx.r7.s64 + 2924;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82339958
	ctx.lr = 0x8231C62C;
	sub_82339958(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231c648
	if (!ctx.cr6.eq) goto loc_8231C648;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231C648:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8231C658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231C660"))) PPC_WEAK_FUNC(sub_8231C660);
PPC_FUNC_IMPL(__imp__sub_8231C660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231C668;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2892);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231c794
	if (ctx.cr6.eq) goto loc_8231C794;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231c794
	if (ctx.cr6.eq) goto loc_8231C794;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231c794
	if (ctx.cr6.eq) goto loc_8231C794;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231c788
	if (ctx.cr6.eq) goto loc_8231C788;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8231c788
	if (ctx.cr6.eq) goto loc_8231C788;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8231c788
	if (ctx.cr6.eq) goto loc_8231C788;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8231b148
	ctx.lr = 0x8231C6C4;
	sub_8231B148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231c6f0
	if (!ctx.cr6.eq) goto loc_8231C6F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3164, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-6376
	ctx.r4.s64 = ctx.r10.s64 + -6376;
	// bl 0x82336fb8
	ctx.lr = 0x8231C6E8;
	sub_82336FB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231C6F0:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231c794
	if (ctx.cr6.eq) goto loc_8231C794;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r31,r7,2924
	ctx.r31.s64 = ctx.r7.s64 + 2924;
	// lwz r10,2924(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2924);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8231c764
	if (!ctx.cr6.eq) goto loc_8231C764;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231c764
	if (!ctx.cr6.eq) goto loc_8231C764;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339998
	ctx.lr = 0x8231C730;
	sub_82339998(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339968
	ctx.lr = 0x8231C740;
	sub_82339968(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339978
	ctx.lr = 0x8231C750;
	sub_82339978(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231C764:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3164, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-6448
	ctx.r4.s64 = ctx.r10.s64 + -6448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231C780;
	sub_82336FB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231C788:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2924(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2924, ctx.r11.u32);
	// stw r11,2928(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2928, ctx.r11.u32);
loc_8231C794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231C79C"))) PPC_WEAK_FUNC(sub_8231C79C);
PPC_FUNC_IMPL(__imp__sub_8231C79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231C7A0"))) PPC_WEAK_FUNC(sub_8231C7A0);
PPC_FUNC_IMPL(__imp__sub_8231C7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231C7A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// std r11,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r11.u64);
	// std r29,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r29.u64);
	// stw r10,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stw r11,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// stw r11,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r11.u32);
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r11.u32);
	// stw r11,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r11.u32);
	// stw r11,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r11.u32);
	// stw r11,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r11.u32);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// stw r11,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// stw r11,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r11.u32);
	// stw r11,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r11.u32);
	// stw r11,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r11.u32);
	// stw r11,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r11.u32);
	// stw r11,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r11.u32);
	// stw r11,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r11.u32);
	// stw r11,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r11.u32);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r11.u32);
	// stw r11,136(r4)
	PPC_STORE_U32(ctx.r4.u32 + 136, ctx.r11.u32);
	// stw r11,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r11.u32);
	// stw r11,144(r4)
	PPC_STORE_U32(ctx.r4.u32 + 144, ctx.r11.u32);
	// stw r11,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231c8b8
	if (ctx.cr6.eq) goto loc_8231C8B8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8231c868
	if (ctx.cr6.eq) goto loc_8231C868;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8231c8b8
	if (!ctx.cr6.eq) goto loc_8231C8B8;
loc_8231C868:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,2980(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2980);
	// bl 0x82321050
	ctx.lr = 0x8231C874;
	sub_82321050(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c940
	if (ctx.cr6.eq) goto loc_8231C940;
	// lwz r3,3020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c8c4
	if (ctx.cr6.eq) goto loc_8231C8C4;
	// bl 0x82322628
	ctx.lr = 0x8231C890;
	sub_82322628(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8231c8c4
	if (!ctx.cr6.eq) goto loc_8231C8C4;
	// stw r29,3164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3164, ctx.r29.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-6296
	ctx.r4.s64 = ctx.r11.s64 + -6296;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231C8B8;
	sub_82336FB8(ctx, base);
loc_8231C8B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231C8C4:
	// lwz r3,3020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c928
	if (ctx.cr6.eq) goto loc_8231C928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x823227d0
	ctx.lr = 0x8231C8DC;
	sub_823227D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c8b8
	if (ctx.cr6.eq) goto loc_8231C8B8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8231c928
	if (!ctx.cr6.gt) goto loc_8231C928;
loc_8231C8F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// bl 0x82322840
	ctx.lr = 0x8231C8FC;
	sub_82322840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231c910
	if (ctx.cr6.eq) goto loc_8231C910;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// bl 0x82322878
	ctx.lr = 0x8231C910;
	sub_82322878(ctx, base);
loc_8231C910:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8231c928
	if (ctx.cr6.eq) goto loc_8231C928;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8231c8f0
	if (ctx.cr6.gt) goto loc_8231C8F0;
loc_8231C928:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231a970
	ctx.lr = 0x8231C940;
	sub_8231A970(ctx, base);
loc_8231C940:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231C94C"))) PPC_WEAK_FUNC(sub_8231C94C);
PPC_FUNC_IMPL(__imp__sub_8231C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231C950"))) PPC_WEAK_FUNC(sub_8231C950);
PPC_FUNC_IMPL(__imp__sub_8231C950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8231C958;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8231C97C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8231c97c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C97C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231cae0
	if (ctx.cr6.eq) goto loc_8231CAE0;
	// lwz r29,3000(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3000);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8231cae0
	if (ctx.cr6.eq) goto loc_8231CAE0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339958
	ctx.lr = 0x8231C9B0;
	sub_82339958(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ca10
	if (ctx.cr6.eq) goto loc_8231CA10;
loc_8231C9BC:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231ca10
	if (ctx.cr6.lt) goto loc_8231CA10;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a580
	ctx.lr = 0x8231C9D0;
	sub_8233A580(ctx, base);
	// lbz r11,111(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8231ca24
	if (ctx.cr6.eq) goto loc_8231CA24;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8231ca1c
	if (ctx.cr6.eq) goto loc_8231CA1C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231aff8
	ctx.lr = 0x8231C9F4;
	sub_8231AFF8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8231ca90
	if (!ctx.cr6.eq) goto loc_8231CA90;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_8231CA10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8231CA1C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8231ca90
	if (!ctx.cr6.eq) goto loc_8231CA90;
loc_8231CA24:
	// lhz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1472);
	// mulli r11,r11,720
	ctx.r11.s64 = ctx.r11.s64 * 720;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwz r10,720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231cad0
	if (ctx.cr6.eq) goto loc_8231CAD0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8231ca84
	if (ctx.cr6.lt) goto loc_8231CA84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a710
	ctx.lr = 0x8231CA58;
	sub_8233A710(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,592
	ctx.r4.s64 = ctx.r31.s64 + 592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231a050
	ctx.lr = 0x8231CA6C;
	sub_8231A050(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
	// bl 0x8231b908
	ctx.lr = 0x8231CA84;
	sub_8231B908(ctx, base);
loc_8231CA84:
	// lwz r11,3004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3004);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3004, ctx.r11.u32);
loc_8231CA90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339978
	ctx.lr = 0x8231CAA0;
	sub_82339978(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82339958
	ctx.lr = 0x8231CAB8;
	sub_82339958(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231c9bc
	if (!ctx.cr6.eq) goto loc_8231C9BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8231CAD0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339968
	ctx.lr = 0x8231CAE0;
	sub_82339968(ctx, base);
loc_8231CAE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231CAEC"))) PPC_WEAK_FUNC(sub_8231CAEC);
PPC_FUNC_IMPL(__imp__sub_8231CAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231CAF0"))) PPC_WEAK_FUNC(sub_8231CAF0);
PPC_FUNC_IMPL(__imp__sub_8231CAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231CAF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231cc08
	if (ctx.cr6.eq) goto loc_8231CC08;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq cr6,0x8231cb44
	if (ctx.cr6.eq) goto loc_8231CB44;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8231cb44
	if (ctx.cr6.eq) goto loc_8231CB44;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3164, ctx.r11.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-6224
	ctx.r4.s64 = ctx.r10.s64 + -6224;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231CB44;
	sub_82336FB8(ctx, base);
loc_8231CB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b4b8
	ctx.lr = 0x8231CB4C;
	sub_8231B4B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b848
	ctx.lr = 0x8231CB54;
	sub_8231B848(ctx, base);
	// lwz r3,2916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231cb68
	if (ctx.cr6.eq) goto loc_8231CB68;
	// bl 0x82339928
	ctx.lr = 0x8231CB64;
	sub_82339928(ctx, base);
	// stw r29,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r29.u32);
loc_8231CB68:
	// lwz r3,2900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231cb7c
	if (ctx.cr6.eq) goto loc_8231CB7C;
	// bl 0x823384f8
	ctx.lr = 0x8231CB78;
	sub_823384F8(ctx, base);
	// stw r29,2900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2900, ctx.r29.u32);
loc_8231CB7C:
	// lwz r3,2912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231cb90
	if (ctx.cr6.eq) goto loc_8231CB90;
	// bl 0x82339928
	ctx.lr = 0x8231CB8C;
	sub_82339928(ctx, base);
	// stw r29,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r29.u32);
loc_8231CB90:
	// lwz r3,2944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2944);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231cba4
	if (ctx.cr6.eq) goto loc_8231CBA4;
	// bl 0x82337e18
	ctx.lr = 0x8231CBA0;
	sub_82337E18(ctx, base);
	// stw r29,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r29.u32);
loc_8231CBA4:
	// lwz r30,2936(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2936);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231cbc8
	if (ctx.cr6.eq) goto loc_8231CBC8;
	// lwz r4,2952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2952);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231cbc8
	if (ctx.cr6.eq) goto loc_8231CBC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337d50
	ctx.lr = 0x8231CBC4;
	sub_82337D50(ctx, base);
	// stw r29,2952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2952, ctx.r29.u32);
loc_8231CBC8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231cbdc
	if (ctx.cr6.eq) goto loc_8231CBDC;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// bl 0x82338268
	ctx.lr = 0x8231CBDC;
	sub_82338268(ctx, base);
loc_8231CBDC:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231cc08
	if (ctx.cr6.eq) goto loc_8231CC08;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231cbfc
	if (ctx.cr6.eq) goto loc_8231CBFC;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337d50
	ctx.lr = 0x8231CBFC;
	sub_82337D50(ctx, base);
loc_8231CBFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337d50
	ctx.lr = 0x8231CC08;
	sub_82337D50(ctx, base);
loc_8231CC08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231CC10"))) PPC_WEAK_FUNC(sub_8231CC10);
PPC_FUNC_IMPL(__imp__sub_8231CC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8231CC18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8231cc68
	if (ctx.cr6.eq) goto loc_8231CC68;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8231cc68
	if (ctx.cr6.eq) goto loc_8231CC68;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3164, ctx.r11.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-5904
	ctx.r4.s64 = ctx.r10.s64 + -5904;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231CC5C;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8231CC68:
	// lwz r11,2244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cc7c
	if (!ctx.cr6.eq) goto loc_8231CC7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b4b8
	ctx.lr = 0x8231CC7C;
	sub_8231B4B8(ctx, base);
loc_8231CC7C:
	// addi r3,r31,2248
	ctx.r3.s64 = ctx.r31.s64 + 2248;
	// li r5,644
	ctx.r5.s64 = 644;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231CC8C;
	sub_8233E4E0(ctx, base);
	// lwz r11,2892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2892);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r25,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231cd5c
	if (!ctx.cr6.eq) goto loc_8231CD5C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8231cce8
	if (!ctx.cr6.eq) goto loc_8231CCE8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8231cce8
	if (!ctx.cr6.lt) goto loc_8231CCE8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8231CCE8:
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// li r28,10240
	ctx.r28.s64 = 10240;
	// rlwinm r30,r11,0,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// stw r28,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r28.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r30.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r7,r10,-5928
	ctx.r7.s64 = ctx.r10.s64 + -5928;
	// li r5,10240
	ctx.r5.s64 = 10240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233aa20
	ctx.lr = 0x8231CD18;
	sub_8233AA20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r3.u32);
	// bne cr6,0x8231cd70
	if (!ctx.cr6.eq) goto loc_8231CD70;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-5976
	ctx.r4.s64 = ctx.r10.s64 + -5976;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231CD48;
	sub_82336FB8(ctx, base);
loc_8231CD48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b4b8
	ctx.lr = 0x8231CD50;
	sub_8231B4B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8231CD5C:
	// stw r24,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r24.u32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r24.u32);
loc_8231CD70:
	// lwz r11,2892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231cdb0
	if (!ctx.cr6.eq) goto loc_8231CDB0;
	// stw r30,3024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3024, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,3028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3028, ctx.r28.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// bl 0x82339958
	ctx.lr = 0x8231CD98;
	sub_82339958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,2920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,3032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3032, ctx.r11.u32);
	// bl 0x82339968
	ctx.lr = 0x8231CDB0;
	sub_82339968(ctx, base);
loc_8231CDB0:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231cf34
	if (!ctx.cr6.gt) goto loc_8231CF34;
	// lis r11,16467
	ctx.r11.s64 = 1079181312;
	// lwz r10,2892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2892);
	// addi r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 + 28;
	// stw r24,2976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2976, ctx.r24.u32);
	// ori r9,r11,18006
	ctx.r9.u64 = ctx.r11.u64 | 18006;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,2972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2972, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bne cr6,0x8231cdfc
	if (!ctx.cr6.eq) goto loc_8231CDFC;
	// lwz r9,3028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3028);
	// lwz r8,3024(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3024);
	// lwz r7,3032(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// b 0x8231ce08
	goto loc_8231CE08;
loc_8231CDFC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8231CE08:
	// bl 0x82320de8
	ctx.lr = 0x8231CE0C;
	sub_82320DE8(ctx, base);
	// rotlwi r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8231ce54
	if (!ctx.cr6.eq) goto loc_8231CE54;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-6020
	ctx.r4.s64 = ctx.r10.s64 + -6020;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231CE40;
	sub_82336FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b4b8
	ctx.lr = 0x8231CE48;
	sub_8231B4B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8231CE54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// bl 0x8231e380
	ctx.lr = 0x8231CE60;
	sub_8231E380(ctx, base);
	// addi r27,r31,2224
	ctx.r27.s64 = ctx.r31.s64 + 2224;
	// addi r26,r31,2204
	ctx.r26.s64 = ctx.r31.s64 + 2204;
	// lwz r4,2196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8231e3a0
	ctx.lr = 0x8231CE7C;
	sub_8231E3A0(ctx, base);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x82321158
	ctx.lr = 0x8231CE88;
	sub_82321158(ctx, base);
	// lwz r11,608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231cf30
	if (!ctx.cr6.gt) goto loc_8231CF30;
	// lwz r11,636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cea4
	if (!ctx.cr6.eq) goto loc_8231CEA4;
	// bl 0x823224a8
	ctx.lr = 0x8231CEA4;
	sub_823224A8(ctx, base);
loc_8231CEA4:
	// bl 0x823224d0
	ctx.lr = 0x8231CEA8;
	sub_823224D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,3028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3028);
	// lwz r8,3024(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3024);
	// lwz r7,3032(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,616(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 616);
	// lwz r4,612(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 612);
	// bl 0x82322568
	ctx.lr = 0x8231CEC8;
	sub_82322568(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,3020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3020, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231cf0c
	if (!ctx.cr6.eq) goto loc_8231CF0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-6064
	ctx.r4.s64 = ctx.r10.s64 + -6064;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231CEF8;
	sub_82336FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b4b8
	ctx.lr = 0x8231CF00;
	sub_8231B4B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8231CF0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,2200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// bl 0x8231e380
	ctx.lr = 0x8231CF18;
	sub_8231E380(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,2196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231e3a0
	ctx.lr = 0x8231CF2C;
	sub_8231E3A0(ctx, base);
	// b 0x8231cf34
	goto loc_8231CF34;
loc_8231CF30:
	// stw r24,3020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3020, ctx.r24.u32);
loc_8231CF34:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322380
	ctx.lr = 0x8231CF44;
	sub_82322380(ctx, base);
	// stw r3,2984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2984, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231cf7c
	if (!ctx.cr6.eq) goto loc_8231CF7C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-6112
	ctx.r4.s64 = ctx.r11.s64 + -6112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231CF68;
	sub_82336FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b4b8
	ctx.lr = 0x8231CF70;
	sub_8231B4B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8231CF7C:
	// lwz r7,80(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x8231cfac
	if (ctx.cr6.lt) goto loc_8231CFAC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r6,r11,84
	ctx.r6.s64 = ctx.r11.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82321718
	ctx.lr = 0x8231CFA4;
	sub_82321718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231cd48
	if (ctx.cr6.eq) goto loc_8231CD48;
loc_8231CFAC:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233a898
	ctx.lr = 0x8231CFBC;
	sub_8233A898(ctx, base);
	// stw r3,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231cffc
	if (!ctx.cr6.eq) goto loc_8231CFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-6160
	ctx.r4.s64 = ctx.r10.s64 + -6160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231CFE8;
	sub_82336FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b4b8
	ctx.lr = 0x8231CFF0;
	sub_8231B4B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8231CFFC:
	// lwz r11,600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 600);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,2244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2244, ctx.r10.u32);
	// stw r11,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231D018"))) PPC_WEAK_FUNC(sub_8231D018);
PPC_FUNC_IMPL(__imp__sub_8231D018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231D020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823382e0
	ctx.lr = 0x8231D03C;
	sub_823382E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337da8
	ctx.lr = 0x8231D048;
	sub_82337DA8(ctx, base);
	// stw r3,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231cc10
	ctx.lr = 0x8231D05C;
	sub_8231CC10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231D068;
	sub_82338340(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231D074"))) PPC_WEAK_FUNC(sub_8231D074);
PPC_FUNC_IMPL(__imp__sub_8231D074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231D078"))) PPC_WEAK_FUNC(sub_8231D078);
PPC_FUNC_IMPL(__imp__sub_8231D078) {
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
	// lwz r11,3068(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3068);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d0a0
	if (ctx.cr6.eq) goto loc_8231D0A0;
	// bl 0x8231b848
	ctx.lr = 0x8231D0A0;
	sub_8231B848(ctx, base);
loc_8231D0A0:
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lwz r10,2104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2104);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r11.u32);
	// ble cr6,0x8231d0c4
	if (!ctx.cr6.gt) goto loc_8231D0C4;
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r11.u32);
loc_8231D0C4:
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231d0e0
	if (!ctx.cr6.gt) goto loc_8231D0E0;
	// lwz r10,3064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3064);
	// lwz r11,2160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2160);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r11.u32);
loc_8231D0E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// bl 0x82339988
	ctx.lr = 0x8231D0EC;
	sub_82339988(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,2912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// bl 0x82339988
	ctx.lr = 0x8231D0FC;
	sub_82339988(ctx, base);
	// lwz r10,3064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3064);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231d110
	if (!ctx.cr6.lt) goto loc_8231D110;
	// stw r11,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r11.u32);
loc_8231D110:
	// li r6,64
	ctx.r6.s64 = 64;
	// lwz r5,3064(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3064);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2956(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2956);
	// bl 0x8231b608
	ctx.lr = 0x8231D124;
	sub_8231B608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231d148
	if (ctx.cr6.eq) goto loc_8231D148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2956(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2956);
	// bl 0x8231b718
	ctx.lr = 0x8231D138;
	sub_8231B718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231d150
	if (!ctx.cr6.eq) goto loc_8231D150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b848
	ctx.lr = 0x8231D148;
	sub_8231B848(ctx, base);
loc_8231D148:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231d154
	goto loc_8231D154;
loc_8231D150:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8231D154:
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

__attribute__((alias("__imp__sub_8231D16C"))) PPC_WEAK_FUNC(sub_8231D16C);
PPC_FUNC_IMPL(__imp__sub_8231D16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231D170"))) PPC_WEAK_FUNC(sub_8231D170);
PPC_FUNC_IMPL(__imp__sub_8231D170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231D178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2244);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,2900(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2900);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d420
	if (!ctx.cr6.eq) goto loc_8231D420;
	// lwz r11,2892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231d1a4
	if (!ctx.cr6.eq) goto loc_8231D1A4;
	// lwz r30,2920(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2920);
	// b 0x8231d1a8
	goto loc_8231D1A8;
loc_8231D1A4:
	// lwz r30,2932(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2932);
loc_8231D1A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82338588
	ctx.lr = 0x8231D1B0;
	sub_82338588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231d358
	if (!ctx.cr6.eq) goto loc_8231D358;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82102cf0
	ctx.lr = 0x8231D1C4;
	sub_82102CF0(ctx, base);
	// lwz r3,2916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// bl 0x82339948
	ctx.lr = 0x8231D1CC;
	sub_82339948(ctx, base);
	// lis r5,17234
	ctx.r5.s64 = 1129447424;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,2916(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// ori r5,r5,18756
	ctx.r5.u64 = ctx.r5.u64 | 18756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231c1e8
	ctx.lr = 0x8231D1E4;
	sub_8231C1E8(ctx, base);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,2984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2984);
	// addi r4,r11,-17704
	ctx.r4.s64 = ctx.r11.s64 + -17704;
	// bl 0x823211e8
	ctx.lr = 0x8231D1F8;
	sub_823211E8(ctx, base);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// addi r4,r10,-17552
	ctx.r4.s64 = ctx.r10.s64 + -17552;
	// bl 0x823211b8
	ctx.lr = 0x8231D20C;
	sub_823211B8(ctx, base);
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d2fc
	if (ctx.cr6.eq) goto loc_8231D2FC;
	// bl 0x82320e70
	ctx.lr = 0x8231D21C;
	sub_82320E70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231d240
	if (!ctx.cr6.eq) goto loc_8231D240;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-5776
	ctx.r4.s64 = ctx.r11.s64 + -5776;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D240;
	sub_82336FB8(ctx, base);
loc_8231D240:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,2976(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2976);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,2972(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2972);
	// bl 0x8231c1e8
	ctx.lr = 0x8231D254;
	sub_8231C1E8(ctx, base);
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x82320f48
	ctx.lr = 0x8231D25C;
	sub_82320F48(ctx, base);
	// lwz r4,3040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3040);
	// lwz r11,3036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3036);
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x82321188
	ctx.lr = 0x8231D270;
	sub_82321188(ctx, base);
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r10.u32);
	// beq cr6,0x8231d2fc
	if (ctx.cr6.eq) goto loc_8231D2FC;
	// lwz r11,2132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d2a0
	if (!ctx.cr6.eq) goto loc_8231D2A0;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-17384
	ctx.r4.s64 = ctx.r11.s64 + -17384;
	// bl 0x823228d8
	ctx.lr = 0x8231D2A0;
	sub_823228D8(ctx, base);
loc_8231D2A0:
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x823225f0
	ctx.lr = 0x8231D2A8;
	sub_823225F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231d2cc
	if (!ctx.cr6.eq) goto loc_8231D2CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-5828
	ctx.r4.s64 = ctx.r11.s64 + -5828;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D2CC;
	sub_82336FB8(ctx, base);
loc_8231D2CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,3016(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3016);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,3012(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3012);
	// bl 0x8231c1e8
	ctx.lr = 0x8231D2E0;
	sub_8231C1E8(ctx, base);
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x823226c8
	ctx.lr = 0x8231D2E8;
	sub_823226C8(ctx, base);
	// lwz r4,3044(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3044);
	// lwz r11,3036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3036);
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x823228a8
	ctx.lr = 0x8231D2FC;
	sub_823228A8(ctx, base);
loc_8231D2FC:
	// lwz r3,2984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d310
	if (ctx.cr6.eq) goto loc_8231D310;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82321968
	ctx.lr = 0x8231D310;
	sub_82321968(ctx, base);
loc_8231D310:
	// lwz r4,3000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231d330
	if (ctx.cr6.eq) goto loc_8231D330;
	// lis r5,16467
	ctx.r5.s64 = 1079181312;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,16980
	ctx.r5.u64 = ctx.r5.u64 | 16980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231c1e8
	ctx.lr = 0x8231D330;
	sub_8231C1E8(ctx, base);
loc_8231D330:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823385e0
	ctx.lr = 0x8231D33C;
	sub_823385E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823385a0
	ctx.lr = 0x8231D344;
	sub_823385A0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d358
	if (!ctx.cr6.eq) goto loc_8231D358;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823385e8
	ctx.lr = 0x8231D358;
	sub_823385E8(ctx, base);
loc_8231D358:
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d404
	if (ctx.cr6.eq) goto loc_8231D404;
	// bl 0x82320ea8
	ctx.lr = 0x8231D368;
	sub_82320EA8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8231d420
	if (ctx.cr6.eq) goto loc_8231D420;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231d420
	if (ctx.cr6.eq) goto loc_8231D420;
	// lwz r11,3132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3132);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x8231d38c
	if (!ctx.cr6.eq) goto loc_8231D38C;
	// lwz r30,2292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2292);
loc_8231D38C:
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x82321010
	ctx.lr = 0x8231D394;
	sub_82321010(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8231d3ac
	if (!ctx.cr6.lt) goto loc_8231D3AC;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x82320fd8
	ctx.lr = 0x8231D3A4;
	sub_82320FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8231d420
	if (ctx.cr6.gt) goto loc_8231D420;
loc_8231D3AC:
	// lwz r11,3036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231d3c4
	if (!ctx.cr6.gt) goto loc_8231D3C4;
	// lwz r11,3048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3048);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d420
	if (!ctx.cr6.eq) goto loc_8231D420;
loc_8231D3C4:
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d404
	if (ctx.cr6.eq) goto loc_8231D404;
	// bl 0x82322628
	ctx.lr = 0x8231D3D4;
	sub_82322628(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8231d420
	if (ctx.cr6.eq) goto loc_8231D420;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231d420
	if (ctx.cr6.eq) goto loc_8231D420;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x82322790
	ctx.lr = 0x8231D3EC;
	sub_82322790(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8231d404
	if (!ctx.cr6.lt) goto loc_8231D404;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x82322758
	ctx.lr = 0x8231D3FC;
	sub_82322758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8231d420
	if (ctx.cr6.gt) goto loc_8231D420;
loc_8231D404:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2984);
	// bl 0x82321f30
	ctx.lr = 0x8231D410;
	sub_82321F30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8231d420
	if (!ctx.cr6.eq) goto loc_8231D420;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8231D420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231D428"))) PPC_WEAK_FUNC(sub_8231D428);
PPC_FUNC_IMPL(__imp__sub_8231D428) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x823382e0
	ctx.lr = 0x8231D444;
	sub_823382E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231c3e8
	ctx.lr = 0x8231D44C;
	sub_8231C3E8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231D454;
	sub_82338340(ctx, base);
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

__attribute__((alias("__imp__sub_8231D468"))) PPC_WEAK_FUNC(sub_8231D468);
PPC_FUNC_IMPL(__imp__sub_8231D468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231D470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-24736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8231d4b0
	if (ctx.cr6.gt) goto loc_8231D4B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5200
	ctx.r4.s64 = ctx.r11.s64 + -5200;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D4A4;
	sub_82336FB8(ctx, base);
loc_8231D4A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D4B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231d4a4
	if (ctx.cr6.eq) goto loc_8231D4A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-5220
	ctx.r5.s64 = ctx.r11.s64 + -5220;
	// li r4,3168
	ctx.r4.s64 = 3168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337c48
	ctx.lr = 0x8231D4D0;
	sub_82337C48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,3168
	ctx.r5.s64 = 3168;
	// bne cr6,0x8231d504
	if (!ctx.cr6.eq) goto loc_8231D504;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5272
	ctx.r4.s64 = ctx.r11.s64 + -5272;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D4F8;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D504:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8231D510;
	sub_8233EAF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,2936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2936, ctx.r30.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,2956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2956, ctx.r30.u32);
	// addi r5,r11,-5292
	ctx.r5.s64 = ctx.r11.s64 + -5292;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337c48
	ctx.lr = 0x8231D538;
	sub_82337C48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne cr6,0x8231d578
	if (!ctx.cr6.eq) goto loc_8231D578;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337d50
	ctx.lr = 0x8231D550;
	sub_82337D50(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5340
	ctx.r4.s64 = ctx.r11.s64 + -5340;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D56C;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D578:
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x823384a8
	ctx.lr = 0x8231D580;
	sub_823384A8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8231d5cc
	if (!ctx.cr6.eq) goto loc_8231D5CC;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82337d50
	ctx.lr = 0x8231D598;
	sub_82337D50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337d50
	ctx.lr = 0x8231D5A4;
	sub_82337D50(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5400
	ctx.r4.s64 = ctx.r11.s64 + -5400;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D5C0;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D5CC:
	// li r29,10240
	ctx.r29.s64 = 10240;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r29,2948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2948, ctx.r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-5424
	ctx.r5.s64 = ctx.r11.s64 + -5424;
	// li r4,10240
	ctx.r4.s64 = 10240;
	// bl 0x82337c48
	ctx.lr = 0x8231D5E8;
	sub_82337C48(ctx, base);
	// stw r3,2952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2952, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231d624
	if (!ctx.cr6.eq) goto loc_8231D624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231caf0
	ctx.lr = 0x8231D5FC;
	sub_8231CAF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5476
	ctx.r4.s64 = ctx.r11.s64 + -5476;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10240
	ctx.r5.s64 = 10240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D618;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D624:
	// lwz r4,2948(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2948);
	// bl 0x82337da8
	ctx.lr = 0x8231D62C;
	sub_82337DA8(ctx, base);
	// stw r3,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231d668
	if (!ctx.cr6.eq) goto loc_8231D668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231caf0
	ctx.lr = 0x8231D640;
	sub_8231CAF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5524
	ctx.r4.s64 = ctx.r11.s64 + -5524;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D65C;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D668:
	// stw r29,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r29.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r7,r11,-5552
	ctx.r7.s64 = ctx.r11.s64 + -5552;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10240
	ctx.r4.s64 = 10240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233aa20
	ctx.lr = 0x8231D688;
	sub_8233AA20(ctx, base);
	// stw r3,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231d6c4
	if (!ctx.cr6.eq) goto loc_8231D6C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231caf0
	ctx.lr = 0x8231D69C;
	sub_8231CAF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5616
	ctx.r4.s64 = ctx.r11.s64 + -5616;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D6B8;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D6C4:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,2904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2904, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823386b8
	ctx.lr = 0x8231D6D8;
	sub_823386B8(ctx, base);
	// stw r3,2900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2900, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231d714
	if (!ctx.cr6.eq) goto loc_8231D714;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231caf0
	ctx.lr = 0x8231D6EC;
	sub_8231CAF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5724
	ctx.r4.s64 = ctx.r11.s64 + -5724;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D708;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D714:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233a898
	ctx.lr = 0x8231D724;
	sub_8233A898(ctx, base);
	// stw r3,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8231d760
	if (!ctx.cr6.eq) goto loc_8231D760;
	// bl 0x8231caf0
	ctx.lr = 0x8231D738;
	sub_8231CAF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5680
	ctx.r4.s64 = ctx.r11.s64 + -5680;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D754;
	sub_82336FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231D760:
	// stw r28,2908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2908, ctx.r28.u32);
	// stw r28,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r28.u32);
	// bl 0x82319590
	ctx.lr = 0x8231D76C;
	sub_82319590(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,2988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2988, ctx.r28.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231D78C"))) PPC_WEAK_FUNC(sub_8231D78C);
PPC_FUNC_IMPL(__imp__sub_8231D78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231D790"))) PPC_WEAK_FUNC(sub_8231D790);
PPC_FUNC_IMPL(__imp__sub_8231D790) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231d898
	if (ctx.cr6.eq) goto loc_8231D898;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8231d898
	if (ctx.cr6.eq) goto loc_8231D898;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8231d898
	if (ctx.cr6.eq) goto loc_8231D898;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8231d898
	if (ctx.cr6.eq) goto loc_8231D898;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r9,3000(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3000);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// beq cr6,0x8231d830
	if (ctx.cr6.eq) goto loc_8231D830;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231d830
	if (ctx.cr6.eq) goto loc_8231D830;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231d830
	if (ctx.cr6.eq) goto loc_8231D830;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8231d830
	if (ctx.cr6.eq) goto loc_8231D830;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8231d830
	if (ctx.cr6.eq) goto loc_8231D830;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8231d830
	if (ctx.cr6.eq) goto loc_8231D830;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,3008(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3008);
	// bl 0x8231c950
	ctx.lr = 0x8231D818;
	sub_8231C950(ctx, base);
	// lwz r3,3000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d830
	if (ctx.cr6.eq) goto loc_8231D830;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339968
	ctx.lr = 0x8231D830;
	sub_82339968(ctx, base);
loc_8231D830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231ad40
	ctx.lr = 0x8231D838;
	sub_8231AD40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231aec8
	ctx.lr = 0x8231D840;
	sub_8231AEC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r30.u32);
	// stw r30,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r30.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stw r30,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r30.u32);
	// blt cr6,0x8231d898
	if (ctx.cr6.lt) goto loc_8231D898;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b148
	ctx.lr = 0x8231D868;
	sub_8231B148(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d898
	if (ctx.cr6.eq) goto loc_8231D898;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339988
	ctx.lr = 0x8231D878;
	sub_82339988(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,2928(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2928);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r7,r3,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r3.s64;
	// stw r11,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r11.u32);
	// stw r9,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r9.u32);
	// stw r7,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r7.u32);
loc_8231D898:
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

__attribute__((alias("__imp__sub_8231D8B0"))) PPC_WEAK_FUNC(sub_8231D8B0);
PPC_FUNC_IMPL(__imp__sub_8231D8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231D8B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823382e0
	ctx.lr = 0x8231D8D0;
	sub_823382E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231cc10
	ctx.lr = 0x8231D8E0;
	sub_8231CC10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231D8EC;
	sub_82338340(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231D8F8"))) PPC_WEAK_FUNC(sub_8231D8F8);
PPC_FUNC_IMPL(__imp__sub_8231D8F8) {
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
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8231da2c
	if (ctx.cr6.gt) goto loc_8231DA2C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8231da2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231DA2C;
	// bdzf 4*cr6+eq,0x8231d9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231D9E4;
	// bdzf 4*cr6+eq,0x8231da2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231DA2C;
	// bdzf 4*cr6+eq,0x8231d9ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231D9EC;
	// bdzf 4*cr6+eq,0x8231da2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231DA2C;
	// bdzf 4*cr6+eq,0x8231da2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231DA2C;
	// bne cr6,0x8231da18
	if (!ctx.cr6.eq) goto loc_8231DA18;
	// lwz r11,2244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231d984
	if (ctx.cr6.eq) goto loc_8231D984;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r10,-5136
	ctx.r4.s64 = ctx.r10.s64 + -5136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231D970;
	sub_82336FB8(ctx, base);
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
loc_8231D984:
	// lwz r11,3040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8231d9b8
	if (ctx.cr6.gt) goto loc_8231D9B8;
	// lwz r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231d9a4
	if (!ctx.cr6.gt) goto loc_8231D9A4;
	// lwz r4,3068(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3068);
	// b 0x8231d9a8
	goto loc_8231D9A8;
loc_8231D9A4:
	// lwz r4,2912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
loc_8231D9A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,2920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// lwz r5,2916(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// bl 0x8231bf28
	ctx.lr = 0x8231D9B8;
	sub_8231BF28(ctx, base);
loc_8231D9B8:
	// lwz r3,2900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// bl 0x823387e8
	ctx.lr = 0x8231D9C0;
	sub_823387E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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
loc_8231D9E4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8231da28
	goto loc_8231DA28;
loc_8231D9EC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r9,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r9.u8);
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
loc_8231DA18:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r11.u8);
	// stw r10,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r10.u32);
loc_8231DA28:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8231DA2C:
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

__attribute__((alias("__imp__sub_8231DA40"))) PPC_WEAK_FUNC(sub_8231DA40);
PPC_FUNC_IMPL(__imp__sub_8231DA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231DA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231dbac
	if (ctx.cr6.eq) goto loc_8231DBAC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8231dbac
	if (ctx.cr6.eq) goto loc_8231DBAC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8231dbac
	if (ctx.cr6.eq) goto loc_8231DBAC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8231dbac
	if (ctx.cr6.eq) goto loc_8231DBAC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231da80
	if (ctx.cr6.eq) goto loc_8231DA80;
	// bl 0x8231c260
	ctx.lr = 0x8231DA80;
	sub_8231C260(ctx, base);
loc_8231DA80:
	// lwz r30,2980(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231daa8
	if (ctx.cr6.eq) goto loc_8231DAA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82320ee0
	ctx.lr = 0x8231DA98;
	sub_82320EE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82320ea8
	ctx.lr = 0x8231DAA0;
	sub_82320EA8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8231dacc
	if (ctx.cr6.eq) goto loc_8231DACC;
loc_8231DAA8:
	// lwz r30,3020(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231dad0
	if (ctx.cr6.eq) goto loc_8231DAD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82322660
	ctx.lr = 0x8231DABC;
	sub_82322660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82322628
	ctx.lr = 0x8231DAC4;
	sub_82322628(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8231dad0
	if (!ctx.cr6.eq) goto loc_8231DAD0;
loc_8231DACC:
	// stw r29,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r29.u32);
loc_8231DAD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8231db6c
	if (!ctx.cr6.eq) goto loc_8231DB6C;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231db00
	if (ctx.cr6.eq) goto loc_8231DB00;
	// bl 0x82320ea8
	ctx.lr = 0x8231DAEC;
	sub_82320EA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231db00
	if (ctx.cr6.eq) goto loc_8231DB00;
	// stb r29,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231DB00:
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231db28
	if (ctx.cr6.eq) goto loc_8231DB28;
	// bl 0x82322628
	ctx.lr = 0x8231DB10;
	sub_82322628(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231db28
	if (ctx.cr6.eq) goto loc_8231DB28;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231DB28:
	// lwz r11,2928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231db44
	if (ctx.cr6.eq) goto loc_8231DB44;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231DB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82319b08
	ctx.lr = 0x8231DB4C;
	sub_82319B08(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,3160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3160, ctx.r10.u8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231DB6C:
	// lwz r3,2984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231db80
	if (ctx.cr6.eq) goto loc_8231DB80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82321d28
	ctx.lr = 0x8231DB80;
	sub_82321D28(ctx, base);
loc_8231DB80:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8231dba4
	if (ctx.cr6.eq) goto loc_8231DBA4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8231dbac
	if (!ctx.cr6.eq) goto loc_8231DBAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231c0d0
	ctx.lr = 0x8231DB9C;
	sub_8231C0D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231DBA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231d170
	ctx.lr = 0x8231DBAC;
	sub_8231D170(ctx, base);
loc_8231DBAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231DBB4"))) PPC_WEAK_FUNC(sub_8231DBB4);
PPC_FUNC_IMPL(__imp__sub_8231DBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231DBB8"))) PPC_WEAK_FUNC(sub_8231DBB8);
PPC_FUNC_IMPL(__imp__sub_8231DBB8) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x823382e0
	ctx.lr = 0x8231DBD4;
	sub_823382E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231d8f8
	ctx.lr = 0x8231DBDC;
	sub_8231D8F8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231DBE4;
	sub_82338340(ctx, base);
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

__attribute__((alias("__imp__sub_8231DBF8"))) PPC_WEAK_FUNC(sub_8231DBF8);
PPC_FUNC_IMPL(__imp__sub_8231DBF8) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x823382e0
	ctx.lr = 0x8231DC14;
	sub_823382E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231da40
	ctx.lr = 0x8231DC1C;
	sub_8231DA40(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231DC24;
	sub_82338340(ctx, base);
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

__attribute__((alias("__imp__sub_8231DC38"))) PPC_WEAK_FUNC(sub_8231DC38);
PPC_FUNC_IMPL(__imp__sub_8231DC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8231DC40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lwz r11,2928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231ddbc
	if (!ctx.cr6.eq) goto loc_8231DDBC;
	// lwz r11,3060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3060);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231dc88
	if (ctx.cr6.lt) goto loc_8231DC88;
	// beq cr6,0x8231dcec
	if (ctx.cr6.eq) goto loc_8231DCEC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8231dd7c
	if (ctx.cr6.lt) goto loc_8231DD7C;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8231DC88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231bcb8
	ctx.lr = 0x8231DC90;
	sub_8231BCB8(ctx, base);
	// lwz r11,3164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231ddb8
	if (ctx.cr6.eq) goto loc_8231DDB8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8231ddb8
	if (!ctx.cr6.eq) goto loc_8231DDB8;
	// addi r4,r31,1488
	ctx.r4.s64 = ctx.r31.s64 + 1488;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,688
	ctx.r5.s64 = 688;
	// bl 0x8233e4e0
	ctx.lr = 0x8231DCB4;
	sub_8233E4E0(ctx, base);
	// lwz r11,2956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2956);
	// std r28,744(r31)
	PPC_STORE_U64(ctx.r31.u32 + 744, ctx.r28.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231dcdc
	if (!ctx.cr6.eq) goto loc_8231DCDC;
	// lwz r11,3140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231dcdc
	if (!ctx.cr6.eq) goto loc_8231DCDC;
	// stw r28,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231a6f8
	ctx.lr = 0x8231DCDC;
	sub_8231A6F8(ctx, base);
loc_8231DCDC:
	// lwz r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231dda8
	if (!ctx.cr6.gt) goto loc_8231DDA8;
	// stw r30,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r30.u32);
loc_8231DCEC:
	// lwz r30,2900(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823382e0
	ctx.lr = 0x8231DCF8;
	sub_823382E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231d078
	ctx.lr = 0x8231DD00;
	sub_8231D078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82338340
	ctx.lr = 0x8231DD0C;
	sub_82338340(ctx, base);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8231ddb8
	if (!ctx.cr6.eq) goto loc_8231DDB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,3068(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3068);
	// lwz r5,2916(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// lwz r4,2912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// bl 0x8231bf28
	ctx.lr = 0x8231DD28;
	sub_8231BF28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823387e8
	ctx.lr = 0x8231DD30;
	sub_823387E8(ctx, base);
	// lwz r3,2916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// bl 0x82339948
	ctx.lr = 0x8231DD38;
	sub_82339948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3068(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3068);
	// bl 0x82102cf0
	ctx.lr = 0x8231DD44;
	sub_82102CF0(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,2916(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823385b8
	ctx.lr = 0x8231DD5C;
	sub_823385B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823385e0
	ctx.lr = 0x8231DD68;
	sub_823385E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823385a0
	ctx.lr = 0x8231DD70;
	sub_823385A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338ca8
	ctx.lr = 0x8231DD78;
	sub_82338CA8(ctx, base);
	// stw r29,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r29.u32);
loc_8231DD7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231a378
	ctx.lr = 0x8231DD84;
	sub_8231A378(ctx, base);
	// lwz r11,3164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231ddb8
	if (ctx.cr6.eq) goto loc_8231DDB8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8231ddb8
	if (!ctx.cr6.eq) goto loc_8231DDB8;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8231DDA8:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8231DDB8:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8231DDBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231DDC4"))) PPC_WEAK_FUNC(sub_8231DDC4);
PPC_FUNC_IMPL(__imp__sub_8231DDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231DDC8"))) PPC_WEAK_FUNC(sub_8231DDC8);
PPC_FUNC_IMPL(__imp__sub_8231DDC8) {
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
	// bl 0x8231c260
	ctx.lr = 0x8231DDE0;
	sub_8231C260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231dc38
	ctx.lr = 0x8231DDE8;
	sub_8231DC38(ctx, base);
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

__attribute__((alias("__imp__sub_8231DDFC"))) PPC_WEAK_FUNC(sub_8231DDFC);
PPC_FUNC_IMPL(__imp__sub_8231DDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231DE00"))) PPC_WEAK_FUNC(sub_8231DE00);
PPC_FUNC_IMPL(__imp__sub_8231DE00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8231DE1C"))) PPC_WEAK_FUNC(sub_8231DE1C);
PPC_FUNC_IMPL(__imp__sub_8231DE1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231DE20"))) PPC_WEAK_FUNC(sub_8231DE20);
PPC_FUNC_IMPL(__imp__sub_8231DE20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231DE44"))) PPC_WEAK_FUNC(sub_8231DE44);
PPC_FUNC_IMPL(__imp__sub_8231DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231DE48"))) PPC_WEAK_FUNC(sub_8231DE48);
PPC_FUNC_IMPL(__imp__sub_8231DE48) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// ble cr6,0x8231de88
	if (!ctx.cr6.gt) goto loc_8231DE88;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8231DE88:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231DE9C;
	sub_8233E4E0(ctx, base);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
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

__attribute__((alias("__imp__sub_8231DECC"))) PPC_WEAK_FUNC(sub_8231DECC);
PPC_FUNC_IMPL(__imp__sub_8231DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231DED0"))) PPC_WEAK_FUNC(sub_8231DED0);
PPC_FUNC_IMPL(__imp__sub_8231DED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231DED8"))) PPC_WEAK_FUNC(sub_8231DED8);
PPC_FUNC_IMPL(__imp__sub_8231DED8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231DEE0"))) PPC_WEAK_FUNC(sub_8231DEE0);
PPC_FUNC_IMPL(__imp__sub_8231DEE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// blt cr6,0x8231df14
	if (ctx.cr6.lt) goto loc_8231DF14;
	// beq cr6,0x8231df04
	if (ctx.cr6.eq) goto loc_8231DF04;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// blr 
	return;
loc_8231DF04:
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// blr 
	return;
loc_8231DF14:
	// std r4,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231DF1C"))) PPC_WEAK_FUNC(sub_8231DF1C);
PPC_FUNC_IMPL(__imp__sub_8231DF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231DF20"))) PPC_WEAK_FUNC(sub_8231DF20);
PPC_FUNC_IMPL(__imp__sub_8231DF20) {
	PPC_FUNC_PROLOGUE();
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231DF28"))) PPC_WEAK_FUNC(sub_8231DF28);
PPC_FUNC_IMPL(__imp__sub_8231DF28) {
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
	// beq cr6,0x8231df60
	if (ctx.cr6.eq) goto loc_8231DF60;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x82338438
	ctx.lr = 0x8231DF5C;
	sub_82338438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8231DF60:
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

__attribute__((alias("__imp__sub_8231DF74"))) PPC_WEAK_FUNC(sub_8231DF74);
PPC_FUNC_IMPL(__imp__sub_8231DF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231DF78"))) PPC_WEAK_FUNC(sub_8231DF78);
PPC_FUNC_IMPL(__imp__sub_8231DF78) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-5040
	ctx.r5.s64 = ctx.r11.s64 + -5040;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82338448
	ctx.lr = 0x8231DFA4;
	sub_82338448(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231dff4
	if (ctx.cr6.eq) goto loc_8231DFF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-5084
	ctx.r10.s64 = ctx.r11.s64 + -5084;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
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
loc_8231DFF4:
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

__attribute__((alias("__imp__sub_8231E00C"))) PPC_WEAK_FUNC(sub_8231E00C);
PPC_FUNC_IMPL(__imp__sub_8231E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E010"))) PPC_WEAK_FUNC(sub_8231E010);
PPC_FUNC_IMPL(__imp__sub_8231E010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8231E018;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8231E040:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8231e040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231E040;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_8231E060:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231e158
	if (ctx.cr6.eq) goto loc_8231E158;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8231e158
	if (!ctx.cr6.eq) goto loc_8231E158;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8231e060
	if (ctx.cr6.lt) goto loc_8231E060;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// std r29,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r29.u64);
	// beq cr6,0x8231e0d8
	if (ctx.cr6.eq) goto loc_8231E0D8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8231E0B4:
	// lbzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// beq cr6,0x8231e158
	if (ctx.cr6.eq) goto loc_8231E158;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x8231e0b4
	if (!ctx.cr6.eq) goto loc_8231E0B4;
loc_8231E0D8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82342208
	ctx.lr = 0x8231E0E8;
	sub_82342208(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r29,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r29.u64);
	// std r29,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r29.u64);
	// beq cr6,0x8231e134
	if (ctx.cr6.eq) goto loc_8231E134;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_8231E11C:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8231e11c
	if (!ctx.cr6.eq) goto loc_8231E11C;
loc_8231E134:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82342208
	ctx.lr = 0x8231E144;
	sub_82342208(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8231E158:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E164"))) PPC_WEAK_FUNC(sub_8231E164);
PPC_FUNC_IMPL(__imp__sub_8231E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E168"))) PPC_WEAK_FUNC(sub_8231E168);
PPC_FUNC_IMPL(__imp__sub_8231E168) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8231e010
	ctx.lr = 0x8231E190;
	sub_8231E010(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8231e1c4
	if (!ctx.cr6.eq) goto loc_8231E1C4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
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
loc_8231E1C4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8231E1E0"))) PPC_WEAK_FUNC(sub_8231E1E0);
PPC_FUNC_IMPL(__imp__sub_8231E1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r9,r11,-4936
	ctx.r9.s64 = ctx.r11.s64 + -4936;
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// addi r3,r8,-22568
	ctx.r3.s64 = ctx.r8.s64 + -22568;
	// stw r9,-23428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23428, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E1FC"))) PPC_WEAK_FUNC(sub_8231E1FC);
PPC_FUNC_IMPL(__imp__sub_8231E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E200"))) PPC_WEAK_FUNC(sub_8231E200);
PPC_FUNC_IMPL(__imp__sub_8231E200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r3,r11,-22464
	ctx.r3.s64 = ctx.r11.s64 + -22464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E20C"))) PPC_WEAK_FUNC(sub_8231E20C);
PPC_FUNC_IMPL(__imp__sub_8231E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E210"))) PPC_WEAK_FUNC(sub_8231E210);
PPC_FUNC_IMPL(__imp__sub_8231E210) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r10,r11,8320
	ctx.r10.s64 = ctx.r11.s64 + 8320;
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E230"))) PPC_WEAK_FUNC(sub_8231E230);
PPC_FUNC_IMPL(__imp__sub_8231E230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-23404
	ctx.r11.s64 = ctx.r11.s64 + -23404;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E250"))) PPC_WEAK_FUNC(sub_8231E250);
PPC_FUNC_IMPL(__imp__sub_8231E250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r9,r11,-23408
	ctx.r9.s64 = ctx.r11.s64 + -23408;
	// lwz r10,-23408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23408);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E26C"))) PPC_WEAK_FUNC(sub_8231E26C);
PPC_FUNC_IMPL(__imp__sub_8231E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E270"))) PPC_WEAK_FUNC(sub_8231E270);
PPC_FUNC_IMPL(__imp__sub_8231E270) {
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
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lwz r11,-23412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23412);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-23412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23412, ctx.r11.u32);
	// bne 0x8231e29c
	if (!ctx.cr0.eq) goto loc_8231E29C;
	// bl 0x823241f0
	ctx.lr = 0x8231E294;
	sub_823241F0(ctx, base);
	// bl 0x82323698
	ctx.lr = 0x8231E298;
	sub_82323698(ctx, base);
	// bl 0x82322f80
	ctx.lr = 0x8231E29C;
	sub_82322F80(ctx, base);
loc_8231E29C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E2AC"))) PPC_WEAK_FUNC(sub_8231E2AC);
PPC_FUNC_IMPL(__imp__sub_8231E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E2B0"))) PPC_WEAK_FUNC(sub_8231E2B0);
PPC_FUNC_IMPL(__imp__sub_8231E2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231E2B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r10,r11,-23424
	ctx.r10.s64 = ctx.r11.s64 + -23424;
	// bne cr6,0x8231e2d4
	if (!ctx.cr6.eq) goto loc_8231E2D4;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8231e2e0
	goto loc_8231E2E0;
loc_8231E2D4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_8231E2E0:
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,127
	ctx.r8.s64 = ctx.r11.s64 + 127;
	// addi r7,r10,127
	ctx.r7.s64 = ctx.r10.s64 + 127;
	// rlwinm r6,r8,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r5,r7,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r4,r9,3,1,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7FFFFFF8;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r28,r11,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x8233a848
	ctx.lr = 0x8231E338;
	sub_8233A848(ctx, base);
	// addi r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 3;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mulli r9,r10,152
	ctx.r9.s64 = ctx.r10.s64 * 152;
	// add r29,r3,r9
	ctx.r29.u64 = ctx.r3.u64 + ctx.r9.u64;
	// beq cr6,0x8231e35c
	if (ctx.cr6.eq) goto loc_8231E35C;
	// addi r11,r28,128
	ctx.r11.s64 = ctx.r28.s64 + 128;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8231E354:
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bdnz 0x8231e354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231E354;
loc_8231E35C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8233a848
	ctx.lr = 0x8231E374;
	sub_8233A848(ctx, base);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E380"))) PPC_WEAK_FUNC(sub_8231E380);
PPC_FUNC_IMPL(__imp__sub_8231E380) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231e394
	if (ctx.cr6.eq) goto loc_8231E394;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x8231e398
	goto loc_8231E398;
loc_8231E394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231E398:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x823242c8
	sub_823242C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E3A0"))) PPC_WEAK_FUNC(sub_8231E3A0);
PPC_FUNC_IMPL(__imp__sub_8231E3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// ble cr6,0x8231e3c0
	if (!ctx.cr6.gt) goto loc_8231E3C0;
	// li r3,5
	ctx.r3.s64 = 5;
loc_8231E3C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8231e3f8
	if (!ctx.cr6.gt) goto loc_8231E3F8;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lis r9,23130
	ctx.r9.s64 = 1515847680;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// ori r9,r9,23130
	ctx.r9.u64 = ctx.r9.u64 | 23130;
loc_8231E3DC:
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stwu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8231e3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231E3DC;
loc_8231E3F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82324538
	ctx.lr = 0x8231E400;
	sub_82324538(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E410"))) PPC_WEAK_FUNC(sub_8231E410);
PPC_FUNC_IMPL(__imp__sub_8231E410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8231E418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r26,72(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// beq cr6,0x8231e454
	if (ctx.cr6.eq) goto loc_8231E454;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231E450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
loc_8231E454:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231e468
	if (ctx.cr6.eq) goto loc_8231E468;
	// bl 0x82339928
	ctx.lr = 0x8231E464;
	sub_82339928(ctx, base);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
loc_8231E468:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231e4c0
	if (ctx.cr6.eq) goto loc_8231E4C0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231e4b4
	if (!ctx.cr6.gt) goto loc_8231E4B4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8231E488:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231e4a0
	if (ctx.cr6.eq) goto loc_8231E4A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82337d50
	ctx.lr = 0x8231E4A0;
	sub_82337D50(ctx, base);
loc_8231E4A0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231e488
	if (ctx.cr6.lt) goto loc_8231E488;
loc_8231E4B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82337d50
	ctx.lr = 0x8231E4C0;
	sub_82337D50(ctx, base);
loc_8231E4C0:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231e4d4
	if (ctx.cr6.eq) goto loc_8231E4D4;
	// bl 0x82339928
	ctx.lr = 0x8231E4D0;
	sub_82339928(ctx, base);
	// stw r28,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r28.u32);
loc_8231E4D4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8231e4e4
	if (ctx.cr6.eq) goto loc_8231E4E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82324250
	ctx.lr = 0x8231E4E4;
	sub_82324250(ctx, base);
loc_8231E4E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82337d50
	ctx.lr = 0x8231E4F0;
	sub_82337D50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E4F8"))) PPC_WEAK_FUNC(sub_8231E4F8);
PPC_FUNC_IMPL(__imp__sub_8231E4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231E500;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bl 0x82339988
	ctx.lr = 0x8231E51C;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231e560
	if (ctx.cr6.eq) goto loc_8231E560;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8231E528:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339958
	ctx.lr = 0x8231E53C;
	sub_82339958(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82339978
	ctx.lr = 0x8231E54C;
	sub_82339978(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82339988
	ctx.lr = 0x8231E558;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231e528
	if (!ctx.cr6.eq) goto loc_8231E528;
loc_8231E560:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231e570
	if (ctx.cr6.eq) goto loc_8231E570;
	// bl 0x82339948
	ctx.lr = 0x8231E570;
	sub_82339948(ctx, base);
loc_8231E570:
	// stw r28,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r28.u32);
	// stw r28,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r28.u32);
	// stw r28,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r28.u32);
	// stw r28,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r28.u32);
	// stw r28,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r28.u32);
	// stw r28,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r28.u32);
	// stw r28,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r28.u32);
	// stw r28,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r28.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339948
	ctx.lr = 0x8231E598;
	sub_82339948(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231e5f4
	if (!ctx.cr6.gt) goto loc_8231E5F4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8231E5AC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,144
	ctx.r5.s64 = 144;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8231E5D0;
	sub_8233EAF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339978
	ctx.lr = 0x8231E5E0;
	sub_82339978(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8231e5ac
	if (ctx.cr6.lt) goto loc_8231E5AC;
loc_8231E5F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E618"))) PPC_WEAK_FUNC(sub_8231E618);
PPC_FUNC_IMPL(__imp__sub_8231E618) {
	PPC_FUNC_PROLOGUE();
	// stw r4,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r4.u32);
	// stw r5,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E624"))) PPC_WEAK_FUNC(sub_8231E624);
PPC_FUNC_IMPL(__imp__sub_8231E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E628"))) PPC_WEAK_FUNC(sub_8231E628);
PPC_FUNC_IMPL(__imp__sub_8231E628) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x8231E630;
	__savegprlr_22(ctx, base);
	// addi r11,r3,332
	ctx.r11.s64 = ctx.r3.s64 + 332;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8231E648:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8231e668
	if (ctx.cr6.eq) goto loc_8231E668;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8231e648
	if (ctx.cr6.lt) goto loc_8231E648;
	// b 0x8231e66c
	goto loc_8231E66C;
loc_8231E668:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8231E66C:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8231e6f8
	if (!ctx.cr6.eq) goto loc_8231E6F8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r10,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r10.u32);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r29,44(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r27,52(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r26,56(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r25,60(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r23,16(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r22,8(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r24,12(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r24,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r24.u32);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// stw r26,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r25,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r25.u32);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
loc_8231E6F8:
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8231e720
	if (ctx.cr6.gt) goto loc_8231E720;
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_8231E720:
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E730"))) PPC_WEAK_FUNC(sub_8231E730);
PPC_FUNC_IMPL(__imp__sub_8231E730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8233a580
	ctx.lr = 0x8231E754;
	sub_8233A580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231e774
	if (ctx.cr6.eq) goto loc_8231E774;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8231e778
	if (!ctx.cr6.eq) goto loc_8231E778;
loc_8231E774:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231E778:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E78C"))) PPC_WEAK_FUNC(sub_8231E78C);
PPC_FUNC_IMPL(__imp__sub_8231E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E790"))) PPC_WEAK_FUNC(sub_8231E790);
PPC_FUNC_IMPL(__imp__sub_8231E790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231E798;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82339948
	ctx.lr = 0x8231E7E0;
	sub_82339948(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8231e83c
	if (!ctx.cr6.gt) goto loc_8231E83C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8231E7F4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,144
	ctx.r5.s64 = 144;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8231E818;
	sub_8233EAF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339978
	ctx.lr = 0x8231E828;
	sub_82339978(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,152
	ctx.r29.s64 = ctx.r29.s64 + 152;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8231e7f4
	if (ctx.cr6.lt) goto loc_8231E7F4;
loc_8231E83C:
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E85C"))) PPC_WEAK_FUNC(sub_8231E85C);
PPC_FUNC_IMPL(__imp__sub_8231E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E860"))) PPC_WEAK_FUNC(sub_8231E860);
PPC_FUNC_IMPL(__imp__sub_8231E860) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823250d0
	sub_823250D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E87C"))) PPC_WEAK_FUNC(sub_8231E87C);
PPC_FUNC_IMPL(__imp__sub_8231E87C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E880"))) PPC_WEAK_FUNC(sub_8231E880);
PPC_FUNC_IMPL(__imp__sub_8231E880) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E888"))) PPC_WEAK_FUNC(sub_8231E888);
PPC_FUNC_IMPL(__imp__sub_8231E888) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E894"))) PPC_WEAK_FUNC(sub_8231E894);
PPC_FUNC_IMPL(__imp__sub_8231E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E898"))) PPC_WEAK_FUNC(sub_8231E898);
PPC_FUNC_IMPL(__imp__sub_8231E898) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231E8A0"))) PPC_WEAK_FUNC(sub_8231E8A0);
PPC_FUNC_IMPL(__imp__sub_8231E8A0) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231E8C4;
	sub_82339988(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231E8D4;
	sub_82339988(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// twllei r11,0
	// divwu r3,r10,r11
	ctx.r3.u32 = ctx.r10.u32 / ctx.r11.u32;
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

__attribute__((alias("__imp__sub_8231E8FC"))) PPC_WEAK_FUNC(sub_8231E8FC);
PPC_FUNC_IMPL(__imp__sub_8231E8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E900"))) PPC_WEAK_FUNC(sub_8231E900);
PPC_FUNC_IMPL(__imp__sub_8231E900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8231E908;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231e9ac
	if (ctx.cr6.eq) goto loc_8231E9AC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8231e9ac
	if (ctx.cr6.eq) goto loc_8231E9AC;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8231e9ac
	if (ctx.cr6.eq) goto loc_8231E9AC;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// lwz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,127
	ctx.r7.s64 = ctx.r10.s64 + 127;
	// srawi r6,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r27,r4
	ctx.r27.s64 = ctx.r4.s16;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8231e970
	if (!ctx.cr6.gt) goto loc_8231E970;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8231E970:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8231e9a0
	if (ctx.cr6.eq) goto loc_8231E9A0;
loc_8231E97C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231E98C;
	sub_8233E4E0(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x8231e97c
	if (!ctx.cr0.eq) goto loc_8231E97C;
loc_8231E9A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8231E9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E9B8"))) PPC_WEAK_FUNC(sub_8231E9B8);
PPC_FUNC_IMPL(__imp__sub_8231E9B8) {
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
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231e9fc
	if (ctx.cr6.eq) goto loc_8231E9FC;
	// ld r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 272);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,280(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82339978
	ctx.lr = 0x8231E9F0;
	sub_82339978(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
loc_8231E9FC:
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

__attribute__((alias("__imp__sub_8231EA10"))) PPC_WEAK_FUNC(sub_8231EA10);
PPC_FUNC_IMPL(__imp__sub_8231EA10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231EA20"))) PPC_WEAK_FUNC(sub_8231EA20);
PPC_FUNC_IMPL(__imp__sub_8231EA20) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r3,332
	ctx.r8.s64 = ctx.r3.s64 + 332;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8231EA48:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8231ea68
	if (ctx.cr6.eq) goto loc_8231EA68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8231ea48
	if (ctx.cr6.lt) goto loc_8231EA48;
	// b 0x8231ea6c
	goto loc_8231EA6C;
loc_8231EA68:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8231EA6C:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8231ea78
	if (!ctx.cr6.eq) goto loc_8231EA78;
	// li r7,7
	ctx.r7.s64 = 7;
loc_8231EA78:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231EA90"))) PPC_WEAK_FUNC(sub_8231EA90);
PPC_FUNC_IMPL(__imp__sub_8231EA90) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231EA98"))) PPC_WEAK_FUNC(sub_8231EA98);
PPC_FUNC_IMPL(__imp__sub_8231EA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x8231EAA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// srawi r6,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 4;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addze r3,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r23,r5,31,1,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r6,r9,127
	ctx.r6.s64 = ctx.r9.s64 + 127;
	// rlwinm r22,r10,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// srawi r5,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 7;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// rlwinm r6,r10,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// addi r3,r9,127
	ctx.r3.s64 = ctx.r9.s64 + 127;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// srawi r9,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// extsh r24,r6
	ctx.r24.s64 = ctx.r6.s16;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r3,r8,r10
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// rlwinm r10,r3,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// add r25,r10,r4
	ctx.r25.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r21,r10,r25
	ctx.r21.u64 = ctx.r10.u64 + ctx.r25.u64;
	// ble cr6,0x8231eb48
	if (!ctx.cr6.gt) goto loc_8231EB48;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8231EB48:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231eb80
	if (ctx.cr6.eq) goto loc_8231EB80;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_8231EB5C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231EB6C;
	sub_8233E4E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bne 0x8231eb5c
	if (!ctx.cr0.eq) goto loc_8231EB5C;
loc_8231EB80:
	// extsh r27,r24
	ctx.r27.s64 = ctx.r24.s16;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x8231eb94
	if (!ctx.cr6.gt) goto loc_8231EB94;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_8231EB94:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8231ebcc
	if (ctx.cr6.eq) goto loc_8231EBCC;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8231EBA8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231EBB8;
	sub_8233E4E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bne 0x8231eba8
	if (!ctx.cr0.eq) goto loc_8231EBA8;
loc_8231EBCC:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x8231ebdc
	if (!ctx.cr6.gt) goto loc_8231EBDC;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_8231EBDC:
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8231ec14
	if (ctx.cr6.eq) goto loc_8231EC14;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8231EBF0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231EC00;
	sub_8233E4E0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x8231ebf0
	if (!ctx.cr0.eq) goto loc_8231EBF0;
loc_8231EC14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231EC1C"))) PPC_WEAK_FUNC(sub_8231EC1C);
PPC_FUNC_IMPL(__imp__sub_8231EC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231EC20"))) PPC_WEAK_FUNC(sub_8231EC20);
PPC_FUNC_IMPL(__imp__sub_8231EC20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231EC3C"))) PPC_WEAK_FUNC(sub_8231EC3C);
PPC_FUNC_IMPL(__imp__sub_8231EC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231EC40"))) PPC_WEAK_FUNC(sub_8231EC40);
PPC_FUNC_IMPL(__imp__sub_8231EC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8231EC48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8231ecbc
	if (ctx.cr6.eq) goto loc_8231ECBC;
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ecb0
	if (ctx.cr6.eq) goto loc_8231ECB0;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r7,424(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r9,432(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r4,428(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// b 0x8231ecd8
	goto loc_8231ECD8;
loc_8231ECB0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8231ECBC:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82323c48
	ctx.lr = 0x8231ECC8;
	sub_82323C48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ecb0
	if (ctx.cr6.eq) goto loc_8231ECB0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8231ECD8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82324f18
	ctx.lr = 0x8231ECE8;
	sub_82324F18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231ED04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8231ed2c
	if (ctx.cr6.eq) goto loc_8231ED2C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231ED2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231ED2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231ED38"))) PPC_WEAK_FUNC(sub_8231ED38);
PPC_FUNC_IMPL(__imp__sub_8231ED38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231ed50
	if (!ctx.cr6.gt) goto loc_8231ED50;
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8231ed54
	goto loc_8231ED54;
loc_8231ED50:
	// lwz r9,296(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
loc_8231ED54:
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// addi r10,r3,332
	ctx.r10.s64 = ctx.r3.s64 + 332;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_8231ED70:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231ed98
	if (ctx.cr6.eq) goto loc_8231ED98;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8231edc4
	if (ctx.cr6.lt) goto loc_8231EDC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8231ed70
	if (ctx.cr6.lt) goto loc_8231ED70;
	// b 0x8231edcc
	goto loc_8231EDCC;
loc_8231ED98:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231edb0
	if (!ctx.cr6.eq) goto loc_8231EDB0;
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// b 0x8231edec
	goto loc_8231EDEC;
loc_8231EDB0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// b 0x8231edcc
	goto loc_8231EDCC;
loc_8231EDC4:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_8231EDCC:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8231ee0c
	if (!ctx.cr6.eq) goto loc_8231EE0C;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
loc_8231EDDC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8231EDEC:
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// stw r6,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r6.u32);
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// std r9,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r9.u64);
	// blr 
	return;
loc_8231EE0C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231eddc
	if (!ctx.cr6.eq) goto loc_8231EDDC;
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// b 0x8231edec
	goto loc_8231EDEC;
}

__attribute__((alias("__imp__sub_8231EE20"))) PPC_WEAK_FUNC(sub_8231EE20);
PPC_FUNC_IMPL(__imp__sub_8231EE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8231EE28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231eee4
	if (ctx.cr6.eq) goto loc_8231EEE4;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231eee4
	if (ctx.cr6.eq) goto loc_8231EEE4;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231EE80;
	sub_82339988(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// divwu r9,r3,r10
	ctx.r9.u32 = ctx.r3.u32 / ctx.r10.u32;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// twllei r10,0
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231EE9C;
	sub_82339988(ctx, base);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// divwu r7,r3,r8
	ctx.r7.u32 = ctx.r3.u32 / ctx.r8.u32;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// twllei r8,0
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231EEB8;
	sub_82339988(ctx, base);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// divwu r5,r3,r6
	ctx.r5.u32 = ctx.r3.u32 / ctx.r6.u32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// twllei r6,0
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231EED4;
	sub_82339988(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// divwu r3,r3,r4
	ctx.r3.u32 = ctx.r3.u32 / ctx.r4.u32;
	// twllei r4,0
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8231EEE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231EEEC"))) PPC_WEAK_FUNC(sub_8231EEEC);
PPC_FUNC_IMPL(__imp__sub_8231EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231EEF0"))) PPC_WEAK_FUNC(sub_8231EEF0);
PPC_FUNC_IMPL(__imp__sub_8231EEF0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r4.u32);
	// stw r5,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231EEFC"))) PPC_WEAK_FUNC(sub_8231EEFC);
PPC_FUNC_IMPL(__imp__sub_8231EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231EF00"))) PPC_WEAK_FUNC(sub_8231EF00);
PPC_FUNC_IMPL(__imp__sub_8231EF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-4840
	ctx.r4.s64 = ctx.r11.s64 + -4840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82336fb8
	sub_82336FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231EF1C"))) PPC_WEAK_FUNC(sub_8231EF1C);
PPC_FUNC_IMPL(__imp__sub_8231EF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231EF20"))) PPC_WEAK_FUNC(sub_8231EF20);
PPC_FUNC_IMPL(__imp__sub_8231EF20) {
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
	// addi r11,r11,-23408
	ctx.r11.s64 = ctx.r11.s64 + -23408;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231ef70
	if (ctx.cr6.eq) goto loc_8231EF70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-4704
	ctx.r4.s64 = ctx.r11.s64 + -4704;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231EF5C;
	sub_82336FB8(ctx, base);
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
loc_8231EF70:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8231ef9c
	if (!ctx.cr6.eq) goto loc_8231EF9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8231EF9C:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// addi r9,r10,8320
	ctx.r9.s64 = ctx.r10.s64 + 8320;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8231efec
	if (!ctx.cr6.gt) goto loc_8231EFEC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-4764
	ctx.r4.s64 = ctx.r11.s64 + -4764;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231EFD8;
	sub_82336FB8(ctx, base);
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
loc_8231EFEC:
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231F008"))) PPC_WEAK_FUNC(sub_8231F008);
PPC_FUNC_IMPL(__imp__sub_8231F008) {
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
	// addi r31,r11,-23404
	ctx.r31.s64 = ctx.r11.s64 + -23404;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231f0b4
	if (!ctx.cr6.eq) goto loc_8231F0B4;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// bne cr6,0x8231f074
	if (!ctx.cr6.eq) goto loc_8231F074;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-4632
	ctx.r4.s64 = ctx.r11.s64 + -4632;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231F060;
	sub_82336FB8(ctx, base);
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
loc_8231F074:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r9.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r10.u32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r11.u32);
	// bl 0x82322f08
	ctx.lr = 0x8231F0A0;
	sub_82322F08(ctx, base);
	// bl 0x82323630
	ctx.lr = 0x8231F0A4;
	sub_82323630(ctx, base);
	// lwz r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x82324358
	ctx.lr = 0x8231F0B0;
	sub_82324358(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
loc_8231F0B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8231F0D0"))) PPC_WEAK_FUNC(sub_8231F0D0);
PPC_FUNC_IMPL(__imp__sub_8231F0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231F0D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82339988
	ctx.lr = 0x8231F0F0;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231f1f8
	if (ctx.cr6.eq) goto loc_8231F1F8;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339958
	ctx.lr = 0x8231F110;
	sub_82339958(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231F124;
	sub_8233A580(ctx, base);
	// lbz r11,159(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8231f348
	if (ctx.cr6.gt) goto loc_8231F348;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8231f230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231F230;
	// bdzf 4*cr6+eq,0x8231f300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231F300;
	// bne cr6,0x8231f278
	if (!ctx.cr6.eq) goto loc_8231F278;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x8231e730
	ctx.lr = 0x8231F158;
	sub_8231E730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// beq cr6,0x8231f204
	if (ctx.cr6.eq) goto loc_8231F204;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339988
	ctx.lr = 0x8231F16C;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8231f1f0
	if (ctx.cr6.eq) goto loc_8231F1F0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82339958
	ctx.lr = 0x8231F188;
	sub_82339958(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231F198;
	sub_8233A580(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8231f1d4
	if (!ctx.cr6.lt) goto loc_8231F1D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-4400
	ctx.r4.s64 = ctx.r11.s64 + -4400;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231F1D0;
	sub_82336FB8(ctx, base);
	// b 0x8231f210
	goto loc_8231F210;
loc_8231F1D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339978
	ctx.lr = 0x8231F1E4;
	sub_82339978(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// b 0x8231f208
	goto loc_8231F208;
loc_8231F1F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82339968
	ctx.lr = 0x8231F1F8;
	sub_82339968(ctx, base);
loc_8231F1F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231F204:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8231F208:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339978
	ctx.lr = 0x8231F210;
	sub_82339978(ctx, base);
loc_8231F210:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// b 0x8231f348
	goto loc_8231F348;
loc_8231F230:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f348
	if (ctx.cr6.eq) goto loc_8231F348;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231F254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8231f348
	if (ctx.cr6.eq) goto loc_8231F348;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339968
	ctx.lr = 0x8231F26C;
	sub_82339968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231F278:
	// stw r28,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8231e730
	ctx.lr = 0x8231F284;
	sub_8231E730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231f348
	if (ctx.cr6.eq) goto loc_8231F348;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82339988
	ctx.lr = 0x8231F298;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8231f1f0
	if (ctx.cr6.eq) goto loc_8231F1F0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82339958
	ctx.lr = 0x8231F2B4;
	sub_82339958(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231F2C4;
	sub_8233A580(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8231f348
	if (!ctx.cr6.lt) goto loc_8231F348;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-4464
	ctx.r4.s64 = ctx.r11.s64 + -4464;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231F2FC;
	sub_82336FB8(ctx, base);
	// b 0x8231f348
	goto loc_8231F348;
loc_8231F300:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231f328
	if (!ctx.cr6.eq) goto loc_8231F328;
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f328
	if (ctx.cr6.eq) goto loc_8231F328;
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231F328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231F328:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8231f348
	if (!ctx.cr6.eq) goto loc_8231F348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e628
	ctx.lr = 0x8231F33C;
	sub_8231E628(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_8231F348:
	// lbz r11,159(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231f398
	if (!ctx.cr6.gt) goto loc_8231F398;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8231f398
	if (ctx.cr6.gt) goto loc_8231F398;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r8,r28
	ctx.r30.u64 = ctx.r8.u64 & ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339978
	ctx.lr = 0x8231F37C;
	sub_82339978(ctx, base);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231f398
	if (ctx.cr6.eq) goto loc_8231F398;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339978
	ctx.lr = 0x8231F398;
	sub_82339978(ctx, base);
loc_8231F398:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231F3A4"))) PPC_WEAK_FUNC(sub_8231F3A4);
PPC_FUNC_IMPL(__imp__sub_8231F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231F3A8"))) PPC_WEAK_FUNC(sub_8231F3A8);
PPC_FUNC_IMPL(__imp__sub_8231F3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231F3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231f3e8
	if (ctx.cr6.eq) goto loc_8231F3E8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8231f3e8
	if (!ctx.cr6.eq) goto loc_8231F3E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231F3E0;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231f3f4
	if (!ctx.cr6.eq) goto loc_8231F3F4;
loc_8231F3E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231F3F4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339958
	ctx.lr = 0x8231F408;
	sub_82339958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f3e8
	if (ctx.cr6.eq) goto loc_8231F3E8;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231F424;
	sub_8233E4E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8231ed38
	ctx.lr = 0x8231F430;
	sub_8231ED38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r8,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r5,r9,127
	ctx.r5.s64 = ctx.r9.s64 + 127;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r5,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// addi r3,r9,127
	ctx.r3.s64 = ctx.r9.s64 + 127;
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// rlwinm r8,r3,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FFFFFF;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r6,3,1,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7FFFFFF8;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// rlwinm r3,r4,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r4,r8,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r8,r5,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// stw r5,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x82339968
	ctx.lr = 0x8231F4DC;
	sub_82339968(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231F4E8"))) PPC_WEAK_FUNC(sub_8231F4E8);
PPC_FUNC_IMPL(__imp__sub_8231F4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8231F4F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231f528
	if (ctx.cr6.eq) goto loc_8231F528;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8231f528
	if (!ctx.cr6.eq) goto loc_8231F528;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231F520;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231f534
	if (!ctx.cr6.eq) goto loc_8231F534;
loc_8231F528:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231F534:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231f528
	if (!ctx.cr6.eq) goto loc_8231F528;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339958
	ctx.lr = 0x8231F554;
	sub_82339958(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8231f528
	if (ctx.cr6.eq) goto loc_8231F528;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231F570;
	sub_8233E4E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231ed38
	ctx.lr = 0x8231F57C;
	sub_8231ED38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r7,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// rlwinm r4,r6,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// addi r3,r9,127
	ctx.r3.s64 = ctx.r9.s64 + 127;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r3,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FFFFFF;
	// addi r6,r9,127
	ctx.r6.s64 = ctx.r9.s64 + 127;
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r6,r6,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r4,r4,3,1,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFFFFF8;
	// rlwinm r9,r3,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r3,r7,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// mullw r7,r4,r6
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// rlwinm r6,r6,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r8,r7,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// std r5,272(r30)
	PPC_STORE_U64(ctx.r30.u32 + 272, ctx.r5.u64);
	// stw r9,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r9.u32);
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8231f654
	if (!ctx.cr6.eq) goto loc_8231F654;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bgt cr6,0x8231f658
	if (ctx.cr6.gt) goto loc_8231F658;
loc_8231F654:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231F658:
	// stw r11,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231F668"))) PPC_WEAK_FUNC(sub_8231F668);
PPC_FUNC_IMPL(__imp__sub_8231F668) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231f6b4
	if (ctx.cr6.eq) goto loc_8231F6B4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8231f6b4
	if (ctx.cr6.eq) goto loc_8231F6B4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f6b4
	if (ctx.cr6.eq) goto loc_8231F6B4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8231ea98
	ctx.lr = 0x8231F6A0;
	sub_8231EA98(ctx, base);
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
loc_8231F6B4:
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

__attribute__((alias("__imp__sub_8231F6C8"))) PPC_WEAK_FUNC(sub_8231F6C8);
PPC_FUNC_IMPL(__imp__sub_8231F6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8231F6D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231f708
	if (ctx.cr6.eq) goto loc_8231F708;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8231f708
	if (!ctx.cr6.eq) goto loc_8231F708;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231F700;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231f714
	if (!ctx.cr6.eq) goto loc_8231F714;
loc_8231F708:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8231F714:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339958
	ctx.lr = 0x8231F728;
	sub_82339958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f708
	if (ctx.cr6.eq) goto loc_8231F708;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x8231ed38
	ctx.lr = 0x8231F748;
	sub_8231ED38(ctx, base);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// ld r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 32);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82339968
	ctx.lr = 0x8231F778;
	sub_82339968(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231F784"))) PPC_WEAK_FUNC(sub_8231F784);
PPC_FUNC_IMPL(__imp__sub_8231F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231F788"))) PPC_WEAK_FUNC(sub_8231F788);
PPC_FUNC_IMPL(__imp__sub_8231F788) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231f7d0
	if (ctx.cr6.eq) goto loc_8231F7D0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8231f7d0
	if (!ctx.cr6.eq) goto loc_8231F7D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231F7C8;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231f7d8
	if (!ctx.cr6.eq) goto loc_8231F7D8;
loc_8231F7D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231f8a0
	goto loc_8231F8A0;
loc_8231F7D8:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231f7d0
	if (!ctx.cr6.eq) goto loc_8231F7D0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82339958
	ctx.lr = 0x8231F7F8;
	sub_82339958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f7d0
	if (ctx.cr6.eq) goto loc_8231F7D0;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8231ed38
	ctx.lr = 0x8231F814;
	sub_8231ED38(ctx, base);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ld r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,16(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r4,r11,15
	ctx.r4.s64 = ctx.r11.s64 + 15;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r6,20(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r11,r4,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r3,r11,127
	ctx.r3.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r3,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// std r10,272(r30)
	PPC_STORE_U64(ctx.r30.u32 + 272, ctx.r10.u64);
	// stw r7,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r7.u32);
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8231f894
	if (!ctx.cr6.eq) goto loc_8231F894;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bgt cr6,0x8231f898
	if (ctx.cr6.gt) goto loc_8231F898;
loc_8231F894:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231F898:
	// stw r11,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8231F8A0:
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

__attribute__((alias("__imp__sub_8231F8B8"))) PPC_WEAK_FUNC(sub_8231F8B8);
PPC_FUNC_IMPL(__imp__sub_8231F8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8231F8C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,284(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x82339988
	ctx.lr = 0x8231F8DC;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231fa24
	if (ctx.cr6.eq) goto loc_8231FA24;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r27,r11,-4340
	ctx.r27.s64 = ctx.r11.s64 + -4340;
loc_8231F8F0:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339958
	ctx.lr = 0x8231F908;
	sub_82339958(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231F918;
	sub_8233A580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231f92c
	if (ctx.cr6.eq) goto loc_8231F92C;
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231fa14
	if (ctx.cr6.eq) goto loc_8231FA14;
loc_8231F92C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231F93C;
	sub_8233A580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231f9c4
	if (ctx.cr6.eq) goto loc_8231F9C4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8231f9c4
	if (ctx.cr6.eq) goto loc_8231F9C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339988
	ctx.lr = 0x8231F964;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8231fa1c
	if (ctx.cr6.eq) goto loc_8231FA1C;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82339958
	ctx.lr = 0x8231F980;
	sub_82339958(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x8231F990;
	sub_8233A580(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8231f9c4
	if (!ctx.cr6.lt) goto loc_8231F9C4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231F9C4;
	sub_82336FB8(ctx, base);
loc_8231F9C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339978
	ctx.lr = 0x8231F9D4;
	sub_82339978(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f9f0
	if (ctx.cr6.eq) goto loc_8231F9F0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339978
	ctx.lr = 0x8231F9F0;
	sub_82339978(ctx, base);
loc_8231F9F0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82339988
	ctx.lr = 0x8231FA00;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231f8f0
	if (!ctx.cr6.eq) goto loc_8231F8F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8231FA14:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8231FA1C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82339968
	ctx.lr = 0x8231FA24;
	sub_82339968(ctx, base);
loc_8231FA24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231FA30"))) PPC_WEAK_FUNC(sub_8231FA30);
PPC_FUNC_IMPL(__imp__sub_8231FA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x8231FA38;
	__savegprlr_20(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// stw r22,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r22.u32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// bl 0x82339988
	ctx.lr = 0x8231FA64;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823202f0
	if (ctx.cr6.eq) goto loc_823202F0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339958
	ctx.lr = 0x8231FA84;
	sub_82339958(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8233a710
	ctx.lr = 0x8231FA94;
	sub_8233A710(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82327578
	ctx.lr = 0x8231FAA4;
	sub_82327578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231fad0
	if (!ctx.cr6.eq) goto loc_8231FAD0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x8231FAC0;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r4,r11,-3888
	ctx.r4.s64 = ctx.r11.s64 + -3888;
	// b 0x823202d8
	goto loc_823202D8;
loc_8231FAD0:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x823253d8
	ctx.lr = 0x8231FAE0;
	sub_823253D8(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82327330
	ctx.lr = 0x8231FB08;
	sub_82327330(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231fb30
	if (ctx.cr6.eq) goto loc_8231FB30;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x8231FB20;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r4,r11,-3928
	ctx.r4.s64 = ctx.r11.s64 + -3928;
	// b 0x823202d8
	goto loc_823202D8;
loc_8231FB30:
	// addi r23,r30,140
	ctx.r23.s64 = ctx.r30.s64 + 140;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x823273c0
	ctx.lr = 0x8231FB40;
	sub_823273C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231fb68
	if (ctx.cr6.eq) goto loc_8231FB68;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x8231FB58;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r4,r11,-3960
	ctx.r4.s64 = ctx.r11.s64 + -3960;
	// b 0x823202d8
	goto loc_823202D8;
loc_8231FB68:
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r21,164(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r29,144(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x823253f0
	ctx.lr = 0x8231FB84;
	sub_823253F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r10,-4852
	ctx.r10.s64 = ctx.r10.s64 + -4852;
	// addi r9,r1,135
	ctx.r9.s64 = ctx.r1.s64 + 135;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8231FBA0:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8231fba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231FBA0;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x8231fbc0
	if (!ctx.cr6.lt) goto loc_8231FBC0;
loc_8231FBB8:
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// b 0x8231fbfc
	goto loc_8231FBFC;
loc_8231FBC0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
loc_8231FBCC:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8231fbb8
	if (!ctx.cr6.eq) goto loc_8231FBB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8231fbcc
	if (ctx.cr6.lt) goto loc_8231FBCC;
	// lbz r11,183(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x8231fbf8
	if (!ctx.cr6.eq) goto loc_8231FBF8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8231FBF8:
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
loc_8231FBFC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82339958
	ctx.lr = 0x8231FC2C;
	sub_82339958(ctx, base);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8231fc54
	if (!ctx.cr6.eq) goto loc_8231FC54;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x8231FC48;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4016
	ctx.r4.s64 = ctx.r11.s64 + -4016;
	// b 0x823202d4
	goto loc_823202D4;
loc_8231FC54:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// addi r7,r29,15
	ctx.r7.s64 = ctx.r29.s64 + 15;
	// srawi r5,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 4;
	// addi r31,r30,76
	ctx.r31.s64 = ctx.r30.s64 + 76;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r3,r11,127
	ctx.r3.s64 = ctx.r11.s64 + 127;
	// srawi r10,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 7;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// rlwinm r5,r9,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r10,127
	ctx.r4.s64 = ctx.r10.s64 + 127;
	// sth r11,122(r30)
	PPC_STORE_U16(ctx.r30.u32 + 122, ctx.r11.u16);
	// srawi r3,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 7;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// rlwinm r5,r8,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r4,r7,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r3,r7,r9
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// sth r10,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r10.u16);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r7,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r7.u32);
	// srawi r5,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 1;
	// stw r23,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r23.u32);
	// rlwinm r9,r3,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// stw r7,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r7.u32);
	// rlwinm r8,r3,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r7.u32);
	// ble cr6,0x823202bc
	if (!ctx.cr6.gt) goto loc_823202BC;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// ble cr6,0x8231fd64
	if (!ctx.cr6.gt) goto loc_8231FD64;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x823202bc
	if (!ctx.cr6.eq) goto loc_823202BC;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x8231fd14
	if (ctx.cr6.gt) goto loc_8231FD14;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8231ffc8
	goto loc_8231FFC8;
loc_8231FD14:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231fd44
	if (ctx.cr6.eq) goto loc_8231FD44;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231fd44
	if (ctx.cr6.eq) goto loc_8231FD44;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
loc_8231FD34:
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r11.u32);
	// b 0x8231ffc8
	goto loc_8231FFC8;
loc_8231FD44:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231fd34
	if (!ctx.cr6.eq) goto loc_8231FD34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231fd34
	if (!ctx.cr6.eq) goto loc_8231FD34;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8231ffc8
	goto loc_8231FFC8;
loc_8231FD64:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8231fea4
	if (!ctx.cr6.eq) goto loc_8231FEA4;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8231fe0c
	if (!ctx.cr6.eq) goto loc_8231FE0C;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x8231fd9c
	if (!ctx.cr6.eq) goto loc_8231FD9C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8231ffc8
	if (ctx.cr6.eq) goto loc_8231FFC8;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8231ffc8
	goto loc_8231FFC8;
loc_8231FD9C:
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8231fde4
	if (!ctx.cr6.eq) goto loc_8231FDE4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// stw r10,136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 136, ctx.r10.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82339978
	ctx.lr = 0x8231FDC8;
	sub_82339978(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
	// stw r8,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r8.u32);
	// b 0x8231ffc8
	goto loc_8231FFC8;
loc_8231FDE4:
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r22,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r22.u32);
	// b 0x8231ffbc
	goto loc_8231FFBC;
loc_8231FE0C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8231fea4
	if (!ctx.cr6.eq) goto loc_8231FEA4;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231fea4
	if (ctx.cr6.eq) goto loc_8231FEA4;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// add r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r7,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r7.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82339958
	ctx.lr = 0x8231FE7C;
	sub_82339958(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231ff88
	if (!ctx.cr6.eq) goto loc_8231FF88;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x8231FE98;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4080
	ctx.r4.s64 = ctx.r11.s64 + -4080;
	// b 0x823202d4
	goto loc_823202D4;
loc_8231FEA4:
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r8.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x8231FEF8;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ff4c
	if (ctx.cr6.eq) goto loc_8231FF4C;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339958
	ctx.lr = 0x8231FF14;
	sub_82339958(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231ff3c
	if (!ctx.cr6.eq) goto loc_8231FF3C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x8231FF30;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4144
	ctx.r4.s64 = ctx.r11.s64 + -4144;
	// b 0x823202d4
	goto loc_823202D4;
loc_8231FF3C:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339978
	ctx.lr = 0x8231FF4C;
	sub_82339978(ctx, base);
loc_8231FF4C:
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82339958
	ctx.lr = 0x8231FF60;
	sub_82339958(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231ff88
	if (!ctx.cr6.eq) goto loc_8231FF88;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x8231FF7C;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4208
	ctx.r4.s64 = ctx.r11.s64 + -4208;
	// b 0x823202d4
	goto loc_823202D4;
loc_8231FF88:
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82339978
	ctx.lr = 0x8231FFA0;
	sub_82339978(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
	// stw r8,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r8.u32);
loc_8231FFBC:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82339978
	ctx.lr = 0x8231FFC8;
	sub_82339978(ctx, base);
loc_8231FFC8:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231ffe4
	if (!ctx.cr6.gt) goto loc_8231FFE4;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x8231ffe4
	if (!ctx.cr6.eq) goto loc_8231FFE4;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8231FFE4:
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// lwz r10,440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82320010
	if (!ctx.cr0.gt) goto loc_82320010;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x82320010
	if (!ctx.cr6.eq) goto loc_82320010;
	// lwz r9,444(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82320018
	if (ctx.cr6.lt) goto loc_82320018;
loc_82320010:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x823200d4
	if (!ctx.cr6.eq) goto loc_823200D4;
loc_82320018:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339968
	ctx.lr = 0x82320028;
	sub_82339968(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x82339978
	ctx.lr = 0x82320038;
	sub_82339978(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231e730
	ctx.lr = 0x82320040;
	sub_8231E730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232006c
	if (ctx.cr6.eq) goto loc_8232006C;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339958
	ctx.lr = 0x8232005C;
	sub_82339958(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x82339978
	ctx.lr = 0x8232006C;
	sub_82339978(ctx, base);
loc_8232006C:
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
	// bne cr6,0x823200a0
	if (!ctx.cr6.eq) goto loc_823200A0;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r11.u32);
	// bl 0x8231f8b8
	ctx.lr = 0x82320094;
	sub_8231F8B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_823200A0:
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// bne cr6,0x823200c0
	if (!ctx.cr6.eq) goto loc_823200C0;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r11.u32);
loc_823200C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231f8b8
	ctx.lr = 0x823200C8;
	sub_8231F8B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_823200D4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231e730
	ctx.lr = 0x823200DC;
	sub_8231E730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82320128
	if (ctx.cr6.eq) goto loc_82320128;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339958
	ctx.lr = 0x823200F8;
	sub_82339958(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r24,120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r25,124(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// bl 0x8231ec40
	ctx.lr = 0x82320120;
	sub_8231EC40(ctx, base);
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82320194
	goto loc_82320194;
loc_82320128:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// bl 0x82323c48
	ctx.lr = 0x8232013C;
	sub_82323C48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232019c
	if (ctx.cr6.eq) goto loc_8232019C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82324f18
	ctx.lr = 0x82320158;
	sub_82324F18(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82320174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r28,r3,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r3.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82320190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82320194:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823201b8
	if (ctx.cr6.eq) goto loc_823201B8;
loc_8232019C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x823201AC;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4248
	ctx.r4.s64 = ctx.r11.s64 + -4248;
	// b 0x823202d4
	goto loc_823202D4;
loc_823201B8:
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r22,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r22.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r9,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r9.u32);
	// lwz r8,144(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r8,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r8.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// std r22,32(r27)
	PPC_STORE_U64(ctx.r27.u32 + 32, ctx.r22.u64);
	// stw r7,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r7.u32);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// std r6,40(r27)
	PPC_STORE_U64(ctx.r27.u32 + 40, ctx.r6.u64);
	// stw r22,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r22.u32);
	// stw r20,144(r27)
	PPC_STORE_U32(ctx.r27.u32 + 144, ctx.r20.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r5,r28
	ctx.r3.u64 = ctx.r5.u64 + ctx.r28.u64;
	// subf r4,r28,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r28.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// ble cr6,0x82320234
	if (!ctx.cr6.gt) goto loc_82320234;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82327578
	ctx.lr = 0x82320224;
	sub_82327578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320234
	if (ctx.cr6.eq) goto loc_82320234;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r11.u32);
loc_82320234:
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x82320264
	if (!ctx.cr6.eq) goto loc_82320264;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r11.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82339978
	ctx.lr = 0x82320258;
	sub_82339978(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
loc_82320264:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339978
	ctx.lr = 0x82320274;
	sub_82339978(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231e730
	ctx.lr = 0x8232027C;
	sub_8231E730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232029c
	if (ctx.cr6.eq) goto loc_8232029C;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x82339978
	ctx.lr = 0x8232029C;
	sub_82339978(ctx, base);
loc_8232029C:
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
	// bl 0x8231f8b8
	ctx.lr = 0x823202B0;
	sub_8231F8B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_823202BC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x823202CC;
	sub_82339968(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4280
	ctx.r4.s64 = ctx.r11.s64 + -4280;
loc_823202D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823202D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x823202E8;
	sub_82336FB8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_823202F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823202FC"))) PPC_WEAK_FUNC(sub_823202FC);
PPC_FUNC_IMPL(__imp__sub_823202FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320300"))) PPC_WEAK_FUNC(sub_82320300);
PPC_FUNC_IMPL(__imp__sub_82320300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82320308;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,76
	ctx.r30.s64 = ctx.r3.s64 + 76;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823203e8
	if (ctx.cr6.eq) goto loc_823203E8;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// sth r29,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r29.u16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// sth r29,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r29.u16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x82339958
	ctx.lr = 0x82320358;
	sub_82339958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82320390
	if (!ctx.cr6.eq) goto loc_82320390;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-3848
	ctx.r4.s64 = ctx.r11.s64 + -3848;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x82320380;
	sub_82336FB8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82320390:
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339978
	ctx.lr = 0x823203A8;
	sub_82339978(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339958
	ctx.lr = 0x823203CC;
	sub_82339958(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823203e8
	if (ctx.cr6.eq) goto loc_823203E8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339978
	ctx.lr = 0x823203E8;
	sub_82339978(ctx, base);
loc_823203E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823203F0"))) PPC_WEAK_FUNC(sub_823203F0);
PPC_FUNC_IMPL(__imp__sub_823203F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x823203F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232045c
	if (ctx.cr6.eq) goto loc_8232045C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-3484
	ctx.r5.s64 = ctx.r11.s64 + -3484;
	// li r4,448
	ctx.r4.s64 = 448;
	// bl 0x82337c48
	ctx.lr = 0x82320434;
	sub_82337C48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,448
	ctx.r5.s64 = 448;
	// bne cr6,0x82320468
	if (!ctx.cr6.eq) goto loc_82320468;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-3540
	ctx.r4.s64 = ctx.r11.s64 + -3540;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8232045C;
	sub_82336FB8(ctx, base);
loc_8232045C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82320468:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82320474;
	sub_8233EAF0(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x823244f8
	ctx.lr = 0x8232047C;
	sub_823244F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823204c0
	if (!ctx.cr6.eq) goto loc_823204C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-4592
	ctx.r4.s64 = ctx.r11.s64 + -4592;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x823204A4;
	sub_82336FB8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x8231e410
	ctx.lr = 0x823204B4;
	sub_8231E410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_823204C0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823242c8
	ctx.lr = 0x823204D0;
	sub_823242C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823242c8
	ctx.lr = 0x823204E0;
	sub_823242C8(ctx, base);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4352
	ctx.r4.s64 = ctx.r11.s64 + -4352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823251e8
	ctx.lr = 0x823204F4;
	sub_823251E8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233a898
	ctx.lr = 0x82320504;
	sub_8233A898(ctx, base);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232053c
	if (!ctx.cr6.eq) goto loc_8232053C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-3588
	ctx.r4.s64 = ctx.r11.s64 + -3588;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x82320528;
	sub_82336FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e410
	ctx.lr = 0x82320530;
	sub_8231E410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8232053C:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r11,-23424
	ctx.r9.s64 = ctx.r11.s64 + -23424;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// beq cr6,0x82320560
	if (ctx.cr6.eq) goto loc_82320560;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82320560:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r10,r27,15
	ctx.r10.s64 = ctx.r27.s64 + 15;
	// addi r8,r26,15
	ctx.r8.s64 = ctx.r26.s64 + 15;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r10,127
	ctx.r6.s64 = ctx.r10.s64 + 127;
	// addi r5,r8,127
	ctx.r5.s64 = ctx.r8.s64 + 127;
	// rlwinm r4,r6,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r8,r7,3,1,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7FFFFFF8;
	// rlwinm r3,r5,25,7,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,29970
	ctx.r6.s64 = 29970;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r4,152
	ctx.r4.s64 = 152;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r10,-3612
	ctx.r5.s64 = ctx.r10.s64 + -3612;
	// mulli r4,r11,152
	ctx.r4.s64 = ctx.r11.s64 * 152;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82337c48
	ctx.lr = 0x823205D8;
	sub_82337C48(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// bne cr6,0x8232061c
	if (!ctx.cr6.eq) goto loc_8232061C;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r10,-3672
	ctx.r4.s64 = ctx.r10.s64 + -3672;
	// li r6,0
	ctx.r6.s64 = 0;
	// mullw r5,r11,r9
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x82320608;
	sub_82336FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e410
	ctx.lr = 0x82320610;
	sub_8231E410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8232061C:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x8233eaf0
	ctx.lr = 0x8232062C;
	sub_8233EAF0(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// ble cr6,0x82320698
	if (!ctx.cr6.gt) goto loc_82320698;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r26,r11,-3692
	ctx.r26.s64 = ctx.r11.s64 + -3692;
loc_8232064C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,128
	ctx.r6.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82337c48
	ctx.lr = 0x82320660;
	sub_82337C48(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823206e0
	if (ctx.cr6.eq) goto loc_823206E0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,152
	ctx.r29.s64 = ctx.r29.s64 + 152;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8232064c
	if (ctx.cr6.lt) goto loc_8232064C;
loc_82320698:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233a898
	ctx.lr = 0x823206A8;
	sub_8233A898(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82320710
	if (!ctx.cr6.eq) goto loc_82320710;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-3736
	ctx.r4.s64 = ctx.r11.s64 + -3736;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x823206CC;
	sub_82336FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e410
	ctx.lr = 0x823206D4;
	sub_8231E410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_823206E0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-3784
	ctx.r4.s64 = ctx.r11.s64 + -3784;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x823206FC;
	sub_82336FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e410
	ctx.lr = 0x82320704;
	sub_8231E410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82320710:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// beq cr6,0x8232077c
	if (ctx.cr6.eq) goto loc_8232077C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823233f0
	ctx.lr = 0x82320774;
	sub_823233F0(ctx, base);
	// stw r3,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
	// b 0x82320780
	goto loc_82320780;
loc_8232077C:
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
loc_82320780:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r25.u32);
	// stw r24,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r23.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823207AC"))) PPC_WEAK_FUNC(sub_823207AC);
PPC_FUNC_IMPL(__imp__sub_823207AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823207B0"))) PPC_WEAK_FUNC(sub_823207B0);
PPC_FUNC_IMPL(__imp__sub_823207B0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823207f0
	if (!ctx.cr6.eq) goto loc_823207F0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8232087c
	if (ctx.cr6.eq) goto loc_8232087C;
	// bl 0x8231e4f8
	ctx.lr = 0x823207E4;
	sub_8231E4F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_823207F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82320804
	if (ctx.cr6.eq) goto loc_82320804;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82320818
	if (!ctx.cr6.eq) goto loc_82320818;
loc_82320804:
	// li r30,8
	ctx.r30.s64 = 8;
loc_82320808:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231f0d0
	ctx.lr = 0x82320810;
	sub_8231F0D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82320808
	if (!ctx.cr0.eq) goto loc_82320808;
loc_82320818:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82320844
	if (!ctx.cr6.eq) goto loc_82320844;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8232083c
	if (!ctx.cr6.lt) goto loc_8232083C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82320844
	if (!ctx.cr6.eq) goto loc_82320844;
loc_8232083C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82320844:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8232087c
	if (!ctx.cr6.eq) goto loc_8232087C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8232087c
	if (!ctx.cr6.eq) goto loc_8232087C;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r9,292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8232087c
	if (ctx.cr6.gt) goto loc_8232087C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8232087C:
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

__attribute__((alias("__imp__sub_82320894"))) PPC_WEAK_FUNC(sub_82320894);
PPC_FUNC_IMPL(__imp__sub_82320894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320898"))) PPC_WEAK_FUNC(sub_82320898);
PPC_FUNC_IMPL(__imp__sub_82320898) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823208c4
	if (!ctx.cr6.eq) goto loc_823208C4;
loc_823208BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823209d0
	goto loc_823209D0;
loc_823208C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823208bc
	if (ctx.cr6.eq) goto loc_823208BC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823208bc
	if (!ctx.cr6.eq) goto loc_823208BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x823208E8;
	sub_82339988(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// divwu. r10,r3,r11
	ctx.r10.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r11,0
	// ble 0x8232094c
	if (!ctx.cr0.gt) goto loc_8232094C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339958
	ctx.lr = 0x8232090C;
	sub_82339958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232093c
	if (ctx.cr6.eq) goto loc_8232093C;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8232093c
	if (ctx.cr6.eq) goto loc_8232093C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339978
	ctx.lr = 0x82320938;
	sub_82339978(ctx, base);
	// b 0x8232094c
	goto loc_8232094C;
loc_8232093C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82339968
	ctx.lr = 0x8232094C;
	sub_82339968(ctx, base);
loc_8232094C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82339988
	ctx.lr = 0x82320958;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823208bc
	if (ctx.cr6.eq) goto loc_823208BC;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x823209b0
	if (!ctx.cr6.eq) goto loc_823209B0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823209c4
	if (!ctx.cr6.eq) goto loc_823209C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82339988
	ctx.lr = 0x8232098C;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823209c4
	if (!ctx.cr6.eq) goto loc_823209C4;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823209c4
	if (!ctx.cr6.lt) goto loc_823209C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320300
	ctx.lr = 0x823209AC;
	sub_82320300(ctx, base);
	// b 0x823209c4
	goto loc_823209C4;
loc_823209B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231f8b8
	ctx.lr = 0x823209B8;
	sub_8231F8B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231fa30
	ctx.lr = 0x823209C0;
	sub_8231FA30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823209C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_823209D0:
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

__attribute__((alias("__imp__sub_823209E8"))) PPC_WEAK_FUNC(sub_823209E8);
PPC_FUNC_IMPL(__imp__sub_823209E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r10,-23400
	ctx.r3.s64 = ctx.r10.s64 + -23400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823209FC"))) PPC_WEAK_FUNC(sub_823209FC);
PPC_FUNC_IMPL(__imp__sub_823209FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320A00"))) PPC_WEAK_FUNC(sub_82320A00);
PPC_FUNC_IMPL(__imp__sub_82320A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82320A08;
	__savegprlr_23(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1520(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,1516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r7,3020(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3020);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r6,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic r29,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r29.s64 = ctx.r7.s64 + -1;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfe r29,r29,r7
	temp.u8 = (~ctx.r29.u32 + ctx.r7.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r29.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r24,24(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r23,32(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// bne cr6,0x82320ad8
	if (!ctx.cr6.eq) goto loc_82320AD8;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82320ad8
	if (ctx.cr6.eq) goto loc_82320AD8;
	// lwz r7,2116(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2116);
	// lwz r6,2120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// lwz r26,44(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mullw r24,r6,r7
	ctx.r24.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82320ad8
	if (!ctx.cr6.lt) goto loc_82320AD8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3356
	ctx.r4.s64 = ctx.r11.s64 + -3356;
	// b 0x82320bdc
	goto loc_82320BDC;
loc_82320AD8:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r6,r10,r11
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82320bd4
	if (ctx.cr6.lt) goto loc_82320BD4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r10,r28,r3
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82320bd4
	if (ctx.cr6.lt) goto loc_82320BD4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82320bd4
	if (ctx.cr6.lt) goto loc_82320BD4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,2980(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2980);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82321088
	ctx.lr = 0x82320B20;
	sub_82321088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82320b68
	if (ctx.cr6.eq) goto loc_82320B68;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82320bb0
	if (!ctx.cr6.eq) goto loc_82320BB0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,3020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320b88
	if (ctx.cr6.eq) goto loc_82320B88;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82322808
	ctx.lr = 0x82320B54;
	sub_82322808(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82320bc8
	if (!ctx.cr6.eq) goto loc_82320BC8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,3020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// bl 0x82322878
	ctx.lr = 0x82320B68;
	sub_82322878(ctx, base);
loc_82320B68:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3424
	ctx.r4.s64 = ctx.r11.s64 + -3424;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8231b3b8
	ctx.lr = 0x82320B7C;
	sub_8231B3B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82320B88:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82322840
	ctx.lr = 0x82320B90;
	sub_82322840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320bc8
	if (ctx.cr6.eq) goto loc_82320BC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3020);
	// bl 0x82322878
	ctx.lr = 0x82320BA4;
	sub_82322878(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82320BB0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82320bc8
	if (!ctx.cr6.eq) goto loc_82320BC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82320BC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82320BD4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3468
	ctx.r4.s64 = ctx.r11.s64 + -3468;
loc_82320BDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231b3c8
	ctx.lr = 0x82320BE8;
	sub_8231B3C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320BF4"))) PPC_WEAK_FUNC(sub_82320BF4);
PPC_FUNC_IMPL(__imp__sub_82320BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320BF8"))) PPC_WEAK_FUNC(sub_82320BF8);
PPC_FUNC_IMPL(__imp__sub_82320BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82320C00;
	__savegprlr_29(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8231a898
	ctx.lr = 0x82320C18;
	sub_8231A898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231aa48
	ctx.lr = 0x82320C20;
	sub_8231AA48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82320cd0
	if (ctx.cr6.eq) goto loc_82320CD0;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82320C38:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82320c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82320C38;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8231a930
	ctx.lr = 0x82320C48;
	sub_8231A930(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// bl 0x823210c0
	ctx.lr = 0x82320C54;
	sub_823210C0(ctx, base);
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320c68
	if (ctx.cr6.eq) goto loc_82320C68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82322840
	ctx.lr = 0x82320C68;
	sub_82322840(ctx, base);
loc_82320C68:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231aba8
	ctx.lr = 0x82320C80;
	sub_8231ABA8(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320a00
	ctx.lr = 0x82320C94;
	sub_82320A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,2980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bne cr6,0x82320cdc
	if (!ctx.cr6.eq) goto loc_82320CDC;
	// bl 0x823210f8
	ctx.lr = 0x82320CA8;
	sub_823210F8(ctx, base);
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320cbc
	if (ctx.cr6.eq) goto loc_82320CBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82322878
	ctx.lr = 0x82320CBC;
	sub_82322878(ctx, base);
loc_82320CBC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3312
	ctx.r4.s64 = ctx.r11.s64 + -3312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b3c8
	ctx.lr = 0x82320CD0;
	sub_8231B3C8(ctx, base);
loc_82320CD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82320CDC:
	// bl 0x823210f8
	ctx.lr = 0x82320CE0;
	sub_823210F8(ctx, base);
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320cf4
	if (ctx.cr6.eq) goto loc_82320CF4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82322878
	ctx.lr = 0x82320CF4;
	sub_82322878(ctx, base);
loc_82320CF4:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231a970
	ctx.lr = 0x82320D0C;
	sub_8231A970(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320D20"))) PPC_WEAK_FUNC(sub_82320D20);
PPC_FUNC_IMPL(__imp__sub_82320D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r3,-15072(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15072, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320D2C"))) PPC_WEAK_FUNC(sub_82320D2C);
PPC_FUNC_IMPL(__imp__sub_82320D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320D30"))) PPC_WEAK_FUNC(sub_82320D30);
PPC_FUNC_IMPL(__imp__sub_82320D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-15072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320D3C"))) PPC_WEAK_FUNC(sub_82320D3C);
PPC_FUNC_IMPL(__imp__sub_82320D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320D40"))) PPC_WEAK_FUNC(sub_82320D40);
PPC_FUNC_IMPL(__imp__sub_82320D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32185
	ctx.r9.s64 = -2109276160;
	// addi r8,r10,-3168
	ctx.r8.s64 = ctx.r10.s64 + -3168;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,-15076(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15076, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320D78"))) PPC_WEAK_FUNC(sub_82320D78);
PPC_FUNC_IMPL(__imp__sub_82320D78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320D7C"))) PPC_WEAK_FUNC(sub_82320D7C);
PPC_FUNC_IMPL(__imp__sub_82320D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320D80"))) PPC_WEAK_FUNC(sub_82320D80);
PPC_FUNC_IMPL(__imp__sub_82320D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320DA8"))) PPC_WEAK_FUNC(sub_82320DA8);
PPC_FUNC_IMPL(__imp__sub_82320DA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320DAC"))) PPC_WEAK_FUNC(sub_82320DAC);
PPC_FUNC_IMPL(__imp__sub_82320DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320DB0"))) PPC_WEAK_FUNC(sub_82320DB0);
PPC_FUNC_IMPL(__imp__sub_82320DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320DE4"))) PPC_WEAK_FUNC(sub_82320DE4);
PPC_FUNC_IMPL(__imp__sub_82320DE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320DE8"))) PPC_WEAK_FUNC(sub_82320DE8);
PPC_FUNC_IMPL(__imp__sub_82320DE8) {
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
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320e2c
	if (ctx.cr6.eq) goto loc_82320E2C;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82320e2c
	if (ctx.cr6.eq) goto loc_82320E2C;
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82320E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82320E2C:
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

__attribute__((alias("__imp__sub_82320E40"))) PPC_WEAK_FUNC(sub_82320E40);
PPC_FUNC_IMPL(__imp__sub_82320E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320E68"))) PPC_WEAK_FUNC(sub_82320E68);
PPC_FUNC_IMPL(__imp__sub_82320E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320E6C"))) PPC_WEAK_FUNC(sub_82320E6C);
PPC_FUNC_IMPL(__imp__sub_82320E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320E70"))) PPC_WEAK_FUNC(sub_82320E70);
PPC_FUNC_IMPL(__imp__sub_82320E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320EA4"))) PPC_WEAK_FUNC(sub_82320EA4);
PPC_FUNC_IMPL(__imp__sub_82320EA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320EA8"))) PPC_WEAK_FUNC(sub_82320EA8);
PPC_FUNC_IMPL(__imp__sub_82320EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320EDC"))) PPC_WEAK_FUNC(sub_82320EDC);
PPC_FUNC_IMPL(__imp__sub_82320EDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

