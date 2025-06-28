#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820D6E48"))) PPC_WEAK_FUNC(sub_820D6E48);
PPC_FUNC_IMPL(__imp__sub_820D6E48) {
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
	ctx.lr = 0x820D6E5C;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6e78
	if (ctx.cr6.eq) goto loc_820D6E78;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82178200
	ctx.lr = 0x820D6E70;
	sub_82178200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820D6E78;
	sub_82172D60(ctx, base);
loc_820D6E78:
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

__attribute__((alias("__imp__sub_820D6E8C"))) PPC_WEAK_FUNC(sub_820D6E8C);
PPC_FUNC_IMPL(__imp__sub_820D6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6E90"))) PPC_WEAK_FUNC(sub_820D6E90);
PPC_FUNC_IMPL(__imp__sub_820D6E90) {
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
	// bl 0x82087078
	ctx.lr = 0x820D6EA0;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6ed0
	if (ctx.cr6.eq) goto loc_820D6ED0;
	// li r11,-257
	ctx.r11.s64 = -257;
	// addi r8,r3,72
	ctx.r8.s64 = ctx.r3.s64 + 72;
loc_820D6EB0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stwcx. r9,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820d6eb0
	if (!ctx.cr0.eq) goto loc_820D6EB0;
	// bl 0x82172d60
	ctx.lr = 0x820D6ED0;
	sub_82172D60(ctx, base);
loc_820D6ED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6EE0"))) PPC_WEAK_FUNC(sub_820D6EE0);
PPC_FUNC_IMPL(__imp__sub_820D6EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820d6f04
	if (!ctx.cr6.eq) goto loc_820D6F04;
loc_820D6EFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d6f2c
	goto loc_820D6F2C;
loc_820D6F04:
	// bl 0x82087078
	ctx.lr = 0x820D6F08;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6efc
	if (ctx.cr6.eq) goto loc_820D6EFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82172e00
	ctx.lr = 0x820D6F1C;
	sub_82172E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820D6F28;
	sub_82172D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820D6F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6F44"))) PPC_WEAK_FUNC(sub_820D6F44);
PPC_FUNC_IMPL(__imp__sub_820D6F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6F48"))) PPC_WEAK_FUNC(sub_820D6F48);
PPC_FUNC_IMPL(__imp__sub_820D6F48) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820d704c
	if (ctx.cr6.eq) goto loc_820D704C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d704c
	if (ctx.cr6.eq) goto loc_820D704C;
	// cmpwi cr6,r3,30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 30, ctx.xer);
	// bge cr6,0x820d6fb0
	if (!ctx.cr6.lt) goto loc_820D6FB0;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-7224
	ctx.r3.s64 = ctx.r10.s64 + -7224;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82176780
	ctx.lr = 0x820D6F88;
	sub_82176780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d704c
	if (ctx.cr6.eq) goto loc_820D704C;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82172d60
	ctx.lr = 0x820D6F98;
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
loc_820D6FB0:
	// cmpwi cr6,r11,129
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 129, ctx.xer);
	// bne cr6,0x820d6fe4
	if (!ctx.cr6.eq) goto loc_820D6FE4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,262
	ctx.r3.s64 = 262;
	// lwz r11,25448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25448);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D6FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820D6FE4:
	// cmpwi cr6,r11,131
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 131, ctx.xer);
	// bne cr6,0x820d7018
	if (!ctx.cr6.eq) goto loc_820D7018;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,25456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25456);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D7004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820D7018:
	// cmpwi cr6,r11,134
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 134, ctx.xer);
	// bne cr6,0x820d704c
	if (!ctx.cr6.eq) goto loc_820D704C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,25420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25420);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D7038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820D704C:
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

__attribute__((alias("__imp__sub_820D7064"))) PPC_WEAK_FUNC(sub_820D7064);
PPC_FUNC_IMPL(__imp__sub_820D7064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7068"))) PPC_WEAK_FUNC(sub_820D7068);
PPC_FUNC_IMPL(__imp__sub_820D7068) {
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
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x82087078
	ctx.lr = 0x820D7080;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d7090
	if (ctx.cr6.eq) goto loc_820D7090;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82172d60
	ctx.lr = 0x820D7090;
	sub_82172D60(ctx, base);
loc_820D7090:
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

__attribute__((alias("__imp__sub_820D70A8"))) PPC_WEAK_FUNC(sub_820D70A8);
PPC_FUNC_IMPL(__imp__sub_820D70A8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82087078
	ctx.lr = 0x820D70C0;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d70d0
	if (ctx.cr6.eq) goto loc_820D70D0;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82172d60
	ctx.lr = 0x820D70D0;
	sub_82172D60(ctx, base);
loc_820D70D0:
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

__attribute__((alias("__imp__sub_820D70E8"))) PPC_WEAK_FUNC(sub_820D70E8);
PPC_FUNC_IMPL(__imp__sub_820D70E8) {
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
	ctx.lr = 0x820D70FC;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d7118
	if (!ctx.cr6.eq) goto loc_820D7118;
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
loc_820D7118:
	// lhz r31,62(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// bl 0x82172d60
	ctx.lr = 0x820D7120;
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

__attribute__((alias("__imp__sub_820D7138"))) PPC_WEAK_FUNC(sub_820D7138);
PPC_FUNC_IMPL(__imp__sub_820D7138) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D7140;
	__savegprlr_28(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r11,r11,27632
	ctx.r11.s64 = ctx.r11.s64 + 27632;
	// addi r10,r10,27928
	ctx.r10.s64 = ctx.r10.s64 + 27928;
	// addi r9,r9,28072
	ctx.r9.s64 = ctx.r9.s64 + 28072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,28152
	ctx.r8.s64 = ctx.r8.s64 + 28152;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// addi r7,r7,28232
	ctx.r7.s64 = ctx.r7.s64 + 28232;
	// addi r6,r6,28384
	ctx.r6.s64 = ctx.r6.s64 + 28384;
	// addi r5,r5,28304
	ctx.r5.s64 = ctx.r5.s64 + 28304;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r4,r4,28776
	ctx.r4.s64 = ctx.r4.s64 + 28776;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r11,r31,28488
	ctx.r11.s64 = ctx.r31.s64 + 28488;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r30,28840
	ctx.r10.s64 = ctx.r30.s64 + 28840;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// addi r9,r29,27712
	ctx.r9.s64 = ctx.r29.s64 + 27712;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r8,r28,28904
	ctx.r8.s64 = ctx.r28.s64 + 28904;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D71D4"))) PPC_WEAK_FUNC(sub_820D71D4);
PPC_FUNC_IMPL(__imp__sub_820D71D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D71D8"))) PPC_WEAK_FUNC(sub_820D71D8);
PPC_FUNC_IMPL(__imp__sub_820D71D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bne cr6,0x820d721c
	if (!ctx.cr6.eq) goto loc_820D721C;
	// bl 0x820ddca8
	ctx.lr = 0x820D7204;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d7214
	if (ctx.cr6.eq) goto loc_820D7214;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d7240
	goto loc_820D7240;
loc_820D7214:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d7240
	goto loc_820D7240;
loc_820D721C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d7250
	if (!ctx.cr6.eq) goto loc_820D7250;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820d723c
	if (!ctx.cr6.eq) goto loc_820D723C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d7278
	goto loc_820D7278;
loc_820D723C:
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820D7240:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d7278
	if (ctx.cr6.eq) goto loc_820D7278;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820d7278
	goto loc_820D7278;
loc_820D7250:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820d7260
	if (!ctx.cr6.eq) goto loc_820D7260;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d7274
	goto loc_820D7274;
loc_820D7260:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D7274;
	sub_820F3178(ctx, base);
loc_820D7274:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820D7278:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820d72a4
	if (!ctx.cr6.eq) goto loc_820D72A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820D728C;
	sub_820F5F90(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r10,r11,-15440
	ctx.r10.s64 = ctx.r11.s64 + -15440;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x820d72b4
	goto loc_820D72B4;
loc_820D72A4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r10,-15440
	ctx.r9.s64 = ctx.r10.s64 + -15440;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_820D72B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D72CC"))) PPC_WEAK_FUNC(sub_820D72CC);
PPC_FUNC_IMPL(__imp__sub_820D72CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D72D0"))) PPC_WEAK_FUNC(sub_820D72D0);
PPC_FUNC_IMPL(__imp__sub_820D72D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-15440
	ctx.r10.s64 = ctx.r11.s64 + -15440;
	// lwz r3,552(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 552);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D72E0"))) PPC_WEAK_FUNC(sub_820D72E0);
PPC_FUNC_IMPL(__imp__sub_820D72E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-15440
	ctx.r10.s64 = ctx.r11.s64 + -15440;
	// lwz r3,556(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D72F0"))) PPC_WEAK_FUNC(sub_820D72F0);
PPC_FUNC_IMPL(__imp__sub_820D72F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-15440
	ctx.r10.s64 = ctx.r11.s64 + -15440;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7300"))) PPC_WEAK_FUNC(sub_820D7300);
PPC_FUNC_IMPL(__imp__sub_820D7300) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-15440(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15440);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7314"))) PPC_WEAK_FUNC(sub_820D7314);
PPC_FUNC_IMPL(__imp__sub_820D7314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7318"))) PPC_WEAK_FUNC(sub_820D7318);
PPC_FUNC_IMPL(__imp__sub_820D7318) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-15440(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15440);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,260
	ctx.r3.s64 = ctx.r11.s64 + 260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7330"))) PPC_WEAK_FUNC(sub_820D7330);
PPC_FUNC_IMPL(__imp__sub_820D7330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-15440
	ctx.r10.s64 = ctx.r11.s64 + -15440;
	// beq cr6,0x820d7348
	if (ctx.cr6.eq) goto loc_820D7348;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820D7348:
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7350"))) PPC_WEAK_FUNC(sub_820D7350);
PPC_FUNC_IMPL(__imp__sub_820D7350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820d7374
	if (!ctx.cr6.eq) goto loc_820D7374;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_820D7374:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// b 0x82080000
	sub_82080000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7388"))) PPC_WEAK_FUNC(sub_820D7388);
PPC_FUNC_IMPL(__imp__sub_820D7388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D738C"))) PPC_WEAK_FUNC(sub_820D738C);
PPC_FUNC_IMPL(__imp__sub_820D738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7390"))) PPC_WEAK_FUNC(sub_820D7390);
PPC_FUNC_IMPL(__imp__sub_820D7390) {
	PPC_FUNC_PROLOGUE();
	// b 0x821bd718
	sub_821BD718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7394"))) PPC_WEAK_FUNC(sub_820D7394);
PPC_FUNC_IMPL(__imp__sub_820D7394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7398"))) PPC_WEAK_FUNC(sub_820D7398);
PPC_FUNC_IMPL(__imp__sub_820D7398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D73A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x8233d068
	ctx.lr = 0x820D73C0;
	sub_8233D068(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// sth r11,590(r1)
	PPC_STORE_U16(ctx.r1.u32 + 590, ctx.r11.u16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd8d0
	ctx.lr = 0x820D73E0;
	sub_821BD8D0(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D73E8"))) PPC_WEAK_FUNC(sub_820D73E8);
PPC_FUNC_IMPL(__imp__sub_820D73E8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x821bd8d0
	sub_821BD8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D73F8"))) PPC_WEAK_FUNC(sub_820D73F8);
PPC_FUNC_IMPL(__imp__sub_820D73F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x821bdaf0
	sub_821BDAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D73FC"))) PPC_WEAK_FUNC(sub_820D73FC);
PPC_FUNC_IMPL(__imp__sub_820D73FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7400"))) PPC_WEAK_FUNC(sub_820D7400);
PPC_FUNC_IMPL(__imp__sub_820D7400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-15440
	ctx.r10.s64 = ctx.r11.s64 + -15440;
	// lwz r3,560(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7410"))) PPC_WEAK_FUNC(sub_820D7410);
PPC_FUNC_IMPL(__imp__sub_820D7410) {
	PPC_FUNC_PROLOGUE();
	// b 0x821bdca8
	sub_821BDCA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7414"))) PPC_WEAK_FUNC(sub_820D7414);
PPC_FUNC_IMPL(__imp__sub_820D7414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7418"))) PPC_WEAK_FUNC(sub_820D7418);
PPC_FUNC_IMPL(__imp__sub_820D7418) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// lwz r3,616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d7468
	if (!ctx.cr6.eq) goto loc_820D7468;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r9,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r9.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
loc_820D7468:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r10.u32);
	// bl 0x8224a2d8
	ctx.lr = 0x820D7478;
	sub_8224A2D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d74a8
	if (!ctx.cr6.eq) goto loc_820D74A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d74a0
	if (ctx.cr6.eq) goto loc_820D74A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrldi r3,r31,32
	ctx.r3.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// bl 0x8224a2e0
	ctx.lr = 0x820D7494;
	sub_8224A2E0(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// blt cr6,0x820d74a8
	if (ctx.cr6.lt) goto loc_820D74A8;
loc_820D74A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820d74ac
	goto loc_820D74AC;
loc_820D74A8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_820D74AC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_820D74C8"))) PPC_WEAK_FUNC(sub_820D74C8);
PPC_FUNC_IMPL(__imp__sub_820D74C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bd6a0
	sub_821BD6A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D74D0"))) PPC_WEAK_FUNC(sub_820D74D0);
PPC_FUNC_IMPL(__imp__sub_820D74D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-15440
	ctx.r10.s64 = ctx.r11.s64 + -15440;
	// stw r3,620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 620, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D74E0"))) PPC_WEAK_FUNC(sub_820D74E0);
PPC_FUNC_IMPL(__imp__sub_820D74E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821becf0
	sub_821BECF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D74E4"))) PPC_WEAK_FUNC(sub_820D74E4);
PPC_FUNC_IMPL(__imp__sub_820D74E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D74E8"))) PPC_WEAK_FUNC(sub_820D74E8);
PPC_FUNC_IMPL(__imp__sub_820D74E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e438
	ctx.lr = 0x820D74F0;
	__savegprlr_16(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// addi r11,r11,29144
	ctx.r11.s64 = ctx.r11.s64 + 29144;
	// addi r10,r10,29392
	ctx.r10.s64 = ctx.r10.s64 + 29392;
	// addi r9,r9,29408
	ctx.r9.s64 = ctx.r9.s64 + 29408;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,29424
	ctx.r8.s64 = ctx.r8.s64 + 29424;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r7,29440
	ctx.r7.s64 = ctx.r7.s64 + 29440;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r6,r6,29464
	ctx.r6.s64 = ctx.r6.s64 + 29464;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r5,r5,-6736
	ctx.r5.s64 = ctx.r5.s64 + -6736;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r4,r4,22416
	ctx.r4.s64 = ctx.r4.s64 + 22416;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
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
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// addi r11,r31,29488
	ctx.r11.s64 = ctx.r31.s64 + 29488;
	// addi r10,r30,29520
	ctx.r10.s64 = ctx.r30.s64 + 29520;
	// addi r9,r29,29584
	ctx.r9.s64 = ctx.r29.s64 + 29584;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// addi r8,r28,29592
	ctx.r8.s64 = ctx.r28.s64 + 29592;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// addi r7,r27,29672
	ctx.r7.s64 = ctx.r27.s64 + 29672;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// addi r6,r26,29688
	ctx.r6.s64 = ctx.r26.s64 + 29688;
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// addi r5,r25,29696
	ctx.r5.s64 = ctx.r25.s64 + 29696;
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// addi r4,r24,29712
	ctx.r4.s64 = ctx.r24.s64 + 29712;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// lis r20,-32226
	ctx.r20.s64 = -2111963136;
	// lis r19,-32226
	ctx.r19.s64 = -2111963136;
	// lis r18,-32226
	ctx.r18.s64 = -2111963136;
	// lis r17,-32242
	ctx.r17.s64 = -2113011712;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// addi r11,r23,29720
	ctx.r11.s64 = ctx.r23.s64 + 29720;
	// addi r10,r22,29896
	ctx.r10.s64 = ctx.r22.s64 + 29896;
	// addi r9,r21,29904
	ctx.r9.s64 = ctx.r21.s64 + 29904;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// addi r8,r20,-21912
	ctx.r8.s64 = ctx.r20.s64 + -21912;
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// addi r7,r19,-21912
	ctx.r7.s64 = ctx.r19.s64 + -21912;
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// addi r6,r18,-21912
	ctx.r6.s64 = ctx.r18.s64 + -21912;
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// addi r5,r17,-7192
	ctx.r5.s64 = ctx.r17.s64 + -7192;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// addi r4,r16,29920
	ctx.r4.s64 = ctx.r16.s64 + 29920;
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// b 0x8233e488
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7614"))) PPC_WEAK_FUNC(sub_820D7614);
PPC_FUNC_IMPL(__imp__sub_820D7614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7618"))) PPC_WEAK_FUNC(sub_820D7618);
PPC_FUNC_IMPL(__imp__sub_820D7618) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// stw r4,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7664"))) PPC_WEAK_FUNC(sub_820D7664);
PPC_FUNC_IMPL(__imp__sub_820D7664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7668"))) PPC_WEAK_FUNC(sub_820D7668);
PPC_FUNC_IMPL(__imp__sub_820D7668) {
	PPC_FUNC_PROLOGUE();
	// b 0x82213238
	sub_82213238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D766C"))) PPC_WEAK_FUNC(sub_820D766C);
PPC_FUNC_IMPL(__imp__sub_820D766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7670"))) PPC_WEAK_FUNC(sub_820D7670);
PPC_FUNC_IMPL(__imp__sub_820D7670) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822130d0
	sub_822130D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D76B8"))) PPC_WEAK_FUNC(sub_820D76B8);
PPC_FUNC_IMPL(__imp__sub_820D76B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D76BC"))) PPC_WEAK_FUNC(sub_820D76BC);
PPC_FUNC_IMPL(__imp__sub_820D76BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D76C0"))) PPC_WEAK_FUNC(sub_820D76C0);
PPC_FUNC_IMPL(__imp__sub_820D76C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,428(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r6.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,456(r11)
	PPC_STORE_U8(ctx.r11.u32 + 456, ctx.r10.u8);
	// stfs f13,436(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,440(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 440, temp.u32);
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,444(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 444, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7750"))) PPC_WEAK_FUNC(sub_820D7750);
PPC_FUNC_IMPL(__imp__sub_820D7750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lfs f0,428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r9,416(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,420(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r7,424(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lfs f13,436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f12,440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f11,444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D77D8"))) PPC_WEAK_FUNC(sub_820D77D8);
PPC_FUNC_IMPL(__imp__sub_820D77D8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// b 0x8221e0a8
	sub_8221E0A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7820"))) PPC_WEAK_FUNC(sub_820D7820);
PPC_FUNC_IMPL(__imp__sub_820D7820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7824"))) PPC_WEAK_FUNC(sub_820D7824);
PPC_FUNC_IMPL(__imp__sub_820D7824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7828"))) PPC_WEAK_FUNC(sub_820D7828);
PPC_FUNC_IMPL(__imp__sub_820D7828) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d786c
	if (ctx.cr6.eq) goto loc_820D786C;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d786c
	if (!ctx.cr6.lt) goto loc_820D786C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d786c
	if (!ctx.cr6.eq) goto loc_820D786C;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d7874
	if (!ctx.cr6.eq) goto loc_820D7874;
loc_820D786C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D7874:
	// lwz r3,312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D787C"))) PPC_WEAK_FUNC(sub_820D787C);
PPC_FUNC_IMPL(__imp__sub_820D787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7880"))) PPC_WEAK_FUNC(sub_820D7880);
PPC_FUNC_IMPL(__imp__sub_820D7880) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mulli r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 * 92;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,308
	ctx.r9.s64 = ctx.r11.s64 + 308;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// lwz r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7930"))) PPC_WEAK_FUNC(sub_820D7930);
PPC_FUNC_IMPL(__imp__sub_820D7930) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D7984"))) PPC_WEAK_FUNC(sub_820D7984);
PPC_FUNC_IMPL(__imp__sub_820D7984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7988"))) PPC_WEAK_FUNC(sub_820D7988);
PPC_FUNC_IMPL(__imp__sub_820D7988) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d79cc
	if (ctx.cr6.eq) goto loc_820D79CC;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d79cc
	if (!ctx.cr6.lt) goto loc_820D79CC;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d79cc
	if (!ctx.cr6.eq) goto loc_820D79CC;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d79d4
	if (!ctx.cr6.eq) goto loc_820D79D4;
loc_820D79CC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_820D79D4:
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D79E8"))) PPC_WEAK_FUNC(sub_820D79E8);
PPC_FUNC_IMPL(__imp__sub_820D79E8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mulli r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 * 92;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,308
	ctx.r9.s64 = ctx.r11.s64 + 308;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// lwz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r7.u32);
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r6,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r6.u32);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r3,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7A98"))) PPC_WEAK_FUNC(sub_820D7A98);
PPC_FUNC_IMPL(__imp__sub_820D7A98) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// addi r8,r11,308
	ctx.r8.s64 = ctx.r11.s64 + 308;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
loc_820D7AF4:
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r5,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r4.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r3,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r3.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r6,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// lwz r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r5,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// lwz r4,20(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r3,36(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,44(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x820d7af4
	if (!ctx.cr0.eq) goto loc_820D7AF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7B68"))) PPC_WEAK_FUNC(sub_820D7B68);
PPC_FUNC_IMPL(__imp__sub_820D7B68) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// addi r8,r11,308
	ctx.r8.s64 = ctx.r11.s64 + 308;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
loc_820D7BC4:
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,-24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r4,-20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r3,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r5,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r4,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r4.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r3.u32);
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r5,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r5.u32);
	// bne 0x820d7bc4
	if (!ctx.cr0.eq) goto loc_820D7BC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7C38"))) PPC_WEAK_FUNC(sub_820D7C38);
PPC_FUNC_IMPL(__imp__sub_820D7C38) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// b 0x8221e150
	sub_8221E150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7C80"))) PPC_WEAK_FUNC(sub_820D7C80);
PPC_FUNC_IMPL(__imp__sub_820D7C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7C84"))) PPC_WEAK_FUNC(sub_820D7C84);
PPC_FUNC_IMPL(__imp__sub_820D7C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7C88"))) PPC_WEAK_FUNC(sub_820D7C88);
PPC_FUNC_IMPL(__imp__sub_820D7C88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// b 0x8221e2c8
	sub_8221E2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7CD0"))) PPC_WEAK_FUNC(sub_820D7CD0);
PPC_FUNC_IMPL(__imp__sub_820D7CD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7CD4"))) PPC_WEAK_FUNC(sub_820D7CD4);
PPC_FUNC_IMPL(__imp__sub_820D7CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7CD8"))) PPC_WEAK_FUNC(sub_820D7CD8);
PPC_FUNC_IMPL(__imp__sub_820D7CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mulli r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 * 92;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lfs f11,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f5,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fadds f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7D70"))) PPC_WEAK_FUNC(sub_820D7D70);
PPC_FUNC_IMPL(__imp__sub_820D7D70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d7db8
	if (ctx.cr6.eq) goto loc_820D7DB8;
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bge cr6,0x820d7db8
	if (!ctx.cr6.lt) goto loc_820D7DB8;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,4760
	ctx.r10.s64 = ctx.r10.s64 + 4760;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820d7db8
	if (!ctx.cr6.eq) goto loc_820D7DB8;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d7dc0
	if (!ctx.cr6.eq) goto loc_820D7DC0;
loc_820D7DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D7DC0:
	// lwz r3,312(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// addi r7,r10,308
	ctx.r7.s64 = ctx.r10.s64 + 308;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_820D7DD8:
	// lwz r8,20(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,92
	ctx.r9.s64 = ctx.r9.s64 + 92;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x820d7dd8
	if (!ctx.cr0.eq) goto loc_820D7DD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7E0C"))) PPC_WEAK_FUNC(sub_820D7E0C);
PPC_FUNC_IMPL(__imp__sub_820D7E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7E10"))) PPC_WEAK_FUNC(sub_820D7E10);
PPC_FUNC_IMPL(__imp__sub_820D7E10) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwz r11,412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82210370
	sub_82210370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7E68"))) PPC_WEAK_FUNC(sub_820D7E68);
PPC_FUNC_IMPL(__imp__sub_820D7E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7E6C"))) PPC_WEAK_FUNC(sub_820D7E6C);
PPC_FUNC_IMPL(__imp__sub_820D7E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7E70"))) PPC_WEAK_FUNC(sub_820D7E70);
PPC_FUNC_IMPL(__imp__sub_820D7E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D7E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82227070
	ctx.lr = 0x820D7E94;
	sub_82227070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d7ef4
	if (ctx.cr6.eq) goto loc_820D7EF4;
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
	ctx.lr = 0x820D7EB8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d7ef4
	if (ctx.cr6.eq) goto loc_820D7EF4;
loc_820D7EC4:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// beq cr6,0x820d7f00
	if (ctx.cr6.eq) goto loc_820D7F00;
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
	ctx.lr = 0x820D7EE8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d7ec4
	if (!ctx.cr6.eq) goto loc_820D7EC4;
loc_820D7EF4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D7F00:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d7ef4
	if (ctx.cr6.eq) goto loc_820D7EF4;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x820d7ef4
	if (!ctx.cr6.gt) goto loc_820D7EF4;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r11,r28,960
	ctx.r11.s64 = ctx.r28.s64 * 960;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d7ef4
	if (ctx.cr6.eq) goto loc_820D7EF4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5238
	ctx.lr = 0x820D7F48;
	sub_820E5238(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d7ef4
	if (ctx.cr6.eq) goto loc_820D7EF4;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x820d7f68
	if (ctx.cr6.lt) goto loc_820D7F68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d7f98
	goto loc_820D7F98;
loc_820D7F68:
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820d7f90
	if (ctx.cr6.eq) goto loc_820D7F90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820d7f98
	goto loc_820D7F98;
loc_820D7F90:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_820D7F98:
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addi r11,r3,156
	ctx.r11.s64 = ctx.r3.s64 + 156;
	// stw r31,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d7fc4
	if (!ctx.cr6.eq) goto loc_820D7FC4;
	// stw r31,-620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -620, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82210370
	ctx.lr = 0x820D7FB8;
	sub_82210370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D7FC4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820d7ff0
	if (!ctx.cr6.eq) goto loc_820D7FF0;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d7ff0
	if (ctx.cr6.eq) goto loc_820D7FF0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D7FE4:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r31,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r31.u32);
	// bdnz 0x820d7fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D7FE4;
loc_820D7FF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82210370
	ctx.lr = 0x820D7FF8;
	sub_82210370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8004"))) PPC_WEAK_FUNC(sub_820D8004);
PPC_FUNC_IMPL(__imp__sub_820D8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8008"))) PPC_WEAK_FUNC(sub_820D8008);
PPC_FUNC_IMPL(__imp__sub_820D8008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
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
	// lwz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// lfs f0,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x820d8084
	if (!ctx.cr6.eq) goto loc_820D8084;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 * 92;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,60(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,64(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 64, temp.u32);
	// blr 
	return;
loc_820D8084:
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 * 92;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f1,60(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,64(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D80A8"))) PPC_WEAK_FUNC(sub_820D80A8);
PPC_FUNC_IMPL(__imp__sub_820D80A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d80ec
	if (ctx.cr6.eq) goto loc_820D80EC;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d80ec
	if (!ctx.cr6.lt) goto loc_820D80EC;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d80ec
	if (!ctx.cr6.eq) goto loc_820D80EC;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d80fc
	if (!ctx.cr6.eq) goto loc_820D80FC;
loc_820D80EC:
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
loc_820D80FC:
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mulli r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 * 92;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8110"))) PPC_WEAK_FUNC(sub_820D8110);
PPC_FUNC_IMPL(__imp__sub_820D8110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x820d8188
	if (ctx.cr6.eq) goto loc_820D8188;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d8188
	if (!ctx.cr6.lt) goto loc_820D8188;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d8188
	if (!ctx.cr6.eq) goto loc_820D8188;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d8188
	if (ctx.cr6.eq) goto loc_820D8188;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D8180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 | ctx.r30.u64;
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
loc_820D8188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D81A0"))) PPC_WEAK_FUNC(sub_820D81A0);
PPC_FUNC_IMPL(__imp__sub_820D81A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x820d8218
	if (ctx.cr6.eq) goto loc_820D8218;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d8218
	if (!ctx.cr6.lt) goto loc_820D8218;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d8218
	if (!ctx.cr6.eq) goto loc_820D8218;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d8218
	if (ctx.cr6.eq) goto loc_820D8218;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D8210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 | ctx.r30.u64;
	// stw r9,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r9.u32);
loc_820D8218:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8230"))) PPC_WEAK_FUNC(sub_820D8230);
PPC_FUNC_IMPL(__imp__sub_820D8230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x820d82a8
	if (ctx.cr6.eq) goto loc_820D82A8;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d82a8
	if (!ctx.cr6.lt) goto loc_820D82A8;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d82a8
	if (!ctx.cr6.eq) goto loc_820D82A8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d82a8
	if (ctx.cr6.eq) goto loc_820D82A8;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D82A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// andc r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r30.u64;
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
loc_820D82A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D82C0"))) PPC_WEAK_FUNC(sub_820D82C0);
PPC_FUNC_IMPL(__imp__sub_820D82C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x820d8338
	if (ctx.cr6.eq) goto loc_820D8338;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d8338
	if (!ctx.cr6.lt) goto loc_820D8338;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d8338
	if (!ctx.cr6.eq) goto loc_820D8338;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d8338
	if (ctx.cr6.eq) goto loc_820D8338;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D8330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// andc r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r30.u64;
	// stw r9,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r9.u32);
loc_820D8338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8350"))) PPC_WEAK_FUNC(sub_820D8350);
PPC_FUNC_IMPL(__imp__sub_820D8350) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d8394
	if (ctx.cr6.eq) goto loc_820D8394;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d8394
	if (!ctx.cr6.lt) goto loc_820D8394;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d8394
	if (!ctx.cr6.eq) goto loc_820D8394;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d839c
	if (!ctx.cr6.eq) goto loc_820D839C;
loc_820D8394:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D839C:
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D83B0"))) PPC_WEAK_FUNC(sub_820D83B0);
PPC_FUNC_IMPL(__imp__sub_820D83B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d83f4
	if (ctx.cr6.eq) goto loc_820D83F4;
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x820d83f4
	if (!ctx.cr6.lt) goto loc_820D83F4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d83f4
	if (!ctx.cr6.eq) goto loc_820D83F4;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d83fc
	if (!ctx.cr6.eq) goto loc_820D83FC;
loc_820D83F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D83FC:
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D8410"))) PPC_WEAK_FUNC(sub_820D8410);
PPC_FUNC_IMPL(__imp__sub_820D8410) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,4536
	ctx.r10.s64 = ctx.r11.s64 + 4536;
	// lwz r11,1804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1804);
	// beq cr6,0x820d8434
	if (ctx.cr6.eq) goto loc_820D8434;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,1804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1804, ctx.r11.u32);
	// blr 
	return;
loc_820D8434:
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,1804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8440"))) PPC_WEAK_FUNC(sub_820D8440);
PPC_FUNC_IMPL(__imp__sub_820D8440) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820D8448;
	__savegprlr_14(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,30312
	ctx.r11.s64 = ctx.r11.s64 + 30312;
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
	// addi r10,r10,30232
	ctx.r10.s64 = ctx.r10.s64 + 30232;
	// addi r9,r9,30320
	ctx.r9.s64 = ctx.r9.s64 + 30320;
	// addi r8,r8,30400
	ctx.r8.s64 = ctx.r8.s64 + 30400;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r7,r7,30544
	ctx.r7.s64 = ctx.r7.s64 + 30544;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r6,r6,30680
	ctx.r6.s64 = ctx.r6.s64 + 30680;
	// addi r5,r5,30760
	ctx.r5.s64 = ctx.r5.s64 + 30760;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r4,r4,31592
	ctx.r4.s64 = ctx.r4.s64 + 31592;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r11,r31,31384
	ctx.r11.s64 = ctx.r31.s64 + 31384;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// addi r10,r30,30848
	ctx.r10.s64 = ctx.r30.s64 + 30848;
	// addi r9,r29,31208
	ctx.r9.s64 = ctx.r29.s64 + 31208;
	// addi r8,r28,31800
	ctx.r8.s64 = ctx.r28.s64 + 31800;
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// addi r7,r27,31880
	ctx.r7.s64 = ctx.r27.s64 + 31880;
	// addi r6,r26,31960
	ctx.r6.s64 = ctx.r26.s64 + 31960;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-32760
	ctx.r5.s64 = ctx.r25.s64 + -32760;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// addi r4,r24,-32600
	ctx.r4.s64 = ctx.r24.s64 + -32600;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// addi r11,r23,32368
	ctx.r11.s64 = ctx.r23.s64 + 32368;
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lis r20,-32242
	ctx.r20.s64 = -2113011712;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lis r19,-32242
	ctx.r19.s64 = -2113011712;
	// lis r18,-32242
	ctx.r18.s64 = -2113011712;
	// lis r17,-32242
	ctx.r17.s64 = -2113011712;
	// lis r16,-32242
	ctx.r16.s64 = -2113011712;
	// lis r15,-32242
	ctx.r15.s64 = -2113011712;
	// addi r10,r22,32272
	ctx.r10.s64 = ctx.r22.s64 + 32272;
	// addi r9,r21,32112
	ctx.r9.s64 = ctx.r21.s64 + 32112;
	// addi r8,r20,-32496
	ctx.r8.s64 = ctx.r20.s64 + -32496;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-32208
	ctx.r7.s64 = ctx.r19.s64 + -32208;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// addi r6,r18,-31920
	ctx.r6.s64 = ctx.r18.s64 + -31920;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// addi r5,r17,-32352
	ctx.r5.s64 = ctx.r17.s64 + -32352;
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// addi r4,r16,-32064
	ctx.r4.s64 = ctx.r16.s64 + -32064;
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// addi r11,r15,-31824
	ctx.r11.s64 = ctx.r15.s64 + -31824;
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// addi r9,r10,31024
	ctx.r9.s64 = ctx.r10.s64 + 31024;
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// addi r8,r14,31112
	ctx.r8.s64 = ctx.r14.s64 + 31112;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// addi r6,r7,-31728
	ctx.r6.s64 = ctx.r7.s64 + -31728;
	// stw r6,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r6.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D85A4"))) PPC_WEAK_FUNC(sub_820D85A4);
PPC_FUNC_IMPL(__imp__sub_820D85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D85A8"))) PPC_WEAK_FUNC(sub_820D85A8);
PPC_FUNC_IMPL(__imp__sub_820D85A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82308d00
	sub_82308D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D85AC"))) PPC_WEAK_FUNC(sub_820D85AC);
PPC_FUNC_IMPL(__imp__sub_820D85AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D85B0"))) PPC_WEAK_FUNC(sub_820D85B0);
PPC_FUNC_IMPL(__imp__sub_820D85B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8233d078
	sub_8233D078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D85BC"))) PPC_WEAK_FUNC(sub_820D85BC);
PPC_FUNC_IMPL(__imp__sub_820D85BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D85C0"))) PPC_WEAK_FUNC(sub_820D85C0);
PPC_FUNC_IMPL(__imp__sub_820D85C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,65504
	ctx.r8.u64 = ctx.r10.u64 | 65504;
loc_820D85DC:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x820d85f0
	if (ctx.cr6.lt) goto loc_820D85F0;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x820d85f4
	if (!ctx.cr6.gt) goto loc_820D85F4;
loc_820D85F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820D85F4:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// blt cr6,0x820d860c
	if (ctx.cr6.lt) goto loc_820D860C;
	// cmplwi cr6,r11,253
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 253, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x820d8610
	if (!ctx.cr6.gt) goto loc_820D8610;
loc_820D860C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820D8610:
	// addi r11,r11,-247
	ctx.r11.s64 = ctx.r11.s64 + -247;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// subfe r5,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d8640
	if (ctx.cr6.eq) goto loc_820D8640;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
loc_820D8640:
	// lhzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d85dc
	if (!ctx.cr6.eq) goto loc_820D85DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8650"))) PPC_WEAK_FUNC(sub_820D8650);
PPC_FUNC_IMPL(__imp__sub_820D8650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820D8664:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x820d8678
	if (ctx.cr6.lt) goto loc_820D8678;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x820d867c
	if (!ctx.cr6.gt) goto loc_820D867C;
loc_820D8678:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820D867C:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// blt cr6,0x820d8694
	if (ctx.cr6.lt) goto loc_820D8694;
	// cmplwi cr6,r11,221
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 221, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x820d8698
	if (!ctx.cr6.gt) goto loc_820D8698;
loc_820D8694:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820D8698:
	// addi r11,r11,-215
	ctx.r11.s64 = ctx.r11.s64 + -215;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// subfe r6,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820d86c8
	if (ctx.cr6.eq) goto loc_820D86C8;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
loc_820D86C8:
	// lhzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d8664
	if (!ctx.cr6.eq) goto loc_820D8664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D86D8"))) PPC_WEAK_FUNC(sub_820D86D8);
PPC_FUNC_IMPL(__imp__sub_820D86D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8233d0f0
	sub_8233D0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D86E4"))) PPC_WEAK_FUNC(sub_820D86E4);
PPC_FUNC_IMPL(__imp__sub_820D86E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D86E8"))) PPC_WEAK_FUNC(sub_820D86E8);
PPC_FUNC_IMPL(__imp__sub_820D86E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_820D8700:
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
	// bne cr6,0x820d8700
	if (!ctx.cr6.eq) goto loc_820D8700;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D871C"))) PPC_WEAK_FUNC(sub_820D871C);
PPC_FUNC_IMPL(__imp__sub_820D871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8720"))) PPC_WEAK_FUNC(sub_820D8720);
PPC_FUNC_IMPL(__imp__sub_820D8720) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8233c048
	sub_8233C048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8734"))) PPC_WEAK_FUNC(sub_820D8734);
PPC_FUNC_IMPL(__imp__sub_820D8734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8738"))) PPC_WEAK_FUNC(sub_820D8738);
PPC_FUNC_IMPL(__imp__sub_820D8738) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8778
	if (ctx.cr6.eq) goto loc_820D8778;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d8778
	if (ctx.cr6.eq) goto loc_820D8778;
loc_820D8750:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d8750
	if (ctx.cr6.eq) goto loc_820D8750;
	// blr 
	return;
loc_820D8778:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8780"))) PPC_WEAK_FUNC(sub_820D8780);
PPC_FUNC_IMPL(__imp__sub_820D8780) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d878c
	if (!ctx.cr6.eq) goto loc_820D878C;
	// blr 
	return;
loc_820D878C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820D8790:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d8790
	if (!ctx.cr6.eq) goto loc_820D8790;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D87B0"))) PPC_WEAK_FUNC(sub_820D87B0);
PPC_FUNC_IMPL(__imp__sub_820D87B0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d880c
	if (ctx.cr6.eq) goto loc_820D880C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d880c
	if (ctx.cr6.eq) goto loc_820D880C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233ce00
	ctx.lr = 0x820D87FC;
	sub_8233CE00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D880C:
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

__attribute__((alias("__imp__sub_820D8820"))) PPC_WEAK_FUNC(sub_820D8820);
PPC_FUNC_IMPL(__imp__sub_820D8820) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8834
	if (ctx.cr6.eq) goto loc_820D8834;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d8834
	if (ctx.cr6.eq) goto loc_820D8834;
	// b 0x8233ce00
	sub_8233CE00(ctx, base);
	return;
loc_820D8834:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D883C"))) PPC_WEAK_FUNC(sub_820D883C);
PPC_FUNC_IMPL(__imp__sub_820D883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8840"))) PPC_WEAK_FUNC(sub_820D8840);
PPC_FUNC_IMPL(__imp__sub_820D8840) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d884c
	if (!ctx.cr6.eq) goto loc_820D884C;
	// blr 
	return;
loc_820D884C:
	// b 0x8233d168
	sub_8233D168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8850"))) PPC_WEAK_FUNC(sub_820D8850);
PPC_FUNC_IMPL(__imp__sub_820D8850) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d8880
	if (!ctx.cr6.eq) goto loc_820D8880;
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
loc_820D8880:
	// bl 0x8233d238
	ctx.lr = 0x820D8884;
	sub_8233D238(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8898"))) PPC_WEAK_FUNC(sub_820D8898);
PPC_FUNC_IMPL(__imp__sub_820D8898) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d88d4
	if (!ctx.cr6.eq) goto loc_820D88D4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D88D4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820d88f8
	ctx.lr = 0x820D88E8;
	sub_820D88F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D88F8"))) PPC_WEAK_FUNC(sub_820D88F8);
PPC_FUNC_IMPL(__imp__sub_820D88F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D8900;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d895c
	if (ctx.cr6.eq) goto loc_820D895C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d9148
	ctx.lr = 0x820D8924;
	sub_820D9148(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82181480
	ctx.lr = 0x820D8948;
	sub_82181480(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x820d8968
	if (!ctx.cr6.gt) goto loc_820D8968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d91e0
	ctx.lr = 0x820D895C;
	sub_820D91E0(ctx, base);
loc_820D895C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D8968:
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D8978;
	sub_8233E4E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d91e0
	ctx.lr = 0x820D8980;
	sub_820D91E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D898C"))) PPC_WEAK_FUNC(sub_820D898C);
PPC_FUNC_IMPL(__imp__sub_820D898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8990"))) PPC_WEAK_FUNC(sub_820D8990);
PPC_FUNC_IMPL(__imp__sub_820D8990) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d89cc
	if (!ctx.cr6.eq) goto loc_820D89CC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D89CC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820d89f0
	ctx.lr = 0x820D89E0;
	sub_820D89F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D89F0"))) PPC_WEAK_FUNC(sub_820D89F0);
PPC_FUNC_IMPL(__imp__sub_820D89F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D89F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8a54
	if (ctx.cr6.eq) goto loc_820D8A54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d9148
	ctx.lr = 0x820D8A1C;
	sub_820D9148(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82181480
	ctx.lr = 0x820D8A40;
	sub_82181480(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x820d8a60
	if (!ctx.cr6.gt) goto loc_820D8A60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d91e0
	ctx.lr = 0x820D8A54;
	sub_820D91E0(ctx, base);
loc_820D8A54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D8A60:
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D8A70;
	sub_8233E4E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d91e0
	ctx.lr = 0x820D8A78;
	sub_820D91E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8A84"))) PPC_WEAK_FUNC(sub_820D8A84);
PPC_FUNC_IMPL(__imp__sub_820D8A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8A88"))) PPC_WEAK_FUNC(sub_820D8A88);
PPC_FUNC_IMPL(__imp__sub_820D8A88) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d8ac4
	if (!ctx.cr6.eq) goto loc_820D8AC4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D8AC4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820d8ae8
	ctx.lr = 0x820D8AD8;
	sub_820D8AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8AE8"))) PPC_WEAK_FUNC(sub_820D8AE8);
PPC_FUNC_IMPL(__imp__sub_820D8AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D8AF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8b44
	if (ctx.cr6.eq) goto loc_820D8B44;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820d8b44
	if (ctx.cr6.eq) goto loc_820D8B44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d9148
	ctx.lr = 0x820D8B1C;
	sub_820D9148(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82181608
	ctx.lr = 0x820D8B30;
	sub_82181608(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x820d8b50
	if (!ctx.cr6.gt) goto loc_820D8B50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d91e0
	ctx.lr = 0x820D8B44;
	sub_820D91E0(ctx, base);
loc_820D8B44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D8B50:
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D8B60;
	sub_8233E4E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d91e0
	ctx.lr = 0x820D8B68;
	sub_820D91E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8B74"))) PPC_WEAK_FUNC(sub_820D8B74);
PPC_FUNC_IMPL(__imp__sub_820D8B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8B78"))) PPC_WEAK_FUNC(sub_820D8B78);
PPC_FUNC_IMPL(__imp__sub_820D8B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D8B80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d8ba0
	if (!ctx.cr6.eq) goto loc_820D8BA0;
loc_820D8B94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D8BA0:
	// srawi r11,r5,20
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 20;
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// clrlwi r4,r10,28
	ctx.r4.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d8bcc
	if (!ctx.cr6.eq) goto loc_820D8BCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8208cc18
	ctx.lr = 0x820D8BC8;
	sub_8208CC18(ctx, base);
	// b 0x820d8c10
	goto loc_820D8C10;
loc_820D8BCC:
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820d8bf0
	if (!ctx.cr6.lt) goto loc_820D8BF0;
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
	// bne cr6,0x820d8c04
	if (!ctx.cr6.eq) goto loc_820D8C04;
loc_820D8BF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820D8C04:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821aaea8
	ctx.lr = 0x820D8C10;
	sub_821AAEA8(ctx, base);
loc_820D8C10:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8bf0
	if (ctx.cr6.eq) goto loc_820D8BF0;
	// bl 0x8233d240
	ctx.lr = 0x820D8C20;
	sub_8233D240(ctx, base);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x820d8b94
	if (!ctx.cr6.lt) goto loc_820D8B94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233d268
	ctx.lr = 0x820D8C38;
	sub_8233D268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8C44"))) PPC_WEAK_FUNC(sub_820D8C44);
PPC_FUNC_IMPL(__imp__sub_820D8C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8C48"))) PPC_WEAK_FUNC(sub_820D8C48);
PPC_FUNC_IMPL(__imp__sub_820D8C48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8233d268
	sub_8233D268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8C5C"))) PPC_WEAK_FUNC(sub_820D8C5C);
PPC_FUNC_IMPL(__imp__sub_820D8C5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8C60"))) PPC_WEAK_FUNC(sub_820D8C60);
PPC_FUNC_IMPL(__imp__sub_820D8C60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8233d288
	sub_8233D288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8C74"))) PPC_WEAK_FUNC(sub_820D8C74);
PPC_FUNC_IMPL(__imp__sub_820D8C74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8C78"))) PPC_WEAK_FUNC(sub_820D8C78);
PPC_FUNC_IMPL(__imp__sub_820D8C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d8d4c
	if (ctx.cr6.eq) goto loc_820D8D4C;
	// lis r9,511
	ctx.r9.s64 = 33488896;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
loc_820D8CA4:
	// cmplwi cr6,r11,57344
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57344, ctx.xer);
	// blt cr6,0x820d8cb4
	if (ctx.cr6.lt) goto loc_820D8CB4;
	// cmplwi cr6,r11,57358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57358, ctx.xer);
	// ble cr6,0x820d8d3c
	if (!ctx.cr6.gt) goto loc_820D8D3C;
loc_820D8CB4:
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x820d8d4c
	if (ctx.cr6.gt) goto loc_820D8D4C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d8cd0
	if (!ctx.cr6.eq) goto loc_820D8CD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820d8d34
	goto loc_820D8D34;
loc_820D8CD0:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x820d8ce8
	if (!ctx.cr6.lt) goto loc_820D8CE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// b 0x820d8d34
	goto loc_820D8D34;
loc_820D8CE8:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// rlwimi r11,r9,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// bge cr6,0x820d8d10
	if (!ctx.cr6.lt) goto loc_820D8D10;
	// li r7,-64
	ctx.r7.s64 = -64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r7,r10,26,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// stb r6,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r6.u8);
	// b 0x820d8d34
	goto loc_820D8D34;
loc_820D8D10:
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r6,-128
	ctx.r6.s64 = -128;
	// rlwimi r7,r10,20,28,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r6,r10,26,26,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x3F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// stb r6,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r6.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
loc_820D8D34:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_820D8D3C:
	// lhzu r10,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d8ca4
	if (!ctx.cr6.eq) goto loc_820D8CA4;
loc_820D8D4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8D58"))) PPC_WEAK_FUNC(sub_820D8D58);
PPC_FUNC_IMPL(__imp__sub_820D8D58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8d6c
	if (ctx.cr6.eq) goto loc_820D8D6C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d8d6c
	if (ctx.cr6.eq) goto loc_820D8D6C;
	// b 0x8233d2e8
	sub_8233D2E8(ctx, base);
	return;
loc_820D8D6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8D74"))) PPC_WEAK_FUNC(sub_820D8D74);
PPC_FUNC_IMPL(__imp__sub_820D8D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8D78"))) PPC_WEAK_FUNC(sub_820D8D78);
PPC_FUNC_IMPL(__imp__sub_820D8D78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d8d84
	if (!ctx.cr6.eq) goto loc_820D8D84;
	// blr 
	return;
loc_820D8D84:
	// b 0x8233d240
	sub_8233D240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8D88"))) PPC_WEAK_FUNC(sub_820D8D88);
PPC_FUNC_IMPL(__imp__sub_820D8D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D8D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d8ff0
	if (ctx.cr6.eq) goto loc_820D8FF0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d8ff0
	if (ctx.cr6.eq) goto loc_820D8FF0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d8eec
	if (ctx.cr6.eq) goto loc_820D8EEC;
	// addi r9,r31,-2
	ctx.r9.s64 = ctx.r31.s64 + -2;
loc_820D8DCC:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x820d8ecc
	if (!ctx.cr6.eq) goto loc_820D8ECC;
	// lhz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// beq cr6,0x820d8ec8
	if (ctx.cr6.eq) goto loc_820D8EC8;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x820d8ee0
	if (!ctx.cr6.eq) goto loc_820D8EE0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d8e54
	if (ctx.cr6.eq) goto loc_820D8E54;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x820d8e44
	if (ctx.cr6.eq) goto loc_820D8E44;
loc_820D8E0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d8e44
	if (ctx.cr6.eq) goto loc_820D8E44;
	// lhz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d8ff0
	if (ctx.cr6.eq) goto loc_820D8FF0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne cr6,0x820d8e40
	if (!ctx.cr6.eq) goto loc_820D8E40;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x820d8e0c
	if (!ctx.cr6.eq) goto loc_820D8E0C;
	// b 0x820d8e44
	goto loc_820D8E44;
loc_820D8E40:
	// li r7,1
	ctx.r7.s64 = 1;
loc_820D8E44:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d8eec
	if (!ctx.cr6.eq) goto loc_820D8EEC;
	// b 0x820d8ecc
	goto loc_820D8ECC;
loc_820D8E54:
	// lhz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// blt cr6,0x820d8e68
	if (ctx.cr6.lt) goto loc_820D8E68;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// ble cr6,0x820d8e80
	if (!ctx.cr6.gt) goto loc_820D8E80;
loc_820D8E68:
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// blt cr6,0x820d8e78
	if (ctx.cr6.lt) goto loc_820D8E78;
	// cmplwi cr6,r10,122
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 122, ctx.xer);
	// ble cr6,0x820d8e80
	if (!ctx.cr6.gt) goto loc_820D8E80;
loc_820D8E78:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x820d8e54
	goto loc_820D8E54;
loc_820D8E80:
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x820d8e94
	if (ctx.cr6.lt) goto loc_820D8E94;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x820d8eac
	if (!ctx.cr6.gt) goto loc_820D8EAC;
loc_820D8E94:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x820d8ea4
	if (ctx.cr6.lt) goto loc_820D8EA4;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// ble cr6,0x820d8eac
	if (!ctx.cr6.gt) goto loc_820D8EAC;
loc_820D8EA4:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// b 0x820d8e80
	goto loc_820D8E80;
loc_820D8EAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d8ee8
	if (ctx.cr6.eq) goto loc_820D8EE8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d8ee8
	if (ctx.cr6.eq) goto loc_820D8EE8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820d8ee8
	if (!ctx.cr6.eq) goto loc_820D8EE8;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
loc_820D8EC8:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_820D8ECC:
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d8dcc
	if (!ctx.cr6.eq) goto loc_820D8DCC;
	// b 0x820d8eec
	goto loc_820D8EEC;
loc_820D8EE0:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// b 0x820d8eec
	goto loc_820D8EEC;
loc_820D8EE8:
	// li r7,1
	ctx.r7.s64 = 1;
loc_820D8EEC:
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d8f10
	if (!ctx.cr6.eq) goto loc_820D8F10;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d8f10
	if (!ctx.cr6.eq) goto loc_820D8F10;
loc_820D8F04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D8F10:
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D8F28:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820d8f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D8F28;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82181cd8
	ctx.lr = 0x820D8F3C;
	sub_82181CD8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820d8ff0
	if (ctx.cr6.eq) goto loc_820D8FF0;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d8fe8
	if (ctx.cr6.eq) goto loc_820D8FE8;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
loc_820D8F64:
	// lhzu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d8fd0
	if (!ctx.cr6.eq) goto loc_820D8FD0;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d8fc8
	if (ctx.cr6.eq) goto loc_820D8FC8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820d8fcc
	if (!ctx.cr6.lt) goto loc_820D8FCC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
loc_820D8FA0:
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820d8ff0
	if (ctx.cr6.eq) goto loc_820D8FF0;
	// lwzu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820d8ff0
	if (!ctx.cr6.eq) goto loc_820D8FF0;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820d8fa0
	if (ctx.cr6.lt) goto loc_820D8FA0;
loc_820D8FC8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
loc_820D8FCC:
	// beq cr6,0x820d8f04
	if (ctx.cr6.eq) goto loc_820D8F04;
loc_820D8FD0:
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820d8f64
	if (!ctx.cr6.eq) goto loc_820D8F64;
loc_820D8FE8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820d8f04
	if (ctx.cr6.eq) goto loc_820D8F04;
loc_820D8FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D8FFC"))) PPC_WEAK_FUNC(sub_820D8FFC);
PPC_FUNC_IMPL(__imp__sub_820D8FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9000"))) PPC_WEAK_FUNC(sub_820D9000);
PPC_FUNC_IMPL(__imp__sub_820D9000) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820D9008;
	__savegprlr_14(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-30944
	ctx.r10.s64 = ctx.r10.s64 + -30944;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// addi r9,r9,-30920
	ctx.r9.s64 = ctx.r9.s64 + -30920;
	// addi r8,r8,-30848
	ctx.r8.s64 = ctx.r8.s64 + -30848;
	// addi r7,r7,-31312
	ctx.r7.s64 = ctx.r7.s64 + -31312;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r6,r6,-31016
	ctx.r6.s64 = ctx.r6.s64 + -31016;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r5,r5,-29624
	ctx.r5.s64 = ctx.r5.s64 + -29624;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r4,r4,-29600
	ctx.r4.s64 = ctx.r4.s64 + -29600;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r11,r31,-29352
	ctx.r11.s64 = ctx.r31.s64 + -29352;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// addi r10,r30,-29320
	ctx.r10.s64 = ctx.r30.s64 + -29320;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// lis r23,-32242
	ctx.r23.s64 = -2113011712;
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// addi r9,r29,-31296
	ctx.r9.s64 = ctx.r29.s64 + -31296;
	// addi r8,r28,-31152
	ctx.r8.s64 = ctx.r28.s64 + -31152;
	// addi r7,r27,-30656
	ctx.r7.s64 = ctx.r27.s64 + -30656;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// addi r6,r26,-30640
	ctx.r6.s64 = ctx.r26.s64 + -30640;
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// addi r5,r25,-30800
	ctx.r5.s64 = ctx.r25.s64 + -30800;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// addi r4,r24,-30688
	ctx.r4.s64 = ctx.r24.s64 + -30688;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// addi r11,r23,-30568
	ctx.r11.s64 = ctx.r23.s64 + -30568;
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// addi r10,r22,-30472
	ctx.r10.s64 = ctx.r22.s64 + -30472;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lis r21,-32242
	ctx.r21.s64 = -2113011712;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lis r20,-32242
	ctx.r20.s64 = -2113011712;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lis r19,-32242
	ctx.r19.s64 = -2113011712;
	// lis r18,-32242
	ctx.r18.s64 = -2113011712;
	// lis r17,-32242
	ctx.r17.s64 = -2113011712;
	// lis r16,-32242
	ctx.r16.s64 = -2113011712;
	// lis r15,-32242
	ctx.r15.s64 = -2113011712;
	// lis r14,-32242
	ctx.r14.s64 = -2113011712;
	// addi r9,r21,-30320
	ctx.r9.s64 = ctx.r21.s64 + -30320;
	// addi r8,r20,-30224
	ctx.r8.s64 = ctx.r20.s64 + -30224;
	// addi r7,r19,-30072
	ctx.r7.s64 = ctx.r19.s64 + -30072;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// addi r6,r18,-29976
	ctx.r6.s64 = ctx.r18.s64 + -29976;
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// addi r5,r17,-29576
	ctx.r5.s64 = ctx.r17.s64 + -29576;
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// addi r4,r16,-31320
	ctx.r4.s64 = ctx.r16.s64 + -31320;
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// addi r11,r15,-29832
	ctx.r11.s64 = ctx.r15.s64 + -29832;
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// addi r10,r14,-29304
	ctx.r10.s64 = ctx.r14.s64 + -29304;
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9144"))) PPC_WEAK_FUNC(sub_820D9144);
PPC_FUNC_IMPL(__imp__sub_820D9144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9148"))) PPC_WEAK_FUNC(sub_820D9148);
PPC_FUNC_IMPL(__imp__sub_820D9148) {
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
	ctx.lr = 0x820D9168;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d9174
	if (!ctx.cr6.eq) goto loc_820D9174;
	// bl 0x821b3000
	ctx.lr = 0x820D9174;
	sub_821B3000(ctx, base);
loc_820D9174:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820d91a8
	if (!ctx.cr6.gt) goto loc_820D91A8;
	// lis r9,-13569
	ctx.r9.s64 = -889257984;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,4492
	ctx.r7.s64 = ctx.r8.s64 + 4492;
	// stw r7,-13570(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13570, ctx.r7.u32);
loc_820D91A8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_820D91E0"))) PPC_WEAK_FUNC(sub_820D91E0);
PPC_FUNC_IMPL(__imp__sub_820D91E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r5,-13569
	ctx.r5.s64 = -889257984;
	// addi r4,r9,15
	ctx.r4.s64 = ctx.r9.s64 + 15;
	// addi r7,r10,4520
	ctx.r7.s64 = ctx.r10.s64 + 4520;
	// rlwinm r10,r4,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x820d9218
	if (!ctx.cr6.gt) goto loc_820D9218;
	// stw r7,-13570(r5)
	PPC_STORE_U32(ctx.r5.u32 + -13570, ctx.r7.u32);
loc_820D9218:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820d9234
	if (ctx.cr6.eq) goto loc_820D9234;
	// stw r7,-13570(r5)
	PPC_STORE_U32(ctx.r5.u32 + -13570, ctx.r7.u32);
loc_820D9234:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9244"))) PPC_WEAK_FUNC(sub_820D9244);
PPC_FUNC_IMPL(__imp__sub_820D9244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9248"))) PPC_WEAK_FUNC(sub_820D9248);
PPC_FUNC_IMPL(__imp__sub_820D9248) {
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
	// bl 0x8233c830
	ctx.lr = 0x820D9258;
	sub_8233C830(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// lwz r11,25376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25376);
	// clrlwi r3,r8,17
	ctx.r3.u64 = ctx.r8.u32 & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,25376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25376, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9284"))) PPC_WEAK_FUNC(sub_820D9284);
PPC_FUNC_IMPL(__imp__sub_820D9284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9288"))) PPC_WEAK_FUNC(sub_820D9288);
PPC_FUNC_IMPL(__imp__sub_820D9288) {
	PPC_FUNC_PROLOGUE();
	// b 0x8233c800
	sub_8233C800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D928C"))) PPC_WEAK_FUNC(sub_820D928C);
PPC_FUNC_IMPL(__imp__sub_820D928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9290"))) PPC_WEAK_FUNC(sub_820D9290);
PPC_FUNC_IMPL(__imp__sub_820D9290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820D9298;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x820d9860
	ctx.lr = 0x820D92C8;
	sub_820D9860(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D92EC;
	sub_8233E4E0(ctx, base);
loc_820D92EC:
	// mullw r11,r29,r31
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x820D9304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9334
	if (ctx.cr6.eq) goto loc_820D9334;
loc_820D9310:
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bctrl 
	ctx.lr = 0x820D9328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d9310
	if (!ctx.cr6.eq) goto loc_820D9310;
loc_820D9334:
	// mullw r11,r30,r31
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x820D934C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9380
	if (ctx.cr6.eq) goto loc_820D9380;
	// neg r27,r31
	ctx.r27.s64 = -ctx.r31.s64;
loc_820D935C:
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bctrl 
	ctx.lr = 0x820D9374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d935c
	if (!ctx.cr6.eq) goto loc_820D935C;
loc_820D9380:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x820d93d8
	if (ctx.cr6.gt) goto loc_820D93D8;
	// mullw r11,r29,r31
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D93A0;
	sub_8233E4E0(ctx, base);
	// mullw r11,r30,r31
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D93B8;
	sub_8233E4E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820D93C8;
	sub_8233E4E0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x820d92ec
	if (!ctx.cr6.gt) goto loc_820D92EC;
loc_820D93D8:
	// cmpw cr6,r22,r30
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x820d93fc
	if (!ctx.cr6.lt) goto loc_820D93FC;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d9290
	ctx.lr = 0x820D93FC;
	sub_820D9290(ctx, base);
loc_820D93FC:
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x820d9420
	if (!ctx.cr6.lt) goto loc_820D9420;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d9290
	ctx.lr = 0x820D9420;
	sub_820D9290(ctx, base);
loc_820D9420:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d91e0
	ctx.lr = 0x820D9428;
	sub_820D91E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9430"))) PPC_WEAK_FUNC(sub_820D9430);
PPC_FUNC_IMPL(__imp__sub_820D9430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D9438;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x820d9484
	if (!ctx.cr6.gt) goto loc_820D9484;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d9860
	ctx.lr = 0x820D9460;
	sub_820D9860(ctx, base);
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d9290
	ctx.lr = 0x820D947C;
	sub_820D9290(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d91e0
	ctx.lr = 0x820D9484;
	sub_820D91E0(ctx, base);
loc_820D9484:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D948C"))) PPC_WEAK_FUNC(sub_820D948C);
PPC_FUNC_IMPL(__imp__sub_820D948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9490"))) PPC_WEAK_FUNC(sub_820D9490);
PPC_FUNC_IMPL(__imp__sub_820D9490) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f57c8
	sub_820F57C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9494"))) PPC_WEAK_FUNC(sub_820D9494);
PPC_FUNC_IMPL(__imp__sub_820D9494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9498"))) PPC_WEAK_FUNC(sub_820D9498);
PPC_FUNC_IMPL(__imp__sub_820D9498) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f58c8
	sub_820F58C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D949C"))) PPC_WEAK_FUNC(sub_820D949C);
PPC_FUNC_IMPL(__imp__sub_820D949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D94A0"))) PPC_WEAK_FUNC(sub_820D94A0);
PPC_FUNC_IMPL(__imp__sub_820D94A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// bge cr6,0x820d94e0
	if (!ctx.cr6.lt) goto loc_820D94E0;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r11,148
	ctx.r7.s64 = ctx.r11.s64 + 148;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820d94e0
	if (!ctx.cr6.eq) goto loc_820D94E0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d94e8
	if (!ctx.cr6.eq) goto loc_820D94E8;
loc_820D94E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D94E8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D94F0"))) PPC_WEAK_FUNC(sub_820D94F0);
PPC_FUNC_IMPL(__imp__sub_820D94F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// bge cr6,0x820d9530
	if (!ctx.cr6.lt) goto loc_820D9530;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r11,148
	ctx.r7.s64 = ctx.r11.s64 + 148;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820d9530
	if (!ctx.cr6.eq) goto loc_820D9530;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d9538
	if (!ctx.cr6.eq) goto loc_820D9538;
loc_820D9530:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D9538:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9540"))) PPC_WEAK_FUNC(sub_820D9540);
PPC_FUNC_IMPL(__imp__sub_820D9540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820D9548;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d9584
	if (!ctx.cr6.eq) goto loc_820D9584;
	// bl 0x820ddca8
	ctx.lr = 0x820D956C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d957c
	if (ctx.cr6.eq) goto loc_820D957C;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820d95a0
	goto loc_820D95A0;
loc_820D957C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820d95a0
	goto loc_820D95A0;
loc_820D9584:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d95b0
	if (!ctx.cr6.eq) goto loc_820D95B0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d964c
	if (ctx.cr6.eq) goto loc_820D964C;
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820D95A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d95d0
	if (ctx.cr6.eq) goto loc_820D95D0;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// b 0x820d95d0
	goto loc_820D95D0;
loc_820D95B0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d964c
	if (ctx.cr6.eq) goto loc_820D964C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820D95CC;
	sub_820F3178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820D95D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d964c
	if (ctx.cr6.eq) goto loc_820D964C;
	// rlwinm r11,r28,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x820d964c
	if (!ctx.cr6.lt) goto loc_820D964C;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r10,-18000
	ctx.r29.s64 = ctx.r10.s64 + -18000;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r7,r29,148
	ctx.r7.s64 = ctx.r29.s64 + 148;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820d964c
	if (!ctx.cr6.eq) goto loc_820D964C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r29,152
	ctx.r10.s64 = ctx.r29.s64 + 152;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d964c
	if (ctx.cr6.eq) goto loc_820D964C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r29,16584
	ctx.r3.s64 = ctx.r29.s64 + 16584;
	// bl 0x823052d8
	ctx.lr = 0x820D9624;
	sub_823052D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r29,16584
	ctx.r3.s64 = ctx.r29.s64 + 16584;
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lbz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 244);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,244(r30)
	PPC_STORE_U8(ctx.r30.u32 + 244, ctx.r8.u8);
	// bl 0x823051a8
	ctx.lr = 0x820D964C;
	sub_823051A8(ctx, base);
loc_820D964C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9654"))) PPC_WEAK_FUNC(sub_820D9654);
PPC_FUNC_IMPL(__imp__sub_820D9654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9658"))) PPC_WEAK_FUNC(sub_820D9658);
PPC_FUNC_IMPL(__imp__sub_820D9658) {
	PPC_FUNC_PROLOGUE();
	// b 0x8233e4e0
	sub_8233E4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D965C"))) PPC_WEAK_FUNC(sub_820D965C);
PPC_FUNC_IMPL(__imp__sub_820D965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9660"))) PPC_WEAK_FUNC(sub_820D9660);
PPC_FUNC_IMPL(__imp__sub_820D9660) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// b 0x8233eaf0
	sub_8233EAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9668"))) PPC_WEAK_FUNC(sub_820D9668);
PPC_FUNC_IMPL(__imp__sub_820D9668) {
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
	ctx.lr = 0x820D9688;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d9694
	if (!ctx.cr6.eq) goto loc_820D9694;
	// bl 0x821b3000
	ctx.lr = 0x820D9694;
	sub_821B3000(ctx, base);
loc_820D9694:
	// addi r10,r31,15
	ctx.r10.s64 = ctx.r31.s64 + 15;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x820d96c4
	if (!ctx.cr6.gt) goto loc_820D96C4;
	// lis r9,-13569
	ctx.r9.s64 = -889257984;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,4492
	ctx.r7.s64 = ctx.r8.s64 + 4492;
	// stw r7,-13570(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13570, ctx.r7.u32);
loc_820D96C4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820D96EC"))) PPC_WEAK_FUNC(sub_820D96EC);
PPC_FUNC_IMPL(__imp__sub_820D96EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D96F0"))) PPC_WEAK_FUNC(sub_820D96F0);
PPC_FUNC_IMPL(__imp__sub_820D96F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D9718;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d9724
	if (!ctx.cr6.eq) goto loc_820D9724;
	// bl 0x821b3000
	ctx.lr = 0x820D9724;
	sub_821B3000(ctx, base);
loc_820D9724:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d977c
	if (ctx.cr6.eq) goto loc_820D977C;
	// addi r10,r31,15
	ctx.r10.s64 = ctx.r31.s64 + 15;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r6,-13569
	ctx.r6.s64 = -889257984;
	// addi r7,r9,4520
	ctx.r7.s64 = ctx.r9.s64 + 4520;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x820d9754
	if (!ctx.cr6.gt) goto loc_820D9754;
	// stw r7,-13570(r6)
	PPC_STORE_U32(ctx.r6.u32 + -13570, ctx.r7.u32);
loc_820D9754:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820d9770
	if (ctx.cr6.eq) goto loc_820D9770;
	// stw r7,-13570(r6)
	PPC_STORE_U32(ctx.r6.u32 + -13570, ctx.r7.u32);
loc_820D9770:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_820D977C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9794"))) PPC_WEAK_FUNC(sub_820D9794);
PPC_FUNC_IMPL(__imp__sub_820D9794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9798"))) PPC_WEAK_FUNC(sub_820D9798);
PPC_FUNC_IMPL(__imp__sub_820D9798) {
	PPC_FUNC_PROLOGUE();
	// b 0x820ddf90
	sub_820DDF90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D979C"))) PPC_WEAK_FUNC(sub_820D979C);
PPC_FUNC_IMPL(__imp__sub_820D979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D97A0"))) PPC_WEAK_FUNC(sub_820D97A0);
PPC_FUNC_IMPL(__imp__sub_820D97A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820D97A8;
	__savegprlr_25(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r11,r11,-28088
	ctx.r11.s64 = ctx.r11.s64 + -28088;
	// addi r10,r10,-28024
	ctx.r10.s64 = ctx.r10.s64 + -28024;
	// addi r9,r9,-27504
	ctx.r9.s64 = ctx.r9.s64 + -27504;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,-31304
	ctx.r8.s64 = ctx.r8.s64 + -31304;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r7,-27504
	ctx.r7.s64 = ctx.r7.s64 + -27504;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r6,r6,-27496
	ctx.r6.s64 = ctx.r6.s64 + -27496;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r5,r5,-27488
	ctx.r5.s64 = ctx.r5.s64 + -27488;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// addi r4,r4,-27408
	ctx.r4.s64 = ctx.r4.s64 + -27408;
	// addi r11,r31,-27328
	ctx.r11.s64 = ctx.r31.s64 + -27328;
	// addi r10,r30,-27048
	ctx.r10.s64 = ctx.r30.s64 + -27048;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// addi r9,r29,-27032
	ctx.r9.s64 = ctx.r29.s64 + -27032;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r8,r28,-26896
	ctx.r8.s64 = ctx.r28.s64 + -26896;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r7,r27,-27040
	ctx.r7.s64 = ctx.r27.s64 + -27040;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// addi r6,r26,-27600
	ctx.r6.s64 = ctx.r26.s64 + -27600;
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// addi r5,r25,-26728
	ctx.r5.s64 = ctx.r25.s64 + -26728;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9860"))) PPC_WEAK_FUNC(sub_820D9860);
PPC_FUNC_IMPL(__imp__sub_820D9860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820D9888;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d9894
	if (!ctx.cr6.eq) goto loc_820D9894;
	// bl 0x821b3000
	ctx.lr = 0x820D9894;
	sub_821B3000(ctx, base);
loc_820D9894:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// addi r10,r30,15
	ctx.r10.s64 = ctx.r30.s64 + 15;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x820d98c8
	if (!ctx.cr6.gt) goto loc_820D98C8;
	// lis r10,-13569
	ctx.r10.s64 = -889257984;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,4492
	ctx.r7.s64 = ctx.r8.s64 + 4492;
	// stw r7,-13570(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13570, ctx.r7.u32);
loc_820D98C8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9900"))) PPC_WEAK_FUNC(sub_820D9900);
PPC_FUNC_IMPL(__imp__sub_820D9900) {
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
	ctx.lr = 0x820D9924;
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
	ctx.lr = 0x820D993C;
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
	ctx.lr = 0x820D9954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D996C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D999C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D99B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D99CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D99E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D99FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D9A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D9A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_820D9A44"))) PPC_WEAK_FUNC(sub_820D9A44);
PPC_FUNC_IMPL(__imp__sub_820D9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9A48"))) PPC_WEAK_FUNC(sub_820D9A48);
PPC_FUNC_IMPL(__imp__sub_820D9A48) {
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
	ctx.lr = 0x820D9A6C;
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
	ctx.lr = 0x820D9A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D9A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D9AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D9AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D9AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D9B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D9B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D9B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D9B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D9BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D9BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D9BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D9C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D9C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D9C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D9C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D9C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D9C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D9CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820D9CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820D9CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_820D9D24"))) PPC_WEAK_FUNC(sub_820D9D24);
PPC_FUNC_IMPL(__imp__sub_820D9D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9D28"))) PPC_WEAK_FUNC(sub_820D9D28);
PPC_FUNC_IMPL(__imp__sub_820D9D28) {
	PPC_FUNC_PROLOGUE();
	// b 0x821cdd50
	sub_821CDD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9D2C"))) PPC_WEAK_FUNC(sub_820D9D2C);
PPC_FUNC_IMPL(__imp__sub_820D9D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9D30"))) PPC_WEAK_FUNC(sub_820D9D30);
PPC_FUNC_IMPL(__imp__sub_820D9D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x822475a8
	sub_822475A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9D34"))) PPC_WEAK_FUNC(sub_820D9D34);
PPC_FUNC_IMPL(__imp__sub_820D9D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9D38"))) PPC_WEAK_FUNC(sub_820D9D38);
PPC_FUNC_IMPL(__imp__sub_820D9D38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82247668
	sub_82247668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9D3C"))) PPC_WEAK_FUNC(sub_820D9D3C);
PPC_FUNC_IMPL(__imp__sub_820D9D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9D40"))) PPC_WEAK_FUNC(sub_820D9D40);
PPC_FUNC_IMPL(__imp__sub_820D9D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x823883f4
	__imp__XNotifyDelayUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9D44"))) PPC_WEAK_FUNC(sub_820D9D44);
PPC_FUNC_IMPL(__imp__sub_820D9D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9D48"))) PPC_WEAK_FUNC(sub_820D9D48);
PPC_FUNC_IMPL(__imp__sub_820D9D48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82388404
	__imp__XNotifyPositionUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9D4C"))) PPC_WEAK_FUNC(sub_820D9D4C);
PPC_FUNC_IMPL(__imp__sub_820D9D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9D50"))) PPC_WEAK_FUNC(sub_820D9D50);
PPC_FUNC_IMPL(__imp__sub_820D9D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820D9D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82082030
	ctx.lr = 0x820D9D74;
	sub_82082030(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-16888
	ctx.r31.s64 = ctx.r11.s64 + -16888;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d9da8
	if (!ctx.cr6.eq) goto loc_820D9DA8;
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820D9DA8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823052d8
	ctx.lr = 0x820D9DB4;
	sub_823052D8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d9ddc
	if (ctx.cr6.eq) goto loc_820D9DDC;
loc_820D9DC8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d9dc8
	if (!ctx.cr6.eq) goto loc_820D9DC8;
loc_820D9DDC:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823051a8
	ctx.lr = 0x820D9DE8;
	sub_823051A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9DF0"))) PPC_WEAK_FUNC(sub_820D9DF0);
PPC_FUNC_IMPL(__imp__sub_820D9DF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82247918
	sub_82247918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9DF4"))) PPC_WEAK_FUNC(sub_820D9DF4);
PPC_FUNC_IMPL(__imp__sub_820D9DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9DF8"))) PPC_WEAK_FUNC(sub_820D9DF8);
PPC_FUNC_IMPL(__imp__sub_820D9DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-16888
	ctx.r10.s64 = ctx.r11.s64 + -16888;
	// stw r3,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r3.u32);
	// b 0x821cc9e8
	sub_821CC9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9E0C"))) PPC_WEAK_FUNC(sub_820D9E0C);
PPC_FUNC_IMPL(__imp__sub_820D9E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9E10"))) PPC_WEAK_FUNC(sub_820D9E10);
PPC_FUNC_IMPL(__imp__sub_820D9E10) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// b 0x822475a8
	sub_822475A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9E20"))) PPC_WEAK_FUNC(sub_820D9E20);
PPC_FUNC_IMPL(__imp__sub_820D9E20) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// b 0x822475a8
	sub_822475A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9E30"))) PPC_WEAK_FUNC(sub_820D9E30);
PPC_FUNC_IMPL(__imp__sub_820D9E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,-16888
	ctx.r11.s64 = ctx.r11.s64 + -16888;
	// addi r9,r11,272
	ctx.r9.s64 = ctx.r11.s64 + 272;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9E48"))) PPC_WEAK_FUNC(sub_820D9E48);
PPC_FUNC_IMPL(__imp__sub_820D9E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820D9E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820d9efc
	if (ctx.cr6.eq) goto loc_820D9EFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82082030
	ctx.lr = 0x820D9E7C;
	sub_82082030(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r30,r10,-16888
	ctx.r30.s64 = ctx.r10.s64 + -16888;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d9ebc
	if (!ctx.cr6.eq) goto loc_820D9EBC;
	// stw r3,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820D9EBC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x823052d8
	ctx.lr = 0x820D9EC8;
	sub_823052D8(ctx, base);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d9ef0
	if (ctx.cr6.eq) goto loc_820D9EF0;
loc_820D9EDC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d9edc
	if (!ctx.cr6.eq) goto loc_820D9EDC;
loc_820D9EF0:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x823051a8
	ctx.lr = 0x820D9EFC;
	sub_823051A8(ctx, base);
loc_820D9EFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9F04"))) PPC_WEAK_FUNC(sub_820D9F04);
PPC_FUNC_IMPL(__imp__sub_820D9F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9F08"))) PPC_WEAK_FUNC(sub_820D9F08);
PPC_FUNC_IMPL(__imp__sub_820D9F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,-16888
	ctx.r11.s64 = ctx.r11.s64 + -16888;
	// addi r9,r11,304
	ctx.r9.s64 = ctx.r11.s64 + 304;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9F24"))) PPC_WEAK_FUNC(sub_820D9F24);
PPC_FUNC_IMPL(__imp__sub_820D9F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9F28"))) PPC_WEAK_FUNC(sub_820D9F28);
PPC_FUNC_IMPL(__imp__sub_820D9F28) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D9F30;
	__savegprlr_26(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// addi r10,r10,-25296
	ctx.r10.s64 = ctx.r10.s64 + -25296;
	// addi r9,r9,-25288
	ctx.r9.s64 = ctx.r9.s64 + -25288;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,-25280
	ctx.r8.s64 = ctx.r8.s64 + -25280;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r7,-25272
	ctx.r7.s64 = ctx.r7.s64 + -25272;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r6,r6,-25264
	ctx.r6.s64 = ctx.r6.s64 + -25264;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// addi r5,r5,-25104
	ctx.r5.s64 = ctx.r5.s64 + -25104;
	// addi r4,r4,-25096
	ctx.r4.s64 = ctx.r4.s64 + -25096;
	// addi r11,r31,-25072
	ctx.r11.s64 = ctx.r31.s64 + -25072;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// addi r10,r30,-25056
	ctx.r10.s64 = ctx.r30.s64 + -25056;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// addi r9,r29,-25040
	ctx.r9.s64 = ctx.r29.s64 + -25040;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// addi r8,r28,-25016
	ctx.r8.s64 = ctx.r28.s64 + -25016;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// addi r7,r27,-6736
	ctx.r7.s64 = ctx.r27.s64 + -6736;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// addi r6,r26,-24824
	ctx.r6.s64 = ctx.r26.s64 + -24824;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D9FDC"))) PPC_WEAK_FUNC(sub_820D9FDC);
PPC_FUNC_IMPL(__imp__sub_820D9FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9FE0"))) PPC_WEAK_FUNC(sub_820D9FE0);
PPC_FUNC_IMPL(__imp__sub_820D9FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820D9FE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,262
	ctx.r6.s64 = 262;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820DA00C;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da0b4
	if (ctx.cr6.eq) goto loc_820DA0B4;
loc_820DA018:
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
	ctx.lr = 0x820DA030;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da090
	if (ctx.cr6.eq) goto loc_820DA090;
loc_820DA03C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x820fb330
	ctx.lr = 0x820DA060;
	sub_820FB330(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820da0c0
	if (!ctx.cr6.eq) goto loc_820DA0C0;
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
	ctx.lr = 0x820DA084;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820da03c
	if (!ctx.cr6.eq) goto loc_820DA03C;
loc_820DA090:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,262
	ctx.r6.s64 = 262;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82085870
	ctx.lr = 0x820DA0A8;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820da018
	if (!ctx.cr6.eq) goto loc_820DA018;
loc_820DA0B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820DA0C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DA0CC"))) PPC_WEAK_FUNC(sub_820DA0CC);
PPC_FUNC_IMPL(__imp__sub_820DA0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA0D0"))) PPC_WEAK_FUNC(sub_820DA0D0);
PPC_FUNC_IMPL(__imp__sub_820DA0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820DA0D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,262
	ctx.r6.s64 = 262;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820DA0F8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da140
	if (ctx.cr6.eq) goto loc_820DA140;
loc_820DA104:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb330
	ctx.lr = 0x820DA110;
	sub_820FB330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820da14c
	if (!ctx.cr6.eq) goto loc_820DA14C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,262
	ctx.r6.s64 = 262;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820DA134;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820da104
	if (!ctx.cr6.eq) goto loc_820DA104;
loc_820DA140:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820DA14C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DA158"))) PPC_WEAK_FUNC(sub_820DA158);
PPC_FUNC_IMPL(__imp__sub_820DA158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DA160;
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
	// bne cr6,0x820da19c
	if (!ctx.cr6.eq) goto loc_820DA19C;
	// bl 0x820ddca8
	ctx.lr = 0x820DA184;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da194
	if (ctx.cr6.eq) goto loc_820DA194;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820da1b8
	goto loc_820DA1B8;
loc_820DA194:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820da1b8
	goto loc_820DA1B8;
loc_820DA19C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820da1e4
	if (!ctx.cr6.eq) goto loc_820DA1E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820da214
	if (ctx.cr6.eq) goto loc_820DA214;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820DA1B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da1d4
	if (ctx.cr6.eq) goto loc_820DA1D4;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-262
	ctx.r10.s64 = ctx.r10.s64 + -262;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820DA1D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820da20c
	if (ctx.cr6.eq) goto loc_820DA20C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820da20c
	goto loc_820DA20C;
loc_820DA1E4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820da1f4
	if (!ctx.cr6.eq) goto loc_820DA1F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820da20c
	goto loc_820DA20C;
loc_820DA1F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,262
	ctx.r6.s64 = 262;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820DA208;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820DA20C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820da234
	if (!ctx.cr6.eq) goto loc_820DA234;
loc_820DA214:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820DA234:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820faa30
	ctx.lr = 0x820DA244;
	sub_820FAA30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DA24C"))) PPC_WEAK_FUNC(sub_820DA24C);
PPC_FUNC_IMPL(__imp__sub_820DA24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA250"))) PPC_WEAK_FUNC(sub_820DA250);
PPC_FUNC_IMPL(__imp__sub_820DA250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DA258;
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
	// bne cr6,0x820da290
	if (!ctx.cr6.eq) goto loc_820DA290;
	// bl 0x820ddca8
	ctx.lr = 0x820DA278;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da288
	if (ctx.cr6.eq) goto loc_820DA288;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820da2ac
	goto loc_820DA2AC;
loc_820DA288:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820da2ac
	goto loc_820DA2AC;
loc_820DA290:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820da2d8
	if (!ctx.cr6.eq) goto loc_820DA2D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820da370
	if (ctx.cr6.eq) goto loc_820DA370;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820DA2AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820da2c8
	if (ctx.cr6.eq) goto loc_820DA2C8;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_820DA2C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820da300
	if (ctx.cr6.eq) goto loc_820DA300;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820da300
	goto loc_820DA300;
loc_820DA2D8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820da2e8
	if (!ctx.cr6.eq) goto loc_820DA2E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820da2fc
	goto loc_820DA2FC;
loc_820DA2E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,262
	ctx.r6.s64 = 262;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820DA2FC;
	sub_820F3178(ctx, base);
loc_820DA2FC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820DA300:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820da370
	if (ctx.cr6.eq) goto loc_820DA370;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// bl 0x82257540
	ctx.lr = 0x820DA318;
	sub_82257540(ctx, base);
	// lfs f13,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fsubs f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmadds f2,f5,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f1,f3,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsqrts f12,f1
	ctx.f12.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f1,f11,f11,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820DA370:
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
}

__attribute__((alias("__imp__sub_820DA384"))) PPC_WEAK_FUNC(sub_820DA384);
PPC_FUNC_IMPL(__imp__sub_820DA384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA388"))) PPC_WEAK_FUNC(sub_820DA388);
PPC_FUNC_IMPL(__imp__sub_820DA388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820DA390;
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
	// bne cr6,0x820da3cc
	if (!ctx.cr6.eq) goto loc_820DA3CC;
	// bl 0x820ddca8
	ctx.lr = 0x820DA3B4;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da3c4
	if (ctx.cr6.eq) goto loc_820DA3C4;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820da3e8
	goto loc_820DA3E8;
loc_820DA3C4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820da3e8
	goto loc_820DA3E8;
loc_820DA3CC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820da414
	if (!ctx.cr6.eq) goto loc_820DA414;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820da490
	if (ctx.cr6.eq) goto loc_820DA490;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820DA3E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820da404
	if (ctx.cr6.eq) goto loc_820DA404;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_820DA404:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820da43c
	if (ctx.cr6.eq) goto loc_820DA43C;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820da43c
	goto loc_820DA43C;
loc_820DA414:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820da424
	if (!ctx.cr6.eq) goto loc_820DA424;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820da438
	goto loc_820DA438;
loc_820DA424:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,262
	ctx.r6.s64 = 262;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820DA438;
	sub_820F3178(ctx, base);
loc_820DA438:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820DA43C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820da490
	if (ctx.cr6.eq) goto loc_820DA490;
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82257540
	ctx.lr = 0x820DA458;
	sub_82257540(ctx, base);
	// lfs f0,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820da480
	if (ctx.cr6.eq) goto loc_820DA480;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_820DA480:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820da490
	if (ctx.cr6.eq) goto loc_820DA490;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_820DA490:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DA498"))) PPC_WEAK_FUNC(sub_820DA498);
PPC_FUNC_IMPL(__imp__sub_820DA498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r6,r11,-24608
	ctx.r6.s64 = ctx.r11.s64 + -24608;
	// addi r5,r10,-24368
	ctx.r5.s64 = ctx.r10.s64 + -24368;
	// addi r4,r9,-23984
	ctx.r4.s64 = ctx.r9.s64 + -23984;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r11,r8,-23672
	ctx.r11.s64 = ctx.r8.s64 + -23672;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r10,r7,-24232
	ctx.r10.s64 = ctx.r7.s64 + -24232;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA4D8"))) PPC_WEAK_FUNC(sub_820DA4D8);
PPC_FUNC_IMPL(__imp__sub_820DA4D8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x820DA4F0;
	sub_82081C00(ctx, base);
	// bl 0x820dc340
	ctx.lr = 0x820DA4F4;
	sub_820DC340(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DA504;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820da518
	if (!ctx.cr6.eq) goto loc_820DA518;
	// bl 0x821b3000
	ctx.lr = 0x820DA514;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820DA518:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820da530
	if (ctx.cr6.eq) goto loc_820DA530;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820DA530:
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

__attribute__((alias("__imp__sub_820DA544"))) PPC_WEAK_FUNC(sub_820DA544);
PPC_FUNC_IMPL(__imp__sub_820DA544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA548"))) PPC_WEAK_FUNC(sub_820DA548);
PPC_FUNC_IMPL(__imp__sub_820DA548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,11565
	ctx.r9.s64 = 757923840;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stfs f13,88(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lfs f13,92(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA604"))) PPC_WEAK_FUNC(sub_820DA604);
PPC_FUNC_IMPL(__imp__sub_820DA604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA608"))) PPC_WEAK_FUNC(sub_820DA608);
PPC_FUNC_IMPL(__imp__sub_820DA608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820dad18
	ctx.lr = 0x820DA624;
	sub_820DAD18(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da65c
	if (ctx.cr6.eq) goto loc_820DA65C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820DA634:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bl 0x820da608
	ctx.lr = 0x820DA650;
	sub_820DA608(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820da634
	if (!ctx.cr6.eq) goto loc_820DA634;
loc_820DA65C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da66c
	if (ctx.cr6.eq) goto loc_820DA66C;
	// bl 0x82172d60
	ctx.lr = 0x820DA66C;
	sub_82172D60(ctx, base);
loc_820DA66C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820de9b8
	ctx.lr = 0x820DA674;
	sub_820DE9B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dc228
	ctx.lr = 0x820DA67C;
	sub_820DC228(ctx, base);
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

__attribute__((alias("__imp__sub_820DA698"))) PPC_WEAK_FUNC(sub_820DA698);
PPC_FUNC_IMPL(__imp__sub_820DA698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820DA6A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820da6cc
	if (!ctx.cr6.eq) goto loc_820DA6CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820DA6C8;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820DA6CC:
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820dda28
	ctx.lr = 0x820DA6EC;
	sub_820DDA28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DA6F4"))) PPC_WEAK_FUNC(sub_820DA6F4);
PPC_FUNC_IMPL(__imp__sub_820DA6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA6F8"))) PPC_WEAK_FUNC(sub_820DA6F8);
PPC_FUNC_IMPL(__imp__sub_820DA6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820DA700;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa34
	ctx.lr = 0x820DA708;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f29,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x820da7ec
	if (ctx.cr6.eq) goto loc_820DA7EC;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,258
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 258, ctx.xer);
	// bne cr6,0x820da790
	if (!ctx.cr6.eq) goto loc_820DA790;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r10,-16112
	ctx.r9.s64 = ctx.r10.s64 + -16112;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-129
	ctx.r8.s64 = ctx.r11.s64 + -129;
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r7,244(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// bl 0x820dc610
	ctx.lr = 0x820DA78C;
	sub_820DC610(ctx, base);
	// b 0x820da7d4
	goto loc_820DA7D4;
loc_820DA790:
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x820da7d0
	if (!ctx.cr6.eq) goto loc_820DA7D0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r10,-16112
	ctx.r9.s64 = ctx.r10.s64 + -16112;
	// rlwinm r11,r11,0,31,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-129
	ctx.r8.s64 = ctx.r11.s64 + -129;
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r7,244(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// bl 0x820dc610
	ctx.lr = 0x820DA7CC;
	sub_820DC610(ctx, base);
	// b 0x820da7d4
	goto loc_820DA7D4;
loc_820DA7D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DA7D4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820da7ec
	if (!ctx.cr6.eq) goto loc_820DA7EC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1d50
	ctx.lr = 0x820DA7EC;
	sub_820F1D50(ctx, base);
loc_820DA7EC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 988);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820dc4f8
	ctx.lr = 0x820DA814;
	sub_820DC4F8(ctx, base);
	// rlwinm r9,r3,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820da8ec
	if (ctx.cr6.eq) goto loc_820DA8EC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwinm r8,r9,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820da848
	if (ctx.cr6.eq) goto loc_820DA848;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_820DA848:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820da85c
	if (!ctx.cr6.eq) goto loc_820DA85C;
	// fdivs f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
loc_820DA85C:
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x820aec50
	ctx.lr = 0x820DA870;
	sub_820AEC50(ctx, base);
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820da8ec
	if (ctx.cr6.eq) goto loc_820DA8EC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820da8ec
	if (!ctx.cr6.eq) goto loc_820DA8EC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820da8b4
	if (ctx.cr6.eq) goto loc_820DA8B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_820DA8B4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820da8d4
	if (!ctx.cr6.gt) goto loc_820DA8D4;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// bge cr6,0x820da8ec
	if (!ctx.cr6.lt) goto loc_820DA8EC;
	// stfs f29,8(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_820DA8D4:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa80
	ctx.lr = 0x820DA8E8;
	__restfpr_27(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820DA8EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa80
	ctx.lr = 0x820DA8FC;
	__restfpr_27(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DA900"))) PPC_WEAK_FUNC(sub_820DA900);
PPC_FUNC_IMPL(__imp__sub_820DA900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820DA908;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820ddd60
	ctx.lr = 0x820DA914;
	sub_820DDD60(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lbz r28,18(r8)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + 18);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x820da940
	if (!ctx.cr6.gt) goto loc_820DA940;
	// lwz r31,20(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// b 0x820da944
	goto loc_820DA944;
loc_820DA940:
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
loc_820DA944:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// beq cr6,0x820daa38
	if (ctx.cr6.eq) goto loc_820DAA38;
loc_820DA954:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r29,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r29.u8);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// bl 0x820dc1b0
	ctx.lr = 0x820DA98C;
	sub_820DC1B0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820da9ec
	if (ctx.cr6.eq) goto loc_820DA9EC;
loc_820DA998:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820db120
	ctx.lr = 0x820DA9A4;
	sub_820DB120(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820db570
	ctx.lr = 0x820DA9B0;
	sub_820DB570(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x820dc1b0
	ctx.lr = 0x820DA9E0;
	sub_820DC1B0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820da998
	if (!ctx.cr6.eq) goto loc_820DA998;
loc_820DA9EC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820daa20
	if (ctx.cr6.eq) goto loc_820DAA20;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820daa1c
	if (ctx.cr6.eq) goto loc_820DAA1C;
loc_820DAA04:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820daa1c
	if (ctx.cr6.eq) goto loc_820DAA1C;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820daa04
	if (!ctx.cr6.eq) goto loc_820DAA04;
loc_820DAA1C:
	// bl 0x820da900
	ctx.lr = 0x820DAA20;
	sub_820DA900(ctx, base);
loc_820DAA20:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stb r27,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r27.u8);
	// blt cr6,0x820da954
	if (ctx.cr6.lt) goto loc_820DA954;
loc_820DAA38:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,-27096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// rlwinm r8,r9,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// bl 0x82388734
	ctx.lr = 0x820DAA54;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820daa60
	if (!ctx.cr6.eq) goto loc_820DAA60;
	// bl 0x821b3000
	ctx.lr = 0x820DAA60;
	sub_821B3000(ctx, base);
loc_820DAA60:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820daa74
	if (ctx.cr6.eq) goto loc_820DAA74;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_820DAA74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DAA7C"))) PPC_WEAK_FUNC(sub_820DAA7C);
PPC_FUNC_IMPL(__imp__sub_820DAA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DAA80"))) PPC_WEAK_FUNC(sub_820DAA80);
PPC_FUNC_IMPL(__imp__sub_820DAA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820DAA88;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820dab40
	if (!ctx.cr6.eq) goto loc_820DAB40;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dab40
	if (ctx.cr6.eq) goto loc_820DAB40;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r31,r11,-21792
	ctx.r31.s64 = ctx.r11.s64 + -21792;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823052d8
	ctx.lr = 0x820DAAD8;
	sub_823052D8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820dab1c
	if (!ctx.cr6.eq) goto loc_820DAB1C;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dab0c
	if (!ctx.cr6.eq) goto loc_820DAB0C;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4944
	ctx.r9.s64 = ctx.r10.s64 + 4944;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
loc_820DAB0C:
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x821d8c40
	ctx.lr = 0x820DAB18;
	sub_821D8C40(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
loc_820DAB1C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stdx r8,r7,r10
	PPC_STORE_U64(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u64);
	// bl 0x823051a8
	ctx.lr = 0x820DAB40;
	sub_823051A8(ctx, base);
loc_820DAB40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ddd60
	ctx.lr = 0x820DAB48;
	sub_820DDD60(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lbz r28,18(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x820dab60
	if (!ctx.cr6.gt) goto loc_820DAB60;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x820dab64
	goto loc_820DAB64;
loc_820DAB60:
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
loc_820DAB64:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x820daba4
	if (ctx.cr6.eq) goto loc_820DABA4;
loc_820DAB74:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stb r31,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r31.u8);
	// bl 0x820dba40
	ctx.lr = 0x820DAB8C;
	sub_820DBA40(ctx, base);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stb r27,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r27.u8);
	// blt cr6,0x820dab74
	if (ctx.cr6.lt) goto loc_820DAB74;
loc_820DABA4:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DABB0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dabbc
	if (!ctx.cr6.eq) goto loc_820DABBC;
	// bl 0x821b3000
	ctx.lr = 0x820DABBC;
	sub_821B3000(ctx, base);
loc_820DABBC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dabd0
	if (ctx.cr6.eq) goto loc_820DABD0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_820DABD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DABDC"))) PPC_WEAK_FUNC(sub_820DABDC);
PPC_FUNC_IMPL(__imp__sub_820DABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DABE0"))) PPC_WEAK_FUNC(sub_820DABE0);
PPC_FUNC_IMPL(__imp__sub_820DABE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820DABE8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820ddd60
	ctx.lr = 0x820DABFC;
	sub_820DDD60(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r28,18(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x820dac14
	if (!ctx.cr6.gt) goto loc_820DAC14;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x820dac18
	goto loc_820DAC18;
loc_820DAC14:
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
loc_820DAC18:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x820dac58
	if (ctx.cr6.eq) goto loc_820DAC58;
loc_820DAC28:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stb r31,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r31.u8);
	// bl 0x820dbd28
	ctx.lr = 0x820DAC40;
	sub_820DBD28(ctx, base);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stb r27,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r27.u8);
	// blt cr6,0x820dac28
	if (ctx.cr6.lt) goto loc_820DAC28;
loc_820DAC58:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DAC64;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dac70
	if (!ctx.cr6.eq) goto loc_820DAC70;
	// bl 0x821b3000
	ctx.lr = 0x820DAC70;
	sub_821B3000(ctx, base);
loc_820DAC70:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dac84
	if (ctx.cr6.eq) goto loc_820DAC84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_820DAC84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DAC90"))) PPC_WEAK_FUNC(sub_820DAC90);
PPC_FUNC_IMPL(__imp__sub_820DAC90) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dad04
	if (!ctx.cr6.eq) goto loc_820DAD04;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dad04
	if (!ctx.cr6.eq) goto loc_820DAD04;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dad04
	if (ctx.cr6.eq) goto loc_820DAD04;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// bl 0x820ddd60
	ctx.lr = 0x820DACD8;
	sub_820DDD60(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DACEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x820dddc8
	ctx.lr = 0x820DACF0;
	sub_820DDDC8(ctx, base);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r7,r8,0,31,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x1) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r7,r8,0,29,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x4) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
loc_820DAD04:
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

__attribute__((alias("__imp__sub_820DAD18"))) PPC_WEAK_FUNC(sub_820DAD18);
PPC_FUNC_IMPL(__imp__sub_820DAD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,124(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dadb8
	if (ctx.cr6.eq) goto loc_820DADB8;
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dadb8
	if (ctx.cr6.eq) goto loc_820DADB8;
	// rlwinm r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dad60
	if (ctx.cr6.eq) goto loc_820DAD60;
	// bl 0x820dbe00
	ctx.lr = 0x820DAD5C;
	sub_820DBE00(ctx, base);
	// rlwinm r30,r30,0,15,13
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
loc_820DAD60:
	// ori r11,r30,16
	ctx.r11.u64 = ctx.r30.u64 | 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x820ddd60
	ctx.lr = 0x820DAD70;
	sub_820DDD60(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DAD88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x820dddc8
	ctx.lr = 0x820DAD8C;
	sub_820DDDC8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dada4
	if (ctx.cr6.eq) goto loc_820DADA4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DADA4;
	sub_82080000(ctx, base);
loc_820DADA4:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
loc_820DADB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DADD0"))) PPC_WEAK_FUNC(sub_820DADD0);
PPC_FUNC_IMPL(__imp__sub_820DADD0) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dae90
	if (!ctx.cr6.eq) goto loc_820DAE90;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dae90
	if (!ctx.cr6.eq) goto loc_820DAE90;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82087078
	ctx.lr = 0x820DAE08;
	sub_82087078(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dae90
	if (ctx.cr6.eq) goto loc_820DAE90;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// bl 0x820ddd60
	ctx.lr = 0x820DAE28;
	sub_820DDD60(ctx, base);
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r8,27604(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27604);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820DAE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dae78
	if (ctx.cr6.eq) goto loc_820DAE78;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dae5c
	if (ctx.cr6.eq) goto loc_820DAE5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820dae60
	goto loc_820DAE60;
loc_820DAE5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820DAE60:
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820DAE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
loc_820DAE78:
	// bl 0x820dddc8
	ctx.lr = 0x820DAE7C;
	sub_820DDDC8(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r10,r11,1,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
loc_820DAE90:
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

__attribute__((alias("__imp__sub_820DAEA4"))) PPC_WEAK_FUNC(sub_820DAEA4);
PPC_FUNC_IMPL(__imp__sub_820DAEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DAEA8"))) PPC_WEAK_FUNC(sub_820DAEA8);
PPC_FUNC_IMPL(__imp__sub_820DAEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820DAEB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820daedc
	if (ctx.cr6.eq) goto loc_820DAEDC;
loc_820DAED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820DAEDC:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x820ddca8
	ctx.lr = 0x820DAEE4;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820daef4
	if (ctx.cr6.eq) goto loc_820DAEF4;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// rlwinm r30,r11,29,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_820DAEF4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// beq cr6,0x820daf1c
	if (ctx.cr6.eq) goto loc_820DAF1C;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820daf44
	if (!ctx.cr6.eq) goto loc_820DAF44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dadd0
	ctx.lr = 0x820DAF18;
	sub_820DADD0(ctx, base);
	// b 0x820daf44
	goto loc_820DAF44;
loc_820DAF1C:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820daf44
	if (!ctx.cr6.eq) goto loc_820DAF44;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820daf3c
	if (ctx.cr6.eq) goto loc_820DAF3C;
	// bl 0x820f07a0
	ctx.lr = 0x820DAF38;
	sub_820F07A0(ctx, base);
	// b 0x820daf44
	goto loc_820DAF44;
loc_820DAF3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dac90
	ctx.lr = 0x820DAF44;
	sub_820DAC90(ctx, base);
loc_820DAF44:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820daed0
	if (ctx.cr6.eq) goto loc_820DAED0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820daf68
	ctx.lr = 0x820DAF60;
	sub_820DAF68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DAF68"))) PPC_WEAK_FUNC(sub_820DAF68);
PPC_FUNC_IMPL(__imp__sub_820DAF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820DAF70;
	__savegprlr_28(ctx, base);
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
	// bl 0x820ddd60
	ctx.lr = 0x820DAF84;
	sub_820DDD60(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DAFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-27096(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DAFB0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dafbc
	if (!ctx.cr6.eq) goto loc_820DAFBC;
	// bl 0x821b3000
	ctx.lr = 0x820DAFBC;
	sub_821B3000(ctx, base);
loc_820DAFBC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dafd0
	if (ctx.cr6.eq) goto loc_820DAFD0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_820DAFD0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820db024
	if (!ctx.cr6.eq) goto loc_820DB024;
	// lwz r31,136(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820db028
	if (ctx.cr6.eq) goto loc_820DB028;
loc_820DAFE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820db028
	if (!ctx.cr6.eq) goto loc_820DB028;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820db010
	if (ctx.cr6.eq) goto loc_820DB010;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820daf68
	ctx.lr = 0x820DB010;
	sub_820DAF68(ctx, base);
loc_820DB010:
	// lwz r31,128(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820dafe8
	if (!ctx.cr6.eq) goto loc_820DAFE8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820DB024:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_820DB028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DB030"))) PPC_WEAK_FUNC(sub_820DB030);
PPC_FUNC_IMPL(__imp__sub_820DB030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x820db088
	if (ctx.cr6.eq) goto loc_820DB088;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
loc_820DB04C:
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820db088
	if (ctx.cr6.eq) goto loc_820DB088;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820db088
	if (ctx.cr6.eq) goto loc_820DB088;
	// lhz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x820db088
	if (!ctx.cr6.lt) goto loc_820DB088;
	// mulli r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 * 104;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x820db04c
	if (!ctx.cr6.eq) goto loc_820DB04C;
loc_820DB088:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB09C"))) PPC_WEAK_FUNC(sub_820DB09C);
PPC_FUNC_IMPL(__imp__sub_820DB09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB0A0"))) PPC_WEAK_FUNC(sub_820DB0A0);
PPC_FUNC_IMPL(__imp__sub_820DB0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DB0A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x820db030
	ctx.lr = 0x820DB0BC;
	sub_820DB030(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820db030
	ctx.lr = 0x820DB0CC;
	sub_820DB030(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x820db114
	if (ctx.cr6.eq) goto loc_820DB114;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_820DB0DC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x820db100
	if (ctx.cr6.eq) goto loc_820DB100;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820DB0EC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820db114
	if (ctx.cr6.eq) goto loc_820DB114;
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x820db0ec
	if (!ctx.cr6.eq) goto loc_820DB0EC;
loc_820DB100:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820db114
	if (ctx.cr6.eq) goto loc_820DB114;
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bne cr6,0x820db0dc
	if (!ctx.cr6.eq) goto loc_820DB0DC;
loc_820DB114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DB11C"))) PPC_WEAK_FUNC(sub_820DB11C);
PPC_FUNC_IMPL(__imp__sub_820DB11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB120"))) PPC_WEAK_FUNC(sub_820DB120);
PPC_FUNC_IMPL(__imp__sub_820DB120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820DB128;
	__savegprlr_22(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lbz r24,19(r30)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// beq cr6,0x820db1ac
	if (ctx.cr6.eq) goto loc_820DB1AC;
	// lwz r31,136(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820db564
	if (ctx.cr6.eq) goto loc_820DB564;
loc_820DB154:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820db174
	if (ctx.cr6.eq) goto loc_820DB174;
	// lwz r31,128(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820db154
	if (!ctx.cr6.eq) goto loc_820DB154;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_820DB174:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x820dbe00
	ctx.lr = 0x820DB194;
	sub_820DBE00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,129
	ctx.r4.s64 = 129;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820daf68
	ctx.lr = 0x820DB1A4;
	sub_820DAF68(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_820DB1AC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// ori r22,r11,65535
	ctx.r22.u64 = ctx.r11.u64 | 65535;
	// bne cr6,0x820db1c4
	if (!ctx.cr6.eq) goto loc_820DB1C4;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// b 0x820db1f4
	goto loc_820DB1F4;
loc_820DB1C4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db1d0
	if (!ctx.cr6.eq) goto loc_820DB1D0;
loc_820DB1D0:
	// lbz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820db1e4
	if (!ctx.cr6.eq) goto loc_820DB1E4;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// b 0x820db1f0
	goto loc_820DB1F0;
loc_820DB1E4:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820DB1F0:
	// lhz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
loc_820DB1F4:
	// lhz r25,2(r31)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r26,65535
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 65535, ctx.xer);
	// beq cr6,0x820db564
	if (ctx.cr6.eq) goto loc_820DB564;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820db0a0
	ctx.lr = 0x820DB218;
	sub_820DB0A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820db244
	if (ctx.cr6.eq) goto loc_820DB244;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x820db244
	if (!ctx.cr6.eq) goto loc_820DB244;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x820db24c
	goto loc_820DB24C;
loc_820DB244:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x820db564
	if (ctx.cr6.eq) goto loc_820DB564;
loc_820DB24C:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820db28c
	if (ctx.cr6.eq) goto loc_820DB28C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_820DB260:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x820db260
	if (!ctx.cr6.eq) goto loc_820DB260;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db28c
	if (ctx.cr6.eq) goto loc_820DB28C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r27,-4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x820db290
	goto loc_820DB290;
loc_820DB28C:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_820DB290:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db30c
	if (ctx.cr6.eq) goto loc_820DB30C;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820db30c
	if (ctx.cr6.eq) goto loc_820DB30C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820DB30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DB30C:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// beq cr6,0x820db37c
	if (ctx.cr6.eq) goto loc_820DB37C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820db470
	if (ctx.cr6.eq) goto loc_820DB470;
	// mulli r11,r26,104
	ctx.r11.s64 = ctx.r26.s64 * 104;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820db470
	if (ctx.cr6.eq) goto loc_820DB470;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820DB378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820db470
	goto loc_820DB470;
loc_820DB37C:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820db470
	if (ctx.cr6.eq) goto loc_820DB470;
loc_820DB388:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db39c
	if (!ctx.cr6.eq) goto loc_820DB39C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DB39C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r8,18(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x820db3b4
	if (!ctx.cr6.eq) goto loc_820DB3B4;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820db3c0
	goto loc_820DB3C0;
loc_820DB3B4:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820DB3C0:
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820db3fc
	if (ctx.cr6.eq) goto loc_820DB3FC;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820db3fc
	if (ctx.cr6.eq) goto loc_820DB3FC;
	// lhz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 16);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820db3fc
	if (!ctx.cr6.lt) goto loc_820DB3FC;
	// mulli r11,r9,104
	ctx.r11.s64 = ctx.r9.s64 * 104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,96(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x820db400
	goto loc_820DB400;
loc_820DB3FC:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_820DB400:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820db464
	if (ctx.cr6.eq) goto loc_820DB464;
	// mulli r11,r9,104
	ctx.r11.s64 = ctx.r9.s64 * 104;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820db464
	if (ctx.cr6.eq) goto loc_820DB464;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x820db42c
	if (!ctx.cr6.eq) goto loc_820DB42C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_820DB42C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DB464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DB464:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x820db388
	if (!ctx.cr6.eq) goto loc_820DB388;
loc_820DB470:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db564
	if (ctx.cr6.eq) goto loc_820DB564;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,268(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// addi r7,r11,264
	ctx.r7.s64 = ctx.r11.s64 + 264;
	// lwz r6,272(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lwz r5,276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820db564
	if (ctx.cr6.eq) goto loc_820DB564;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ca938
	ctx.lr = 0x820DB4BC;
	sub_820CA938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db4d4
	if (!ctx.cr6.eq) goto loc_820DB4D4;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DB4D4:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820db4ec
	if (!ctx.cr6.eq) goto loc_820DB4EC;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820db4f8
	goto loc_820DB4F8;
loc_820DB4EC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820DB4F8:
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820DB518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db52c
	if (!ctx.cr6.eq) goto loc_820DB52C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r11,19(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DB52C:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820db550
	if (!ctx.cr6.eq) goto loc_820DB550;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_820DB550:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
loc_820DB564:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DB56C"))) PPC_WEAK_FUNC(sub_820DB56C);
PPC_FUNC_IMPL(__imp__sub_820DB56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB570"))) PPC_WEAK_FUNC(sub_820DB570);
PPC_FUNC_IMPL(__imp__sub_820DB570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820DB578;
	__savegprlr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,20(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lbz r24,19(r29)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r29.u32 + 19);
	// beq cr6,0x820db670
	if (ctx.cr6.eq) goto loc_820DB670;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db62c
	if (ctx.cr6.eq) goto loc_820DB62C;
loc_820DB5A4:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820db5c0
	if (ctx.cr6.eq) goto loc_820DB5C0;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820db5a4
	if (!ctx.cr6.eq) goto loc_820DB5A4;
	// b 0x820db62c
	goto loc_820DB62C;
loc_820DB5C0:
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// rlwinm r9,r10,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x820daf68
	ctx.lr = 0x820DB5E4;
	sub_820DAF68(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db5fc
	if (!ctx.cr6.eq) goto loc_820DB5FC;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DB5FC:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820db614
	if (!ctx.cr6.eq) goto loc_820DB614;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820db620
	goto loc_820DB620;
loc_820DB614:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_820DB620:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_820DB62C:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db640
	if (!ctx.cr6.eq) goto loc_820DB640;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r9,19(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DB640:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x820dba04
	if (ctx.cr6.eq) goto loc_820DBA04;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_820DB670:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// bne cr6,0x820db688
	if (!ctx.cr6.eq) goto loc_820DB688;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// b 0x820db6b8
	goto loc_820DB6B8;
loc_820DB688:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db694
	if (!ctx.cr6.eq) goto loc_820DB694;
loc_820DB694:
	// lbz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820db6a8
	if (!ctx.cr6.eq) goto loc_820DB6A8;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// b 0x820db6b4
	goto loc_820DB6B4;
loc_820DB6A8:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820DB6B4:
	// lhz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
loc_820DB6B8:
	// lhz r30,2(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// bne cr6,0x820db73c
	if (!ctx.cr6.eq) goto loc_820DB73C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db6d4
	if (!ctx.cr6.eq) goto loc_820DB6D4;
loc_820DB6D4:
	// lbz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820db6e8
	if (!ctx.cr6.eq) goto loc_820DB6E8;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// b 0x820db6f4
	goto loc_820DB6F4;
loc_820DB6E8:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820DB6F4:
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db714
	if (!ctx.cr6.eq) goto loc_820DB714;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DB714:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820dba1c
	if (!ctx.cr6.eq) goto loc_820DBA1C;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_820DB73C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820db760
	if (ctx.cr6.eq) goto loc_820DB760;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820db760
	if (!ctx.cr6.eq) goto loc_820DB760;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820DB760:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820db0a0
	ctx.lr = 0x820DB778;
	sub_820DB0A0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820db79c
	if (ctx.cr6.eq) goto loc_820DB79C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_820DB78C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820db78c
	if (!ctx.cr6.eq) goto loc_820DB78C;
loc_820DB79C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db828
	if (ctx.cr6.eq) goto loc_820DB828;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,148(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r7,r11,144
	ctx.r7.s64 = ctx.r11.s64 + 144;
	// lwz r6,152(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r5,156(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820db828
	if (ctx.cr6.eq) goto loc_820DB828;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db7e8
	if (!ctx.cr6.eq) goto loc_820DB7E8;
loc_820DB7E8:
	// lbz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820db7fc
	if (!ctx.cr6.eq) goto loc_820DB7FC;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// b 0x820db808
	goto loc_820DB808;
loc_820DB7FC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820DB808:
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820DB828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DB828:
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// beq cr6,0x820db898
	if (ctx.cr6.eq) goto loc_820DB898;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820db960
	if (ctx.cr6.eq) goto loc_820DB960;
	// mulli r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 * 104;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820db960
	if (ctx.cr6.eq) goto loc_820DB960;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820DB894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820db960
	goto loc_820DB960;
loc_820DB898:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820db960
	if (ctx.cr6.eq) goto loc_820DB960;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_820DB8B0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db8c8
	if (!ctx.cr6.eq) goto loc_820DB8C8;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DB8C8:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820db8e0
	if (!ctx.cr6.eq) goto loc_820DB8E0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820db8ec
	goto loc_820DB8EC;
loc_820DB8E0:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820DB8EC:
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// beq cr6,0x820db950
	if (ctx.cr6.eq) goto loc_820DB950;
	// mulli r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 * 104;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820db950
	if (ctx.cr6.eq) goto loc_820DB950;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DB950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DB950:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bne 0x820db8b0
	if (!ctx.cr0.eq) goto loc_820DB8B0;
loc_820DB960:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db9e0
	if (ctx.cr6.eq) goto loc_820DB9E0;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820db9e0
	if (ctx.cr6.eq) goto loc_820DB9E0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DB9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DB9E0:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820db9f4
	if (!ctx.cr6.eq) goto loc_820DB9F4;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DB9F4:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820dba1c
	if (!ctx.cr6.eq) goto loc_820DBA1C;
loc_820DBA04:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_820DBA1C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DBA3C"))) PPC_WEAK_FUNC(sub_820DBA3C);
PPC_FUNC_IMPL(__imp__sub_820DBA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DBA40"))) PPC_WEAK_FUNC(sub_820DBA40);
PPC_FUNC_IMPL(__imp__sub_820DBA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820DBA48;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbaa8
	if (ctx.cr6.eq) goto loc_820DBAA8;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dbd1c
	if (ctx.cr6.eq) goto loc_820DBD1C;
loc_820DBA70:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820dba94
	if (ctx.cr6.eq) goto loc_820DBA94;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dba70
	if (!ctx.cr6.eq) goto loc_820DBA70;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820DBA94:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820daa80
	ctx.lr = 0x820DBA9C;
	sub_820DAA80(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820DBAA8:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r26,8(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// beq cr6,0x820dbb30
	if (ctx.cr6.eq) goto loc_820DBB30;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820dbb30
	if (ctx.cr6.eq) goto loc_820DBB30;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820DBB30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBB30:
	// cmplwi cr6,r27,65535
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65535, ctx.xer);
	// beq cr6,0x820dbc9c
	if (ctx.cr6.eq) goto loc_820DBC9C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820dbc9c
	if (ctx.cr6.eq) goto loc_820DBC9C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820db030
	ctx.lr = 0x820DBB50;
	sub_820DB030(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dbbd4
	if (ctx.cr6.eq) goto loc_820DBBD4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_820DBB70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 * 104;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dbbc8
	if (ctx.cr6.eq) goto loc_820DBBC8;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820DBBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBBC8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bne 0x820dbb70
	if (!ctx.cr0.eq) goto loc_820DBB70;
loc_820DBBD4:
	// mulli r11,r27,104
	ctx.r11.s64 = ctx.r27.s64 * 104;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dbc28
	if (ctx.cr6.eq) goto loc_820DBC28;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820DBC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBC28:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820dbc9c
	if (ctx.cr6.eq) goto loc_820DBC9C;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820DBC38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 * 104;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dbc90
	if (ctx.cr6.eq) goto loc_820DBC90;
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820DBC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBC90:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820dbc38
	if (!ctx.cr0.eq) goto loc_820DBC38;
loc_820DBC9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbd1c
	if (ctx.cr6.eq) goto loc_820DBD1C;
	// addi r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 + 296;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820dbd1c
	if (ctx.cr6.eq) goto loc_820DBD1C;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBD1C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DBD28"))) PPC_WEAK_FUNC(sub_820DBD28);
PPC_FUNC_IMPL(__imp__sub_820DBD28) {
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
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbd88
	if (ctx.cr6.eq) goto loc_820DBD88;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dbdf0
	if (ctx.cr6.eq) goto loc_820DBDF0;
loc_820DBD4C:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820dbd74
	if (ctx.cr6.eq) goto loc_820DBD74;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dbd4c
	if (!ctx.cr6.eq) goto loc_820DBD4C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820DBD74:
	// bl 0x820dabe0
	ctx.lr = 0x820DBD78;
	sub_820DABE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820DBD88:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// beq cr6,0x820dbdf0
	if (ctx.cr6.eq) goto loc_820DBDF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dbdf0
	if (ctx.cr6.eq) goto loc_820DBDF0;
	// mulli r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 * 104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dbdf0
	if (ctx.cr6.eq) goto loc_820DBDF0;
	// lwz r7,84(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820DBDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBDF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DBE00"))) PPC_WEAK_FUNC(sub_820DBE00);
PPC_FUNC_IMPL(__imp__sub_820DBE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820DBE08;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbf18
	if (ctx.cr6.eq) goto loc_820DBF18;
	// bl 0x820ddd60
	ctx.lr = 0x820DBE20;
	sub_820DDD60(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r23,18(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// ble cr6,0x820dbe38
	if (!ctx.cr6.gt) goto loc_820DBE38;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x820dbe3c
	goto loc_820DBE3C;
loc_820DBE38:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_820DBE3C:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// beq cr6,0x820dbeec
	if (ctx.cr6.eq) goto loc_820DBEEC;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_820DBE58:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r29,r31,-12
	ctx.r29.s64 = ctx.r31.s64 + -12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r24,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r24.u8);
	// lhz r27,-10(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + -10);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// sth r30,-10(r31)
	PPC_STORE_U16(ctx.r31.u32 + -10, ctx.r30.u16);
	// bl 0x820db120
	ctx.lr = 0x820DBE80;
	sub_820DB120(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dbe98
	if (!ctx.cr6.eq) goto loc_820DBE98;
	// lhz r10,-10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -10);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x820dbea8
	if (ctx.cr6.eq) goto loc_820DBEA8;
loc_820DBE98:
	// lhz r27,-10(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + -10);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// sth r30,-10(r31)
	PPC_STORE_U16(ctx.r31.u32 + -10, ctx.r30.u16);
loc_820DBEA8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820db570
	ctx.lr = 0x820DBEB4;
	sub_820DB570(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dbed4
	if (!ctx.cr6.eq) goto loc_820DBED4;
	// lhz r11,-10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -10);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x820dbed4
	if (!ctx.cr6.eq) goto loc_820DBED4;
	// sth r27,-10(r31)
	PPC_STORE_U16(ctx.r31.u32 + -10, ctx.r27.u16);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_820DBED4:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// stb r25,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r25.u8);
	// blt cr6,0x820dbe58
	if (ctx.cr6.lt) goto loc_820DBE58;
loc_820DBEEC:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DBEF8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dbf04
	if (!ctx.cr6.eq) goto loc_820DBF04;
	// bl 0x821b3000
	ctx.lr = 0x820DBF04;
	sub_821B3000(ctx, base);
loc_820DBF04:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbf18
	if (ctx.cr6.eq) goto loc_820DBF18;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_820DBF18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DBF20"))) PPC_WEAK_FUNC(sub_820DBF20);
PPC_FUNC_IMPL(__imp__sub_820DBF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dbfdc
	if (ctx.cr6.eq) goto loc_820DBFDC;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbf70
	if (ctx.cr6.eq) goto loc_820DBF70;
loc_820DBF58:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820dbfdc
	if (ctx.cr6.eq) goto loc_820DBFDC;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dbf58
	if (!ctx.cr6.eq) goto loc_820DBF58;
loc_820DBF70:
	// bl 0x820da4d8
	ctx.lr = 0x820DBF74;
	sub_820DA4D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dbf84
	if (ctx.cr6.eq) goto loc_820DBF84;
	// bl 0x820da548
	ctx.lr = 0x820DBF80;
	sub_820DA548(ctx, base);
	// b 0x820dbf88
	goto loc_820DBF88;
loc_820DBF84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DBF88:
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// ori r10,r11,2051
	ctx.r10.u64 = ctx.r11.u64 | 2051;
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r31.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbfbc
	if (ctx.cr6.eq) goto loc_820DBFBC;
	// stw r3,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r3.u32);
loc_820DBFBC:
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// bl 0x820ddd60
	ctx.lr = 0x820DBFC4;
	sub_820DDD60(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x820dddc8
	ctx.lr = 0x820DBFDC;
	sub_820DDDC8(ctx, base);
loc_820DBFDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DBFF4"))) PPC_WEAK_FUNC(sub_820DBFF4);
PPC_FUNC_IMPL(__imp__sub_820DBFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DBFF8"))) PPC_WEAK_FUNC(sub_820DBFF8);
PPC_FUNC_IMPL(__imp__sub_820DBFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DC000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dc0bc
	if (ctx.cr6.eq) goto loc_820DC0BC;
	// lwz r31,136(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820dc0bc
	if (ctx.cr6.eq) goto loc_820DC0BC;
loc_820DC024:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820dc044
	if (ctx.cr6.eq) goto loc_820DC044;
	// lwz r31,128(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820dc024
	if (!ctx.cr6.eq) goto loc_820DC024;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820DC044:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820dc06c
	if (!ctx.cr6.eq) goto loc_820DC06C;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// beq cr6,0x820dc088
	if (ctx.cr6.eq) goto loc_820DC088;
	// stw r30,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r30.u32);
	// b 0x820dc088
	goto loc_820DC088;
loc_820DC06C:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dc088
	if (ctx.cr6.eq) goto loc_820DC088;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_820DC088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddd60
	ctx.lr = 0x820DC090;
	sub_820DDD60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DC0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x820dddc8
	ctx.lr = 0x820DC0A8;
	sub_820DDDC8(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da608
	ctx.lr = 0x820DC0BC;
	sub_820DA608(ctx, base);
loc_820DC0BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DC0C4"))) PPC_WEAK_FUNC(sub_820DC0C4);
PPC_FUNC_IMPL(__imp__sub_820DC0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC0C8"))) PPC_WEAK_FUNC(sub_820DC0C8);
PPC_FUNC_IMPL(__imp__sub_820DC0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DC0D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// beq cr6,0x820dc10c
	if (ctx.cr6.eq) goto loc_820DC10C;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc104
	if (ctx.cr6.eq) goto loc_820DC104;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x820dc10c
	if (ctx.cr6.eq) goto loc_820DC10C;
loc_820DC104:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820dc110
	goto loc_820DC110;
loc_820DC10C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820DC110:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc130
	if (ctx.cr6.eq) goto loc_820DC130;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x820deb48
	ctx.lr = 0x820DC128;
	sub_820DEB48(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// b 0x820dc15c
	goto loc_820DC15C;
loc_820DC130:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc150
	if (ctx.cr6.eq) goto loc_820DC150;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dc150
	if (ctx.cr6.eq) goto loc_820DC150;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_820DC150:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820debc0
	ctx.lr = 0x820DC15C;
	sub_820DEBC0(ctx, base);
loc_820DC15C:
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820aeb10
	ctx.lr = 0x820DC16C;
	sub_820AEB10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820aeba8
	ctx.lr = 0x820DC174;
	sub_820AEBA8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820aec50
	ctx.lr = 0x820DC184;
	sub_820AEC50(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// lfs f13,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DC1B0"))) PPC_WEAK_FUNC(sub_820DC1B0);
PPC_FUNC_IMPL(__imp__sub_820DC1B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820dc1c0
	if (!ctx.cr6.eq) goto loc_820DC1C0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r4,19(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820DC1C0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820dc1d8
	if (!ctx.cr6.eq) goto loc_820DC1D8;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x820dc1e4
	goto loc_820DC1E4;
loc_820DC1D8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820DC1E4:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820dc218
	if (!ctx.cr6.eq) goto loc_820DC218;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820dc218
	if (!ctx.cr6.eq) goto loc_820DC218;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dc21c
	if (ctx.cr6.eq) goto loc_820DC21C;
loc_820DC218:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820DC21C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC224"))) PPC_WEAK_FUNC(sub_820DC224);
PPC_FUNC_IMPL(__imp__sub_820DC224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC228"))) PPC_WEAK_FUNC(sub_820DC228);
PPC_FUNC_IMPL(__imp__sub_820DC228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x820dc324
	if (ctx.cr6.eq) goto loc_820DC324;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,28676
	ctx.r31.s64 = ctx.r11.s64 + 28676;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DC25C;
	sub_823052D8(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
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
	// bne cr6,0x820dc318
	if (!ctx.cr6.eq) goto loc_820DC318;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820dc318
	if (ctx.cr6.eq) goto loc_820DC318;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820dc318
	if (!ctx.cr6.lt) goto loc_820DC318;
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
	// beq cr6,0x820dc2f0
	if (ctx.cr6.eq) goto loc_820DC2F0;
loc_820DC2C8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820dc2e8
	if (ctx.cr6.eq) goto loc_820DC2E8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820dc2c8
	if (!ctx.cr6.eq) goto loc_820DC2C8;
	// b 0x820dc2f0
	goto loc_820DC2F0;
loc_820DC2E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820DC2F0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820dc308
	if (!ctx.cr6.eq) goto loc_820DC308;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820DC308:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DC314;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_820DC318:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DC324;
	sub_823051A8(ctx, base);
loc_820DC324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC33C"))) PPC_WEAK_FUNC(sub_820DC33C);
PPC_FUNC_IMPL(__imp__sub_820DC33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC340"))) PPC_WEAK_FUNC(sub_820DC340);
PPC_FUNC_IMPL(__imp__sub_820DC340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r11,28676
	ctx.r31.s64 = ctx.r11.s64 + 28676;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x820DC368;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc38c
	if (ctx.cr6.eq) goto loc_820DC38C;
loc_820DC374:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dc3bc
	if (!ctx.cr6.eq) goto loc_820DC3BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dc374
	if (!ctx.cr6.eq) goto loc_820DC374;
loc_820DC38C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dc3e4
	if (!ctx.cr6.eq) goto loc_820DC3E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820dc440
	ctx.lr = 0x820DC3A0;
	sub_820DC440(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dc3e4
	if (!ctx.cr6.eq) goto loc_820DC3E4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DC3B4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820dc428
	goto loc_820DC428;
loc_820DC3BC:
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
	// b 0x820dc418
	goto loc_820DC418;
loc_820DC3E4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
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
loc_820DC418:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x820DC424;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820DC428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC440"))) PPC_WEAK_FUNC(sub_820DC440);
PPC_FUNC_IMPL(__imp__sub_820DC440) {
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
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x820DC474;
	sub_82082030(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,28676
	ctx.r11.s64 = ctx.r11.s64 + 28676;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dc490
	if (ctx.cr6.eq) goto loc_820DC490;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x820dc494
	goto loc_820DC494;
loc_820DC490:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_820DC494:
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
	// beq cr6,0x820dc4d4
	if (ctx.cr6.eq) goto loc_820DC4D4;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820DC4CC:
	// stwu r3,160(r10)
	ea = 160 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820dc4cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DC4CC;
loc_820DC4D4:
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

__attribute__((alias("__imp__sub_820DC4F4"))) PPC_WEAK_FUNC(sub_820DC4F4);
PPC_FUNC_IMPL(__imp__sub_820DC4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC4F8"))) PPC_WEAK_FUNC(sub_820DC4F8);
PPC_FUNC_IMPL(__imp__sub_820DC4F8) {
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
	// bl 0x8233fa38
	ctx.lr = 0x820DC50C;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc544
	if (ctx.cr6.eq) goto loc_820DC544;
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x820dc53c
	if (!ctx.cr6.gt) goto loc_820DC53C;
loc_820DC534:
	// li r3,64
	ctx.r3.s64 = 64;
	// b 0x820dc5f4
	goto loc_820DC5F4;
loc_820DC53C:
	// lfs f29,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// b 0x820dc554
	goto loc_820DC554;
loc_820DC544:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x820dc534
	if (ctx.cr6.gt) goto loc_820DC534;
	// lfs f29,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
loc_820DC554:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dc574
	if (!ctx.cr6.eq) goto loc_820DC574;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// b 0x820dc5f0
	goto loc_820DC5F0;
loc_820DC574:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dc5b0
	if (!ctx.cr6.eq) goto loc_820DC5B0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f3,f12
	ctx.cr6.compare(ctx.f3.f64, ctx.f12.f64);
	// bge cr6,0x820dc5b0
	if (!ctx.cr6.lt) goto loc_820DC5B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820aec50
	ctx.lr = 0x820DC5B0;
	sub_820AEC50(ctx, base);
loc_820DC5B0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dc5d4
	if (!ctx.cr6.eq) goto loc_820DC5D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x820dc5f0
	goto loc_820DC5F0;
loc_820DC5D4:
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820dc5f0
	if (!ctx.cr6.lt) goto loc_820DC5F0;
	// fmuls f13,f29,f28
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// li r3,32
	ctx.r3.s64 = 32;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820dc5f4
	if (ctx.cr6.lt) goto loc_820DC5F4;
loc_820DC5F0:
	// li r3,16
	ctx.r3.s64 = 16;
loc_820DC5F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8233fa84
	ctx.lr = 0x820DC600;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC610"))) PPC_WEAK_FUNC(sub_820DC610);
PPC_FUNC_IMPL(__imp__sub_820DC610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc67c
	if (ctx.cr6.eq) goto loc_820DC67C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc63c
	if (ctx.cr6.eq) goto loc_820DC63C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 & ctx.r7.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820dc640
	goto loc_820DC640;
loc_820DC63C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820DC640:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r9,31376
	ctx.r7.s64 = ctx.r9.s64 + 31376;
	// lfs f13,92(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x820dc660
	if (ctx.cr6.eq) goto loc_820DC660;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820dc664
	goto loc_820DC664;
loc_820DC660:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820DC664:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x820dc678
	if (ctx.cr6.lt) goto loc_820DC678;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DC678:
	// blr 
	return;
loc_820DC67C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,92(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC69C"))) PPC_WEAK_FUNC(sub_820DC69C);
PPC_FUNC_IMPL(__imp__sub_820DC69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC6A0"))) PPC_WEAK_FUNC(sub_820DC6A0);
PPC_FUNC_IMPL(__imp__sub_820DC6A0) {
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
	ctx.lr = 0x820DC6B8;
	sub_820DDCA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82082030
	ctx.lr = 0x820DC6CC;
	sub_82082030(ctx, base);
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

__attribute__((alias("__imp__sub_820DC6E0"))) PPC_WEAK_FUNC(sub_820DC6E0);
PPC_FUNC_IMPL(__imp__sub_820DC6E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// b 0x82080000
	sub_82080000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DC6F4"))) PPC_WEAK_FUNC(sub_820DC6F4);
PPC_FUNC_IMPL(__imp__sub_820DC6F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC6F8"))) PPC_WEAK_FUNC(sub_820DC6F8);
PPC_FUNC_IMPL(__imp__sub_820DC6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820DC700;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
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
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820DC780;
	sub_82305000(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820DC7A0;
	sub_82305000(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x820DC7C0;
	sub_82305000(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// stb r10,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r10.u8);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// bl 0x821d8c40
	ctx.lr = 0x820DC7F4;
	sub_821D8C40(ctx, base);
	// li r11,51
	ctx.r11.s64 = 51;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// lis r5,-32183
	ctx.r5.s64 = -2109145088;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// addi r6,r8,-32200
	ctx.r6.s64 = ctx.r8.s64 + -32200;
	// addi r4,r7,-32616
	ctx.r4.s64 = ctx.r7.s64 + -32616;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// stw r6,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r6.u32);
	// addi r10,r5,27400
	ctx.r10.s64 = ctx.r5.s64 + 27400;
	// stw r4,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r4.u32);
	// addi r9,r31,756
	ctx.r9.s64 = ctx.r31.s64 + 756;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820DC840:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820dc840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DC840;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,27320
	ctx.r11.s64 = ctx.r11.s64 + 27320;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820DC860:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820dc860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DC860;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,27360
	ctx.r11.s64 = ctx.r11.s64 + 27360;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820DC880:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820dc880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DC880;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,28576
	ctx.r8.s64 = ctx.r10.s64 + 28576;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// stfs f0,28576(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28576, temp.u32);
	// addi r4,r7,-32176
	ctx.r4.s64 = ctx.r7.s64 + -32176;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r6,-32152
	ctx.r11.s64 = ctx.r6.s64 + -32152;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// addi r9,r5,-32128
	ctx.r9.s64 = ctx.r5.s64 + -32128;
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// addi r6,r3,-32104
	ctx.r6.s64 = ctx.r3.s64 + -32104;
	// stfs f13,16(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stfs f13,20(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// addi r3,r10,-32080
	ctx.r3.s64 = ctx.r10.s64 + -32080;
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f13,32(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// addi r7,r7,-32056
	ctx.r7.s64 = ctx.r7.s64 + -32056;
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// lis r29,-32249
	ctx.r29.s64 = -2113470464;
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// addi r5,r5,-32032
	ctx.r5.s64 = ctx.r5.s64 + -32032;
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lis r28,-32249
	ctx.r28.s64 = -2113470464;
	// stfs f13,48(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// addi r10,r10,-32008
	ctx.r10.s64 = ctx.r10.s64 + -32008;
	// stfs f0,52(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// lis r27,-32249
	ctx.r27.s64 = -2113470464;
	// stfs f13,56(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// lis r26,-32249
	ctx.r26.s64 = -2113470464;
	// stfs f0,60(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// addi r29,r29,-31984
	ctx.r29.s64 = ctx.r29.s64 + -31984;
	// stfs f13,64(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 64, temp.u32);
	// lis r25,-32249
	ctx.r25.s64 = -2113470464;
	// stfs f13,68(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 68, temp.u32);
	// addi r28,r28,-31960
	ctx.r28.s64 = ctx.r28.s64 + -31960;
	// stfs f13,72(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 72, temp.u32);
	// addi r27,r27,-31936
	ctx.r27.s64 = ctx.r27.s64 + -31936;
	// stfs f13,76(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 76, temp.u32);
	// stw r4,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r4.u32);
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r9,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r9.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r6,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r6.u32);
	// addi r4,r26,-31912
	ctx.r4.s64 = ctx.r26.s64 + -31912;
	// stw r3,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r3.u32);
	// addi r9,r25,-31888
	ctx.r9.s64 = ctx.r25.s64 + -31888;
	// stw r7,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r7.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stw r5,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r5.u32);
	// addi r6,r8,-31768
	ctx.r6.s64 = ctx.r8.s64 + -31768;
	// stw r10,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r10.u32);
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// stw r29,3544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3544, ctx.r29.u32);
	// addi r5,r11,-32224
	ctx.r5.s64 = ctx.r11.s64 + -32224;
	// stw r28,3652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3652, ctx.r28.u32);
	// addi r11,r7,-31864
	ctx.r11.s64 = ctx.r7.s64 + -31864;
	// stw r27,3784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3784, ctx.r27.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r4,3912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3912, ctx.r4.u32);
	// addi r7,r3,-31840
	ctx.r7.s64 = ctx.r3.s64 + -31840;
	// stw r9,4052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4052, ctx.r9.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r6,4104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4104, ctx.r6.u32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// stw r5,4156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4156, ctx.r5.u32);
	// addi r5,r10,-31816
	ctx.r5.s64 = ctx.r10.s64 + -31816;
	// stw r11,4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4248, ctx.r11.u32);
	// stw r7,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r7.u32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// stw r5,4420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4420, ctx.r5.u32);
	// addi r3,r8,-31744
	ctx.r3.s64 = ctx.r8.s64 + -31744;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r6,-31720
	ctx.r10.s64 = ctx.r6.s64 + -31720;
	// stw r3,4480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4480, ctx.r3.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r4,-31696
	ctx.r8.s64 = ctx.r4.s64 + -31696;
	// stw r10,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r10.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r11,-32272
	ctx.r6.s64 = ctx.r11.s64 + -32272;
	// stw r8,4844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4844, ctx.r8.u32);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r4,r9,-31672
	ctx.r4.s64 = ctx.r9.s64 + -31672;
	// stw r6,4944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4944, ctx.r6.u32);
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// addi r11,r7,-31648
	ctx.r11.s64 = ctx.r7.s64 + -31648;
	// stw r4,5016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5016, ctx.r4.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r5,-31624
	ctx.r9.s64 = ctx.r5.s64 + -31624;
	// stw r11,5268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5268, ctx.r11.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r7,r3,-31600
	ctx.r7.s64 = ctx.r3.s64 + -31600;
	// stw r9,5324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5324, ctx.r9.u32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// addi r5,r10,-31576
	ctx.r5.s64 = ctx.r10.s64 + -31576;
	// stw r7,5404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5404, ctx.r7.u32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r3,r8,-31552
	ctx.r3.s64 = ctx.r8.s64 + -31552;
	// stw r5,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r5.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r6,-31528
	ctx.r10.s64 = ctx.r6.s64 + -31528;
	// stw r3,5460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5460, ctx.r3.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r4,-32248
	ctx.r8.s64 = ctx.r4.s64 + -32248;
	// stw r10,5576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5576, ctx.r10.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r11,-31504
	ctx.r6.s64 = ctx.r11.s64 + -31504;
	// stw r8,5748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5748, ctx.r8.u32);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r4,r9,-31480
	ctx.r4.s64 = ctx.r9.s64 + -31480;
	// stw r6,5988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5988, ctx.r6.u32);
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// addi r11,r7,-31792
	ctx.r11.s64 = ctx.r7.s64 + -31792;
	// stw r4,6012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6012, ctx.r4.u32);
	// addi r10,r5,-31456
	ctx.r10.s64 = ctx.r5.s64 + -31456;
	// addi r9,r3,-31432
	ctx.r9.s64 = ctx.r3.s64 + -31432;
	// stw r11,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r11.u32);
	// stw r10,6160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6160, ctx.r10.u32);
	// addi r8,r31,4420
	ctx.r8.s64 = ctx.r31.s64 + 4420;
	// stw r9,6244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6244, ctx.r9.u32);
	// addi r7,r31,4480
	ctx.r7.s64 = ctx.r31.s64 + 4480;
	// stw r30,6288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6288, ctx.r30.u32);
	// addi r3,r31,6288
	ctx.r3.s64 = ctx.r31.s64 + 6288;
	// stw r30,6292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6292, ctx.r30.u32);
	// addi r29,r31,1100
	ctx.r29.s64 = ctx.r31.s64 + 1100;
	// stw r30,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r30.u32);
	// addi r28,r31,1380
	ctx.r28.s64 = ctx.r31.s64 + 1380;
	// stw r30,6300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6300, ctx.r30.u32);
	// addi r27,r31,1532
	ctx.r27.s64 = ctx.r31.s64 + 1532;
	// stw r30,6304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6304, ctx.r30.u32);
	// addi r26,r31,1916
	ctx.r26.s64 = ctx.r31.s64 + 1916;
	// addi r25,r31,2176
	ctx.r25.s64 = ctx.r31.s64 + 2176;
	// addi r24,r31,2728
	ctx.r24.s64 = ctx.r31.s64 + 2728;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r23,r31,3048
	ctx.r23.s64 = ctx.r31.s64 + 3048;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r22,r31,3480
	ctx.r22.s64 = ctx.r31.s64 + 3480;
	// addi r21,r31,3544
	ctx.r21.s64 = ctx.r31.s64 + 3544;
	// addi r20,r31,3652
	ctx.r20.s64 = ctx.r31.s64 + 3652;
	// addi r19,r31,3784
	ctx.r19.s64 = ctx.r31.s64 + 3784;
	// addi r18,r31,3912
	ctx.r18.s64 = ctx.r31.s64 + 3912;
	// addi r17,r31,4052
	ctx.r17.s64 = ctx.r31.s64 + 4052;
	// addi r16,r31,4104
	ctx.r16.s64 = ctx.r31.s64 + 4104;
	// addi r15,r31,4156
	ctx.r15.s64 = ctx.r31.s64 + 4156;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r30,r31,4248
	ctx.r30.s64 = ctx.r31.s64 + 4248;
	// addi r14,r31,4368
	ctx.r14.s64 = ctx.r31.s64 + 4368;
	// addi r6,r31,4772
	ctx.r6.s64 = ctx.r31.s64 + 4772;
	// addi r5,r31,4844
	ctx.r5.s64 = ctx.r31.s64 + 4844;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r11,r31,4944
	ctx.r11.s64 = ctx.r31.s64 + 4944;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r10,r31,5016
	ctx.r10.s64 = ctx.r31.s64 + 5016;
	// addi r9,r31,5268
	ctx.r9.s64 = ctx.r31.s64 + 5268;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r8,r31,5324
	ctx.r8.s64 = ctx.r31.s64 + 5324;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r7,r31,5404
	ctx.r7.s64 = ctx.r31.s64 + 5404;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r6,r31,5428
	ctx.r6.s64 = ctx.r31.s64 + 5428;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r5,r31,5460
	ctx.r5.s64 = ctx.r31.s64 + 5460;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// addi r11,r31,5576
	ctx.r11.s64 = ctx.r31.s64 + 5576;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r10,r31,5748
	ctx.r10.s64 = ctx.r31.s64 + 5748;
	// addi r9,r31,5988
	ctx.r9.s64 = ctx.r31.s64 + 5988;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r8,r31,6012
	ctx.r8.s64 = ctx.r31.s64 + 6012;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r7,r31,6144
	ctx.r7.s64 = ctx.r31.s64 + 6144;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r6,r31,6160
	ctx.r6.s64 = ctx.r31.s64 + 6160;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r5,r31,6244
	ctx.r5.s64 = ctx.r31.s64 + 6244;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// bl 0x82305000
	ctx.lr = 0x820DCB88;
	sub_82305000(ctx, base);
	// addi r6,r31,484
	ctx.r6.s64 = ctx.r31.s64 + 484;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r31,3656
	ctx.r10.s64 = ctx.r31.s64 + 3656;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r6,r31,760
	ctx.r6.s64 = ctx.r31.s64 + 760;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r31,3548
	ctx.r3.s64 = ctx.r31.s64 + 3548;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r31,332
	ctx.r8.s64 = ctx.r31.s64 + 332;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// std r14,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r14.u64);
	// addi r14,r31,1104
	ctx.r14.s64 = ctx.r31.s64 + 1104;
	// stw r4,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r4.u32);
	// addi r4,r31,1384
	ctx.r4.s64 = ctx.r31.s64 + 1384;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// addi r11,r31,1536
	ctx.r11.s64 = ctx.r31.s64 + 1536;
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// addi r29,r31,1920
	ctx.r29.s64 = ctx.r31.s64 + 1920;
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// addi r28,r31,2180
	ctx.r28.s64 = ctx.r31.s64 + 2180;
	// stw r27,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r27.u32);
	// addi r27,r31,2732
	ctx.r27.s64 = ctx.r31.s64 + 2732;
	// stw r26,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r26.u32);
	// addi r26,r31,3052
	ctx.r26.s64 = ctx.r31.s64 + 3052;
	// stw r25,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r25.u32);
	// addi r25,r31,3484
	ctx.r25.s64 = ctx.r31.s64 + 3484;
	// stw r24,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r24.u32);
	// addi r24,r31,3788
	ctx.r24.s64 = ctx.r31.s64 + 3788;
	// stw r23,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r23.u32);
	// addi r23,r31,3916
	ctx.r23.s64 = ctx.r31.s64 + 3916;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r22,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r22.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r21,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r21.u32);
	// stw r20,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r20.u32);
	// stw r19,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r19.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r18,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r18.u32);
	// stw r17,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r17.u32);
	// stw r16,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r16.u32);
	// stw r15,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r15.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// stw r7,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r7.u32);
	// stw r5,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r5.u32);
	// stw r6,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r6.u32);
	// addi r17,r31,4776
	ctx.r17.s64 = ctx.r31.s64 + 4776;
	// lwz r20,128(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r5,r31,4160
	ctx.r5.s64 = ctx.r31.s64 + 4160;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// addi r17,r31,4948
	ctx.r17.s64 = ctx.r31.s64 + 4948;
	// addi r15,r31,4848
	ctx.r15.s64 = ctx.r31.s64 + 4848;
	// lwz r22,124(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// addi r30,r31,4252
	ctx.r30.s64 = ctx.r31.s64 + 4252;
	// lwz r17,144(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r21,r31,4424
	ctx.r21.s64 = ctx.r31.s64 + 4424;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// addi r5,r31,5328
	ctx.r5.s64 = ctx.r31.s64 + 5328;
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// addi r19,r31,4484
	ctx.r19.s64 = ctx.r31.s64 + 4484;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r31,4108
	ctx.r7.s64 = ctx.r31.s64 + 4108;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r31,4056
	ctx.r9.s64 = ctx.r31.s64 + 4056;
	// lwz r15,140(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// addi r30,r31,5272
	ctx.r30.s64 = ctx.r31.s64 + 5272;
	// lwz r18,132(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r30,156(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r5,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r5.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// li r27,37
	ctx.r27.s64 = 37;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r16,136(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// addi r19,r31,5020
	ctx.r19.s64 = ctx.r31.s64 + 5020;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r21,r31,4372
	ctx.r21.s64 = ctx.r31.s64 + 4372;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r5.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r14,168(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// lwz r19,148(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r21,152(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r7,r31,5408
	ctx.r7.s64 = ctx.r31.s64 + 5408;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// addi r9,r31,5432
	ctx.r9.s64 = ctx.r31.s64 + 5432;
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// addi r10,r31,5464
	ctx.r10.s64 = ctx.r31.s64 + 5464;
	// stw r8,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r8.u32);
	// addi r8,r31,5580
	ctx.r8.s64 = ctx.r31.s64 + 5580;
	// stw r14,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r14.u32);
	// addi r14,r31,5752
	ctx.r14.s64 = ctx.r31.s64 + 5752;
	// stw r6,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r6.u32);
	// addi r6,r31,5992
	ctx.r6.s64 = ctx.r31.s64 + 5992;
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// addi r3,r31,6016
	ctx.r3.s64 = ctx.r31.s64 + 6016;
	// stw r22,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r22.u32);
	// addi r22,r31,6148
	ctx.r22.s64 = ctx.r31.s64 + 6148;
	// stw r20,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r20.u32);
	// addi r20,r31,6164
	ctx.r20.s64 = ctx.r31.s64 + 6164;
	// stw r18,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r18.u32);
	// addi r18,r31,6248
	ctx.r18.s64 = ctx.r31.s64 + 6248;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r16,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r16.u32);
	// stw r15,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r15.u32);
	// stw r17,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r17.u32);
	// stw r19,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r19.u32);
	// stw r21,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r21.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r5,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r5.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// stw r26,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r26.u32);
	// stw r25,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r25.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,356(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r24,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r24.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r7,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r7.u32);
	// stw r5,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r5.u32);
	// stw r4,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r4.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r23,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r23.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r7,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r7.u32);
	// stw r5,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r5.u32);
	// stw r4,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r4.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r7,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// stw r5,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r5.u32);
	// stw r4,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r4.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r7,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r7.u32);
	// stw r5,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r5.u32);
	// stw r4,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r4.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r8,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r8.u32);
	// stw r14,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r14.u32);
	// stw r6,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r6.u32);
	// stw r3,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// stw r22,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r22.u32);
	// stw r20,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r20.u32);
	// stw r18,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r18.u32);
loc_820DCE5C:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DCE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820DCE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820dceac
	if (ctx.cr6.eq) goto loc_820DCEAC;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_820DCEA4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820dcea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DCEA4;
loc_820DCEAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DCEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820DCED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820dcefc
	if (ctx.cr6.eq) goto loc_820DCEFC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_820DCEE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dcef4
	if (!ctx.cr6.eq) goto loc_820DCEF4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_820DCEF4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820dcee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DCEE4;
loc_820DCEFC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x820dce5c
	if (!ctx.cr0.eq) goto loc_820DCE5C;
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DCF14;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dcf20
	if (!ctx.cr6.eq) goto loc_820DCF20;
	// bl 0x821b3000
	ctx.lr = 0x820DCF20;
	sub_821B3000(ctx, base);
loc_820DCF20:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x820dcf44
	if (!ctx.cr6.lt) goto loc_820DCF44;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r25,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r25.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820DCF44:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,768
	ctx.r11.s64 = 768;
	// addi r29,r9,28676
	ctx.r29.s64 = ctx.r9.s64 + 28676;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r3,768
	ctx.r3.s64 = 768;
	// stw r11,28676(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28676, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// bl 0x820dc440
	ctx.lr = 0x820DCF64;
	sub_820DC440(ctx, base);
	// lbz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r25.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// stb r11,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x820DCF80;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dcf8c
	if (!ctx.cr6.eq) goto loc_820DCF8C;
	// bl 0x821b3000
	ctx.lr = 0x820DCF8C;
	sub_821B3000(ctx, base);
loc_820DCF8C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dcfa0
	if (ctx.cr6.eq) goto loc_820DCFA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820DCFA0:
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DCFA8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dcfb4
	if (!ctx.cr6.eq) goto loc_820DCFB4;
	// bl 0x821b3000
	ctx.lr = 0x820DCFB4;
	sub_821B3000(ctx, base);
loc_820DCFB4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x820dcfd8
	if (!ctx.cr6.lt) goto loc_820DCFD8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r25,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r25.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820DCFD8:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,512
	ctx.r11.s64 = 512;
	// addi r29,r9,28732
	ctx.r29.s64 = ctx.r9.s64 + 28732;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r3,512
	ctx.r3.s64 = 512;
	// stw r11,28732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28732, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// bl 0x820df078
	ctx.lr = 0x820DCFF8;
	sub_820DF078(ctx, base);
	// lbz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r25.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// stb r11,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x820DD014;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dd020
	if (!ctx.cr6.eq) goto loc_820DD020;
	// bl 0x821b3000
	ctx.lr = 0x820DD020;
	sub_821B3000(ctx, base);
loc_820DD020:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd034
	if (ctx.cr6.eq) goto loc_820DD034;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820DD034:
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DD03C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dd048
	if (!ctx.cr6.eq) goto loc_820DD048;
	// bl 0x821b3000
	ctx.lr = 0x820DD048;
	sub_821B3000(ctx, base);
loc_820DD048:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x820dd06c
	if (!ctx.cr6.lt) goto loc_820DD06C;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r25,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r25.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820DD06C:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,512
	ctx.r11.s64 = 512;
	// addi r29,r9,28788
	ctx.r29.s64 = ctx.r9.s64 + 28788;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r3,512
	ctx.r3.s64 = 512;
	// stw r11,28788(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28788, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// bl 0x820dfb48
	ctx.lr = 0x820DD08C;
	sub_820DFB48(ctx, base);
	// lbz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r25.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// stb r11,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x820DD0A8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dd0b4
	if (!ctx.cr6.eq) goto loc_820DD0B4;
	// bl 0x821b3000
	ctx.lr = 0x820DD0B4;
	sub_821B3000(ctx, base);
loc_820DD0B4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd0c8
	if (ctx.cr6.eq) goto loc_820DD0C8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820DD0C8:
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DD0D0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dd0dc
	if (!ctx.cr6.eq) goto loc_820DD0DC;
	// bl 0x821b3000
	ctx.lr = 0x820DD0DC;
	sub_821B3000(ctx, base);
loc_820DD0DC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x820dd100
	if (!ctx.cr6.lt) goto loc_820DD100;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r25,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r25.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820DD100:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r29,r9,28844
	ctx.r29.s64 = ctx.r9.s64 + 28844;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,28844(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28844, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// bl 0x820dfc00
	ctx.lr = 0x820DD120;
	sub_820DFC00(ctx, base);
	// lbz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r25.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// stb r11,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x820DD13C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dd148
	if (!ctx.cr6.eq) goto loc_820DD148;
	// bl 0x821b3000
	ctx.lr = 0x820DD148;
	sub_821B3000(ctx, base);
loc_820DD148:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd15c
	if (ctx.cr6.eq) goto loc_820DD15C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820DD15C:
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
	// stw r25,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r25.u32);
	// lwz r3,-27096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DD174;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dd194
	if (ctx.cr6.eq) goto loc_820DD194;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_820DD194:
	// bl 0x821b3000
	ctx.lr = 0x820DD198;
	sub_821B3000(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD1B0"))) PPC_WEAK_FUNC(sub_820DD1B0);
PPC_FUNC_IMPL(__imp__sub_820DD1B0) {
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
	// addi r9,r11,-32592
	ctx.r9.s64 = ctx.r11.s64 + -32592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820dd1e8
	if (ctx.cr6.eq) goto loc_820DD1E8;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DD1E8;
	sub_82080000(ctx, base);
loc_820DD1E8:
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

__attribute__((alias("__imp__sub_820DD200"))) PPC_WEAK_FUNC(sub_820DD200);
PPC_FUNC_IMPL(__imp__sub_820DD200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820DD208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r31,r11,-21792
	ctx.r31.s64 = ctx.r11.s64 + -21792;
	// lwz r29,152(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820dd28c
	if (ctx.cr6.eq) goto loc_820DD28C;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_820DD228:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfsu f1,8(r30)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820dabe0
	ctx.lr = 0x820DD234;
	sub_820DABE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x820dd228
	if (!ctx.cr0.eq) goto loc_820DD228;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd284
	if (ctx.cr6.eq) goto loc_820DD284;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// twllei r11,0
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820dd27c
	if (ctx.cr6.gt) goto loc_820DD27C;
	// bge cr6,0x820dd284
	if (!ctx.cr6.lt) goto loc_820DD284;
	// lbz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd284
	if (ctx.cr6.eq) goto loc_820DD284;
loc_820DD27C:
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x821d8c40
	ctx.lr = 0x820DD284;
	sub_821D8C40(ctx, base);
loc_820DD284:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_820DD28C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD294"))) PPC_WEAK_FUNC(sub_820DD294);
PPC_FUNC_IMPL(__imp__sub_820DD294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD298"))) PPC_WEAK_FUNC(sub_820DD298);
PPC_FUNC_IMPL(__imp__sub_820DD298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823052d8
	ctx.lr = 0x820DD2C4;
	sub_823052D8(ctx, base);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwimi r9,r11,5,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwimi r9,r11,5,14,14
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20000) | (ctx.r9.u64 & 0xFFFFFFFFFFFDFFFF);
	// stw r9,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r9.u32);
	// bne cr6,0x820dd320
	if (!ctx.cr6.eq) goto loc_820DD320;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd300
	if (ctx.cr6.eq) goto loc_820DD300;
	// stw r30,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r30.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x820dd304
	goto loc_820DD304;
loc_820DD300:
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_820DD304:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_820DD320:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823051a8
	ctx.lr = 0x820DD328;
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

__attribute__((alias("__imp__sub_820DD340"))) PPC_WEAK_FUNC(sub_820DD340);
PPC_FUNC_IMPL(__imp__sub_820DD340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820DD348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-21792
	ctx.r30.s64 = ctx.r11.s64 + -21792;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x823052d8
	ctx.lr = 0x820DD368;
	sub_823052D8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r28,r9,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bne cr6,0x820dd390
	if (!ctx.cr6.eq) goto loc_820DD390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dbe00
	ctx.lr = 0x820DD38C;
	sub_820DBE00(ctx, base);
	// b 0x820dd394
	goto loc_820DD394;
loc_820DD390:
	// oris r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 131072;
loc_820DD394:
	// rlwinm r11,r29,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dd408
	if (!ctx.cr6.eq) goto loc_820DD408;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820dd3c0
	if (!ctx.cr6.eq) goto loc_820DD3C0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// b 0x820dd3cc
	goto loc_820DD3CC;
loc_820DD3C0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
loc_820DD3CC:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820dd3e4
	if (!ctx.cr6.eq) goto loc_820DD3E4;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// b 0x820dd3f0
	goto loc_820DD3F0;
loc_820DD3E4:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_820DD3F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
loc_820DD408:
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x823051a8
	ctx.lr = 0x820DD410;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD418"))) PPC_WEAK_FUNC(sub_820DD418);
PPC_FUNC_IMPL(__imp__sub_820DD418) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-21792
	ctx.r31.s64 = ctx.r11.s64 + -21792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// beq cr6,0x820dd478
	if (ctx.cr6.eq) goto loc_820DD478;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DD478;
	sub_82080000(ctx, base);
loc_820DD478:
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd48c
	if (ctx.cr6.eq) goto loc_820DD48C;
	// lwz r3,6296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// bl 0x82246e18
	ctx.lr = 0x820DD48C;
	sub_82246E18(ctx, base);
loc_820DD48C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lbz r7,165(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// addi r8,r10,-32592
	ctx.r8.s64 = ctx.r10.s64 + -32592;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,6244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6244, ctx.r8.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r8,6160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6160, ctx.r8.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r8.u32);
	// stw r8,6012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6012, ctx.r8.u32);
	// stw r8,5988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5988, ctx.r8.u32);
	// stw r8,5748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5748, ctx.r8.u32);
	// stw r8,5576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5576, ctx.r8.u32);
	// stw r8,5460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5460, ctx.r8.u32);
	// stw r8,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r8.u32);
	// stw r8,5404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5404, ctx.r8.u32);
	// stw r8,5324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5324, ctx.r8.u32);
	// stw r8,5268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5268, ctx.r8.u32);
	// stw r8,5016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5016, ctx.r8.u32);
	// stw r8,4944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4944, ctx.r8.u32);
	// stw r8,4844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4844, ctx.r8.u32);
	// stw r8,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r8.u32);
	// stw r8,4480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4480, ctx.r8.u32);
	// stw r8,4420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4420, ctx.r8.u32);
	// stw r8,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r8.u32);
	// stw r8,4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4248, ctx.r8.u32);
	// stw r8,4156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4156, ctx.r8.u32);
	// stw r8,4104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4104, ctx.r8.u32);
	// stw r8,4052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4052, ctx.r8.u32);
	// stw r8,3912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3912, ctx.r8.u32);
	// stw r8,3784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3784, ctx.r8.u32);
	// stw r8,3652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3652, ctx.r8.u32);
	// stw r8,3544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3544, ctx.r8.u32);
	// stw r8,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r8.u32);
	// stw r8,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r8.u32);
	// stw r8,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r8.u32);
	// stw r8,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r8.u32);
	// stw r8,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r8.u32);
	// stw r8,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r8.u32);
	// stw r8,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r8.u32);
	// stw r8,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r8.u32);
	// stw r8,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r8.u32);
	// stw r8,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r8.u32);
	// beq cr6,0x820dd560
	if (ctx.cr6.eq) goto loc_820DD560;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd558
	if (ctx.cr6.eq) goto loc_820DD558;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DD558;
	sub_82080000(ctx, base);
loc_820DD558:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_820DD560:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// beq cr6,0x820dd584
	if (ctx.cr6.eq) goto loc_820DD584;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82246e18
	ctx.lr = 0x820DD584;
	sub_82246E18(ctx, base);
loc_820DD584:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd598
	if (ctx.cr6.eq) goto loc_820DD598;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82246e18
	ctx.lr = 0x820DD598;
	sub_82246E18(ctx, base);
loc_820DD598:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd5ac
	if (ctx.cr6.eq) goto loc_820DD5AC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82246e18
	ctx.lr = 0x820DD5AC;
	sub_82246E18(ctx, base);
loc_820DD5AC:
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

__attribute__((alias("__imp__sub_820DD5C0"))) PPC_WEAK_FUNC(sub_820DD5C0);
PPC_FUNC_IMPL(__imp__sub_820DD5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820DD5C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-21792
	ctx.r31.s64 = ctx.r11.s64 + -21792;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x823052d8
	ctx.lr = 0x820DD5E4;
	sub_823052D8(ctx, base);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820dd704
	if (ctx.cr6.eq) goto loc_820DD704;
loc_820DD604:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820dd61c
	if (!ctx.cr6.eq) goto loc_820DD61C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x820dd628
	goto loc_820DD628;
loc_820DD61C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_820DD628:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820dd640
	if (!ctx.cr6.eq) goto loc_820DD640;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x820dd64c
	goto loc_820DD64C;
loc_820DD640:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_820DD64C:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x820df340
	ctx.lr = 0x820DD668;
	sub_820DF340(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dd6b8
	if (ctx.cr6.eq) goto loc_820DD6B8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd68c
	if (ctx.cr6.eq) goto loc_820DD68C;
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// b 0x820dd690
	goto loc_820DD690;
loc_820DD68C:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_820DD690:
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820dd6f8
	goto loc_820DD6F8;
loc_820DD6B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820df4b0
	ctx.lr = 0x820DD6C0;
	sub_820DF4B0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dd6e4
	if (!ctx.cr6.eq) goto loc_820DD6E4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd6f0
	if (ctx.cr6.eq) goto loc_820DD6F0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd6f0
	if (ctx.cr6.eq) goto loc_820DD6F0;
loc_820DD6E4:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DD6F0;
	sub_82080000(ctx, base);
loc_820DD6F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820df718
	ctx.lr = 0x820DD6F8;
	sub_820DF718(ctx, base);
loc_820DD6F8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820dd604
	if (!ctx.cr6.eq) goto loc_820DD604;
loc_820DD704:
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// stwx r28,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r28.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd728
	if (ctx.cr6.eq) goto loc_820DD728;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_820DD728:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dd73c
	if (ctx.cr6.eq) goto loc_820DD73C;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// b 0x820dd740
	goto loc_820DD740;
loc_820DD73C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820DD740:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd750
	if (ctx.cr6.eq) goto loc_820DD750;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_820DD750:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stwx r8,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r8.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// bl 0x823051a8
	ctx.lr = 0x820DD78C;
	sub_823051A8(ctx, base);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820dd7a4
	if (!ctx.cr6.eq) goto loc_820DD7A4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r28.u32);
loc_820DD7A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD7AC"))) PPC_WEAK_FUNC(sub_820DD7AC);
PPC_FUNC_IMPL(__imp__sub_820DD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD7B0"))) PPC_WEAK_FUNC(sub_820DD7B0);
PPC_FUNC_IMPL(__imp__sub_820DD7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820DD7B8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// addi r30,r11,-21792
	ctx.r30.s64 = ctx.r11.s64 + -21792;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x823052d8
	ctx.lr = 0x820DD7EC;
	sub_823052D8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd870
	if (ctx.cr6.eq) goto loc_820DD870;
loc_820DD7F8:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820dd860
	if (ctx.cr6.eq) goto loc_820DD860;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x820dd860
	if (ctx.cr6.gt) goto loc_820DD860;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820dd838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820DD838;
	// bdzf 4*cr6+eq,0x820dd848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820DD848;
	// bne cr6,0x820dd850
	if (!ctx.cr6.eq) goto loc_820DD850;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// b 0x820dd860
	goto loc_820DD860;
loc_820DD838:
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// b 0x820dd860
	goto loc_820DD860;
loc_820DD848:
	// fdivs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// b 0x820dd854
	goto loc_820DD854;
loc_820DD850:
	// fdivs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f31.f64));
loc_820DD854:
	// lfs f13,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_820DD860:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820dd7f8
	if (!ctx.cr6.eq) goto loc_820DD7F8;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
loc_820DD870:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd9a4
	if (ctx.cr6.eq) goto loc_820DD9A4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820DD88C:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820dd8b4
	if (ctx.cr6.eq) goto loc_820DD8B4;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820dd8b0
	if (!ctx.cr6.gt) goto loc_820DD8B0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_820DD8B0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_820DD8B4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820dd94c
	if (!ctx.cr6.eq) goto loc_820DD94C;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820dd8d0
	if (!ctx.cr6.eq) goto loc_820DD8D0;
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// b 0x820dd8d8
	goto loc_820DD8D8;
loc_820DD8D0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
loc_820DD8D8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820dd8f0
	if (!ctx.cr6.eq) goto loc_820DD8F0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// b 0x820dd8fc
	goto loc_820DD8FC;
loc_820DD8F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_820DD8FC:
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dd934
	if (!ctx.cr6.eq) goto loc_820DD934;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd940
	if (ctx.cr6.eq) goto loc_820DD940;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd940
	if (ctx.cr6.eq) goto loc_820DD940;
loc_820DD934:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DD940;
	sub_82080000(ctx, base);
loc_820DD940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df930
	ctx.lr = 0x820DD948;
	sub_820DF930(ctx, base);
	// b 0x820dd994
	goto loc_820DD994;
loc_820DD94C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dd998
	if (ctx.cr6.eq) goto loc_820DD998;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x820dd998
	if (ctx.cr6.gt) goto loc_820DD998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df340
	ctx.lr = 0x820DD96C;
	sub_820DF340(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dd994
	if (!ctx.cr6.eq) goto loc_820DD994;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df4b0
	ctx.lr = 0x820DD980;
	sub_820DF4B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x820de2c8
	ctx.lr = 0x820DD98C;
	sub_820DE2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dd9c0
	ctx.lr = 0x820DD994;
	sub_820DD9C0(ctx, base);
loc_820DD994:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
loc_820DD998:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820dd88c
	if (!ctx.cr6.eq) goto loc_820DD88C;
loc_820DD9A4:
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x823051a8
	ctx.lr = 0x820DD9AC;
	sub_823051A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD9C0"))) PPC_WEAK_FUNC(sub_820DD9C0);
PPC_FUNC_IMPL(__imp__sub_820DD9C0) {
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
	// bne cr6,0x820dd9f8
	if (!ctx.cr6.eq) goto loc_820DD9F8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dda04
	if (ctx.cr6.eq) goto loc_820DDA04;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dda04
	if (ctx.cr6.eq) goto loc_820DDA04;
loc_820DD9F8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820DDA04;
	sub_82080000(ctx, base);
loc_820DDA04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df930
	ctx.lr = 0x820DDA0C;
	sub_820DF930(ctx, base);
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

__attribute__((alias("__imp__sub_820DDA24"))) PPC_WEAK_FUNC(sub_820DDA24);
PPC_FUNC_IMPL(__imp__sub_820DDA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDA28"))) PPC_WEAK_FUNC(sub_820DDA28);
PPC_FUNC_IMPL(__imp__sub_820DDA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820DDA30;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// addi r31,r11,-21792
	ctx.r31.s64 = ctx.r11.s64 + -21792;
	// bne cr6,0x820dda78
	if (!ctx.cr6.eq) goto loc_820DDA78;
	// bl 0x82226ed8
	ctx.lr = 0x820DDA64;
	sub_82226ED8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r7,r11
	ctx.r30.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820DDA78:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x823052d8
	ctx.lr = 0x820DDA84;
	sub_823052D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x820DDA8C;
	sub_82081C00(ctx, base);
	// bl 0x820df830
	ctx.lr = 0x820DDA90;
	sub_820DF830(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820DDAA0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ddaac
	if (!ctx.cr6.eq) goto loc_820DDAAC;
	// bl 0x821b3000
	ctx.lr = 0x820DDAAC;
	sub_821B3000(ctx, base);
loc_820DDAAC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ddac0
	if (ctx.cr6.eq) goto loc_820DDAC0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820DDAC0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820ddaf0
	if (ctx.cr6.eq) goto loc_820DDAF0;
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
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820df608
	ctx.lr = 0x820DDAE8;
	sub_820DF608(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x820ddaf4
	goto loc_820DDAF4;
loc_820DDAF0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820DDAF4:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ddb18
	if (ctx.cr6.eq) goto loc_820DDB18;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// b 0x820ddb1c
	goto loc_820DDB1C;
loc_820DDB18:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820DDB1C:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
	// bl 0x823051a8
	ctx.lr = 0x820DDB58;
	sub_823051A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DDB60"))) PPC_WEAK_FUNC(sub_820DDB60);
PPC_FUNC_IMPL(__imp__sub_820DDB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820DDB68;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r3,-27096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// bl 0x82388734
	ctx.lr = 0x820DDBA0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ddbac
	if (!ctx.cr6.eq) goto loc_820DDBAC;
	// bl 0x821b3000
	ctx.lr = 0x820DDBAC;
	sub_821B3000(ctx, base);
loc_820DDBAC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r30,984(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// bl 0x82081c00
	ctx.lr = 0x820DDBC4;
	sub_82081C00(ctx, base);
	// bl 0x820dfa48
	ctx.lr = 0x820DDBC8;
	sub_820DFA48(ctx, base);
	// lwz r11,-27096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x820DDBD8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ddbe4
	if (!ctx.cr6.eq) goto loc_820DDBE4;
	// bl 0x821b3000
	ctx.lr = 0x820DDBE4;
	sub_821B3000(ctx, base);
loc_820DDBE4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ddbf8
	if (ctx.cr6.eq) goto loc_820DDBF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820DDBF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ddc40
	if (ctx.cr6.eq) goto loc_820DDC40;
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
	// bl 0x820df608
	ctx.lr = 0x820DDC20;
	sub_820DF608(ctx, base);
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r21,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r21.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x820ddc44
	goto loc_820DDC44;
loc_820DDC40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820DDC44:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,-21792
	ctx.r30.s64 = ctx.r11.s64 + -21792;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x823052d8
	ctx.lr = 0x820DDC58;
	sub_823052D8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ddc6c
	if (ctx.cr6.eq) goto loc_820DDC6C;
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// b 0x820ddc70
	goto loc_820DDC70;
loc_820DDC6C:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_820DDC70:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// bl 0x823051a8
	ctx.lr = 0x820DDC98;
	sub_823051A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

