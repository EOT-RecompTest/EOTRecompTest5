#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8235FA94"))) PPC_WEAK_FUNC(sub_8235FA94);
PPC_FUNC_IMPL(__imp__sub_8235FA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FA98"))) PPC_WEAK_FUNC(sub_8235FA98);
PPC_FUNC_IMPL(__imp__sub_8235FA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,32288(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32288);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r10,r10,32128
	ctx.r10.s64 = ctx.r10.s64 + 32128;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r31,32
	ctx.r1.s64 = ctx.r31.s64 + 32;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FAA0"))) PPC_WEAK_FUNC(sub_8235FAA0);
PPC_FUNC_IMPL(__imp__sub_8235FAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r10,r10,32128
	ctx.r10.s64 = ctx.r10.s64 + 32128;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r31,32
	ctx.r1.s64 = ctx.r31.s64 + 32;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FB00"))) PPC_WEAK_FUNC(sub_8235FB00);
PPC_FUNC_IMPL(__imp__sub_8235FB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-32
	ctx.r31.s64 = ctx.r12.s64 + -32;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8236db30
	ctx.lr = 0x8235FB18;
	sub_8236DB30(ctx, base);
	// addi r1,r1,32
	ctx.r1.s64 = ctx.r1.s64 + 32;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FB28"))) PPC_WEAK_FUNC(sub_8235FB28);
PPC_FUNC_IMPL(__imp__sub_8235FB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-32
	ctx.r31.s64 = ctx.r12.s64 + -32;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821c0630
	ctx.lr = 0x8235FB44;
	sub_821C0630(ctx, base);
	// addi r1,r1,32
	ctx.r1.s64 = ctx.r1.s64 + 32;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FB54"))) PPC_WEAK_FUNC(sub_8235FB54);
PPC_FUNC_IMPL(__imp__sub_8235FB54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-32
	ctx.r31.s64 = ctx.r12.s64 + -32;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82375128
	ctx.lr = 0x8235FB70;
	sub_82375128(ctx, base);
	// addi r1,r1,32
	ctx.r1.s64 = ctx.r1.s64 + 32;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FB80"))) PPC_WEAK_FUNC(sub_8235FB80);
PPC_FUNC_IMPL(__imp__sub_8235FB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,32360(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32360);
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r10,r10,32128
	ctx.r10.s64 = ctx.r10.s64 + 32128;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8235fbf8
	if (ctx.cr6.eq) goto loc_8235FBF8;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_8235FBD8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8235fbd8
	if (!ctx.cr0.eq) goto loc_8235FBD8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8235FBF8:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821c0630
	ctx.lr = 0x8235FC28;
	sub_821C0630(ctx, base);
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

__attribute__((alias("__imp__sub_8235FB88"))) PPC_WEAK_FUNC(sub_8235FB88);
PPC_FUNC_IMPL(__imp__sub_8235FB88) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r10,r10,32128
	ctx.r10.s64 = ctx.r10.s64 + 32128;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8235fbf8
	if (ctx.cr6.eq) goto loc_8235FBF8;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_8235FBD8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8235fbd8
	if (!ctx.cr0.eq) goto loc_8235FBD8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8235FBF8:
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821c0630
	ctx.lr = 0x8235FC28;
	sub_821C0630(ctx, base);
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

__attribute__((alias("__imp__sub_8235FC44"))) PPC_WEAK_FUNC(sub_8235FC44);
PPC_FUNC_IMPL(__imp__sub_8235FC44) {
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
	ctx.lr = 0x8235FC5C;
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

__attribute__((alias("__imp__sub_8235FC6C"))) PPC_WEAK_FUNC(sub_8235FC6C);
PPC_FUNC_IMPL(__imp__sub_8235FC6C) {
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
	ctx.lr = 0x8235FC84;
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

__attribute__((alias("__imp__sub_8235FC94"))) PPC_WEAK_FUNC(sub_8235FC94);
PPC_FUNC_IMPL(__imp__sub_8235FC94) {
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
	// bl 0x821c0630
	ctx.lr = 0x8235FCB0;
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

__attribute__((alias("__imp__sub_8235FCC0"))) PPC_WEAK_FUNC(sub_8235FCC0);
PPC_FUNC_IMPL(__imp__sub_8235FCC0) {
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
	// bl 0x82375128
	ctx.lr = 0x8235FCDC;
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

__attribute__((alias("__imp__sub_8235FCEC"))) PPC_WEAK_FUNC(sub_8235FCEC);
PPC_FUNC_IMPL(__imp__sub_8235FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FCF0"))) PPC_WEAK_FUNC(sub_8235FCF0);
PPC_FUNC_IMPL(__imp__sub_8235FCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8235FCF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8235fd54
	if (!ctx.cr6.gt) goto loc_8235FD54;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8235FD18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235fd40
	if (!ctx.cr6.eq) goto loc_8235FD40;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235f888
	ctx.lr = 0x8235FD38;
	sub_8235F888(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8235FD40:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235fd18
	if (ctx.cr6.lt) goto loc_8235FD18;
loc_8235FD54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235FD5C"))) PPC_WEAK_FUNC(sub_8235FD5C);
PPC_FUNC_IMPL(__imp__sub_8235FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FD60"))) PPC_WEAK_FUNC(sub_8235FD60);
PPC_FUNC_IMPL(__imp__sub_8235FD60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x8235fcf0
	sub_8235FCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235FD68"))) PPC_WEAK_FUNC(sub_8235FD68);
PPC_FUNC_IMPL(__imp__sub_8235FD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8235fd98
	if (!ctx.cr6.gt) goto loc_8235FD98;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// b 0x8236e690
	sub_8236E690(ctx, base);
	return;
loc_8235FD98:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8235FDAC"))) PPC_WEAK_FUNC(sub_8235FDAC);
PPC_FUNC_IMPL(__imp__sub_8235FDAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FDB0"))) PPC_WEAK_FUNC(sub_8235FDB0);
PPC_FUNC_IMPL(__imp__sub_8235FDB0) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r31,4
	ctx.r31.s64 = 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8235fe34
	if (ctx.cr6.lt) goto loc_8235FE34;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8235fe2c
	if (ctx.cr6.lt) goto loc_8235FE2C;
	// beq cr6,0x8235fe24
	if (ctx.cr6.eq) goto loc_8235FE24;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8235fe1c
	if (ctx.cr6.lt) goto loc_8235FE1C;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,32476
	ctx.r9.s64 = ctx.r11.s64 + 32476;
	// addi r7,r10,32444
	ctx.r7.s64 = ctx.r10.s64 + 32444;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,290
	ctx.r8.s64 = 290;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8235FE18;
	sub_82372320(ctx, base);
	// b 0x8235fe38
	goto loc_8235FE38;
loc_8235FE1C:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8235fe38
	goto loc_8235FE38;
loc_8235FE24:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8235fe38
	goto loc_8235FE38;
loc_8235FE2C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8235fe38
	goto loc_8235FE38;
loc_8235FE34:
	// li r31,4
	ctx.r31.s64 = 4;
loc_8235FE38:
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

__attribute__((alias("__imp__sub_8235FE50"))) PPC_WEAK_FUNC(sub_8235FE50);
PPC_FUNC_IMPL(__imp__sub_8235FE50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FE58"))) PPC_WEAK_FUNC(sub_8235FE58);
PPC_FUNC_IMPL(__imp__sub_8235FE58) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// addi r7,r10,32608
	ctx.r7.s64 = ctx.r10.s64 + 32608;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// beq cr6,0x8235feb8
	if (ctx.cr6.eq) goto loc_8235FEB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r9,r11,32556
	ctx.r9.s64 = ctx.r11.s64 + 32556;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,1298
	ctx.r8.s64 = 1298;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x8235FEB4;
	sub_82372320(ctx, base);
	// b 0x8235fef4
	goto loc_8235FEF4;
loc_8235FEB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r11,32520
	ctx.r9.s64 = ctx.r11.s64 + 32520;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1292
	ctx.r8.s64 = 1292;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8235FED4;
	sub_82372320(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8236e710
	ctx.lr = 0x8235FEDC;
	sub_8236E710(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235FEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_8235FEF4:
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

__attribute__((alias("__imp__sub_8235FF10"))) PPC_WEAK_FUNC(sub_8235FF10);
PPC_FUNC_IMPL(__imp__sub_8235FF10) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ff44
	if (ctx.cr6.eq) goto loc_8235FF44;
	// bl 0x82365988
	ctx.lr = 0x8235FF34;
	sub_82365988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_8235FF44:
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

__attribute__((alias("__imp__sub_8235FF5C"))) PPC_WEAK_FUNC(sub_8235FF5C);
PPC_FUNC_IMPL(__imp__sub_8235FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FF60"))) PPC_WEAK_FUNC(sub_8235FF60);
PPC_FUNC_IMPL(__imp__sub_8235FF60) {
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
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// lwz r3,23892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ff8c
	if (ctx.cr6.eq) goto loc_8235FF8C;
	// bl 0x8236a3f0
	ctx.lr = 0x8235FF84;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23892, ctx.r11.u32);
loc_8235FF8C:
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

__attribute__((alias("__imp__sub_8235FFA0"))) PPC_WEAK_FUNC(sub_8235FFA0);
PPC_FUNC_IMPL(__imp__sub_8235FFA0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8235ffe8
	if (ctx.cr6.eq) goto loc_8235FFE8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8235FFC8:
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
	// bne 0x8235ffc8
	if (!ctx.cr0.eq) goto loc_8235FFC8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8235FFE8:
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82375128
	ctx.lr = 0x8235FFF4;
	sub_82375128(ctx, base);
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

__attribute__((alias("__imp__sub_8236000C"))) PPC_WEAK_FUNC(sub_8236000C);
PPC_FUNC_IMPL(__imp__sub_8236000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360010"))) PPC_WEAK_FUNC(sub_82360010);
PPC_FUNC_IMPL(__imp__sub_82360010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-32688(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32688);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82360020;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236029c
	if (!ctx.cr6.eq) goto loc_8236029C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8235d498
	ctx.lr = 0x82360054;
	sub_8235D498(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236007c
	if (ctx.cr0.eq) goto loc_8236007C;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x82360068;
	sub_8235D3C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x821c0630
	ctx.lr = 0x8236007C;
	sub_821C0630(ctx, base);
loc_8236007C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8235d4e0
	ctx.lr = 0x82360084;
	sub_8235D4E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823600ac
	if (ctx.cr0.eq) goto loc_823600AC;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8235d4a8
	ctx.lr = 0x82360098;
	sub_8235D4A8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8236db40
	ctx.lr = 0x823600A0;
	sub_8236DB40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x823600AC;
	sub_82375128(ctx, base);
loc_823600AC:
	// cmplwi cr6,r30,1244
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1244, ctx.xer);
	// bgt cr6,0x82360258
	if (ctx.cr6.gt) goto loc_82360258;
	// clrlwi. r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bne 0x823600c4
	if (!ctx.cr0.eq) goto loc_823600C4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823600C4:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823600CC;
	sub_8236A338(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82360120
	if (ctx.cr0.eq) goto loc_82360120;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8236010c
	if (ctx.cr6.eq) goto loc_8236010C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823600EC:
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
	// bne 0x823600ec
	if (!ctx.cr0.eq) goto loc_823600EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8236010C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82366448
	ctx.lr = 0x82360118;
	sub_82366448(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82360124
	goto loc_82360124;
loc_82360120:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82360124:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82360154
	if (ctx.cr6.eq) goto loc_82360154;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82360134:
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
	// bne 0x82360134
	if (!ctx.cr0.eq) goto loc_82360134;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82360154:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236020c
	if (ctx.cr6.eq) goto loc_8236020C;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236018c
	if (!ctx.cr6.eq) goto loc_8236018C;
	// li r3,3120
	ctx.r3.s64 = 3120;
	// bl 0x8236a338
	ctx.lr = 0x82360170;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82360184
	if (ctx.cr0.eq) goto loc_82360184;
	// bl 0x82365178
	ctx.lr = 0x82360180;
	sub_82365178(ctx, base);
	// b 0x82360188
	goto loc_82360188;
loc_82360184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360188:
	// stw r3,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r3.u32);
loc_8236018C:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823601bc
	if (ctx.cr6.eq) goto loc_823601BC;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8236019C:
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
	// bne 0x8236019c
	if (!ctx.cr0.eq) goto loc_8236019C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823601BC:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lwz r3,100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// bl 0x82365ab0
	ctx.lr = 0x823601C8;
	sub_82365AB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236024c
	if (!ctx.cr0.eq) goto loc_8236024C;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,32756
	ctx.r9.s64 = ctx.r11.s64 + 32756;
	// addi r7,r10,32728
	ctx.r7.s64 = ctx.r10.s64 + 32728;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,244
	ctx.r8.s64 = 244;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360208;
	sub_82372320(ctx, base);
	// b 0x8236024c
	goto loc_8236024C;
loc_8236020C:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236023c
	if (ctx.cr6.eq) goto loc_8236023C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8236021C:
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
	// bne 0x8236021c
	if (!ctx.cr0.eq) goto loc_8236021C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8236023C:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r3,r27,108
	ctx.r3.s64 = ctx.r27.s64 + 108;
	// bl 0x82366300
	ctx.lr = 0x82360248;
	sub_82366300(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8236024C:
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x82360254;
	sub_82375128(ctx, base);
	// b 0x823602d0
	goto loc_823602D0;
loc_82360258:
	// li r6,1244
	ctx.r6.s64 = 1244;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,32728
	ctx.r7.s64 = ctx.r10.s64 + 32728;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,32680
	ctx.r9.s64 = ctx.r11.s64 + 32680;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360298;
	sub_82372320(ctx, base);
	// b 0x823602d0
	goto loc_823602D0;
loc_8236029C:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,32652
	ctx.r9.s64 = ctx.r11.s64 + 32652;
	// addi r7,r10,32728
	ctx.r7.s64 = ctx.r10.s64 + 32728;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,260
	ctx.r8.s64 = 260;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823602D0;
	sub_82372320(ctx, base);
loc_823602D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x823602D8;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360018"))) PPC_WEAK_FUNC(sub_82360018);
PPC_FUNC_IMPL(__imp__sub_82360018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82360020;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236029c
	if (!ctx.cr6.eq) goto loc_8236029C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8235d498
	ctx.lr = 0x82360054;
	sub_8235D498(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236007c
	if (ctx.cr0.eq) goto loc_8236007C;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x82360068;
	sub_8235D3C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x821c0630
	ctx.lr = 0x8236007C;
	sub_821C0630(ctx, base);
loc_8236007C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8235d4e0
	ctx.lr = 0x82360084;
	sub_8235D4E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823600ac
	if (ctx.cr0.eq) goto loc_823600AC;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8235d4a8
	ctx.lr = 0x82360098;
	sub_8235D4A8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8236db40
	ctx.lr = 0x823600A0;
	sub_8236DB40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x823600AC;
	sub_82375128(ctx, base);
loc_823600AC:
	// cmplwi cr6,r30,1244
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1244, ctx.xer);
	// bgt cr6,0x82360258
	if (ctx.cr6.gt) goto loc_82360258;
	// clrlwi. r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bne 0x823600c4
	if (!ctx.cr0.eq) goto loc_823600C4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823600C4:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x823600CC;
	sub_8236A338(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82360120
	if (ctx.cr0.eq) goto loc_82360120;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8236010c
	if (ctx.cr6.eq) goto loc_8236010C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823600EC:
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
	// bne 0x823600ec
	if (!ctx.cr0.eq) goto loc_823600EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8236010C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82366448
	ctx.lr = 0x82360118;
	sub_82366448(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82360124
	goto loc_82360124;
loc_82360120:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82360124:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82360154
	if (ctx.cr6.eq) goto loc_82360154;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82360134:
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
	// bne 0x82360134
	if (!ctx.cr0.eq) goto loc_82360134;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82360154:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236020c
	if (ctx.cr6.eq) goto loc_8236020C;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236018c
	if (!ctx.cr6.eq) goto loc_8236018C;
	// li r3,3120
	ctx.r3.s64 = 3120;
	// bl 0x8236a338
	ctx.lr = 0x82360170;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82360184
	if (ctx.cr0.eq) goto loc_82360184;
	// bl 0x82365178
	ctx.lr = 0x82360180;
	sub_82365178(ctx, base);
	// b 0x82360188
	goto loc_82360188;
loc_82360184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360188:
	// stw r3,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r3.u32);
loc_8236018C:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823601bc
	if (ctx.cr6.eq) goto loc_823601BC;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8236019C:
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
	// bne 0x8236019c
	if (!ctx.cr0.eq) goto loc_8236019C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823601BC:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lwz r3,100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// bl 0x82365ab0
	ctx.lr = 0x823601C8;
	sub_82365AB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236024c
	if (!ctx.cr0.eq) goto loc_8236024C;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,32756
	ctx.r9.s64 = ctx.r11.s64 + 32756;
	// addi r7,r10,32728
	ctx.r7.s64 = ctx.r10.s64 + 32728;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,244
	ctx.r8.s64 = 244;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360208;
	sub_82372320(ctx, base);
	// b 0x8236024c
	goto loc_8236024C;
loc_8236020C:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236023c
	if (ctx.cr6.eq) goto loc_8236023C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8236021C:
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
	// bne 0x8236021c
	if (!ctx.cr0.eq) goto loc_8236021C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8236023C:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r3,r27,108
	ctx.r3.s64 = ctx.r27.s64 + 108;
	// bl 0x82366300
	ctx.lr = 0x82360248;
	sub_82366300(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8236024C:
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x82360254;
	sub_82375128(ctx, base);
	// b 0x823602d0
	goto loc_823602D0;
loc_82360258:
	// li r6,1244
	ctx.r6.s64 = 1244;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,32728
	ctx.r7.s64 = ctx.r10.s64 + 32728;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,32680
	ctx.r9.s64 = ctx.r11.s64 + 32680;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360298;
	sub_82372320(ctx, base);
	// b 0x823602d0
	goto loc_823602D0;
loc_8236029C:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,32652
	ctx.r9.s64 = ctx.r11.s64 + 32652;
	// addi r7,r10,32728
	ctx.r7.s64 = ctx.r10.s64 + 32728;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,260
	ctx.r8.s64 = 260;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823602D0;
	sub_82372320(ctx, base);
loc_823602D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x823602D8;
	sub_821C0630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823602E4"))) PPC_WEAK_FUNC(sub_823602E4);
PPC_FUNC_IMPL(__imp__sub_823602E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x821c0630
	ctx.lr = 0x823602FC;
	sub_821C0630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236030C"))) PPC_WEAK_FUNC(sub_8236030C);
PPC_FUNC_IMPL(__imp__sub_8236030C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82360324;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82360334"))) PPC_WEAK_FUNC(sub_82360334);
PPC_FUNC_IMPL(__imp__sub_82360334) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82350110
	ctx.lr = 0x8236034C;
	sub_82350110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236035C"))) PPC_WEAK_FUNC(sub_8236035C);
PPC_FUNC_IMPL(__imp__sub_8236035C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x82360374;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82360384"))) PPC_WEAK_FUNC(sub_82360384);
PPC_FUNC_IMPL(__imp__sub_82360384) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82350110
	ctx.lr = 0x8236039C;
	sub_82350110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823603AC"))) PPC_WEAK_FUNC(sub_823603AC);
PPC_FUNC_IMPL(__imp__sub_823603AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823603B0"))) PPC_WEAK_FUNC(sub_823603B0);
PPC_FUNC_IMPL(__imp__sub_823603B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82375128
	sub_82375128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823603B4"))) PPC_WEAK_FUNC(sub_823603B4);
PPC_FUNC_IMPL(__imp__sub_823603B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823603B8"))) PPC_WEAK_FUNC(sub_823603B8);
PPC_FUNC_IMPL(__imp__sub_823603B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-32480(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32480);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823603C8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82360428
	if (ctx.cr6.eq) goto loc_82360428;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82364900
	ctx.lr = 0x823603F4;
	sub_82364900(ctx, base);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82360420
	if (ctx.cr6.eq) goto loc_82360420;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8234ecb8
	ctx.lr = 0x82360408;
	sub_8234ECB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823689c8
	ctx.lr = 0x82360414;
	sub_823689C8(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x8236041C;
	sub_821C0630(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82360420:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82360428;
	sub_82375128(ctx, base);
loc_82360428:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82360470
	if (!ctx.cr0.eq) goto loc_82360470;
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82366db0
	ctx.lr = 0x8236043C;
	sub_82366DB0(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82360468
	if (ctx.cr6.eq) goto loc_82360468;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8234ecb8
	ctx.lr = 0x82360450;
	sub_8234ECB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823689c8
	ctx.lr = 0x8236045C;
	sub_823689C8(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82360464;
	sub_821C0630(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82360468:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82360470;
	sub_82375128(ctx, base);
loc_82360470:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82360484
	if (ctx.cr0.eq) goto loc_82360484;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823689c8
	ctx.lr = 0x82360484;
	sub_823689C8(ctx, base);
loc_82360484:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x8236048C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823603C0"))) PPC_WEAK_FUNC(sub_823603C0);
PPC_FUNC_IMPL(__imp__sub_823603C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823603C8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82360428
	if (ctx.cr6.eq) goto loc_82360428;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82364900
	ctx.lr = 0x823603F4;
	sub_82364900(ctx, base);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82360420
	if (ctx.cr6.eq) goto loc_82360420;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8234ecb8
	ctx.lr = 0x82360408;
	sub_8234ECB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823689c8
	ctx.lr = 0x82360414;
	sub_823689C8(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x8236041C;
	sub_821C0630(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82360420:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82360428;
	sub_82375128(ctx, base);
loc_82360428:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82360470
	if (!ctx.cr0.eq) goto loc_82360470;
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82366db0
	ctx.lr = 0x8236043C;
	sub_82366DB0(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82360468
	if (ctx.cr6.eq) goto loc_82360468;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8234ecb8
	ctx.lr = 0x82360450;
	sub_8234ECB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823689c8
	ctx.lr = 0x8236045C;
	sub_823689C8(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82360464;
	sub_821C0630(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82360468:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82360470;
	sub_82375128(ctx, base);
loc_82360470:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82360484
	if (ctx.cr0.eq) goto loc_82360484;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823689c8
	ctx.lr = 0x82360484;
	sub_823689C8(ctx, base);
loc_82360484:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x8236048C;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360498"))) PPC_WEAK_FUNC(sub_82360498);
PPC_FUNC_IMPL(__imp__sub_82360498) {
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
	// bl 0x821c0630
	ctx.lr = 0x823604B0;
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

__attribute__((alias("__imp__sub_823604C0"))) PPC_WEAK_FUNC(sub_823604C0);
PPC_FUNC_IMPL(__imp__sub_823604C0) {
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
	ctx.lr = 0x823604D8;
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

__attribute__((alias("__imp__sub_823604E8"))) PPC_WEAK_FUNC(sub_823604E8);
PPC_FUNC_IMPL(__imp__sub_823604E8) {
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
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82360500;
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

__attribute__((alias("__imp__sub_82360510"))) PPC_WEAK_FUNC(sub_82360510);
PPC_FUNC_IMPL(__imp__sub_82360510) {
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
	// bl 0x82375128
	ctx.lr = 0x82360528;
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

__attribute__((alias("__imp__sub_82360538"))) PPC_WEAK_FUNC(sub_82360538);
PPC_FUNC_IMPL(__imp__sub_82360538) {
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
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82360550;
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

__attribute__((alias("__imp__sub_82360560"))) PPC_WEAK_FUNC(sub_82360560);
PPC_FUNC_IMPL(__imp__sub_82360560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-32280(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32280);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82360570;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq cr6,0x823605b0
	if (ctx.cr6.eq) goto loc_823605B0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82360590:
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
	// bne 0x82360590
	if (!ctx.cr0.eq) goto loc_82360590;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823605B0:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x823605B8;
	sub_82375128(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823605e8
	if (ctx.cr6.eq) goto loc_823605E8;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823605C8:
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
	// bne 0x823605c8
	if (!ctx.cr0.eq) goto loc_823605C8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823605E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366388
	ctx.lr = 0x823605F0;
	sub_82366388(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236063c
	if (ctx.cr0.eq) goto loc_8236063C;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82360628
	if (ctx.cr6.eq) goto loc_82360628;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82360608:
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
	// bne 0x82360608
	if (!ctx.cr0.eq) goto loc_82360608;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82360628:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// bl 0x82366f90
	ctx.lr = 0x82360634;
	sub_82366F90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823606e8
	goto loc_823606E8;
loc_8236063C:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236066c
	if (!ctx.cr6.eq) goto loc_8236066C;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8236a338
	ctx.lr = 0x82360650;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82360664
	if (ctx.cr0.eq) goto loc_82360664;
	// bl 0x82364718
	ctx.lr = 0x82360660;
	sub_82364718(ctx, base);
	// b 0x82360668
	goto loc_82360668;
loc_82360664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360668:
	// stw r3,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
loc_8236066C:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236069c
	if (ctx.cr6.eq) goto loc_8236069C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8236067C:
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
	// bne 0x8236067c
	if (!ctx.cr0.eq) goto loc_8236067C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8236069C:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x82364da0
	ctx.lr = 0x823606A8;
	sub_82364DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823606e8
	if (!ctx.cr0.eq) goto loc_823606E8;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// addi r7,r10,-32352
	ctx.r7.s64 = ctx.r10.s64 + -32352;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,812
	ctx.r8.s64 = 812;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823606E8;
	sub_82372320(ctx, base);
loc_823606E8:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x823606F0;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360568"))) PPC_WEAK_FUNC(sub_82360568);
PPC_FUNC_IMPL(__imp__sub_82360568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82360570;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq cr6,0x823605b0
	if (ctx.cr6.eq) goto loc_823605B0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82360590:
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
	// bne 0x82360590
	if (!ctx.cr0.eq) goto loc_82360590;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823605B0:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x823605B8;
	sub_82375128(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823605e8
	if (ctx.cr6.eq) goto loc_823605E8;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823605C8:
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
	// bne 0x823605c8
	if (!ctx.cr0.eq) goto loc_823605C8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823605E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366388
	ctx.lr = 0x823605F0;
	sub_82366388(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236063c
	if (ctx.cr0.eq) goto loc_8236063C;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82360628
	if (ctx.cr6.eq) goto loc_82360628;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82360608:
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
	// bne 0x82360608
	if (!ctx.cr0.eq) goto loc_82360608;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82360628:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// bl 0x82366f90
	ctx.lr = 0x82360634;
	sub_82366F90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823606e8
	goto loc_823606E8;
loc_8236063C:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236066c
	if (!ctx.cr6.eq) goto loc_8236066C;
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x8236a338
	ctx.lr = 0x82360650;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82360664
	if (ctx.cr0.eq) goto loc_82360664;
	// bl 0x82364718
	ctx.lr = 0x82360660;
	sub_82364718(ctx, base);
	// b 0x82360668
	goto loc_82360668;
loc_82360664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360668:
	// stw r3,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
loc_8236066C:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236069c
	if (ctx.cr6.eq) goto loc_8236069C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8236067C:
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
	// bne 0x8236067c
	if (!ctx.cr0.eq) goto loc_8236067C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8236069C:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x82364da0
	ctx.lr = 0x823606A8;
	sub_82364DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823606e8
	if (!ctx.cr0.eq) goto loc_823606E8;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// addi r7,r10,-32352
	ctx.r7.s64 = ctx.r10.s64 + -32352;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,812
	ctx.r8.s64 = 812;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823606E8;
	sub_82372320(ctx, base);
loc_823606E8:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x823606F0;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823606FC"))) PPC_WEAK_FUNC(sub_823606FC);
PPC_FUNC_IMPL(__imp__sub_823606FC) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82360714;
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

__attribute__((alias("__imp__sub_82360724"))) PPC_WEAK_FUNC(sub_82360724);
PPC_FUNC_IMPL(__imp__sub_82360724) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x8236073C;
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

__attribute__((alias("__imp__sub_8236074C"))) PPC_WEAK_FUNC(sub_8236074C);
PPC_FUNC_IMPL(__imp__sub_8236074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360750"))) PPC_WEAK_FUNC(sub_82360750);
PPC_FUNC_IMPL(__imp__sub_82360750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82360758;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360808
	if (ctx.cr6.eq) goto loc_82360808;
	// clrlwi r27,r4,24
	ctx.r27.u64 = ctx.r4.u32 & 0xFF;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236077C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// beq cr6,0x823607bc
	if (ctx.cr6.eq) goto loc_823607BC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82360790:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82360790
	if (!ctx.cr0.eq) goto loc_82360790;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823607e8
	goto loc_823607E8;
loc_823607BC:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_823607C0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823607c0
	if (!ctx.cr0.eq) goto loc_823607C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_823607E8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823607F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236077c
	if (ctx.cr6.lt) goto loc_8236077C;
loc_82360808:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360810"))) PPC_WEAK_FUNC(sub_82360810);
PPC_FUNC_IMPL(__imp__sub_82360810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82360818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236088c
	if (ctx.cr6.eq) goto loc_8236088C;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82360838:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82360844:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82360844
	if (!ctx.cr0.eq) goto loc_82360844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82360878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82360838
	if (ctx.cr6.lt) goto loc_82360838;
loc_8236088C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360894"))) PPC_WEAK_FUNC(sub_82360894);
PPC_FUNC_IMPL(__imp__sub_82360894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360898"))) PPC_WEAK_FUNC(sub_82360898);
PPC_FUNC_IMPL(__imp__sub_82360898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823608A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360914
	if (ctx.cr6.eq) goto loc_82360914;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823608C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_823608CC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823608cc
	if (!ctx.cr0.eq) goto loc_823608CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82360900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823608c0
	if (ctx.cr6.lt) goto loc_823608C0;
loc_82360914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236091C"))) PPC_WEAK_FUNC(sub_8236091C);
PPC_FUNC_IMPL(__imp__sub_8236091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360920"))) PPC_WEAK_FUNC(sub_82360920);
PPC_FUNC_IMPL(__imp__sub_82360920) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82360958
	if (ctx.cr6.eq) goto loc_82360958;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82360954
	if (!ctx.cr6.lt) goto loc_82360954;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82360750
	ctx.lr = 0x82360950;
	sub_82360750(ctx, base);
	// b 0x82360958
	goto loc_82360958;
loc_82360954:
	// bl 0x82360810
	ctx.lr = 0x82360958;
	sub_82360810(ctx, base);
loc_82360958:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82360974"))) PPC_WEAK_FUNC(sub_82360974);
PPC_FUNC_IMPL(__imp__sub_82360974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360978"))) PPC_WEAK_FUNC(sub_82360978);
PPC_FUNC_IMPL(__imp__sub_82360978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-32040(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32040);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82360988;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823609d0
	if (ctx.cr6.eq) goto loc_823609D0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823609B0:
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
	// bne 0x823609b0
	if (!ctx.cr0.eq) goto loc_823609B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823609D0:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x82375128
	ctx.lr = 0x823609DC;
	sub_82375128(ctx, base);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82360a0c
	if (ctx.cr6.eq) goto loc_82360A0C;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_823609EC:
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
	// bne 0x823609ec
	if (!ctx.cr0.eq) goto loc_823609EC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82360A0C:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360ba8
	if (ctx.cr6.eq) goto loc_82360BA8;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82360a48
	if (ctx.cr6.eq) goto loc_82360A48;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82360A28:
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
	// bne 0x82360a28
	if (!ctx.cr0.eq) goto loc_82360A28;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82360A48:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82365c20
	ctx.lr = 0x82360A58;
	sub_82365C20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82360b5c
	if (ctx.cr0.eq) goto loc_82360B5C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82360bdc
	if (!ctx.cr6.gt) goto loc_82360BDC;
	// lfs f0,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82360aa4
	if (!ctx.cr6.eq) goto loc_82360AA4;
	// lfs f12,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bne cr6,0x82360aa4
	if (!ctx.cr6.eq) goto loc_82360AA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,252(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 252, temp.u32);
	// lfs f0,5268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82360af0
	goto loc_82360AF0;
loc_82360AA4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82360ab4
	if (!ctx.cr6.gt) goto loc_82360AB4;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82360ab8
	goto loc_82360AB8;
loc_82360AB4:
	// fsubs f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82360AB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,8728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8728);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-1612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1612);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f13,-1604(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1604);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8736(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8736);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,252(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 252, temp.u32);
	// fmadds f0,f10,f12,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
loc_82360AF0:
	// stfs f0,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lfs f1,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82363db0
	ctx.lr = 0x82360B00;
	sub_82363DB0(ctx, base);
	// lfs f0,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82360b18
	if (!ctx.cr6.eq) goto loc_82360B18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
loc_82360B18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,5260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5260);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,2544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82360b44
	if (!ctx.cr6.lt) goto loc_82360B44;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// b 0x82360b50
	goto loc_82360B50;
loc_82360B44:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82360b50
	if (!ctx.cr6.gt) goto loc_82360B50;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82360B50:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82364fb0
	ctx.lr = 0x82360B58;
	sub_82364FB0(ctx, base);
	// b 0x82360bdc
	goto loc_82360BDC;
loc_82360B5C:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-32100
	ctx.r9.s64 = ctx.r11.s64 + -32100;
	// addi r7,r10,-32132
	ctx.r7.s64 = ctx.r10.s64 + -32132;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,906
	ctx.r8.s64 = 906;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360B90;
	sub_82372320(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82360BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82360bdc
	goto loc_82360BDC;
loc_82360BA8:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-32152
	ctx.r9.s64 = ctx.r11.s64 + -32152;
	// addi r7,r10,-32132
	ctx.r7.s64 = ctx.r10.s64 + -32132;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,912
	ctx.r8.s64 = 912;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360BDC;
	sub_82372320(ctx, base);
loc_82360BDC:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82360BE4;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360980"))) PPC_WEAK_FUNC(sub_82360980);
PPC_FUNC_IMPL(__imp__sub_82360980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82360988;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823609d0
	if (ctx.cr6.eq) goto loc_823609D0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823609B0:
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
	// bne 0x823609b0
	if (!ctx.cr0.eq) goto loc_823609B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823609D0:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x82375128
	ctx.lr = 0x823609DC;
	sub_82375128(ctx, base);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82360a0c
	if (ctx.cr6.eq) goto loc_82360A0C;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_823609EC:
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
	// bne 0x823609ec
	if (!ctx.cr0.eq) goto loc_823609EC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82360A0C:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360ba8
	if (ctx.cr6.eq) goto loc_82360BA8;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82360a48
	if (ctx.cr6.eq) goto loc_82360A48;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82360A28:
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
	// bne 0x82360a28
	if (!ctx.cr0.eq) goto loc_82360A28;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82360A48:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82365c20
	ctx.lr = 0x82360A58;
	sub_82365C20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82360b5c
	if (ctx.cr0.eq) goto loc_82360B5C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82360bdc
	if (!ctx.cr6.gt) goto loc_82360BDC;
	// lfs f0,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82360aa4
	if (!ctx.cr6.eq) goto loc_82360AA4;
	// lfs f12,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bne cr6,0x82360aa4
	if (!ctx.cr6.eq) goto loc_82360AA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,252(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 252, temp.u32);
	// lfs f0,5268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82360af0
	goto loc_82360AF0;
loc_82360AA4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82360ab4
	if (!ctx.cr6.gt) goto loc_82360AB4;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82360ab8
	goto loc_82360AB8;
loc_82360AB4:
	// fsubs f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82360AB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,8728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8728);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-1612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1612);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f13,-1604(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1604);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8736(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8736);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,252(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 252, temp.u32);
	// fmadds f0,f10,f12,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
loc_82360AF0:
	// stfs f0,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lfs f1,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82363db0
	ctx.lr = 0x82360B00;
	sub_82363DB0(ctx, base);
	// lfs f0,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82360b18
	if (!ctx.cr6.eq) goto loc_82360B18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
loc_82360B18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,5260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5260);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,2544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82360b44
	if (!ctx.cr6.lt) goto loc_82360B44;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// b 0x82360b50
	goto loc_82360B50;
loc_82360B44:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82360b50
	if (!ctx.cr6.gt) goto loc_82360B50;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82360B50:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82364fb0
	ctx.lr = 0x82360B58;
	sub_82364FB0(ctx, base);
	// b 0x82360bdc
	goto loc_82360BDC;
loc_82360B5C:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-32100
	ctx.r9.s64 = ctx.r11.s64 + -32100;
	// addi r7,r10,-32132
	ctx.r7.s64 = ctx.r10.s64 + -32132;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,906
	ctx.r8.s64 = 906;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360B90;
	sub_82372320(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82360BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82360bdc
	goto loc_82360BDC;
loc_82360BA8:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-32152
	ctx.r9.s64 = ctx.r11.s64 + -32152;
	// addi r7,r10,-32132
	ctx.r7.s64 = ctx.r10.s64 + -32132;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,912
	ctx.r8.s64 = 912;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360BDC;
	sub_82372320(ctx, base);
loc_82360BDC:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82360BE4;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360BF4"))) PPC_WEAK_FUNC(sub_82360BF4);
PPC_FUNC_IMPL(__imp__sub_82360BF4) {
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
	// bl 0x82375128
	ctx.lr = 0x82360C0C;
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

__attribute__((alias("__imp__sub_82360C1C"))) PPC_WEAK_FUNC(sub_82360C1C);
PPC_FUNC_IMPL(__imp__sub_82360C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360C20"))) PPC_WEAK_FUNC(sub_82360C20);
PPC_FUNC_IMPL(__imp__sub_82360C20) {
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
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r8,-31780
	ctx.r7.s64 = ctx.r8.s64 + -31780;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// bne cr6,0x82360cc8
	if (!ctx.cr6.eq) goto loc_82360CC8;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82360cb8
	if (!ctx.cr6.eq) goto loc_82360CB8;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r9,-31836
	ctx.r9.s64 = ctx.r9.s64 + -31836;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1191
	ctx.r8.s64 = 1191;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82372320
	ctx.lr = 0x82360C94;
	sub_82372320(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360750
	ctx.lr = 0x82360CA8;
	sub_82360750(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x8236e710
	ctx.lr = 0x82360CB0;
	sub_8236E710(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82360ce8
	goto loc_82360CE8;
loc_82360CB8:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,1202
	ctx.r8.s64 = 1202;
	// addi r9,r10,-31880
	ctx.r9.s64 = ctx.r10.s64 + -31880;
	// b 0x82360cd4
	goto loc_82360CD4;
loc_82360CC8:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,1207
	ctx.r8.s64 = 1207;
	// addi r9,r10,-31928
	ctx.r9.s64 = ctx.r10.s64 + -31928;
loc_82360CD4:
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82360CE8;
	sub_82372320(ctx, base);
loc_82360CE8:
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

__attribute__((alias("__imp__sub_82360D04"))) PPC_WEAK_FUNC(sub_82360D04);
PPC_FUNC_IMPL(__imp__sub_82360D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360D08"))) PPC_WEAK_FUNC(sub_82360D08);
PPC_FUNC_IMPL(__imp__sub_82360D08) {
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
	// beq 0x82360d98
	if (ctx.cr0.eq) goto loc_82360D98;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82360d4c
	if (!ctx.cr6.eq) goto loc_82360D4C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82360d58
	goto loc_82360D58;
loc_82360D4C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82360D58:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82360d70
	if (!ctx.cr6.eq) goto loc_82360D70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82360d7c
	goto loc_82360D7C;
loc_82360D70:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82360D7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82375128
	ctx.lr = 0x82360D84;
	sub_82375128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82360D8C;
	sub_8236A3F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82360D98:
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

__attribute__((alias("__imp__sub_82360DB0"))) PPC_WEAK_FUNC(sub_82360DB0);
PPC_FUNC_IMPL(__imp__sub_82360DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82360DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82360de8
	goto loc_82360DE8;
loc_82360DC4:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// beq 0x82360de4
	if (ctx.cr0.eq) goto loc_82360DE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82360DDC;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82360DE4;
	sub_8236A3F0(ctx, base);
loc_82360DE4:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82360DE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82360dc4
	if (!ctx.cr6.eq) goto loc_82360DC4;
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

__attribute__((alias("__imp__sub_82360E04"))) PPC_WEAK_FUNC(sub_82360E04);
PPC_FUNC_IMPL(__imp__sub_82360E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360E08"))) PPC_WEAK_FUNC(sub_82360E08);
PPC_FUNC_IMPL(__imp__sub_82360E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82360E10;
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
	ctx.lr = 0x82360E28;
	sub_8236A338(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82360e70
	if (ctx.cr0.eq) goto loc_82360E70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82360e64
	if (ctx.cr6.eq) goto loc_82360E64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82360E44:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82360e44
	if (!ctx.cr0.eq) goto loc_82360E44;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82360E64:
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82360e74
	goto loc_82360E74;
loc_82360E70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82360E74:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82360ea8
	if (ctx.cr6.eq) goto loc_82360EA8;
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
	// beq cr6,0x82360e9c
	if (ctx.cr6.eq) goto loc_82360E9C;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x82360ea0
	goto loc_82360EA0;
loc_82360E9C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82360EA0:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82360ed4
	goto loc_82360ED4;
loc_82360EA8:
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
	// beq cr6,0x82360ecc
	if (ctx.cr6.eq) goto loc_82360ECC;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82360ed0
	goto loc_82360ED0;
loc_82360ECC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82360ED0:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82360ED4:
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

__attribute__((alias("__imp__sub_82360EE8"))) PPC_WEAK_FUNC(sub_82360EE8);
PPC_FUNC_IMPL(__imp__sub_82360EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-31728(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31728);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82360EF8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32183
	ctx.r29.s64 = -2109145088;
	// lwz r11,23892(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82360f88
	if (!ctx.cr6.eq) goto loc_82360F88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236a338
	ctx.lr = 0x82360F18;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82360f2c
	if (ctx.cr0.eq) goto loc_82360F2C;
	// bl 0x8234f138
	ctx.lr = 0x82360F28;
	sub_8234F138(ctx, base);
	// b 0x82360f30
	goto loc_82360F30;
loc_82360F2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360F30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,23892(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23892, ctx.r3.u32);
	// beq cr6,0x82360f84
	if (ctx.cr6.eq) goto loc_82360F84;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x820cde50
	ctx.lr = 0x82360F4C;
	sub_820CDE50(ctx, base);
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq 0x82360f6c
	if (ctx.cr0.eq) goto loc_82360F6C;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820cdcb8
	ctx.lr = 0x82360F6C;
	sub_820CDCB8(ctx, base);
loc_82360F6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82360f88
	if (!ctx.cr6.eq) goto loc_82360F88;
	// lwz r3,23892(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23892);
	// bl 0x8236a3f0
	ctx.lr = 0x82360F7C;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23892(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23892, ctx.r11.u32);
loc_82360F84:
	// bl 0x82247498
	ctx.lr = 0x82360F88;
	sub_82247498(ctx, base);
loc_82360F88:
	// lwz r3,23892(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23892);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360EF0"))) PPC_WEAK_FUNC(sub_82360EF0);
PPC_FUNC_IMPL(__imp__sub_82360EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82360EF8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32183
	ctx.r29.s64 = -2109145088;
	// lwz r11,23892(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82360f88
	if (!ctx.cr6.eq) goto loc_82360F88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236a338
	ctx.lr = 0x82360F18;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82360f2c
	if (ctx.cr0.eq) goto loc_82360F2C;
	// bl 0x8234f138
	ctx.lr = 0x82360F28;
	sub_8234F138(ctx, base);
	// b 0x82360f30
	goto loc_82360F30;
loc_82360F2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360F30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,23892(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23892, ctx.r3.u32);
	// beq cr6,0x82360f84
	if (ctx.cr6.eq) goto loc_82360F84;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x820cde50
	ctx.lr = 0x82360F4C;
	sub_820CDE50(ctx, base);
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq 0x82360f6c
	if (ctx.cr0.eq) goto loc_82360F6C;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820cdcb8
	ctx.lr = 0x82360F6C;
	sub_820CDCB8(ctx, base);
loc_82360F6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82360f88
	if (!ctx.cr6.eq) goto loc_82360F88;
	// lwz r3,23892(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23892);
	// bl 0x8236a3f0
	ctx.lr = 0x82360F7C;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23892(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23892, ctx.r11.u32);
loc_82360F84:
	// bl 0x82247498
	ctx.lr = 0x82360F88;
	sub_82247498(ctx, base);
loc_82360F88:
	// lwz r3,23892(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23892);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360F94"))) PPC_WEAK_FUNC(sub_82360F94);
PPC_FUNC_IMPL(__imp__sub_82360F94) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x82360FAC;
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

__attribute__((alias("__imp__sub_82360FBC"))) PPC_WEAK_FUNC(sub_82360FBC);
PPC_FUNC_IMPL(__imp__sub_82360FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360FC0"))) PPC_WEAK_FUNC(sub_82360FC0);
PPC_FUNC_IMPL(__imp__sub_82360FC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82360db0
	sub_82360DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360FC4"))) PPC_WEAK_FUNC(sub_82360FC4);
PPC_FUNC_IMPL(__imp__sub_82360FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360FC8"))) PPC_WEAK_FUNC(sub_82360FC8);
PPC_FUNC_IMPL(__imp__sub_82360FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-31584(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31584);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82360FD8;
	__savegprlr_29(ctx, base);
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
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r29,104(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82361010
	if (ctx.cr6.eq) goto loc_82361010;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823647a8
	ctx.lr = 0x82361008;
	sub_823647A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82361010;
	sub_8236A3F0(ctx, base);
loc_82361010:
	// lwz r29,100(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236102c
	if (ctx.cr6.eq) goto loc_8236102C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365258
	ctx.lr = 0x82361024;
	sub_82365258(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8236102C;
	sub_8236A3F0(ctx, base);
loc_8236102C:
	// addi r3,r30,248
	ctx.r3.s64 = ctx.r30.s64 + 248;
	// bl 0x82375128
	ctx.lr = 0x82361034;
	sub_82375128(ctx, base);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x82360db0
	ctx.lr = 0x8236103C;
	sub_82360DB0(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x82366d90
	ctx.lr = 0x82361044;
	sub_82366D90(ctx, base);
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x82366d90
	ctx.lr = 0x8236104C;
	sub_82366D90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235f918
	ctx.lr = 0x82361054;
	sub_8235F918(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360FD0"))) PPC_WEAK_FUNC(sub_82360FD0);
PPC_FUNC_IMPL(__imp__sub_82360FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82360FD8;
	__savegprlr_29(ctx, base);
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
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r29,104(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82361010
	if (ctx.cr6.eq) goto loc_82361010;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823647a8
	ctx.lr = 0x82361008;
	sub_823647A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82361010;
	sub_8236A3F0(ctx, base);
loc_82361010:
	// lwz r29,100(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236102c
	if (ctx.cr6.eq) goto loc_8236102C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365258
	ctx.lr = 0x82361024;
	sub_82365258(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x8236102C;
	sub_8236A3F0(ctx, base);
loc_8236102C:
	// addi r3,r30,248
	ctx.r3.s64 = ctx.r30.s64 + 248;
	// bl 0x82375128
	ctx.lr = 0x82361034;
	sub_82375128(ctx, base);
	// addi r3,r30,148
	ctx.r3.s64 = ctx.r30.s64 + 148;
	// bl 0x82360db0
	ctx.lr = 0x8236103C;
	sub_82360DB0(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x82366d90
	ctx.lr = 0x82361044;
	sub_82366D90(ctx, base);
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x82366d90
	ctx.lr = 0x8236104C;
	sub_82366D90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235f918
	ctx.lr = 0x82361054;
	sub_8235F918(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236105C"))) PPC_WEAK_FUNC(sub_8236105C);
PPC_FUNC_IMPL(__imp__sub_8236105C) {
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
	// bl 0x8235f918
	ctx.lr = 0x82361074;
	sub_8235F918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361084"))) PPC_WEAK_FUNC(sub_82361084);
PPC_FUNC_IMPL(__imp__sub_82361084) {
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
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x82366d90
	ctx.lr = 0x823610A0;
	sub_82366D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823610B0"))) PPC_WEAK_FUNC(sub_823610B0);
PPC_FUNC_IMPL(__imp__sub_823610B0) {
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
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x82366d90
	ctx.lr = 0x823610CC;
	sub_82366D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823610DC"))) PPC_WEAK_FUNC(sub_823610DC);
PPC_FUNC_IMPL(__imp__sub_823610DC) {
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
	// addi r3,r11,148
	ctx.r3.s64 = ctx.r11.s64 + 148;
	// bl 0x82360fc0
	ctx.lr = 0x823610F8;
	sub_82360FC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361108"))) PPC_WEAK_FUNC(sub_82361108);
PPC_FUNC_IMPL(__imp__sub_82361108) {
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
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// bl 0x82375128
	ctx.lr = 0x82361124;
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

__attribute__((alias("__imp__sub_82361134"))) PPC_WEAK_FUNC(sub_82361134);
PPC_FUNC_IMPL(__imp__sub_82361134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361138"))) PPC_WEAK_FUNC(sub_82361138);
PPC_FUNC_IMPL(__imp__sub_82361138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82361140;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,104(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82361164
	if (ctx.cr6.eq) goto loc_82361164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823647a8
	ctx.lr = 0x8236115C;
	sub_823647A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82361164;
	sub_8236A3F0(ctx, base);
loc_82361164:
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82361180
	if (ctx.cr6.eq) goto loc_82361180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365258
	ctx.lr = 0x82361178;
	sub_82365258(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82361180;
	sub_8236A3F0(ctx, base);
loc_82361180:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq cr6,0x823611bc
	if (ctx.cr6.eq) goto loc_823611BC;
	// addi r29,r31,148
	ctx.r29.s64 = ctx.r31.s64 + 148;
loc_8236119C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82360d08
	ctx.lr = 0x823611B0;
	sub_82360D08(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236119c
	if (!ctx.cr6.eq) goto loc_8236119C;
loc_823611BC:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82366e58
	ctx.lr = 0x823611C4;
	sub_82366E58(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82366268
	ctx.lr = 0x823611CC;
	sub_82366268(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8236e690
	ctx.lr = 0x823611D4;
	sub_8236E690(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8236e690
	ctx.lr = 0x823611DC;
	sub_8236E690(ctx, base);
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// stb r30,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r30.u8);
	// stb r30,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r30.u8);
	// bl 0x82360ef0
	ctx.lr = 0x823611EC;
	sub_82360EF0(ctx, base);
	// bl 0x8236e730
	ctx.lr = 0x823611F0;
	sub_8236E730(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// lfs f0,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361210"))) PPC_WEAK_FUNC(sub_82361210);
PPC_FUNC_IMPL(__imp__sub_82361210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-31360(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31360);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82361220;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82361270
	if (ctx.cr6.eq) goto loc_82361270;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82361250:
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
	// bne 0x82361250
	if (!ctx.cr0.eq) goto loc_82361250;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82361270:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235fb88
	ctx.lr = 0x8236127C;
	sub_8235FB88(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82363e30
	ctx.lr = 0x82361290;
	sub_82363E30(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// bl 0x823662d0
	ctx.lr = 0x823612A4;
	sub_823662D0(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x82366ed0
	ctx.lr = 0x823612AC;
	sub_82366ED0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// stw r29,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r29.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// stw r29,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x8236e710
	ctx.lr = 0x823612C8;
	sub_8236E710(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x8236e710
	ctx.lr = 0x823612D0;
	sub_8236E710(ctx, base);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e710
	ctx.lr = 0x823612DC;
	sub_8236E710(ctx, base);
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e710
	ctx.lr = 0x823612E4;
	sub_8236E710(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e710
	ctx.lr = 0x823612EC;
	sub_8236E710(ctx, base);
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x8236e710
	ctx.lr = 0x823612F4;
	sub_8236E710(ctx, base);
	// addi r11,r30,248
	ctx.r11.s64 = ctx.r30.s64 + 248;
	// stw r29,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r28.u32);
	// bne cr6,0x82361340
	if (!ctx.cr6.eq) goto loc_82361340;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-31444
	ctx.r9.s64 = ctx.r11.s64 + -31444;
	// addi r7,r10,-31488
	ctx.r7.s64 = ctx.r10.s64 + -31488;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,339
	ctx.r8.s64 = 339;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82361340;
	sub_82372320(ctx, base);
loc_82361340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361138
	ctx.lr = 0x82361348;
	sub_82361138(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82361350;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361218"))) PPC_WEAK_FUNC(sub_82361218);
PPC_FUNC_IMPL(__imp__sub_82361218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82361220;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82361270
	if (ctx.cr6.eq) goto loc_82361270;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82361250:
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
	// bne 0x82361250
	if (!ctx.cr0.eq) goto loc_82361250;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82361270:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235fb88
	ctx.lr = 0x8236127C;
	sub_8235FB88(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82363e30
	ctx.lr = 0x82361290;
	sub_82363E30(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// bl 0x823662d0
	ctx.lr = 0x823612A4;
	sub_823662D0(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x82366ed0
	ctx.lr = 0x823612AC;
	sub_82366ED0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// stw r29,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r29.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// stw r29,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x8236e710
	ctx.lr = 0x823612C8;
	sub_8236E710(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x8236e710
	ctx.lr = 0x823612D0;
	sub_8236E710(ctx, base);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e710
	ctx.lr = 0x823612DC;
	sub_8236E710(ctx, base);
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e710
	ctx.lr = 0x823612E4;
	sub_8236E710(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e710
	ctx.lr = 0x823612EC;
	sub_8236E710(ctx, base);
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x8236e710
	ctx.lr = 0x823612F4;
	sub_8236E710(ctx, base);
	// addi r11,r30,248
	ctx.r11.s64 = ctx.r30.s64 + 248;
	// stw r29,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r28.u32);
	// bne cr6,0x82361340
	if (!ctx.cr6.eq) goto loc_82361340;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-31444
	ctx.r9.s64 = ctx.r11.s64 + -31444;
	// addi r7,r10,-31488
	ctx.r7.s64 = ctx.r10.s64 + -31488;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,339
	ctx.r8.s64 = 339;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82361340;
	sub_82372320(ctx, base);
loc_82361340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361138
	ctx.lr = 0x82361348;
	sub_82361138(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x82361350;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236135C"))) PPC_WEAK_FUNC(sub_8236135C);
PPC_FUNC_IMPL(__imp__sub_8236135C) {
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
	ctx.lr = 0x82361374;
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

__attribute__((alias("__imp__sub_82361384"))) PPC_WEAK_FUNC(sub_82361384);
PPC_FUNC_IMPL(__imp__sub_82361384) {
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
	// bl 0x8235f918
	ctx.lr = 0x8236139C;
	sub_8235F918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823613AC"))) PPC_WEAK_FUNC(sub_823613AC);
PPC_FUNC_IMPL(__imp__sub_823613AC) {
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
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x82366d90
	ctx.lr = 0x823613C8;
	sub_82366D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823613D8"))) PPC_WEAK_FUNC(sub_823613D8);
PPC_FUNC_IMPL(__imp__sub_823613D8) {
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
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x82366d90
	ctx.lr = 0x823613F4;
	sub_82366D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361404"))) PPC_WEAK_FUNC(sub_82361404);
PPC_FUNC_IMPL(__imp__sub_82361404) {
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
	// addi r3,r11,148
	ctx.r3.s64 = ctx.r11.s64 + 148;
	// bl 0x82360fc0
	ctx.lr = 0x82361420;
	sub_82360FC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361430"))) PPC_WEAK_FUNC(sub_82361430);
PPC_FUNC_IMPL(__imp__sub_82361430) {
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
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// bl 0x82375128
	ctx.lr = 0x8236144C;
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

__attribute__((alias("__imp__sub_8236145C"))) PPC_WEAK_FUNC(sub_8236145C);
PPC_FUNC_IMPL(__imp__sub_8236145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361460"))) PPC_WEAK_FUNC(sub_82361460);
PPC_FUNC_IMPL(__imp__sub_82361460) {
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
	// bl 0x82360fd0
	ctx.lr = 0x82361480;
	sub_82360FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82361490
	if (ctx.cr0.eq) goto loc_82361490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82361490;
	sub_8236A3F0(ctx, base);
loc_82361490:
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

__attribute__((alias("__imp__sub_823614AC"))) PPC_WEAK_FUNC(sub_823614AC);
PPC_FUNC_IMPL(__imp__sub_823614AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823614B0"))) PPC_WEAK_FUNC(sub_823614B0);
PPC_FUNC_IMPL(__imp__sub_823614B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-31208(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31208);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823614C0;
	__savegprlr_28(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8235faa0
	ctx.lr = 0x823614D8;
	sub_8235FAA0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82363e30
	ctx.lr = 0x823614EC;
	sub_82363E30(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// bl 0x823662d0
	ctx.lr = 0x82361500;
	sub_823662D0(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x82366ed0
	ctx.lr = 0x82361508;
	sub_82366ED0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// stw r29,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r29.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// stw r29,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x8236e710
	ctx.lr = 0x82361524;
	sub_8236E710(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x8236e710
	ctx.lr = 0x8236152C;
	sub_8236E710(ctx, base);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e710
	ctx.lr = 0x82361538;
	sub_8236E710(ctx, base);
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e710
	ctx.lr = 0x82361540;
	sub_8236E710(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e710
	ctx.lr = 0x82361548;
	sub_8236E710(ctx, base);
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x8236e710
	ctx.lr = 0x82361550;
	sub_8236E710(ctx, base);
	// addi r11,r30,248
	ctx.r11.s64 = ctx.r30.s64 + 248;
	// stw r29,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r28.u32);
	// bne cr6,0x8236159c
	if (!ctx.cr6.eq) goto loc_8236159C;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-31444
	ctx.r9.s64 = ctx.r11.s64 + -31444;
	// addi r7,r10,-31488
	ctx.r7.s64 = ctx.r10.s64 + -31488;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,352
	ctx.r8.s64 = 352;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8236159C;
	sub_82372320(ctx, base);
loc_8236159C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361138
	ctx.lr = 0x823615A4;
	sub_82361138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823614B8"))) PPC_WEAK_FUNC(sub_823614B8);
PPC_FUNC_IMPL(__imp__sub_823614B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823614C0;
	__savegprlr_28(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8235faa0
	ctx.lr = 0x823614D8;
	sub_8235FAA0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82363e30
	ctx.lr = 0x823614EC;
	sub_82363E30(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// bl 0x823662d0
	ctx.lr = 0x82361500;
	sub_823662D0(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x82366ed0
	ctx.lr = 0x82361508;
	sub_82366ED0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// stw r29,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r29.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// stw r29,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x8236e710
	ctx.lr = 0x82361524;
	sub_8236E710(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x8236e710
	ctx.lr = 0x8236152C;
	sub_8236E710(ctx, base);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e710
	ctx.lr = 0x82361538;
	sub_8236E710(ctx, base);
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e710
	ctx.lr = 0x82361540;
	sub_8236E710(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e710
	ctx.lr = 0x82361548;
	sub_8236E710(ctx, base);
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x8236e710
	ctx.lr = 0x82361550;
	sub_8236E710(ctx, base);
	// addi r11,r30,248
	ctx.r11.s64 = ctx.r30.s64 + 248;
	// stw r29,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r28.u32);
	// bne cr6,0x8236159c
	if (!ctx.cr6.eq) goto loc_8236159C;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-31444
	ctx.r9.s64 = ctx.r11.s64 + -31444;
	// addi r7,r10,-31488
	ctx.r7.s64 = ctx.r10.s64 + -31488;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,352
	ctx.r8.s64 = 352;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8236159C;
	sub_82372320(ctx, base);
loc_8236159C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361138
	ctx.lr = 0x823615A4;
	sub_82361138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823615B0"))) PPC_WEAK_FUNC(sub_823615B0);
PPC_FUNC_IMPL(__imp__sub_823615B0) {
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
	// bl 0x8235f918
	ctx.lr = 0x823615C8;
	sub_8235F918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823615D8"))) PPC_WEAK_FUNC(sub_823615D8);
PPC_FUNC_IMPL(__imp__sub_823615D8) {
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
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x82366d90
	ctx.lr = 0x823615F4;
	sub_82366D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361604"))) PPC_WEAK_FUNC(sub_82361604);
PPC_FUNC_IMPL(__imp__sub_82361604) {
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
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x82366d90
	ctx.lr = 0x82361620;
	sub_82366D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361630"))) PPC_WEAK_FUNC(sub_82361630);
PPC_FUNC_IMPL(__imp__sub_82361630) {
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
	// addi r3,r11,148
	ctx.r3.s64 = ctx.r11.s64 + 148;
	// bl 0x82360fc0
	ctx.lr = 0x8236164C;
	sub_82360FC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236165C"))) PPC_WEAK_FUNC(sub_8236165C);
PPC_FUNC_IMPL(__imp__sub_8236165C) {
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
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// bl 0x82375128
	ctx.lr = 0x82361678;
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

__attribute__((alias("__imp__sub_82361688"))) PPC_WEAK_FUNC(sub_82361688);
PPC_FUNC_IMPL(__imp__sub_82361688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-31032(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31032);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82361698;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823616bc
	if (ctx.cr6.eq) goto loc_823616BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x823616c0
	if (!ctx.cr6.eq) goto loc_823616C0;
loc_823616BC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823616C0:
	// lbz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 200);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stb r10,200(r30)
	PPC_STORE_U8(ctx.r30.u32 + 200, ctx.r10.u8);
	// bge cr6,0x823617d8
	if (!ctx.cr6.lt) goto loc_823617D8;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e690
	ctx.lr = 0x823616E0;
	sub_8236E690(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x823616E8;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361704
	if (ctx.cr0.eq) goto loc_82361704;
	// li r5,15000
	ctx.r5.s64 = 15000;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x823670f8
	ctx.lr = 0x82361700;
	sub_823670F8(ctx, base);
	// b 0x82361708
	goto loc_82361708;
loc_82361704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361708:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361738
	if (ctx.cr6.eq) goto loc_82361738;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361718:
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
	// bne 0x82361718
	if (!ctx.cr0.eq) goto loc_82361718;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361738:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361768
	if (ctx.cr6.eq) goto loc_82361768;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361748:
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
	// bne 0x82361748
	if (!ctx.cr0.eq) goto loc_82361748;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361768:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235ffa0
	ctx.lr = 0x82361778;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x8236178C;
	sub_82360E08(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82361794;
	sub_82375128(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-31092
	ctx.r7.s64 = ctx.r8.s64 + -31092;
	// addi r9,r11,-31128
	ctx.r9.s64 = ctx.r11.s64 + -31128;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1320
	ctx.r8.s64 = 1320;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823617CC;
	sub_82372320(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x823617D4;
	sub_82375128(ctx, base);
	// b 0x823617dc
	goto loc_823617DC;
loc_823617D8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823617DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361690"))) PPC_WEAK_FUNC(sub_82361690);
PPC_FUNC_IMPL(__imp__sub_82361690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82361698;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823616bc
	if (ctx.cr6.eq) goto loc_823616BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x823616c0
	if (!ctx.cr6.eq) goto loc_823616C0;
loc_823616BC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823616C0:
	// lbz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 200);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stb r10,200(r30)
	PPC_STORE_U8(ctx.r30.u32 + 200, ctx.r10.u8);
	// bge cr6,0x823617d8
	if (!ctx.cr6.lt) goto loc_823617D8;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e690
	ctx.lr = 0x823616E0;
	sub_8236E690(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x823616E8;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361704
	if (ctx.cr0.eq) goto loc_82361704;
	// li r5,15000
	ctx.r5.s64 = 15000;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x823670f8
	ctx.lr = 0x82361700;
	sub_823670F8(ctx, base);
	// b 0x82361708
	goto loc_82361708;
loc_82361704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361708:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361738
	if (ctx.cr6.eq) goto loc_82361738;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361718:
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
	// bne 0x82361718
	if (!ctx.cr0.eq) goto loc_82361718;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361738:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361768
	if (ctx.cr6.eq) goto loc_82361768;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361748:
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
	// bne 0x82361748
	if (!ctx.cr0.eq) goto loc_82361748;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361768:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235ffa0
	ctx.lr = 0x82361778;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x8236178C;
	sub_82360E08(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82361794;
	sub_82375128(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-31092
	ctx.r7.s64 = ctx.r8.s64 + -31092;
	// addi r9,r11,-31128
	ctx.r9.s64 = ctx.r11.s64 + -31128;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1320
	ctx.r8.s64 = 1320;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823617CC;
	sub_82372320(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x823617D4;
	sub_82375128(ctx, base);
	// b 0x823617dc
	goto loc_823617DC;
loc_823617D8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823617DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823617E8"))) PPC_WEAK_FUNC(sub_823617E8);
PPC_FUNC_IMPL(__imp__sub_823617E8) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350110
	ctx.lr = 0x82361800;
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

__attribute__((alias("__imp__sub_82361810"))) PPC_WEAK_FUNC(sub_82361810);
PPC_FUNC_IMPL(__imp__sub_82361810) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82361828;
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

__attribute__((alias("__imp__sub_82361838"))) PPC_WEAK_FUNC(sub_82361838);
PPC_FUNC_IMPL(__imp__sub_82361838) {
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
	// bl 0x823603b0
	ctx.lr = 0x82361850;
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

__attribute__((alias("__imp__sub_82361860"))) PPC_WEAK_FUNC(sub_82361860);
PPC_FUNC_IMPL(__imp__sub_82361860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-30728(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30728);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82361870;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x82367038
	ctx.lr = 0x82361890;
	sub_82367038(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823618f0
	if (ctx.cr6.lt) goto loc_823618F0;
	// beq cr6,0x823618f4
	if (ctx.cr6.eq) goto loc_823618F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823618e4
	if (ctx.cr6.lt) goto loc_823618E4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x823618cc
	if (ctx.cr6.lt) goto loc_823618CC;
	// beq cr6,0x823618f0
	if (ctx.cr6.eq) goto loc_823618F0;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x823618f8
	goto loc_823618F8;
loc_823618CC:
	// bl 0x82360ef0
	ctx.lr = 0x823618D0;
	sub_82360EF0(ctx, base);
	// bl 0x8236e730
	ctx.lr = 0x823618D4;
	sub_8236E730(ctx, base);
	// lwz r29,184(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r28,180(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x823618f8
	goto loc_823618F8;
loc_823618E4:
	// lwz r29,184(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r28,180(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x823618f4
	goto loc_823618F4;
loc_823618F0:
	// stw r26,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r26.u32);
loc_823618F4:
	// lwz r27,180(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
loc_823618F8:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82361aa8
	if (ctx.cr0.eq) goto loc_82361AA8;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82361908;
	sub_8236A338(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361930
	if (ctx.cr0.eq) goto loc_82361930;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82367ea8
	ctx.lr = 0x82361928;
	sub_82367EA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82361934
	goto loc_82361934;
loc_82361930:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82361934:
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82361964
	if (ctx.cr6.eq) goto loc_82361964;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82361944:
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
	// bne 0x82361944
	if (!ctx.cr0.eq) goto loc_82361944;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82361964:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x8236196C;
	sub_8236A338(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823619c0
	if (ctx.cr0.eq) goto loc_823619C0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823619a8
	if (ctx.cr6.eq) goto loc_823619A8;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82361988:
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
	// bne 0x82361988
	if (!ctx.cr0.eq) goto loc_82361988;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_823619A8:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,15000
	ctx.r6.s64 = 15000;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82367600
	ctx.lr = 0x823619BC;
	sub_82367600(ctx, base);
	// b 0x823619c4
	goto loc_823619C4;
loc_823619C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823619C4:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823619f4
	if (ctx.cr6.eq) goto loc_823619F4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823619D4:
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
	// bne 0x823619d4
	if (!ctx.cr0.eq) goto loc_823619D4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823619F4:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361a24
	if (ctx.cr6.eq) goto loc_82361A24;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361A04:
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
	// bne 0x82361a04
	if (!ctx.cr0.eq) goto loc_82361A04;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361A24:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8235ffa0
	ctx.lr = 0x82361A34;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82361A48;
	sub_82360E08(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82375128
	ctx.lr = 0x82361A50;
	sub_82375128(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r9,r11,-30844
	ctx.r9.s64 = ctx.r11.s64 + -30844;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-30880
	ctx.r7.s64 = ctx.r8.s64 + -30880;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1400
	ctx.r8.s64 = 1400;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82372320
	ctx.lr = 0x82361A94;
	sub_82372320(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x82361A9C;
	sub_82375128(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82375128
	ctx.lr = 0x82361AA4;
	sub_82375128(ctx, base);
	// b 0x82361adc
	goto loc_82361ADC;
loc_82361AA8:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-30944
	ctx.r9.s64 = ctx.r11.s64 + -30944;
	// addi r7,r10,-30880
	ctx.r7.s64 = ctx.r10.s64 + -30880;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,1404
	ctx.r8.s64 = 1404;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82361ADC;
	sub_82372320(ctx, base);
loc_82361ADC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82375128
	ctx.lr = 0x82361AE4;
	sub_82375128(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361868"))) PPC_WEAK_FUNC(sub_82361868);
PPC_FUNC_IMPL(__imp__sub_82361868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82361870;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x82367038
	ctx.lr = 0x82361890;
	sub_82367038(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823618f0
	if (ctx.cr6.lt) goto loc_823618F0;
	// beq cr6,0x823618f4
	if (ctx.cr6.eq) goto loc_823618F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823618e4
	if (ctx.cr6.lt) goto loc_823618E4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x823618cc
	if (ctx.cr6.lt) goto loc_823618CC;
	// beq cr6,0x823618f0
	if (ctx.cr6.eq) goto loc_823618F0;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x823618f8
	goto loc_823618F8;
loc_823618CC:
	// bl 0x82360ef0
	ctx.lr = 0x823618D0;
	sub_82360EF0(ctx, base);
	// bl 0x8236e730
	ctx.lr = 0x823618D4;
	sub_8236E730(ctx, base);
	// lwz r29,184(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r28,180(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x823618f8
	goto loc_823618F8;
loc_823618E4:
	// lwz r29,184(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r28,180(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x823618f4
	goto loc_823618F4;
loc_823618F0:
	// stw r26,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r26.u32);
loc_823618F4:
	// lwz r27,180(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
loc_823618F8:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82361aa8
	if (ctx.cr0.eq) goto loc_82361AA8;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8236a338
	ctx.lr = 0x82361908;
	sub_8236A338(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361930
	if (ctx.cr0.eq) goto loc_82361930;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82367ea8
	ctx.lr = 0x82361928;
	sub_82367EA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82361934
	goto loc_82361934;
loc_82361930:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82361934:
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82361964
	if (ctx.cr6.eq) goto loc_82361964;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82361944:
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
	// bne 0x82361944
	if (!ctx.cr0.eq) goto loc_82361944;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82361964:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x8236196C;
	sub_8236A338(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823619c0
	if (ctx.cr0.eq) goto loc_823619C0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823619a8
	if (ctx.cr6.eq) goto loc_823619A8;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82361988:
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
	// bne 0x82361988
	if (!ctx.cr0.eq) goto loc_82361988;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_823619A8:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,15000
	ctx.r6.s64 = 15000;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82367600
	ctx.lr = 0x823619BC;
	sub_82367600(ctx, base);
	// b 0x823619c4
	goto loc_823619C4;
loc_823619C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823619C4:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823619f4
	if (ctx.cr6.eq) goto loc_823619F4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823619D4:
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
	// bne 0x823619d4
	if (!ctx.cr0.eq) goto loc_823619D4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823619F4:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361a24
	if (ctx.cr6.eq) goto loc_82361A24;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361A04:
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
	// bne 0x82361a04
	if (!ctx.cr0.eq) goto loc_82361A04;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361A24:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8235ffa0
	ctx.lr = 0x82361A34;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82361A48;
	sub_82360E08(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82375128
	ctx.lr = 0x82361A50;
	sub_82375128(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r9,r11,-30844
	ctx.r9.s64 = ctx.r11.s64 + -30844;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-30880
	ctx.r7.s64 = ctx.r8.s64 + -30880;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1400
	ctx.r8.s64 = 1400;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82372320
	ctx.lr = 0x82361A94;
	sub_82372320(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x82361A9C;
	sub_82375128(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82375128
	ctx.lr = 0x82361AA4;
	sub_82375128(ctx, base);
	// b 0x82361adc
	goto loc_82361ADC;
loc_82361AA8:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-30944
	ctx.r9.s64 = ctx.r11.s64 + -30944;
	// addi r7,r10,-30880
	ctx.r7.s64 = ctx.r10.s64 + -30880;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,1404
	ctx.r8.s64 = 1404;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82361ADC;
	sub_82372320(ctx, base);
loc_82361ADC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82375128
	ctx.lr = 0x82361AE4;
	sub_82375128(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361AF0"))) PPC_WEAK_FUNC(sub_82361AF0);
PPC_FUNC_IMPL(__imp__sub_82361AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82375128
	ctx.lr = 0x82361B08;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361B18"))) PPC_WEAK_FUNC(sub_82361B18);
PPC_FUNC_IMPL(__imp__sub_82361B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82350110
	ctx.lr = 0x82361B30;
	sub_82350110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361B40"))) PPC_WEAK_FUNC(sub_82361B40);
PPC_FUNC_IMPL(__imp__sub_82361B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82375128
	ctx.lr = 0x82361B58;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361B68"))) PPC_WEAK_FUNC(sub_82361B68);
PPC_FUNC_IMPL(__imp__sub_82361B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82350110
	ctx.lr = 0x82361B80;
	sub_82350110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361B90"))) PPC_WEAK_FUNC(sub_82361B90);
PPC_FUNC_IMPL(__imp__sub_82361B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x82361BA8;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361BB8"))) PPC_WEAK_FUNC(sub_82361BB8);
PPC_FUNC_IMPL(__imp__sub_82361BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823603b0
	ctx.lr = 0x82361BD0;
	sub_823603B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361BE0"))) PPC_WEAK_FUNC(sub_82361BE0);
PPC_FUNC_IMPL(__imp__sub_82361BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-30400(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30400);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82361BF0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,248
	ctx.r3.s64 = ctx.r3.s64 + 248;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x823689c8
	ctx.lr = 0x82361C10;
	sub_823689C8(ctx, base);
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stb r10,216(r30)
	PPC_STORE_U8(ctx.r30.u32 + 216, ctx.r10.u8);
	// bge cr6,0x82361d80
	if (!ctx.cr6.lt) goto loc_82361D80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82367558
	ctx.lr = 0x82361C38;
	sub_82367558(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82361d74
	if (ctx.cr0.eq) goto loc_82361D74;
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e690
	ctx.lr = 0x82361C48;
	sub_8236E690(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x82361C50;
	sub_8236A338(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361c9c
	if (ctx.cr0.eq) goto loc_82361C9C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82361c90
	if (ctx.cr6.eq) goto loc_82361C90;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82361C70:
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
	// bne 0x82361c70
	if (!ctx.cr0.eq) goto loc_82361C70;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82361C90:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bl 0x823680f8
	ctx.lr = 0x82361C98;
	sub_823680F8(ctx, base);
	// b 0x82361ca0
	goto loc_82361CA0;
loc_82361C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361CA0:
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361cd0
	if (ctx.cr6.eq) goto loc_82361CD0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361CB0:
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
	// bne 0x82361cb0
	if (!ctx.cr0.eq) goto loc_82361CB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361CD0:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361d00
	if (ctx.cr6.eq) goto loc_82361D00;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361CE0:
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
	// bne 0x82361ce0
	if (!ctx.cr0.eq) goto loc_82361CE0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361D00:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8235ffa0
	ctx.lr = 0x82361D10;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82361D24;
	sub_82360E08(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82375128
	ctx.lr = 0x82361D2C;
	sub_82375128(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r9,r11,-30500
	ctx.r9.s64 = ctx.r11.s64 + -30500;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-30536
	ctx.r7.s64 = ctx.r8.s64 + -30536;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1427
	ctx.r8.s64 = 1427;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82372320
	ctx.lr = 0x82361D6C;
	sub_82372320(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82375128
	ctx.lr = 0x82361D74;
	sub_82375128(ctx, base);
loc_82361D74:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82361D7C;
	sub_82375128(ctx, base);
	// b 0x82361d84
	goto loc_82361D84;
loc_82361D80:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82361D84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82361D8C;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361BE8"))) PPC_WEAK_FUNC(sub_82361BE8);
PPC_FUNC_IMPL(__imp__sub_82361BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82361BF0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,248
	ctx.r3.s64 = ctx.r3.s64 + 248;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x823689c8
	ctx.lr = 0x82361C10;
	sub_823689C8(ctx, base);
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stb r10,216(r30)
	PPC_STORE_U8(ctx.r30.u32 + 216, ctx.r10.u8);
	// bge cr6,0x82361d80
	if (!ctx.cr6.lt) goto loc_82361D80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82367558
	ctx.lr = 0x82361C38;
	sub_82367558(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82361d74
	if (ctx.cr0.eq) goto loc_82361D74;
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e690
	ctx.lr = 0x82361C48;
	sub_8236E690(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x82361C50;
	sub_8236A338(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361c9c
	if (ctx.cr0.eq) goto loc_82361C9C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82361c90
	if (ctx.cr6.eq) goto loc_82361C90;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82361C70:
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
	// bne 0x82361c70
	if (!ctx.cr0.eq) goto loc_82361C70;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82361C90:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// bl 0x823680f8
	ctx.lr = 0x82361C98;
	sub_823680F8(ctx, base);
	// b 0x82361ca0
	goto loc_82361CA0;
loc_82361C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361CA0:
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361cd0
	if (ctx.cr6.eq) goto loc_82361CD0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361CB0:
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
	// bne 0x82361cb0
	if (!ctx.cr0.eq) goto loc_82361CB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361CD0:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361d00
	if (ctx.cr6.eq) goto loc_82361D00;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361CE0:
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
	// bne 0x82361ce0
	if (!ctx.cr0.eq) goto loc_82361CE0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361D00:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8235ffa0
	ctx.lr = 0x82361D10;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82361D24;
	sub_82360E08(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82375128
	ctx.lr = 0x82361D2C;
	sub_82375128(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r9,r11,-30500
	ctx.r9.s64 = ctx.r11.s64 + -30500;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-30536
	ctx.r7.s64 = ctx.r8.s64 + -30536;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1427
	ctx.r8.s64 = 1427;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82372320
	ctx.lr = 0x82361D6C;
	sub_82372320(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82375128
	ctx.lr = 0x82361D74;
	sub_82375128(ctx, base);
loc_82361D74:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82361D7C;
	sub_82375128(ctx, base);
	// b 0x82361d84
	goto loc_82361D84;
loc_82361D80:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82361D84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82361D8C;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361D98"))) PPC_WEAK_FUNC(sub_82361D98);
PPC_FUNC_IMPL(__imp__sub_82361D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82375128
	ctx.lr = 0x82361DB0;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361DC0"))) PPC_WEAK_FUNC(sub_82361DC0);
PPC_FUNC_IMPL(__imp__sub_82361DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82361DD8;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361DE8"))) PPC_WEAK_FUNC(sub_82361DE8);
PPC_FUNC_IMPL(__imp__sub_82361DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82350110
	ctx.lr = 0x82361E00;
	sub_82350110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361E10"))) PPC_WEAK_FUNC(sub_82361E10);
PPC_FUNC_IMPL(__imp__sub_82361E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82375128
	ctx.lr = 0x82361E28;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361E38"))) PPC_WEAK_FUNC(sub_82361E38);
PPC_FUNC_IMPL(__imp__sub_82361E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823603b0
	ctx.lr = 0x82361E50;
	sub_823603B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361E60"))) PPC_WEAK_FUNC(sub_82361E60);
PPC_FUNC_IMPL(__imp__sub_82361E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-30120(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30120);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82361E8C;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361ea0
	if (ctx.cr0.eq) goto loc_82361EA0;
	// bl 0x82368518
	ctx.lr = 0x82361E9C;
	sub_82368518(ctx, base);
	// b 0x82361ea4
	goto loc_82361EA4;
loc_82361EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361EA4:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361ed4
	if (ctx.cr6.eq) goto loc_82361ED4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361EB4:
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
	// bne 0x82361eb4
	if (!ctx.cr0.eq) goto loc_82361EB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361ED4:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361f04
	if (ctx.cr6.eq) goto loc_82361F04;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361EE4:
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
	// bne 0x82361ee4
	if (!ctx.cr0.eq) goto loc_82361EE4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361F04:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8235ffa0
	ctx.lr = 0x82361F14;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82361F28;
	sub_82360E08(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x82361F30;
	sub_82375128(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r9,r11,-30196
	ctx.r9.s64 = ctx.r11.s64 + -30196;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-30232
	ctx.r7.s64 = ctx.r8.s64 + -30232;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1446
	ctx.r8.s64 = 1446;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82372320
	ctx.lr = 0x82361F70;
	sub_82372320(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82361F78;
	sub_82375128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361E68"))) PPC_WEAK_FUNC(sub_82361E68);
PPC_FUNC_IMPL(__imp__sub_82361E68) {
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
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82361E8C;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361ea0
	if (ctx.cr0.eq) goto loc_82361EA0;
	// bl 0x82368518
	ctx.lr = 0x82361E9C;
	sub_82368518(ctx, base);
	// b 0x82361ea4
	goto loc_82361EA4;
loc_82361EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361EA4:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361ed4
	if (ctx.cr6.eq) goto loc_82361ED4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361EB4:
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
	// bne 0x82361eb4
	if (!ctx.cr0.eq) goto loc_82361EB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361ED4:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361f04
	if (ctx.cr6.eq) goto loc_82361F04;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82361EE4:
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
	// bne 0x82361ee4
	if (!ctx.cr0.eq) goto loc_82361EE4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82361F04:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8235ffa0
	ctx.lr = 0x82361F14;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82361F28;
	sub_82360E08(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x82361F30;
	sub_82375128(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r9,r11,-30196
	ctx.r9.s64 = ctx.r11.s64 + -30196;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-30232
	ctx.r7.s64 = ctx.r8.s64 + -30232;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1446
	ctx.r8.s64 = 1446;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82372320
	ctx.lr = 0x82361F70;
	sub_82372320(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82361F78;
	sub_82375128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361F94"))) PPC_WEAK_FUNC(sub_82361F94);
PPC_FUNC_IMPL(__imp__sub_82361F94) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82350110
	ctx.lr = 0x82361FAC;
	sub_82350110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361FBC"))) PPC_WEAK_FUNC(sub_82361FBC);
PPC_FUNC_IMPL(__imp__sub_82361FBC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82361FD4;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361FE4"))) PPC_WEAK_FUNC(sub_82361FE4);
PPC_FUNC_IMPL(__imp__sub_82361FE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823603b0
	ctx.lr = 0x82361FFC;
	sub_823603B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236200C"))) PPC_WEAK_FUNC(sub_8236200C);
PPC_FUNC_IMPL(__imp__sub_8236200C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362010"))) PPC_WEAK_FUNC(sub_82362010);
PPC_FUNC_IMPL(__imp__sub_82362010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-30008(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30008);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82362020;
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
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82362100
	if (!ctx.cr6.eq) goto loc_82362100;
	// bl 0x8235ff10
	ctx.lr = 0x82362044;
	sub_8235FF10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362100
	if (ctx.cr0.eq) goto loc_82362100;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82362054;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82362068
	if (ctx.cr0.eq) goto loc_82362068;
	// bl 0x82368788
	ctx.lr = 0x82362064;
	sub_82368788(ctx, base);
	// b 0x8236206c
	goto loc_8236206C;
loc_82362068:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236206C:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236209c
	if (ctx.cr6.eq) goto loc_8236209C;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8236207C:
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
	// bne 0x8236207c
	if (!ctx.cr0.eq) goto loc_8236207C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8236209C:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823620cc
	if (ctx.cr6.eq) goto loc_823620CC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823620AC:
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
	// bne 0x823620ac
	if (!ctx.cr0.eq) goto loc_823620AC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823620CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235ffa0
	ctx.lr = 0x823620DC;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x823620F0;
	sub_82360E08(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x823620F8;
	sub_82375128(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82362100;
	sub_82375128(ctx, base);
loc_82362100:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82362108;
	sub_82375128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362018"))) PPC_WEAK_FUNC(sub_82362018);
PPC_FUNC_IMPL(__imp__sub_82362018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82362020;
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
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82362100
	if (!ctx.cr6.eq) goto loc_82362100;
	// bl 0x8235ff10
	ctx.lr = 0x82362044;
	sub_8235FF10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362100
	if (ctx.cr0.eq) goto loc_82362100;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82362054;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82362068
	if (ctx.cr0.eq) goto loc_82362068;
	// bl 0x82368788
	ctx.lr = 0x82362064;
	sub_82368788(ctx, base);
	// b 0x8236206c
	goto loc_8236206C;
loc_82362068:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236206C:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236209c
	if (ctx.cr6.eq) goto loc_8236209C;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8236207C:
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
	// bne 0x8236207c
	if (!ctx.cr0.eq) goto loc_8236207C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8236209C:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823620cc
	if (ctx.cr6.eq) goto loc_823620CC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823620AC:
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
	// bne 0x823620ac
	if (!ctx.cr0.eq) goto loc_823620AC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823620CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235ffa0
	ctx.lr = 0x823620DC;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x823620F0;
	sub_82360E08(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x823620F8;
	sub_82375128(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82362100;
	sub_82375128(ctx, base);
loc_82362100:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82362108;
	sub_82375128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362114"))) PPC_WEAK_FUNC(sub_82362114);
PPC_FUNC_IMPL(__imp__sub_82362114) {
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
	ctx.lr = 0x8236212C;
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

__attribute__((alias("__imp__sub_8236213C"))) PPC_WEAK_FUNC(sub_8236213C);
PPC_FUNC_IMPL(__imp__sub_8236213C) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350110
	ctx.lr = 0x82362154;
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

__attribute__((alias("__imp__sub_82362164"))) PPC_WEAK_FUNC(sub_82362164);
PPC_FUNC_IMPL(__imp__sub_82362164) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x8236217C;
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

__attribute__((alias("__imp__sub_8236218C"))) PPC_WEAK_FUNC(sub_8236218C);
PPC_FUNC_IMPL(__imp__sub_8236218C) {
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
	// bl 0x823603b0
	ctx.lr = 0x823621A4;
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

__attribute__((alias("__imp__sub_823621B4"))) PPC_WEAK_FUNC(sub_823621B4);
PPC_FUNC_IMPL(__imp__sub_823621B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823621B8"))) PPC_WEAK_FUNC(sub_823621B8);
PPC_FUNC_IMPL(__imp__sub_823621B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-29776(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -29776);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823621C8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// bge cr6,0x823622f0
	if (!ctx.cr6.lt) goto loc_823622F0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r3,5
	ctx.r3.s64 = 5;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r10,-29836
	ctx.r9.s64 = ctx.r10.s64 + -29836;
	// addi r7,r8,-29872
	ctx.r7.s64 = ctx.r8.s64 + -29872;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r8,1479
	ctx.r8.s64 = 1479;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82362230;
	sub_82372320(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82362238;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236224c
	if (ctx.cr0.eq) goto loc_8236224C;
	// bl 0x823687d0
	ctx.lr = 0x82362248;
	sub_823687D0(ctx, base);
	// b 0x82362250
	goto loc_82362250;
loc_8236224C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362250:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362280
	if (ctx.cr6.eq) goto loc_82362280;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362260:
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
	// bne 0x82362260
	if (!ctx.cr0.eq) goto loc_82362260;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362280:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823622b0
	if (ctx.cr6.eq) goto loc_823622B0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362290:
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
	// bne 0x82362290
	if (!ctx.cr0.eq) goto loc_82362290;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823622B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8235ffa0
	ctx.lr = 0x823622C0;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x823622D4;
	sub_82360E08(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x823622DC;
	sub_82375128(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e690
	ctx.lr = 0x823622E4;
	sub_8236E690(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x823622EC;
	sub_82375128(ctx, base);
	// b 0x823622f4
	goto loc_823622F4;
loc_823622F0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823622F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823621C0"))) PPC_WEAK_FUNC(sub_823621C0);
PPC_FUNC_IMPL(__imp__sub_823621C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823621C8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// bge cr6,0x823622f0
	if (!ctx.cr6.lt) goto loc_823622F0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r3,5
	ctx.r3.s64 = 5;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r10,-29836
	ctx.r9.s64 = ctx.r10.s64 + -29836;
	// addi r7,r8,-29872
	ctx.r7.s64 = ctx.r8.s64 + -29872;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r8,1479
	ctx.r8.s64 = 1479;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82362230;
	sub_82372320(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82362238;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236224c
	if (ctx.cr0.eq) goto loc_8236224C;
	// bl 0x823687d0
	ctx.lr = 0x82362248;
	sub_823687D0(ctx, base);
	// b 0x82362250
	goto loc_82362250;
loc_8236224C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362250:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362280
	if (ctx.cr6.eq) goto loc_82362280;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362260:
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
	// bne 0x82362260
	if (!ctx.cr0.eq) goto loc_82362260;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362280:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823622b0
	if (ctx.cr6.eq) goto loc_823622B0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362290:
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
	// bne 0x82362290
	if (!ctx.cr0.eq) goto loc_82362290;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823622B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8235ffa0
	ctx.lr = 0x823622C0;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x823622D4;
	sub_82360E08(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x823622DC;
	sub_82375128(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e690
	ctx.lr = 0x823622E4;
	sub_8236E690(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x823622EC;
	sub_82375128(ctx, base);
	// b 0x823622f4
	goto loc_823622F4;
loc_823622F0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823622F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362300"))) PPC_WEAK_FUNC(sub_82362300);
PPC_FUNC_IMPL(__imp__sub_82362300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82350110
	ctx.lr = 0x82362318;
	sub_82350110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362328"))) PPC_WEAK_FUNC(sub_82362328);
PPC_FUNC_IMPL(__imp__sub_82362328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82362340;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362350"))) PPC_WEAK_FUNC(sub_82362350);
PPC_FUNC_IMPL(__imp__sub_82362350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823603b0
	ctx.lr = 0x82362368;
	sub_823603B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362378"))) PPC_WEAK_FUNC(sub_82362378);
PPC_FUNC_IMPL(__imp__sub_82362378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-29584(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -29584);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82362388;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// bge cr6,0x823624b0
	if (!ctx.cr6.lt) goto loc_823624B0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r3,5
	ctx.r3.s64 = 5;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r10,-29648
	ctx.r9.s64 = ctx.r10.s64 + -29648;
	// addi r7,r8,-29688
	ctx.r7.s64 = ctx.r8.s64 + -29688;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r8,1499
	ctx.r8.s64 = 1499;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823623F0;
	sub_82372320(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x823623F8;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236240c
	if (ctx.cr0.eq) goto loc_8236240C;
	// bl 0x82368938
	ctx.lr = 0x82362408;
	sub_82368938(ctx, base);
	// b 0x82362410
	goto loc_82362410;
loc_8236240C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362410:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362440
	if (ctx.cr6.eq) goto loc_82362440;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362420:
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
	// bne 0x82362420
	if (!ctx.cr0.eq) goto loc_82362420;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362440:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362470
	if (ctx.cr6.eq) goto loc_82362470;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362450:
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
	// bne 0x82362450
	if (!ctx.cr0.eq) goto loc_82362450;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362470:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8235ffa0
	ctx.lr = 0x82362480;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82362494;
	sub_82360E08(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x8236249C;
	sub_82375128(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e690
	ctx.lr = 0x823624A4;
	sub_8236E690(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x823624AC;
	sub_82375128(ctx, base);
	// b 0x823624b4
	goto loc_823624B4;
loc_823624B0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823624B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362380"))) PPC_WEAK_FUNC(sub_82362380);
PPC_FUNC_IMPL(__imp__sub_82362380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82362388;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// bge cr6,0x823624b0
	if (!ctx.cr6.lt) goto loc_823624B0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r3,5
	ctx.r3.s64 = 5;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r10,-29648
	ctx.r9.s64 = ctx.r10.s64 + -29648;
	// addi r7,r8,-29688
	ctx.r7.s64 = ctx.r8.s64 + -29688;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r8,1499
	ctx.r8.s64 = 1499;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823623F0;
	sub_82372320(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x823623F8;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236240c
	if (ctx.cr0.eq) goto loc_8236240C;
	// bl 0x82368938
	ctx.lr = 0x82362408;
	sub_82368938(ctx, base);
	// b 0x82362410
	goto loc_82362410;
loc_8236240C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362410:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362440
	if (ctx.cr6.eq) goto loc_82362440;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362420:
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
	// bne 0x82362420
	if (!ctx.cr0.eq) goto loc_82362420;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362440:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362470
	if (ctx.cr6.eq) goto loc_82362470;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362450:
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
	// bne 0x82362450
	if (!ctx.cr0.eq) goto loc_82362450;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362470:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8235ffa0
	ctx.lr = 0x82362480;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82362494;
	sub_82360E08(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82375128
	ctx.lr = 0x8236249C;
	sub_82375128(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e690
	ctx.lr = 0x823624A4;
	sub_8236E690(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x823624AC;
	sub_82375128(ctx, base);
	// b 0x823624b4
	goto loc_823624B4;
loc_823624B0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823624B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823624C0"))) PPC_WEAK_FUNC(sub_823624C0);
PPC_FUNC_IMPL(__imp__sub_823624C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82350110
	ctx.lr = 0x823624D8;
	sub_82350110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823624E8"))) PPC_WEAK_FUNC(sub_823624E8);
PPC_FUNC_IMPL(__imp__sub_823624E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82362500;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362510"))) PPC_WEAK_FUNC(sub_82362510);
PPC_FUNC_IMPL(__imp__sub_82362510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823603b0
	ctx.lr = 0x82362528;
	sub_823603B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362538"))) PPC_WEAK_FUNC(sub_82362538);
PPC_FUNC_IMPL(__imp__sub_82362538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-29392(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -29392);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-29452
	ctx.r9.s64 = ctx.r11.s64 + -29452;
	// addi r7,r10,-29496
	ctx.r7.s64 = ctx.r10.s64 + -29496;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1517
	ctx.r8.s64 = 1517;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82362590;
	sub_82372320(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82362598;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823625ac
	if (ctx.cr0.eq) goto loc_823625AC;
	// bl 0x82368980
	ctx.lr = 0x823625A8;
	sub_82368980(ctx, base);
	// b 0x823625b0
	goto loc_823625B0;
loc_823625AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823625B0:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823625e0
	if (ctx.cr6.eq) goto loc_823625E0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823625C0:
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
	// bne 0x823625c0
	if (!ctx.cr0.eq) goto loc_823625C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823625E0:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362610
	if (ctx.cr6.eq) goto loc_82362610;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823625F0:
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
	// bne 0x823625f0
	if (!ctx.cr0.eq) goto loc_823625F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362610:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235ffa0
	ctx.lr = 0x82362620;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82362634;
	sub_82360E08(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x8236263C;
	sub_82375128(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82362644;
	sub_82375128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362540"))) PPC_WEAK_FUNC(sub_82362540);
PPC_FUNC_IMPL(__imp__sub_82362540) {
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
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-29452
	ctx.r9.s64 = ctx.r11.s64 + -29452;
	// addi r7,r10,-29496
	ctx.r7.s64 = ctx.r10.s64 + -29496;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,1517
	ctx.r8.s64 = 1517;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82362590;
	sub_82372320(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82362598;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823625ac
	if (ctx.cr0.eq) goto loc_823625AC;
	// bl 0x82368980
	ctx.lr = 0x823625A8;
	sub_82368980(ctx, base);
	// b 0x823625b0
	goto loc_823625B0;
loc_823625AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823625B0:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823625e0
	if (ctx.cr6.eq) goto loc_823625E0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823625C0:
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
	// bne 0x823625c0
	if (!ctx.cr0.eq) goto loc_823625C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823625E0:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362610
	if (ctx.cr6.eq) goto loc_82362610;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823625F0:
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
	// bne 0x823625f0
	if (!ctx.cr0.eq) goto loc_823625F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362610:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235ffa0
	ctx.lr = 0x82362620;
	sub_8235FFA0(ctx, base);
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82360e08
	ctx.lr = 0x82362634;
	sub_82360E08(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x8236263C;
	sub_82375128(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82362644;
	sub_82375128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362660"))) PPC_WEAK_FUNC(sub_82362660);
PPC_FUNC_IMPL(__imp__sub_82362660) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350110
	ctx.lr = 0x82362678;
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

__attribute__((alias("__imp__sub_82362688"))) PPC_WEAK_FUNC(sub_82362688);
PPC_FUNC_IMPL(__imp__sub_82362688) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x823626A0;
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

__attribute__((alias("__imp__sub_823626B0"))) PPC_WEAK_FUNC(sub_823626B0);
PPC_FUNC_IMPL(__imp__sub_823626B0) {
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
	// bl 0x823603b0
	ctx.lr = 0x823626C8;
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

__attribute__((alias("__imp__sub_823626D8"))) PPC_WEAK_FUNC(sub_823626D8);
PPC_FUNC_IMPL(__imp__sub_823626D8) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82362738
	if (!ctx.cr6.eq) goto loc_82362738;
	// bl 0x8235f810
	ctx.lr = 0x82362704;
	sub_8235F810(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362720
	if (ctx.cr0.eq) goto loc_82362720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361690
	ctx.lr = 0x82362714;
	sub_82361690(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82362724
	if (!ctx.cr0.eq) goto loc_82362724;
loc_82362720:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82362724:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82362738
	if (!ctx.cr6.eq) goto loc_82362738;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
loc_82362738:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82362774
	if (!ctx.cr0.eq) goto loc_82362774;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-29280
	ctx.r9.s64 = ctx.r11.s64 + -29280;
	// addi r7,r10,-29312
	ctx.r7.s64 = ctx.r10.s64 + -29312;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,181
	ctx.r8.s64 = 181;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82362774;
	sub_82372320(ctx, base);
loc_82362774:
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

__attribute__((alias("__imp__sub_82362790"))) PPC_WEAK_FUNC(sub_82362790);
PPC_FUNC_IMPL(__imp__sub_82362790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-29064(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -29064);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x823627A0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x823696c8
	ctx.lr = 0x823627C4;
	sub_823696C8(ctx, base);
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x8236e6c0
	ctx.lr = 0x823627CC;
	sub_8236E6C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8236280c
	if (!ctx.cr6.gt) goto loc_8236280C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823627F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_823627F4:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369708
	ctx.lr = 0x823627FC;
	sub_82369708(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8236280C:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823628e8
	if (!ctx.cr6.eq) goto loc_823628E8;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e6c0
	ctx.lr = 0x82362820;
	sub_8236E6C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8236283c
	if (!ctx.cr6.gt) goto loc_8236283C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361690
	ctx.lr = 0x82362838;
	sub_82361690(ctx, base);
	// b 0x823628cc
	goto loc_823628CC;
loc_8236283C:
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e6c0
	ctx.lr = 0x82362844;
	sub_8236E6C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82362890
	if (!ctx.cr6.gt) goto loc_82362890;
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82362880
	if (ctx.cr6.eq) goto loc_82362880;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82362860:
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
	// bne 0x82362860
	if (!ctx.cr0.eq) goto loc_82362860;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82362880:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361be8
	ctx.lr = 0x8236288C;
	sub_82361BE8(ctx, base);
	// b 0x823628cc
	goto loc_823628CC;
loc_82362890:
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e6c0
	ctx.lr = 0x82362898;
	sub_8236E6C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x823628e8
	if (!ctx.cr6.gt) goto loc_823628E8;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823628c4
	if (ctx.cr6.eq) goto loc_823628C4;
	// ble cr6,0x823628e8
	if (!ctx.cr6.gt) goto loc_823628E8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x823628e8
	if (ctx.cr6.gt) goto loc_823628E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362380
	ctx.lr = 0x823628C0;
	sub_82362380(ctx, base);
	// b 0x823628cc
	goto loc_823628CC;
loc_823628C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823621c0
	ctx.lr = 0x823628CC;
	sub_823621C0(ctx, base);
loc_823628CC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823628e8
	if (!ctx.cr0.eq) goto loc_823628E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823628E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823628E8:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362970
	if (ctx.cr6.eq) goto loc_82362970;
	// addi r28,r30,148
	ctx.r28.s64 = ctx.r30.s64 + 148;
loc_823628F8:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823629f4
	if (!ctx.cr0.eq) goto loc_823629F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8236293c
	if (ctx.cr6.eq) goto loc_8236293C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8236291C:
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
	// bne 0x8236291c
	if (!ctx.cr0.eq) goto loc_8236291C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8236293C:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823695f0
	ctx.lr = 0x82362948;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362970
	if (ctx.cr0.eq) goto loc_82362970;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82360d08
	ctx.lr = 0x82362964;
	sub_82360D08(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823628f8
	if (!ctx.cr6.eq) goto loc_823628F8;
loc_82362970:
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x8236e6c0
	ctx.lr = 0x82362978;
	sub_8236E6C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r28,r11,32416
	ctx.r28.s64 = ctx.r11.s64 + 32416;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r27,r10,32492
	ctx.r27.s64 = ctx.r10.s64 + 32492;
	// addi r26,r9,-29156
	ctx.r26.s64 = ctx.r9.s64 + -29156;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82362b9c
	if (ctx.cr6.lt) goto loc_82362B9C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82362b9c
	if (ctx.cr6.gt) goto loc_82362B9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82362b68
	if (!ctx.cr6.gt) goto loc_82362B68;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-29200
	ctx.r9.s64 = ctx.r11.s64 + -29200;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// li r8,638
	ctx.r8.s64 = 638;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823629DC;
	sub_82372320(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823629F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82362b9c
	goto loc_82362B9C;
loc_823629F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x82362a6c
	goto loc_82362A6C;
loc_82362A08:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82362a3c
	if (ctx.cr6.eq) goto loc_82362A3C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82362A1C:
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
	// bne 0x82362a1c
	if (!ctx.cr0.eq) goto loc_82362A1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82362A3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235ffa0
	ctx.lr = 0x82362A4C;
	sub_8235FFA0(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82360e08
	ctx.lr = 0x82362A5C;
	sub_82360E08(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82362A64;
	sub_82375128(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_82362A6C:
	// bl 0x82369788
	ctx.lr = 0x82362A70;
	sub_82369788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82362a08
	if (!ctx.cr0.eq) goto loc_82362A08;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,184(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82362A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82362adc
	if (!ctx.cr6.eq) goto loc_82362ADC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// beq cr6,0x82362acc
	if (ctx.cr6.eq) goto loc_82362ACC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362AAC:
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
	// bne 0x82362aac
	if (!ctx.cr0.eq) goto loc_82362AAC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362ACC:
	// bl 0x82367438
	ctx.lr = 0x82362AD0;
	sub_82367438(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82362ADC;
	sub_82375128(ctx, base);
loc_82362ADC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823696c8
	ctx.lr = 0x82362AEC;
	sub_823696C8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82362b20
	if (ctx.cr6.eq) goto loc_82362B20;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82362B00:
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
	// bne 0x82362b00
	if (!ctx.cr0.eq) goto loc_82362B00;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82362B20:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823695f0
	ctx.lr = 0x82362B2C;
	sub_823695F0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82360d08
	ctx.lr = 0x82362B40;
	sub_82360D08(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82368aa0
	ctx.lr = 0x82362B50;
	sub_82368AA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82369708
	ctx.lr = 0x82362B5C;
	sub_82369708(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82362B64;
	sub_82375128(ctx, base);
	// b 0x823627f4
	goto loc_823627F4;
loc_82362B68:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362b7c
	if (ctx.cr6.eq) goto loc_82362B7C;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82364840
	ctx.lr = 0x82362B7C;
	sub_82364840(ctx, base);
loc_82362B7C:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362b90
	if (ctx.cr6.eq) goto loc_82362B90;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x823652d8
	ctx.lr = 0x82362B90;
	sub_823652D8(ctx, base);
loc_82362B90:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x82366168
	ctx.lr = 0x82362B9C;
	sub_82366168(ctx, base);
loc_82362B9C:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82362be8
	if (ctx.cr6.eq) goto loc_82362BE8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82362c38
	if (!ctx.cr6.eq) goto loc_82362C38;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368e38
	ctx.lr = 0x82362BB8;
	sub_82368E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c38
	if (ctx.cr0.eq) goto loc_82362C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ff10
	ctx.lr = 0x82362BC8;
	sub_8235FF10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c38
	if (ctx.cr0.eq) goto loc_82362C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362380
	ctx.lr = 0x82362BD8;
	sub_82362380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c24
	if (ctx.cr0.eq) goto loc_82362C24;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82362c1c
	goto loc_82362C1C;
loc_82362BE8:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368e38
	ctx.lr = 0x82362BF0;
	sub_82368E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c38
	if (ctx.cr0.eq) goto loc_82362C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ff10
	ctx.lr = 0x82362C00;
	sub_8235FF10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c38
	if (ctx.cr0.eq) goto loc_82362C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823621c0
	ctx.lr = 0x82362C10;
	sub_823621C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c24
	if (ctx.cr0.eq) goto loc_82362C24;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82362C1C:
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// b 0x82362c38
	goto loc_82362C38;
loc_82362C24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82362C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82362C38:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82362d30
	if (!ctx.cr6.eq) goto loc_82362D30;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368e38
	ctx.lr = 0x82362C4C;
	sub_82368E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362d30
	if (ctx.cr0.eq) goto loc_82362D30;
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x8236e6c0
	ctx.lr = 0x82362C5C;
	sub_8236E6C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-14832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14832);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82362d30
	if (!ctx.cr6.gt) goto loc_82362D30;
	// stfd f1,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f1.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,29112
	ctx.r4.s64 = ctx.r8.s64 + 29112;
	// addi r9,r11,-29240
	ctx.r9.s64 = ctx.r11.s64 + -29240;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r8,716
	ctx.r8.s64 = 716;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82362C9C;
	sub_82372320(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82362CA4;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82362cb8
	if (ctx.cr0.eq) goto loc_82362CB8;
	// bl 0x82368740
	ctx.lr = 0x82362CB4;
	sub_82368740(ctx, base);
	// b 0x82362cbc
	goto loc_82362CBC;
loc_82362CB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362CBC:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362cec
	if (ctx.cr6.eq) goto loc_82362CEC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362CCC:
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
	// bne 0x82362ccc
	if (!ctx.cr0.eq) goto loc_82362CCC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362CEC:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362d1c
	if (ctx.cr6.eq) goto loc_82362D1C;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362CFC:
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
	// bne 0x82362cfc
	if (!ctx.cr0.eq) goto loc_82362CFC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362D1C:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823695f0
	ctx.lr = 0x82362D28;
	sub_823695F0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82362D30;
	sub_82375128(ctx, base);
loc_82362D30:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82368e38
	ctx.lr = 0x82362D3C;
	sub_82368E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82362dc0
	if (!ctx.cr0.eq) goto loc_82362DC0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368aa0
	ctx.lr = 0x82362D54;
	sub_82368AA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82362d88
	if (!ctx.cr6.gt) goto loc_82362D88;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-29260
	ctx.r9.s64 = ctx.r11.s64 + -29260;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,736
	ctx.r8.s64 = 736;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82362D88;
	sub_82372320(ctx, base);
loc_82362D88:
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x8236e690
	ctx.lr = 0x82362D90;
	sub_8236E690(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82362dc0
	if (ctx.cr6.eq) goto loc_82362DC0;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363cd0
	ctx.lr = 0x82362DA8;
	sub_82363CD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82363d90
	ctx.lr = 0x82362DB4;
	sub_82363D90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363cf0
	ctx.lr = 0x82362DC0;
	sub_82363CF0(ctx, base);
loc_82362DC0:
	// b 0x823627f4
	goto loc_823627F4;
}

__attribute__((alias("__imp__sub_82362798"))) PPC_WEAK_FUNC(sub_82362798);
PPC_FUNC_IMPL(__imp__sub_82362798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x823627A0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x823696c8
	ctx.lr = 0x823627C4;
	sub_823696C8(ctx, base);
	// addi r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 240;
	// bl 0x8236e6c0
	ctx.lr = 0x823627CC;
	sub_8236E6C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8236280c
	if (!ctx.cr6.gt) goto loc_8236280C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823627F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_823627F4:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369708
	ctx.lr = 0x823627FC;
	sub_82369708(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8236280C:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823628e8
	if (!ctx.cr6.eq) goto loc_823628E8;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e6c0
	ctx.lr = 0x82362820;
	sub_8236E6C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8236283c
	if (!ctx.cr6.gt) goto loc_8236283C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361690
	ctx.lr = 0x82362838;
	sub_82361690(ctx, base);
	// b 0x823628cc
	goto loc_823628CC;
loc_8236283C:
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e6c0
	ctx.lr = 0x82362844;
	sub_8236E6C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82362890
	if (!ctx.cr6.gt) goto loc_82362890;
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82362880
	if (ctx.cr6.eq) goto loc_82362880;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82362860:
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
	// bne 0x82362860
	if (!ctx.cr0.eq) goto loc_82362860;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82362880:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361be8
	ctx.lr = 0x8236288C;
	sub_82361BE8(ctx, base);
	// b 0x823628cc
	goto loc_823628CC;
loc_82362890:
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x8236e6c0
	ctx.lr = 0x82362898;
	sub_8236E6C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x823628e8
	if (!ctx.cr6.gt) goto loc_823628E8;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823628c4
	if (ctx.cr6.eq) goto loc_823628C4;
	// ble cr6,0x823628e8
	if (!ctx.cr6.gt) goto loc_823628E8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x823628e8
	if (ctx.cr6.gt) goto loc_823628E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362380
	ctx.lr = 0x823628C0;
	sub_82362380(ctx, base);
	// b 0x823628cc
	goto loc_823628CC;
loc_823628C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823621c0
	ctx.lr = 0x823628CC;
	sub_823621C0(ctx, base);
loc_823628CC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823628e8
	if (!ctx.cr0.eq) goto loc_823628E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823628E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823628E8:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362970
	if (ctx.cr6.eq) goto loc_82362970;
	// addi r28,r30,148
	ctx.r28.s64 = ctx.r30.s64 + 148;
loc_823628F8:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823629f4
	if (!ctx.cr0.eq) goto loc_823629F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8236293c
	if (ctx.cr6.eq) goto loc_8236293C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8236291C:
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
	// bne 0x8236291c
	if (!ctx.cr0.eq) goto loc_8236291C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8236293C:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823695f0
	ctx.lr = 0x82362948;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362970
	if (ctx.cr0.eq) goto loc_82362970;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82360d08
	ctx.lr = 0x82362964;
	sub_82360D08(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823628f8
	if (!ctx.cr6.eq) goto loc_823628F8;
loc_82362970:
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x8236e6c0
	ctx.lr = 0x82362978;
	sub_8236E6C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r28,r11,32416
	ctx.r28.s64 = ctx.r11.s64 + 32416;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r27,r10,32492
	ctx.r27.s64 = ctx.r10.s64 + 32492;
	// addi r26,r9,-29156
	ctx.r26.s64 = ctx.r9.s64 + -29156;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82362b9c
	if (ctx.cr6.lt) goto loc_82362B9C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82362b9c
	if (ctx.cr6.gt) goto loc_82362B9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82362b68
	if (!ctx.cr6.gt) goto loc_82362B68;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-29200
	ctx.r9.s64 = ctx.r11.s64 + -29200;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,-25772
	ctx.r4.s64 = ctx.r10.s64 + -25772;
	// li r8,638
	ctx.r8.s64 = 638;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823629DC;
	sub_82372320(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823629F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82362b9c
	goto loc_82362B9C;
loc_823629F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// b 0x82362a6c
	goto loc_82362A6C;
loc_82362A08:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82362a3c
	if (ctx.cr6.eq) goto loc_82362A3C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82362A1C:
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
	// bne 0x82362a1c
	if (!ctx.cr0.eq) goto loc_82362A1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82362A3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8235ffa0
	ctx.lr = 0x82362A4C;
	sub_8235FFA0(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82360e08
	ctx.lr = 0x82362A5C;
	sub_82360E08(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82362A64;
	sub_82375128(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_82362A6C:
	// bl 0x82369788
	ctx.lr = 0x82362A70;
	sub_82369788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82362a08
	if (!ctx.cr0.eq) goto loc_82362A08;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,184(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82362A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82362adc
	if (!ctx.cr6.eq) goto loc_82362ADC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// beq cr6,0x82362acc
	if (ctx.cr6.eq) goto loc_82362ACC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362AAC:
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
	// bne 0x82362aac
	if (!ctx.cr0.eq) goto loc_82362AAC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362ACC:
	// bl 0x82367438
	ctx.lr = 0x82362AD0;
	sub_82367438(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82362ADC;
	sub_82375128(ctx, base);
loc_82362ADC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823696c8
	ctx.lr = 0x82362AEC;
	sub_823696C8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82362b20
	if (ctx.cr6.eq) goto loc_82362B20;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82362B00:
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
	// bne 0x82362b00
	if (!ctx.cr0.eq) goto loc_82362B00;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82362B20:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823695f0
	ctx.lr = 0x82362B2C;
	sub_823695F0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82360d08
	ctx.lr = 0x82362B40;
	sub_82360D08(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82368aa0
	ctx.lr = 0x82362B50;
	sub_82368AA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82369708
	ctx.lr = 0x82362B5C;
	sub_82369708(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82362B64;
	sub_82375128(ctx, base);
	// b 0x823627f4
	goto loc_823627F4;
loc_82362B68:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362b7c
	if (ctx.cr6.eq) goto loc_82362B7C;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82364840
	ctx.lr = 0x82362B7C;
	sub_82364840(ctx, base);
loc_82362B7C:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362b90
	if (ctx.cr6.eq) goto loc_82362B90;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x823652d8
	ctx.lr = 0x82362B90;
	sub_823652D8(ctx, base);
loc_82362B90:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x82366168
	ctx.lr = 0x82362B9C;
	sub_82366168(ctx, base);
loc_82362B9C:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82362be8
	if (ctx.cr6.eq) goto loc_82362BE8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82362c38
	if (!ctx.cr6.eq) goto loc_82362C38;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368e38
	ctx.lr = 0x82362BB8;
	sub_82368E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c38
	if (ctx.cr0.eq) goto loc_82362C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ff10
	ctx.lr = 0x82362BC8;
	sub_8235FF10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c38
	if (ctx.cr0.eq) goto loc_82362C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362380
	ctx.lr = 0x82362BD8;
	sub_82362380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c24
	if (ctx.cr0.eq) goto loc_82362C24;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82362c1c
	goto loc_82362C1C;
loc_82362BE8:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368e38
	ctx.lr = 0x82362BF0;
	sub_82368E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c38
	if (ctx.cr0.eq) goto loc_82362C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ff10
	ctx.lr = 0x82362C00;
	sub_8235FF10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c38
	if (ctx.cr0.eq) goto loc_82362C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823621c0
	ctx.lr = 0x82362C10;
	sub_823621C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362c24
	if (ctx.cr0.eq) goto loc_82362C24;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82362C1C:
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// b 0x82362c38
	goto loc_82362C38;
loc_82362C24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82362C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82362C38:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82362d30
	if (!ctx.cr6.eq) goto loc_82362D30;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368e38
	ctx.lr = 0x82362C4C;
	sub_82368E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82362d30
	if (ctx.cr0.eq) goto loc_82362D30;
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x8236e6c0
	ctx.lr = 0x82362C5C;
	sub_8236E6C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-14832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14832);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82362d30
	if (!ctx.cr6.gt) goto loc_82362D30;
	// stfd f1,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f1.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,29112
	ctx.r4.s64 = ctx.r8.s64 + 29112;
	// addi r9,r11,-29240
	ctx.r9.s64 = ctx.r11.s64 + -29240;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r8,716
	ctx.r8.s64 = 716;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82362C9C;
	sub_82372320(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x82362CA4;
	sub_8236A338(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82362cb8
	if (ctx.cr0.eq) goto loc_82362CB8;
	// bl 0x82368740
	ctx.lr = 0x82362CB4;
	sub_82368740(ctx, base);
	// b 0x82362cbc
	goto loc_82362CBC;
loc_82362CB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362CBC:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362cec
	if (ctx.cr6.eq) goto loc_82362CEC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362CCC:
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
	// bne 0x82362ccc
	if (!ctx.cr0.eq) goto loc_82362CCC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362CEC:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362d1c
	if (ctx.cr6.eq) goto loc_82362D1C;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82362CFC:
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
	// bne 0x82362cfc
	if (!ctx.cr0.eq) goto loc_82362CFC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82362D1C:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823695f0
	ctx.lr = 0x82362D28;
	sub_823695F0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82375128
	ctx.lr = 0x82362D30;
	sub_82375128(ctx, base);
loc_82362D30:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82368e38
	ctx.lr = 0x82362D3C;
	sub_82368E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82362dc0
	if (!ctx.cr0.eq) goto loc_82362DC0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368aa0
	ctx.lr = 0x82362D54;
	sub_82368AA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82362d88
	if (!ctx.cr6.gt) goto loc_82362D88;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-29260
	ctx.r9.s64 = ctx.r11.s64 + -29260;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,736
	ctx.r8.s64 = 736;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82362D88;
	sub_82372320(ctx, base);
loc_82362D88:
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x8236e690
	ctx.lr = 0x82362D90;
	sub_8236E690(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82362dc0
	if (ctx.cr6.eq) goto loc_82362DC0;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363cd0
	ctx.lr = 0x82362DA8;
	sub_82363CD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82363d90
	ctx.lr = 0x82362DB4;
	sub_82363D90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363cf0
	ctx.lr = 0x82362DC0;
	sub_82363CF0(ctx, base);
loc_82362DC0:
	// b 0x823627f4
	goto loc_823627F4;
}

__attribute__((alias("__imp__sub_82362DC4"))) PPC_WEAK_FUNC(sub_82362DC4);
PPC_FUNC_IMPL(__imp__sub_82362DC4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	// bl 0x82369708
	ctx.lr = 0x82362DDC;
	sub_82369708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362DEC"))) PPC_WEAK_FUNC(sub_82362DEC);
PPC_FUNC_IMPL(__imp__sub_82362DEC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	ctx.lr = 0x82362E04;
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

__attribute__((alias("__imp__sub_82362E14"))) PPC_WEAK_FUNC(sub_82362E14);
PPC_FUNC_IMPL(__imp__sub_82362E14) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	// bl 0x823603b0
	ctx.lr = 0x82362E2C;
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

__attribute__((alias("__imp__sub_82362E3C"))) PPC_WEAK_FUNC(sub_82362E3C);
PPC_FUNC_IMPL(__imp__sub_82362E3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	ctx.lr = 0x82362E54;
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

__attribute__((alias("__imp__sub_82362E64"))) PPC_WEAK_FUNC(sub_82362E64);
PPC_FUNC_IMPL(__imp__sub_82362E64) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	// bl 0x82369708
	ctx.lr = 0x82362E7C;
	sub_82369708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362E8C"))) PPC_WEAK_FUNC(sub_82362E8C);
PPC_FUNC_IMPL(__imp__sub_82362E8C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	ctx.lr = 0x82362EA4;
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

__attribute__((alias("__imp__sub_82362EB4"))) PPC_WEAK_FUNC(sub_82362EB4);
PPC_FUNC_IMPL(__imp__sub_82362EB4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	ctx.lr = 0x82362ECC;
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

__attribute__((alias("__imp__sub_82362EDC"))) PPC_WEAK_FUNC(sub_82362EDC);
PPC_FUNC_IMPL(__imp__sub_82362EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362EE0"))) PPC_WEAK_FUNC(sub_82362EE0);
PPC_FUNC_IMPL(__imp__sub_82362EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-28704(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -28704);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82362EF0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82362f38
	if (ctx.cr6.eq) goto loc_82362F38;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82362F18:
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
	// bne 0x82362f18
	if (!ctx.cr0.eq) goto loc_82362F18;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82362F38:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x82375128
	ctx.lr = 0x82362F44;
	sub_82375128(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82362f74
	if (ctx.cr6.eq) goto loc_82362F74;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82362F54:
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
	// bne 0x82362f54
	if (!ctx.cr0.eq) goto loc_82362F54;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82362F74:
	// lwz r3,260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82362fb8
	if (!ctx.cr6.eq) goto loc_82362FB8;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-31444
	ctx.r9.s64 = ctx.r11.s64 + -31444;
	// addi r7,r10,-28744
	ctx.r7.s64 = ctx.r10.s64 + -28744;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,927
	ctx.r8.s64 = 927;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82362FB4;
	sub_82372320(ctx, base);
	// b 0x8236309c
	goto loc_8236309C;
loc_82362FB8:
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// bl 0x82373ff8
	ctx.lr = 0x82362FC8;
	sub_82373FF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367038
	ctx.lr = 0x82362FD0;
	sub_82367038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82363058
	if (ctx.cr0.eq) goto loc_82363058;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-28744
	ctx.r7.s64 = ctx.r8.s64 + -28744;
	// addi r9,r11,-28780
	ctx.r9.s64 = ctx.r11.s64 + -28780;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,934
	ctx.r8.s64 = 934;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82363010;
	sub_82372320(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82363044
	if (ctx.cr6.eq) goto loc_82363044;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82363024:
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
	// bne 0x82363024
	if (!ctx.cr0.eq) goto loc_82363024;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82363044:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361868
	ctx.lr = 0x82363050;
	sub_82361868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8236309c
	goto loc_8236309C;
loc_82363058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367038
	ctx.lr = 0x82363060;
	sub_82367038(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r7,r8,-28744
	ctx.r7.s64 = ctx.r8.s64 + -28744;
	// addi r9,r11,-28816
	ctx.r9.s64 = ctx.r11.s64 + -28816;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,939
	ctx.r8.s64 = 939;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363098;
	sub_82372320(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_8236309C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x823630A4;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362EE8"))) PPC_WEAK_FUNC(sub_82362EE8);
PPC_FUNC_IMPL(__imp__sub_82362EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82362EF0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82362f38
	if (ctx.cr6.eq) goto loc_82362F38;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82362F18:
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
	// bne 0x82362f18
	if (!ctx.cr0.eq) goto loc_82362F18;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82362F38:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x82375128
	ctx.lr = 0x82362F44;
	sub_82375128(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82362f74
	if (ctx.cr6.eq) goto loc_82362F74;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82362F54:
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
	// bne 0x82362f54
	if (!ctx.cr0.eq) goto loc_82362F54;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82362F74:
	// lwz r3,260(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82362fb8
	if (!ctx.cr6.eq) goto loc_82362FB8;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-31444
	ctx.r9.s64 = ctx.r11.s64 + -31444;
	// addi r7,r10,-28744
	ctx.r7.s64 = ctx.r10.s64 + -28744;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,927
	ctx.r8.s64 = 927;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82362FB4;
	sub_82372320(ctx, base);
	// b 0x8236309c
	goto loc_8236309C;
loc_82362FB8:
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// bl 0x82373ff8
	ctx.lr = 0x82362FC8;
	sub_82373FF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367038
	ctx.lr = 0x82362FD0;
	sub_82367038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82363058
	if (ctx.cr0.eq) goto loc_82363058;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-28744
	ctx.r7.s64 = ctx.r8.s64 + -28744;
	// addi r9,r11,-28780
	ctx.r9.s64 = ctx.r11.s64 + -28780;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,934
	ctx.r8.s64 = 934;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82363010;
	sub_82372320(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82363044
	if (ctx.cr6.eq) goto loc_82363044;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82363024:
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
	// bne 0x82363024
	if (!ctx.cr0.eq) goto loc_82363024;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82363044:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361868
	ctx.lr = 0x82363050;
	sub_82361868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8236309c
	goto loc_8236309C;
loc_82363058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367038
	ctx.lr = 0x82363060;
	sub_82367038(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r7,r8,-28744
	ctx.r7.s64 = ctx.r8.s64 + -28744;
	// addi r9,r11,-28816
	ctx.r9.s64 = ctx.r11.s64 + -28816;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,939
	ctx.r8.s64 = 939;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363098;
	sub_82372320(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_8236309C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x823630A4;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823630B0"))) PPC_WEAK_FUNC(sub_823630B0);
PPC_FUNC_IMPL(__imp__sub_823630B0) {
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
	ctx.lr = 0x823630C8;
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

__attribute__((alias("__imp__sub_823630D8"))) PPC_WEAK_FUNC(sub_823630D8);
PPC_FUNC_IMPL(__imp__sub_823630D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-28432(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -28432);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823630E8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82363288
	if (!ctx.cr6.eq) goto loc_82363288;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82363254
	if (!ctx.cr6.eq) goto loc_82363254;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82363144
	if (ctx.cr6.eq) goto loc_82363144;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82363124:
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
	// bne 0x82363124
	if (!ctx.cr0.eq) goto loc_82363124;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82363144:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x8236314C;
	sub_82375128(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236317c
	if (ctx.cr6.eq) goto loc_8236317C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8236315C:
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
	// bne 0x8236315c
	if (!ctx.cr0.eq) goto loc_8236315C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8236317C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367038
	ctx.lr = 0x82363184;
	sub_82367038(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r3,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r3.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r7,r8,-28476
	ctx.r7.s64 = ctx.r8.s64 + -28476;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// beq 0x82363228
	if (ctx.cr0.eq) goto loc_82363228;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r9,r11,-28528
	ctx.r9.s64 = ctx.r11.s64 + -28528;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,965
	ctx.r8.s64 = 965;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823631CC;
	sub_82372320(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823631fc
	if (ctx.cr6.eq) goto loc_823631FC;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823631DC:
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
	// bne 0x823631dc
	if (!ctx.cr0.eq) goto loc_823631DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823631FC:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361be8
	ctx.lr = 0x82363208;
	sub_82361BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363248
	if (ctx.cr0.eq) goto loc_82363248;
	// addi r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 192;
	// bl 0x8236e710
	ctx.lr = 0x82363218;
	sub_8236E710(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r11.u32);
	// b 0x82363248
	goto loc_82363248;
loc_82363228:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,-28568
	ctx.r9.s64 = ctx.r11.s64 + -28568;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,977
	ctx.r8.s64 = 977;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363248;
	sub_82372320(ctx, base);
loc_82363248:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82363250;
	sub_82375128(ctx, base);
	// b 0x82363288
	goto loc_82363288;
loc_82363254:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-28608
	ctx.r9.s64 = ctx.r11.s64 + -28608;
	// addi r7,r10,-28476
	ctx.r7.s64 = ctx.r10.s64 + -28476;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,982
	ctx.r8.s64 = 982;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363288;
	sub_82372320(ctx, base);
loc_82363288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823630E0"))) PPC_WEAK_FUNC(sub_823630E0);
PPC_FUNC_IMPL(__imp__sub_823630E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823630E8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82363288
	if (!ctx.cr6.eq) goto loc_82363288;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82363254
	if (!ctx.cr6.eq) goto loc_82363254;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82363144
	if (ctx.cr6.eq) goto loc_82363144;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82363124:
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
	// bne 0x82363124
	if (!ctx.cr0.eq) goto loc_82363124;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82363144:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x8236314C;
	sub_82375128(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236317c
	if (ctx.cr6.eq) goto loc_8236317C;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8236315C:
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
	// bne 0x8236315c
	if (!ctx.cr0.eq) goto loc_8236315C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8236317C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367038
	ctx.lr = 0x82363184;
	sub_82367038(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r3,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r3.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r7,r8,-28476
	ctx.r7.s64 = ctx.r8.s64 + -28476;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// beq 0x82363228
	if (ctx.cr0.eq) goto loc_82363228;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r9,r11,-28528
	ctx.r9.s64 = ctx.r11.s64 + -28528;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,965
	ctx.r8.s64 = 965;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823631CC;
	sub_82372320(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823631fc
	if (ctx.cr6.eq) goto loc_823631FC;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_823631DC:
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
	// bne 0x823631dc
	if (!ctx.cr0.eq) goto loc_823631DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_823631FC:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361be8
	ctx.lr = 0x82363208;
	sub_82361BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363248
	if (ctx.cr0.eq) goto loc_82363248;
	// addi r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 192;
	// bl 0x8236e710
	ctx.lr = 0x82363218;
	sub_8236E710(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r11.u32);
	// b 0x82363248
	goto loc_82363248;
loc_82363228:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,-28568
	ctx.r9.s64 = ctx.r11.s64 + -28568;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,977
	ctx.r8.s64 = 977;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363248;
	sub_82372320(ctx, base);
loc_82363248:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82363250;
	sub_82375128(ctx, base);
	// b 0x82363288
	goto loc_82363288;
loc_82363254:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-28608
	ctx.r9.s64 = ctx.r11.s64 + -28608;
	// addi r7,r10,-28476
	ctx.r7.s64 = ctx.r10.s64 + -28476;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,982
	ctx.r8.s64 = 982;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363288;
	sub_82372320(ctx, base);
loc_82363288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363294"))) PPC_WEAK_FUNC(sub_82363294);
PPC_FUNC_IMPL(__imp__sub_82363294) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x823632AC;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823632BC"))) PPC_WEAK_FUNC(sub_823632BC);
PPC_FUNC_IMPL(__imp__sub_823632BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823632C0"))) PPC_WEAK_FUNC(sub_823632C0);
PPC_FUNC_IMPL(__imp__sub_823632C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-28224(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -28224);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x823632D0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82363314
	if (ctx.cr6.eq) goto loc_82363314;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823632F4:
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
	// bne 0x823632f4
	if (!ctx.cr0.eq) goto loc_823632F4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82363314:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x82375128
	ctx.lr = 0x82363320;
	sub_82375128(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82363350
	if (ctx.cr6.eq) goto loc_82363350;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82363330:
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
	// bne 0x82363330
	if (!ctx.cr0.eq) goto loc_82363330;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82363350:
	// stw r24,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r24.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82368050
	ctx.lr = 0x82363360;
	sub_82368050(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823635ec
	if (ctx.cr0.eq) goto loc_823635EC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82372bb8
	ctx.lr = 0x82363370;
	sub_82372BB8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82367a10
	ctx.lr = 0x8236337C;
	sub_82367A10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82367038
	ctx.lr = 0x82363388;
	sub_82367038(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82367a18
	ctx.lr = 0x82363394;
	sub_82367A18(ctx, base);
	// lwz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236352c
	if (ctx.cr6.eq) goto loc_8236352C;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82363488
	if (ctx.cr6.eq) goto loc_82363488;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82363480
	if (ctx.cr6.eq) goto loc_82363480;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82363480
	if (!ctx.cr6.eq) goto loc_82363480;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82363480
	if (!ctx.cr6.eq) goto loc_82363480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361138
	ctx.lr = 0x823633D0;
	sub_82361138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361e68
	ctx.lr = 0x823633D8;
	sub_82361E68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823635ec
	if (ctx.cr0.eq) goto loc_823635EC;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r27,r8,32416
	ctx.r27.s64 = ctx.r8.s64 + 32416;
	// addi r29,r11,-28280
	ctx.r29.s64 = ctx.r11.s64 + -28280;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r28,r9,32492
	ctx.r28.s64 = ctx.r9.s64 + 32492;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,29112
	ctx.r4.s64 = ctx.r8.s64 + 29112;
	// addi r9,r11,-28336
	ctx.r9.s64 = ctx.r11.s64 + -28336;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r8,1091
	ctx.r8.s64 = 1091;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8236342C;
	sub_82372320(ctx, base);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82363454
	if (!ctx.cr6.eq) goto loc_82363454;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,1095
	ctx.r8.s64 = 1095;
	// b 0x8236355c
	goto loc_8236355C;
loc_82363454:
	// addi r6,r31,104
	ctx.r6.s64 = ctx.r31.s64 + 104;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x82373ff8
	ctx.lr = 0x82363464;
	sub_82373FF8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r25.u32);
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// bl 0x82360898
	ctx.lr = 0x8236347C;
	sub_82360898(ctx, base);
	// b 0x823635e8
	goto loc_823635E8;
loc_82363480:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823634d0
	if (!ctx.cr6.eq) goto loc_823634D0;
loc_82363488:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823634a4
	if (!ctx.cr6.eq) goto loc_823634A4;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823634d0
	if (!ctx.cr6.eq) goto loc_823634D0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823634c8
	if (!ctx.cr6.eq) goto loc_823634C8;
loc_823634A4:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x823634c0
	if (ctx.cr6.eq) goto loc_823634C0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360750
	ctx.lr = 0x823634C0;
	sub_82360750(ctx, base);
loc_823634C0:
	// stw r25,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r25.u32);
	// b 0x8236350c
	goto loc_8236350C;
loc_823634C8:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823634e4
	if (ctx.cr6.eq) goto loc_823634E4;
loc_823634D0:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823635ec
	if (ctx.cr6.eq) goto loc_823635EC;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823635e8
	if (!ctx.cr6.eq) goto loc_823635E8;
loc_823634E4:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823635e8
	if (!ctx.cr6.eq) goto loc_823635E8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8236350c
	if (ctx.cr6.eq) goto loc_8236350C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360750
	ctx.lr = 0x8236350C;
	sub_82360750(ctx, base);
loc_8236350C:
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e710
	ctx.lr = 0x82363514;
	sub_8236E710(ctx, base);
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e710
	ctx.lr = 0x8236351C;
	sub_8236E710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361e68
	ctx.lr = 0x82363524;
	sub_82361E68(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x823635ec
	goto loc_823635EC;
loc_8236352C:
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82363570
	if (!ctx.cr6.eq) goto loc_82363570;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r7,r10,-28280
	ctx.r7.s64 = ctx.r10.s64 + -28280;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,1013
	ctx.r8.s64 = 1013;
loc_8236355C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r9,r11,-31444
	ctx.r9.s64 = ctx.r11.s64 + -31444;
	// bl 0x82372320
	ctx.lr = 0x8236356C;
	sub_82372320(ctx, base);
	// b 0x823635ec
	goto loc_823635EC;
loc_82363570:
	// addi r6,r31,104
	ctx.r6.s64 = ctx.r31.s64 + 104;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x82373ff8
	ctx.lr = 0x82363580;
	sub_82373FF8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r26,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r26.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r25,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r25.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r10,-28280
	ctx.r7.s64 = ctx.r10.s64 + -28280;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-28336
	ctx.r9.s64 = ctx.r11.s64 + -28336;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,1021
	ctx.r8.s64 = 1021;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823635C4;
	sub_82372320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361e68
	ctx.lr = 0x823635CC;
	sub_82361E68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823635ec
	if (ctx.cr0.eq) goto loc_823635EC;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360750
	ctx.lr = 0x823635E8;
	sub_82360750(ctx, base);
loc_823635E8:
	// li r24,1
	ctx.r24.s64 = 1;
loc_823635EC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x823635F4;
	sub_82375128(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x823635FC;
	sub_82375128(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823632C8"))) PPC_WEAK_FUNC(sub_823632C8);
PPC_FUNC_IMPL(__imp__sub_823632C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x823632D0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x82363314
	if (ctx.cr6.eq) goto loc_82363314;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823632F4:
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
	// bne 0x823632f4
	if (!ctx.cr0.eq) goto loc_823632F4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82363314:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x82375128
	ctx.lr = 0x82363320;
	sub_82375128(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82363350
	if (ctx.cr6.eq) goto loc_82363350;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_82363330:
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
	// bne 0x82363330
	if (!ctx.cr0.eq) goto loc_82363330;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82363350:
	// stw r24,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r24.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82368050
	ctx.lr = 0x82363360;
	sub_82368050(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823635ec
	if (ctx.cr0.eq) goto loc_823635EC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82372bb8
	ctx.lr = 0x82363370;
	sub_82372BB8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82367a10
	ctx.lr = 0x8236337C;
	sub_82367A10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82367038
	ctx.lr = 0x82363388;
	sub_82367038(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82367a18
	ctx.lr = 0x82363394;
	sub_82367A18(ctx, base);
	// lwz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236352c
	if (ctx.cr6.eq) goto loc_8236352C;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82363488
	if (ctx.cr6.eq) goto loc_82363488;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82363480
	if (ctx.cr6.eq) goto loc_82363480;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82363480
	if (!ctx.cr6.eq) goto loc_82363480;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82363480
	if (!ctx.cr6.eq) goto loc_82363480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361138
	ctx.lr = 0x823633D0;
	sub_82361138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361e68
	ctx.lr = 0x823633D8;
	sub_82361E68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823635ec
	if (ctx.cr0.eq) goto loc_823635EC;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r27,r8,32416
	ctx.r27.s64 = ctx.r8.s64 + 32416;
	// addi r29,r11,-28280
	ctx.r29.s64 = ctx.r11.s64 + -28280;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r28,r9,32492
	ctx.r28.s64 = ctx.r9.s64 + 32492;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,29112
	ctx.r4.s64 = ctx.r8.s64 + 29112;
	// addi r9,r11,-28336
	ctx.r9.s64 = ctx.r11.s64 + -28336;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r8,1091
	ctx.r8.s64 = 1091;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8236342C;
	sub_82372320(ctx, base);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82363454
	if (!ctx.cr6.eq) goto loc_82363454;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,12188
	ctx.r4.s64 = ctx.r10.s64 + 12188;
	// li r8,1095
	ctx.r8.s64 = 1095;
	// b 0x8236355c
	goto loc_8236355C;
loc_82363454:
	// addi r6,r31,104
	ctx.r6.s64 = ctx.r31.s64 + 104;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x82373ff8
	ctx.lr = 0x82363464;
	sub_82373FF8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r25.u32);
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// bl 0x82360898
	ctx.lr = 0x8236347C;
	sub_82360898(ctx, base);
	// b 0x823635e8
	goto loc_823635E8;
loc_82363480:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823634d0
	if (!ctx.cr6.eq) goto loc_823634D0;
loc_82363488:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823634a4
	if (!ctx.cr6.eq) goto loc_823634A4;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823634d0
	if (!ctx.cr6.eq) goto loc_823634D0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823634c8
	if (!ctx.cr6.eq) goto loc_823634C8;
loc_823634A4:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x823634c0
	if (ctx.cr6.eq) goto loc_823634C0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360750
	ctx.lr = 0x823634C0;
	sub_82360750(ctx, base);
loc_823634C0:
	// stw r25,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r25.u32);
	// b 0x8236350c
	goto loc_8236350C;
loc_823634C8:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823634e4
	if (ctx.cr6.eq) goto loc_823634E4;
loc_823634D0:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823635ec
	if (ctx.cr6.eq) goto loc_823635EC;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823635e8
	if (!ctx.cr6.eq) goto loc_823635E8;
loc_823634E4:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823635e8
	if (!ctx.cr6.eq) goto loc_823635E8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8236350c
	if (ctx.cr6.eq) goto loc_8236350C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360750
	ctx.lr = 0x8236350C;
	sub_82360750(ctx, base);
loc_8236350C:
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x8236e710
	ctx.lr = 0x82363514;
	sub_8236E710(ctx, base);
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x8236e710
	ctx.lr = 0x8236351C;
	sub_8236E710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361e68
	ctx.lr = 0x82363524;
	sub_82361E68(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x823635ec
	goto loc_823635EC;
loc_8236352C:
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82363570
	if (!ctx.cr6.eq) goto loc_82363570;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r7,r10,-28280
	ctx.r7.s64 = ctx.r10.s64 + -28280;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,1013
	ctx.r8.s64 = 1013;
loc_8236355C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r9,r11,-31444
	ctx.r9.s64 = ctx.r11.s64 + -31444;
	// bl 0x82372320
	ctx.lr = 0x8236356C;
	sub_82372320(ctx, base);
	// b 0x823635ec
	goto loc_823635EC;
loc_82363570:
	// addi r6,r31,104
	ctx.r6.s64 = ctx.r31.s64 + 104;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x82373ff8
	ctx.lr = 0x82363580;
	sub_82373FF8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r26,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r26.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r25,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r25.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r10,-28280
	ctx.r7.s64 = ctx.r10.s64 + -28280;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-28336
	ctx.r9.s64 = ctx.r11.s64 + -28336;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,1021
	ctx.r8.s64 = 1021;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823635C4;
	sub_82372320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361e68
	ctx.lr = 0x823635CC;
	sub_82361E68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823635ec
	if (ctx.cr0.eq) goto loc_823635EC;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360750
	ctx.lr = 0x823635E8;
	sub_82360750(ctx, base);
loc_823635E8:
	// li r24,1
	ctx.r24.s64 = 1;
loc_823635EC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x823635F4;
	sub_82375128(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x823635FC;
	sub_82375128(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363608"))) PPC_WEAK_FUNC(sub_82363608);
PPC_FUNC_IMPL(__imp__sub_82363608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82375128
	ctx.lr = 0x82363620;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363630"))) PPC_WEAK_FUNC(sub_82363630);
PPC_FUNC_IMPL(__imp__sub_82363630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82363648;
	sub_82375128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363658"))) PPC_WEAK_FUNC(sub_82363658);
PPC_FUNC_IMPL(__imp__sub_82363658) {
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
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8236e690
	ctx.lr = 0x8236367C;
	sub_8236E690(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823636b0
	if (ctx.cr6.eq) goto loc_823636B0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82363690:
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
	// bne 0x82363690
	if (!ctx.cr0.eq) goto loc_82363690;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823636B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362018
	ctx.lr = 0x823636BC;
	sub_82362018(ctx, base);
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

__attribute__((alias("__imp__sub_823636D4"))) PPC_WEAK_FUNC(sub_823636D4);
PPC_FUNC_IMPL(__imp__sub_823636D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823636D8"))) PPC_WEAK_FUNC(sub_823636D8);
PPC_FUNC_IMPL(__imp__sub_823636D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823636E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,29112
	ctx.r27.s64 = ctx.r11.s64 + 29112;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x823637a0
	if (ctx.cr6.eq) goto loc_823637A0;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8236374c
	if (ctx.cr6.eq) goto loc_8236374C;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r29,r8,32416
	ctx.r29.s64 = ctx.r8.s64 + 32416;
	// addi r31,r11,-27992
	ctx.r31.s64 = ctx.r11.s64 + -27992;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r30,r9,32492
	ctx.r30.s64 = ctx.r9.s64 + 32492;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,-25772
	ctx.r4.s64 = ctx.r8.s64 + -25772;
	// addi r9,r11,-28040
	ctx.r9.s64 = ctx.r11.s64 + -28040;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r8,1244
	ctx.r8.s64 = 1244;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363748;
	sub_82372320(ctx, base);
	// b 0x823637e8
	goto loc_823637E8;
loc_8236374C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r11,32416
	ctx.r29.s64 = ctx.r11.s64 + 32416;
	// addi r31,r9,-27992
	ctx.r31.s64 = ctx.r9.s64 + -27992;
	// addi r30,r10,32492
	ctx.r30.s64 = ctx.r10.s64 + 32492;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r9,r11,-28068
	ctx.r9.s64 = ctx.r11.s64 + -28068;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,1239
	ctx.r8.s64 = 1239;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82363788;
	sub_82372320(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
	// bl 0x82362380
	ctx.lr = 0x82363798;
	sub_82362380(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x823637e8
	goto loc_823637E8;
loc_823637A0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r11,32416
	ctx.r29.s64 = ctx.r11.s64 + 32416;
	// addi r31,r9,-27992
	ctx.r31.s64 = ctx.r9.s64 + -27992;
	// addi r30,r10,32492
	ctx.r30.s64 = ctx.r10.s64 + 32492;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r9,r11,-28096
	ctx.r9.s64 = ctx.r11.s64 + -28096;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,1234
	ctx.r8.s64 = 1234;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823637DC;
	sub_82372320(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
loc_823637E8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236381c
	if (ctx.cr0.eq) goto loc_8236381C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r9,r11,-28120
	ctx.r9.s64 = ctx.r11.s64 + -28120;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,1250
	ctx.r8.s64 = 1250;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82363814;
	sub_82372320(ctx, base);
	// addi r3,r28,240
	ctx.r3.s64 = ctx.r28.s64 + 240;
	// bl 0x8236e690
	ctx.lr = 0x8236381C;
	sub_8236E690(ctx, base);
loc_8236381C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363828"))) PPC_WEAK_FUNC(sub_82363828);
PPC_FUNC_IMPL(__imp__sub_82363828) {
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
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// beq cr6,0x823638a8
	if (ctx.cr6.eq) goto loc_823638A8;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82363890
	if (ctx.cr6.eq) goto loc_82363890;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r7,r8,-27840
	ctx.r7.s64 = ctx.r8.s64 + -27840;
	// addi r9,r11,-27892
	ctx.r9.s64 = ctx.r11.s64 + -27892;
	// addi r6,r6,32492
	ctx.r6.s64 = ctx.r6.s64 + 32492;
	// li r8,1278
	ctx.r8.s64 = 1278;
	// bl 0x82372320
	ctx.lr = 0x8236388C;
	sub_82372320(ctx, base);
	// b 0x823638f0
	goto loc_823638F0;
loc_82363890:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-27924
	ctx.r9.s64 = ctx.r11.s64 + -27924;
	// li r8,1271
	ctx.r8.s64 = 1271;
	// b 0x823638bc
	goto loc_823638BC;
loc_823638A8:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-27956
	ctx.r9.s64 = ctx.r11.s64 + -27956;
	// li r8,1264
	ctx.r8.s64 = 1264;
loc_823638BC:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r7,r10,-27840
	ctx.r7.s64 = ctx.r10.s64 + -27840;
	// bl 0x82372320
	ctx.lr = 0x823638C8;
	sub_82372320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362540
	ctx.lr = 0x823638D0;
	sub_82362540(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823638E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8236e710
	ctx.lr = 0x823638EC;
	sub_8236E710(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_823638F0:
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

__attribute__((alias("__imp__sub_8236390C"))) PPC_WEAK_FUNC(sub_8236390C);
PPC_FUNC_IMPL(__imp__sub_8236390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363910"))) PPC_WEAK_FUNC(sub_82363910);
PPC_FUNC_IMPL(__imp__sub_82363910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-27656(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27656);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82363920;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8236e6c0
	ctx.lr = 0x8236393C;
	sub_8236E6C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82363968
	if (!ctx.cr6.gt) goto loc_82363968;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82363960:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82363c74
	goto loc_82363C74;
loc_82363968:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823639a8
	if (!ctx.cr6.eq) goto loc_823639A8;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-27708
	ctx.r9.s64 = ctx.r11.s64 + -27708;
	// addi r7,r10,-27740
	ctx.r7.s64 = ctx.r10.s64 + -27740;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,378
	ctx.r8.s64 = 378;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823639A4;
	sub_82372320(ctx, base);
	// b 0x82363960
	goto loc_82363960;
loc_823639A8:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82369698
	ctx.lr = 0x823639B8;
	sub_82369698(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368ef8
	ctx.lr = 0x823639C8;
	sub_82368EF8(ctx, base);
	// addi r29,r27,36
	ctx.r29.s64 = ctx.r27.s64 + 36;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363ce0
	ctx.lr = 0x823639DC;
	sub_82363CE0(ctx, base);
	// clrlwi. r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823639fc
	if (ctx.cr0.eq) goto loc_823639FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363da0
	ctx.lr = 0x823639F0;
	sub_82363DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363d40
	ctx.lr = 0x823639FC;
	sub_82363D40(ctx, base);
loc_823639FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82363c04
	if (ctx.cr6.eq) goto loc_82363C04;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369788
	ctx.lr = 0x82363A18;
	sub_82369788(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363adc
	if (ctx.cr6.eq) goto loc_82363ADC;
	// bl 0x82369890
	ctx.lr = 0x82363A28;
	sub_82369890(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363adc
	if (ctx.cr0.eq) goto loc_82363ADC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82363ab8
	if (ctx.cr6.eq) goto loc_82363AB8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82363a9c
	if (ctx.cr6.eq) goto loc_82363A9C;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x82363a80
	if (ctx.cr6.eq) goto loc_82363A80;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// bne cr6,0x82363ac8
	if (!ctx.cr6.eq) goto loc_82363AC8;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82367a18
	ctx.lr = 0x82363A6C;
	sub_82367A18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82360c20
	ctx.lr = 0x82363A7C;
	sub_82360C20(ctx, base);
	// b 0x82363ac4
	goto loc_82363AC4;
loc_82363A80:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82367a18
	ctx.lr = 0x82363A88;
	sub_82367A18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823632c8
	ctx.lr = 0x82363A98;
	sub_823632C8(ctx, base);
	// b 0x82363ac4
	goto loc_82363AC4;
loc_82363A9C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82367a18
	ctx.lr = 0x82363AA4;
	sub_82367A18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823630e0
	ctx.lr = 0x82363AB4;
	sub_823630E0(ctx, base);
	// b 0x82363ac4
	goto loc_82363AC4;
loc_82363AB8:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362ee8
	ctx.lr = 0x82363AC4;
	sub_82362EE8(ctx, base);
loc_82363AC4:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82363AC8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363adc
	if (ctx.cr0.eq) goto loc_82363ADC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82350190
	ctx.lr = 0x82363ADC;
	sub_82350190(ctx, base);
loc_82363ADC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82367a18
	ctx.lr = 0x82363AE4;
	sub_82367A18(ctx, base);
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82363be8
	if (!ctx.cr6.eq) goto loc_82363BE8;
loc_82363AF0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363bd4
	if (ctx.cr6.eq) goto loc_82363BD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82363ba8
	if (ctx.cr6.eq) goto loc_82363BA8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82363b94
	if (ctx.cr6.eq) goto loc_82363B94;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82363b84
	if (ctx.cr6.eq) goto loc_82363B84;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82363b74
	if (ctx.cr6.eq) goto loc_82363B74;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82363b64
	if (ctx.cr6.eq) goto loc_82363B64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x82363b54
	if (ctx.cr6.eq) goto loc_82363B54;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x82363bd4
	if (!ctx.cr6.eq) goto loc_82363BD4;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235fe58
	ctx.lr = 0x82363B50;
	sub_8235FE58(ctx, base);
	// b 0x82363ba0
	goto loc_82363BA0;
loc_82363B54:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363828
	ctx.lr = 0x82363B60;
	sub_82363828(ctx, base);
	// b 0x82363ba0
	goto loc_82363BA0;
loc_82363B64:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823636d8
	ctx.lr = 0x82363B70;
	sub_823636D8(ctx, base);
	// b 0x82363ba0
	goto loc_82363BA0;
loc_82363B74:
	// addi r3,r27,168
	ctx.r3.s64 = ctx.r27.s64 + 168;
	// bl 0x8236e690
	ctx.lr = 0x82363B7C;
	sub_8236E690(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82363bd4
	goto loc_82363BD4;
loc_82363B84:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363658
	ctx.lr = 0x82363B90;
	sub_82363658(ctx, base);
	// b 0x82363ba0
	goto loc_82363BA0;
loc_82363B94:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82360980
	ctx.lr = 0x82363BA0;
	sub_82360980(ctx, base);
loc_82363BA0:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82363bd4
	goto loc_82363BD4;
loc_82363BA8:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82360568
	ctx.lr = 0x82363BB4;
	sub_82360568(ctx, base);
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bne 0x82363bcc
	if (!ctx.cr0.eq) goto loc_82363BCC;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82363bd0
	if (ctx.cr0.eq) goto loc_82363BD0;
loc_82363BCC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82363BD0:
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
loc_82363BD4:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369788
	ctx.lr = 0x82363BE0;
	sub_82369788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82363af0
	if (!ctx.cr0.eq) goto loc_82363AF0;
loc_82363BE8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363bf8
	if (ctx.cr0.eq) goto loc_82363BF8;
	// addi r3,r27,168
	ctx.r3.s64 = ctx.r27.s64 + 168;
	// bl 0x8236e690
	ctx.lr = 0x82363BF8;
	sub_8236E690(ctx, base);
loc_82363BF8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82363C00;
	sub_82375128(ctx, base);
	// b 0x82363c38
	goto loc_82363C38;
loc_82363C04:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-27800
	ctx.r9.s64 = ctx.r11.s64 + -27800;
	// addi r7,r10,-27740
	ctx.r7.s64 = ctx.r10.s64 + -27740;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,489
	ctx.r8.s64 = 489;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363C38;
	sub_82372320(ctx, base);
loc_82363C38:
	// lwz r11,176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82363c68
	if (!ctx.cr6.eq) goto loc_82363C68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823621c0
	ctx.lr = 0x82363C4C;
	sub_823621C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82363c68
	if (!ctx.cr0.eq) goto loc_82363C68;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82363C68:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369708
	ctx.lr = 0x82363C70;
	sub_82369708(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82363C74:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363918"))) PPC_WEAK_FUNC(sub_82363918);
PPC_FUNC_IMPL(__imp__sub_82363918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82363920;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8236e6c0
	ctx.lr = 0x8236393C;
	sub_8236E6C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82363968
	if (!ctx.cr6.gt) goto loc_82363968;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82363960:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82363c74
	goto loc_82363C74;
loc_82363968:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823639a8
	if (!ctx.cr6.eq) goto loc_823639A8;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-27708
	ctx.r9.s64 = ctx.r11.s64 + -27708;
	// addi r7,r10,-27740
	ctx.r7.s64 = ctx.r10.s64 + -27740;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,378
	ctx.r8.s64 = 378;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823639A4;
	sub_82372320(ctx, base);
	// b 0x82363960
	goto loc_82363960;
loc_823639A8:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82369698
	ctx.lr = 0x823639B8;
	sub_82369698(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82368ef8
	ctx.lr = 0x823639C8;
	sub_82368EF8(ctx, base);
	// addi r29,r27,36
	ctx.r29.s64 = ctx.r27.s64 + 36;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363ce0
	ctx.lr = 0x823639DC;
	sub_82363CE0(ctx, base);
	// clrlwi. r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823639fc
	if (ctx.cr0.eq) goto loc_823639FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363da0
	ctx.lr = 0x823639F0;
	sub_82363DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363d40
	ctx.lr = 0x823639FC;
	sub_82363D40(ctx, base);
loc_823639FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82363c04
	if (ctx.cr6.eq) goto loc_82363C04;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369788
	ctx.lr = 0x82363A18;
	sub_82369788(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363adc
	if (ctx.cr6.eq) goto loc_82363ADC;
	// bl 0x82369890
	ctx.lr = 0x82363A28;
	sub_82369890(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363adc
	if (ctx.cr0.eq) goto loc_82363ADC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82363ab8
	if (ctx.cr6.eq) goto loc_82363AB8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82363a9c
	if (ctx.cr6.eq) goto loc_82363A9C;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x82363a80
	if (ctx.cr6.eq) goto loc_82363A80;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// bne cr6,0x82363ac8
	if (!ctx.cr6.eq) goto loc_82363AC8;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82367a18
	ctx.lr = 0x82363A6C;
	sub_82367A18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82360c20
	ctx.lr = 0x82363A7C;
	sub_82360C20(ctx, base);
	// b 0x82363ac4
	goto loc_82363AC4;
loc_82363A80:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82367a18
	ctx.lr = 0x82363A88;
	sub_82367A18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823632c8
	ctx.lr = 0x82363A98;
	sub_823632C8(ctx, base);
	// b 0x82363ac4
	goto loc_82363AC4;
loc_82363A9C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82367a18
	ctx.lr = 0x82363AA4;
	sub_82367A18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823630e0
	ctx.lr = 0x82363AB4;
	sub_823630E0(ctx, base);
	// b 0x82363ac4
	goto loc_82363AC4;
loc_82363AB8:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362ee8
	ctx.lr = 0x82363AC4;
	sub_82362EE8(ctx, base);
loc_82363AC4:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82363AC8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363adc
	if (ctx.cr0.eq) goto loc_82363ADC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82350190
	ctx.lr = 0x82363ADC;
	sub_82350190(ctx, base);
loc_82363ADC:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82367a18
	ctx.lr = 0x82363AE4;
	sub_82367A18(ctx, base);
	// lwz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82363be8
	if (!ctx.cr6.eq) goto loc_82363BE8;
loc_82363AF0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363bd4
	if (ctx.cr6.eq) goto loc_82363BD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82363ba8
	if (ctx.cr6.eq) goto loc_82363BA8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82363b94
	if (ctx.cr6.eq) goto loc_82363B94;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82363b84
	if (ctx.cr6.eq) goto loc_82363B84;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82363b74
	if (ctx.cr6.eq) goto loc_82363B74;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82363b64
	if (ctx.cr6.eq) goto loc_82363B64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x82363b54
	if (ctx.cr6.eq) goto loc_82363B54;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x82363bd4
	if (!ctx.cr6.eq) goto loc_82363BD4;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235fe58
	ctx.lr = 0x82363B50;
	sub_8235FE58(ctx, base);
	// b 0x82363ba0
	goto loc_82363BA0;
loc_82363B54:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363828
	ctx.lr = 0x82363B60;
	sub_82363828(ctx, base);
	// b 0x82363ba0
	goto loc_82363BA0;
loc_82363B64:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823636d8
	ctx.lr = 0x82363B70;
	sub_823636D8(ctx, base);
	// b 0x82363ba0
	goto loc_82363BA0;
loc_82363B74:
	// addi r3,r27,168
	ctx.r3.s64 = ctx.r27.s64 + 168;
	// bl 0x8236e690
	ctx.lr = 0x82363B7C;
	sub_8236E690(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82363bd4
	goto loc_82363BD4;
loc_82363B84:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363658
	ctx.lr = 0x82363B90;
	sub_82363658(ctx, base);
	// b 0x82363ba0
	goto loc_82363BA0;
loc_82363B94:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82360980
	ctx.lr = 0x82363BA0;
	sub_82360980(ctx, base);
loc_82363BA0:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82363bd4
	goto loc_82363BD4;
loc_82363BA8:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82360568
	ctx.lr = 0x82363BB4;
	sub_82360568(ctx, base);
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bne 0x82363bcc
	if (!ctx.cr0.eq) goto loc_82363BCC;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82363bd0
	if (ctx.cr0.eq) goto loc_82363BD0;
loc_82363BCC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82363BD0:
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
loc_82363BD4:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369788
	ctx.lr = 0x82363BE0;
	sub_82369788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82363af0
	if (!ctx.cr0.eq) goto loc_82363AF0;
loc_82363BE8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363bf8
	if (ctx.cr0.eq) goto loc_82363BF8;
	// addi r3,r27,168
	ctx.r3.s64 = ctx.r27.s64 + 168;
	// bl 0x8236e690
	ctx.lr = 0x82363BF8;
	sub_8236E690(ctx, base);
loc_82363BF8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82363C00;
	sub_82375128(ctx, base);
	// b 0x82363c38
	goto loc_82363C38;
loc_82363C04:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,32492
	ctx.r6.s64 = ctx.r8.s64 + 32492;
	// addi r9,r11,-27800
	ctx.r9.s64 = ctx.r11.s64 + -27800;
	// addi r7,r10,-27740
	ctx.r7.s64 = ctx.r10.s64 + -27740;
	// addi r5,r5,32416
	ctx.r5.s64 = ctx.r5.s64 + 32416;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,489
	ctx.r8.s64 = 489;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82363C38;
	sub_82372320(ctx, base);
loc_82363C38:
	// lwz r11,176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82363c68
	if (!ctx.cr6.eq) goto loc_82363C68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823621c0
	ctx.lr = 0x82363C4C;
	sub_823621C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82363c68
	if (!ctx.cr0.eq) goto loc_82363C68;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82363C68:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369708
	ctx.lr = 0x82363C70;
	sub_82369708(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82363C74:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363C7C"))) PPC_WEAK_FUNC(sub_82363C7C);
PPC_FUNC_IMPL(__imp__sub_82363C7C) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82369708
	ctx.lr = 0x82363C94;
	sub_82369708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363CA4"))) PPC_WEAK_FUNC(sub_82363CA4);
PPC_FUNC_IMPL(__imp__sub_82363CA4) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82363CBC;
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

__attribute__((alias("__imp__sub_82363CCC"))) PPC_WEAK_FUNC(sub_82363CCC);
PPC_FUNC_IMPL(__imp__sub_82363CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363CD0"))) PPC_WEAK_FUNC(sub_82363CD0);
PPC_FUNC_IMPL(__imp__sub_82363CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363CE0"))) PPC_WEAK_FUNC(sub_82363CE0);
PPC_FUNC_IMPL(__imp__sub_82363CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363CF0"))) PPC_WEAK_FUNC(sub_82363CF0);
PPC_FUNC_IMPL(__imp__sub_82363CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82363d00
	if (ctx.cr6.gt) goto loc_82363D00;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82363D00:
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82363d14
	if (ctx.cr6.lt) goto loc_82363D14;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82363D14:
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363d2c
	if (!ctx.cr6.eq) goto loc_82363D2C;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
loc_82363D2C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363D3C"))) PPC_WEAK_FUNC(sub_82363D3C);
PPC_FUNC_IMPL(__imp__sub_82363D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363D40"))) PPC_WEAK_FUNC(sub_82363D40);
PPC_FUNC_IMPL(__imp__sub_82363D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82363d50
	if (ctx.cr6.gt) goto loc_82363D50;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82363D50:
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82363d64
	if (ctx.cr6.lt) goto loc_82363D64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82363D64:
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363d7c
	if (!ctx.cr6.eq) goto loc_82363D7C;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
loc_82363D7C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363D8C"))) PPC_WEAK_FUNC(sub_82363D8C);
PPC_FUNC_IMPL(__imp__sub_82363D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363D90"))) PPC_WEAK_FUNC(sub_82363D90);
PPC_FUNC_IMPL(__imp__sub_82363D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363DA0"))) PPC_WEAK_FUNC(sub_82363DA0);
PPC_FUNC_IMPL(__imp__sub_82363DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363DB0"))) PPC_WEAK_FUNC(sub_82363DB0);
PPC_FUNC_IMPL(__imp__sub_82363DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82363dd8
	if (!ctx.cr6.eq) goto loc_82363DD8;
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82363dd8
	if (!ctx.cr6.eq) goto loc_82363DD8;
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_82363DD8:
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82363de8
	if (ctx.cr6.gt) goto loc_82363DE8;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_82363DE8:
	// stfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82363dfc
	if (ctx.cr6.lt) goto loc_82363DFC;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_82363DFC:
	// stfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E08"))) PPC_WEAK_FUNC(sub_82363E08);
PPC_FUNC_IMPL(__imp__sub_82363E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E10"))) PPC_WEAK_FUNC(sub_82363E10);
PPC_FUNC_IMPL(__imp__sub_82363E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E18"))) PPC_WEAK_FUNC(sub_82363E18);
PPC_FUNC_IMPL(__imp__sub_82363E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E20"))) PPC_WEAK_FUNC(sub_82363E20);
PPC_FUNC_IMPL(__imp__sub_82363E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E28"))) PPC_WEAK_FUNC(sub_82363E28);
PPC_FUNC_IMPL(__imp__sub_82363E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E30"))) PPC_WEAK_FUNC(sub_82363E30);
PPC_FUNC_IMPL(__imp__sub_82363E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,-28948(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E84"))) PPC_WEAK_FUNC(sub_82363E84);
PPC_FUNC_IMPL(__imp__sub_82363E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363E88"))) PPC_WEAK_FUNC(sub_82363E88);
PPC_FUNC_IMPL(__imp__sub_82363E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-27576
	ctx.r11.s64 = ctx.r11.s64 + -27576;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E98"))) PPC_WEAK_FUNC(sub_82363E98);
PPC_FUNC_IMPL(__imp__sub_82363E98) {
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
	// addi r11,r11,-27576
	ctx.r11.s64 = ctx.r11.s64 + -27576;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82363ec4
	if (ctx.cr0.eq) goto loc_82363EC4;
	// bl 0x8236a3f0
	ctx.lr = 0x82363EC4;
	sub_8236A3F0(ctx, base);
loc_82363EC4:
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

__attribute__((alias("__imp__sub_82363EDC"))) PPC_WEAK_FUNC(sub_82363EDC);
PPC_FUNC_IMPL(__imp__sub_82363EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363EE0"))) PPC_WEAK_FUNC(sub_82363EE0);
PPC_FUNC_IMPL(__imp__sub_82363EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-27544(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27544);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82363EF0;
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82363f38
	if (ctx.cr6.eq) goto loc_82363F38;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82363F18:
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
	// bne 0x82363f18
	if (!ctx.cr0.eq) goto loc_82363F18;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82363F38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82363f84
	if (ctx.cr6.eq) goto loc_82363F84;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82363F64:
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
	// bne 0x82363f64
	if (!ctx.cr0.eq) goto loc_82363F64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82363F84:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82363FA4;
	sub_821C0630(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363EE8"))) PPC_WEAK_FUNC(sub_82363EE8);
PPC_FUNC_IMPL(__imp__sub_82363EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82363EF0;
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82363f38
	if (ctx.cr6.eq) goto loc_82363F38;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82363F18:
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
	// bne 0x82363f18
	if (!ctx.cr0.eq) goto loc_82363F18;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82363F38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82363f84
	if (ctx.cr6.eq) goto loc_82363F84;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82363F64:
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
	// bne 0x82363f64
	if (!ctx.cr0.eq) goto loc_82363F64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82363F84:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82363F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82363FA4;
	sub_821C0630(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363FAC"))) PPC_WEAK_FUNC(sub_82363FAC);
PPC_FUNC_IMPL(__imp__sub_82363FAC) {
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
	// bl 0x821c0630
	ctx.lr = 0x82363FC4;
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

__attribute__((alias("__imp__sub_82363FD4"))) PPC_WEAK_FUNC(sub_82363FD4);
PPC_FUNC_IMPL(__imp__sub_82363FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363FD8"))) PPC_WEAK_FUNC(sub_82363FD8);
PPC_FUNC_IMPL(__imp__sub_82363FD8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82364040
	if (!ctx.cr6.gt) goto loc_82364040;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82364010
	if (ctx.cr6.gt) goto loc_82364010;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82364010:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82364020
	if (ctx.cr6.gt) goto loc_82364020;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82364020:
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x8236403c
	if (ctx.cr0.eq) goto loc_8236403C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a390
	ctx.lr = 0x8236403C;
	sub_8236A390(ctx, base);
loc_8236403C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82364040:
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

__attribute__((alias("__imp__sub_82364054"))) PPC_WEAK_FUNC(sub_82364054);
PPC_FUNC_IMPL(__imp__sub_82364054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364058"))) PPC_WEAK_FUNC(sub_82364058);
PPC_FUNC_IMPL(__imp__sub_82364058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-27440(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27440);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82364068;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82364170
	goto loc_82364170;
loc_8236409C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823640d0
	if (ctx.cr6.eq) goto loc_823640D0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823640B0:
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
	// bne 0x823640b0
	if (!ctx.cr0.eq) goto loc_823640B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823640D0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82364104
	if (ctx.cr6.eq) goto loc_82364104;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823640E4:
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
	// bne 0x823640e4
	if (!ctx.cr0.eq) goto loc_823640E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82364104:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235ce28
	ctx.lr = 0x82364114;
	sub_8235CE28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8236411C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82364154
	if (!ctx.cr6.lt) goto loc_82364154;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// beq 0x8236411c
	if (ctx.cr0.eq) goto loc_8236411C;
loc_82364154:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cf08
	ctx.lr = 0x8236415C;
	sub_8235CF08(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82364170:
	// bctrl 
	ctx.lr = 0x82364174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236409c
	if (!ctx.cr0.eq) goto loc_8236409C;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82364184;
	sub_821C0630(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x8236418C;
	sub_821C0630(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364060"))) PPC_WEAK_FUNC(sub_82364060);
PPC_FUNC_IMPL(__imp__sub_82364060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82364068;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82364170
	goto loc_82364170;
loc_8236409C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823640d0
	if (ctx.cr6.eq) goto loc_823640D0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823640B0:
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
	// bne 0x823640b0
	if (!ctx.cr0.eq) goto loc_823640B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823640D0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82364104
	if (ctx.cr6.eq) goto loc_82364104;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823640E4:
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
	// bne 0x823640e4
	if (!ctx.cr0.eq) goto loc_823640E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82364104:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235ce28
	ctx.lr = 0x82364114;
	sub_8235CE28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8236411C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82364154
	if (!ctx.cr6.lt) goto loc_82364154;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// beq 0x8236411c
	if (ctx.cr0.eq) goto loc_8236411C;
loc_82364154:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cf08
	ctx.lr = 0x8236415C;
	sub_8235CF08(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82364170:
	// bctrl 
	ctx.lr = 0x82364174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236409c
	if (!ctx.cr0.eq) goto loc_8236409C;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x82364184;
	sub_821C0630(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c0630
	ctx.lr = 0x8236418C;
	sub_821C0630(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364194"))) PPC_WEAK_FUNC(sub_82364194);
PPC_FUNC_IMPL(__imp__sub_82364194) {
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
	ctx.lr = 0x823641AC;
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

__attribute__((alias("__imp__sub_823641BC"))) PPC_WEAK_FUNC(sub_823641BC);
PPC_FUNC_IMPL(__imp__sub_823641BC) {
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
	// bl 0x821c0630
	ctx.lr = 0x823641D4;
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

__attribute__((alias("__imp__sub_823641E4"))) PPC_WEAK_FUNC(sub_823641E4);
PPC_FUNC_IMPL(__imp__sub_823641E4) {
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
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cf08
	ctx.lr = 0x823641FC;
	sub_8235CF08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236420C"))) PPC_WEAK_FUNC(sub_8236420C);
PPC_FUNC_IMPL(__imp__sub_8236420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364210"))) PPC_WEAK_FUNC(sub_82364210);
PPC_FUNC_IMPL(__imp__sub_82364210) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364224"))) PPC_WEAK_FUNC(sub_82364224);
PPC_FUNC_IMPL(__imp__sub_82364224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364228"))) PPC_WEAK_FUNC(sub_82364228);
PPC_FUNC_IMPL(__imp__sub_82364228) {
	PPC_FUNC_PROLOGUE();
	// b 0x8235fcf0
	sub_8235FCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236422C"))) PPC_WEAK_FUNC(sub_8236422C);
PPC_FUNC_IMPL(__imp__sub_8236422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364230"))) PPC_WEAK_FUNC(sub_82364230);
PPC_FUNC_IMPL(__imp__sub_82364230) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364238"))) PPC_WEAK_FUNC(sub_82364238);
PPC_FUNC_IMPL(__imp__sub_82364238) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364240"))) PPC_WEAK_FUNC(sub_82364240);
PPC_FUNC_IMPL(__imp__sub_82364240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82364248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823642d8
	if (ctx.cr6.eq) goto loc_823642D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8236434c
	if (!ctx.cr6.eq) goto loc_8236434C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823642d0
	if (ctx.cr6.eq) goto loc_823642D0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236427C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82364288:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82364288
	if (!ctx.cr0.eq) goto loc_82364288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823642BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236427c
	if (ctx.cr6.lt) goto loc_8236427C;
loc_823642D0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82364348
	goto loc_82364348;
loc_823642D8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364344
	if (ctx.cr6.eq) goto loc_82364344;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823642F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_823642FC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823642fc
	if (!ctx.cr0.eq) goto loc_823642FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823642f0
	if (ctx.cr6.lt) goto loc_823642F0;
loc_82364344:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82364348:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8236434C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364354"))) PPC_WEAK_FUNC(sub_82364354);
PPC_FUNC_IMPL(__imp__sub_82364354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364358"))) PPC_WEAK_FUNC(sub_82364358);
PPC_FUNC_IMPL(__imp__sub_82364358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82364360;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8236a338
	ctx.lr = 0x82364378;
	sub_8236A338(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823643b8
	if (ctx.cr0.eq) goto loc_823643B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823643bc
	if (ctx.cr6.eq) goto loc_823643BC;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82364394:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82364394
	if (!ctx.cr0.eq) goto loc_82364394;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x823643bc
	goto loc_823643BC;
loc_823643B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823643BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823643f0
	if (ctx.cr6.eq) goto loc_823643F0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823643e4
	if (ctx.cr6.eq) goto loc_823643E4;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x823643e8
	goto loc_823643E8;
loc_823643E4:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823643E8:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x8236441c
	goto loc_8236441C;
loc_823643F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82364414
	if (ctx.cr6.eq) goto loc_82364414;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82364418
	goto loc_82364418;
loc_82364414:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82364418:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8236441C:
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

__attribute__((alias("__imp__sub_82364430"))) PPC_WEAK_FUNC(sub_82364430);
PPC_FUNC_IMPL(__imp__sub_82364430) {
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
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82364480
	if (ctx.cr6.eq) goto loc_82364480;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// bl 0x823689c8
	ctx.lr = 0x82364468;
	sub_823689C8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823552f0
	ctx.lr = 0x8236447C;
	sub_823552F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82364480:
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

__attribute__((alias("__imp__sub_8236449C"))) PPC_WEAK_FUNC(sub_8236449C);
PPC_FUNC_IMPL(__imp__sub_8236449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823644A0"))) PPC_WEAK_FUNC(sub_823644A0);
PPC_FUNC_IMPL(__imp__sub_823644A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-27264(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27264);
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
	// addi r11,r11,-27312
	ctx.r11.s64 = ctx.r11.s64 + -27312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82379b50
	ctx.lr = 0x823644DC;
	sub_82379B50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235f918
	ctx.lr = 0x823644E4;
	sub_8235F918(ctx, base);
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

__attribute__((alias("__imp__sub_823644A8"))) PPC_WEAK_FUNC(sub_823644A8);
PPC_FUNC_IMPL(__imp__sub_823644A8) {
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
	// addi r11,r11,-27312
	ctx.r11.s64 = ctx.r11.s64 + -27312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82379b50
	ctx.lr = 0x823644DC;
	sub_82379B50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235f918
	ctx.lr = 0x823644E4;
	sub_8235F918(ctx, base);
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

__attribute__((alias("__imp__sub_823644FC"))) PPC_WEAK_FUNC(sub_823644FC);
PPC_FUNC_IMPL(__imp__sub_823644FC) {
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
	// bl 0x8235f918
	ctx.lr = 0x82364514;
	sub_8235F918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364524"))) PPC_WEAK_FUNC(sub_82364524);
PPC_FUNC_IMPL(__imp__sub_82364524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364528"))) PPC_WEAK_FUNC(sub_82364528);
PPC_FUNC_IMPL(__imp__sub_82364528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-27200(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27200);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82364538;
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x82364558;
	sub_8235D3C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x82364568;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82364594
	if (ctx.cr6.eq) goto loc_82364594;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x8236457C;
	sub_8235D3C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bl 0x821c0630
	ctx.lr = 0x82364594;
	sub_821C0630(ctx, base);
loc_82364594:
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82364358
	ctx.lr = 0x823645A4;
	sub_82364358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x823645AC;
	sub_821C0630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364530"))) PPC_WEAK_FUNC(sub_82364530);
PPC_FUNC_IMPL(__imp__sub_82364530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82364538;
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x82364558;
	sub_8235D3C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x82364568;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82364594
	if (ctx.cr6.eq) goto loc_82364594;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235d3c8
	ctx.lr = 0x8236457C;
	sub_8235D3C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bl 0x821c0630
	ctx.lr = 0x82364594;
	sub_821C0630(ctx, base);
loc_82364594:
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82364358
	ctx.lr = 0x823645A4;
	sub_82364358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x823645AC;
	sub_821C0630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823645B8"))) PPC_WEAK_FUNC(sub_823645B8);
PPC_FUNC_IMPL(__imp__sub_823645B8) {
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
	// bl 0x821c0630
	ctx.lr = 0x823645D0;
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

__attribute__((alias("__imp__sub_823645E0"))) PPC_WEAK_FUNC(sub_823645E0);
PPC_FUNC_IMPL(__imp__sub_823645E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-27128(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27128);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823645F0;
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82364638
	if (ctx.cr6.eq) goto loc_82364638;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82364618:
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
	// bne 0x82364618
	if (!ctx.cr0.eq) goto loc_82364618;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82364638:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235fb88
	ctx.lr = 0x82364644;
	sub_8235FB88(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-27312
	ctx.r10.s64 = ctx.r10.s64 + -27312;
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82364670;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823645E8"))) PPC_WEAK_FUNC(sub_823645E8);
PPC_FUNC_IMPL(__imp__sub_823645E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823645F0;
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82364638
	if (ctx.cr6.eq) goto loc_82364638;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82364618:
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
	// bne 0x82364618
	if (!ctx.cr0.eq) goto loc_82364618;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82364638:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235fb88
	ctx.lr = 0x82364644;
	sub_8235FB88(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-27312
	ctx.r10.s64 = ctx.r10.s64 + -27312;
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82364670;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236467C"))) PPC_WEAK_FUNC(sub_8236467C);
PPC_FUNC_IMPL(__imp__sub_8236467C) {
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
	// bl 0x821c0630
	ctx.lr = 0x82364694;
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

__attribute__((alias("__imp__sub_823646A4"))) PPC_WEAK_FUNC(sub_823646A4);
PPC_FUNC_IMPL(__imp__sub_823646A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823646A8"))) PPC_WEAK_FUNC(sub_823646A8);
PPC_FUNC_IMPL(__imp__sub_823646A8) {
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
	// bl 0x823644a8
	ctx.lr = 0x823646C8;
	sub_823644A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823646d8
	if (ctx.cr0.eq) goto loc_823646D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x823646D8;
	sub_8236A3F0(ctx, base);
loc_823646D8:
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

__attribute__((alias("__imp__sub_823646F4"))) PPC_WEAK_FUNC(sub_823646F4);
PPC_FUNC_IMPL(__imp__sub_823646F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823646F8"))) PPC_WEAK_FUNC(sub_823646F8);
PPC_FUNC_IMPL(__imp__sub_823646F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f0,2108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364718"))) PPC_WEAK_FUNC(sub_82364718);
PPC_FUNC_IMPL(__imp__sub_82364718) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236e760
	ctx.lr = 0x82364734;
	sub_8236E760(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8236e760
	ctx.lr = 0x82364740;
	sub_8236E760(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8236e760
	ctx.lr = 0x8236474C;
	sub_8236E760(ctx, base);
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r7,r11,20776
	ctx.r7.s64 = ctx.r11.s64 + 20776;
	// addi r6,r10,-32488
	ctx.r6.s64 = ctx.r10.s64 + -32488;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8237c1c0
	ctx.lr = 0x8236476C;
	sub_8237C1C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15000
	ctx.r10.s64 = 15000;
	// stb r11,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r10.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8236479C"))) PPC_WEAK_FUNC(sub_8236479C);
PPC_FUNC_IMPL(__imp__sub_8236479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823647A0"))) PPC_WEAK_FUNC(sub_823647A0);
PPC_FUNC_IMPL(__imp__sub_823647A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-27040(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -27040);
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
	// addi r3,r3,536
	ctx.r3.s64 = ctx.r3.s64 + 536;
	// bl 0x82375128
	ctx.lr = 0x823647D0;
	sub_82375128(ctx, base);
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r6,r11,20776
	ctx.r6.s64 = ctx.r11.s64 + 20776;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8237c3b0
	ctx.lr = 0x823647E8;
	sub_8237C3B0(ctx, base);
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

__attribute__((alias("__imp__sub_823647A8"))) PPC_WEAK_FUNC(sub_823647A8);
PPC_FUNC_IMPL(__imp__sub_823647A8) {
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
	// addi r3,r3,536
	ctx.r3.s64 = ctx.r3.s64 + 536;
	// bl 0x82375128
	ctx.lr = 0x823647D0;
	sub_82375128(ctx, base);
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r6,r11,20776
	ctx.r6.s64 = ctx.r11.s64 + 20776;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8237c3b0
	ctx.lr = 0x823647E8;
	sub_8237C3B0(ctx, base);
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

__attribute__((alias("__imp__sub_82364800"))) PPC_WEAK_FUNC(sub_82364800);
PPC_FUNC_IMPL(__imp__sub_82364800) {
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
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// addi r6,r11,20776
	ctx.r6.s64 = ctx.r11.s64 + 20776;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8237c3b0
	ctx.lr = 0x8236482C;
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

__attribute__((alias("__imp__sub_8236483C"))) PPC_WEAK_FUNC(sub_8236483C);
PPC_FUNC_IMPL(__imp__sub_8236483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364840"))) PPC_WEAK_FUNC(sub_82364840);
PPC_FUNC_IMPL(__imp__sub_82364840) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r11,536
	ctx.r31.s64 = ctx.r11.s64 + 536;
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823648e4
	if (ctx.cr0.eq) goto loc_823648E4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82364870:
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
	// bne 0x82364870
	if (!ctx.cr0.eq) goto loc_82364870;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823695f0
	ctx.lr = 0x82364898;
	sub_823695F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823648b0
	if (ctx.cr0.eq) goto loc_823648B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82350190
	ctx.lr = 0x823648AC;
	sub_82350190(ctx, base);
	// b 0x823648e4
	goto loc_823648E4;
loc_823648B0:
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
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26920
	ctx.r9.s64 = ctx.r11.s64 + -26920;
	// addi r7,r10,-26960
	ctx.r7.s64 = ctx.r10.s64 + -26960;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,98
	ctx.r8.s64 = 98;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823648E4;
	sub_82372320(ctx, base);
loc_823648E4:
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

__attribute__((alias("__imp__sub_823648F8"))) PPC_WEAK_FUNC(sub_823648F8);
PPC_FUNC_IMPL(__imp__sub_823648F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-26744(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26744);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82364908;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r29,r4,8
	ctx.r29.s64 = ctx.r4.s64 + 8;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363e08
	ctx.lr = 0x8236493C;
	sub_82363E08(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// clrlwi r28,r11,25
	ctx.r28.u64 = ctx.r11.u32 & 0x7F;
	// bl 0x8236e760
	ctx.lr = 0x82364950;
	sub_8236E760(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e900
	ctx.lr = 0x82364960;
	sub_8236E900(ctx, base);
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// beq 0x82364a9c
	if (ctx.cr0.eq) goto loc_82364A9C;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// bl 0x82366380
	ctx.lr = 0x82364984;
	sub_82366380(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x82364998;
	sub_8236E9D8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e9a8
	ctx.lr = 0x823649A4;
	sub_8236E9A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364a4c
	if (ctx.cr0.eq) goto loc_82364A4C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823689c8
	ctx.lr = 0x823649B8;
	sub_823689C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82350190
	ctx.lr = 0x823649C4;
	sub_82350190(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823649E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,532(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// beq 0x82364a14
	if (ctx.cr0.eq) goto loc_82364A14;
	// lwz r9,528(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x82369a60
	ctx.lr = 0x82364A10;
	sub_82369A60(ctx, base);
	// b 0x82364a9c
	goto loc_82364A9C;
loc_82364A14:
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
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26772
	ctx.r9.s64 = ctx.r11.s64 + -26772;
	// addi r7,r10,-26812
	ctx.r7.s64 = ctx.r10.s64 + -26812;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,129
	ctx.r8.s64 = 129;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82364A48;
	sub_82372320(ctx, base);
	// b 0x82364a9c
	goto loc_82364A9C;
loc_82364A4C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82363e08
	ctx.lr = 0x82364A54;
	sub_82363E08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82363e08
	ctx.lr = 0x82364A60;
	sub_82363E08(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r7,r8,-26812
	ctx.r7.s64 = ctx.r8.s64 + -26812;
	// addi r9,r11,-26848
	ctx.r9.s64 = ctx.r11.s64 + -26848;
	// addi r6,r6,-26888
	ctx.r6.s64 = ctx.r6.s64 + -26888;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,134
	ctx.r8.s64 = 134;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82364A9C;
	sub_82372320(ctx, base);
loc_82364A9C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364900"))) PPC_WEAK_FUNC(sub_82364900);
PPC_FUNC_IMPL(__imp__sub_82364900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82364908;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r29,r4,8
	ctx.r29.s64 = ctx.r4.s64 + 8;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363e08
	ctx.lr = 0x8236493C;
	sub_82363E08(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// clrlwi r28,r11,25
	ctx.r28.u64 = ctx.r11.u32 & 0x7F;
	// bl 0x8236e760
	ctx.lr = 0x82364950;
	sub_8236E760(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e900
	ctx.lr = 0x82364960;
	sub_8236E900(ctx, base);
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// beq 0x82364a9c
	if (ctx.cr0.eq) goto loc_82364A9C;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// bl 0x82366380
	ctx.lr = 0x82364984;
	sub_82366380(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x82364998;
	sub_8236E9D8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e9a8
	ctx.lr = 0x823649A4;
	sub_8236E9A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364a4c
	if (ctx.cr0.eq) goto loc_82364A4C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823689c8
	ctx.lr = 0x823649B8;
	sub_823689C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82350190
	ctx.lr = 0x823649C4;
	sub_82350190(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823649E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,532(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// beq 0x82364a14
	if (ctx.cr0.eq) goto loc_82364A14;
	// lwz r9,528(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x82369a60
	ctx.lr = 0x82364A10;
	sub_82369A60(ctx, base);
	// b 0x82364a9c
	goto loc_82364A9C;
loc_82364A14:
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
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26772
	ctx.r9.s64 = ctx.r11.s64 + -26772;
	// addi r7,r10,-26812
	ctx.r7.s64 = ctx.r10.s64 + -26812;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,129
	ctx.r8.s64 = 129;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82364A48;
	sub_82372320(ctx, base);
	// b 0x82364a9c
	goto loc_82364A9C;
loc_82364A4C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82363e08
	ctx.lr = 0x82364A54;
	sub_82363E08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82363e08
	ctx.lr = 0x82364A60;
	sub_82363E08(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r7,r8,-26812
	ctx.r7.s64 = ctx.r8.s64 + -26812;
	// addi r9,r11,-26848
	ctx.r9.s64 = ctx.r11.s64 + -26848;
	// addi r6,r6,-26888
	ctx.r6.s64 = ctx.r6.s64 + -26888;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,134
	ctx.r8.s64 = 134;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82364A9C;
	sub_82372320(ctx, base);
loc_82364A9C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364AA8"))) PPC_WEAK_FUNC(sub_82364AA8);
PPC_FUNC_IMPL(__imp__sub_82364AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364ad8
	if (ctx.cr0.eq) goto loc_82364AD8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82375128
	ctx.lr = 0x82364AD8;
	sub_82375128(ctx, base);
loc_82364AD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364AE8"))) PPC_WEAK_FUNC(sub_82364AE8);
PPC_FUNC_IMPL(__imp__sub_82364AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-26688(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26688);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82364AF8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236e948
	ctx.lr = 0x82364B18;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq 0x82364b3c
	if (ctx.cr0.eq) goto loc_82364B3C;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e760
	ctx.lr = 0x82364B2C;
	sub_8236E760(ctx, base);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// b 0x82364b50
	goto loc_82364B50;
loc_82364B3C:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e760
	ctx.lr = 0x82364B44;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_82364B50:
	// bl 0x8236e900
	ctx.lr = 0x82364B54;
	sub_8236E900(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82364b98
	goto loc_82364B98;
loc_82364B60:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82364B68;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364bac
	if (ctx.cr6.eq) goto loc_82364BAC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x8236e918
	ctx.lr = 0x82364B98;
	sub_8236E918(ctx, base);
loc_82364B98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e988
	ctx.lr = 0x82364BA4;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82364b60
	if (!ctx.cr0.eq) goto loc_82364B60;
loc_82364BAC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e760
	ctx.lr = 0x82364BB8;
	sub_8236E760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236e9c0
	ctx.lr = 0x82364BC4;
	sub_8236E9C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364d64
	if (ctx.cr0.eq) goto loc_82364D64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x82364BD4;
	sub_8236A338(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82364c00
	if (ctx.cr0.eq) goto loc_82364C00;
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,532(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82369ef0
	ctx.lr = 0x82364BF8;
	sub_82369EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82364c04
	goto loc_82364C04;
loc_82364C00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82364C04:
	// addi r29,r30,536
	ctx.r29.s64 = ctx.r30.s64 + 536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82350190
	ctx.lr = 0x82364C10;
	sub_82350190(ctx, base);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e760
	ctx.lr = 0x82364C24;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e900
	ctx.lr = 0x82364C34;
	sub_8236E900(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82364cec
	goto loc_82364CEC;
loc_82364C44:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82364C4C;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// beq cr6,0x82364c8c
	if (ctx.cr6.eq) goto loc_82364C8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364cdc
	if (!ctx.cr6.eq) goto loc_82364CDC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e930
	ctx.lr = 0x82364C80;
	sub_8236E930(ctx, base);
	// bl 0x82363e08
	ctx.lr = 0x82364C84;
	sub_82363E08(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// b 0x82364cdc
	goto loc_82364CDC;
loc_82364C8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364cdc
	if (ctx.cr6.eq) goto loc_82364CDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e760
	ctx.lr = 0x82364CA0;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8236e930
	ctx.lr = 0x82364CB0;
	sub_8236E930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8236e930
	ctx.lr = 0x82364CC0;
	sub_8236E930(ctx, base);
	// bl 0x82363e08
	ctx.lr = 0x82364CC4;
	sub_82363E08(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82369fd0
	ctx.lr = 0x82364CD4;
	sub_82369FD0(ctx, base);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
loc_82364CDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e918
	ctx.lr = 0x82364CEC;
	sub_8236E918(ctx, base);
loc_82364CEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e988
	ctx.lr = 0x82364CF8;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82364c44
	if (!ctx.cr0.eq) goto loc_82364C44;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364d4c
	if (ctx.cr6.eq) goto loc_82364D4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e760
	ctx.lr = 0x82364D18;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e930
	ctx.lr = 0x82364D28;
	sub_8236E930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8236e930
	ctx.lr = 0x82364D38;
	sub_8236E930(ctx, base);
	// bl 0x82363e08
	ctx.lr = 0x82364D3C;
	sub_82363E08(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82369fd0
	ctx.lr = 0x82364D4C;
	sub_82369FD0(ctx, base);
loc_82364D4C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82363e08
	ctx.lr = 0x82364D58;
	sub_82363E08(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369a50
	ctx.lr = 0x82364D64;
	sub_82369A50(ctx, base);
loc_82364D64:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364AF0"))) PPC_WEAK_FUNC(sub_82364AF0);
PPC_FUNC_IMPL(__imp__sub_82364AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82364AF8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236e948
	ctx.lr = 0x82364B18;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq 0x82364b3c
	if (ctx.cr0.eq) goto loc_82364B3C;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e760
	ctx.lr = 0x82364B2C;
	sub_8236E760(ctx, base);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// b 0x82364b50
	goto loc_82364B50;
loc_82364B3C:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e760
	ctx.lr = 0x82364B44;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_82364B50:
	// bl 0x8236e900
	ctx.lr = 0x82364B54;
	sub_8236E900(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82364b98
	goto loc_82364B98;
loc_82364B60:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82364B68;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364bac
	if (ctx.cr6.eq) goto loc_82364BAC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x8236e918
	ctx.lr = 0x82364B98;
	sub_8236E918(ctx, base);
loc_82364B98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e988
	ctx.lr = 0x82364BA4;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82364b60
	if (!ctx.cr0.eq) goto loc_82364B60;
loc_82364BAC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e760
	ctx.lr = 0x82364BB8;
	sub_8236E760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236e9c0
	ctx.lr = 0x82364BC4;
	sub_8236E9C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364d64
	if (ctx.cr0.eq) goto loc_82364D64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8236a338
	ctx.lr = 0x82364BD4;
	sub_8236A338(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82364c00
	if (ctx.cr0.eq) goto loc_82364C00;
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,532(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82369ef0
	ctx.lr = 0x82364BF8;
	sub_82369EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82364c04
	goto loc_82364C04;
loc_82364C00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82364C04:
	// addi r29,r30,536
	ctx.r29.s64 = ctx.r30.s64 + 536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82350190
	ctx.lr = 0x82364C10;
	sub_82350190(ctx, base);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e760
	ctx.lr = 0x82364C24;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e900
	ctx.lr = 0x82364C34;
	sub_8236E900(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82364cec
	goto loc_82364CEC;
loc_82364C44:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82364C4C;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// beq cr6,0x82364c8c
	if (ctx.cr6.eq) goto loc_82364C8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364cdc
	if (!ctx.cr6.eq) goto loc_82364CDC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e930
	ctx.lr = 0x82364C80;
	sub_8236E930(ctx, base);
	// bl 0x82363e08
	ctx.lr = 0x82364C84;
	sub_82363E08(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// b 0x82364cdc
	goto loc_82364CDC;
loc_82364C8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364cdc
	if (ctx.cr6.eq) goto loc_82364CDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e760
	ctx.lr = 0x82364CA0;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8236e930
	ctx.lr = 0x82364CB0;
	sub_8236E930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8236e930
	ctx.lr = 0x82364CC0;
	sub_8236E930(ctx, base);
	// bl 0x82363e08
	ctx.lr = 0x82364CC4;
	sub_82363E08(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82369fd0
	ctx.lr = 0x82364CD4;
	sub_82369FD0(ctx, base);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
loc_82364CDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e918
	ctx.lr = 0x82364CEC;
	sub_8236E918(ctx, base);
loc_82364CEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e988
	ctx.lr = 0x82364CF8;
	sub_8236E988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82364c44
	if (!ctx.cr0.eq) goto loc_82364C44;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364d4c
	if (ctx.cr6.eq) goto loc_82364D4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e760
	ctx.lr = 0x82364D18;
	sub_8236E760(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8236e930
	ctx.lr = 0x82364D28;
	sub_8236E930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8236e930
	ctx.lr = 0x82364D38;
	sub_8236E930(ctx, base);
	// bl 0x82363e08
	ctx.lr = 0x82364D3C;
	sub_82363E08(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82369fd0
	ctx.lr = 0x82364D4C;
	sub_82369FD0(ctx, base);
loc_82364D4C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82363e08
	ctx.lr = 0x82364D58;
	sub_82363E08(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369a50
	ctx.lr = 0x82364D64;
	sub_82369A50(ctx, base);
loc_82364D64:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364D6C"))) PPC_WEAK_FUNC(sub_82364D6C);
PPC_FUNC_IMPL(__imp__sub_82364D6C) {
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
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82350110
	ctx.lr = 0x82364D84;
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

__attribute__((alias("__imp__sub_82364D94"))) PPC_WEAK_FUNC(sub_82364D94);
PPC_FUNC_IMPL(__imp__sub_82364D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364D98"))) PPC_WEAK_FUNC(sub_82364D98);
PPC_FUNC_IMPL(__imp__sub_82364D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-26456(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26456);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82364DA8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x82366380
	ctx.lr = 0x82364DC8;
	sub_82366380(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x82364DDC;
	sub_8236E9D8(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e968
	ctx.lr = 0x82364E00;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82364e40
	if (!ctx.cr0.eq) goto loc_82364E40;
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// lwz r10,528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82364e40
	if (!ctx.cr6.gt) goto loc_82364E40;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26500
	ctx.r9.s64 = ctx.r11.s64 + -26500;
	// li r8,75
	ctx.r8.s64 = 75;
loc_82364E30:
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// b 0x82364f50
	goto loc_82364F50;
loc_82364E40:
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e760
	ctx.lr = 0x82364E4C;
	sub_8236E760(ctx, base);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e900
	ctx.lr = 0x82364E60;
	sub_8236E900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82364E6C;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364e8c
	if (ctx.cr0.eq) goto loc_82364E8C;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26532
	ctx.r9.s64 = ctx.r11.s64 + -26532;
	// li r8,48
	ctx.r8.s64 = 48;
	// b 0x82364e30
	goto loc_82364E30;
loc_82364E8C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82364E98;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364f68
	if (ctx.cr0.eq) goto loc_82364F68;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82364EA8;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82364f10
	if (!ctx.cr6.eq) goto loc_82364F10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// bl 0x823689c8
	ctx.lr = 0x82364EF0;
	sub_823689C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82364EFC;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364f68
	if (ctx.cr0.eq) goto loc_82364F68;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82364f68
	goto loc_82364F68;
loc_82364F10:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// bl 0x82366380
	ctx.lr = 0x82364F18;
	sub_82366380(ctx, base);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82366380
	ctx.lr = 0x82364F24;
	sub_82366380(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82364f68
	if (ctx.cr6.eq) goto loc_82364F68;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26560
	ctx.r9.s64 = ctx.r11.s64 + -26560;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,68
	ctx.r8.s64 = 68;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82364F50:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r7,r10,-26592
	ctx.r7.s64 = ctx.r10.s64 + -26592;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// bl 0x82372320
	ctx.lr = 0x82364F64;
	sub_82372320(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_82364F68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82364af0
	ctx.lr = 0x82364F70;
	sub_82364AF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82375128
	ctx.lr = 0x82364F78;
	sub_82375128(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364DA0"))) PPC_WEAK_FUNC(sub_82364DA0);
PPC_FUNC_IMPL(__imp__sub_82364DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82364DA8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x82366380
	ctx.lr = 0x82364DC8;
	sub_82366380(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8236e9d8
	ctx.lr = 0x82364DDC;
	sub_8236E9D8(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e968
	ctx.lr = 0x82364E00;
	sub_8236E968(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82364e40
	if (!ctx.cr0.eq) goto loc_82364E40;
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// lwz r10,528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82364e40
	if (!ctx.cr6.gt) goto loc_82364E40;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26500
	ctx.r9.s64 = ctx.r11.s64 + -26500;
	// li r8,75
	ctx.r8.s64 = 75;
loc_82364E30:
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// b 0x82364f50
	goto loc_82364F50;
loc_82364E40:
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236e760
	ctx.lr = 0x82364E4C;
	sub_8236E760(ctx, base);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236e900
	ctx.lr = 0x82364E60;
	sub_8236E900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82364E6C;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364e8c
	if (ctx.cr0.eq) goto loc_82364E8C;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26532
	ctx.r9.s64 = ctx.r11.s64 + -26532;
	// li r8,48
	ctx.r8.s64 = 48;
	// b 0x82364e30
	goto loc_82364E30;
loc_82364E8C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82364E98;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364f68
	if (ctx.cr0.eq) goto loc_82364F68;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82363e08
	ctx.lr = 0x82364EA8;
	sub_82363E08(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82364f10
	if (!ctx.cr6.eq) goto loc_82364F10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// bl 0x823689c8
	ctx.lr = 0x82364EF0;
	sub_823689C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236e948
	ctx.lr = 0x82364EFC;
	sub_8236E948(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364f68
	if (ctx.cr0.eq) goto loc_82364F68;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82364f68
	goto loc_82364F68;
loc_82364F10:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// bl 0x82366380
	ctx.lr = 0x82364F18;
	sub_82366380(ctx, base);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82366380
	ctx.lr = 0x82364F24;
	sub_82366380(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82364f68
	if (ctx.cr6.eq) goto loc_82364F68;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-26888
	ctx.r6.s64 = ctx.r8.s64 + -26888;
	// addi r9,r11,-26560
	ctx.r9.s64 = ctx.r11.s64 + -26560;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,68
	ctx.r8.s64 = 68;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82364F50:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r7,r10,-26592
	ctx.r7.s64 = ctx.r10.s64 + -26592;
	// addi r5,r5,-26984
	ctx.r5.s64 = ctx.r5.s64 + -26984;
	// bl 0x82372320
	ctx.lr = 0x82364F64;
	sub_82372320(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_82364F68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82364af0
	ctx.lr = 0x82364F70;
	sub_82364AF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82375128
	ctx.lr = 0x82364F78;
	sub_82375128(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364F84"))) PPC_WEAK_FUNC(sub_82364F84);
PPC_FUNC_IMPL(__imp__sub_82364F84) {
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
	// bl 0x82375128
	ctx.lr = 0x82364F9C;
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

__attribute__((alias("__imp__sub_82364FAC"))) PPC_WEAK_FUNC(sub_82364FAC);
PPC_FUNC_IMPL(__imp__sub_82364FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364FB0"))) PPC_WEAK_FUNC(sub_82364FB0);
PPC_FUNC_IMPL(__imp__sub_82364FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364FB8"))) PPC_WEAK_FUNC(sub_82364FB8);
PPC_FUNC_IMPL(__imp__sub_82364FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3092);
	// lwz r10,3104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,3100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3100);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82364fec
	if (ctx.cr6.gt) goto loc_82364FEC;
	// cmplwi cr6,r4,1288
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1288, ctx.xer);
	// addi r11,r10,1288
	ctx.r11.s64 = ctx.r10.s64 + 1288;
	// bgt cr6,0x82364fe4
	if (ctx.cr6.gt) goto loc_82364FE4;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82364FE4:
	// stw r11,3104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3104, ctx.r11.u32);
	// blr 
	return;
loc_82364FEC:
	// lwz r11,3096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3096);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,3096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3096, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r10,r10,1288
	ctx.r10.s64 = ctx.r10.s64 + 1288;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,3104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3104, ctx.r10.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blt cr6,0x82365018
	if (ctx.cr6.lt) goto loc_82365018;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82365018:
	// stw r11,3096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365020"))) PPC_WEAK_FUNC(sub_82365020);
PPC_FUNC_IMPL(__imp__sub_82365020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-26384(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26384);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82365030;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8236e710
	ctx.lr = 0x82365050;
	sub_8236E710(ctx, base);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// stb r29,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r29.u8);
	// stb r29,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365028"))) PPC_WEAK_FUNC(sub_82365028);
PPC_FUNC_IMPL(__imp__sub_82365028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82365030;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8236e710
	ctx.lr = 0x82365050;
	sub_8236E710(ctx, base);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// stb r29,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r29.u8);
	// stb r29,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

