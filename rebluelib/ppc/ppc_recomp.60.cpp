#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82365068"))) PPC_WEAK_FUNC(sub_82365068);
PPC_FUNC_IMPL(__imp__sub_82365068) {
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
	// bl 0x82375128
	ctx.lr = 0x82365080;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365090"))) PPC_WEAK_FUNC(sub_82365090);
PPC_FUNC_IMPL(__imp__sub_82365090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-26320(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26320);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823650A0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823650f0
	if (ctx.cr6.eq) goto loc_823650F0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823650D0:
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
	// bne 0x823650d0
	if (!ctx.cr0.eq) goto loc_823650D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823650F0:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8236e710
	ctx.lr = 0x823650F8;
	sub_8236E710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// stb r11,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r11.u8);
	// stb r11,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82365110;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365098"))) PPC_WEAK_FUNC(sub_82365098);
PPC_FUNC_IMPL(__imp__sub_82365098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823650A0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823650f0
	if (ctx.cr6.eq) goto loc_823650F0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823650D0:
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
	// bne 0x823650d0
	if (!ctx.cr0.eq) goto loc_823650D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823650F0:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8236e710
	ctx.lr = 0x823650F8;
	sub_8236E710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// stb r11,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r11.u8);
	// stb r11,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82365110;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236511C"))) PPC_WEAK_FUNC(sub_8236511C);
PPC_FUNC_IMPL(__imp__sub_8236511C) {
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
	// bl 0x82375128
	ctx.lr = 0x82365134;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365144"))) PPC_WEAK_FUNC(sub_82365144);
PPC_FUNC_IMPL(__imp__sub_82365144) {
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
	// bl 0x82375128
	ctx.lr = 0x8236515C;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236516C"))) PPC_WEAK_FUNC(sub_8236516C);
PPC_FUNC_IMPL(__imp__sub_8236516C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365170"))) PPC_WEAK_FUNC(sub_82365170);
PPC_FUNC_IMPL(__imp__sub_82365170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-26232(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26232);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82365180;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8236e760
	ctx.lr = 0x82365198;
	sub_8236E760(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236e760
	ctx.lr = 0x823651A4;
	sub_8236E760(ctx, base);
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r7,r11,944
	ctx.r7.s64 = ctx.r11.s64 + 944;
	// addi r6,r10,20520
	ctx.r6.s64 = ctx.r10.s64 + 20520;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x8237c1c0
	ctx.lr = 0x823651C4;
	sub_8237C1C0(ctx, base);
	// li r10,15000
	ctx.r10.s64 = 15000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2576
	ctx.r9.s64 = 2576;
	// stw r10,3088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3088, ctx.r10.u32);
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
	// addi r29,r30,3112
	ctx.r29.s64 = ctx.r30.s64 + 3112;
	// stw r11,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r11.u32);
	// stw r10,3100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3100, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r9.u32);
	// bl 0x8236e710
	ctx.lr = 0x823651F0;
	sub_8236E710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r10.u8);
	// lfs f0,-1580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x8236e690
	ctx.lr = 0x8236520C;
	sub_8236E690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365178"))) PPC_WEAK_FUNC(sub_82365178);
PPC_FUNC_IMPL(__imp__sub_82365178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82365180;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8236e760
	ctx.lr = 0x82365198;
	sub_8236E760(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236e760
	ctx.lr = 0x823651A4;
	sub_8236E760(ctx, base);
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r7,r11,944
	ctx.r7.s64 = ctx.r11.s64 + 944;
	// addi r6,r10,20520
	ctx.r6.s64 = ctx.r10.s64 + 20520;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x8237c1c0
	ctx.lr = 0x823651C4;
	sub_8237C1C0(ctx, base);
	// li r10,15000
	ctx.r10.s64 = 15000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2576
	ctx.r9.s64 = 2576;
	// stw r10,3088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3088, ctx.r10.u32);
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
	// addi r29,r30,3112
	ctx.r29.s64 = ctx.r30.s64 + 3112;
	// stw r11,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r11.u32);
	// stw r10,3100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3100, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r9.u32);
	// bl 0x8236e710
	ctx.lr = 0x823651F0;
	sub_8236E710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r10.u8);
	// lfs f0,-1580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x8236e690
	ctx.lr = 0x8236520C;
	sub_8236E690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365218"))) PPC_WEAK_FUNC(sub_82365218);
PPC_FUNC_IMPL(__imp__sub_82365218) {
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
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r6,r11,944
	ctx.r6.s64 = ctx.r11.s64 + 944;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8237c3b0
	ctx.lr = 0x82365244;
	sub_8237C3B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365254"))) PPC_WEAK_FUNC(sub_82365254);
PPC_FUNC_IMPL(__imp__sub_82365254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365258"))) PPC_WEAK_FUNC(sub_82365258);
PPC_FUNC_IMPL(__imp__sub_82365258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r6,r11,944
	ctx.r6.s64 = ctx.r11.s64 + 944;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x8237c3b0
	sub_8237C3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365270"))) PPC_WEAK_FUNC(sub_82365270);
PPC_FUNC_IMPL(__imp__sub_82365270) {
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
	// bl 0x823689c8
	ctx.lr = 0x82365290;
	sub_823689C8(ctx, base);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// lbz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18);
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_823652CC"))) PPC_WEAK_FUNC(sub_823652CC);
PPC_FUNC_IMPL(__imp__sub_823652CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823652D0"))) PPC_WEAK_FUNC(sub_823652D0);
PPC_FUNC_IMPL(__imp__sub_823652D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25960(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25960);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x823652E0;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r4,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// bl 0x8236e760
	ctx.lr = 0x82365310;
	sub_8236E760(ctx, base);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e900
	ctx.lr = 0x82365320;
	sub_8236E900(ctx, base);
	// addi r20,r30,4
	ctx.r20.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8236e968
	ctx.lr = 0x82365330;
	sub_8236E968(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// clrlwi. r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r23,r11,-26984
	ctx.r23.s64 = ctx.r11.s64 + -26984;
	// addi r22,r10,-26008
	ctx.r22.s64 = ctx.r10.s64 + -26008;
	// addi r21,r9,-26044
	ctx.r21.s64 = ctx.r9.s64 + -26044;
	// beq 0x8236546c
	if (ctx.cr0.eq) goto loc_8236546C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r26,r11,12188
	ctx.r26.s64 = ctx.r11.s64 + 12188;
	// addi r25,r10,-26060
	ctx.r25.s64 = ctx.r10.s64 + -26060;
loc_82365360:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82365368;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365448
	if (ctx.cr6.eq) goto loc_82365448;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82366380
	ctx.lr = 0x8236538C;
	sub_82366380(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x823653A0;
	sub_8236E9D8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82363e08
	ctx.lr = 0x823653A8;
	sub_82363E08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x823653B4;
	sub_82363E08(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823653dc
	if (ctx.cr6.eq) goto loc_823653DC;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,90
	ctx.r8.s64 = 90;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x823653DC;
	sub_82372320(ctx, base);
loc_823653DC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// beq 0x82365448
	if (ctx.cr0.eq) goto loc_82365448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823653FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8236546c
	if (ctx.cr0.eq) goto loc_8236546C;
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82365424
	if (ctx.cr6.lt) goto loc_82365424;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8236543c
	goto loc_8236543C;
loc_82365424:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8236e6c0
	ctx.lr = 0x8236542C;
	sub_8236E6C0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82365448
	if (!ctx.cr6.gt) goto loc_82365448;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8236543C:
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
loc_82365448:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e918
	ctx.lr = 0x82365458;
	sub_8236E918(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e968
	ctx.lr = 0x82365464;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365360
	if (!ctx.cr0.eq) goto loc_82365360;
loc_8236546C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365498
	if (ctx.cr0.eq) goto loc_82365498;
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,2576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2576, ctx.xer);
	// bgt cr6,0x8236548c
	if (ctx.cr6.gt) goto loc_8236548C;
	// li r11,2576
	ctx.r11.s64 = 2576;
loc_8236548C:
	// stw r11,3100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3100, ctx.r11.u32);
	// stw r11,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r11.u32);
	// stw r16,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r16.u32);
loc_82365498:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r15,1288
	ctx.r15.s64 = 1288;
	// beq 0x823654e8
	if (ctx.cr0.eq) goto loc_823654E8;
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,2576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2576, ctx.xer);
	// bgt cr6,0x823654bc
	if (ctx.cr6.gt) goto loc_823654BC;
	// li r11,2576
	ctx.r11.s64 = 2576;
loc_823654BC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,3100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3100, ctx.r11.u32);
	// stw r15,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r15.u32);
	// stw r16,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r16.u32);
	// lfs f0,5260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823654e8
	if (!ctx.cr6.gt) goto loc_823654E8;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_823654E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// bl 0x8236e760
	ctx.lr = 0x823654F8;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e900
	ctx.lr = 0x82365508;
	sub_8236E900(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e968
	ctx.lr = 0x82365514;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823658fc
	if (ctx.cr0.eq) goto loc_823658FC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r18,r11,-26096
	ctx.r18.s64 = ctx.r11.s64 + -26096;
	// addi r17,r10,-26136
	ctx.r17.s64 = ctx.r10.s64 + -26136;
	// addi r20,r9,-26168
	ctx.r20.s64 = ctx.r9.s64 + -26168;
	// addi r27,r8,29112
	ctx.r27.s64 = ctx.r8.s64 + 29112;
	// addi r24,r7,-26184
	ctx.r24.s64 = ctx.r7.s64 + -26184;
loc_82365544:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823658fc
	if (!ctx.cr0.eq) goto loc_823658FC;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82363e08
	ctx.lr = 0x82365554;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// beq 0x823658d8
	if (ctx.cr0.eq) goto loc_823658D8;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_8236557C:
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
	// bne 0x8236557c
	if (!ctx.cr0.eq) goto loc_8236557C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82365734
	if (!ctx.cr0.eq) goto loc_82365734;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823655BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r14,3092(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823655D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3088);
	// lwz r10,3104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// subf r11,r14,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r14.s64;
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r11,r11,r3
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// bge cr6,0x82365610
	if (!ctx.cr6.lt) goto loc_82365610;
	// subfc r11,r15,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r15.u32;
	ctx.r11.s64 = ctx.r26.s64 - ctx.r15.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82365614
	goto loc_82365614;
loc_82365610:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82365614:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82365688
	if (ctx.cr0.eq) goto loc_82365688;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82365628:
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
	// bne 0x82365628
	if (!ctx.cr0.eq) goto loc_82365628;
	// lwz r14,284(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823695f0
	ctx.lr = 0x82365658;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365680
	if (ctx.cr0.eq) goto loc_82365680;
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// bl 0x8236e690
	ctx.lr = 0x82365674;
	sub_8236E690(ctx, base);
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x823658a0
	goto loc_823658A0;
loc_82365680:
	// li r8,212
	ctx.r8.s64 = 212;
	// b 0x823658b0
	goto loc_823658B0;
loc_82365688:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236572c
	if (ctx.cr0.eq) goto loc_8236572C;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82365698:
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
	// bne 0x82365698
	if (!ctx.cr0.eq) goto loc_82365698;
	// lwz r14,284(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823695f0
	ctx.lr = 0x823656C8;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365724
	if (ctx.cr0.eq) goto loc_82365724;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366380
	ctx.lr = 0x823656D8;
	sub_82366380(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,223
	ctx.r8.s64 = 223;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823656FC;
	sub_82372320(ctx, base);
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// bl 0x8236e690
	ctx.lr = 0x82365710;
	sub_8236E690(ctx, base);
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// li r19,1
	ctx.r19.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
	// b 0x823658cc
	goto loc_823658CC;
loc_82365724:
	// li r8,234
	ctx.r8.s64 = 234;
	// b 0x823658b0
	goto loc_823658B0;
loc_8236572C:
	// lwz r14,284(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// b 0x823658cc
	goto loc_823658CC;
loc_82365734:
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// lbz r10,17(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823657c4
	if (ctx.cr6.lt) goto loc_823657C4;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82365774
	if (ctx.cr6.eq) goto loc_82365774;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82365754:
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
	// bne 0x82365754
	if (!ctx.cr0.eq) goto loc_82365754;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82365774:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823695f0
	ctx.lr = 0x82365780;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823657bc
	if (ctx.cr0.eq) goto loc_823657BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366380
	ctx.lr = 0x82365790;
	sub_82366380(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,250
	ctx.r8.s64 = 250;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823657B4;
	sub_82372320(ctx, base);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// b 0x82365870
	goto loc_82365870;
loc_823657BC:
	// li r8,261
	ctx.r8.s64 = 261;
	// b 0x823658b0
	goto loc_823658B0;
loc_823657C4:
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236e6c0
	ctx.lr = 0x823657D0;
	sub_8236E6C0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823658d0
	if (!ctx.cr6.gt) goto loc_823658D0;
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// lwz r10,3092(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823658d0
	if (ctx.cr0.eq) goto loc_823658D0;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8236582c
	if (ctx.cr6.eq) goto loc_8236582C;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_8236580C:
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
	// bne 0x8236580c
	if (!ctx.cr0.eq) goto loc_8236580C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_8236582C:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823695f0
	ctx.lr = 0x82365838;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823658ac
	if (ctx.cr0.eq) goto loc_823658AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366380
	ctx.lr = 0x82365848;
	sub_82366380(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,275
	ctx.r8.s64 = 275;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8236586C;
	sub_82372320(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82365870:
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// stb r16,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r16.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// bl 0x8236e690
	ctx.lr = 0x82365884;
	sub_8236E690(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_823658A0:
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
	// b 0x823658d0
	goto loc_823658D0;
loc_823658AC:
	// li r8,286
	ctx.r8.s64 = 286;
loc_823658B0:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823658CC;
	sub_82372320(ctx, base);
loc_823658CC:
	// li r25,1
	ctx.r25.s64 = 1;
loc_823658D0:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82375128
	ctx.lr = 0x823658D8;
	sub_82375128(ctx, base);
loc_823658D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e918
	ctx.lr = 0x823658E8;
	sub_8236E918(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e968
	ctx.lr = 0x823658F4;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365544
	if (!ctx.cr0.eq) goto loc_82365544;
loc_823658FC:
	// clrlwi. r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236594c
	if (!ctx.cr0.eq) goto loc_8236594C;
	// addi r29,r30,3112
	ctx.r29.s64 = ctx.r30.s64 + 3112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236e6c0
	ctx.lr = 0x82365910;
	sub_8236E6C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82365954
	if (!ctx.cr6.gt) goto loc_82365954;
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,5152
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5152, ctx.xer);
	// bgt cr6,0x82365938
	if (ctx.cr6.gt) goto loc_82365938;
	// li r11,5152
	ctx.r11.s64 = 5152;
loc_82365938:
	// stw r11,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r16,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r16.u32);
	// stw r16,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r16.u32);
	// b 0x82365950
	goto loc_82365950;
loc_8236594C:
	// addi r3,r30,3112
	ctx.r3.s64 = ctx.r30.s64 + 3112;
loc_82365950:
	// bl 0x8236e690
	ctx.lr = 0x82365954;
	sub_8236E690(ctx, base);
loc_82365954:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823652D8"))) PPC_WEAK_FUNC(sub_823652D8);
PPC_FUNC_IMPL(__imp__sub_823652D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x823652E0;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r4,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// bl 0x8236e760
	ctx.lr = 0x82365310;
	sub_8236E760(ctx, base);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e900
	ctx.lr = 0x82365320;
	sub_8236E900(ctx, base);
	// addi r20,r30,4
	ctx.r20.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8236e968
	ctx.lr = 0x82365330;
	sub_8236E968(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// clrlwi. r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r23,r11,-26984
	ctx.r23.s64 = ctx.r11.s64 + -26984;
	// addi r22,r10,-26008
	ctx.r22.s64 = ctx.r10.s64 + -26008;
	// addi r21,r9,-26044
	ctx.r21.s64 = ctx.r9.s64 + -26044;
	// beq 0x8236546c
	if (ctx.cr0.eq) goto loc_8236546C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r26,r11,12188
	ctx.r26.s64 = ctx.r11.s64 + 12188;
	// addi r25,r10,-26060
	ctx.r25.s64 = ctx.r10.s64 + -26060;
loc_82365360:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82365368;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365448
	if (ctx.cr6.eq) goto loc_82365448;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82366380
	ctx.lr = 0x8236538C;
	sub_82366380(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x823653A0;
	sub_8236E9D8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82363e08
	ctx.lr = 0x823653A8;
	sub_82363E08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x823653B4;
	sub_82363E08(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823653dc
	if (ctx.cr6.eq) goto loc_823653DC;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,90
	ctx.r8.s64 = 90;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x823653DC;
	sub_82372320(ctx, base);
loc_823653DC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// beq 0x82365448
	if (ctx.cr0.eq) goto loc_82365448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823653FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8236546c
	if (ctx.cr0.eq) goto loc_8236546C;
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82365424
	if (ctx.cr6.lt) goto loc_82365424;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8236543c
	goto loc_8236543C;
loc_82365424:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8236e6c0
	ctx.lr = 0x8236542C;
	sub_8236E6C0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82365448
	if (!ctx.cr6.gt) goto loc_82365448;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8236543C:
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
loc_82365448:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e918
	ctx.lr = 0x82365458;
	sub_8236E918(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e968
	ctx.lr = 0x82365464;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365360
	if (!ctx.cr0.eq) goto loc_82365360;
loc_8236546C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365498
	if (ctx.cr0.eq) goto loc_82365498;
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,2576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2576, ctx.xer);
	// bgt cr6,0x8236548c
	if (ctx.cr6.gt) goto loc_8236548C;
	// li r11,2576
	ctx.r11.s64 = 2576;
loc_8236548C:
	// stw r11,3100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3100, ctx.r11.u32);
	// stw r11,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r11.u32);
	// stw r16,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r16.u32);
loc_82365498:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r15,1288
	ctx.r15.s64 = 1288;
	// beq 0x823654e8
	if (ctx.cr0.eq) goto loc_823654E8;
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,2576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2576, ctx.xer);
	// bgt cr6,0x823654bc
	if (ctx.cr6.gt) goto loc_823654BC;
	// li r11,2576
	ctx.r11.s64 = 2576;
loc_823654BC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,3100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3100, ctx.r11.u32);
	// stw r15,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r15.u32);
	// stw r16,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r16.u32);
	// lfs f0,5260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823654e8
	if (!ctx.cr6.gt) goto loc_823654E8;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_823654E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// bl 0x8236e760
	ctx.lr = 0x823654F8;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e900
	ctx.lr = 0x82365508;
	sub_8236E900(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e968
	ctx.lr = 0x82365514;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823658fc
	if (ctx.cr0.eq) goto loc_823658FC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r18,r11,-26096
	ctx.r18.s64 = ctx.r11.s64 + -26096;
	// addi r17,r10,-26136
	ctx.r17.s64 = ctx.r10.s64 + -26136;
	// addi r20,r9,-26168
	ctx.r20.s64 = ctx.r9.s64 + -26168;
	// addi r27,r8,29112
	ctx.r27.s64 = ctx.r8.s64 + 29112;
	// addi r24,r7,-26184
	ctx.r24.s64 = ctx.r7.s64 + -26184;
loc_82365544:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823658fc
	if (!ctx.cr0.eq) goto loc_823658FC;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82363e08
	ctx.lr = 0x82365554;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// beq 0x823658d8
	if (ctx.cr0.eq) goto loc_823658D8;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_8236557C:
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
	// bne 0x8236557c
	if (!ctx.cr0.eq) goto loc_8236557C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82365734
	if (!ctx.cr0.eq) goto loc_82365734;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823655BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r14,3092(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823655D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3088);
	// lwz r10,3104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// subf r11,r14,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r14.s64;
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r11,r11,r3
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// bge cr6,0x82365610
	if (!ctx.cr6.lt) goto loc_82365610;
	// subfc r11,r15,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r15.u32;
	ctx.r11.s64 = ctx.r26.s64 - ctx.r15.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82365614
	goto loc_82365614;
loc_82365610:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82365614:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82365688
	if (ctx.cr0.eq) goto loc_82365688;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82365628:
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
	// bne 0x82365628
	if (!ctx.cr0.eq) goto loc_82365628;
	// lwz r14,284(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823695f0
	ctx.lr = 0x82365658;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365680
	if (ctx.cr0.eq) goto loc_82365680;
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// bl 0x8236e690
	ctx.lr = 0x82365674;
	sub_8236E690(ctx, base);
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x823658a0
	goto loc_823658A0;
loc_82365680:
	// li r8,212
	ctx.r8.s64 = 212;
	// b 0x823658b0
	goto loc_823658B0;
loc_82365688:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236572c
	if (ctx.cr0.eq) goto loc_8236572C;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82365698:
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
	// bne 0x82365698
	if (!ctx.cr0.eq) goto loc_82365698;
	// lwz r14,284(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823695f0
	ctx.lr = 0x823656C8;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365724
	if (ctx.cr0.eq) goto loc_82365724;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366380
	ctx.lr = 0x823656D8;
	sub_82366380(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,223
	ctx.r8.s64 = 223;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823656FC;
	sub_82372320(ctx, base);
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// bl 0x8236e690
	ctx.lr = 0x82365710;
	sub_8236E690(ctx, base);
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// li r19,1
	ctx.r19.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
	// b 0x823658cc
	goto loc_823658CC;
loc_82365724:
	// li r8,234
	ctx.r8.s64 = 234;
	// b 0x823658b0
	goto loc_823658B0;
loc_8236572C:
	// lwz r14,284(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// b 0x823658cc
	goto loc_823658CC;
loc_82365734:
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// lbz r10,17(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823657c4
	if (ctx.cr6.lt) goto loc_823657C4;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82365774
	if (ctx.cr6.eq) goto loc_82365774;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_82365754:
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
	// bne 0x82365754
	if (!ctx.cr0.eq) goto loc_82365754;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82365774:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823695f0
	ctx.lr = 0x82365780;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823657bc
	if (ctx.cr0.eq) goto loc_823657BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366380
	ctx.lr = 0x82365790;
	sub_82366380(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,250
	ctx.r8.s64 = 250;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823657B4;
	sub_82372320(ctx, base);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// b 0x82365870
	goto loc_82365870;
loc_823657BC:
	// li r8,261
	ctx.r8.s64 = 261;
	// b 0x823658b0
	goto loc_823658B0;
loc_823657C4:
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236e6c0
	ctx.lr = 0x823657D0;
	sub_8236E6C0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823658d0
	if (!ctx.cr6.gt) goto loc_823658D0;
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// lwz r10,3092(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823658d0
	if (ctx.cr0.eq) goto loc_823658D0;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8236582c
	if (ctx.cr6.eq) goto loc_8236582C;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_8236580C:
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
	// bne 0x8236580c
	if (!ctx.cr0.eq) goto loc_8236580C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_8236582C:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823695f0
	ctx.lr = 0x82365838;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823658ac
	if (ctx.cr0.eq) goto loc_823658AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366380
	ctx.lr = 0x82365848;
	sub_82366380(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,275
	ctx.r8.s64 = 275;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8236586C;
	sub_82372320(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82365870:
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// stb r16,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r16.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// bl 0x8236e690
	ctx.lr = 0x82365884;
	sub_8236E690(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_823658A0:
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
	// b 0x823658d0
	goto loc_823658D0;
loc_823658AC:
	// li r8,286
	ctx.r8.s64 = 286;
loc_823658B0:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823658CC;
	sub_82372320(ctx, base);
loc_823658CC:
	// li r25,1
	ctx.r25.s64 = 1;
loc_823658D0:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82375128
	ctx.lr = 0x823658D8;
	sub_82375128(ctx, base);
loc_823658D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e918
	ctx.lr = 0x823658E8;
	sub_8236E918(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e968
	ctx.lr = 0x823658F4;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365544
	if (!ctx.cr0.eq) goto loc_82365544;
loc_823658FC:
	// clrlwi. r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236594c
	if (!ctx.cr0.eq) goto loc_8236594C;
	// addi r29,r30,3112
	ctx.r29.s64 = ctx.r30.s64 + 3112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236e6c0
	ctx.lr = 0x82365910;
	sub_8236E6C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82365954
	if (!ctx.cr6.gt) goto loc_82365954;
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,5152
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5152, ctx.xer);
	// bgt cr6,0x82365938
	if (ctx.cr6.gt) goto loc_82365938;
	// li r11,5152
	ctx.r11.s64 = 5152;
loc_82365938:
	// stw r11,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r16,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r16.u32);
	// stw r16,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r16.u32);
	// b 0x82365950
	goto loc_82365950;
loc_8236594C:
	// addi r3,r30,3112
	ctx.r3.s64 = ctx.r30.s64 + 3112;
loc_82365950:
	// bl 0x8236e690
	ctx.lr = 0x82365954;
	sub_8236E690(ctx, base);
loc_82365954:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236595C"))) PPC_WEAK_FUNC(sub_8236595C);
PPC_FUNC_IMPL(__imp__sub_8236595C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82375128
	ctx.lr = 0x82365974;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365984"))) PPC_WEAK_FUNC(sub_82365984);
PPC_FUNC_IMPL(__imp__sub_82365984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365988"))) PPC_WEAK_FUNC(sub_82365988);
PPC_FUNC_IMPL(__imp__sub_82365988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82365990;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x823659ec
	goto loc_823659EC;
loc_823659AC:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365a00
	if (ctx.cr0.eq) goto loc_82365A00;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x823659BC;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x8236e918
	ctx.lr = 0x823659EC;
	sub_8236E918(ctx, base);
loc_823659EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236e968
	ctx.lr = 0x823659F8;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823659ac
	if (!ctx.cr0.eq) goto loc_823659AC;
loc_82365A00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365A0C"))) PPC_WEAK_FUNC(sub_82365A0C);
PPC_FUNC_IMPL(__imp__sub_82365A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365A10"))) PPC_WEAK_FUNC(sub_82365A10);
PPC_FUNC_IMPL(__imp__sub_82365A10) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82365a90
	if (ctx.cr0.eq) goto loc_82365A90;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365a50
	if (!ctx.cr6.eq) goto loc_82365A50;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82365a5c
	goto loc_82365A5C;
loc_82365A50:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82365A5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365a74
	if (!ctx.cr6.eq) goto loc_82365A74;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82365a80
	goto loc_82365A80;
loc_82365A74:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82365A80:
	// bl 0x8236a3f0
	ctx.lr = 0x82365A84;
	sub_8236A3F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82365A90:
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

__attribute__((alias("__imp__sub_82365AA4"))) PPC_WEAK_FUNC(sub_82365AA4);
PPC_FUNC_IMPL(__imp__sub_82365AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365AA8"))) PPC_WEAK_FUNC(sub_82365AA8);
PPC_FUNC_IMPL(__imp__sub_82365AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25800(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25800);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82365AB8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363e08
	ctx.lr = 0x82365ADC;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365b80
	if (!ctx.cr6.eq) goto loc_82365B80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363e08
	ctx.lr = 0x82365B00;
	sub_82363E08(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82366378
	ctx.lr = 0x82365B14;
	sub_82366378(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82365b48
	if (ctx.cr6.eq) goto loc_82365B48;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82365B28:
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
	// bne 0x82365b28
	if (!ctx.cr0.eq) goto loc_82365B28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82365B48:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82365098
	ctx.lr = 0x82365B54;
	sub_82365098(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365270
	ctx.lr = 0x82365B60;
	sub_82365270(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82365B68;
	sub_82375128(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e918
	ctx.lr = 0x82365B78;
	sub_8236E918(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82365bb4
	goto loc_82365BB4;
loc_82365B80:
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
	// addi r6,r8,-26008
	ctx.r6.s64 = ctx.r8.s64 + -26008;
	// addi r9,r11,-25852
	ctx.r9.s64 = ctx.r11.s64 + -25852;
	// addi r7,r10,-25880
	ctx.r7.s64 = ctx.r10.s64 + -25880;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,62
	ctx.r8.s64 = 62;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365BB4;
	sub_82372320(ctx, base);
loc_82365BB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82375128
	ctx.lr = 0x82365BBC;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365AB0"))) PPC_WEAK_FUNC(sub_82365AB0);
PPC_FUNC_IMPL(__imp__sub_82365AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82365AB8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363e08
	ctx.lr = 0x82365ADC;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365b80
	if (!ctx.cr6.eq) goto loc_82365B80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363e08
	ctx.lr = 0x82365B00;
	sub_82363E08(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82366378
	ctx.lr = 0x82365B14;
	sub_82366378(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82365b48
	if (ctx.cr6.eq) goto loc_82365B48;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82365B28:
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
	// bne 0x82365b28
	if (!ctx.cr0.eq) goto loc_82365B28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82365B48:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82365098
	ctx.lr = 0x82365B54;
	sub_82365098(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365270
	ctx.lr = 0x82365B60;
	sub_82365270(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82365B68;
	sub_82375128(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e918
	ctx.lr = 0x82365B78;
	sub_8236E918(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82365bb4
	goto loc_82365BB4;
loc_82365B80:
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
	// addi r6,r8,-26008
	ctx.r6.s64 = ctx.r8.s64 + -26008;
	// addi r9,r11,-25852
	ctx.r9.s64 = ctx.r11.s64 + -25852;
	// addi r7,r10,-25880
	ctx.r7.s64 = ctx.r10.s64 + -25880;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,62
	ctx.r8.s64 = 62;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365BB4;
	sub_82372320(ctx, base);
loc_82365BB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82375128
	ctx.lr = 0x82365BBC;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365BC8"))) PPC_WEAK_FUNC(sub_82365BC8);
PPC_FUNC_IMPL(__imp__sub_82365BC8) {
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
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82375128
	ctx.lr = 0x82365BE0;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365BF0"))) PPC_WEAK_FUNC(sub_82365BF0);
PPC_FUNC_IMPL(__imp__sub_82365BF0) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823603b0
	ctx.lr = 0x82365C08;
	sub_823603B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365C18"))) PPC_WEAK_FUNC(sub_82365C18);
PPC_FUNC_IMPL(__imp__sub_82365C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25592(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25592);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82365C28;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r4.u32);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82369a48
	ctx.lr = 0x82365C4C;
	sub_82369A48(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x82365C60;
	sub_8236E9D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8236e760
	ctx.lr = 0x82365C70;
	sub_8236E760(ctx, base);
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8236e930
	ctx.lr = 0x82365C80;
	sub_8236E930(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82365C8C;
	sub_8236E948(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// clrlwi. r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r24,r11,-25772
	ctx.r24.s64 = ctx.r11.s64 + -25772;
	// addi r23,r10,-26984
	ctx.r23.s64 = ctx.r10.s64 + -26984;
	// addi r22,r9,-26008
	ctx.r22.s64 = ctx.r9.s64 + -26008;
	// addi r21,r8,-25632
	ctx.r21.s64 = ctx.r8.s64 + -25632;
	// beq 0x82365ce0
	if (ctx.cr0.eq) goto loc_82365CE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r9,r11,-25656
	ctx.r9.s64 = ctx.r11.s64 + -25656;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,325
	ctx.r8.s64 = 325;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365CDC;
	sub_82372320(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82365CE0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823660c8
	if (ctx.cr0.eq) goto loc_823660C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363e08
	ctx.lr = 0x82365CF0;
	sub_82363E08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82365CFC;
	sub_82363E08(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x823660c8
	if (ctx.cr6.lt) goto loc_823660C8;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82365D0C;
	sub_82363E08(ctx, base);
	// srawi r10,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 7;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// lfs f31,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f31.f64 = double(temp.f32);
	// subf r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365d54
	if (ctx.cr6.eq) goto loc_82365D54;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82365d54
	if (!ctx.cr6.eq) goto loc_82365D54;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8236e6c0
	ctx.lr = 0x82365D4C;
	sub_8236E6C0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82365d58
	goto loc_82365D58;
loc_82365D54:
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82365D58:
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82367438
	ctx.lr = 0x82365D60;
	sub_82367438(ctx, base);
	// stw r3,3088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3088, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r18,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r18.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// bl 0x8236e760
	ctx.lr = 0x82365D78;
	sub_8236E760(ctx, base);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e900
	ctx.lr = 0x82365D88;
	sub_8236E900(ctx, base);
loc_82365D88:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82363e08
	ctx.lr = 0x82365D90;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// beq 0x82365dec
	if (ctx.cr0.eq) goto loc_82365DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x8236e918
	ctx.lr = 0x82365DE4;
	sub_8236E918(ctx, base);
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x82365d88
	if (ctx.cr6.lt) goto loc_82365D88;
loc_82365DEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// bl 0x8236e760
	ctx.lr = 0x82365DFC;
	sub_8236E760(ctx, base);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e900
	ctx.lr = 0x82365E0C;
	sub_8236E900(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e988
	ctx.lr = 0x82365E18;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365ec8
	if (ctx.cr0.eq) goto loc_82365EC8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r11,-25672
	ctx.r28.s64 = ctx.r11.s64 + -25672;
loc_82365E28:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82363e08
	ctx.lr = 0x82365E30;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365e80
	if (ctx.cr6.eq) goto loc_82365E80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82350190
	ctx.lr = 0x82365E74;
	sub_82350190(ctx, base);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8236e710
	ctx.lr = 0x82365E7C;
	sub_8236E710(ctx, base);
	// b 0x82365ea4
	goto loc_82365EA4;
loc_82365E80:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,394
	ctx.r8.s64 = 394;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365EA0;
	sub_82372320(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82365EA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8236e918
	ctx.lr = 0x82365EB4;
	sub_8236E918(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e988
	ctx.lr = 0x82365EC0;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365e28
	if (!ctx.cr0.eq) goto loc_82365E28;
loc_82365EC8:
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82369a58
	ctx.lr = 0x82365ED0;
	sub_82369A58(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8236e760
	ctx.lr = 0x82365EE0;
	sub_8236E760(ctx, base);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e900
	ctx.lr = 0x82365EF0;
	sub_8236E900(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823660b4
	if (ctx.cr0.eq) goto loc_823660B4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r26,r11,-25700
	ctx.r26.s64 = ctx.r11.s64 + -25700;
	// addi r25,r10,-25720
	ctx.r25.s64 = ctx.r10.s64 + -25720;
loc_82365F08:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823660b4
	if (ctx.cr6.eq) goto loc_823660B4;
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8236e760
	ctx.lr = 0x82365F24;
	sub_8236E760(ctx, base);
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x8236e900
	ctx.lr = 0x82365F34;
	sub_8236E900(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8236e760
	ctx.lr = 0x82365F40;
	sub_8236E760(ctx, base);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8236e900
	ctx.lr = 0x82365F50;
	sub_8236E900(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8236605c
	goto loc_8236605C;
loc_82365F5C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82363e08
	ctx.lr = 0x82365F64;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365fa4
	if (!ctx.cr6.eq) goto loc_82365FA4;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,415
	ctx.r8.s64 = 415;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365FA0;
	sub_82372320(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82365FA4:
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82365fd4
	if (!ctx.cr0.eq) goto loc_82365FD4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,422
	ctx.r8.s64 = 422;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365FD0;
	sub_82372320(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82365FD4:
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e968
	ctx.lr = 0x82365FE0;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366024
	if (ctx.cr0.eq) goto loc_82366024;
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r10,18(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r11.u8);
	// beq 0x8236604c
	if (ctx.cr0.eq) goto loc_8236604C;
	// stb r18,18(r29)
	PPC_STORE_U8(ctx.r29.u32 + 18, ctx.r18.u8);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236e6c0
	ctx.lr = 0x82366010;
	sub_8236E6C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8236604c
	if (!ctx.cr6.eq) goto loc_8236604C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236e690
	ctx.lr = 0x82366020;
	sub_8236E690(ctx, base);
	// b 0x8236604c
	goto loc_8236604C;
loc_82366024:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stb r11,18(r29)
	PPC_STORE_U8(ctx.r29.u32 + 18, ctx.r11.u8);
	// bl 0x8236e690
	ctx.lr = 0x82366034;
	sub_8236E690(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
loc_8236604C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8236e918
	ctx.lr = 0x8236605C;
	sub_8236E918(ctx, base);
loc_8236605C:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e988
	ctx.lr = 0x82366068;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365f5c
	if (!ctx.cr0.eq) goto loc_82365F5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8236e760
	ctx.lr = 0x8236607C;
	sub_8236E760(ctx, base);
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x8236e900
	ctx.lr = 0x8236608C;
	sub_8236E900(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82365a10
	ctx.lr = 0x823660AC;
	sub_82365A10(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365f08
	if (!ctx.cr0.eq) goto loc_82365F08;
loc_823660B4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82364fb8
	ctx.lr = 0x823660C0;
	sub_82364FB8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823660C8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82375128
	ctx.lr = 0x823660D0;
	sub_82375128(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365C20"))) PPC_WEAK_FUNC(sub_82365C20);
PPC_FUNC_IMPL(__imp__sub_82365C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82365C28;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r4.u32);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82369a48
	ctx.lr = 0x82365C4C;
	sub_82369A48(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x82365C60;
	sub_8236E9D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8236e760
	ctx.lr = 0x82365C70;
	sub_8236E760(ctx, base);
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8236e930
	ctx.lr = 0x82365C80;
	sub_8236E930(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82365C8C;
	sub_8236E948(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// clrlwi. r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r24,r11,-25772
	ctx.r24.s64 = ctx.r11.s64 + -25772;
	// addi r23,r10,-26984
	ctx.r23.s64 = ctx.r10.s64 + -26984;
	// addi r22,r9,-26008
	ctx.r22.s64 = ctx.r9.s64 + -26008;
	// addi r21,r8,-25632
	ctx.r21.s64 = ctx.r8.s64 + -25632;
	// beq 0x82365ce0
	if (ctx.cr0.eq) goto loc_82365CE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r9,r11,-25656
	ctx.r9.s64 = ctx.r11.s64 + -25656;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,325
	ctx.r8.s64 = 325;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365CDC;
	sub_82372320(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82365CE0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823660c8
	if (ctx.cr0.eq) goto loc_823660C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363e08
	ctx.lr = 0x82365CF0;
	sub_82363E08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82365CFC;
	sub_82363E08(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x823660c8
	if (ctx.cr6.lt) goto loc_823660C8;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82365D0C;
	sub_82363E08(ctx, base);
	// srawi r10,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 7;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// lfs f31,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f31.f64 = double(temp.f32);
	// subf r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365d54
	if (ctx.cr6.eq) goto loc_82365D54;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82365d54
	if (!ctx.cr6.eq) goto loc_82365D54;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8236e6c0
	ctx.lr = 0x82365D4C;
	sub_8236E6C0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82365d58
	goto loc_82365D58;
loc_82365D54:
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82365D58:
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82367438
	ctx.lr = 0x82365D60;
	sub_82367438(ctx, base);
	// stw r3,3088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3088, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r18,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r18.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// bl 0x8236e760
	ctx.lr = 0x82365D78;
	sub_8236E760(ctx, base);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e900
	ctx.lr = 0x82365D88;
	sub_8236E900(ctx, base);
loc_82365D88:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82363e08
	ctx.lr = 0x82365D90;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// beq 0x82365dec
	if (ctx.cr0.eq) goto loc_82365DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,3092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3092);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r11,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x8236e918
	ctx.lr = 0x82365DE4;
	sub_8236E918(ctx, base);
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x82365d88
	if (ctx.cr6.lt) goto loc_82365D88;
loc_82365DEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// bl 0x8236e760
	ctx.lr = 0x82365DFC;
	sub_8236E760(ctx, base);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e900
	ctx.lr = 0x82365E0C;
	sub_8236E900(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e988
	ctx.lr = 0x82365E18;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365ec8
	if (ctx.cr0.eq) goto loc_82365EC8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r11,-25672
	ctx.r28.s64 = ctx.r11.s64 + -25672;
loc_82365E28:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82363e08
	ctx.lr = 0x82365E30;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365e80
	if (ctx.cr6.eq) goto loc_82365E80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82350190
	ctx.lr = 0x82365E74;
	sub_82350190(ctx, base);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8236e710
	ctx.lr = 0x82365E7C;
	sub_8236E710(ctx, base);
	// b 0x82365ea4
	goto loc_82365EA4;
loc_82365E80:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,394
	ctx.r8.s64 = 394;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365EA0;
	sub_82372320(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82365EA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8236e918
	ctx.lr = 0x82365EB4;
	sub_8236E918(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e988
	ctx.lr = 0x82365EC0;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365e28
	if (!ctx.cr0.eq) goto loc_82365E28;
loc_82365EC8:
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// bl 0x82369a58
	ctx.lr = 0x82365ED0;
	sub_82369A58(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8236e760
	ctx.lr = 0x82365EE0;
	sub_8236E760(ctx, base);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e900
	ctx.lr = 0x82365EF0;
	sub_8236E900(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823660b4
	if (ctx.cr0.eq) goto loc_823660B4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r26,r11,-25700
	ctx.r26.s64 = ctx.r11.s64 + -25700;
	// addi r25,r10,-25720
	ctx.r25.s64 = ctx.r10.s64 + -25720;
loc_82365F08:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823660b4
	if (ctx.cr6.eq) goto loc_823660B4;
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8236e760
	ctx.lr = 0x82365F24;
	sub_8236E760(ctx, base);
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x8236e900
	ctx.lr = 0x82365F34;
	sub_8236E900(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8236e760
	ctx.lr = 0x82365F40;
	sub_8236E760(ctx, base);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8236e900
	ctx.lr = 0x82365F50;
	sub_8236E900(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8236605c
	goto loc_8236605C;
loc_82365F5C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82363e08
	ctx.lr = 0x82365F64;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365fa4
	if (!ctx.cr6.eq) goto loc_82365FA4;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,415
	ctx.r8.s64 = 415;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365FA0;
	sub_82372320(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82365FA4:
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82365fd4
	if (!ctx.cr0.eq) goto loc_82365FD4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r8,422
	ctx.r8.s64 = 422;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82365FD0;
	sub_82372320(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82365FD4:
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e968
	ctx.lr = 0x82365FE0;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366024
	if (ctx.cr0.eq) goto loc_82366024;
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r10,18(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r11.u8);
	// beq 0x8236604c
	if (ctx.cr0.eq) goto loc_8236604C;
	// stb r18,18(r29)
	PPC_STORE_U8(ctx.r29.u32 + 18, ctx.r18.u8);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236e6c0
	ctx.lr = 0x82366010;
	sub_8236E6C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8236604c
	if (!ctx.cr6.eq) goto loc_8236604C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236e690
	ctx.lr = 0x82366020;
	sub_8236E690(ctx, base);
	// b 0x8236604c
	goto loc_8236604C;
loc_82366024:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stb r11,18(r29)
	PPC_STORE_U8(ctx.r29.u32 + 18, ctx.r11.u8);
	// bl 0x8236e690
	ctx.lr = 0x82366034;
	sub_8236E690(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
loc_8236604C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8236e918
	ctx.lr = 0x8236605C;
	sub_8236E918(ctx, base);
loc_8236605C:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e988
	ctx.lr = 0x82366068;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365f5c
	if (!ctx.cr0.eq) goto loc_82365F5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8236e760
	ctx.lr = 0x8236607C;
	sub_8236E760(ctx, base);
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x8236e900
	ctx.lr = 0x8236608C;
	sub_8236E900(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82365a10
	ctx.lr = 0x823660AC;
	sub_82365A10(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365f08
	if (!ctx.cr0.eq) goto loc_82365F08;
loc_823660B4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82364fb8
	ctx.lr = 0x823660C0;
	sub_82364FB8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823660C8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82375128
	ctx.lr = 0x823660D0;
	sub_82375128(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823660E0"))) PPC_WEAK_FUNC(sub_823660E0);
PPC_FUNC_IMPL(__imp__sub_823660E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82375128
	ctx.lr = 0x823660F8;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366108"))) PPC_WEAK_FUNC(sub_82366108);
PPC_FUNC_IMPL(__imp__sub_82366108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82366110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82366140
	goto loc_82366140;
loc_8236611C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq 0x8236613c
	if (ctx.cr0.eq) goto loc_8236613C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82366134;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8236613C;
	sub_8236A3F0(ctx, base);
loc_8236613C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82366140:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236611c
	if (!ctx.cr6.eq) goto loc_8236611C;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236615C"))) PPC_WEAK_FUNC(sub_8236615C);
PPC_FUNC_IMPL(__imp__sub_8236615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366160"))) PPC_WEAK_FUNC(sub_82366160);
PPC_FUNC_IMPL(__imp__sub_82366160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25520(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25520);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82366170;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366230
	if (ctx.cr6.eq) goto loc_82366230;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82366198:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82366230
	if (ctx.cr6.eq) goto loc_82366230;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x823689c8
	ctx.lr = 0x823661B0;
	sub_823689C8(ctx, base);
	// lhz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366378
	ctx.lr = 0x823661C0;
	sub_82366378(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823661f0
	if (ctx.cr6.eq) goto loc_823661F0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823661D0:
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
	// bne 0x823661d0
	if (!ctx.cr0.eq) goto loc_823661D0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823661F0:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823695f0
	ctx.lr = 0x823661FC;
	sub_823695F0(ctx, base);
	// clrlwi. r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82366224
	if (ctx.cr0.eq) goto loc_82366224;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r11.u16);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82368e48
	ctx.lr = 0x82366224;
	sub_82368E48(ctx, base);
loc_82366224:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366198
	if (!ctx.cr6.eq) goto loc_82366198;
loc_82366230:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82366238;
	sub_82375128(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366168"))) PPC_WEAK_FUNC(sub_82366168);
PPC_FUNC_IMPL(__imp__sub_82366168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82366170;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366230
	if (ctx.cr6.eq) goto loc_82366230;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82366198:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82366230
	if (ctx.cr6.eq) goto loc_82366230;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x823689c8
	ctx.lr = 0x823661B0;
	sub_823689C8(ctx, base);
	// lhz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366378
	ctx.lr = 0x823661C0;
	sub_82366378(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823661f0
	if (ctx.cr6.eq) goto loc_823661F0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823661D0:
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
	// bne 0x823661d0
	if (!ctx.cr0.eq) goto loc_823661D0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823661F0:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823695f0
	ctx.lr = 0x823661FC;
	sub_823695F0(ctx, base);
	// clrlwi. r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82366224
	if (ctx.cr0.eq) goto loc_82366224;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r11.u16);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82368e48
	ctx.lr = 0x82366224;
	sub_82368E48(ctx, base);
loc_82366224:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366198
	if (!ctx.cr6.eq) goto loc_82366198;
loc_82366230:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82366238;
	sub_82375128(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366240"))) PPC_WEAK_FUNC(sub_82366240);
PPC_FUNC_IMPL(__imp__sub_82366240) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82366258;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366268"))) PPC_WEAK_FUNC(sub_82366268);
PPC_FUNC_IMPL(__imp__sub_82366268) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823662b8
	if (ctx.cr6.eq) goto loc_823662B8;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
loc_82366298:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82368e48
	ctx.lr = 0x823662AC;
	sub_82368E48(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366298
	if (!ctx.cr6.eq) goto loc_82366298;
loc_823662B8:
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

__attribute__((alias("__imp__sub_823662D0"))) PPC_WEAK_FUNC(sub_823662D0);
PPC_FUNC_IMPL(__imp__sub_823662D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24968
	ctx.r10.s64 = ctx.r10.s64 + -24968;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823662F4"))) PPC_WEAK_FUNC(sub_823662F4);
PPC_FUNC_IMPL(__imp__sub_823662F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823662F8"))) PPC_WEAK_FUNC(sub_823662F8);
PPC_FUNC_IMPL(__imp__sub_823662F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25448(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25448);
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
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82364358
	ctx.lr = 0x82366330;
	sub_82364358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82366338;
	sub_82375128(ctx, base);
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

__attribute__((alias("__imp__sub_82366300"))) PPC_WEAK_FUNC(sub_82366300);
PPC_FUNC_IMPL(__imp__sub_82366300) {
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
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82364358
	ctx.lr = 0x82366330;
	sub_82364358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82366338;
	sub_82375128(ctx, base);
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

__attribute__((alias("__imp__sub_82366350"))) PPC_WEAK_FUNC(sub_82366350);
PPC_FUNC_IMPL(__imp__sub_82366350) {
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
	// bl 0x82375128
	ctx.lr = 0x82366368;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366378"))) PPC_WEAK_FUNC(sub_82366378);
PPC_FUNC_IMPL(__imp__sub_82366378) {
	PPC_FUNC_PROLOGUE();
	// sth r4,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366380"))) PPC_WEAK_FUNC(sub_82366380);
PPC_FUNC_IMPL(__imp__sub_82366380) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,22(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366388"))) PPC_WEAK_FUNC(sub_82366388);
PPC_FUNC_IMPL(__imp__sub_82366388) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366390"))) PPC_WEAK_FUNC(sub_82366390);
PPC_FUNC_IMPL(__imp__sub_82366390) {
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
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8236ead8
	ctx.lr = 0x823663B0;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823663dc
	if (ctx.cr0.eq) goto loc_823663DC;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823663C8:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823663c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823663C8;
loc_823663DC:
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

__attribute__((alias("__imp__sub_823663F0"))) PPC_WEAK_FUNC(sub_823663F0);
PPC_FUNC_IMPL(__imp__sub_823663F0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x8236640C;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25392
	ctx.r10.s64 = ctx.r10.s64 + -25392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82366440"))) PPC_WEAK_FUNC(sub_82366440);
PPC_FUNC_IMPL(__imp__sub_82366440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25344(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25344);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82366450;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82369848
	ctx.lr = 0x8236647C;
	sub_82369848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// addi r11,r11,-25392
	ctx.r11.s64 = ctx.r11.s64 + -25392;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// beq cr6,0x823664c8
	if (ctx.cr6.eq) goto loc_823664C8;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823664A8:
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
	// bne 0x823664a8
	if (!ctx.cr0.eq) goto loc_823664A8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823664C8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r28,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r28.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r10,22(r29)
	PPC_STORE_U16(ctx.r29.u32 + 22, ctx.r10.u16);
	// beq cr6,0x823665b8
	if (ctx.cr6.eq) goto loc_823665B8;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x8235d498
	ctx.lr = 0x823664E8;
	sub_8235D498(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236651c
	if (ctx.cr0.eq) goto loc_8236651C;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x823664FC;
	sub_8235D3C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236651c
	if (ctx.cr6.eq) goto loc_8236651C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366520
	if (!ctx.cr0.eq) goto loc_82366520;
loc_8236651C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366520:
	// clrlwi. r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82366538
	if (ctx.cr0.eq) goto loc_82366538;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// rlwinm r27,r27,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x821c0630
	ctx.lr = 0x82366538;
	sub_821C0630(ctx, base);
loc_82366538:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236654c
	if (ctx.cr0.eq) goto loc_8236654C;
	// lbz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r11.u8);
loc_8236654C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235d4e0
	ctx.lr = 0x82366554;
	sub_8235D4E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236658c
	if (ctx.cr0.eq) goto loc_8236658C;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235d4a8
	ctx.lr = 0x82366568;
	sub_8235D4A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366590
	if (!ctx.cr0.eq) goto loc_82366590;
loc_8236658C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366590:
	// rlwinm. r10,r27,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x823665a4
	if (ctx.cr0.eq) goto loc_823665A4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x823665A4;
	sub_82375128(ctx, base);
loc_823665A4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823665b8
	if (ctx.cr0.eq) goto loc_823665B8;
	// lbz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r11.u8);
loc_823665B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x823665C0;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366448"))) PPC_WEAK_FUNC(sub_82366448);
PPC_FUNC_IMPL(__imp__sub_82366448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82366450;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82369848
	ctx.lr = 0x8236647C;
	sub_82369848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// addi r11,r11,-25392
	ctx.r11.s64 = ctx.r11.s64 + -25392;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// beq cr6,0x823664c8
	if (ctx.cr6.eq) goto loc_823664C8;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823664A8:
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
	// bne 0x823664a8
	if (!ctx.cr0.eq) goto loc_823664A8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823664C8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r28,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r28.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r10,22(r29)
	PPC_STORE_U16(ctx.r29.u32 + 22, ctx.r10.u16);
	// beq cr6,0x823665b8
	if (ctx.cr6.eq) goto loc_823665B8;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x8235d498
	ctx.lr = 0x823664E8;
	sub_8235D498(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236651c
	if (ctx.cr0.eq) goto loc_8236651C;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x823664FC;
	sub_8235D3C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236651c
	if (ctx.cr6.eq) goto loc_8236651C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366520
	if (!ctx.cr0.eq) goto loc_82366520;
loc_8236651C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366520:
	// clrlwi. r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82366538
	if (ctx.cr0.eq) goto loc_82366538;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// rlwinm r27,r27,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x821c0630
	ctx.lr = 0x82366538;
	sub_821C0630(ctx, base);
loc_82366538:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236654c
	if (ctx.cr0.eq) goto loc_8236654C;
	// lbz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r11.u8);
loc_8236654C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235d4e0
	ctx.lr = 0x82366554;
	sub_8235D4E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236658c
	if (ctx.cr0.eq) goto loc_8236658C;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235d4a8
	ctx.lr = 0x82366568;
	sub_8235D4A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366590
	if (!ctx.cr0.eq) goto loc_82366590;
loc_8236658C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366590:
	// rlwinm. r10,r27,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x823665a4
	if (ctx.cr0.eq) goto loc_823665A4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x823665A4;
	sub_82375128(ctx, base);
loc_823665A4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823665b8
	if (ctx.cr0.eq) goto loc_823665B8;
	// lbz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r11.u8);
loc_823665B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x823665C0;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823665CC"))) PPC_WEAK_FUNC(sub_823665CC);
PPC_FUNC_IMPL(__imp__sub_823665CC) {
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
	ctx.lr = 0x823665E4;
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

__attribute__((alias("__imp__sub_823665F4"))) PPC_WEAK_FUNC(sub_823665F4);
PPC_FUNC_IMPL(__imp__sub_823665F4) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82369868
	ctx.lr = 0x8236660C;
	sub_82369868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236661C"))) PPC_WEAK_FUNC(sub_8236661C);
PPC_FUNC_IMPL(__imp__sub_8236661C) {
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
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x821c0630
	ctx.lr = 0x82366638;
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

__attribute__((alias("__imp__sub_82366648"))) PPC_WEAK_FUNC(sub_82366648);
PPC_FUNC_IMPL(__imp__sub_82366648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25264(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25264);
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
	// addi r11,r11,-25392
	ctx.r11.s64 = ctx.r11.s64 + -25392;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x821c0630
	ctx.lr = 0x82366684;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x8236668C;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_82366650"))) PPC_WEAK_FUNC(sub_82366650);
PPC_FUNC_IMPL(__imp__sub_82366650) {
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
	// addi r11,r11,-25392
	ctx.r11.s64 = ctx.r11.s64 + -25392;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x821c0630
	ctx.lr = 0x82366684;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x8236668C;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_823666A4"))) PPC_WEAK_FUNC(sub_823666A4);
PPC_FUNC_IMPL(__imp__sub_823666A4) {
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
	// bl 0x82369868
	ctx.lr = 0x823666BC;
	sub_82369868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823666CC"))) PPC_WEAK_FUNC(sub_823666CC);
PPC_FUNC_IMPL(__imp__sub_823666CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823666D0"))) PPC_WEAK_FUNC(sub_823666D0);
PPC_FUNC_IMPL(__imp__sub_823666D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25200(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25200);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823666E0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82366758
	if (ctx.cr0.eq) goto loc_82366758;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8235d4a8
	ctx.lr = 0x82366710;
	sub_8235D4A8(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366750
	if (ctx.cr6.eq) goto loc_82366750;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8236db40
	ctx.lr = 0x82366724;
	sub_8236DB40(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82366744;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366750
	if (ctx.cr0.eq) goto loc_82366750;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82366750:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82366758;
	sub_82375128(ctx, base);
loc_82366758:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823666D8"))) PPC_WEAK_FUNC(sub_823666D8);
PPC_FUNC_IMPL(__imp__sub_823666D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823666E0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82366758
	if (ctx.cr0.eq) goto loc_82366758;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8235d4a8
	ctx.lr = 0x82366710;
	sub_8235D4A8(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366750
	if (ctx.cr6.eq) goto loc_82366750;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8236db40
	ctx.lr = 0x82366724;
	sub_8236DB40(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82366744;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366750
	if (ctx.cr0.eq) goto loc_82366750;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82366750:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82366758;
	sub_82375128(ctx, base);
loc_82366758:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366764"))) PPC_WEAK_FUNC(sub_82366764);
PPC_FUNC_IMPL(__imp__sub_82366764) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x8236677C;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236678C"))) PPC_WEAK_FUNC(sub_8236678C);
PPC_FUNC_IMPL(__imp__sub_8236678C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366790"))) PPC_WEAK_FUNC(sub_82366790);
PPC_FUNC_IMPL(__imp__sub_82366790) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823667C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823666d8
	ctx.lr = 0x823667D4;
	sub_823666D8(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
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

__attribute__((alias("__imp__sub_823667F0"))) PPC_WEAK_FUNC(sub_823667F0);
PPC_FUNC_IMPL(__imp__sub_823667F0) {
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
	// bl 0x82366650
	ctx.lr = 0x82366810;
	sub_82366650(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366820
	if (ctx.cr0.eq) goto loc_82366820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82366820;
	sub_8236A3F0(ctx, base);
loc_82366820:
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

__attribute__((alias("__imp__sub_8236683C"))) PPC_WEAK_FUNC(sub_8236683C);
PPC_FUNC_IMPL(__imp__sub_8236683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366840"))) PPC_WEAK_FUNC(sub_82366840);
PPC_FUNC_IMPL(__imp__sub_82366840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25120(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25120);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82366850;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82369970
	ctx.lr = 0x82366868;
	sub_82369970(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366aa4
	if (ctx.cr6.eq) goto loc_82366AA4;
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// addi r29,r27,20
	ctx.r29.s64 = ctx.r27.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823668A8;
	sub_8236EA10(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8235cfe8
	ctx.lr = 0x823668B8;
	sub_8235CFE8(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823668ec
	if (ctx.cr0.eq) goto loc_823668EC;
	// stb r3,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r3.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r31,81
	ctx.r7.s64 = ctx.r31.s64 + 81;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823668E0;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823668f0
	if (!ctx.cr0.eq) goto loc_823668F0;
loc_823668EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823668F0:
	// lhz r10,22(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 22);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r10.u16);
	// beq 0x8236694c
	if (ctx.cr0.eq) goto loc_8236694C;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,90
	ctx.r10.s64 = ctx.r31.s64 + 90;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82366910:
	// addi r9,r31,84
	ctx.r9.s64 = ctx.r31.s64 + 84;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82366910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82366910;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82366940;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366950
	if (!ctx.cr0.eq) goto loc_82366950;
loc_8236694C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366950:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823669dc
	if (ctx.cr0.eq) goto loc_823669DC;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8235d3c8
	ctx.lr = 0x82366970;
	sub_8235D3C8(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823669a0
	if (ctx.cr6.eq) goto loc_823669A0;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366990
	if (ctx.cr6.eq) goto loc_82366990;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82366990:
	// clrlwi. r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823669a0
	if (ctx.cr0.eq) goto loc_823669A0;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
loc_823669A0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823669cc
	if (ctx.cr0.eq) goto loc_823669CC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236eba0
	ctx.lr = 0x823669C0;
	sub_8236EBA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823669d0
	if (!ctx.cr0.eq) goto loc_823669D0;
loc_823669CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823669D0:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x823669DC;
	sub_821C0630(ctx, base);
loc_823669DC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366a44
	if (ctx.cr0.eq) goto loc_82366A44;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8235d4a8
	ctx.lr = 0x823669F4;
	sub_8235D4A8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366a0c
	if (ctx.cr6.eq) goto loc_82366A0C;
	// bl 0x8236db40
	ctx.lr = 0x82366A08;
	sub_8236DB40(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
loc_82366A0C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366a34
	if (ctx.cr0.eq) goto loc_82366A34;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236eba0
	ctx.lr = 0x82366A28;
	sub_8236EBA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366a38
	if (!ctx.cr0.eq) goto loc_82366A38;
loc_82366A34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366A38:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82366A44;
	sub_82375128(ctx, base);
loc_82366A44:
	// clrlwi. r29,r30,16
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82366aa4
	if (ctx.cr0.eq) goto loc_82366AA4;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8235d3c8
	ctx.lr = 0x82366A58;
	sub_8235D3C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821c0630
	ctx.lr = 0x82366A6C;
	sub_821C0630(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366a9c
	if (ctx.cr0.eq) goto loc_82366A9C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82366A90;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366aa0
	if (!ctx.cr0.eq) goto loc_82366AA0;
loc_82366A9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366AA0:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_82366AA4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366848"))) PPC_WEAK_FUNC(sub_82366848);
PPC_FUNC_IMPL(__imp__sub_82366848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82366850;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82369970
	ctx.lr = 0x82366868;
	sub_82369970(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366aa4
	if (ctx.cr6.eq) goto loc_82366AA4;
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// addi r29,r27,20
	ctx.r29.s64 = ctx.r27.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823668A8;
	sub_8236EA10(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8235cfe8
	ctx.lr = 0x823668B8;
	sub_8235CFE8(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823668ec
	if (ctx.cr0.eq) goto loc_823668EC;
	// stb r3,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r3.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r31,81
	ctx.r7.s64 = ctx.r31.s64 + 81;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823668E0;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823668f0
	if (!ctx.cr0.eq) goto loc_823668F0;
loc_823668EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823668F0:
	// lhz r10,22(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 22);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r10.u16);
	// beq 0x8236694c
	if (ctx.cr0.eq) goto loc_8236694C;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,90
	ctx.r10.s64 = ctx.r31.s64 + 90;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82366910:
	// addi r9,r31,84
	ctx.r9.s64 = ctx.r31.s64 + 84;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82366910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82366910;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82366940;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366950
	if (!ctx.cr0.eq) goto loc_82366950;
loc_8236694C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366950:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823669dc
	if (ctx.cr0.eq) goto loc_823669DC;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8235d3c8
	ctx.lr = 0x82366970;
	sub_8235D3C8(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823669a0
	if (ctx.cr6.eq) goto loc_823669A0;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366990
	if (ctx.cr6.eq) goto loc_82366990;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82366990:
	// clrlwi. r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823669a0
	if (ctx.cr0.eq) goto loc_823669A0;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
loc_823669A0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823669cc
	if (ctx.cr0.eq) goto loc_823669CC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236eba0
	ctx.lr = 0x823669C0;
	sub_8236EBA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823669d0
	if (!ctx.cr0.eq) goto loc_823669D0;
loc_823669CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823669D0:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x823669DC;
	sub_821C0630(ctx, base);
loc_823669DC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366a44
	if (ctx.cr0.eq) goto loc_82366A44;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8235d4a8
	ctx.lr = 0x823669F4;
	sub_8235D4A8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366a0c
	if (ctx.cr6.eq) goto loc_82366A0C;
	// bl 0x8236db40
	ctx.lr = 0x82366A08;
	sub_8236DB40(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
loc_82366A0C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366a34
	if (ctx.cr0.eq) goto loc_82366A34;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236eba0
	ctx.lr = 0x82366A28;
	sub_8236EBA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366a38
	if (!ctx.cr0.eq) goto loc_82366A38;
loc_82366A34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366A38:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82366A44;
	sub_82375128(ctx, base);
loc_82366A44:
	// clrlwi. r29,r30,16
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82366aa4
	if (ctx.cr0.eq) goto loc_82366AA4;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8235d3c8
	ctx.lr = 0x82366A58;
	sub_8235D3C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821c0630
	ctx.lr = 0x82366A6C;
	sub_821C0630(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366a9c
	if (ctx.cr0.eq) goto loc_82366A9C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82366A90;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366aa0
	if (!ctx.cr0.eq) goto loc_82366AA0;
loc_82366A9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366AA0:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_82366AA4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366AC0"))) PPC_WEAK_FUNC(sub_82366AC0);
PPC_FUNC_IMPL(__imp__sub_82366AC0) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82366AD8;
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

__attribute__((alias("__imp__sub_82366AE8"))) PPC_WEAK_FUNC(sub_82366AE8);
PPC_FUNC_IMPL(__imp__sub_82366AE8) {
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
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82366B00;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366B10"))) PPC_WEAK_FUNC(sub_82366B10);
PPC_FUNC_IMPL(__imp__sub_82366B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-25032(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -25032);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82366B20;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x823699c0
	ctx.lr = 0x82366B54;
	sub_823699C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x82366ba0
	if (ctx.cr0.eq) goto loc_82366BA0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ead8
	ctx.lr = 0x82366B7C;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366b94
	if (ctx.cr0.eq) goto loc_82366B94;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stb r10,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r10.u8);
loc_82366B94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82366ba4
	if (!ctx.cr6.eq) goto loc_82366BA4;
loc_82366BA0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366BA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// beq 0x82366be4
	if (ctx.cr0.eq) goto loc_82366BE4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r31,81
	ctx.r7.s64 = ctx.r31.s64 + 81;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ead8
	ctx.lr = 0x82366BCC;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366bd8
	if (ctx.cr0.eq) goto loc_82366BD8;
	// lbz r26,81(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
loc_82366BD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82366be8
	if (!ctx.cr6.eq) goto loc_82366BE8;
loc_82366BE4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366BE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r27,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r27.u16);
	// beq 0x82366c18
	if (ctx.cr0.eq) goto loc_82366C18;
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366390
	ctx.lr = 0x82366C0C;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366c1c
	if (!ctx.cr0.eq) goto loc_82366C1C;
loc_82366C18:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366C1C:
	// lhz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// sth r27,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r27.u16);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,22(r30)
	PPC_STORE_U16(ctx.r30.u32 + 22, ctx.r10.u16);
	// beq 0x82366c6c
	if (ctx.cr0.eq) goto loc_82366C6C;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366c64
	if (ctx.cr0.eq) goto loc_82366C64;
	// addi r7,r31,82
	ctx.r7.s64 = ctx.r31.s64 + 82;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ec40
	ctx.lr = 0x82366C58;
	sub_8236EC40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366c68
	if (!ctx.cr0.eq) goto loc_82366C68;
loc_82366C64:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366C68:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82366C6C:
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// sth r27,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r27.u16);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366cb0
	if (ctx.cr0.eq) goto loc_82366CB0;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366ca8
	if (ctx.cr0.eq) goto loc_82366CA8;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ec40
	ctx.lr = 0x82366C9C;
	sub_8236EC40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366cac
	if (!ctx.cr0.eq) goto loc_82366CAC;
loc_82366CA8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366CAC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82366CB0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366d28
	if (ctx.cr0.eq) goto loc_82366D28;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82366CC0;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82366cf4
	if (ctx.cr0.eq) goto loc_82366CF4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r8,r25,r22
	ctx.r8.u64 = ctx.r25.u64 + ctx.r22.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lhz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r6,82(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8235d120
	ctx.lr = 0x82366CEC;
	sub_8235D120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82366cf8
	goto loc_82366CF8;
loc_82366CF4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82366CF8:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82350190
	ctx.lr = 0x82366D00;
	sub_82350190(ctx, base);
	// lhz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addic r9,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// add r11,r8,r25
	ctx.r11.u64 = ctx.r8.u64 + ctx.r25.u64;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// subfe r3,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82366D28:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366B18"))) PPC_WEAK_FUNC(sub_82366B18);
PPC_FUNC_IMPL(__imp__sub_82366B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82366B20;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x823699c0
	ctx.lr = 0x82366B54;
	sub_823699C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x82366ba0
	if (ctx.cr0.eq) goto loc_82366BA0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ead8
	ctx.lr = 0x82366B7C;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366b94
	if (ctx.cr0.eq) goto loc_82366B94;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stb r10,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r10.u8);
loc_82366B94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82366ba4
	if (!ctx.cr6.eq) goto loc_82366BA4;
loc_82366BA0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366BA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// beq 0x82366be4
	if (ctx.cr0.eq) goto loc_82366BE4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r7,r31,81
	ctx.r7.s64 = ctx.r31.s64 + 81;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ead8
	ctx.lr = 0x82366BCC;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366bd8
	if (ctx.cr0.eq) goto loc_82366BD8;
	// lbz r26,81(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
loc_82366BD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82366be8
	if (!ctx.cr6.eq) goto loc_82366BE8;
loc_82366BE4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366BE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r27,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r27.u16);
	// beq 0x82366c18
	if (ctx.cr0.eq) goto loc_82366C18;
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366390
	ctx.lr = 0x82366C0C;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366c1c
	if (!ctx.cr0.eq) goto loc_82366C1C;
loc_82366C18:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366C1C:
	// lhz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// sth r27,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r27.u16);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,22(r30)
	PPC_STORE_U16(ctx.r30.u32 + 22, ctx.r10.u16);
	// beq 0x82366c6c
	if (ctx.cr0.eq) goto loc_82366C6C;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366c64
	if (ctx.cr0.eq) goto loc_82366C64;
	// addi r7,r31,82
	ctx.r7.s64 = ctx.r31.s64 + 82;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ec40
	ctx.lr = 0x82366C58;
	sub_8236EC40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366c68
	if (!ctx.cr0.eq) goto loc_82366C68;
loc_82366C64:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366C68:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82366C6C:
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// sth r27,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r27.u16);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366cb0
	if (ctx.cr0.eq) goto loc_82366CB0;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366ca8
	if (ctx.cr0.eq) goto loc_82366CA8;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ec40
	ctx.lr = 0x82366C9C;
	sub_8236EC40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82366cac
	if (!ctx.cr0.eq) goto loc_82366CAC;
loc_82366CA8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82366CAC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82366CB0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366d28
	if (ctx.cr0.eq) goto loc_82366D28;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82366CC0;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82366cf4
	if (ctx.cr0.eq) goto loc_82366CF4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r8,r25,r22
	ctx.r8.u64 = ctx.r25.u64 + ctx.r22.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lhz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r6,82(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8235d120
	ctx.lr = 0x82366CEC;
	sub_8235D120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82366cf8
	goto loc_82366CF8;
loc_82366CF4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82366CF8:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82350190
	ctx.lr = 0x82366D00;
	sub_82350190(ctx, base);
	// lhz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addic r9,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// add r11,r8,r25
	ctx.r11.u64 = ctx.r8.u64 + ctx.r25.u64;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// subfe r3,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82366D28:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366D30"))) PPC_WEAK_FUNC(sub_82366D30);
PPC_FUNC_IMPL(__imp__sub_82366D30) {
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82350110
	ctx.lr = 0x82366D48;
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

__attribute__((alias("__imp__sub_82366D58"))) PPC_WEAK_FUNC(sub_82366D58);
PPC_FUNC_IMPL(__imp__sub_82366D58) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82366b18
	ctx.lr = 0x82366D7C;
	sub_82366B18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366D8C"))) PPC_WEAK_FUNC(sub_82366D8C);
PPC_FUNC_IMPL(__imp__sub_82366D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366D90"))) PPC_WEAK_FUNC(sub_82366D90);
PPC_FUNC_IMPL(__imp__sub_82366D90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r10,-24968
	ctx.r10.s64 = ctx.r10.s64 + -24968;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82366108
	sub_82366108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366DA8"))) PPC_WEAK_FUNC(sub_82366DA8);
PPC_FUNC_IMPL(__imp__sub_82366DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24952(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24952);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82366DB8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82366e0c
	if (ctx.cr6.eq) goto loc_82366E0C;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// bl 0x823689c8
	ctx.lr = 0x82366DF8;
	sub_823689C8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82368e48
	ctx.lr = 0x82366E0C;
	sub_82368E48(ctx, base);
loc_82366E0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366DB0"))) PPC_WEAK_FUNC(sub_82366DB0);
PPC_FUNC_IMPL(__imp__sub_82366DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82366DB8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82366e0c
	if (ctx.cr6.eq) goto loc_82366E0C;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// bl 0x823689c8
	ctx.lr = 0x82366DF8;
	sub_823689C8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82368e48
	ctx.lr = 0x82366E0C;
	sub_82368E48(ctx, base);
loc_82366E0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366E18"))) PPC_WEAK_FUNC(sub_82366E18);
PPC_FUNC_IMPL(__imp__sub_82366E18) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366e48
	if (ctx.cr0.eq) goto loc_82366E48;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82375128
	ctx.lr = 0x82366E48;
	sub_82375128(ctx, base);
loc_82366E48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366E58"))) PPC_WEAK_FUNC(sub_82366E58);
PPC_FUNC_IMPL(__imp__sub_82366E58) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236e760
	ctx.lr = 0x82366E7C;
	sub_8236E760(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82366eb4
	if (ctx.cr6.eq) goto loc_82366EB4;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_82366E94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82368e48
	ctx.lr = 0x82366EA8;
	sub_82368E48(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366e94
	if (!ctx.cr6.eq) goto loc_82366E94;
loc_82366EB4:
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

__attribute__((alias("__imp__sub_82366ECC"))) PPC_WEAK_FUNC(sub_82366ECC);
PPC_FUNC_IMPL(__imp__sub_82366ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366ED0"))) PPC_WEAK_FUNC(sub_82366ED0);
PPC_FUNC_IMPL(__imp__sub_82366ED0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-24968
	ctx.r11.s64 = ctx.r11.s64 + -24968;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8236e760
	ctx.lr = 0x82366EFC;
	sub_8236E760(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82366F24"))) PPC_WEAK_FUNC(sub_82366F24);
PPC_FUNC_IMPL(__imp__sub_82366F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366F28"))) PPC_WEAK_FUNC(sub_82366F28);
PPC_FUNC_IMPL(__imp__sub_82366F28) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-24968
	ctx.r11.s64 = ctx.r11.s64 + -24968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82366108
	ctx.lr = 0x82366F58;
	sub_82366108(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366f68
	if (ctx.cr0.eq) goto loc_82366F68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82366F68;
	sub_8236A3F0(ctx, base);
loc_82366F68:
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

__attribute__((alias("__imp__sub_82366F84"))) PPC_WEAK_FUNC(sub_82366F84);
PPC_FUNC_IMPL(__imp__sub_82366F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366F88"))) PPC_WEAK_FUNC(sub_82366F88);
PPC_FUNC_IMPL(__imp__sub_82366F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24896(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24896);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82366F98;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// bl 0x82366380
	ctx.lr = 0x82366FB8;
	sub_82366380(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x82366FCC;
	sub_8236E9D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82366FD8;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366ff8
	if (ctx.cr0.eq) goto loc_82366FF8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82364358
	ctx.lr = 0x82366FF0;
	sub_82364358(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82366FF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82375128
	ctx.lr = 0x82367000;
	sub_82375128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366F90"))) PPC_WEAK_FUNC(sub_82366F90);
PPC_FUNC_IMPL(__imp__sub_82366F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82366F98;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// bl 0x82366380
	ctx.lr = 0x82366FB8;
	sub_82366380(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x82366FCC;
	sub_8236E9D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82366FD8;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366ff8
	if (ctx.cr0.eq) goto loc_82366FF8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82364358
	ctx.lr = 0x82366FF0;
	sub_82364358(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82366FF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82375128
	ctx.lr = 0x82367000;
	sub_82375128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236700C"))) PPC_WEAK_FUNC(sub_8236700C);
PPC_FUNC_IMPL(__imp__sub_8236700C) {
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
	// bl 0x82375128
	ctx.lr = 0x82367024;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367034"))) PPC_WEAK_FUNC(sub_82367034);
PPC_FUNC_IMPL(__imp__sub_82367034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367038"))) PPC_WEAK_FUNC(sub_82367038);
PPC_FUNC_IMPL(__imp__sub_82367038) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367040"))) PPC_WEAK_FUNC(sub_82367040);
PPC_FUNC_IMPL(__imp__sub_82367040) {
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
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8236ead8
	ctx.lr = 0x82367060;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236708c
	if (ctx.cr0.eq) goto loc_8236708C;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82367078:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82367078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367078;
loc_8236708C:
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

__attribute__((alias("__imp__sub_823670A0"))) PPC_WEAK_FUNC(sub_823670A0);
PPC_FUNC_IMPL(__imp__sub_823670A0) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x823670BC;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24832
	ctx.r10.s64 = ctx.r10.s64 + -24832;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823670F4"))) PPC_WEAK_FUNC(sub_823670F4);
PPC_FUNC_IMPL(__imp__sub_823670F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823670F8"))) PPC_WEAK_FUNC(sub_823670F8);
PPC_FUNC_IMPL(__imp__sub_823670F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82367100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82369848
	ctx.lr = 0x82367118;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24832
	ctx.r10.s64 = ctx.r10.s64 + -24832;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367144"))) PPC_WEAK_FUNC(sub_82367144);
PPC_FUNC_IMPL(__imp__sub_82367144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367148"))) PPC_WEAK_FUNC(sub_82367148);
PPC_FUNC_IMPL(__imp__sub_82367148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24800(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24800);
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
	// addi r11,r11,-24832
	ctx.r11.s64 = ctx.r11.s64 + -24832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82375128
	ctx.lr = 0x82367184;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x8236718C;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_82367150"))) PPC_WEAK_FUNC(sub_82367150);
PPC_FUNC_IMPL(__imp__sub_82367150) {
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
	// addi r11,r11,-24832
	ctx.r11.s64 = ctx.r11.s64 + -24832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82375128
	ctx.lr = 0x82367184;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x8236718C;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_823671A4"))) PPC_WEAK_FUNC(sub_823671A4);
PPC_FUNC_IMPL(__imp__sub_823671A4) {
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
	// bl 0x82369868
	ctx.lr = 0x823671BC;
	sub_82369868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823671CC"))) PPC_WEAK_FUNC(sub_823671CC);
PPC_FUNC_IMPL(__imp__sub_823671CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823671D0"))) PPC_WEAK_FUNC(sub_823671D0);
PPC_FUNC_IMPL(__imp__sub_823671D0) {
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
	// bl 0x82367150
	ctx.lr = 0x823671F0;
	sub_82367150(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367200
	if (ctx.cr0.eq) goto loc_82367200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82367200;
	sub_8236A3F0(ctx, base);
loc_82367200:
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

__attribute__((alias("__imp__sub_8236721C"))) PPC_WEAK_FUNC(sub_8236721C);
PPC_FUNC_IMPL(__imp__sub_8236721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367220"))) PPC_WEAK_FUNC(sub_82367220);
PPC_FUNC_IMPL(__imp__sub_82367220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82367228;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82369970
	ctx.lr = 0x82367244;
	sub_82369970(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x8236726C;
	sub_8236EA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
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
	// beq 0x823672d0
	if (ctx.cr0.eq) goto loc_823672D0;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r1,86
	ctx.r10.s64 = ctx.r1.s64 + 86;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82367294:
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82367294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367294;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823672C4;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823672d4
	if (!ctx.cr0.eq) goto loc_823672D4;
loc_823672D0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823672D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236731c
	if (ctx.cr0.eq) goto loc_8236731C;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823672F0:
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823672f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823672F0;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x8236731C;
	sub_8236EA10(ctx, base);
loc_8236731C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367328"))) PPC_WEAK_FUNC(sub_82367328);
PPC_FUNC_IMPL(__imp__sub_82367328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82367330;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x82367420
	if (!ctx.cr6.gt) goto loc_82367420;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x823699c0
	ctx.lr = 0x8236736C;
	sub_823699C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823673a8
	if (ctx.cr0.eq) goto loc_823673A8;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ead8
	ctx.lr = 0x82367390;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236739c
	if (ctx.cr0.eq) goto loc_8236739C;
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_8236739C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823673ac
	if (!ctx.cr6.eq) goto loc_823673AC;
loc_823673A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823673AC:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// beq 0x823673e8
	if (ctx.cr0.eq) goto loc_823673E8;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366390
	ctx.lr = 0x823673DC;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823673ec
	if (!ctx.cr0.eq) goto loc_823673EC;
loc_823673E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823673EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367418
	if (ctx.cr0.eq) goto loc_82367418;
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367040
	ctx.lr = 0x8236740C;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8236741c
	if (!ctx.cr0.eq) goto loc_8236741C;
loc_82367418:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236741C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82367420:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367430
	if (ctx.cr0.eq) goto loc_82367430;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82367430:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367438"))) PPC_WEAK_FUNC(sub_82367438);
PPC_FUNC_IMPL(__imp__sub_82367438) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367440"))) PPC_WEAK_FUNC(sub_82367440);
PPC_FUNC_IMPL(__imp__sub_82367440) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x8236745C;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24744
	ctx.r10.s64 = ctx.r10.s64 + -24744;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8236749C"))) PPC_WEAK_FUNC(sub_8236749C);
PPC_FUNC_IMPL(__imp__sub_8236749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823674A0"))) PPC_WEAK_FUNC(sub_823674A0);
PPC_FUNC_IMPL(__imp__sub_823674A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24704(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24704);
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
	// addi r11,r11,-24744
	ctx.r11.s64 = ctx.r11.s64 + -24744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x82375128
	ctx.lr = 0x823674DC;
	sub_82375128(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82375128
	ctx.lr = 0x823674E4;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x823674EC;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_823674A8"))) PPC_WEAK_FUNC(sub_823674A8);
PPC_FUNC_IMPL(__imp__sub_823674A8) {
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
	// addi r11,r11,-24744
	ctx.r11.s64 = ctx.r11.s64 + -24744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x82375128
	ctx.lr = 0x823674DC;
	sub_82375128(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82375128
	ctx.lr = 0x823674E4;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x823674EC;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_82367504"))) PPC_WEAK_FUNC(sub_82367504);
PPC_FUNC_IMPL(__imp__sub_82367504) {
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
	// bl 0x82369868
	ctx.lr = 0x8236751C;
	sub_82369868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236752C"))) PPC_WEAK_FUNC(sub_8236752C);
PPC_FUNC_IMPL(__imp__sub_8236752C) {
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
	// bl 0x82375128
	ctx.lr = 0x82367548;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367558"))) PPC_WEAK_FUNC(sub_82367558);
PPC_FUNC_IMPL(__imp__sub_82367558) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367588
	if (ctx.cr6.eq) goto loc_82367588;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823689c8
	ctx.lr = 0x82367588;
	sub_823689C8(ctx, base);
loc_82367588:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_823675A8"))) PPC_WEAK_FUNC(sub_823675A8);
PPC_FUNC_IMPL(__imp__sub_823675A8) {
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
	// bl 0x823674a8
	ctx.lr = 0x823675C8;
	sub_823674A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823675d8
	if (ctx.cr0.eq) goto loc_823675D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x823675D8;
	sub_8236A3F0(ctx, base);
loc_823675D8:
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

__attribute__((alias("__imp__sub_823675F4"))) PPC_WEAK_FUNC(sub_823675F4);
PPC_FUNC_IMPL(__imp__sub_823675F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823675F8"))) PPC_WEAK_FUNC(sub_823675F8);
PPC_FUNC_IMPL(__imp__sub_823675F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24632(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24632);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82367608;
	__savegprlr_26(ctx, base);
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
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82369848
	ctx.lr = 0x82367630;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// addi r10,r10,-24744
	ctx.r10.s64 = ctx.r10.s64 + -24744;
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// beq cr6,0x82367694
	if (ctx.cr6.eq) goto loc_82367694;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82367674:
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
	// bne 0x82367674
	if (!ctx.cr0.eq) goto loc_82367674;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82367694:
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x823676A4;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367600"))) PPC_WEAK_FUNC(sub_82367600);
PPC_FUNC_IMPL(__imp__sub_82367600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82367608;
	__savegprlr_26(ctx, base);
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
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82369848
	ctx.lr = 0x82367630;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// addi r10,r10,-24744
	ctx.r10.s64 = ctx.r10.s64 + -24744;
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// beq cr6,0x82367694
	if (ctx.cr6.eq) goto loc_82367694;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82367674:
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
	// bne 0x82367674
	if (!ctx.cr0.eq) goto loc_82367674;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82367694:
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x823676A4;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823676B0"))) PPC_WEAK_FUNC(sub_823676B0);
PPC_FUNC_IMPL(__imp__sub_823676B0) {
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
	// bl 0x82375128
	ctx.lr = 0x823676C8;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823676D8"))) PPC_WEAK_FUNC(sub_823676D8);
PPC_FUNC_IMPL(__imp__sub_823676D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823676E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367820
	if (ctx.cr6.eq) goto loc_82367820;
	// bl 0x82369970
	ctx.lr = 0x82367708;
	sub_82369970(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367730;
	sub_8236EA10(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823677a0
	if (ctx.cr0.eq) goto loc_823677A0;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82367768:
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82367768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367768;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367790;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823677a4
	if (!ctx.cr0.eq) goto loc_823677A4;
loc_823677A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823677A4:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 + ctx.r28.u64;
	// bne cr6,0x823677b8
	if (!ctx.cr6.eq) goto loc_823677B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823677B8:
	// subf r5,r5,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r5.s64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82367a28
	ctx.lr = 0x823677C4;
	sub_82367A28(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi. r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq 0x82367820
	if (ctx.cr0.eq) goto loc_82367820;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,86
	ctx.r10.s64 = ctx.r1.s64 + 86;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823677F0:
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823677f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823677F0;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367820;
	sub_8236EA10(ctx, base);
loc_82367820:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236782C"))) PPC_WEAK_FUNC(sub_8236782C);
PPC_FUNC_IMPL(__imp__sub_8236782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367830"))) PPC_WEAK_FUNC(sub_82367830);
PPC_FUNC_IMPL(__imp__sub_82367830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24560(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24560);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82367840;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x823679a8
	if (!ctx.cr6.gt) goto loc_823679A8;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823699c0
	ctx.lr = 0x82367880;
	sub_823699C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823678bc
	if (ctx.cr0.eq) goto loc_823678BC;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ead8
	ctx.lr = 0x823678A4;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823678b0
	if (ctx.cr0.eq) goto loc_823678B0;
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
loc_823678B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823678c0
	if (!ctx.cr6.eq) goto loc_823678C0;
loc_823678BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823678C0:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// sth r9,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r9.u16);
	// beq 0x823678fc
	if (ctx.cr0.eq) goto loc_823678FC;
	// addi r7,r31,82
	ctx.r7.s64 = ctx.r31.s64 + 82;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82366390
	ctx.lr = 0x823678F0;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367900
	if (!ctx.cr0.eq) goto loc_82367900;
loc_823678FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367900:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236792c
	if (ctx.cr0.eq) goto loc_8236792C;
	// addi r7,r27,16
	ctx.r7.s64 = ctx.r27.s64 + 16;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82367040
	ctx.lr = 0x82367920;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367930
	if (!ctx.cr0.eq) goto loc_82367930;
loc_8236792C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367930:
	// li r3,28
	ctx.r3.s64 = 28;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8236a338
	ctx.lr = 0x8236793C;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236795c
	if (ctx.cr0.eq) goto loc_8236795C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,82(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// bl 0x8235cff8
	ctx.lr = 0x82367954;
	sub_8235CFF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82367960
	goto loc_82367960;
loc_8236795C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82367960:
	// addi r30,r27,24
	ctx.r30.s64 = ctx.r27.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350190
	ctx.lr = 0x8236796C;
	sub_82350190(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823679a0
	if (ctx.cr0.eq) goto loc_823679A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r8,82(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8236ead8
	ctx.lr = 0x82367994;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823679a4
	if (!ctx.cr0.eq) goto loc_823679A4;
loc_823679A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823679A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_823679A8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823679b8
	if (ctx.cr0.eq) goto loc_823679B8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_823679B8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367838"))) PPC_WEAK_FUNC(sub_82367838);
PPC_FUNC_IMPL(__imp__sub_82367838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82367840;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x823679a8
	if (!ctx.cr6.gt) goto loc_823679A8;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823699c0
	ctx.lr = 0x82367880;
	sub_823699C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823678bc
	if (ctx.cr0.eq) goto loc_823678BC;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ead8
	ctx.lr = 0x823678A4;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823678b0
	if (ctx.cr0.eq) goto loc_823678B0;
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
loc_823678B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823678c0
	if (!ctx.cr6.eq) goto loc_823678C0;
loc_823678BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823678C0:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// sth r9,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r9.u16);
	// beq 0x823678fc
	if (ctx.cr0.eq) goto loc_823678FC;
	// addi r7,r31,82
	ctx.r7.s64 = ctx.r31.s64 + 82;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82366390
	ctx.lr = 0x823678F0;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367900
	if (!ctx.cr0.eq) goto loc_82367900;
loc_823678FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367900:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236792c
	if (ctx.cr0.eq) goto loc_8236792C;
	// addi r7,r27,16
	ctx.r7.s64 = ctx.r27.s64 + 16;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82367040
	ctx.lr = 0x82367920;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367930
	if (!ctx.cr0.eq) goto loc_82367930;
loc_8236792C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367930:
	// li r3,28
	ctx.r3.s64 = 28;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8236a338
	ctx.lr = 0x8236793C;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236795c
	if (ctx.cr0.eq) goto loc_8236795C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,82(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// bl 0x8235cff8
	ctx.lr = 0x82367954;
	sub_8235CFF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82367960
	goto loc_82367960;
loc_8236795C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82367960:
	// addi r30,r27,24
	ctx.r30.s64 = ctx.r27.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350190
	ctx.lr = 0x8236796C;
	sub_82350190(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823679a0
	if (ctx.cr0.eq) goto loc_823679A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r8,82(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8236ead8
	ctx.lr = 0x82367994;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823679a4
	if (!ctx.cr0.eq) goto loc_823679A4;
loc_823679A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823679A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_823679A8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823679b8
	if (ctx.cr0.eq) goto loc_823679B8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_823679B8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823679C0"))) PPC_WEAK_FUNC(sub_823679C0);
PPC_FUNC_IMPL(__imp__sub_823679C0) {
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82350110
	ctx.lr = 0x823679D8;
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

__attribute__((alias("__imp__sub_823679E8"))) PPC_WEAK_FUNC(sub_823679E8);
PPC_FUNC_IMPL(__imp__sub_823679E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-21520
	ctx.r10.s64 = ctx.r10.s64 + -21520;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367A10"))) PPC_WEAK_FUNC(sub_82367A10);
PPC_FUNC_IMPL(__imp__sub_82367A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367A18"))) PPC_WEAK_FUNC(sub_82367A18);
PPC_FUNC_IMPL(__imp__sub_82367A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367A20"))) PPC_WEAK_FUNC(sub_82367A20);
PPC_FUNC_IMPL(__imp__sub_82367A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24488(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24488);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82367A30;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-608
	ctx.r31.s64 = ctx.r1.s64 + -608;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r27,20
	ctx.r27.s64 = 20;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
loc_82367A64:
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367A64;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367A94;
	sub_8236EA10(ctx, base);
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
	// beq 0x82367af4
	if (ctx.cr0.eq) goto loc_82367AF4;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367ABC:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367ABC;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367AE8;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367af8
	if (!ctx.cr0.eq) goto loc_82367AF8;
loc_82367AF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367AF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367b4c
	if (ctx.cr0.eq) goto loc_82367B4C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367B14:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367B14;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367B40;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367b50
	if (!ctx.cr0.eq) goto loc_82367B50;
loc_82367B4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367B50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367ba4
	if (ctx.cr0.eq) goto loc_82367BA4;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367B6C:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367B6C;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367B98;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367ba8
	if (!ctx.cr0.eq) goto loc_82367BA8;
loc_82367BA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367BA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367bf0
	if (ctx.cr0.eq) goto loc_82367BF0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367BC4:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367BC4;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367BF0;
	sub_8236EA10(ctx, base);
loc_82367BF0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82367c3c
	if (ctx.cr6.eq) goto loc_82367C3C;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r11,23832
	ctx.r4.s64 = ctx.r11.s64 + 23832;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236ed90
	ctx.lr = 0x82367C0C;
	sub_8236ED90(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82364230
	ctx.lr = 0x82367C20;
	sub_82364230(ctx, base);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236ed60
	ctx.lr = 0x82367C34;
	sub_8236ED60(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236ed50
	ctx.lr = 0x82367C3C;
	sub_8236ED50(ctx, base);
loc_82367C3C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,608
	ctx.r1.s64 = ctx.r31.s64 + 608;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367A28"))) PPC_WEAK_FUNC(sub_82367A28);
PPC_FUNC_IMPL(__imp__sub_82367A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82367A30;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-608
	ctx.r31.s64 = ctx.r1.s64 + -608;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r27,20
	ctx.r27.s64 = 20;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
loc_82367A64:
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367A64;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367A94;
	sub_8236EA10(ctx, base);
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
	// beq 0x82367af4
	if (ctx.cr0.eq) goto loc_82367AF4;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367ABC:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367ABC;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367AE8;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367af8
	if (!ctx.cr0.eq) goto loc_82367AF8;
loc_82367AF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367AF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367b4c
	if (ctx.cr0.eq) goto loc_82367B4C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367B14:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367B14;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367B40;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367b50
	if (!ctx.cr0.eq) goto loc_82367B50;
loc_82367B4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367B50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367ba4
	if (ctx.cr0.eq) goto loc_82367BA4;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367B6C:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367B6C;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367B98;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367ba8
	if (!ctx.cr0.eq) goto loc_82367BA8;
loc_82367BA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367BA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367bf0
	if (ctx.cr0.eq) goto loc_82367BF0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367BC4:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82367bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367BC4;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82367BF0;
	sub_8236EA10(ctx, base);
loc_82367BF0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82367c3c
	if (ctx.cr6.eq) goto loc_82367C3C;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r11,23832
	ctx.r4.s64 = ctx.r11.s64 + 23832;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236ed90
	ctx.lr = 0x82367C0C;
	sub_8236ED90(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82364230
	ctx.lr = 0x82367C20;
	sub_82364230(ctx, base);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236ed60
	ctx.lr = 0x82367C34;
	sub_8236ED60(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236ed50
	ctx.lr = 0x82367C3C;
	sub_8236ED50(ctx, base);
loc_82367C3C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,608
	ctx.r1.s64 = ctx.r31.s64 + 608;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367C48"))) PPC_WEAK_FUNC(sub_82367C48);
PPC_FUNC_IMPL(__imp__sub_82367C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-608
	ctx.r31.s64 = ctx.r12.s64 + -608;
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
	// bl 0x8236ed50
	ctx.lr = 0x82367C60;
	sub_8236ED50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367C70"))) PPC_WEAK_FUNC(sub_82367C70);
PPC_FUNC_IMPL(__imp__sub_82367C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24320(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24320);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82367C80;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-640
	ctx.r31.s64 = ctx.r1.s64 + -640;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// ble cr6,0x82367e68
	if (!ctx.cr6.gt) goto loc_82367E68;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r10,23832
	ctx.r4.s64 = ctx.r10.s64 + 23832;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8236ed90
	ctx.lr = 0x82367CC8;
	sub_8236ED90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82367a28
	ctx.lr = 0x82367CD8;
	sub_82367A28(ctx, base);
	// addi r5,r3,-20
	ctx.r5.s64 = ctx.r3.s64 + -20;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82364230
	ctx.lr = 0x82367CE8;
	sub_82364230(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8236ed60
	ctx.lr = 0x82367D00;
	sub_8236ED60(ctx, base);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
loc_82367D0C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82367d2c
	if (!ctx.cr0.eq) goto loc_82367D2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82367d0c
	if (!ctx.cr6.eq) goto loc_82367D0C;
loc_82367D2C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82367e2c
	if (!ctx.cr0.eq) goto loc_82367E2C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367D58;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367d84
	if (ctx.cr0.eq) goto loc_82367D84;
	// addi r7,r27,8
	ctx.r7.s64 = ctx.r27.s64 + 8;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367D78;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367d88
	if (!ctx.cr0.eq) goto loc_82367D88;
loc_82367D84:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82367D88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367db4
	if (ctx.cr0.eq) goto loc_82367DB4;
	// addi r7,r27,12
	ctx.r7.s64 = ctx.r27.s64 + 12;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367DA8;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367db8
	if (!ctx.cr0.eq) goto loc_82367DB8;
loc_82367DB4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82367DB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367de4
	if (ctx.cr0.eq) goto loc_82367DE4;
	// addi r7,r27,20
	ctx.r7.s64 = ctx.r27.s64 + 20;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367DD8;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367de8
	if (!ctx.cr0.eq) goto loc_82367DE8;
loc_82367DE4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82367DE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367e14
	if (ctx.cr0.eq) goto loc_82367E14;
	// addi r7,r27,16
	ctx.r7.s64 = ctx.r27.s64 + 16;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367E08;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367e18
	if (!ctx.cr0.eq) goto loc_82367E18;
loc_82367E14:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82367E18:
	// clrlwi. r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82367e60
	if (ctx.cr0.eq) goto loc_82367E60;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x82367e60
	goto loc_82367E60;
loc_82367E2C:
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
	// addi r6,r8,-24352
	ctx.r6.s64 = ctx.r8.s64 + -24352;
	// addi r9,r11,-24380
	ctx.r9.s64 = ctx.r11.s64 + -24380;
	// addi r7,r10,-24404
	ctx.r7.s64 = ctx.r10.s64 + -24404;
	// addi r5,r5,-24424
	ctx.r5.s64 = ctx.r5.s64 + -24424;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,133
	ctx.r8.s64 = 133;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82367E60;
	sub_82372320(ctx, base);
loc_82367E60:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8236ed50
	ctx.lr = 0x82367E68;
	sub_8236ED50(ctx, base);
loc_82367E68:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,640
	ctx.r1.s64 = ctx.r31.s64 + 640;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367C78"))) PPC_WEAK_FUNC(sub_82367C78);
PPC_FUNC_IMPL(__imp__sub_82367C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82367C80;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-640
	ctx.r31.s64 = ctx.r1.s64 + -640;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// ble cr6,0x82367e68
	if (!ctx.cr6.gt) goto loc_82367E68;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r10,23832
	ctx.r4.s64 = ctx.r10.s64 + 23832;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8236ed90
	ctx.lr = 0x82367CC8;
	sub_8236ED90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82367a28
	ctx.lr = 0x82367CD8;
	sub_82367A28(ctx, base);
	// addi r5,r3,-20
	ctx.r5.s64 = ctx.r3.s64 + -20;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82364230
	ctx.lr = 0x82367CE8;
	sub_82364230(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8236ed60
	ctx.lr = 0x82367D00;
	sub_8236ED60(ctx, base);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
loc_82367D0C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82367d2c
	if (!ctx.cr0.eq) goto loc_82367D2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82367d0c
	if (!ctx.cr6.eq) goto loc_82367D0C;
loc_82367D2C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82367e2c
	if (!ctx.cr0.eq) goto loc_82367E2C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367D58;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367d84
	if (ctx.cr0.eq) goto loc_82367D84;
	// addi r7,r27,8
	ctx.r7.s64 = ctx.r27.s64 + 8;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367D78;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367d88
	if (!ctx.cr0.eq) goto loc_82367D88;
loc_82367D84:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82367D88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367db4
	if (ctx.cr0.eq) goto loc_82367DB4;
	// addi r7,r27,12
	ctx.r7.s64 = ctx.r27.s64 + 12;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367DA8;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367db8
	if (!ctx.cr0.eq) goto loc_82367DB8;
loc_82367DB4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82367DB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367de4
	if (ctx.cr0.eq) goto loc_82367DE4;
	// addi r7,r27,20
	ctx.r7.s64 = ctx.r27.s64 + 20;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367DD8;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367de8
	if (!ctx.cr0.eq) goto loc_82367DE8;
loc_82367DE4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82367DE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367e14
	if (ctx.cr0.eq) goto loc_82367E14;
	// addi r7,r27,16
	ctx.r7.s64 = ctx.r27.s64 + 16;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367040
	ctx.lr = 0x82367E08;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82367e18
	if (!ctx.cr0.eq) goto loc_82367E18;
loc_82367E14:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82367E18:
	// clrlwi. r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82367e60
	if (ctx.cr0.eq) goto loc_82367E60;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x82367e60
	goto loc_82367E60;
loc_82367E2C:
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
	// addi r6,r8,-24352
	ctx.r6.s64 = ctx.r8.s64 + -24352;
	// addi r9,r11,-24380
	ctx.r9.s64 = ctx.r11.s64 + -24380;
	// addi r7,r10,-24404
	ctx.r7.s64 = ctx.r10.s64 + -24404;
	// addi r5,r5,-24424
	ctx.r5.s64 = ctx.r5.s64 + -24424;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,133
	ctx.r8.s64 = 133;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82367E60;
	sub_82372320(ctx, base);
loc_82367E60:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8236ed50
	ctx.lr = 0x82367E68;
	sub_8236ED50(ctx, base);
loc_82367E68:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,640
	ctx.r1.s64 = ctx.r31.s64 + 640;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367E74"))) PPC_WEAK_FUNC(sub_82367E74);
PPC_FUNC_IMPL(__imp__sub_82367E74) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-640
	ctx.r31.s64 = ctx.r12.s64 + -640;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8236ed50
	ctx.lr = 0x82367E8C;
	sub_8236ED50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367E9C"))) PPC_WEAK_FUNC(sub_82367E9C);
PPC_FUNC_IMPL(__imp__sub_82367E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367EA0"))) PPC_WEAK_FUNC(sub_82367EA0);
PPC_FUNC_IMPL(__imp__sub_82367EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24248(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24248);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82367EB0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r29,-32183
	ctx.r29.s64 = -2109145088;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r11,r11,-21520
	ctx.r11.s64 = ctx.r11.s64 + -21520;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,23852(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 23852);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82367f10
	if (!ctx.cr0.eq) goto loc_82367F10;
	// bl 0x82360ef0
	ctx.lr = 0x82367EF8;
	sub_82360EF0(ctx, base);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r11,23832
	ctx.r4.s64 = ctx.r11.s64 + 23832;
	// bl 0x8236e720
	ctx.lr = 0x82367F08;
	sub_8236E720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23852(r29)
	PPC_STORE_U8(ctx.r29.u32 + 23852, ctx.r11.u8);
loc_82367F10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367EA8"))) PPC_WEAK_FUNC(sub_82367EA8);
PPC_FUNC_IMPL(__imp__sub_82367EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82367EB0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r29,-32183
	ctx.r29.s64 = -2109145088;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r11,r11,-21520
	ctx.r11.s64 = ctx.r11.s64 + -21520;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,23852(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 23852);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82367f10
	if (!ctx.cr0.eq) goto loc_82367F10;
	// bl 0x82360ef0
	ctx.lr = 0x82367EF8;
	sub_82360EF0(ctx, base);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r11,23832
	ctx.r4.s64 = ctx.r11.s64 + 23832;
	// bl 0x8236e720
	ctx.lr = 0x82367F08;
	sub_8236E720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23852(r29)
	PPC_STORE_U8(ctx.r29.u32 + 23852, ctx.r11.u8);
loc_82367F10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367F1C"))) PPC_WEAK_FUNC(sub_82367F1C);
PPC_FUNC_IMPL(__imp__sub_82367F1C) {
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
	ctx.lr = 0x82367F34;
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

__attribute__((alias("__imp__sub_82367F44"))) PPC_WEAK_FUNC(sub_82367F44);
PPC_FUNC_IMPL(__imp__sub_82367F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367F48"))) PPC_WEAK_FUNC(sub_82367F48);
PPC_FUNC_IMPL(__imp__sub_82367F48) {
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
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x82367F64;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24200
	ctx.r10.s64 = ctx.r10.s64 + -24200;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82367F98"))) PPC_WEAK_FUNC(sub_82367F98);
PPC_FUNC_IMPL(__imp__sub_82367F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24160(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24160);
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
	// addi r11,r11,-24200
	ctx.r11.s64 = ctx.r11.s64 + -24200;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82375128
	ctx.lr = 0x82367FD4;
	sub_82375128(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82375128
	ctx.lr = 0x82367FDC;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x82367FE4;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_82367FA0"))) PPC_WEAK_FUNC(sub_82367FA0);
PPC_FUNC_IMPL(__imp__sub_82367FA0) {
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
	// addi r11,r11,-24200
	ctx.r11.s64 = ctx.r11.s64 + -24200;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82375128
	ctx.lr = 0x82367FD4;
	sub_82375128(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82375128
	ctx.lr = 0x82367FDC;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x82367FE4;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_82367FFC"))) PPC_WEAK_FUNC(sub_82367FFC);
PPC_FUNC_IMPL(__imp__sub_82367FFC) {
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
	// bl 0x82369868
	ctx.lr = 0x82368014;
	sub_82369868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368024"))) PPC_WEAK_FUNC(sub_82368024);
PPC_FUNC_IMPL(__imp__sub_82368024) {
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
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82375128
	ctx.lr = 0x82368040;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368050"))) PPC_WEAK_FUNC(sub_82368050);
PPC_FUNC_IMPL(__imp__sub_82368050) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368080
	if (ctx.cr6.eq) goto loc_82368080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823689c8
	ctx.lr = 0x82368080;
	sub_823689C8(ctx, base);
loc_82368080:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_823680A0"))) PPC_WEAK_FUNC(sub_823680A0);
PPC_FUNC_IMPL(__imp__sub_823680A0) {
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
	// bl 0x82367fa0
	ctx.lr = 0x823680C0;
	sub_82367FA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823680d0
	if (ctx.cr0.eq) goto loc_823680D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x823680D0;
	sub_8236A3F0(ctx, base);
loc_823680D0:
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

__attribute__((alias("__imp__sub_823680EC"))) PPC_WEAK_FUNC(sub_823680EC);
PPC_FUNC_IMPL(__imp__sub_823680EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823680F0"))) PPC_WEAK_FUNC(sub_823680F0);
PPC_FUNC_IMPL(__imp__sub_823680F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-24088(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24088);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82368100;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82369848
	ctx.lr = 0x8236811C;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24200
	ctx.r10.s64 = ctx.r10.s64 + -24200;
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// beq cr6,0x8236817c
	if (ctx.cr6.eq) goto loc_8236817C;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8236815C:
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
	// bne 0x8236815c
	if (!ctx.cr0.eq) goto loc_8236815C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8236817C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82368184;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823680F8"))) PPC_WEAK_FUNC(sub_823680F8);
PPC_FUNC_IMPL(__imp__sub_823680F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82368100;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82369848
	ctx.lr = 0x8236811C;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24200
	ctx.r10.s64 = ctx.r10.s64 + -24200;
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// beq cr6,0x8236817c
	if (ctx.cr6.eq) goto loc_8236817C;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8236815C:
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
	// bne 0x8236815c
	if (!ctx.cr0.eq) goto loc_8236815C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8236817C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82368184;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368190"))) PPC_WEAK_FUNC(sub_82368190);
PPC_FUNC_IMPL(__imp__sub_82368190) {
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
	// bl 0x82375128
	ctx.lr = 0x823681A8;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823681B8"))) PPC_WEAK_FUNC(sub_823681B8);
PPC_FUNC_IMPL(__imp__sub_823681B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823681C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823681f0
	if (!ctx.cr6.eq) goto loc_823681F0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368350
	if (ctx.cr6.eq) goto loc_82368350;
loc_823681F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369970
	ctx.lr = 0x82368200;
	sub_82369970(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82368228;
	sub_8236EA10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x823682c8
	if (ctx.cr6.eq) goto loc_823682C8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// beq 0x823682a4
	if (ctx.cr0.eq) goto loc_823682A4;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,86
	ctx.r10.s64 = ctx.r1.s64 + 86;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368268:
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82368268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368268;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82368298;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823682a8
	if (!ctx.cr0.eq) goto loc_823682A8;
loc_823682A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823682A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82368350
	if (ctx.cr0.eq) goto loc_82368350;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82368344
	goto loc_82368344;
loc_823682C8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne cr6,0x823682e8
	if (!ctx.cr6.eq) goto loc_823682E8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823682E8:
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82367a28
	ctx.lr = 0x823682F4;
	sub_82367A28(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi. r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq 0x82368350
	if (ctx.cr0.eq) goto loc_82368350;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82368320:
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82368320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368320;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
loc_82368344:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82368350;
	sub_8236EA10(ctx, base);
loc_82368350:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236835C"))) PPC_WEAK_FUNC(sub_8236835C);
PPC_FUNC_IMPL(__imp__sub_8236835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368360"))) PPC_WEAK_FUNC(sub_82368360);
PPC_FUNC_IMPL(__imp__sub_82368360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-23920(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23920);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82368370;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823699c0
	ctx.lr = 0x82368398;
	sub_823699C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
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
	// beq 0x823683e4
	if (ctx.cr0.eq) goto loc_823683E4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236ead8
	ctx.lr = 0x823683CC;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823683d8
	if (ctx.cr0.eq) goto loc_823683D8;
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
loc_823683D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823683e8
	if (!ctx.cr6.eq) goto loc_823683E8;
loc_823683E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823683E8:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// sth r9,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r9.u16);
	// beq 0x82368424
	if (ctx.cr0.eq) goto loc_82368424;
	// addi r7,r31,82
	ctx.r7.s64 = ctx.r31.s64 + 82;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82366390
	ctx.lr = 0x82368418;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82368428
	if (!ctx.cr0.eq) goto loc_82368428;
loc_82368424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82368428:
	// li r3,24
	ctx.r3.s64 = 24;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8236a338
	ctx.lr = 0x82368434;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236844c
	if (ctx.cr0.eq) goto loc_8236844C;
	// bl 0x823679e8
	ctx.lr = 0x82368444;
	sub_823679E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82368450
	goto loc_82368450;
loc_8236844C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82368450:
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350190
	ctx.lr = 0x8236845C;
	sub_82350190(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// beq 0x823684d0
	if (ctx.cr0.eq) goto loc_823684D0;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82367c78
	ctx.lr = 0x8236847C;
	sub_82367C78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823684d0
	if (ctx.cr0.eq) goto loc_823684D0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823684d0
	if (ctx.cr6.eq) goto loc_823684D0;
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
	// addi r6,r8,-23968
	ctx.r6.s64 = ctx.r8.s64 + -23968;
	// addi r9,r11,-23992
	ctx.r9.s64 = ctx.r11.s64 + -23992;
	// addi r7,r10,-24024
	ctx.r7.s64 = ctx.r10.s64 + -24024;
	// addi r5,r5,-24424
	ctx.r5.s64 = ctx.r5.s64 + -24424;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,112
	ctx.r8.s64 = 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823684CC;
	sub_82372320(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_823684D0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823684e0
	if (ctx.cr0.eq) goto loc_823684E0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_823684E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368368"))) PPC_WEAK_FUNC(sub_82368368);
PPC_FUNC_IMPL(__imp__sub_82368368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82368370;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823699c0
	ctx.lr = 0x82368398;
	sub_823699C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
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
	// beq 0x823683e4
	if (ctx.cr0.eq) goto loc_823683E4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236ead8
	ctx.lr = 0x823683CC;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823683d8
	if (ctx.cr0.eq) goto loc_823683D8;
	// lbz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
loc_823683D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823683e8
	if (!ctx.cr6.eq) goto loc_823683E8;
loc_823683E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823683E8:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// sth r9,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r9.u16);
	// beq 0x82368424
	if (ctx.cr0.eq) goto loc_82368424;
	// addi r7,r31,82
	ctx.r7.s64 = ctx.r31.s64 + 82;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82366390
	ctx.lr = 0x82368418;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82368428
	if (!ctx.cr0.eq) goto loc_82368428;
loc_82368424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82368428:
	// li r3,24
	ctx.r3.s64 = 24;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8236a338
	ctx.lr = 0x82368434;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236844c
	if (ctx.cr0.eq) goto loc_8236844C;
	// bl 0x823679e8
	ctx.lr = 0x82368444;
	sub_823679E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82368450
	goto loc_82368450;
loc_8236844C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82368450:
	// addi r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350190
	ctx.lr = 0x8236845C;
	sub_82350190(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// beq 0x823684d0
	if (ctx.cr0.eq) goto loc_823684D0;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82367c78
	ctx.lr = 0x8236847C;
	sub_82367C78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823684d0
	if (ctx.cr0.eq) goto loc_823684D0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823684d0
	if (ctx.cr6.eq) goto loc_823684D0;
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
	// addi r6,r8,-23968
	ctx.r6.s64 = ctx.r8.s64 + -23968;
	// addi r9,r11,-23992
	ctx.r9.s64 = ctx.r11.s64 + -23992;
	// addi r7,r10,-24024
	ctx.r7.s64 = ctx.r10.s64 + -24024;
	// addi r5,r5,-24424
	ctx.r5.s64 = ctx.r5.s64 + -24424;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,112
	ctx.r8.s64 = 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823684CC;
	sub_82372320(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_823684D0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823684e0
	if (ctx.cr0.eq) goto loc_823684E0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_823684E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823684EC"))) PPC_WEAK_FUNC(sub_823684EC);
PPC_FUNC_IMPL(__imp__sub_823684EC) {
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82350110
	ctx.lr = 0x82368504;
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

__attribute__((alias("__imp__sub_82368514"))) PPC_WEAK_FUNC(sub_82368514);
PPC_FUNC_IMPL(__imp__sub_82368514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368518"))) PPC_WEAK_FUNC(sub_82368518);
PPC_FUNC_IMPL(__imp__sub_82368518) {
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
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x82368534;
	sub_82369848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23856
	ctx.r11.s64 = ctx.r11.s64 + -23856;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82368560"))) PPC_WEAK_FUNC(sub_82368560);
PPC_FUNC_IMPL(__imp__sub_82368560) {
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
	// addi r11,r11,-23856
	ctx.r11.s64 = ctx.r11.s64 + -23856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82369868
	ctx.lr = 0x8236858C;
	sub_82369868(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236859c
	if (ctx.cr0.eq) goto loc_8236859C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8236859C;
	sub_8236A3F0(ctx, base);
loc_8236859C:
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

__attribute__((alias("__imp__sub_823685B8"))) PPC_WEAK_FUNC(sub_823685B8);
PPC_FUNC_IMPL(__imp__sub_823685B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823685C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82369970
	ctx.lr = 0x823685DC;
	sub_82369970(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82368604;
	sub_8236EA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
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
	// beq 0x8236865c
	if (ctx.cr0.eq) goto loc_8236865C;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r1,86
	ctx.r10.s64 = ctx.r1.s64 + 86;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236862C:
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236862c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236862C;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236ea10
	ctx.lr = 0x8236865C;
	sub_8236EA10(ctx, base);
loc_8236865C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368668"))) PPC_WEAK_FUNC(sub_82368668);
PPC_FUNC_IMPL(__imp__sub_82368668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82368670;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823699c0
	ctx.lr = 0x82368694;
	sub_823699C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
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
	// beq 0x823686e0
	if (ctx.cr0.eq) goto loc_823686E0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ead8
	ctx.lr = 0x823686C8;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823686d4
	if (ctx.cr0.eq) goto loc_823686D4;
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_823686D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823686e4
	if (!ctx.cr6.eq) goto loc_823686E4;
loc_823686E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823686E4:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// beq 0x82368720
	if (ctx.cr0.eq) goto loc_82368720;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366390
	ctx.lr = 0x82368714;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82368724
	if (!ctx.cr0.eq) goto loc_82368724;
loc_82368720:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82368724:
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82368734
	if (ctx.cr0.eq) goto loc_82368734;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82368734:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236873C"))) PPC_WEAK_FUNC(sub_8236873C);
PPC_FUNC_IMPL(__imp__sub_8236873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368740"))) PPC_WEAK_FUNC(sub_82368740);
PPC_FUNC_IMPL(__imp__sub_82368740) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x8236875C;
	sub_82369848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82368788"))) PPC_WEAK_FUNC(sub_82368788);
PPC_FUNC_IMPL(__imp__sub_82368788) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x823687A4;
	sub_82369848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823687D0"))) PPC_WEAK_FUNC(sub_823687D0);
PPC_FUNC_IMPL(__imp__sub_823687D0) {
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
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x823687EC;
	sub_82369848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82368818"))) PPC_WEAK_FUNC(sub_82368818);
PPC_FUNC_IMPL(__imp__sub_82368818) {
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
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82369868
	ctx.lr = 0x82368844;
	sub_82369868(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82368854
	if (ctx.cr0.eq) goto loc_82368854;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82368854;
	sub_8236A3F0(ctx, base);
loc_82368854:
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

__attribute__((alias("__imp__sub_82368870"))) PPC_WEAK_FUNC(sub_82368870);
PPC_FUNC_IMPL(__imp__sub_82368870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82368878;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x823699c0
	ctx.lr = 0x823688A0;
	sub_823699C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823688dc
	if (ctx.cr0.eq) goto loc_823688DC;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ead8
	ctx.lr = 0x823688C4;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823688d0
	if (ctx.cr0.eq) goto loc_823688D0;
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_823688D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823688e0
	if (!ctx.cr6.eq) goto loc_823688E0;
loc_823688DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823688E0:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// beq 0x8236891c
	if (ctx.cr0.eq) goto loc_8236891C;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366390
	ctx.lr = 0x82368910;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82368920
	if (!ctx.cr0.eq) goto loc_82368920;
loc_8236891C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82368920:
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82368930
	if (ctx.cr0.eq) goto loc_82368930;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82368930:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368938"))) PPC_WEAK_FUNC(sub_82368938);
PPC_FUNC_IMPL(__imp__sub_82368938) {
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
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x82368954;
	sub_82369848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82368980"))) PPC_WEAK_FUNC(sub_82368980);
PPC_FUNC_IMPL(__imp__sub_82368980) {
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
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x8236899C;
	sub_82369848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823689C8"))) PPC_WEAK_FUNC(sub_823689C8);
PPC_FUNC_IMPL(__imp__sub_823689C8) {
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
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82368a78
	if (ctx.cr6.eq) goto loc_82368A78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368a44
	if (ctx.cr6.eq) goto loc_82368A44;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823689FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823689fc
	if (!ctx.cr0.eq) goto loc_823689FC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368a44
	if (!ctx.cr6.eq) goto loc_82368A44;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82368a44
	if (ctx.cr6.eq) goto loc_82368A44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82368A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82368A44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82368a78
	if (ctx.cr6.eq) goto loc_82368A78;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82368A58:
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
	// bne 0x82368a58
	if (!ctx.cr0.eq) goto loc_82368A58;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82368A78:
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

__attribute__((alias("__imp__sub_82368A94"))) PPC_WEAK_FUNC(sub_82368A94);
PPC_FUNC_IMPL(__imp__sub_82368A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368A98"))) PPC_WEAK_FUNC(sub_82368A98);
PPC_FUNC_IMPL(__imp__sub_82368A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-23648(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23648);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x82368AA8;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
loc_82368AD8:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82368ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368AD8;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82368B04;
	sub_8236EA10(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// subf r29,r11,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r25,r11,-2
	ctx.r25.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r20,r10,-24424
	ctx.r20.s64 = ctx.r10.s64 + -24424;
	// addi r19,r9,-23700
	ctx.r19.s64 = ctx.r9.s64 + -23700;
	// addi r18,r8,-23720
	ctx.r18.s64 = ctx.r8.s64 + -23720;
	// beq cr6,0x82368c18
	if (ctx.cr6.eq) goto loc_82368C18;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r23,r11,-25772
	ctx.r23.s64 = ctx.r11.s64 + -25772;
	// addi r22,r10,-23760
	ctx.r22.s64 = ctx.r10.s64 + -23760;
loc_82368B48:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82368c18
	if (ctx.cr0.eq) goto loc_82368C18;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82368b8c
	if (ctx.cr6.eq) goto loc_82368B8C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82368B6C:
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
	// bne 0x82368b6c
	if (!ctx.cr0.eq) goto loc_82368B6C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82368B8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82368BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82368be4
	if (ctx.cr6.lt) goto loc_82368BE4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r5,r11,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82368BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82368c08
	goto loc_82368C08;
loc_82368BE4:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r8,81
	ctx.r8.s64 = 81;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82368C08;
	sub_82372320(ctx, base);
loc_82368C08:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82368C10;
	sub_82375128(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82368b48
	if (!ctx.cr6.eq) goto loc_82368B48;
loc_82368C18:
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82368d14
	if (ctx.cr6.eq) goto loc_82368D14;
	// clrlwi r26,r21,24
	ctx.r26.u64 = ctx.r21.u32 & 0xFF;
loc_82368C28:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82368d14
	if (ctx.cr6.eq) goto loc_82368D14;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82368c6c
	if (ctx.cr6.eq) goto loc_82368C6C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82368C4C:
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
	// bne 0x82368c4c
	if (!ctx.cr0.eq) goto loc_82368C4C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82368C6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82368C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82368d04
	if (!ctx.cr6.eq) goto loc_82368D04;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
loc_82368C90:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82368c90
	if (!ctx.cr0.eq) goto loc_82368C90;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82375128
	ctx.lr = 0x82368CB8;
	sub_82375128(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82368CBC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82368cbc
	if (!ctx.cr0.eq) goto loc_82368CBC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r11,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x823666d8
	ctx.lr = 0x82368CF0;
	sub_823666D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82368D04;
	sub_82375128(ctx, base);
loc_82368D04:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82368D0C;
	sub_82375128(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82368c28
	if (!ctx.cr6.eq) goto loc_82368C28;
loc_82368D14:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x82368db0
	if (ctx.cr0.eq) goto loc_82368DB0;
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82368d88
	if (!ctx.cr6.eq) goto loc_82368D88;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r9,r31,86
	ctx.r9.s64 = ctx.r31.s64 + 86;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82368D48:
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82368d48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368D48;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// addi r6,r31,100
	ctx.r6.s64 = ctx.r31.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82368D78;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82368db0
	if (ctx.cr0.eq) goto loc_82368DB0;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x82368db0
	goto loc_82368DB0;
loc_82368D88:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-23816
	ctx.r9.s64 = ctx.r11.s64 + -23816;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,118
	ctx.r8.s64 = 118;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82368DB0;
	sub_82372320(ctx, base);
loc_82368DB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368AA0"))) PPC_WEAK_FUNC(sub_82368AA0);
PPC_FUNC_IMPL(__imp__sub_82368AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x82368AA8;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
loc_82368AD8:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82368ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368AD8;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82368B04;
	sub_8236EA10(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// subf r29,r11,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r25,r11,-2
	ctx.r25.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r20,r10,-24424
	ctx.r20.s64 = ctx.r10.s64 + -24424;
	// addi r19,r9,-23700
	ctx.r19.s64 = ctx.r9.s64 + -23700;
	// addi r18,r8,-23720
	ctx.r18.s64 = ctx.r8.s64 + -23720;
	// beq cr6,0x82368c18
	if (ctx.cr6.eq) goto loc_82368C18;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r23,r11,-25772
	ctx.r23.s64 = ctx.r11.s64 + -25772;
	// addi r22,r10,-23760
	ctx.r22.s64 = ctx.r10.s64 + -23760;
loc_82368B48:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82368c18
	if (ctx.cr0.eq) goto loc_82368C18;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82368b8c
	if (ctx.cr6.eq) goto loc_82368B8C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82368B6C:
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
	// bne 0x82368b6c
	if (!ctx.cr0.eq) goto loc_82368B6C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82368B8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82368BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82368be4
	if (ctx.cr6.lt) goto loc_82368BE4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r5,r11,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82368BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82368c08
	goto loc_82368C08;
loc_82368BE4:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r8,81
	ctx.r8.s64 = 81;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82368C08;
	sub_82372320(ctx, base);
loc_82368C08:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82368C10;
	sub_82375128(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82368b48
	if (!ctx.cr6.eq) goto loc_82368B48;
loc_82368C18:
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82368d14
	if (ctx.cr6.eq) goto loc_82368D14;
	// clrlwi r26,r21,24
	ctx.r26.u64 = ctx.r21.u32 & 0xFF;
loc_82368C28:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82368d14
	if (ctx.cr6.eq) goto loc_82368D14;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82368c6c
	if (ctx.cr6.eq) goto loc_82368C6C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82368C4C:
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
	// bne 0x82368c4c
	if (!ctx.cr0.eq) goto loc_82368C4C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82368C6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82368C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82368d04
	if (!ctx.cr6.eq) goto loc_82368D04;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
loc_82368C90:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82368c90
	if (!ctx.cr0.eq) goto loc_82368C90;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82375128
	ctx.lr = 0x82368CB8;
	sub_82375128(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82368CBC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82368cbc
	if (!ctx.cr0.eq) goto loc_82368CBC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r11,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x823666d8
	ctx.lr = 0x82368CF0;
	sub_823666D8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82368D04;
	sub_82375128(ctx, base);
loc_82368D04:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82368D0C;
	sub_82375128(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82368c28
	if (!ctx.cr6.eq) goto loc_82368C28;
loc_82368D14:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x82368db0
	if (ctx.cr0.eq) goto loc_82368DB0;
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82368d88
	if (!ctx.cr6.eq) goto loc_82368D88;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r9,r31,86
	ctx.r9.s64 = ctx.r31.s64 + 86;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82368D48:
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82368d48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82368D48;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// addi r6,r31,100
	ctx.r6.s64 = ctx.r31.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82368D78;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82368db0
	if (ctx.cr0.eq) goto loc_82368DB0;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x82368db0
	goto loc_82368DB0;
loc_82368D88:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-23816
	ctx.r9.s64 = ctx.r11.s64 + -23816;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,118
	ctx.r8.s64 = 118;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82368DB0;
	sub_82372320(ctx, base);
loc_82368DB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368DBC"))) PPC_WEAK_FUNC(sub_82368DBC);
PPC_FUNC_IMPL(__imp__sub_82368DBC) {
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
	// bl 0x82375128
	ctx.lr = 0x82368DD4;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368DE4"))) PPC_WEAK_FUNC(sub_82368DE4);
PPC_FUNC_IMPL(__imp__sub_82368DE4) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82368DFC;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368E0C"))) PPC_WEAK_FUNC(sub_82368E0C);
PPC_FUNC_IMPL(__imp__sub_82368E0C) {
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
	// bl 0x82375128
	ctx.lr = 0x82368E24;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368E34"))) PPC_WEAK_FUNC(sub_82368E34);
PPC_FUNC_IMPL(__imp__sub_82368E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368E38"))) PPC_WEAK_FUNC(sub_82368E38);
PPC_FUNC_IMPL(__imp__sub_82368E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368E48"))) PPC_WEAK_FUNC(sub_82368E48);
PPC_FUNC_IMPL(__imp__sub_82368E48) {
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
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82368ed8
	if (ctx.cr0.eq) goto loc_82368ED8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82368e8c
	if (!ctx.cr6.eq) goto loc_82368E8C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82368e98
	goto loc_82368E98;
loc_82368E8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82368E98:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82368eb0
	if (!ctx.cr6.eq) goto loc_82368EB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82368ebc
	goto loc_82368EBC;
loc_82368EB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82368EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82375128
	ctx.lr = 0x82368EC4;
	sub_82375128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82368ECC;
	sub_8236A3F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82368ED8:
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

__attribute__((alias("__imp__sub_82368EF0"))) PPC_WEAK_FUNC(sub_82368EF0);
PPC_FUNC_IMPL(__imp__sub_82368EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-23224(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23224);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82368F00;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82368f30
	if (ctx.cr6.eq) goto loc_82368F30;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// ble cr6,0x82368f30
	if (!ctx.cr6.gt) goto loc_82368F30;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r17,0
	ctx.r17.s64 = 0;
	// b 0x82368f38
	goto loc_82368F38;
loc_82368F30:
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82368F38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r17,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r17.u16);
	// stw r17,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r17.u32);
	// beq 0x82368f6c
	if (ctx.cr0.eq) goto loc_82368F6C;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366390
	ctx.lr = 0x82368F60;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82368f70
	if (!ctx.cr0.eq) goto loc_82368F70;
loc_82368F6C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82368F70:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// add r22,r10,r30
	ctx.r22.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r17,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r17.u32);
	// subf r9,r28,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r28.s64;
	// stw r17,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r17.u32);
	// add r15,r28,r22
	ctx.r15.u64 = ctx.r28.u64 + ctx.r22.u64;
	// subf r16,r10,r9
	ctx.r16.s64 = ctx.r9.s64 - ctx.r10.s64;
	// beq 0x82368fc4
	if (ctx.cr0.eq) goto loc_82368FC4;
	// addi r7,r14,20
	ctx.r7.s64 = ctx.r14.s64 + 20;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82367040
	ctx.lr = 0x82368FB4;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82368fc8
	if (!ctx.cr0.eq) goto loc_82368FC8;
loc_82368FC4:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82368FC8:
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823693d4
	if (!ctx.cr6.lt) goto loc_823693D4;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r20,r6,-23364
	ctx.r20.s64 = ctx.r6.s64 + -23364;
	// addi r21,r5,-23384
	ctx.r21.s64 = ctx.r5.s64 + -23384;
	// addi r19,r4,-23416
	ctx.r19.s64 = ctx.r4.s64 + -23416;
	// addi r27,r7,-25772
	ctx.r27.s64 = ctx.r7.s64 + -25772;
	// addi r26,r8,-24424
	ctx.r26.s64 = ctx.r8.s64 + -24424;
	// addi r25,r9,-23700
	ctx.r25.s64 = ctx.r9.s64 + -23700;
	// addi r24,r10,-23440
	ctx.r24.s64 = ctx.r10.s64 + -23440;
	// addi r18,r11,-23472
	ctx.r18.s64 = ctx.r11.s64 + -23472;
loc_82369014:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823693d4
	if (ctx.cr0.eq) goto loc_823693D4;
	// cmplwi cr6,r17,100
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 100, ctx.xer);
	// bge cr6,0x823693d4
	if (!ctx.cr6.lt) goto loc_823693D4;
	// subf r4,r3,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r3.s64;
	// add r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 + ctx.r3.u64;
	// bl 0x82369900
	ctx.lr = 0x82369030;
	sub_82369900(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82369284
	if (ctx.cr6.gt) goto loc_82369284;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-23488
	ctx.r12.s64 = ctx.r12.s64 + -23488;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,-28560
	ctx.r12.s64 = ctx.r12.s64 + -28560;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82369070;
	case 1:
		goto loc_82369080;
	case 2:
		goto loc_82369138;
	case 3:
		goto loc_82369164;
	case 4:
		goto loc_823690B4;
	case 5:
		goto loc_823690E0;
	case 6:
		goto loc_8236910C;
	case 7:
		goto loc_823691F4;
	case 8:
		goto loc_82369200;
	case 9:
		goto loc_8236922C;
	case 10:
		goto loc_82369258;
	case 11:
		goto loc_82369190;
	case 12:
		goto loc_8236919C;
	case 13:
		goto loc_823691C8;
	default:
		__builtin_unreachable();
	}
loc_82369070:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x823693bc
	goto loc_823693BC;
loc_82369080:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82369088;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823690a0
	if (ctx.cr0.eq) goto loc_823690A0;
	// bl 0x823663f0
	ctx.lr = 0x82369098;
	sub_823663F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823690a4
	goto loc_823690A4;
loc_823690A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823690A4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
loc_823690A8:
	// bl 0x82350190
	ctx.lr = 0x823690AC;
	sub_82350190(ctx, base);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x823692a8
	goto loc_823692A8;
loc_823690B4:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x823690BC;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823690d4
	if (ctx.cr0.eq) goto loc_823690D4;
	// bl 0x82369e90
	ctx.lr = 0x823690CC;
	sub_82369E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823690d8
	goto loc_823690D8;
loc_823690D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823690D8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_823690E0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x823690E8;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369100
	if (ctx.cr0.eq) goto loc_82369100;
	// bl 0x82368740
	ctx.lr = 0x823690F8;
	sub_82368740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369104
	goto loc_82369104;
loc_82369100:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369104:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_8236910C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82369114;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236912c
	if (ctx.cr0.eq) goto loc_8236912C;
	// bl 0x82368788
	ctx.lr = 0x82369124;
	sub_82368788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369130
	goto loc_82369130;
loc_8236912C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369130:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369138:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x82369140;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369158
	if (ctx.cr0.eq) goto loc_82369158;
	// bl 0x823670a0
	ctx.lr = 0x82369150;
	sub_823670A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8236915c
	goto loc_8236915C;
loc_82369158:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8236915C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369164:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x8236916C;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369184
	if (ctx.cr0.eq) goto loc_82369184;
	// bl 0x82367440
	ctx.lr = 0x8236917C;
	sub_82367440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369188
	goto loc_82369188;
loc_82369184:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369188:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369190:
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// li r8,190
	ctx.r8.s64 = 190;
	// b 0x823693a4
	goto loc_823693A4;
loc_8236919C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x823691A4;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823691bc
	if (ctx.cr0.eq) goto loc_823691BC;
	// bl 0x82367f48
	ctx.lr = 0x823691B4;
	sub_82367F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823691c0
	goto loc_823691C0;
loc_823691BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823691C0:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_823691C8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x823691D0;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823691e8
	if (ctx.cr0.eq) goto loc_823691E8;
	// bl 0x82368518
	ctx.lr = 0x823691E0;
	sub_82368518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823691ec
	goto loc_823691EC;
loc_823691E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823691EC:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_823691F4:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// li r8,200
	ctx.r8.s64 = 200;
	// b 0x823693a4
	goto loc_823693A4;
loc_82369200:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82369208;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369220
	if (ctx.cr0.eq) goto loc_82369220;
	// bl 0x823687d0
	ctx.lr = 0x82369218;
	sub_823687D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369224
	goto loc_82369224;
loc_82369220:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369224:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_8236922C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82369234;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236924c
	if (ctx.cr0.eq) goto loc_8236924C;
	// bl 0x82368938
	ctx.lr = 0x82369244;
	sub_82368938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369250
	goto loc_82369250;
loc_8236924C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369250:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369258:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82369260;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369278
	if (ctx.cr0.eq) goto loc_82369278;
	// bl 0x82368980
	ctx.lr = 0x82369270;
	sub_82368980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8236927c
	goto loc_8236927C;
loc_82369278:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8236927C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369284:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,214
	ctx.r8.s64 = 214;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823692A8;
	sub_82372320(ctx, base);
loc_823692A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823693bc
	if (ctx.cr6.eq) goto loc_823693BC;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823693bc
	if (ctx.cr0.eq) goto loc_823693BC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82369350
	if (!ctx.cr6.eq) goto loc_82369350;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
loc_823692C8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823692c8
	if (!ctx.cr0.eq) goto loc_823692C8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82375128
	ctx.lr = 0x823692F0;
	sub_82375128(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_823692F4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823692f4
	if (!ctx.cr0.eq) goto loc_823692F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366b18
	ctx.lr = 0x82369334;
	sub_82366B18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x8236934C;
	sub_82375128(ctx, base);
	// b 0x82369380
	goto loc_82369380;
loc_82369350:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82369370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
loc_82369380:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236939c
	if (ctx.cr0.eq) goto loc_8236939C;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// lwz r4,8(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// bl 0x82364358
	ctx.lr = 0x82369398;
	sub_82364358(ctx, base);
	// b 0x823693bc
	goto loc_823693BC;
loc_8236939C:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,236
	ctx.r8.s64 = 236;
loc_823693A4:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823693BC;
	sub_82372320(ctx, base);
loc_823693BC:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x823693C8;
	sub_82375128(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82369014
	if (ctx.cr6.lt) goto loc_82369014;
loc_823693D4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
}

__attribute__((alias("__imp__sub_82368EF8"))) PPC_WEAK_FUNC(sub_82368EF8);
PPC_FUNC_IMPL(__imp__sub_82368EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82368F00;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82368f30
	if (ctx.cr6.eq) goto loc_82368F30;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// ble cr6,0x82368f30
	if (!ctx.cr6.gt) goto loc_82368F30;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r17,0
	ctx.r17.s64 = 0;
	// b 0x82368f38
	goto loc_82368F38;
loc_82368F30:
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82368F38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r17,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r17.u16);
	// stw r17,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r17.u32);
	// beq 0x82368f6c
	if (ctx.cr0.eq) goto loc_82368F6C;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366390
	ctx.lr = 0x82368F60;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82368f70
	if (!ctx.cr0.eq) goto loc_82368F70;
loc_82368F6C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82368F70:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// add r22,r10,r30
	ctx.r22.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r17,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r17.u32);
	// subf r9,r28,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r28.s64;
	// stw r17,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r17.u32);
	// add r15,r28,r22
	ctx.r15.u64 = ctx.r28.u64 + ctx.r22.u64;
	// subf r16,r10,r9
	ctx.r16.s64 = ctx.r9.s64 - ctx.r10.s64;
	// beq 0x82368fc4
	if (ctx.cr0.eq) goto loc_82368FC4;
	// addi r7,r14,20
	ctx.r7.s64 = ctx.r14.s64 + 20;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82367040
	ctx.lr = 0x82368FB4;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82368fc8
	if (!ctx.cr0.eq) goto loc_82368FC8;
loc_82368FC4:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82368FC8:
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823693d4
	if (!ctx.cr6.lt) goto loc_823693D4;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r20,r6,-23364
	ctx.r20.s64 = ctx.r6.s64 + -23364;
	// addi r21,r5,-23384
	ctx.r21.s64 = ctx.r5.s64 + -23384;
	// addi r19,r4,-23416
	ctx.r19.s64 = ctx.r4.s64 + -23416;
	// addi r27,r7,-25772
	ctx.r27.s64 = ctx.r7.s64 + -25772;
	// addi r26,r8,-24424
	ctx.r26.s64 = ctx.r8.s64 + -24424;
	// addi r25,r9,-23700
	ctx.r25.s64 = ctx.r9.s64 + -23700;
	// addi r24,r10,-23440
	ctx.r24.s64 = ctx.r10.s64 + -23440;
	// addi r18,r11,-23472
	ctx.r18.s64 = ctx.r11.s64 + -23472;
loc_82369014:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823693d4
	if (ctx.cr0.eq) goto loc_823693D4;
	// cmplwi cr6,r17,100
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 100, ctx.xer);
	// bge cr6,0x823693d4
	if (!ctx.cr6.lt) goto loc_823693D4;
	// subf r4,r3,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r3.s64;
	// add r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 + ctx.r3.u64;
	// bl 0x82369900
	ctx.lr = 0x82369030;
	sub_82369900(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82369284
	if (ctx.cr6.gt) goto loc_82369284;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-23488
	ctx.r12.s64 = ctx.r12.s64 + -23488;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,-28560
	ctx.r12.s64 = ctx.r12.s64 + -28560;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82369070;
	case 1:
		goto loc_82369080;
	case 2:
		goto loc_82369138;
	case 3:
		goto loc_82369164;
	case 4:
		goto loc_823690B4;
	case 5:
		goto loc_823690E0;
	case 6:
		goto loc_8236910C;
	case 7:
		goto loc_823691F4;
	case 8:
		goto loc_82369200;
	case 9:
		goto loc_8236922C;
	case 10:
		goto loc_82369258;
	case 11:
		goto loc_82369190;
	case 12:
		goto loc_8236919C;
	case 13:
		goto loc_823691C8;
	default:
		__builtin_unreachable();
	}
loc_82369070:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x823693bc
	goto loc_823693BC;
loc_82369080:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82369088;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823690a0
	if (ctx.cr0.eq) goto loc_823690A0;
	// bl 0x823663f0
	ctx.lr = 0x82369098;
	sub_823663F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823690a4
	goto loc_823690A4;
loc_823690A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823690A4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
loc_823690A8:
	// bl 0x82350190
	ctx.lr = 0x823690AC;
	sub_82350190(ctx, base);
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x823692a8
	goto loc_823692A8;
loc_823690B4:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x823690BC;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823690d4
	if (ctx.cr0.eq) goto loc_823690D4;
	// bl 0x82369e90
	ctx.lr = 0x823690CC;
	sub_82369E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823690d8
	goto loc_823690D8;
loc_823690D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823690D8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_823690E0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x823690E8;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369100
	if (ctx.cr0.eq) goto loc_82369100;
	// bl 0x82368740
	ctx.lr = 0x823690F8;
	sub_82368740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369104
	goto loc_82369104;
loc_82369100:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369104:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_8236910C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82369114;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236912c
	if (ctx.cr0.eq) goto loc_8236912C;
	// bl 0x82368788
	ctx.lr = 0x82369124;
	sub_82368788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369130
	goto loc_82369130;
loc_8236912C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369130:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369138:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x82369140;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369158
	if (ctx.cr0.eq) goto loc_82369158;
	// bl 0x823670a0
	ctx.lr = 0x82369150;
	sub_823670A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8236915c
	goto loc_8236915C;
loc_82369158:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8236915C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369164:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x8236916C;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369184
	if (ctx.cr0.eq) goto loc_82369184;
	// bl 0x82367440
	ctx.lr = 0x8236917C;
	sub_82367440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369188
	goto loc_82369188;
loc_82369184:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369188:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369190:
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// li r8,190
	ctx.r8.s64 = 190;
	// b 0x823693a4
	goto loc_823693A4;
loc_8236919C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x823691A4;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823691bc
	if (ctx.cr0.eq) goto loc_823691BC;
	// bl 0x82367f48
	ctx.lr = 0x823691B4;
	sub_82367F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823691c0
	goto loc_823691C0;
loc_823691BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823691C0:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_823691C8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x823691D0;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823691e8
	if (ctx.cr0.eq) goto loc_823691E8;
	// bl 0x82368518
	ctx.lr = 0x823691E0;
	sub_82368518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823691ec
	goto loc_823691EC;
loc_823691E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823691EC:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_823691F4:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// li r8,200
	ctx.r8.s64 = 200;
	// b 0x823693a4
	goto loc_823693A4;
loc_82369200:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82369208;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369220
	if (ctx.cr0.eq) goto loc_82369220;
	// bl 0x823687d0
	ctx.lr = 0x82369218;
	sub_823687D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369224
	goto loc_82369224;
loc_82369220:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369224:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_8236922C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82369234;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236924c
	if (ctx.cr0.eq) goto loc_8236924C;
	// bl 0x82368938
	ctx.lr = 0x82369244;
	sub_82368938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369250
	goto loc_82369250;
loc_8236924C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82369250:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369258:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82369260;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82369278
	if (ctx.cr0.eq) goto loc_82369278;
	// bl 0x82368980
	ctx.lr = 0x82369270;
	sub_82368980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8236927c
	goto loc_8236927C;
loc_82369278:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8236927C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x823690a8
	goto loc_823690A8;
loc_82369284:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,214
	ctx.r8.s64 = 214;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823692A8;
	sub_82372320(ctx, base);
loc_823692A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823693bc
	if (ctx.cr6.eq) goto loc_823693BC;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823693bc
	if (ctx.cr0.eq) goto loc_823693BC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82369350
	if (!ctx.cr6.eq) goto loc_82369350;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
loc_823692C8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823692c8
	if (!ctx.cr0.eq) goto loc_823692C8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82375128
	ctx.lr = 0x823692F0;
	sub_82375128(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_823692F4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823692f4
	if (!ctx.cr0.eq) goto loc_823692F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366b18
	ctx.lr = 0x82369334;
	sub_82366B18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x8236934C;
	sub_82375128(ctx, base);
	// b 0x82369380
	goto loc_82369380;
loc_82369350:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82369370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
loc_82369380:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236939c
	if (ctx.cr0.eq) goto loc_8236939C;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// lwz r4,8(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// bl 0x82364358
	ctx.lr = 0x82369398;
	sub_82364358(ctx, base);
	// b 0x823693bc
	goto loc_823693BC;
loc_8236939C:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,236
	ctx.r8.s64 = 236;
loc_823693A4:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823693BC;
	sub_82372320(ctx, base);
loc_823693BC:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x823693C8;
	sub_82375128(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82369014
	if (ctx.cr6.lt) goto loc_82369014;
loc_823693D4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823693DC"))) PPC_WEAK_FUNC(sub_823693DC);
PPC_FUNC_IMPL(__imp__sub_823693DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823693E0"))) PPC_WEAK_FUNC(sub_823693E0);
PPC_FUNC_IMPL(__imp__sub_823693E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	// bl 0x82375128
	ctx.lr = 0x823693F8;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369408"))) PPC_WEAK_FUNC(sub_82369408);
PPC_FUNC_IMPL(__imp__sub_82369408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x82369420;
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

__attribute__((alias("__imp__sub_82369430"))) PPC_WEAK_FUNC(sub_82369430);
PPC_FUNC_IMPL(__imp__sub_82369430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x82369448;
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

__attribute__((alias("__imp__sub_82369458"))) PPC_WEAK_FUNC(sub_82369458);
PPC_FUNC_IMPL(__imp__sub_82369458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x82369470;
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

__attribute__((alias("__imp__sub_82369480"))) PPC_WEAK_FUNC(sub_82369480);
PPC_FUNC_IMPL(__imp__sub_82369480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x82369498;
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

__attribute__((alias("__imp__sub_823694A8"))) PPC_WEAK_FUNC(sub_823694A8);
PPC_FUNC_IMPL(__imp__sub_823694A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x823694C0;
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

__attribute__((alias("__imp__sub_823694D0"))) PPC_WEAK_FUNC(sub_823694D0);
PPC_FUNC_IMPL(__imp__sub_823694D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x823694E8;
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

__attribute__((alias("__imp__sub_823694F8"))) PPC_WEAK_FUNC(sub_823694F8);
PPC_FUNC_IMPL(__imp__sub_823694F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x82369510;
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

__attribute__((alias("__imp__sub_82369520"))) PPC_WEAK_FUNC(sub_82369520);
PPC_FUNC_IMPL(__imp__sub_82369520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x82369538;
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

__attribute__((alias("__imp__sub_82369548"))) PPC_WEAK_FUNC(sub_82369548);
PPC_FUNC_IMPL(__imp__sub_82369548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x82369560;
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

__attribute__((alias("__imp__sub_82369570"))) PPC_WEAK_FUNC(sub_82369570);
PPC_FUNC_IMPL(__imp__sub_82369570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x82369588;
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

__attribute__((alias("__imp__sub_82369598"))) PPC_WEAK_FUNC(sub_82369598);
PPC_FUNC_IMPL(__imp__sub_82369598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	ctx.lr = 0x823695B0;
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

__attribute__((alias("__imp__sub_823695C0"))) PPC_WEAK_FUNC(sub_823695C0);
PPC_FUNC_IMPL(__imp__sub_823695C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
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
	// bl 0x82375128
	ctx.lr = 0x823695D8;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823695E8"))) PPC_WEAK_FUNC(sub_823695E8);
PPC_FUNC_IMPL(__imp__sub_823695E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-22944(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -22944);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823695F8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82369624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82369650
	if (ctx.cr6.gt) goto loc_82369650;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82364358
	ctx.lr = 0x82369648;
	sub_82364358(ctx, base);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82369650:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82369658;
	sub_82375128(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823695F0"))) PPC_WEAK_FUNC(sub_823695F0);
PPC_FUNC_IMPL(__imp__sub_823695F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823695F8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82369624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82369650
	if (ctx.cr6.gt) goto loc_82369650;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82364358
	ctx.lr = 0x82369648;
	sub_82364358(ctx, base);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82369650:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82369658;
	sub_82375128(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369664"))) PPC_WEAK_FUNC(sub_82369664);
PPC_FUNC_IMPL(__imp__sub_82369664) {
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
	// bl 0x82375128
	ctx.lr = 0x8236967C;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236968C"))) PPC_WEAK_FUNC(sub_8236968C);
PPC_FUNC_IMPL(__imp__sub_8236968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369690"))) PPC_WEAK_FUNC(sub_82369690);
PPC_FUNC_IMPL(__imp__sub_82369690) {
	PPC_FUNC_PROLOGUE();
	// b 0x82366108
	sub_82366108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369694"))) PPC_WEAK_FUNC(sub_82369694);
PPC_FUNC_IMPL(__imp__sub_82369694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369698"))) PPC_WEAK_FUNC(sub_82369698);
PPC_FUNC_IMPL(__imp__sub_82369698) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-22880
	ctx.r10.s64 = ctx.r10.s64 + -22880;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823696C8"))) PPC_WEAK_FUNC(sub_823696C8);
PPC_FUNC_IMPL(__imp__sub_823696C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-22880
	ctx.r10.s64 = ctx.r10.s64 + -22880;
	// addi r9,r5,-6
	ctx.r9.s64 = ctx.r5.s64 + -6;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369700"))) PPC_WEAK_FUNC(sub_82369700);
PPC_FUNC_IMPL(__imp__sub_82369700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-22864(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -22864);
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
	// addi r11,r11,-22880
	ctx.r11.s64 = ctx.r11.s64 + -22880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x821c0630
	ctx.lr = 0x8236973C;
	sub_821C0630(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82366108
	ctx.lr = 0x82369744;
	sub_82366108(ctx, base);
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

__attribute__((alias("__imp__sub_82369708"))) PPC_WEAK_FUNC(sub_82369708);
PPC_FUNC_IMPL(__imp__sub_82369708) {
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
	// addi r11,r11,-22880
	ctx.r11.s64 = ctx.r11.s64 + -22880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x821c0630
	ctx.lr = 0x8236973C;
	sub_821C0630(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82366108
	ctx.lr = 0x82369744;
	sub_82366108(ctx, base);
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

__attribute__((alias("__imp__sub_8236975C"))) PPC_WEAK_FUNC(sub_8236975C);
PPC_FUNC_IMPL(__imp__sub_8236975C) {
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
	// bl 0x82369690
	ctx.lr = 0x82369778;
	sub_82369690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369788"))) PPC_WEAK_FUNC(sub_82369788);
PPC_FUNC_IMPL(__imp__sub_82369788) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823697d8
	if (ctx.cr6.eq) goto loc_823697D8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bl 0x823689c8
	ctx.lr = 0x823697C0;
	sub_823689C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82368e48
	ctx.lr = 0x823697D4;
	sub_82368E48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_823697D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_823697F4"))) PPC_WEAK_FUNC(sub_823697F4);
PPC_FUNC_IMPL(__imp__sub_823697F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823697F8"))) PPC_WEAK_FUNC(sub_823697F8);
PPC_FUNC_IMPL(__imp__sub_823697F8) {
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
	// bl 0x82369708
	ctx.lr = 0x82369818;
	sub_82369708(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82369828
	if (ctx.cr0.eq) goto loc_82369828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82369828;
	sub_8236A3F0(ctx, base);
loc_82369828:
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

__attribute__((alias("__imp__sub_82369844"))) PPC_WEAK_FUNC(sub_82369844);
PPC_FUNC_IMPL(__imp__sub_82369844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369848"))) PPC_WEAK_FUNC(sub_82369848);
PPC_FUNC_IMPL(__imp__sub_82369848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22808
	ctx.r11.s64 = ctx.r11.s64 + -22808;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369864"))) PPC_WEAK_FUNC(sub_82369864);
PPC_FUNC_IMPL(__imp__sub_82369864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369868"))) PPC_WEAK_FUNC(sub_82369868);
PPC_FUNC_IMPL(__imp__sub_82369868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-22808
	ctx.r11.s64 = ctx.r11.s64 + -22808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8236db30
	sub_8236DB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369878"))) PPC_WEAK_FUNC(sub_82369878);
PPC_FUNC_IMPL(__imp__sub_82369878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82369890"))) PPC_WEAK_FUNC(sub_82369890);
PPC_FUNC_IMPL(__imp__sub_82369890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
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

__attribute__((alias("__imp__sub_823698A4"))) PPC_WEAK_FUNC(sub_823698A4);
PPC_FUNC_IMPL(__imp__sub_823698A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823698A8"))) PPC_WEAK_FUNC(sub_823698A8);
PPC_FUNC_IMPL(__imp__sub_823698A8) {
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
	// addi r11,r11,-22808
	ctx.r11.s64 = ctx.r11.s64 + -22808;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8236db30
	ctx.lr = 0x823698D4;
	sub_8236DB30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823698e4
	if (ctx.cr0.eq) goto loc_823698E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x823698E4;
	sub_8236A3F0(ctx, base);
loc_823698E4:
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

__attribute__((alias("__imp__sub_82369900"))) PPC_WEAK_FUNC(sub_82369900);
PPC_FUNC_IMPL(__imp__sub_82369900) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x8236ead8
	ctx.lr = 0x82369934;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82369940
	if (ctx.cr0.eq) goto loc_82369940;
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82369940:
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
	// beq 0x82369954
	if (ctx.cr0.eq) goto loc_82369954;
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
loc_82369954:
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

__attribute__((alias("__imp__sub_82369970"))) PPC_WEAK_FUNC(sub_82369970);
PPC_FUNC_IMPL(__imp__sub_82369970) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823699AC;
	sub_8236EA10(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823699C0"))) PPC_WEAK_FUNC(sub_823699C0);
PPC_FUNC_IMPL(__imp__sub_823699C0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82369a18
	if (ctx.cr6.lt) goto loc_82369A18;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8236ead8
	ctx.lr = 0x82369A00;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82369a0c
	if (ctx.cr0.eq) goto loc_82369A0C;
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82369A0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82369a1c
	if (!ctx.cr6.eq) goto loc_82369A1C;
loc_82369A18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82369A1C:
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82369a2c
	if (ctx.cr0.eq) goto loc_82369A2C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82369A2C:
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

__attribute__((alias("__imp__sub_82369A44"))) PPC_WEAK_FUNC(sub_82369A44);
PPC_FUNC_IMPL(__imp__sub_82369A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369A48"))) PPC_WEAK_FUNC(sub_82369A48);
PPC_FUNC_IMPL(__imp__sub_82369A48) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369A50"))) PPC_WEAK_FUNC(sub_82369A50);
PPC_FUNC_IMPL(__imp__sub_82369A50) {
	PPC_FUNC_PROLOGUE();
	// sth r4,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369A58"))) PPC_WEAK_FUNC(sub_82369A58);
PPC_FUNC_IMPL(__imp__sub_82369A58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369A60"))) PPC_WEAK_FUNC(sub_82369A60);
PPC_FUNC_IMPL(__imp__sub_82369A60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369A68"))) PPC_WEAK_FUNC(sub_82369A68);
PPC_FUNC_IMPL(__imp__sub_82369A68) {
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
	// b 0x82369a94
	goto loc_82369A94;
loc_82369A84:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8236a3f0
	ctx.lr = 0x82369A90;
	sub_8236A3F0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82369A94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82369a84
	if (!ctx.cr6.eq) goto loc_82369A84;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82369AC0"))) PPC_WEAK_FUNC(sub_82369AC0);
PPC_FUNC_IMPL(__imp__sub_82369AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82369AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8236a338
	ctx.lr = 0x82369AE0;
	sub_8236A338(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82369afc
	if (ctx.cr0.eq) goto loc_82369AFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82369b00
	goto loc_82369B00;
loc_82369AFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82369B00:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82369b34
	if (ctx.cr6.eq) goto loc_82369B34;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82369b28
	if (ctx.cr6.eq) goto loc_82369B28;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x82369b2c
	goto loc_82369B2C;
loc_82369B28:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82369B2C:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82369b60
	goto loc_82369B60;
loc_82369B34:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82369b58
	if (ctx.cr6.eq) goto loc_82369B58;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82369b5c
	goto loc_82369B5C;
loc_82369B58:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82369B5C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82369B60:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369B74"))) PPC_WEAK_FUNC(sub_82369B74);
PPC_FUNC_IMPL(__imp__sub_82369B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369B78"))) PPC_WEAK_FUNC(sub_82369B78);
PPC_FUNC_IMPL(__imp__sub_82369B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82369B80;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82369970
	ctx.lr = 0x82369B94;
	sub_82369970(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82369BBC;
	sub_8236EA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82369c24
	if (ctx.cr0.eq) goto loc_82369C24;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r1,90
	ctx.r9.s64 = ctx.r1.s64 + 90;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82369BE8:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82369be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369BE8;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82369C18;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82369c28
	if (!ctx.cr0.eq) goto loc_82369C28;
loc_82369C24:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82369C28:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// sth r9,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// beq 0x82369c8c
	if (ctx.cr0.eq) goto loc_82369C8C;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82369C54:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82369c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369C54;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,90
	ctx.r7.s64 = ctx.r1.s64 + 90;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82369C80;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82369c90
	if (!ctx.cr0.eq) goto loc_82369C90;
loc_82369C8C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82369C90:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq 0x82369cec
	if (ctx.cr0.eq) goto loc_82369CEC;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82369CB0:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82369cb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369CB0;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82369CE0;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82369cf0
	if (!ctx.cr0.eq) goto loc_82369CF0;
loc_82369CEC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82369CF0:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// beq 0x82369d4c
	if (ctx.cr0.eq) goto loc_82369D4C;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r1,94
	ctx.r9.s64 = ctx.r1.s64 + 94;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82369D10:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82369d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369D10;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82369D40;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82369d50
	if (!ctx.cr0.eq) goto loc_82369D50;
loc_82369D4C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82369D50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// beq 0x82369da8
	if (ctx.cr0.eq) goto loc_82369DA8;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82369D6C:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82369d6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369D6C;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,94
	ctx.r7.s64 = ctx.r1.s64 + 94;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82369D9C;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82369dac
	if (!ctx.cr0.eq) goto loc_82369DAC;
loc_82369DA8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82369DAC:
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x82369e78
	goto loc_82369E78;
loc_82369DB4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// beq 0x82369e10
	if (ctx.cr0.eq) goto loc_82369E10;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r1,98
	ctx.r9.s64 = ctx.r1.s64 + 98;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82369DD4:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82369dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369DD4;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82369E04;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82369e14
	if (!ctx.cr0.eq) goto loc_82369E14;
loc_82369E10:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82369E14:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// beq 0x82369e70
	if (ctx.cr0.eq) goto loc_82369E70;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82369E34:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82369e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82369E34;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82369E64;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82369e74
	if (!ctx.cr0.eq) goto loc_82369E74;
loc_82369E70:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82369E74:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82369E78:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x82369db4
	if (!ctx.cr6.eq) goto loc_82369DB4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369E90"))) PPC_WEAK_FUNC(sub_82369E90);
PPC_FUNC_IMPL(__imp__sub_82369E90) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82369848
	ctx.lr = 0x82369EAC;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-22788
	ctx.r10.s64 = ctx.r10.s64 + -22788;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82369EEC"))) PPC_WEAK_FUNC(sub_82369EEC);
PPC_FUNC_IMPL(__imp__sub_82369EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369EF0"))) PPC_WEAK_FUNC(sub_82369EF0);
PPC_FUNC_IMPL(__imp__sub_82369EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82369EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82369848
	ctx.lr = 0x82369F10;
	sub_82369848(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-22788
	ctx.r10.s64 = ctx.r10.s64 + -22788;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369F44"))) PPC_WEAK_FUNC(sub_82369F44);
PPC_FUNC_IMPL(__imp__sub_82369F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369F48"))) PPC_WEAK_FUNC(sub_82369F48);
PPC_FUNC_IMPL(__imp__sub_82369F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-22760(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -22760);
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
	// addi r11,r11,-22788
	ctx.r11.s64 = ctx.r11.s64 + -22788;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82369a68
	ctx.lr = 0x82369F84;
	sub_82369A68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x82369F8C;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_82369F50"))) PPC_WEAK_FUNC(sub_82369F50);
PPC_FUNC_IMPL(__imp__sub_82369F50) {
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
	// addi r11,r11,-22788
	ctx.r11.s64 = ctx.r11.s64 + -22788;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82369a68
	ctx.lr = 0x82369F84;
	sub_82369A68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369868
	ctx.lr = 0x82369F8C;
	sub_82369868(ctx, base);
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

__attribute__((alias("__imp__sub_82369FA4"))) PPC_WEAK_FUNC(sub_82369FA4);
PPC_FUNC_IMPL(__imp__sub_82369FA4) {
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
	// bl 0x82369868
	ctx.lr = 0x82369FBC;
	sub_82369868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369FCC"))) PPC_WEAK_FUNC(sub_82369FCC);
PPC_FUNC_IMPL(__imp__sub_82369FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369FD0"))) PPC_WEAK_FUNC(sub_82369FD0);
PPC_FUNC_IMPL(__imp__sub_82369FD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82369ac0
	sub_82369AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369FE4"))) PPC_WEAK_FUNC(sub_82369FE4);
PPC_FUNC_IMPL(__imp__sub_82369FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369FE8"))) PPC_WEAK_FUNC(sub_82369FE8);
PPC_FUNC_IMPL(__imp__sub_82369FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82369FF0;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x823699c0
	ctx.lr = 0x8236A01C;
	sub_823699C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236a058
	if (ctx.cr0.eq) goto loc_8236A058;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8236ead8
	ctx.lr = 0x8236A040;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236a04c
	if (ctx.cr0.eq) goto loc_8236A04C;
	// lbz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
loc_8236A04C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8236a05c
	if (!ctx.cr6.eq) goto loc_8236A05C;
loc_8236A058:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8236A05C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// sth r19,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r19.u16);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r10.u32);
	// beq 0x8236a094
	if (ctx.cr0.eq) goto loc_8236A094;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82366390
	ctx.lr = 0x8236A088;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8236a098
	if (!ctx.cr0.eq) goto loc_8236A098;
loc_8236A094:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8236A098:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r19,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r19.u16);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// beq 0x8236a0d0
	if (ctx.cr0.eq) goto loc_8236A0D0;
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82366390
	ctx.lr = 0x8236A0C4;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8236a0d4
	if (!ctx.cr0.eq) goto loc_8236A0D4;
loc_8236A0D0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8236A0D4:
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// sth r10,20(r23)
	PPC_STORE_U16(ctx.r23.u32 + 20, ctx.r10.u16);
	// beq 0x8236a10c
	if (ctx.cr0.eq) goto loc_8236A10C;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82367040
	ctx.lr = 0x8236A100;
	sub_82367040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8236a110
	if (!ctx.cr0.eq) goto loc_8236A110;
loc_8236A10C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8236A110:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r19,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r19.u16);
	// stw r10,36(r23)
	PPC_STORE_U32(ctx.r23.u32 + 36, ctx.r10.u32);
	// beq 0x8236a148
	if (ctx.cr0.eq) goto loc_8236A148;
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82366390
	ctx.lr = 0x8236A13C;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8236a14c
	if (!ctx.cr0.eq) goto loc_8236A14C;
loc_8236A148:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8236A14C:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi. r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// beq 0x8236a268
	if (ctx.cr0.eq) goto loc_8236A268;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lhz r24,98(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r9,29112
	ctx.r29.s64 = ctx.r9.s64 + 29112;
	// addi r28,r8,-22628
	ctx.r28.s64 = ctx.r8.s64 + -22628;
	// addi r27,r7,-22656
	ctx.r27.s64 = ctx.r7.s64 + -22656;
	// addi r26,r10,-22684
	ctx.r26.s64 = ctx.r10.s64 + -22684;
	// addi r25,r11,-22704
	ctx.r25.s64 = ctx.r11.s64 + -22704;
loc_8236A194:
	// clrlwi r30,r6,16
	ctx.r30.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8236a268
	if (!ctx.cr6.lt) goto loc_8236A268;
	// sth r19,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r19.u16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236a1d0
	if (ctx.cr6.eq) goto loc_8236A1D0;
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82366390
	ctx.lr = 0x8236A1C4;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8236a1d4
	if (!ctx.cr0.eq) goto loc_8236A1D4;
loc_8236A1D0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8236A1D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r19,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r19.u16);
	// beq 0x8236a204
	if (ctx.cr0.eq) goto loc_8236A204;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82366390
	ctx.lr = 0x8236A1F8;
	sub_82366390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8236a208
	if (!ctx.cr0.eq) goto loc_8236A208;
loc_8236A204:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8236A208:
	// lhz r18,98(r1)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// addi r3,r23,24
	ctx.r3.s64 = ctx.r23.s64 + 24;
	// lhz r17,100(r1)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,28(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// bl 0x82369ac0
	ctx.lr = 0x8236A22C;
	sub_82369AC0(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// li r8,167
	ctx.r8.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8236A254;
	sub_82372320(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8236a194
	if (!ctx.cr0.eq) goto loc_8236A194;
loc_8236A268:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236a278
	if (ctx.cr6.eq) goto loc_8236A278;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_8236A278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236A284"))) PPC_WEAK_FUNC(sub_8236A284);
PPC_FUNC_IMPL(__imp__sub_8236A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A288"))) PPC_WEAK_FUNC(sub_8236A288);
PPC_FUNC_IMPL(__imp__sub_8236A288) {
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
	// bl 0x82369f50
	ctx.lr = 0x8236A2A8;
	sub_82369F50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236a2b8
	if (ctx.cr0.eq) goto loc_8236A2B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8236A2B8;
	sub_8236A3F0(ctx, base);
loc_8236A2B8:
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

__attribute__((alias("__imp__sub_8236A2D4"))) PPC_WEAK_FUNC(sub_8236A2D4);
PPC_FUNC_IMPL(__imp__sub_8236A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A2D8"))) PPC_WEAK_FUNC(sub_8236A2D8);
PPC_FUNC_IMPL(__imp__sub_8236A2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r3,23860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23860, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A2E4"))) PPC_WEAK_FUNC(sub_8236A2E4);
PPC_FUNC_IMPL(__imp__sub_8236A2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A2E8"))) PPC_WEAK_FUNC(sub_8236A2E8);
PPC_FUNC_IMPL(__imp__sub_8236A2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r3,23864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23864, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A2F4"))) PPC_WEAK_FUNC(sub_8236A2F4);
PPC_FUNC_IMPL(__imp__sub_8236A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A2F8"))) PPC_WEAK_FUNC(sub_8236A2F8);
PPC_FUNC_IMPL(__imp__sub_8236A2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r3,23868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23868, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A304"))) PPC_WEAK_FUNC(sub_8236A304);
PPC_FUNC_IMPL(__imp__sub_8236A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A308"))) PPC_WEAK_FUNC(sub_8236A308);
PPC_FUNC_IMPL(__imp__sub_8236A308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r3,23872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23872, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A314"))) PPC_WEAK_FUNC(sub_8236A314);
PPC_FUNC_IMPL(__imp__sub_8236A314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A318"))) PPC_WEAK_FUNC(sub_8236A318);
PPC_FUNC_IMPL(__imp__sub_8236A318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r3,23876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23876, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A324"))) PPC_WEAK_FUNC(sub_8236A324);
PPC_FUNC_IMPL(__imp__sub_8236A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A328"))) PPC_WEAK_FUNC(sub_8236A328);
PPC_FUNC_IMPL(__imp__sub_8236A328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r3,23880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23880, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A334"))) PPC_WEAK_FUNC(sub_8236A334);
PPC_FUNC_IMPL(__imp__sub_8236A334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A338"))) PPC_WEAK_FUNC(sub_8236A338);
PPC_FUNC_IMPL(__imp__sub_8236A338) {
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
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,23860(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23860);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236a374
	if (ctx.cr6.eq) goto loc_8236A374;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236A368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8236a374
	if (!ctx.cr0.eq) goto loc_8236A374;
	// bl 0x82247498
	ctx.lr = 0x8236A374;
	sub_82247498(ctx, base);
loc_8236A374:
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

__attribute__((alias("__imp__sub_8236A38C"))) PPC_WEAK_FUNC(sub_8236A38C);
PPC_FUNC_IMPL(__imp__sub_8236A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A390"))) PPC_WEAK_FUNC(sub_8236A390);
PPC_FUNC_IMPL(__imp__sub_8236A390) {
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
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,23868(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23868);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236a3cc
	if (ctx.cr6.eq) goto loc_8236A3CC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236A3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8236a3cc
	if (!ctx.cr0.eq) goto loc_8236A3CC;
	// bl 0x82247498
	ctx.lr = 0x8236A3CC;
	sub_82247498(ctx, base);
loc_8236A3CC:
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

__attribute__((alias("__imp__sub_8236A3E4"))) PPC_WEAK_FUNC(sub_8236A3E4);
PPC_FUNC_IMPL(__imp__sub_8236A3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A3E8"))) PPC_WEAK_FUNC(sub_8236A3E8);
PPC_FUNC_IMPL(__imp__sub_8236A3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236a338
	sub_8236A338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236A3EC"))) PPC_WEAK_FUNC(sub_8236A3EC);
PPC_FUNC_IMPL(__imp__sub_8236A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A3F0"))) PPC_WEAK_FUNC(sub_8236A3F0);
PPC_FUNC_IMPL(__imp__sub_8236A3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lwz r10,23864(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23864);
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

__attribute__((alias("__imp__sub_8236A40C"))) PPC_WEAK_FUNC(sub_8236A40C);
PPC_FUNC_IMPL(__imp__sub_8236A40C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A410"))) PPC_WEAK_FUNC(sub_8236A410);
PPC_FUNC_IMPL(__imp__sub_8236A410) {
	PPC_FUNC_PROLOGUE();
	// stb r4,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A418"))) PPC_WEAK_FUNC(sub_8236A418);
PPC_FUNC_IMPL(__imp__sub_8236A418) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,33(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A420"))) PPC_WEAK_FUNC(sub_8236A420);
PPC_FUNC_IMPL(__imp__sub_8236A420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8236A428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8236A434:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236a434
	if (!ctx.cr6.eq) goto loc_8236A434;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x8236a484
	if (ctx.cr6.eq) goto loc_8236A484;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236a484
	if (ctx.cr6.eq) goto loc_8236A484;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8236a470
	if (!ctx.cr6.lt) goto loc_8236A470;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8236A470:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8236A47C;
	sub_8233E4E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_8236A484:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236A490"))) PPC_WEAK_FUNC(sub_8236A490);
PPC_FUNC_IMPL(__imp__sub_8236A490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236a588
	if (ctx.cr6.eq) goto loc_8236A588;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8236a4c8
	if (!ctx.cr6.gt) goto loc_8236A4C8;
loc_8236A4B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// b 0x8236a58c
	goto loc_8236A58C;
loc_8236A4C8:
	// addi r6,r4,-1
	ctx.r6.s64 = ctx.r4.s64 + -1;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r3,255
	ctx.r3.s64 = 255;
loc_8236A4D4:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8236a4b8
	if (!ctx.cr6.lt) goto loc_8236A4B8;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x8236a4f0
	if (ctx.cr6.lt) goto loc_8236A4F0;
	// li r10,8
	ctx.r10.s64 = 8;
loc_8236A4F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// ble cr6,0x8236a554
	if (!ctx.cr6.gt) goto loc_8236A554;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8236a4b8
	if (!ctx.cr6.lt) goto loc_8236A4B8;
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// subfic r4,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r4.s64 = 8 - ctx.r11.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// slw r8,r8,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// subfic r4,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r4.s64 = 8 - ctx.r10.s64;
	// srw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// sraw r7,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r7.s64 = ctx.r3.s32 >> temp.u32;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r11.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x8236a574
	goto loc_8236A574;
loc_8236A554:
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sraw r8,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stbu r11,1(r6)
	ea = 1 + ctx.r6.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r6.u32 = ea;
loc_8236A574:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf. r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne 0x8236a4d4
	if (!ctx.cr0.eq) goto loc_8236A4D4;
loc_8236A588:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8236A58C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

