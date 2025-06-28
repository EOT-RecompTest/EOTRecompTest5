#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8209A824"))) PPC_WEAK_FUNC(sub_8209A824);
PPC_FUNC_IMPL(__imp__sub_8209A824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209A828"))) PPC_WEAK_FUNC(sub_8209A828);
PPC_FUNC_IMPL(__imp__sub_8209A828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8209a924
	if (ctx.cr6.eq) goto loc_8209A924;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,26684
	ctx.r31.s64 = ctx.r11.s64 + 26684;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8209A85C;
	sub_823052D8(ctx, base);
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
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
	// bne cr6,0x8209a918
	if (!ctx.cr6.eq) goto loc_8209A918;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209a918
	if (ctx.cr6.eq) goto loc_8209A918;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8209a918
	if (!ctx.cr6.lt) goto loc_8209A918;
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
	// beq cr6,0x8209a8f0
	if (ctx.cr6.eq) goto loc_8209A8F0;
loc_8209A8C8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8209a8e8
	if (ctx.cr6.eq) goto loc_8209A8E8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8209a8c8
	if (!ctx.cr6.eq) goto loc_8209A8C8;
	// b 0x8209a8f0
	goto loc_8209A8F0;
loc_8209A8E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8209A8F0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8209a908
	if (!ctx.cr6.eq) goto loc_8209A908;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8209A908:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209A914;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8209A918:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8209A924;
	sub_823051A8(ctx, base);
loc_8209A924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209A93C"))) PPC_WEAK_FUNC(sub_8209A93C);
PPC_FUNC_IMPL(__imp__sub_8209A93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209A940"))) PPC_WEAK_FUNC(sub_8209A940);
PPC_FUNC_IMPL(__imp__sub_8209A940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r11,26684
	ctx.r31.s64 = ctx.r11.s64 + 26684;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8209A968;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209a98c
	if (ctx.cr6.eq) goto loc_8209A98C;
loc_8209A974:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209a9bc
	if (!ctx.cr6.eq) goto loc_8209A9BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209a974
	if (!ctx.cr6.eq) goto loc_8209A974;
loc_8209A98C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209a9e4
	if (!ctx.cr6.eq) goto loc_8209A9E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8209aa40
	ctx.lr = 0x8209A9A0;
	sub_8209AA40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209a9e4
	if (!ctx.cr6.eq) goto loc_8209A9E4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8209A9B4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8209aa28
	goto loc_8209AA28;
loc_8209A9BC:
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
	// b 0x8209aa18
	goto loc_8209AA18;
loc_8209A9E4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,576
	ctx.r10.s64 = ctx.r11.s64 + 576;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
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
loc_8209AA18:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8209AA24;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8209AA28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209AA40"))) PPC_WEAK_FUNC(sub_8209AA40);
PPC_FUNC_IMPL(__imp__sub_8209AA40) {
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
	// mulli r11,r3,592
	ctx.r11.s64 = ctx.r3.s64 * 592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82082030
	ctx.lr = 0x8209AA6C;
	sub_82082030(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,26684
	ctx.r11.s64 = ctx.r11.s64 + 26684;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209aa88
	if (ctx.cr6.eq) goto loc_8209AA88;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8209aa8c
	goto loc_8209AA8C;
loc_8209AA88:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8209AA8C:
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
	// beq cr6,0x8209aacc
	if (ctx.cr6.eq) goto loc_8209AACC;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8209AAC4:
	// stwu r3,592(r10)
	ea = 592 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8209aac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209AAC4;
loc_8209AACC:
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

__attribute__((alias("__imp__sub_8209AAEC"))) PPC_WEAK_FUNC(sub_8209AAEC);
PPC_FUNC_IMPL(__imp__sub_8209AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209AAF0"))) PPC_WEAK_FUNC(sub_8209AAF0);
PPC_FUNC_IMPL(__imp__sub_8209AAF0) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209ab40
	if (!ctx.cr6.eq) goto loc_8209AB40;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ab28
	if (ctx.cr6.eq) goto loc_8209AB28;
	// bl 0x8209aaf0
	ctx.lr = 0x8209AB1C;
	sub_8209AAF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209ab40
	if (!ctx.cr6.eq) goto loc_8209AB40;
loc_8209AB28:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8209AB40:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209AB58"))) PPC_WEAK_FUNC(sub_8209AB58);
PPC_FUNC_IMPL(__imp__sub_8209AB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8209AB60;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820a34a8
	ctx.lr = 0x8209AB70;
	sub_820A34A8(ctx, base);
loc_8209AB70:
	// bl 0x8209b698
	ctx.lr = 0x8209AB74;
	sub_8209B698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8209ab70
	if (ctx.cr6.eq) goto loc_8209AB70;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,22200
	ctx.r11.s64 = ctx.r11.s64 + 22200;
	// lbz r10,969(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 969);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209aba8
	if (ctx.cr6.eq) goto loc_8209ABA8;
	// lbz r11,970(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 970);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209abac
	if (ctx.cr6.eq) goto loc_8209ABAC;
loc_8209ABA8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8209ABAC:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r29,88
	ctx.r29.s64 = 88;
	// addi r31,r11,9544
	ctx.r31.s64 = ctx.r11.s64 + 9544;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8209ABBC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209abe8
	if (ctx.cr6.eq) goto loc_8209ABE8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820a0b90
	ctx.lr = 0x8209ABD0;
	sub_820A0B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209abe8
	if (ctx.cr6.eq) goto loc_8209ABE8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820a0d28
	ctx.lr = 0x8209ABE8;
	sub_820A0D28(ctx, base);
loc_8209ABE8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8209abbc
	if (!ctx.cr0.eq) goto loc_8209ABBC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r11,20000
	ctx.r8.s64 = ctx.r11.s64 + 20000;
	// ori r7,r9,296
	ctx.r7.u64 = ctx.r9.u64 | 296;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r29,r8,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// beq cr6,0x8209ad14
	if (ctx.cr6.eq) goto loc_8209AD14;
loc_8209AC18:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x8209ac40
	if (ctx.cr6.eq) goto loc_8209AC40;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// bne cr6,0x8209ac38
	if (!ctx.cr6.eq) goto loc_8209AC38;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209ac40
	if (ctx.cr6.eq) goto loc_8209AC40;
loc_8209AC38:
	// lwz r30,572(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// b 0x8209ad0c
	goto loc_8209AD0C;
loc_8209AC40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r30,572
	ctx.r9.s64 = ctx.r30.s64 + 572;
	// lwz r30,572(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8209ac60
	if (!ctx.cr6.eq) goto loc_8209AC60;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// b 0x8209ac6c
	goto loc_8209AC6C;
loc_8209AC60:
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r10.u32);
loc_8209AC6C:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8209ac84
	if (!ctx.cr6.eq) goto loc_8209AC84;
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// b 0x8209ac90
	goto loc_8209AC90;
loc_8209AC84:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,568(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
loc_8209AC90:
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// stw r27,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r27.u32);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209acf4
	if (ctx.cr6.eq) goto loc_8209ACF4;
	// stw r29,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r29.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209acd4
	if (ctx.cr6.eq) goto loc_8209ACD4;
	// stw r3,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r3.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// b 0x8209acd8
	goto loc_8209ACD8;
loc_8209ACD4:
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
loc_8209ACD8:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r27,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r27.u32);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// b 0x8209ad08
	goto loc_8209AD08;
loc_8209ACF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209AD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209AD08:
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
loc_8209AD0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8209ac18
	if (!ctx.cr6.eq) goto loc_8209AC18;
loc_8209AD14:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8209ad4c
	if (!ctx.cr6.lt) goto loc_8209AD4C;
	// subfic r30,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r30.s64 = 16 - ctx.r11.s64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8209ad4c
	if (!ctx.cr6.gt) goto loc_8209AD4C;
loc_8209AD2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209b4c8
	ctx.lr = 0x8209AD44;
	sub_8209B4C8(ctx, base);
	// subf. r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt 0x8209ad2c
	if (ctx.cr0.gt) goto loc_8209AD2C;
loc_8209AD4C:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8209ad84
	if (!ctx.cr6.lt) goto loc_8209AD84;
	// subfic r30,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r30.s64 = 16 - ctx.r11.s64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8209ad84
	if (!ctx.cr6.gt) goto loc_8209AD84;
loc_8209AD64:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8209b4c8
	ctx.lr = 0x8209AD7C;
	sub_8209B4C8(ctx, base);
	// subf. r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt 0x8209ad64
	if (ctx.cr0.gt) goto loc_8209AD64;
loc_8209AD84:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8209adbc
	if (!ctx.cr6.lt) goto loc_8209ADBC;
	// subfic r31,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r31.s64 = 4 - ctx.r11.s64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8209adbc
	if (!ctx.cr6.gt) goto loc_8209ADBC;
loc_8209AD9C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8209b4c8
	ctx.lr = 0x8209ADB4;
	sub_8209B4C8(ctx, base);
	// subf. r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt 0x8209ad9c
	if (ctx.cr0.gt) goto loc_8209AD9C;
loc_8209ADBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209ADC8"))) PPC_WEAK_FUNC(sub_8209ADC8);
PPC_FUNC_IMPL(__imp__sub_8209ADC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r31,r11,9544
	ctx.r31.s64 = ctx.r11.s64 + 9544;
	// beq cr6,0x8209ae30
	if (ctx.cr6.eq) goto loc_8209AE30;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8209ae10
	if (!ctx.cr6.lt) goto loc_8209AE10;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8209ae8c
	goto loc_8209AE8C;
loc_8209AE10:
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,3188
	ctx.r3.s64 = ctx.r31.s64 + 3188;
	// bl 0x8209b878
	ctx.lr = 0x8209AE1C;
	sub_8209B878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209ae6c
	if (!ctx.cr6.eq) goto loc_8209AE6C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8209ae8c
	goto loc_8209AE8C;
loc_8209AE30:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8209ae4c
	if (!ctx.cr6.lt) goto loc_8209AE4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8209ae8c
	goto loc_8209AE8C;
loc_8209AE4C:
	// li r4,70
	ctx.r4.s64 = 70;
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x8209b878
	ctx.lr = 0x8209AE58;
	sub_8209B878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209ae6c
	if (!ctx.cr6.eq) goto loc_8209AE6C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8209ae8c
	goto loc_8209AE8C;
loc_8209AE6C:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8209ae88
	if (!ctx.cr6.lt) goto loc_8209AE88;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8209ae8c
	goto loc_8209AE8C;
loc_8209AE88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209AE8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209AEA4"))) PPC_WEAK_FUNC(sub_8209AEA4);
PPC_FUNC_IMPL(__imp__sub_8209AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209AEA8"))) PPC_WEAK_FUNC(sub_8209AEA8);
PPC_FUNC_IMPL(__imp__sub_8209AEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8209AEB0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// subfe r27,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8209AEE4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8209adc8
	ctx.lr = 0x8209AEF4;
	sub_8209ADC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209af28
	if (ctx.cr6.eq) goto loc_8209AF28;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8209b4c8
	ctx.lr = 0x8209AF18;
	sub_8209B4C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x8209aee4
	if (ctx.cr6.lt) goto loc_8209AEE4;
loc_8209AF28:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8209adc8
	ctx.lr = 0x8209AF38;
	sub_8209ADC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b040
	if (ctx.cr6.eq) goto loc_8209B040;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209b030
	if (ctx.cr6.eq) goto loc_8209B030;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8209afac
	if (!ctx.cr6.eq) goto loc_8209AFAC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8209AF60:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8209adc8
	ctx.lr = 0x8209AF70;
	sub_8209ADC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209afa4
	if (ctx.cr6.eq) goto loc_8209AFA4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8209b4c8
	ctx.lr = 0x8209AF94;
	sub_8209B4C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x8209af60
	if (ctx.cr6.lt) goto loc_8209AF60;
loc_8209AFA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209b030
	if (ctx.cr6.eq) goto loc_8209B030;
loc_8209AFAC:
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r26,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r26.u64);
	// std r26,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r26.u64);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x82247340
	ctx.lr = 0x8209AFC4;
	sub_82247340(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// std r26,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r26.u64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,324(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	ctx.f31.f64 = double(temp.f32);
loc_8209AFE8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8209b790
	ctx.lr = 0x8209AFF0;
	sub_8209B790(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8209b014
	if (!ctx.cr6.lt) goto loc_8209B014;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8209adc8
	ctx.lr = 0x8209B008;
	sub_8209ADC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209afe8
	if (!ctx.cr6.eq) goto loc_8209AFE8;
loc_8209B014:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8209adc8
	ctx.lr = 0x8209B024;
	sub_8209ADC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b040
	if (ctx.cr6.eq) goto loc_8209B040;
loc_8209B030:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8209B040:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r11,r11,9544
	ctx.r11.s64 = ctx.r11.s64 + 9544;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8209B054:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209b074
	if (ctx.cr6.eq) goto loc_8209B074;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// blt cr6,0x8209b054
	if (ctx.cr6.lt) goto loc_8209B054;
	// b 0x8209b080
	goto loc_8209B080;
loc_8209B074:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stwx r29,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u32);
loc_8209B080:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// beq cr6,0x8209b0e8
	if (ctx.cr6.eq) goto loc_8209B0E8;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8209b0a4
	if (!ctx.cr6.eq) goto loc_8209B0A4;
	// lwz r10,572(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 572);
	// stw r10,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r10.u32);
	// b 0x8209b0b0
	goto loc_8209B0B0;
loc_8209B0A4:
	// lwz r10,568(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 568);
	// lwz r9,572(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 572);
	// stw r9,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r9.u32);
loc_8209B0B0:
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8209b0c8
	if (!ctx.cr6.eq) goto loc_8209B0C8;
	// lwz r10,568(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 568);
	// stw r10,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r10.u32);
	// b 0x8209b0d4
	goto loc_8209B0D4;
loc_8209B0C8:
	// lwz r10,572(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 572);
	// lwz r9,568(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 568);
	// stw r9,568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 568, ctx.r9.u32);
loc_8209B0D4:
	// stw r26,572(r29)
	PPC_STORE_U32(ctx.r29.u32 + 572, ctx.r26.u32);
	// stw r26,568(r29)
	PPC_STORE_U32(ctx.r29.u32 + 568, ctx.r26.u32);
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r10.u32);
loc_8209B0E8:
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// beq cr6,0x8209b120
	if (ctx.cr6.eq) goto loc_8209B120;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8209B120:
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209B140"))) PPC_WEAK_FUNC(sub_8209B140);
PPC_FUNC_IMPL(__imp__sub_8209B140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r8,168(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// addi r11,r11,9544
	ctx.r11.s64 = ctx.r11.s64 + 9544;
	// rlwinm r9,r9,0,31,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,360(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r10,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// beq cr6,0x8209b188
	if (ctx.cr6.eq) goto loc_8209B188;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// b 0x8209b194
	goto loc_8209B194;
loc_8209B188:
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
loc_8209B194:
	// lwz r9,364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209b1ac
	if (ctx.cr6.eq) goto loc_8209B1AC;
	// stw r4,568(r9)
	PPC_STORE_U32(ctx.r9.u32 + 568, ctx.r4.u32);
	// lwz r9,364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// b 0x8209b1b0
	goto loc_8209B1B0;
loc_8209B1AC:
	// stw r4,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r4.u32);
loc_8209B1B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,572(r4)
	PPC_STORE_U32(ctx.r4.u32 + 572, ctx.r9.u32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,568(r4)
	PPC_STORE_U32(ctx.r4.u32 + 568, ctx.r10.u32);
	// lwz r9,372(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r4,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r4.u32);
	// stw r9,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r9.u32);
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// stw r10,168(r4)
	PPC_STORE_U32(ctx.r4.u32 + 168, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209B1DC"))) PPC_WEAK_FUNC(sub_8209B1DC);
PPC_FUNC_IMPL(__imp__sub_8209B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209B1E0"))) PPC_WEAK_FUNC(sub_8209B1E0);
PPC_FUNC_IMPL(__imp__sub_8209B1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8209B1E8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82081c00
	ctx.lr = 0x8209B218;
	sub_82081C00(ctx, base);
	// bl 0x8209a940
	ctx.lr = 0x8209B21C;
	sub_8209A940(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8209B22C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209b238
	if (!ctx.cr6.eq) goto loc_8209B238;
	// bl 0x821b3000
	ctx.lr = 0x8209B238;
	sub_821B3000(ctx, base);
loc_8209B238:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b24c
	if (ctx.cr6.eq) goto loc_8209B24C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8209B24C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209b288
	if (ctx.cr6.eq) goto loc_8209B288;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82099ea0
	ctx.lr = 0x8209B284;
	sub_82099EA0(ctx, base);
	// b 0x8209b28c
	goto loc_8209B28C;
loc_8209B288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209B28C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,9544
	ctx.r11.s64 = ctx.r11.s64 + 9544;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209b2ac
	if (ctx.cr6.eq) goto loc_8209B2AC;
	// stw r3,568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 568, ctx.r3.u32);
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// b 0x8209b2b0
	goto loc_8209B2B0;
loc_8209B2AC:
	// stw r3,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r3.u32);
loc_8209B2B0:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r10.u32);
	// stw r9,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r9.u32);
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r3.u32);
	// stw r10,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209B2D8"))) PPC_WEAK_FUNC(sub_8209B2D8);
PPC_FUNC_IMPL(__imp__sub_8209B2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x8209b4bc
	if (ctx.cr6.gt) goto loc_8209B4BC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8209b314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8209B314;
	// bdzf 4*cr6+eq,0x8209b334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8209B334;
	// bdzf 4*cr6+eq,0x8209b380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8209B380;
	// bdzf 4*cr6+eq,0x8209b43c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8209B43C;
	// bne cr6,0x8209b448
	if (!ctx.cr6.eq) goto loc_8209B448;
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lwz r10,88(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
loc_8209B304:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8209b328
	if (!ctx.cr6.eq) goto loc_8209B328;
loc_8209B30C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8209B314:
	// lfs f0,68(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8209b30c
	if (ctx.cr6.eq) goto loc_8209B30C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
loc_8209B328:
	// ble cr6,0x8209b4bc
	if (!ctx.cr6.gt) goto loc_8209B4BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8209B334:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8209b354
	if (ctx.cr6.eq) goto loc_8209B354;
	// lfs f13,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8209b358
	goto loc_8209B358;
loc_8209B354:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8209B358:
	// lwz r11,80(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209b368
	if (ctx.cr6.eq) goto loc_8209B368;
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
loc_8209B368:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8209b30c
	if (ctx.cr6.eq) goto loc_8209B30C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8209b4bc
	if (!ctx.cr6.gt) goto loc_8209B4BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8209B380:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209b3d0
	if (!ctx.cr6.eq) goto loc_8209B3D0;
	// lwz r11,468(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 468);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209b3d0
	if (ctx.cr6.eq) goto loc_8209B3D0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r8,248(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// b 0x8209b3d4
	goto loc_8209B3D4;
loc_8209B3D0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8209B3D4:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209b424
	if (!ctx.cr6.eq) goto loc_8209B424;
	// lwz r11,468(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 468);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8209b424
	if (ctx.cr6.eq) goto loc_8209B424;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// b 0x8209b428
	goto loc_8209B428;
loc_8209B424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8209B428:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8209b30c
	if (ctx.cr6.eq) goto loc_8209B30C;
	// bge cr6,0x8209b4bc
	if (!ctx.cr6.lt) goto loc_8209B4BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8209B43C:
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r10,96(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// b 0x8209b304
	goto loc_8209B304;
loc_8209B448:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209b46c
	if (!ctx.cr6.eq) goto loc_8209B46C;
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b470
	if (ctx.cr6.eq) goto loc_8209B470;
loc_8209B46C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8209B470:
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209b494
	if (!ctx.cr6.eq) goto loc_8209B494;
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8209b498
	if (ctx.cr6.eq) goto loc_8209B498;
loc_8209B494:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209B498:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209b30c
	if (ctx.cr6.eq) goto loc_8209B30C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b4bc
	if (ctx.cr6.eq) goto loc_8209B4BC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8209B4BC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209B4C4"))) PPC_WEAK_FUNC(sub_8209B4C4);
PPC_FUNC_IMPL(__imp__sub_8209B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209B4C8"))) PPC_WEAK_FUNC(sub_8209B4C8);
PPC_FUNC_IMPL(__imp__sub_8209B4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8209B4D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8209b4f4
	if (!ctx.cr6.eq) goto loc_8209B4F4;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8209B4F4:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r29,r11,9544
	ctx.r29.s64 = ctx.r11.s64 + 9544;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8209B508:
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209b5d4
	if (ctx.cr6.eq) goto loc_8209B5D4;
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209b5d4
	if (!ctx.cr6.eq) goto loc_8209B5D4;
	// lwz r11,212(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 212);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8209b544
	if (!ctx.cr6.eq) goto loc_8209B544;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r9,r11,17,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209b548
	if (ctx.cr6.eq) goto loc_8209B548;
loc_8209B544:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209B548:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209b5d4
	if (!ctx.cr6.eq) goto loc_8209B5D4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8209b56c
	if (ctx.cr6.eq) goto loc_8209B56C;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8209b5d4
	if (!ctx.cr6.eq) goto loc_8209B5D4;
loc_8209B56C:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF001;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209b5d4
	if (!ctx.cr6.eq) goto loc_8209B5D4;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8209b5d0
	if (ctx.cr6.eq) goto loc_8209B5D0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8209b2d8
	ctx.lr = 0x8209B598;
	sub_8209B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209b5d0
	if (ctx.cr6.eq) goto loc_8209B5D0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8209b5d4
	if (!ctx.cr6.eq) goto loc_8209B5D4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8209b2d8
	ctx.lr = 0x8209B5B0;
	sub_8209B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209b5d0
	if (ctx.cr6.eq) goto loc_8209B5D0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8209b5d4
	if (!ctx.cr6.eq) goto loc_8209B5D4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8209b2d8
	ctx.lr = 0x8209B5C8;
	sub_8209B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209b5d4
	if (!ctx.cr6.eq) goto loc_8209B5D4;
loc_8209B5D0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8209B5D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r30,88
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 88, ctx.xer);
	// blt cr6,0x8209b508
	if (ctx.cr6.lt) goto loc_8209B508;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8209b68c
	if (ctx.cr6.eq) goto loc_8209B68C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8209b640
	if (ctx.cr6.eq) goto loc_8209B640;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8209b2d8
	ctx.lr = 0x8209B608;
	sub_8209B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209b68c
	if (ctx.cr6.eq) goto loc_8209B68C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8209b640
	if (!ctx.cr6.eq) goto loc_8209B640;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8209b2d8
	ctx.lr = 0x8209B620;
	sub_8209B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209b68c
	if (ctx.cr6.eq) goto loc_8209B68C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8209b640
	if (!ctx.cr6.eq) goto loc_8209B640;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8209b2d8
	ctx.lr = 0x8209B638;
	sub_8209B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209b68c
	if (ctx.cr6.eq) goto loc_8209B68C;
loc_8209B640:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,168(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x8209b664
	if (ctx.cr6.eq) goto loc_8209B664;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8209b668
	if (!ctx.cr6.eq) goto loc_8209B668;
loc_8209B664:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209B668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209b680
	if (!ctx.cr6.eq) goto loc_8209B680;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// bl 0x8209fd08
	ctx.lr = 0x8209B680;
	sub_8209FD08(ctx, base);
loc_8209B680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8209B68C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209B698"))) PPC_WEAK_FUNC(sub_8209B698);
PPC_FUNC_IMPL(__imp__sub_8209B698) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,9544
	ctx.r10.s64 = ctx.r11.s64 + 9544;
	// lwz r8,376(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209b6f4
	if (ctx.cr6.eq) goto loc_8209B6F4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// ori r6,r9,296
	ctx.r6.u64 = ctx.r9.u64 | 296;
	// addi r7,r11,20000
	ctx.r7.s64 = ctx.r11.s64 + 20000;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// beq cr6,0x8209b6f4
	if (ctx.cr6.eq) goto loc_8209B6F4;
loc_8209B6D8:
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8209b708
	if (!ctx.cr6.lt) goto loc_8209B708;
	// lwz r3,572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209b6d8
	if (!ctx.cr6.eq) goto loc_8209B6D8;
loc_8209B6F4:
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
loc_8209B708:
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8209b71c
	if (!ctx.cr6.eq) goto loc_8209B71C;
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// stw r11,376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 376, ctx.r11.u32);
	// b 0x8209b728
	goto loc_8209B728;
loc_8209B71C:
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// lwz r9,572(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// stw r9,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r9.u32);
loc_8209B728:
	// lwz r11,380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8209b740
	if (!ctx.cr6.eq) goto loc_8209B740;
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
	// b 0x8209b74c
	goto loc_8209B74C;
loc_8209B740:
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// lwz r9,568(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// stw r9,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r9.u32);
loc_8209B74C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r11.u32);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// lwz r11,384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209B778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8209B78C"))) PPC_WEAK_FUNC(sub_8209B78C);
PPC_FUNC_IMPL(__imp__sub_8209B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209B790"))) PPC_WEAK_FUNC(sub_8209B790);
PPC_FUNC_IMPL(__imp__sub_8209B790) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// beq cr6,0x8209b7d0
	if (ctx.cr6.eq) goto loc_8209B7D0;
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x8209b7f0
	goto loc_8209B7F0;
loc_8209B7D0:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b7f8
	if (ctx.cr6.eq) goto loc_8209B7F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82247340
	ctx.lr = 0x8209B7E4;
	sub_82247340(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8209B7F0:
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_8209B7F8:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27088);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209B828"))) PPC_WEAK_FUNC(sub_8209B828);
PPC_FUNC_IMPL(__imp__sub_8209B828) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82247340
	ctx.lr = 0x8209B844;
	sub_82247340(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
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

__attribute__((alias("__imp__sub_8209B874"))) PPC_WEAK_FUNC(sub_8209B874);
PPC_FUNC_IMPL(__imp__sub_8209B874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209B878"))) PPC_WEAK_FUNC(sub_8209B878);
PPC_FUNC_IMPL(__imp__sub_8209B878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8209B880;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209b92c
	if (ctx.cr6.eq) goto loc_8209B92C;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_8209B89C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209b8b0
	if (!ctx.cr6.eq) goto loc_8209B8B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8209b8d8
	goto loc_8209B8D8;
loc_8209B8B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209B8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8209B8D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b918
	if (ctx.cr6.eq) goto loc_8209B918;
	// lhz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -8);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209b918
	if (!ctx.cr6.eq) goto loc_8209B918;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820a2860
	ctx.lr = 0x8209B908;
	sub_820A2860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b918
	if (ctx.cr6.eq) goto loc_8209B918;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8209B918:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bge cr6,0x8209b938
	if (!ctx.cr6.lt) goto loc_8209B938;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x8209b89c
	if (!ctx.cr0.eq) goto loc_8209B89C;
loc_8209B92C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8209B938:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209B944"))) PPC_WEAK_FUNC(sub_8209B944);
PPC_FUNC_IMPL(__imp__sub_8209B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209B948"))) PPC_WEAK_FUNC(sub_8209B948);
PPC_FUNC_IMPL(__imp__sub_8209B948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8209B950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8209B96C;
	sub_8233EAF0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,316
	ctx.r29.s64 = ctx.r31.s64 + 316;
	// stw r28,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r8.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,96(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwz r6,360(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r3,20
	ctx.r11.u64 = ctx.r3.u32 & 0xFFF;
	// rlwinm r11,r11,0,31,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209ba08
	if (!ctx.cr6.eq) goto loc_8209BA08;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
loc_8209BA08:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// li r8,64
	ctx.r8.s64 = 64;
	// lwz r7,492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,488(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// rlwinm r5,r7,16,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFF0000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 | ctx.r9.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r5,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8209bb18
	if (!ctx.cr6.eq) goto loc_8209BB18;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ba8c
	if (ctx.cr6.eq) goto loc_8209BA8C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8209ba8c
	if (ctx.cr6.eq) goto loc_8209BA8C;
	// bl 0x82172d60
	ctx.lr = 0x8209BA74;
	sub_82172D60(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bge cr6,0x8209ba8c
	if (!ctx.cr6.lt) goto loc_8209BA8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8209BA8C:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x8209baf0
	if (!ctx.cr6.gt) goto loc_8209BAF0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r9.u32);
	// lwz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r6.u32);
	// b 0x8209bb18
	goto loc_8209BB18;
loc_8209BAF0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r28.u32);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r28.u32);
loc_8209BB18:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,84(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8209BB44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209BB50"))) PPC_WEAK_FUNC(sub_8209BB50);
PPC_FUNC_IMPL(__imp__sub_8209BB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8209BB58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82082030
	ctx.lr = 0x8209BB84;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209bc3c
	if (ctx.cr6.eq) goto loc_8209BC3C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r9,r11,5060
	ctx.r9.s64 = ctx.r11.s64 + 5060;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x8209bbc8
	if (!ctx.cr6.gt) goto loc_8209BBC8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8209BBC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8209BBD8;
	sub_82082030(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// beq cr6,0x8209bc28
	if (ctx.cr6.eq) goto loc_8209BC28;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8209BBF8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// bdnz 0x8209bbf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209BBF8;
loc_8209BC28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8209c1b8
	ctx.lr = 0x8209BC34;
	sub_8209C1B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8209BC3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8209c1b8
	ctx.lr = 0x8209BC48;
	sub_8209C1B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209BC50"))) PPC_WEAK_FUNC(sub_8209BC50);
PPC_FUNC_IMPL(__imp__sub_8209BC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82247360
	ctx.lr = 0x8209BC94;
	sub_82247360(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82246e60
	ctx.lr = 0x8209BCAC;
	sub_82246E60(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8209BCD0;
	sub_82305000(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8209BCF0;
	sub_82305000(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209BD18"))) PPC_WEAK_FUNC(sub_8209BD18);
PPC_FUNC_IMPL(__imp__sub_8209BD18) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x8209c260
	ctx.lr = 0x8209BD2C;
	sub_8209C260(ctx, base);
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

__attribute__((alias("__imp__sub_8209BD40"))) PPC_WEAK_FUNC(sub_8209BD40);
PPC_FUNC_IMPL(__imp__sub_8209BD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,5060
	ctx.r9.s64 = ctx.r10.s64 + 5060;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8209bd80
	if (ctx.cr6.eq) goto loc_8209BD80;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209BD80;
	sub_82080000(ctx, base);
loc_8209BD80:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-23436
	ctx.r9.s64 = ctx.r11.s64 + -23436;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8209bda4
	if (ctx.cr6.eq) goto loc_8209BDA4;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209BDA4;
	sub_82080000(ctx, base);
loc_8209BDA4:
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

__attribute__((alias("__imp__sub_8209BDC0"))) PPC_WEAK_FUNC(sub_8209BDC0);
PPC_FUNC_IMPL(__imp__sub_8209BDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8209BDC8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,15640
	ctx.r30.s64 = ctx.r11.s64 + 15640;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r27,15640(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15640);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f31,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ble cr6,0x8209bea8
	if (!ctx.cr6.gt) goto loc_8209BEA8;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8209bea8
	if (!ctx.cr6.gt) goto loc_8209BEA8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BE4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209be8c
	if (ctx.cr6.eq) goto loc_8209BE8C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8209be8c
	if (!ctx.cr6.gt) goto loc_8209BE8C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209BE8C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209BEA8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209bf78
	if (ctx.cr6.eq) goto loc_8209BF78;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8209bf5c
	if (!ctx.cr6.gt) goto loc_8209BF5C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209bf30
	if (!ctx.cr6.eq) goto loc_8209BF30;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209bf30
	if (ctx.cr6.eq) goto loc_8209BF30;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8209BF28:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8209bf28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209BF28;
loc_8209BF30:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209BF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209BF5C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209BF78:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209BF84"))) PPC_WEAK_FUNC(sub_8209BF84);
PPC_FUNC_IMPL(__imp__sub_8209BF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209BF88"))) PPC_WEAK_FUNC(sub_8209BF88);
PPC_FUNC_IMPL(__imp__sub_8209BF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8209BF90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// addi r9,r11,5072
	ctx.r9.s64 = ctx.r11.s64 + 5072;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mullw r30,r6,r7
	ctx.r30.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8209bfe0
	if (!ctx.cr6.gt) goto loc_8209BFE0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8209BFE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8209BFF0;
	sub_82082030(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8209c064
	if (ctx.cr6.lt) goto loc_8209C064;
	// subfic r6,r28,4
	ctx.xer.ca = ctx.r28.u32 <= 4;
	ctx.r6.s64 = 4 - ctx.r28.s64;
	// addi r5,r30,-3
	ctx.r5.s64 = ctx.r30.s64 + -3;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// subfic r4,r28,-8
	ctx.xer.ca = ctx.r28.u32 <= 4294967288;
	ctx.r4.s64 = -8 - ctx.r28.s64;
loc_8209C014:
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// stfsx f0,r8,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfsx f11,r3,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8209c014
	if (ctx.cr6.lt) goto loc_8209C014;
loc_8209C064:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8209c08c
	if (!ctx.cr6.lt) goto loc_8209C08C;
	// subf r10,r9,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209C078:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209c078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209C078;
loc_8209C08C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209C098"))) PPC_WEAK_FUNC(sub_8209C098);
PPC_FUNC_IMPL(__imp__sub_8209C098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,5072
	ctx.r9.s64 = ctx.r10.s64 + 5072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8209c0d8
	if (ctx.cr6.eq) goto loc_8209C0D8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209C0D8;
	sub_82080000(ctx, base);
loc_8209C0D8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-23436
	ctx.r9.s64 = ctx.r11.s64 + -23436;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8209c0fc
	if (ctx.cr6.eq) goto loc_8209C0FC;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209C0FC;
	sub_82080000(ctx, base);
loc_8209C0FC:
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

__attribute__((alias("__imp__sub_8209C118"))) PPC_WEAK_FUNC(sub_8209C118);
PPC_FUNC_IMPL(__imp__sub_8209C118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8209C144"))) PPC_WEAK_FUNC(sub_8209C144);
PPC_FUNC_IMPL(__imp__sub_8209C144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C148"))) PPC_WEAK_FUNC(sub_8209C148);
PPC_FUNC_IMPL(__imp__sub_8209C148) {
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
	// addi r9,r11,-23436
	ctx.r9.s64 = ctx.r11.s64 + -23436;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8209c180
	if (ctx.cr6.eq) goto loc_8209C180;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209C180;
	sub_82080000(ctx, base);
loc_8209C180:
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

__attribute__((alias("__imp__sub_8209C198"))) PPC_WEAK_FUNC(sub_8209C198);
PPC_FUNC_IMPL(__imp__sub_8209C198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8209C1B8"))) PPC_WEAK_FUNC(sub_8209C1B8);
PPC_FUNC_IMPL(__imp__sub_8209C1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8209C1C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x8209C1DC;
	sub_823052D8(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209c1f4
	if (ctx.cr6.eq) goto loc_8209C1F4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x8209c1f8
	goto loc_8209C1F8;
loc_8209C1F4:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8209C1F8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822473f8
	ctx.lr = 0x8209C22C;
	sub_822473F8(ctx, base);
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
loc_8209C230:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8209c230
	if (!ctx.cr0.eq) goto loc_8209C230;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x8209C254;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209C25C"))) PPC_WEAK_FUNC(sub_8209C25C);
PPC_FUNC_IMPL(__imp__sub_8209C25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C260"))) PPC_WEAK_FUNC(sub_8209C260);
PPC_FUNC_IMPL(__imp__sub_8209C260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8209C268;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209c3f4
	if (!ctx.cr6.eq) goto loc_8209C3F4;
	// addi r25,r3,20
	ctx.r25.s64 = ctx.r3.s64 + 20;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8209C288:
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82247250
	ctx.lr = 0x8209C294;
	sub_82247250(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c2c4
	if (ctx.cr6.eq) goto loc_8209C2C4;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
loc_8209C2A8:
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
	// bne 0x8209c2a8
	if (!ctx.cr0.eq) goto loc_8209C2A8;
loc_8209C2C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c3e8
	if (ctx.cr6.eq) goto loc_8209C3E8;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82247250
	ctx.lr = 0x8209C2D8;
	sub_82247250(ctx, base);
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// beq cr6,0x8209c3b8
	if (ctx.cr6.eq) goto loc_8209C3B8;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x8209c3b8
	if (ctx.cr6.eq) goto loc_8209C3B8;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823052d8
	ctx.lr = 0x8209C2F8;
	sub_823052D8(ctx, base);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x8209C308;
	sub_823052D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8209c328
	if (!ctx.cr6.eq) goto loc_8209C328;
	// bl 0x823051a8
	ctx.lr = 0x8209C31C;
	sub_823051A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x8209C324;
	sub_823051A8(ctx, base);
	// b 0x8209c3e8
	goto loc_8209C3E8;
loc_8209C328:
	// bl 0x823051a8
	ctx.lr = 0x8209C32C;
	sub_823051A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209C340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x8209C34C;
	sub_823052D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c38c
	if (ctx.cr6.eq) goto loc_8209C38C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209c37c
	if (!ctx.cr6.eq) goto loc_8209C37C;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x8209c380
	goto loc_8209C380;
loc_8209C37C:
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
loc_8209C380:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8209C38C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x8209C394;
	sub_823051A8(ctx, base);
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
	ctx.lr = 0x8209C3AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823051a8
	ctx.lr = 0x8209C3B4;
	sub_823051A8(ctx, base);
	// b 0x8209c3e8
	goto loc_8209C3E8;
loc_8209C3B8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822473f8
	ctx.lr = 0x8209C3C8;
	sub_822473F8(ctx, base);
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
loc_8209C3CC:
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
	// bne 0x8209c3cc
	if (!ctx.cr0.eq) goto loc_8209C3CC;
loc_8209C3E8:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c288
	if (ctx.cr6.eq) goto loc_8209C288;
loc_8209C3F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209C3FC"))) PPC_WEAK_FUNC(sub_8209C3FC);
PPC_FUNC_IMPL(__imp__sub_8209C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C400"))) PPC_WEAK_FUNC(sub_8209C400);
PPC_FUNC_IMPL(__imp__sub_8209C400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8209C408;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,52
	ctx.r26.s64 = ctx.r3.s64 + 52;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823052d8
	ctx.lr = 0x8209C424;
	sub_823052D8(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209c4d8
	if (ctx.cr6.eq) goto loc_8209C4D8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8209C438:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209C450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8209c4cc
	if (!ctx.cr6.eq) goto loc_8209C4CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8209c470
	if (!ctx.cr6.eq) goto loc_8209C470;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8209c47c
	goto loc_8209C47C;
loc_8209C470:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8209C47C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8209c494
	if (!ctx.cr6.eq) goto loc_8209C494;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x8209c4a0
	goto loc_8209C4A0;
loc_8209C494:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8209C4A0:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209C4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209C4CC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8209c438
	if (!ctx.cr6.eq) goto loc_8209C438;
loc_8209C4D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823051a8
	ctx.lr = 0x8209C4E0;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209C4E8"))) PPC_WEAK_FUNC(sub_8209C4E8);
PPC_FUNC_IMPL(__imp__sub_8209C4E8) {
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
	// bl 0x82247250
	ctx.lr = 0x8209C504;
	sub_82247250(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c534
	if (ctx.cr6.eq) goto loc_8209C534;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8209C518:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8209c518
	if (!ctx.cr0.eq) goto loc_8209C518;
loc_8209C534:
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

__attribute__((alias("__imp__sub_8209C548"))) PPC_WEAK_FUNC(sub_8209C548);
PPC_FUNC_IMPL(__imp__sub_8209C548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822473f8
	ctx.lr = 0x8209C570;
	sub_822473F8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209c5a0
	if (ctx.cr6.eq) goto loc_8209C5A0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8209C580:
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
	// bne 0x8209c580
	if (!ctx.cr0.eq) goto loc_8209C580;
	// bdnz 0x8209c580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209C580;
loc_8209C5A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C5C0"))) PPC_WEAK_FUNC(sub_8209C5C0);
PPC_FUNC_IMPL(__imp__sub_8209C5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r11,15640
	ctx.r30.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c5f4
	if (ctx.cr6.eq) goto loc_8209C5F4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209C5F4;
	sub_82080000(ctx, base);
loc_8209C5F4:
	// lwz r31,2176(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2176);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209c68c
	if (ctx.cr6.eq) goto loc_8209C68C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// bl 0x82305448
	ctx.lr = 0x8209C610;
	sub_82305448(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c630
	if (ctx.cr6.eq) goto loc_8209C630;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209C630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209C630:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209c650
	if (ctx.cr6.eq) goto loc_8209C650;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x8209C650;
	sub_82246E18(ctx, base);
loc_8209C650:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209c668
	if (ctx.cr6.eq) goto loc_8209C668;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x8209C668;
	sub_82246E18(ctx, base);
loc_8209C668:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82246e18
	ctx.lr = 0x8209C670;
	sub_82246E18(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c680
	if (ctx.cr6.eq) goto loc_8209C680;
	// bl 0x82246e18
	ctx.lr = 0x8209C680;
	sub_82246E18(ctx, base);
loc_8209C680:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209C68C;
	sub_82080000(ctx, base);
loc_8209C68C:
	// bl 0x8209ccd0
	ctx.lr = 0x8209C690;
	sub_8209CCD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,5784
	ctx.r11.s64 = ctx.r11.s64 + 5784;
	// stw r11,2144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2144, ctx.r11.u32);
	// bl 0x82088920
	ctx.lr = 0x8209C6A0;
	sub_82088920(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C6B8"))) PPC_WEAK_FUNC(sub_8209C6B8);
PPC_FUNC_IMPL(__imp__sub_8209C6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8209c750
	if (ctx.cr6.eq) goto loc_8209C750;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8209C6D8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,2352(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r5,r6,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209c740
	if (ctx.cr6.eq) goto loc_8209C740;
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c740
	if (ctx.cr6.eq) goto loc_8209C740;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// divwu r6,r10,r3
	ctx.r6.u32 = ctx.r10.u32 / ctx.r3.u32;
	// twllei r3,0
	// mullw r5,r6,r3
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// subf r3,r5,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c740
	if (ctx.cr6.eq) goto loc_8209C740;
loc_8209C728:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209c7a8
	if (ctx.cr6.eq) goto loc_8209C7A8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209c728
	if (!ctx.cr6.eq) goto loc_8209C728;
loc_8209C740:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8209c6d8
	if (ctx.cr6.lt) goto loc_8209C6D8;
loc_8209C750:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,15640
	ctx.r8.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2132);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// divwu r4,r10,r6
	ctx.r4.u32 = ctx.r10.u32 / ctx.r6.u32;
	// twllei r6,0
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c7a4
	if (ctx.cr6.eq) goto loc_8209C7A4;
loc_8209C78C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209c7a4
	if (ctx.cr6.eq) goto loc_8209C7A4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209c78c
	if (!ctx.cr6.eq) goto loc_8209C78C;
loc_8209C7A4:
	// blr 
	return;
loc_8209C7A8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C7B0"))) PPC_WEAK_FUNC(sub_8209C7B0);
PPC_FUNC_IMPL(__imp__sub_8209C7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r9,r4,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r6,r4,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// li r31,87
	ctx.r31.s64 = 87;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r6.s64;
	// rlwinm r7,r4,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r7.s64;
	// clrlwi r10,r8,28
	ctx.r10.u64 = ctx.r8.u32 & 0xF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// li r8,67
	ctx.r8.s64 = 67;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,63
	ctx.r10.s64 = ctx.r10.s64 + 63;
	// addi r9,r9,63
	ctx.r9.s64 = ctx.r9.s64 + 63;
	// stb r11,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r11.u8);
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// stb r10,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r10.u8);
	// and r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 & ctx.r31.u64;
	// stb r9,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r9.u8);
	// stb r8,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r8.u8);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// stb r7,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r7.u8);
	// stb r11,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r11.u8);
	// stb r11,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r11.u8);
	// stb r11,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r11.u8);
	// stb r11,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r11.u8);
	// bne cr6,0x8209c870
	if (!ctx.cr6.eq) goto loc_8209C870;
	// rlwinm r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// rlwinm r10,r4,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// clrlwi r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	// stb r4,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r4.u8);
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// stb r3,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r3.u8);
	// b 0x8209ca58
	goto loc_8209CA58;
loc_8209C870:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bne cr6,0x8209ca58
	if (!ctx.cr6.eq) goto loc_8209CA58;
	// rlwinm r11,r4,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// rlwinm r10,r4,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x600;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r4,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC0;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfe r9,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r10,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x8209c998
	if (ctx.cr6.eq) goto loc_8209C998;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209c920
	if (ctx.cr6.eq) goto loc_8209C920;
	// rlwinm r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// rlwinm r10,r4,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// rlwinm r8,r4,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// rlwinm r4,r4,0,21,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r8.s64;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r4.s64;
	// rlwinm r9,r9,0,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	// rlwinm r8,r7,0,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1C;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r8,r8,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r6,r11,63
	ctx.r6.s64 = ctx.r11.s64 + 63;
	// addi r4,r10,63
	ctx.r4.s64 = ctx.r10.s64 + 63;
	// addi r3,r9,63
	ctx.r3.s64 = ctx.r9.s64 + 63;
	// stb r6,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r6.u8);
	// addi r11,r8,63
	ctx.r11.s64 = ctx.r8.s64 + 63;
	// stb r4,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r4.u8);
	// stb r3,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r3.u8);
	// stb r11,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r11.u8);
	// b 0x8209ca58
	goto loc_8209CA58;
loc_8209C920:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c998
	if (ctx.cr6.eq) goto loc_8209C998;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c998
	if (ctx.cr6.eq) goto loc_8209C998;
	// rlwinm r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// rlwinm r10,r4,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// rlwinm r8,r4,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// rlwinm r4,r4,0,24,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r8.s64;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r4.s64;
	// clrlwi r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// rlwinm r8,r7,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// addi r6,r11,63
	ctx.r6.s64 = ctx.r11.s64 + 63;
	// addi r4,r10,63
	ctx.r4.s64 = ctx.r10.s64 + 63;
	// addi r3,r9,63
	ctx.r3.s64 = ctx.r9.s64 + 63;
	// stb r6,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r6.u8);
	// addi r11,r8,63
	ctx.r11.s64 = ctx.r8.s64 + 63;
	// stb r4,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r4.u8);
	// stb r3,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r3.u8);
	// stb r11,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r11.u8);
	// b 0x8209ca58
	goto loc_8209CA58;
loc_8209C998:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ca1c
	if (ctx.cr6.eq) goto loc_8209CA1C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ca1c
	if (ctx.cr6.eq) goto loc_8209CA1C;
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// rlwinm r10,r4,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// rlwinm r8,r4,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// rlwinm r4,r4,0,21,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r8.s64;
	// rlwinm r11,r7,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r4.s64;
	// rlwinm r9,r9,0,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r3,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// rlwinm r8,r7,0,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1C;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r8,r8,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r6,r11,63
	ctx.r6.s64 = ctx.r11.s64 + 63;
	// addi r4,r10,63
	ctx.r4.s64 = ctx.r10.s64 + 63;
	// addi r3,r9,63
	ctx.r3.s64 = ctx.r9.s64 + 63;
	// stb r6,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r6.u8);
	// addi r11,r8,63
	ctx.r11.s64 = ctx.r8.s64 + 63;
	// stb r4,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r4.u8);
	// stb r3,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r3.u8);
	// stb r11,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r11.u8);
	// b 0x8209ca58
	goto loc_8209CA58;
loc_8209CA1C:
	// rlwinm r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// rlwinm r9,r4,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// li r10,63
	ctx.r10.s64 = 63;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r9.s64;
	// stb r10,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r10.u8);
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// stb r10,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r10.u8);
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// stb r3,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r3.u8);
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// stb r11,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r11.u8);
loc_8209CA58:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,-33
	ctx.r11.s64 = ctx.r1.s64 + -33;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209CA68:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8209ca68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209CA68;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209CA7C"))) PPC_WEAK_FUNC(sub_8209CA7C);
PPC_FUNC_IMPL(__imp__sub_8209CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209CA80"))) PPC_WEAK_FUNC(sub_8209CA80);
PPC_FUNC_IMPL(__imp__sub_8209CA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x8209CA88;
	__savegprlr_22(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209CAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209caec
	if (ctx.cr6.eq) goto loc_8209CAEC;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82247328
	ctx.lr = 0x8209CABC;
	sub_82247328(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8209caf0
	goto loc_8209CAF0;
loc_8209CAEC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8209CAF0:
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// lis r8,61
	ctx.r8.s64 = 3997696;
	// addi r30,r9,15640
	ctx.r30.s64 = ctx.r9.s64 + 15640;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r7,r8,23808
	ctx.r7.u64 = ctx.r8.u64 | 23808;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r10,14472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14472, ctx.r10.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8209cb24
	if (ctx.cr6.gt) goto loc_8209CB24;
	// mulli r11,r10,1068
	ctx.r11.s64 = ctx.r10.s64 * 1068;
loc_8209CB24:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82082030
	ctx.lr = 0x8209CB38;
	sub_82082030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,14484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14484, ctx.r3.u32);
	// mulli r5,r11,1068
	ctx.r5.s64 = ctx.r11.s64 * 1068;
	// bl 0x8233eaf0
	ctx.lr = 0x8209CB4C;
	sub_8233EAF0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,2
	ctx.r26.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209cb8c
	if (ctx.cr6.eq) goto loc_8209CB8C;
	// lwz r9,14484(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14484);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8209CB6C:
	// sth r26,1030(r9)
	PPC_STORE_U16(ctx.r9.u32 + 1030, ctx.r26.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// lwz r9,14484(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14484);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8209cb6c
	if (ctx.cr6.lt) goto loc_8209CB6C;
loc_8209CB8C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209cc58
	if (ctx.cr6.eq) goto loc_8209CC58;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,8
	ctx.r27.s64 = 8;
loc_8209CBA0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CBBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,1126(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1126);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x8209cbd0
	if (!ctx.cr6.gt) goto loc_8209CBD0;
	// sth r27,1126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1126, ctx.r27.u16);
	// b 0x8209cbe4
	goto loc_8209CBE4;
loc_8209CBD0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8209cbe0
	if (ctx.cr6.eq) goto loc_8209CBE0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8209cbe4
	if (!ctx.cr6.eq) goto loc_8209CBE4;
loc_8209CBE0:
	// sth r26,1126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1126, ctx.r26.u16);
loc_8209CBE4:
	// lwz r11,14484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14484);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8209CBF8;
	sub_8233E4E0(ctx, base);
	// lwz r11,1120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8209cc0c
	if (!ctx.cr6.eq) goto loc_8209CC0C;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// b 0x8209cc1c
	goto loc_8209CC1C;
loc_8209CC0C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209cc1c
	if (ctx.cr6.eq) goto loc_8209CC1C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8209CC1C:
	// lhz r11,1126(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1126);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8209cc30
	if (!ctx.cr6.gt) goto loc_8209CC30;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_8209CC30:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,1068
	ctx.r28.s64 = ctx.r28.s64 + 1068;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8209cba0
	if (ctx.cr6.lt) goto loc_8209CBA0;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8209cc5c
	if (!ctx.cr6.eq) goto loc_8209CC5C;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bne cr6,0x8209cc5c
	if (!ctx.cr6.eq) goto loc_8209CC5C;
loc_8209CC58:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8209CC5C:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// sth r26,1126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1126, ctx.r26.u16);
	// beq cr6,0x8209cc94
	if (ctx.cr6.eq) goto loc_8209CC94;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,1126(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1126);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8209cc98
	goto loc_8209CC98;
loc_8209CC94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8209CC98:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,14476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14476, ctx.r31.u32);
	// stw r11,14480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14480, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,15560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15560, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CCC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209CCD0"))) PPC_WEAK_FUNC(sub_8209CCD0);
PPC_FUNC_IMPL(__imp__sub_8209CCD0) {
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
	// addi r31,r11,15640
	ctx.r31.s64 = ctx.r11.s64 + 15640;
	// lwz r3,2124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cd0c
	if (ctx.cr6.eq) goto loc_8209CD0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
loc_8209CD0C:
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cd5c
	if (ctx.cr6.eq) goto loc_8209CD5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,15568
	ctx.r4.s64 = ctx.r31.s64 + 15568;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209CD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8209CD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
loc_8209CD5C:
	// lwz r11,14484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209cd74
	if (ctx.cr6.eq) goto loc_8209CD74;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209CD74;
	sub_82080000(ctx, base);
loc_8209CD74:
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

__attribute__((alias("__imp__sub_8209CD88"))) PPC_WEAK_FUNC(sub_8209CD88);
PPC_FUNC_IMPL(__imp__sub_8209CD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r31,r10,15640
	ctx.r31.s64 = ctx.r10.s64 + 15640;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2120
	ctx.r3.s64 = ctx.r31.s64 + 2120;
	// stw r30,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r10.u32);
	// bl 0x822b4b78
	ctx.lr = 0x8209CDC8;
	sub_822B4B78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8209cdd8
	if (!ctx.cr6.lt) goto loc_8209CDD8;
loc_8209CDD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8209ce68
	goto loc_8209CE68;
loc_8209CDD8:
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// addi r4,r31,15568
	ctx.r4.s64 = ctx.r31.s64 + 15568;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8209cdd0
	if (ctx.cr6.lt) goto loc_8209CDD0;
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// bl 0x8209ca80
	ctx.lr = 0x8209CE00;
	sub_8209CA80(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8209cdd0
	if (ctx.cr6.eq) goto loc_8209CDD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,2120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r31,2124
	ctx.r4.s64 = ctx.r31.s64 + 2124;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209ce60
	if (ctx.cr6.eq) goto loc_8209CE60;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8209ce68
	goto loc_8209CE68;
loc_8209CE60:
	// bl 0x820a2e28
	ctx.lr = 0x8209CE64;
	sub_820A2E28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8209CE68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209CE80"))) PPC_WEAK_FUNC(sub_8209CE80);
PPC_FUNC_IMPL(__imp__sub_8209CE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8209CE88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8209eb80
	ctx.lr = 0x8209CE90;
	sub_8209EB80(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82082030
	ctx.lr = 0x8209CEA4;
	sub_82082030(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cebc
	if (ctx.cr6.eq) goto loc_8209CEBC;
	// bl 0x8209bc50
	ctx.lr = 0x8209CEB4;
	sub_8209BC50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8209cec0
	goto loc_8209CEC0;
loc_8209CEBC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8209CEC0:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,15640
	ctx.r31.s64 = ctx.r11.s64 + 15640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r30,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r30.u32);
	// bl 0x82082030
	ctx.lr = 0x8209CEE0;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cf20
	if (ctx.cr6.eq) goto loc_8209CF20;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// addi r9,r11,21424
	ctx.r9.s64 = ctx.r11.s64 + 21424;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r8,r10,5052
	ctx.r8.s64 = ctx.r10.s64 + 5052;
	// stb r29,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r29.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// b 0x8209cf24
	goto loc_8209CF24;
loc_8209CF20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8209CF24:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,5036
	ctx.r6.s64 = ctx.r10.s64 + 5036;
	// lwz r11,-27100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27100);
	// addis r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 65536;
	// bl 0x82081680
	ctx.lr = 0x8209CF48;
	sub_82081680(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x82247090
	ctx.lr = 0x8209CF58;
	sub_82247090(ctx, base);
	// bl 0x8209cd88
	ctx.lr = 0x8209CF5C;
	sub_8209CD88(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209cff0
	if (ctx.cr6.eq) goto loc_8209CFF0;
	// lwz r11,2140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// addi r3,r31,14488
	ctx.r3.s64 = ctx.r31.s64 + 14488;
	// lwz r10,14484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// li r5,1068
	ctx.r5.s64 = 1068;
	// mulli r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 * 1068;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8209CF84;
	sub_8233E4E0(ctx, base);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// addi r11,r11,13744
	ctx.r11.s64 = ctx.r11.s64 + 13744;
	// addi r10,r10,-21912
	ctx.r10.s64 = ctx.r10.s64 + -21912;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
	// addi r4,r7,10496
	ctx.r4.s64 = ctx.r7.s64 + 10496;
	// stw r10,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r10.u32);
	// stw r9,10496(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10496, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,15556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15556, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// stw r29,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r29.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209CFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209CFF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209CFFC"))) PPC_WEAK_FUNC(sub_8209CFFC);
PPC_FUNC_IMPL(__imp__sub_8209CFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209D000"))) PPC_WEAK_FUNC(sub_8209D000);
PPC_FUNC_IMPL(__imp__sub_8209D000) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8209D02C;
	sub_8233EAF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D034;
	sub_8208D070(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D040;
	sub_8208D070(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// bl 0x8208d070
	ctx.lr = 0x8209D050;
	sub_8208D070(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D05C;
	sub_8208D070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D064;
	sub_8208D070(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D070;
	sub_8208D070(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D07C;
	sub_8208D070(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D088;
	sub_8208D070(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x8208d070
	ctx.lr = 0x8209D09C;
	sub_8208D070(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D0A8;
	sub_8208D070(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D0B4;
	sub_8208D070(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D0C0;
	sub_8208D070(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D0CC;
	sub_8208D070(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// bl 0x8208cfb0
	ctx.lr = 0x8209D0E0;
	sub_8208CFB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D0E8;
	sub_8208D070(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209D104"))) PPC_WEAK_FUNC(sub_8209D104);
PPC_FUNC_IMPL(__imp__sub_8209D104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209D108"))) PPC_WEAK_FUNC(sub_8209D108);
PPC_FUNC_IMPL(__imp__sub_8209D108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x8209D110;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// bl 0x82082030
	ctx.lr = 0x8209D148;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq cr6,0x8209d1c8
	if (ctx.cr6.eq) goto loc_8209D1C8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// std r23,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r23.u64);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// addi r10,r11,-26316
	ctx.r10.s64 = ctx.r11.s64 + -26316;
	// stw r23,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r23.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r23,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r23.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// sth r23,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r23.u16);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// sth r23,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r23.u16);
	// stb r23,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r23.u8);
	// stw r23,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r23.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r23,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r23.u32);
	// stw r23,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r23.u32);
	// stw r23,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r23.u32);
	// stw r23,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r23.u32);
	// stw r23,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r23.u32);
	// stw r23,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r23.u32);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// stw r23,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r23.u32);
	// stw r23,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r23.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// std r6,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// b 0x8209d1cc
	goto loc_8209D1CC;
loc_8209D1C8:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
loc_8209D1CC:
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821b7fa8
	ctx.lr = 0x8209D1E4;
	sub_821B7FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d4d8
	if (ctx.cr6.eq) goto loc_8209D4D8;
	// ld r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8209d4d8
	if (ctx.cr6.eq) goto loc_8209D4D8;
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x8209d4d8
	if (ctx.cr6.eq) goto loc_8209D4D8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D20C;
	sub_8208D070(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8208d070
	ctx.lr = 0x8209D214;
	sub_8208D070(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r20,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
	// bl 0x8208d070
	ctx.lr = 0x8209D224;
	sub_8208D070(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r21,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r21.u32);
	// bl 0x8208d070
	ctx.lr = 0x8209D234;
	sub_8208D070(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r10,r3,r21
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r21.s32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mulli r27,r10,120
	ctx.r27.s64 = ctx.r10.s64 * 120;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x8209d260
	if (ctx.cr6.eq) goto loc_8209D260;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8209D260:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8209D270;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// rlwinm r30,r24,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8209D290;
	sub_8208CFB0(ctx, base);
	// lwz r25,300(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r6,292(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x8208c920
	ctx.lr = 0x8209D2B0;
	sub_8208C920(ctx, base);
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8209d334
	if (ctx.cr6.eq) goto loc_8209D334;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// li r28,3001
	ctx.r28.s64 = 3001;
loc_8209D2CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209d318
	if (ctx.cr6.eq) goto loc_8209D318;
	// stw r23,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,12004
	ctx.r3.s64 = 12004;
	// bl 0x82082030
	ctx.lr = 0x8209D2EC;
	sub_82082030(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_8209D2FC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209d2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209D2FC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// b 0x8209d31c
	goto loc_8209D31C;
loc_8209D318:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8209D31C:
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stwx r11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8209d2cc
	if (!ctx.cr0.eq) goto loc_8209D2CC;
loc_8209D334:
	// cmplwi cr6,r20,11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 11, ctx.xer);
	// blt cr6,0x8209d34c
	if (ctx.cr6.lt) goto loc_8209D34C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8209D34C;
	sub_8208CFB0(ctx, base);
loc_8209D34C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r10,r11,-14440
	ctx.r10.s64 = ctx.r11.s64 + -14440;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// beq cr6,0x8209d42c
	if (ctx.cr6.eq) goto loc_8209D42C;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_8209D374:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8209d41c
	if (ctx.cr6.eq) goto loc_8209D41C;
loc_8209D380:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplwi cr6,r20,11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 11, ctx.xer);
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bge cr6,0x8209d3a0
	if (!ctx.cr6.lt) goto loc_8209D3A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8209d000
	ctx.lr = 0x8209D3A0;
	sub_8209D000(ctx, base);
loc_8209D3A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8209d410
	if (ctx.cr6.eq) goto loc_8209D410;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r5,r8,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r5,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r5.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwzx r10,r27,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// divwu r7,r11,r8
	ctx.r7.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// twllei r8,0
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r31,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_8209D410:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8209d380
	if (ctx.cr6.lt) goto loc_8209D380;
loc_8209D41C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8209d374
	if (!ctx.cr0.eq) goto loc_8209D374;
loc_8209D42C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209d4a0
	if (ctx.cr6.eq) goto loc_8209D4A0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8209D448:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8209d468
	if (!ctx.cr6.eq) goto loc_8209D468;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8209d448
	if (ctx.cr6.lt) goto loc_8209D448;
	// b 0x8209d4a0
	goto loc_8209D4A0;
loc_8209D468:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209d4a0
	if (ctx.cr6.eq) goto loc_8209D4A0;
loc_8209D478:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209d510
	ctx.lr = 0x8209D488;
	sub_8209D510(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8209e760
	ctx.lr = 0x8209D494;
	sub_8209E760(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209d478
	if (!ctx.cr6.eq) goto loc_8209D478;
loc_8209D4A0:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209D4B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209D4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_8209D4D8:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209D4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209D504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209D510"))) PPC_WEAK_FUNC(sub_8209D510);
PPC_FUNC_IMPL(__imp__sub_8209D510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8209D518;
	__savegprlr_25(ctx, base);
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8209d538
	if (!ctx.cr6.eq) goto loc_8209D538;
loc_8209D530:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8209D538:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// twllei r9,0
	// divwu r7,r11,r9
	ctx.r7.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r3,r6,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8209d584
	if (ctx.cr6.eq) goto loc_8209D584;
loc_8209D56C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8209d58c
	if (ctx.cr6.eq) goto loc_8209D58C;
	// lwz r28,16(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8209d56c
	if (!ctx.cr6.eq) goto loc_8209D56C;
loc_8209D584:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8209d590
	goto loc_8209D590;
loc_8209D58C:
	// addi r6,r28,60
	ctx.r6.s64 = ctx.r28.s64 + 60;
loc_8209D590:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,31376
	ctx.r27.s64 = ctx.r11.s64 + 31376;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f12,92(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,584(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 584);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8209d6e4
	if (ctx.cr6.eq) goto loc_8209D6E4;
loc_8209D5AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8209d6d4
	if (ctx.cr6.eq) goto loc_8209D6D4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8209D5C8:
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// twllei r8,0
	// divwu r11,r10,r8
	ctx.r11.u32 = ctx.r10.u32 / ctx.r8.u32;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d530
	if (ctx.cr6.eq) goto loc_8209D530;
loc_8209D5EC:
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209d60c
	if (ctx.cr6.eq) goto loc_8209D60C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209d5ec
	if (!ctx.cr6.eq) goto loc_8209D5EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8209D60C:
	// lhz r10,18(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 18);
	// lhz r25,78(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8209d650
	if (!ctx.cr6.eq) goto loc_8209D650;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r25,64(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// cmpwi cr6,r10,1536
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1536, ctx.xer);
	// bgt cr6,0x8209d650
	if (ctx.cr6.gt) goto loc_8209D650;
	// cmpwi cr6,r10,-1536
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1536, ctx.xer);
	// blt cr6,0x8209d650
	if (ctx.cr6.lt) goto loc_8209D650;
	// lhz r10,62(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// lhz r25,2(r6)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8209d654
	goto loc_8209D654;
loc_8209D650:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8209D654:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209d530
	if (ctx.cr6.eq) goto loc_8209D530;
	// lhz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// lhz r25,12(r6)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8209d530
	if (!ctx.cr6.eq) goto loc_8209D530;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209d530
	if (ctx.cr6.eq) goto loc_8209D530;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// std r10,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r10.u64);
	// lfd f0,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// std r11,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r11.u64);
	// lfd f11,-72(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8209d6b4
	if (!ctx.cr6.gt) goto loc_8209D6B4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8209D6B4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8209d6c0
	if (!ctx.cr6.lt) goto loc_8209D6C0;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_8209D6C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8209d5c8
	if (ctx.cr6.lt) goto loc_8209D5C8;
loc_8209D6D4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8209d5ac
	if (ctx.cr6.lt) goto loc_8209D5AC;
loc_8209D6E4:
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8209d530
	if (ctx.cr6.gt) goto loc_8209D530;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r28,60
	ctx.r11.s64 = ctx.r28.s64 + 60;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lfs f0,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209D718"))) PPC_WEAK_FUNC(sub_8209D718);
PPC_FUNC_IMPL(__imp__sub_8209D718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f7,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f5,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f1
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f3,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f7,f1
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f13,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f5,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f3,f1
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8209e118
	ctx.lr = 0x8209D7AC;
	sub_8209E118(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209D7BC"))) PPC_WEAK_FUNC(sub_8209D7BC);
PPC_FUNC_IMPL(__imp__sub_8209D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209D7C0"))) PPC_WEAK_FUNC(sub_8209D7C0);
PPC_FUNC_IMPL(__imp__sub_8209D7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x8209d960
	if (!ctx.cr6.eq) goto loc_8209D960;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// bgt cr6,0x8209d858
	if (ctx.cr6.gt) goto loc_8209D858;
	// lfs f0,268(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x8209d83c
	if (!ctx.cr6.eq) goto loc_8209D83C;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8209D83C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8209e118
	ctx.lr = 0x8209D848;
	sub_8209E118(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8209D858:
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f1,200(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f1,256(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f1,284(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// bgt cr6,0x8209d914
	if (ctx.cr6.gt) goto loc_8209D914;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,6
	ctx.r6.s64 = 6;
	// bl 0x8209e118
	ctx.lr = 0x8209D904;
	sub_8209E118(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8209D914:
	// stfs f0,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f0,316(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f0,332(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// bl 0x8209e118
	ctx.lr = 0x8209D950;
	sub_8209E118(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8209D960:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x8209da24
	if (!ctx.cr6.eq) goto loc_8209DA24;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8209d98c
	if (ctx.cr6.eq) goto loc_8209D98C;
	// lfs f13,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// b 0x8209d990
	goto loc_8209D990;
loc_8209D98C:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_8209D990:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209d9a4
	if (ctx.cr6.eq) goto loc_8209D9A4;
	// lfs f13,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// b 0x8209d9a8
	goto loc_8209D9A8;
loc_8209D9A4:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_8209D9A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209d9b8
	if (ctx.cr6.eq) goto loc_8209D9B8;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// b 0x8209d9bc
	goto loc_8209D9BC;
loc_8209D9B8:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8209D9BC:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bne cr6,0x8209da08
	if (!ctx.cr6.eq) goto loc_8209DA08;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8209DA08:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8209e118
	ctx.lr = 0x8209DA14;
	sub_8209E118(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8209DA24:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,31376
	ctx.r10.s64 = ctx.r10.s64 + 31376;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f10,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x8209da48
	if (ctx.cr6.eq) goto loc_8209DA48;
	// lfs f0,228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x8209da4c
	goto loc_8209DA4C;
loc_8209DA48:
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
loc_8209DA4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209da5c
	if (ctx.cr6.eq) goto loc_8209DA5C;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// b 0x8209da60
	goto loc_8209DA60;
loc_8209DA5C:
	// fmr f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f10.f64;
loc_8209DA60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209da70
	if (ctx.cr6.eq) goto loc_8209DA70;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// b 0x8209da74
	goto loc_8209DA74;
loc_8209DA70:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_8209DA74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209da8c
	if (!ctx.cr6.eq) goto loc_8209DA8C;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x8209da8c
	if (ctx.cr6.eq) goto loc_8209DA8C;
	// lfs f13,268(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8209DA8C:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8209e118
	ctx.lr = 0x8209DAB8;
	sub_8209E118(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209DAC8"))) PPC_WEAK_FUNC(sub_8209DAC8);
PPC_FUNC_IMPL(__imp__sub_8209DAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x8209DAD0;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r23,r11,31376
	ctx.r23.s64 = ctx.r11.s64 + 31376;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mullw r7,r5,r6
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f9,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,48(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,-27096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r20,r6,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82388734
	ctx.lr = 0x8209DB54;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209db60
	if (!ctx.cr6.eq) goto loc_8209DB60;
	// bl 0x821b3000
	ctx.lr = 0x8209DB60;
	sub_821B3000(ctx, base);
loc_8209DB60:
	// addi r10,r30,15
	ctx.r10.s64 = ctx.r30.s64 + 15;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r25,r3,20
	ctx.r25.s64 = ctx.r3.s64 + 20;
	// rlwinm r24,r10,0,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r19,-13569
	ctx.r19.s64 = -889257984;
	// add r8,r24,r11
	ctx.r8.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8209db90
	if (!ctx.cr6.gt) goto loc_8209DB90;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r10.u32);
loc_8209DB90:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// beq cr6,0x8209dc9c
	if (ctx.cr6.eq) goto loc_8209DC9C;
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// add r27,r30,r26
	ctx.r27.u64 = ctx.r30.u64 + ctx.r26.u64;
loc_8209DBBC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8209dc44
	if (ctx.cr6.lt) goto loc_8209DC44;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r3,r29,-3
	ctx.r3.s64 = ctx.r29.s64 + -3;
	// subf r8,r11,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// subf r7,r11,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r11.s64;
loc_8209DC08:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfsux f12,r8,r11
	temp.f32 = float(ctx.f12.f64);
	ea = ctx.r8.u32 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsux f10,r7,r11
	temp.f32 = float(ctx.f10.f64);
	ea = ctx.r7.u32 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// stfsux f9,r6,r11
	temp.f32 = float(ctx.f9.f64);
	ea = ctx.r6.u32 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// stfsux f8,r5,r11
	temp.f32 = float(ctx.f8.f64);
	ea = ctx.r5.u32 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// blt cr6,0x8209dc08
	if (ctx.cr6.lt) goto loc_8209DC08;
loc_8209DC44:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8209dc88
	if (!ctx.cr6.lt) goto loc_8209DC88;
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r26,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r26.s64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8209DC78:
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsux f0,r10,r26
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r10.u32 + ctx.r26.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8209dc78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209DC78;
loc_8209DC88:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8209dbbc
	if (ctx.cr6.lt) goto loc_8209DBBC;
loc_8209DC9C:
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bne cr6,0x8209dcb4
	if (!ctx.cr6.eq) goto loc_8209DCB4;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bne cr6,0x8209dcb4
	if (!ctx.cr6.eq) goto loc_8209DCB4;
	// lfs f0,36(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
loc_8209DCB4:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8209e118
	ctx.lr = 0x8209DCD0;
	sub_8209E118(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209dd18
	if (ctx.cr6.eq) goto loc_8209DD18;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x8209dcf0
	if (!ctx.cr6.gt) goto loc_8209DCF0;
	// stw r9,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r9.u32);
loc_8209DCF0:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8209dd0c
	if (ctx.cr6.eq) goto loc_8209DD0C;
	// stw r9,-13570(r19)
	PPC_STORE_U32(ctx.r19.u32 + -13570, ctx.r9.u32);
loc_8209DD0C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
loc_8209DD18:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209DD24"))) PPC_WEAK_FUNC(sub_8209DD24);
PPC_FUNC_IMPL(__imp__sub_8209DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209DD28"))) PPC_WEAK_FUNC(sub_8209DD28);
PPC_FUNC_IMPL(__imp__sub_8209DD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8209DD30;
	__savegprlr_27(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8209e688
	ctx.lr = 0x8209DD38;
	sub_8209E688(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r31,r11,15640
	ctx.r31.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82247218
	ctx.lr = 0x8209DD4C;
	sub_82247218(ctx, base);
	// lbz r10,15572(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15572);
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209deb0
	if (!ctx.cr6.eq) goto loc_8209DEB0;
	// lwz r11,15564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15564);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// stw r11,15564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15564, ctx.r11.u32);
	// ble cr6,0x8209deb0
	if (!ctx.cr6.gt) goto loc_8209DEB0;
	// lwz r11,2140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// stw r10,15564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15564, ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8209dd94
	if (!ctx.cr6.eq) goto loc_8209DD94;
	// lhz r10,15518(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 15518);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209dd94
	if (!ctx.cr6.eq) goto loc_8209DD94;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8209ddd0
	goto loc_8209DDD0;
loc_8209DD94:
	// mulli r9,r11,1068
	ctx.r9.s64 = ctx.r11.s64 * 1068;
	// lwz r10,14484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// addi r11,r31,14488
	ctx.r11.s64 = ctx.r31.s64 + 14488;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r11,512
	ctx.r8.s64 = ctx.r11.s64 + 512;
loc_8209DDA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8209ddc8
	if (!ctx.cr0.eq) goto loc_8209DDC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8209dda8
	if (!ctx.cr6.eq) goto loc_8209DDA8;
loc_8209DDC8:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8209DDD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209deb0
	if (!ctx.cr6.eq) goto loc_8209DEB0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209DE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209de84
	if (!ctx.cr6.eq) goto loc_8209DE84;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209de84
	if (ctx.cr6.eq) goto loc_8209DE84;
loc_8209DE18:
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209DE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,14488
	ctx.r11.s64 = ctx.r31.s64 + 14488;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,512
	ctx.r8.s64 = ctx.r11.s64 + 512;
loc_8209DE40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8209de60
	if (!ctx.cr0.eq) goto loc_8209DE60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8209de40
	if (!ctx.cr6.eq) goto loc_8209DE40;
loc_8209DE60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209de7c
	if (ctx.cr6.eq) goto loc_8209DE7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8209de18
	if (ctx.cr6.lt) goto loc_8209DE18;
	// b 0x8209de84
	goto loc_8209DE84;
loc_8209DE7C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8209DE84:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209deb0
	if (ctx.cr6.eq) goto loc_8209DEB0;
	// stw r27,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r4,15556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15556);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x8209e3f8
	ctx.lr = 0x8209DEAC;
	sub_8209E3F8(ctx, base);
	// bl 0x8209e1e8
	ctx.lr = 0x8209DEB0;
	sub_8209E1E8(ctx, base);
loc_8209DEB0:
	// lbz r10,15572(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15572);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209dee4
	if (ctx.cr6.eq) goto loc_8209DEE4;
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// bl 0x8209ca80
	ctx.lr = 0x8209DEC4;
	sub_8209CA80(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r11,15572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15572, ctx.r11.u8);
	// bl 0x8209e3f8
	ctx.lr = 0x8209DEE4;
	sub_8209E3F8(ctx, base);
loc_8209DEE4:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209DEEC"))) PPC_WEAK_FUNC(sub_8209DEEC);
PPC_FUNC_IMPL(__imp__sub_8209DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209DEF0"))) PPC_WEAK_FUNC(sub_8209DEF0);
PPC_FUNC_IMPL(__imp__sub_8209DEF0) {
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
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r10,15640
	ctx.r9.s64 = ctx.r10.s64 + 15640;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,2120(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2120);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209DF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209df68
	if (ctx.cr6.eq) goto loc_8209DF68;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209e000
	ctx.lr = 0x8209DF68;
	sub_8209E000(ctx, base);
loc_8209DF68:
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

__attribute__((alias("__imp__sub_8209DF84"))) PPC_WEAK_FUNC(sub_8209DF84);
PPC_FUNC_IMPL(__imp__sub_8209DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209DF88"))) PPC_WEAK_FUNC(sub_8209DF88);
PPC_FUNC_IMPL(__imp__sub_8209DF88) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209dfcc
	if (ctx.cr6.eq) goto loc_8209DFCC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8209dfcc
	if (ctx.cr6.lt) goto loc_8209DFCC;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8209dfdc
	if (!ctx.cr6.gt) goto loc_8209DFDC;
loc_8209DFCC:
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,5096
	ctx.r9.s64 = ctx.r10.s64 + 5096;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_8209DFDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209DFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209E000"))) PPC_WEAK_FUNC(sub_8209E000);
PPC_FUNC_IMPL(__imp__sub_8209E000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8209E008;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209e050
	if (ctx.cr6.eq) goto loc_8209E050;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8209e050
	if (ctx.cr6.lt) goto loc_8209E050;
	// lfs f0,1264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8209e060
	if (!ctx.cr6.gt) goto loc_8209E060;
loc_8209E050:
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,5184
	ctx.r9.s64 = ctx.r10.s64 + 5184;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_8209E060:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e0ec
	if (ctx.cr6.eq) goto loc_8209E0EC;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r29,2176(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2176);
	// bl 0x82082030
	ctx.lr = 0x8209E090;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e0d0
	if (ctx.cr6.eq) goto loc_8209E0D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,5084
	ctx.r10.s64 = ctx.r11.s64 + 5084;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209c1b8
	ctx.lr = 0x8209E0C0;
	sub_8209C1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8209E0D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209c1b8
	ctx.lr = 0x8209E0DC;
	sub_8209C1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8209E0EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E114"))) PPC_WEAK_FUNC(sub_8209E114);
PPC_FUNC_IMPL(__imp__sub_8209E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E118"))) PPC_WEAK_FUNC(sub_8209E118);
PPC_FUNC_IMPL(__imp__sub_8209E118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8209E120;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
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
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e1b8
	if (ctx.cr6.eq) goto loc_8209E1B8;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r25,2176(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2176);
	// bl 0x82082030
	ctx.lr = 0x8209E168;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e1a0
	if (ctx.cr6.eq) goto loc_8209E1A0;
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
	// bl 0x8209bf88
	ctx.lr = 0x8209E188;
	sub_8209BF88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8209c1b8
	ctx.lr = 0x8209E194;
	sub_8209C1B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8209E1A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8209c1b8
	ctx.lr = 0x8209E1AC;
	sub_8209C1B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8209E1B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E1E8"))) PPC_WEAK_FUNC(sub_8209E1E8);
PPC_FUNC_IMPL(__imp__sub_8209E1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8209E1F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-3376(r1)
	ea = -3376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,15640
	ctx.r31.s64 = ctx.r11.s64 + 15640;
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,14476(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// lwz r30,14484(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x8209e238
	if (ctx.cr6.eq) goto loc_8209E238;
	// mulli r11,r28,1068
	ctx.r11.s64 = ctx.r28.s64 * 1068;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// bl 0x8233e4e0
	ctx.lr = 0x8209E238;
	sub_8233E4E0(ctx, base);
loc_8209E238:
	// lwz r29,2140(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8209e258
	if (ctx.cr6.eq) goto loc_8209E258;
	// mulli r11,r29,1068
	ctx.r11.s64 = ctx.r29.s64 * 1068;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// bl 0x8233e4e0
	ctx.lr = 0x8209E258;
	sub_8233E4E0(ctx, base);
loc_8209E258:
	// lwz r10,14472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14472);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209e2c0
	if (ctx.cr6.eq) goto loc_8209E2C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209e284
	if (ctx.cr6.eq) goto loc_8209E284;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209E280;
	sub_82080000(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8209E284:
	// lis r10,61
	ctx.r10.s64 = 3997696;
	// mulli r3,r11,1068
	ctx.r3.s64 = ctx.r11.s64 * 1068;
	// ori r9,r10,23808
	ctx.r9.u64 = ctx.r10.u64 | 23808;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8209e29c
	if (!ctx.cr6.gt) goto loc_8209E29C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8209E29C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8209E2AC;
	sub_82082030(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,14476(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// lwz r29,2140(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// stw r3,14484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14484, ctx.r3.u32);
	// stw r11,14472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14472, ctx.r11.u32);
loc_8209E2C0:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e3b8
	if (ctx.cr6.eq) goto loc_8209E3B8;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8209E2D0:
	// lwz r3,2120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209e39c
	if (!ctx.cr6.eq) goto loc_8209E39C;
	// lwz r11,14484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8209E308;
	sub_8233E4E0(ctx, base);
	// lwz r28,14476(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x8209e350
	if (ctx.cr6.eq) goto loc_8209E350;
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,512
	ctx.r8.s64 = ctx.r11.s64 + 512;
loc_8209E320:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8209e340
	if (!ctx.cr0.eq) goto loc_8209E340;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8209e320
	if (!ctx.cr6.eq) goto loc_8209E320;
loc_8209E340:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8209e350
	if (!ctx.cr6.eq) goto loc_8209E350;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,14476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14476, ctx.r30.u32);
loc_8209E350:
	// lwz r29,2140(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8209e3a4
	if (ctx.cr6.eq) goto loc_8209E3A4;
	// addi r11,r1,2240
	ctx.r11.s64 = ctx.r1.s64 + 2240;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,512
	ctx.r8.s64 = ctx.r11.s64 + 512;
loc_8209E368:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8209e388
	if (!ctx.cr0.eq) goto loc_8209E388;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8209e368
	if (!ctx.cr6.eq) goto loc_8209E368;
loc_8209E388:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8209e3a4
	if (!ctx.cr6.eq) goto loc_8209E3A4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r30.u32);
	// b 0x8209e3a4
	goto loc_8209E3A4;
loc_8209E39C:
	// lwz r28,14476(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// lwz r29,2140(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
loc_8209E3A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,1068
	ctx.r27.s64 = ctx.r27.s64 + 1068;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8209e2d0
	if (ctx.cr6.lt) goto loc_8209E2D0;
loc_8209E3B8:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8209e3d0
	if (ctx.cr6.lt) goto loc_8209E3D0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 & ctx.r26.u64;
	// stw r10,14476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14476, ctx.r10.u32);
loc_8209E3D0:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8209e3f0
	if (ctx.cr6.lt) goto loc_8209E3F0;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8209e3f0
	if (ctx.cr6.eq) goto loc_8209E3F0;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 & ctx.r26.u64;
	// stw r11,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r11.u32);
loc_8209E3F0:
	// addi r1,r1,3376
	ctx.r1.s64 = ctx.r1.s64 + 3376;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E3F8"))) PPC_WEAK_FUNC(sub_8209E3F8);
PPC_FUNC_IMPL(__imp__sub_8209E3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8209E400;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15640
	ctx.r29.s64 = ctx.r11.s64 + 15640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r9,2140(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2140);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8209e434
	if (!ctx.cr6.eq) goto loc_8209E434;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8209e438
	if (ctx.cr6.eq) goto loc_8209E438;
loc_8209E434:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8209E438:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8209e480
	if (ctx.cr6.eq) goto loc_8209E480;
	// lwz r11,14472(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14472);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8209e480
	if (!ctx.cr6.lt) goto loc_8209E480;
	// lwz r10,14484(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14484);
	// mulli r11,r31,1068
	ctx.r11.s64 = ctx.r31.s64 * 1068;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// lhz r9,1030(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 1030);
	// stw r9,14480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14480, ctx.r9.u32);
	// beq cr6,0x8209e480
	if (ctx.cr6.eq) goto loc_8209E480;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,1048(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1048);
	// lhz r3,1030(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 1030);
	// bl 0x8209c7b0
	ctx.lr = 0x8209E480;
	sub_8209C7B0(ctx, base);
loc_8209E480:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,2124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2124);
	// stw r31,2140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2140, ctx.r31.u32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x8209e4d8
	if (ctx.cr6.eq) goto loc_8209E4D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,2124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2124);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209E4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209E4D8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r30,26328(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r27,r11,-23448
	ctx.r27.s64 = ctx.r11.s64 + -23448;
loc_8209E4EC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209e554
	if (ctx.cr6.eq) goto loc_8209E554;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209e52c
	if (ctx.cr6.eq) goto loc_8209E52C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// beq cr6,0x8209e52c
	if (ctx.cr6.eq) goto loc_8209E52C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82316890
	ctx.lr = 0x8209E52C;
	sub_82316890(ctx, base);
loc_8209E52C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e540
	if (ctx.cr6.eq) goto loc_8209E540;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82087140
	ctx.lr = 0x8209E540;
	sub_82087140(ctx, base);
loc_8209E540:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e554
	if (ctx.cr6.eq) goto loc_8209E554;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82087140
	ctx.lr = 0x8209E554;
	sub_82087140(ctx, base);
loc_8209E554:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8209e4ec
	if (!ctx.cr0.eq) goto loc_8209E4EC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820a37e8
	ctx.lr = 0x8209E568;
	sub_820A37E8(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e5a0
	if (ctx.cr6.eq) goto loc_8209E5A0;
	// bl 0x8209ccd0
	ctx.lr = 0x8209E578;
	sub_8209CCD0(ctx, base);
	// bl 0x8209cd88
	ctx.lr = 0x8209E57C;
	sub_8209CD88(ctx, base);
	// lwz r3,2124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e5a0
	if (ctx.cr6.eq) goto loc_8209E5A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209E5A0:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r30,88
	ctx.r30.s64 = 88;
	// addi r31,r11,9544
	ctx.r31.s64 = ctx.r11.s64 + 9544;
loc_8209E5AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e5cc
	if (ctx.cr6.eq) goto loc_8209E5CC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x8209e5cc
	if (ctx.cr6.eq) goto loc_8209E5CC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x820a1a58
	ctx.lr = 0x8209E5CC;
	sub_820A1A58(ctx, base);
loc_8209E5CC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8209e5ac
	if (!ctx.cr0.eq) goto loc_8209E5AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8209e7e0
	ctx.lr = 0x8209E5E0;
	sub_8209E7E0(ctx, base);
	// lwz r3,2124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e604
	if (ctx.cr6.eq) goto loc_8209E604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209E604:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E610"))) PPC_WEAK_FUNC(sub_8209E610);
PPC_FUNC_IMPL(__imp__sub_8209E610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2180);
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x8209e634
	if (ctx.cr6.lt) goto loc_8209E634;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,5264
	ctx.r8.s64 = ctx.r9.s64 + 5264;
	// stw r8,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r8.u32);
loc_8209E634:
	// addi r8,r10,2180
	ctx.r8.s64 = ctx.r10.s64 + 2180;
loc_8209E638:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8209e638
	if (!ctx.cr0.eq) goto loc_8209E638;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,2184
	ctx.r7.s64 = ctx.r10.s64 + 2184;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r3,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r3.u8);
	// stw r4,2188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2188, ctx.r4.u32);
	// stw r5,2192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2192, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209E688"))) PPC_WEAK_FUNC(sub_8209E688);
PPC_FUNC_IMPL(__imp__sub_8209E688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8209E690;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r27,r11,15640
	ctx.r27.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e74c
	if (ctx.cr6.eq) goto loc_8209E74C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addi r29,r27,2184
	ctx.r29.s64 = ctx.r27.s64 + 2184;
loc_8209E6B0:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209e734
	if (!ctx.cr6.eq) goto loc_8209E734;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d448
	ctx.lr = 0x8209E6C8;
	sub_8208D448(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209e734
	if (!ctx.cr6.eq) goto loc_8209E734;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209e734
	if (!ctx.cr6.eq) goto loc_8209E734;
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209e740
	if (ctx.cr6.eq) goto loc_8209E740;
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209e740
	if (ctx.cr6.eq) goto loc_8209E740;
loc_8209E700:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e724
	if (ctx.cr6.eq) goto loc_8209E724;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x8209e724
	if (!ctx.cr6.eq) goto loc_8209E724;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// bl 0x8209fd08
	ctx.lr = 0x8209E724;
	sub_8209FD08(ctx, base);
loc_8209E724:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8209e700
	if (!ctx.cr0.eq) goto loc_8209E700;
	// b 0x8209e740
	goto loc_8209E740;
loc_8209E734:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8208fe20
	ctx.lr = 0x8209E740;
	sub_8208FE20(ctx, base);
loc_8209E740:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x8209e6b0
	if (!ctx.cr0.eq) goto loc_8209E6B0;
loc_8209E74C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2180, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E75C"))) PPC_WEAK_FUNC(sub_8209E75C);
PPC_FUNC_IMPL(__imp__sub_8209E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E760"))) PPC_WEAK_FUNC(sub_8209E760);
PPC_FUNC_IMPL(__imp__sub_8209E760) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209e798
	if (ctx.cr6.eq) goto loc_8209E798;
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209e7d0
	if (!ctx.cr6.eq) goto loc_8209E7D0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// twllei r9,0
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8209e79c
	goto loc_8209E79C;
loc_8209E798:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8209E79C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8209e7cc
	if (!ctx.cr6.lt) goto loc_8209E7CC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8209E7B0:
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8209e7d4
	if (!ctx.cr6.eq) goto loc_8209E7D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8209e7b0
	if (ctx.cr6.lt) goto loc_8209E7B0;
loc_8209E7CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209E7D0:
	// blr 
	return;
loc_8209E7D4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209E7E0"))) PPC_WEAK_FUNC(sub_8209E7E0);
PPC_FUNC_IMPL(__imp__sub_8209E7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8209E7E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r27,16
	ctx.r27.s64 = 16;
	// ori r30,r10,220
	ctx.r30.u64 = ctx.r10.u64 | 220;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r26,r11,-23448
	ctx.r26.s64 = ctx.r11.s64 + -23448;
loc_8209E814:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209e8d4
	if (ctx.cr6.eq) goto loc_8209E8D4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e850
	if (ctx.cr6.eq) goto loc_8209E850;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e850
	if (ctx.cr6.eq) goto loc_8209E850;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e84c
	if (ctx.cr6.eq) goto loc_8209E84C;
	// bl 0x82088600
	ctx.lr = 0x8209E848;
	sub_82088600(ctx, base);
	// b 0x8209e850
	goto loc_8209E850;
loc_8209E84C:
	// stbx r29,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r29.u8);
loc_8209E850:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e880
	if (ctx.cr6.eq) goto loc_8209E880;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e880
	if (ctx.cr6.eq) goto loc_8209E880;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e87c
	if (ctx.cr6.eq) goto loc_8209E87C;
	// bl 0x82088600
	ctx.lr = 0x8209E878;
	sub_82088600(ctx, base);
	// b 0x8209e880
	goto loc_8209E880;
loc_8209E87C:
	// stbx r29,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r29.u8);
loc_8209E880:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209e8d4
	if (!ctx.cr6.eq) goto loc_8209E8D4;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,17,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209e8d4
	if (ctx.cr6.eq) goto loc_8209E8D4;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r10,r10,0,19,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// beq cr6,0x8209e8d4
	if (ctx.cr6.eq) goto loc_8209E8D4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82316890
	ctx.lr = 0x8209E8D4;
	sub_82316890(ctx, base);
loc_8209E8D4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8209e814
	if (!ctx.cr0.eq) goto loc_8209E814;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209E8E8"))) PPC_WEAK_FUNC(sub_8209E8E8);
PPC_FUNC_IMPL(__imp__sub_8209E8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x8209E8F0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r30,25096(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25096);
	// ori r28,r11,65534
	ctx.r28.u64 = ctx.r11.u64 | 65534;
	// lwz r29,25100(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25100);
	// addi r26,r10,4900
	ctx.r26.s64 = ctx.r10.s64 + 4900;
	// lwz r31,25104(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25104);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// sth r28,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r28.u16);
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// bl 0x8233e4e0
	ctx.lr = 0x8209E938;
	sub_8233E4E0(ctx, base);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8233e4e0
	ctx.lr = 0x8209E948;
	sub_8233E4E0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8233e4e0
	ctx.lr = 0x8209E958;
	sub_8233E4E0(ctx, base);
	// li r22,4
	ctx.r22.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,24
	ctx.r8.s64 = 24;
	// sth r22,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r22.u16);
	// li r10,32
	ctx.r10.s64 = 32;
	// sth r9,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r9.u16);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// sth r8,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r8.u16);
	// lis r6,5
	ctx.r6.s64 = 327680;
	// sth r10,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r10.u16);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// sth r10,14(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14, ctx.r10.u16);
	// ori r26,r7,60928
	ctx.r26.u64 = ctx.r7.u64 | 60928;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// ori r4,r6,56320
	ctx.r4.u64 = ctx.r6.u64 | 56320;
	// ori r3,r5,37888
	ctx.r3.u64 = ctx.r5.u64 | 37888;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r4,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r4.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r10,63
	ctx.r10.s64 = 63;
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r11.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82082030
	ctx.lr = 0x8209E9D0;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e9f4
	if (ctx.cr6.eq) goto loc_8209E9F4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209E9EC;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8209e9f8
	goto loc_8209E9F8;
loc_8209E9F4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8209E9F8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,25096(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25096);
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r30,r11,25108
	ctx.r30.s64 = ctx.r11.s64 + 25108;
	// stw r3,25108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25108, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8209EA10;
	sub_8233E4E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82082030
	ctx.lr = 0x8209EA24;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ea44
	if (ctx.cr6.eq) goto loc_8209EA44;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209EA3C;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8209ea48
	goto loc_8209EA48;
loc_8209EA44:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8209EA48:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,25100(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25100);
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r29,r11,25112
	ctx.r29.s64 = ctx.r11.s64 + 25112;
	// stw r3,25112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25112, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8209EA60;
	sub_8233E4E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82082030
	ctx.lr = 0x8209EA74;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ea90
	if (ctx.cr6.eq) goto loc_8209EA90;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209EA8C;
	sub_8233EAF0(ctx, base);
	// b 0x8209ea94
	goto loc_8209EA94;
loc_8209EA90:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8209EA94:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r27,25104(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25104);
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r11,r11,25116
	ctx.r11.s64 = ctx.r11.s64 + 25116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8209EAB4;
	sub_8233E4E0(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r21,r10,5316
	ctx.r21.s64 = ctx.r10.s64 + 5316;
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// sth r23,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r23.u16);
	// sth r23,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r23.u16);
	// bl 0x8233e4e0
	ctx.lr = 0x8209EAEC;
	sub_8233E4E0(ctx, base);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8233e4e0
	ctx.lr = 0x8209EAFC;
	sub_8233E4E0(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r9,5360
	ctx.r4.s64 = ctx.r9.s64 + 5360;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8233e4e0
	ctx.lr = 0x8209EB10;
	sub_8233E4E0(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r11,25096(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25096);
	// sth r8,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r8.u16);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// sth r22,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r22.u16);
	// li r6,12
	ctx.r6.s64 = 12;
	// sth r6,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// ori r5,r7,30464
	ctx.r5.u64 = ctx.r7.u64 | 30464;
	// sth r10,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r10.u16);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// sth r10,14(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14, ctx.r10.u16);
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// ori r3,r4,51712
	ctx.r3.u64 = ctx.r4.u64 | 51712;
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
	// lwz r10,25100(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25100);
	// lhz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// sth r8,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r8.u16);
	// lhz r7,14(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
	// sth r7,18(r27)
	PPC_STORE_U16(ctx.r27.u32 + 18, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209EB80"))) PPC_WEAK_FUNC(sub_8209EB80);
PPC_FUNC_IMPL(__imp__sub_8209EB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8209EB88;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82082030
	ctx.lr = 0x8209EBA0;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ebbc
	if (ctx.cr6.eq) goto loc_8209EBBC;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209EBB8;
	sub_8233EAF0(ctx, base);
	// b 0x8209ebc0
	goto loc_8209EBC0;
loc_8209EBBC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8209EBC0:
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,25084(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25084, ctx.r31.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8209EBD8;
	sub_8233EAF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,358
	ctx.r10.s64 = 358;
	// ori r9,r11,48000
	ctx.r9.u64 = ctx.r11.u64 | 48000;
	// li r8,34
	ctx.r8.s64 = 34;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// sth r8,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r8.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r7,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r7.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82082030
	ctx.lr = 0x8209EC10;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ec30
	if (ctx.cr6.eq) goto loc_8209EC30;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209EC28;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8209ec34
	goto loc_8209EC34;
loc_8209EC30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209EC34:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,25084(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// li r5,52
	ctx.r5.s64 = 52;
	// addi r28,r11,25088
	ctx.r28.s64 = ctx.r11.s64 + 25088;
	// stw r3,25088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25088, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8209EC4C;
	sub_8233E4E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82082030
	ctx.lr = 0x8209EC60;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ec7c
	if (ctx.cr6.eq) goto loc_8209EC7C;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209EC78;
	sub_8233EAF0(ctx, base);
	// b 0x8209ec80
	goto loc_8209EC80;
loc_8209EC7C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8209EC80:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,25084(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r25,r11,25092
	ctx.r25.s64 = ctx.r11.s64 + 25092;
	// stw r31,25092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25092, ctx.r31.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8209ECA0;
	sub_8233E4E0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r27,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r27.u16);
	// li r9,63
	ctx.r9.s64 = 63;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r29,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r29.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82082030
	ctx.lr = 0x8209ECD8;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ecf8
	if (ctx.cr6.eq) goto loc_8209ECF8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209ECF0;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8209ecfc
	goto loc_8209ECFC;
loc_8209ECF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209ECFC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,25084(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r11,r11,25096
	ctx.r11.s64 = ctx.r11.s64 + 25096;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8209ED14;
	sub_8233E4E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82082030
	ctx.lr = 0x8209ED28;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ed48
	if (ctx.cr6.eq) goto loc_8209ED48;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209ED40;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8209ed4c
	goto loc_8209ED4C;
loc_8209ED48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209ED4C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r11,r11,25100
	ctx.r11.s64 = ctx.r11.s64 + 25100;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8209ED64;
	sub_8233E4E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82082030
	ctx.lr = 0x8209ED78;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ed98
	if (ctx.cr6.eq) goto loc_8209ED98;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209ED90;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8209ed9c
	goto loc_8209ED9C;
loc_8209ED98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209ED9C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r11,r11,25104
	ctx.r11.s64 = ctx.r11.s64 + 25104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x8209EDB8;
	sub_8233E4E0(ctx, base);
	// lwz r11,25084(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// ori r3,r7,30464
	ctx.r3.u64 = ctx.r7.u64 | 30464;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// ori r8,r6,60928
	ctx.r8.u64 = ctx.r6.u64 | 60928;
	// stb r9,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r9.u8);
	// ori r7,r4,51712
	ctx.r7.u64 = ctx.r4.u64 | 51712;
	// stb r9,49(r10)
	PPC_STORE_U8(ctx.r10.u32 + 49, ctx.r9.u8);
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r9,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r9.u8);
	// sth r29,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r29.u16);
	// sth r29,50(r10)
	PPC_STORE_U16(ctx.r10.u32 + 50, ctx.r29.u16);
	// sth r29,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r29.u16);
	// sth r29,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r29.u16);
	// sth r9,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// sth r5,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// sth r27,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r27.u16);
	// sth r27,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r27.u16);
	// sth r6,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r6.u16);
	// bl 0x8209e8e8
	ctx.lr = 0x8209EE34;
	sub_8209E8E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209EE3C"))) PPC_WEAK_FUNC(sub_8209EE3C);
PPC_FUNC_IMPL(__imp__sub_8209EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209EE40"))) PPC_WEAK_FUNC(sub_8209EE40);
PPC_FUNC_IMPL(__imp__sub_8209EE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8209EE48;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa1c
	ctx.lr = 0x8209EE50;
	__savefpr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r31,r11,15352
	ctx.r31.s64 = ctx.r11.s64 + 15352;
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8209f184
	if (ctx.cr6.eq) goto loc_8209F184;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r27,0
	ctx.r27.s64 = 0;
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// addi r30,r10,15640
	ctx.r30.s64 = ctx.r10.s64 + 15640;
	// lfd f24,624(r8)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r8.u32 + 624);
	// lfd f23,600(r8)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r8.u32 + 600);
	// lfs f21,592(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 592);
	ctx.f21.f64 = double(temp.f32);
	// lfs f22,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f22.f64 = double(temp.f32);
	// lfs f25,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// lfs f31,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_8209EEA8:
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f174
	if (ctx.cr6.eq) goto loc_8209F174;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8209EEB8:
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209f168
	if (ctx.cr6.eq) goto loc_8209F168;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209f168
	if (ctx.cr6.eq) goto loc_8209F168;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r30,312
	ctx.r11.s64 = ctx.r30.s64 + 312;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
loc_8209EEEC:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8209ef50
	if (ctx.cr6.eq) goto loc_8209EF50;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// cmplwi cr6,r10,1088
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1088, ctx.xer);
	// blt cr6,0x8209eeec
	if (ctx.cr6.lt) goto loc_8209EEEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8209EF0C:
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// subfe r28,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8209ef2c
	if (!ctx.cr6.eq) goto loc_8209EF2C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f0d0
	if (ctx.cr6.eq) goto loc_8209F0D0;
loc_8209EF2C:
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r11,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r11.u16);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// add r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ef68
	if (ctx.cr6.eq) goto loc_8209EF68;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// b 0x8209ef7c
	goto loc_8209EF7C;
loc_8209EF50:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r11,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8209ef0c
	goto loc_8209EF0C;
loc_8209EF68:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// bne cr6,0x8209ef7c
	if (!ctx.cr6.eq) goto loc_8209EF7C;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
loc_8209EF7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f168
	if (ctx.cr6.eq) goto loc_8209F168;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x8209eff4
	if (!ctx.cr6.gt) goto loc_8209EFF4;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f29,f11,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f28,f10,f13
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f27,f9,f13
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x8209efd0
	if (ctx.cr6.lt) goto loc_8209EFD0;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_8209EFD0:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// blt cr6,0x8209efdc
	if (ctx.cr6.lt) goto loc_8209EFDC;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_8209EFDC:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// blt cr6,0x8209efe8
	if (ctx.cr6.lt) goto loc_8209EFE8;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
loc_8209EFE8:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// blt cr6,0x8209eff4
	if (ctx.cr6.lt) goto loc_8209EFF4;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
loc_8209EFF4:
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bgt cr6,0x8209f008
	if (ctx.cr6.gt) goto loc_8209F008;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x8209f018
	goto loc_8209F018;
loc_8209F008:
	// fmuls f2,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x8233c318
	ctx.lr = 0x8209F014;
	sub_8233C318(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_8209F018:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x8209f024
	if (ctx.cr6.gt) goto loc_8209F024;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_8209F024:
	// fcmpu cr6,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bgt cr6,0x8209f030
	if (ctx.cr6.gt) goto loc_8209F030;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
loc_8209F030:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x8209f03c
	if (ctx.cr6.gt) goto loc_8209F03C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_8209F03C:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x8209f048
	if (ctx.cr6.gt) goto loc_8209F048;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_8209F048:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8209f06c
	if (!ctx.cr6.lt) goto loc_8209F06C;
	// fadds f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fadds f13,f27,f29
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// fmuls f28,f0,f25
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f27,f13,f25
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
loc_8209F06C:
	// fadds f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// lfs f1,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f27,f29
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// stfs f26,104(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f0,f25
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f13,f25
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8233c318
	ctx.lr = 0x8209F0A4;
	sub_8233C318(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8209dac8
	ctx.lr = 0x8209F0CC;
	sub_8209DAC8(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
loc_8209F0D0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209f168
	if (!ctx.cr6.eq) goto loc_8209F168;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x820972f8
	ctx.lr = 0x8209F110;
	sub_820972F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f164
	if (ctx.cr6.eq) goto loc_8209F164;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// bl 0x8233c318
	ctx.lr = 0x8209F128;
	sub_8233C318(ctx, base);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// frsp f30,f1
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8233c318
	ctx.lr = 0x8209F13C;
	sub_8233C318(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x8209d718
	ctx.lr = 0x8209F164;
	sub_8209D718(ctx, base);
loc_8209F164:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
loc_8209F168:
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmplwi cr6,r29,704
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 704, ctx.xer);
	// blt cr6,0x8209eeb8
	if (ctx.cr6.lt) goto loc_8209EEB8;
loc_8209F174:
	// addi r27,r27,88
	ctx.r27.s64 = ctx.r27.s64 + 88;
	// cmplwi cr6,r27,704
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 704, ctx.xer);
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// blt cr6,0x8209eea8
	if (ctx.cr6.lt) goto loc_8209EEA8;
loc_8209F184:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa68
	ctx.lr = 0x8209F190;
	__restfpr_21(ctx, base);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209F194"))) PPC_WEAK_FUNC(sub_8209F194);
PPC_FUNC_IMPL(__imp__sub_8209F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209F198"))) PPC_WEAK_FUNC(sub_8209F198);
PPC_FUNC_IMPL(__imp__sub_8209F198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8209F1A0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa1c
	ctx.lr = 0x8209F1A8;
	__savefpr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,15352
	ctx.r31.s64 = ctx.r11.s64 + 15352;
	// lfd f24,624(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r9.u32 + 624);
	// addi r30,r10,15640
	ctx.r30.s64 = ctx.r10.s64 + 15640;
	// lfd f23,600(r9)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r9.u32 + 600);
	// lfs f21,592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 592);
	ctx.f21.f64 = double(temp.f32);
	// lfs f22,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f22.f64 = double(temp.f32);
	// lfs f25,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// lfs f31,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_8209F1E8:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209f4a4
	if (ctx.cr6.eq) goto loc_8209F4A4;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209f4a4
	if (ctx.cr6.eq) goto loc_8209F4A4;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r30,312
	ctx.r11.s64 = ctx.r30.s64 + 312;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
loc_8209F220:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8209f290
	if (ctx.cr6.eq) goto loc_8209F290;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// cmplwi cr6,r10,1088
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1088, ctx.xer);
	// blt cr6,0x8209f220
	if (ctx.cr6.lt) goto loc_8209F220;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8209F240:
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// subfe r28,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8209f26c
	if (!ctx.cr6.eq) goto loc_8209F26C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f40c
	if (ctx.cr6.eq) goto loc_8209F40C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f40c
	if (ctx.cr6.eq) goto loc_8209F40C;
loc_8209F26C:
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r11,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r11.u16);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f2a8
	if (ctx.cr6.eq) goto loc_8209F2A8;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// b 0x8209f2bc
	goto loc_8209F2BC;
loc_8209F290:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r11,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8209f240
	goto loc_8209F240;
loc_8209F2A8:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// bne cr6,0x8209f2bc
	if (!ctx.cr6.eq) goto loc_8209F2BC;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
loc_8209F2BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f4a4
	if (ctx.cr6.eq) goto loc_8209F4A4;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x8209f334
	if (!ctx.cr6.gt) goto loc_8209F334;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f29,f11,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f28,f10,f13
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f27,f9,f13
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x8209f310
	if (ctx.cr6.lt) goto loc_8209F310;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_8209F310:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// blt cr6,0x8209f31c
	if (ctx.cr6.lt) goto loc_8209F31C;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_8209F31C:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// blt cr6,0x8209f328
	if (ctx.cr6.lt) goto loc_8209F328;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
loc_8209F328:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// blt cr6,0x8209f334
	if (ctx.cr6.lt) goto loc_8209F334;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
loc_8209F334:
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bgt cr6,0x8209f348
	if (ctx.cr6.gt) goto loc_8209F348;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x8209f358
	goto loc_8209F358;
loc_8209F348:
	// fmuls f2,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x8233c318
	ctx.lr = 0x8209F354;
	sub_8233C318(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_8209F358:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x8209f364
	if (ctx.cr6.gt) goto loc_8209F364;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_8209F364:
	// fcmpu cr6,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bgt cr6,0x8209f370
	if (ctx.cr6.gt) goto loc_8209F370;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
loc_8209F370:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x8209f37c
	if (ctx.cr6.gt) goto loc_8209F37C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_8209F37C:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x8209f388
	if (ctx.cr6.gt) goto loc_8209F388;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_8209F388:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8209f3ac
	if (!ctx.cr6.lt) goto loc_8209F3AC;
	// fadds f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fadds f13,f27,f29
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// fmuls f28,f0,f25
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f27,f13,f25
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
loc_8209F3AC:
	// fadds f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// lfs f1,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f27,f29
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// stfs f26,104(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f0,f25
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f13,f25
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8233c318
	ctx.lr = 0x8209F3E4;
	sub_8233C318(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8209dac8
	ctx.lr = 0x8209F40C;
	sub_8209DAC8(ctx, base);
loc_8209F40C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209f4a4
	if (!ctx.cr6.eq) goto loc_8209F4A4;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x820972f8
	ctx.lr = 0x8209F450;
	sub_820972F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f4a4
	if (ctx.cr6.eq) goto loc_8209F4A4;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// bl 0x8233c318
	ctx.lr = 0x8209F468;
	sub_8233C318(ctx, base);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// frsp f30,f1
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8233c318
	ctx.lr = 0x8209F47C;
	sub_8233C318(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x8209d718
	ctx.lr = 0x8209F4A4;
	sub_8209D718(ctx, base);
loc_8209F4A4:
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmplwi cr6,r29,704
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 704, ctx.xer);
	// blt cr6,0x8209f1e8
	if (ctx.cr6.lt) goto loc_8209F1E8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa68
	ctx.lr = 0x8209F4BC;
	__restfpr_21(ctx, base);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209F4C0"))) PPC_WEAK_FUNC(sub_8209F4C0);
PPC_FUNC_IMPL(__imp__sub_8209F4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8209F4C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r29,r11,15640
	ctx.r29.s64 = ctx.r11.s64 + 15640;
	// addi r11,r10,9544
	ctx.r11.s64 = ctx.r10.s64 + 9544;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r9,r11,3908
	ctx.r9.s64 = ctx.r11.s64 + 3908;
	// lwz r5,2124(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2124);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r3,2120(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2120);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,3920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3920, ctx.r5.u32);
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209F528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r31,r11,15352
	ctx.r31.s64 = ctx.r11.s64 + 15352;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r30,r26,88
	ctx.r30.s64 = ctx.r26.s64 * 88;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8209f55c
	if (!ctx.cr6.eq) goto loc_8209F55C;
loc_8209F550:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8209F55C:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// beq cr6,0x8209f584
	if (ctx.cr6.eq) goto loc_8209F584;
	// lfs f13,268(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8209f588
	goto loc_8209F588;
loc_8209F584:
	// lfs f13,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
loc_8209F588:
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,2124(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2124);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8209e118
	ctx.lr = 0x8209F5C0;
	sub_8209E118(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822b4ea0
	ctx.lr = 0x8209F5CC;
	sub_822B4EA0(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209f550
	if (ctx.cr6.eq) goto loc_8209F550;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209F614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209F628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8209f690
	ctx.lr = 0x8209F638;
	sub_8209F690(ctx, base);
	// lfs f1,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// lfd f2,624(r28)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r28.u32 + 624);
	// bl 0x8233c318
	ctx.lr = 0x8209F644;
	sub_8233C318(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r5,0
	ctx.r5.s64 = 0;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,60(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,48(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8209F668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209F684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209F690"))) PPC_WEAK_FUNC(sub_8209F690);
PPC_FUNC_IMPL(__imp__sub_8209F690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8209F698;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r29,r3,88
	ctx.r29.s64 = ctx.r3.s64 * 88;
	// addi r28,r11,15352
	ctx.r28.s64 = ctx.r11.s64 + 15352;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,272(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// li r3,56
	ctx.r3.s64 = 56;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r27,60(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82082030
	ctx.lr = 0x8209F6CC;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f6ec
	if (ctx.cr6.eq) goto loc_8209F6EC;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209F6E4;
	sub_8233EAF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x8209f6f0
	goto loc_8209F6F0;
loc_8209F6EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8209F6F0:
	// lwz r11,272(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r5,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lbz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stb r9,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r9.u8);
	// lbz r8,13(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// stb r8,9(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9, ctx.r8.u8);
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// stb r11,10(r5)
	PPC_STORE_U8(ctx.r5.u32 + 10, ctx.r11.u8);
	// lbz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// stb r10,11(r5)
	PPC_STORE_U8(ctx.r5.u32 + 11, ctx.r10.u8);
	// lbz r9,15(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// stb r9,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r9.u8);
	// lbz r8,15(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// stb r8,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r8.u8);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stb r11,14(r5)
	PPC_STORE_U8(ctx.r5.u32 + 14, ctx.r11.u8);
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// stb r10,15(r5)
	PPC_STORE_U8(ctx.r5.u32 + 15, ctx.r10.u8);
	// lbz r9,18(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// stb r9,16(r5)
	PPC_STORE_U8(ctx.r5.u32 + 16, ctx.r9.u8);
	// lbz r8,19(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// stb r8,17(r5)
	PPC_STORE_U8(ctx.r5.u32 + 17, ctx.r8.u8);
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// stb r11,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, ctx.r11.u8);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r10,19(r5)
	PPC_STORE_U8(ctx.r5.u32 + 19, ctx.r10.u8);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r9.u32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r8.u32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r9.u32);
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r8.u32);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r10.u32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8209F814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209F81C"))) PPC_WEAK_FUNC(sub_8209F81C);
PPC_FUNC_IMPL(__imp__sub_8209F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209F820"))) PPC_WEAK_FUNC(sub_8209F820);
PPC_FUNC_IMPL(__imp__sub_8209F820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8209F828;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,15352
	ctx.r30.s64 = ctx.r11.s64 + 15352;
	// bne cr6,0x8209f864
	if (!ctx.cr6.eq) goto loc_8209F864;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209f864
	if (!ctx.cr6.eq) goto loc_8209F864;
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f8d4
	if (ctx.cr6.eq) goto loc_8209F8D4;
loc_8209F864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820970b0
	ctx.lr = 0x8209F86C;
	sub_820970B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8209f8d4
	if (ctx.cr6.eq) goto loc_8209F8D4;
	// lwz r8,272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mulli r28,r3,88
	ctx.r28.s64 = ctx.r3.s64 * 88;
	// add r7,r28,r8
	ctx.r7.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209f950
	if (!ctx.cr6.eq) goto loc_8209F950;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f8a4
	if (ctx.cr6.eq) goto loc_8209F8A4;
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// b 0x8209f8b8
	goto loc_8209F8B8;
loc_8209F8A4:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// bne cr6,0x8209f8b8
	if (!ctx.cr6.eq) goto loc_8209F8B8;
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
loc_8209F8B8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8209f8e0
	if (!ctx.cr6.eq) goto loc_8209F8E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82097298
	ctx.lr = 0x8209F8D4;
	sub_82097298(ctx, base);
loc_8209F8D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8209F8E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209f924
	if (ctx.cr6.eq) goto loc_8209F924;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
loc_8209F900:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8209f920
	if (ctx.cr6.eq) goto loc_8209F920;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// cmplwi cr6,r10,1088
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1088, ctx.xer);
	// blt cr6,0x8209f900
	if (ctx.cr6.lt) goto loc_8209F900;
	// b 0x8209f924
	goto loc_8209F924;
loc_8209F920:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8209F924:
	// lwz r11,60(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f938
	if (ctx.cr6.eq) goto loc_8209F938;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8209f944
	goto loc_8209F944;
loc_8209F938:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209f4c0
	ctx.lr = 0x8209F940;
	sub_8209F4C0(ctx, base);
	// lwz r8,272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
loc_8209F944:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f95c
	if (ctx.cr6.eq) goto loc_8209F95C;
loc_8209F950:
	// add r11,r28,r8
	ctx.r11.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_8209F95C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209F968"))) PPC_WEAK_FUNC(sub_8209F968);
PPC_FUNC_IMPL(__imp__sub_8209F968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8209F970;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82098cd8
	ctx.lr = 0x8209F988;
	sub_82098CD8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r30.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r30.u32);
	// addi r7,r9,5376
	ctx.r7.s64 = ctx.r9.s64 + 5376;
	// stw r30,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r30.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lfs f13,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r5,255
	ctx.r5.s64 = 255;
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,368(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f13,372(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// stw r6,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r6.u32);
	// stfs f0,500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stw r29,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r29.u32);
	// stfs f0,504(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// stw r30,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r30.u32);
	// std r30,448(r3)
	PPC_STORE_U64(ctx.r3.u32 + 448, ctx.r30.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r30,456(r3)
	PPC_STORE_U64(ctx.r3.u32 + 456, ctx.r30.u64);
	// stw r29,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r29.u32);
	// stw r5,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r5.u32);
	// stb r30,496(r3)
	PPC_STORE_U8(ctx.r3.u32 + 496, ctx.r30.u8);
	// stb r30,497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 497, ctx.r30.u8);
	// stb r30,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r30.u8);
	// stw r27,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r27.u32);
	// stw r30,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r30.u32);
	// stw r29,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r29.u32);
	// std r30,544(r3)
	PPC_STORE_U64(ctx.r3.u32 + 544, ctx.r30.u64);
	// stw r30,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r30.u32);
	// stw r30,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r30.u32);
	// stw r30,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r30.u32);
	// std r30,520(r3)
	PPC_STORE_U64(ctx.r3.u32 + 520, ctx.r30.u64);
	// std r30,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.r30.u64);
	// beq cr6,0x8209fa38
	if (ctx.cr6.eq) goto loc_8209FA38;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8209fa54
	if (!ctx.cr6.lt) goto loc_8209FA54;
loc_8209FA38:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r4,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209fa54
	if (ctx.cr6.eq) goto loc_8209FA54;
	// stfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
loc_8209FA54:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x8233eaf0
	ctx.lr = 0x8209FA64;
	sub_8233EAF0(ctx, base);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8209FA84;
	sub_8233EAF0(ctx, base);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r11,r31,388
	ctx.r11.s64 = ctx.r31.s64 + 388;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r9,r10,15640
	ctx.r9.s64 = ctx.r10.s64 + 15640;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r10,2124(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2124);
	// stw r27,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r27.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// beq cr6,0x8209fae4
	if (ctx.cr6.eq) goto loc_8209FAE4;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8209fae4
	if (ctx.cr6.eq) goto loc_8209FAE4;
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 464, ctx.r30.u64);
	// std r30,472(r31)
	PPC_STORE_U64(ctx.r31.u32 + 472, ctx.r30.u64);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8209FAE4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82082030
	ctx.lr = 0x8209FAF8;
	sub_82082030(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fb18
	if (ctx.cr6.eq) goto loc_8209FB18;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209FB10;
	sub_8233EAF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8209fb1c
	goto loc_8209FB1C;
loc_8209FB18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8209FB1C:
	// li r5,168
	ctx.r5.s64 = 168;
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8209FB2C;
	sub_8233EAF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82082030
	ctx.lr = 0x8209FB40;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fbb4
	if (ctx.cr6.eq) goto loc_8209FBB4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// addi r9,r11,-26316
	ctx.r9.s64 = ctx.r11.s64 + -26316;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// sth r30,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r30.u16);
	// sth r30,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r30.u16);
	// stb r30,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r30.u8);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// stw r30,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r30.u32);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r30,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r30.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r27,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
loc_8209FBB4:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r29,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r29.u32);
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r29,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r29.u32);
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r29,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r29.u32);
	// lwz r7,484(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r29,116(r7)
	PPC_STORE_U32(ctx.r7.u32 + 116, ctx.r29.u32);
	// lwz r6,484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r29,140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 140, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209FBF0"))) PPC_WEAK_FUNC(sub_8209FBF0);
PPC_FUNC_IMPL(__imp__sub_8209FBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8209fc50
	ctx.lr = 0x8209FC10;
	sub_8209FC50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209fc30
	if (ctx.cr6.eq) goto loc_8209FC30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209fc30
	if (ctx.cr6.eq) goto loc_8209FC30;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209FC30;
	sub_82080000(ctx, base);
loc_8209FC30:
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

__attribute__((alias("__imp__sub_8209FC4C"))) PPC_WEAK_FUNC(sub_8209FC4C);
PPC_FUNC_IMPL(__imp__sub_8209FC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209FC50"))) PPC_WEAK_FUNC(sub_8209FC50);
PPC_FUNC_IMPL(__imp__sub_8209FC50) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,5376
	ctx.r10.s64 = ctx.r11.s64 + 5376;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209fd08
	ctx.lr = 0x8209FC7C;
	sub_8209FD08(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r8,r9,20
	ctx.r8.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r8,r8,0,31,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209fce4
	if (ctx.cr6.eq) goto loc_8209FCE4;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209FCA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r3,28(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fccc
	if (ctx.cr6.eq) goto loc_8209FCCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FCCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209FCCC:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209fce4
	if (ctx.cr6.eq) goto loc_8209FCE4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209FCE4;
	sub_82080000(ctx, base);
loc_8209FCE4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,5004
	ctx.r10.s64 = ctx.r11.s64 + 5004;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8209FD04"))) PPC_WEAK_FUNC(sub_8209FD04);
PPC_FUNC_IMPL(__imp__sub_8209FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209FD08"))) PPC_WEAK_FUNC(sub_8209FD08);
PPC_FUNC_IMPL(__imp__sub_8209FD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8209FD10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// std r29,448(r3)
	PPC_STORE_U64(ctx.r3.u32 + 448, ctx.r29.u64);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// stw r10,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r29,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r29.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r29,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r29.u64);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r29,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r29.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r29,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r29.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// stw r29,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r29.u32);
	// addi r26,r11,15640
	ctx.r26.s64 = ctx.r11.s64 + 15640;
	// stw r29,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r29.u32);
	// stw r29,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r29.u32);
	// stw r9,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r9.u32);
	// lwz r8,240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8209fe1c
	if (ctx.cr6.eq) goto loc_8209FE1C;
	// lwz r4,380(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209fd9c
	if (ctx.cr6.eq) goto loc_8209FD9C;
	// lwz r3,2120(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
loc_8209FD9C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8209e000
	ctx.lr = 0x8209FDB4;
	sub_8209E000(ctx, base);
	// lwz r9,384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r30,r11,9544
	ctx.r30.s64 = ctx.r11.s64 + 9544;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8209fde8
	if (ctx.cr6.eq) goto loc_8209FDE8;
	// lwz r11,2124(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2124);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,2176(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2176);
	// addi r5,r30,3908
	ctx.r5.s64 = ctx.r30.s64 + 3908;
	// stw r11,3920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3920, ctx.r11.u32);
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x8209bb50
	ctx.lr = 0x8209FDE8;
	sub_8209BB50(ctx, base);
loc_8209FDE8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r30,3188
	ctx.r3.s64 = ctx.r30.s64 + 3188;
	// lwz r4,488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209fe0c
	if (!ctx.cr6.eq) goto loc_8209FE0C;
	// addi r3,r30,388
	ctx.r3.s64 = ctx.r30.s64 + 388;
loc_8209FE0C:
	// bl 0x820a33d8
	ctx.lr = 0x8209FE10;
	sub_820A33D8(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r25,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r25.u32);
	// b 0x8209fe40
	goto loc_8209FE40;
loc_8209FE1C:
	// lwz r11,2140(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8209fe34
	if (ctx.cr6.eq) goto loc_8209FE34;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209fe4c
	if (ctx.cr6.eq) goto loc_8209FE4C;
loc_8209FE34:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8209fe48
	if (ctx.cr6.eq) goto loc_8209FE48;
loc_8209FE40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8209b140
	ctx.lr = 0x8209FE48;
	sub_8209B140(ctx, base);
loc_8209FE48:
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
loc_8209FE4C:
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8209fe80
	if (ctx.cr6.eq) goto loc_8209FE80;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// addi r9,r11,15352
	ctx.r9.s64 = ctx.r11.s64 + 15352;
	// lwz r11,272(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82097298
	ctx.lr = 0x8209FE80;
	sub_82097298(ctx, base);
loc_8209FE80:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r25,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r25.u32);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209ff70
	if (ctx.cr6.eq) goto loc_8209FF70;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8209FE9C:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8209fee8
	if (ctx.cr6.eq) goto loc_8209FEE8;
	// rlwinm r30,r11,2,14,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r28,r26,1168
	ctx.r28.s64 = ctx.r26.s64 + 1168;
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209fed0
	if (ctx.cr6.eq) goto loc_8209FED0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209FED0;
	sub_82080000(ctx, base);
loc_8209FED0:
	// addi r11,r26,1312
	ctx.r11.s64 = ctx.r26.s64 + 1312;
	// stwx r29,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r29.u32);
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r25,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r25.u32);
loc_8209FEE8:
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// cmplwi cr6,r27,120
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 120, ctx.xer);
	// blt cr6,0x8209fe9c
	if (ctx.cr6.lt) goto loc_8209FE9C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// beq cr6,0x8209ff30
	if (ctx.cr6.eq) goto loc_8209FF30;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r10,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r10.u32);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ff38
	if (ctx.cr6.eq) goto loc_8209FF38;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209FF2C;
	sub_82080000(ctx, base);
	// b 0x8209ff38
	goto loc_8209FF38;
loc_8209FF30:
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// stw r10,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r10.u32);
loc_8209FF38:
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209FF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// stb r29,24(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24, ctx.r29.u8);
	// bl 0x8233eaf0
	ctx.lr = 0x8209FF6C;
	sub_8233EAF0(ctx, base);
	// b 0x8209ff74
	goto loc_8209FF74;
loc_8209FF70:
	// stb r29,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r29.u8);
loc_8209FF74:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ffa0
	if (ctx.cr6.eq) goto loc_8209FFA0;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ffa0
	if (ctx.cr6.eq) goto loc_8209FFA0;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8209ff98
	if (ctx.cr6.eq) goto loc_8209FF98;
	// bl 0x82172d60
	ctx.lr = 0x8209FF98;
	sub_82172D60(ctx, base);
loc_8209FF98:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r29,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r29.u32);
loc_8209FFA0:
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// bne cr6,0x8209ffac
	if (!ctx.cr6.eq) goto loc_8209FFAC;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_8209FFAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0000
	if (ctx.cr6.eq) goto loc_820A0000;
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a0000
	if (ctx.cr6.eq) goto loc_820A0000;
	// rlwinm r30,r11,2,14,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r28,r26,1168
	ctx.r28.s64 = ctx.r26.s64 + 1168;
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ffec
	if (ctx.cr6.eq) goto loc_8209FFEC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8209FFEC;
	sub_82080000(ctx, base);
loc_8209FFEC:
	// addi r11,r26,1312
	ctx.r11.s64 = ctx.r26.s64 + 1312;
	// stwx r29,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
loc_820A0000:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0028
	if (!ctx.cr6.eq) goto loc_820A0028;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0028
	if (ctx.cr6.eq) goto loc_820A0028;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A0028;
	sub_82080000(ctx, base);
loc_820A0028:
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A0034"))) PPC_WEAK_FUNC(sub_820A0034);
PPC_FUNC_IMPL(__imp__sub_820A0034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0038"))) PPC_WEAK_FUNC(sub_820A0038);
PPC_FUNC_IMPL(__imp__sub_820A0038) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,15640
	ctx.r9.s64 = ctx.r11.s64 + 15640;
	// stb r10,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r10.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a00cc
	if (!ctx.cr6.eq) goto loc_820A00CC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0214
	if (ctx.cr6.eq) goto loc_820A0214;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0214
	if (ctx.cr6.eq) goto loc_820A0214;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0214
	if (!ctx.cr6.eq) goto loc_820A0214;
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x82098f08
	ctx.lr = 0x820A00B0;
	sub_82098F08(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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
loc_820A00CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0660
	ctx.lr = 0x820A00D8;
	sub_820A0660(ctx, base);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
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
	ctx.lr = 0x820A00F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r11,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a0214
	if (!ctx.cr6.eq) goto loc_820A0214;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r11,r11,0,31,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0124
	if (!ctx.cr6.eq) goto loc_820A0124;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0214
	if (!ctx.cr6.eq) goto loc_820A0214;
loc_820A0124:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0214
	if (ctx.cr6.eq) goto loc_820A0214;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0174
	if (ctx.cr6.eq) goto loc_820A0174;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0174
	if (!ctx.cr6.eq) goto loc_820A0174;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x82098f08
	ctx.lr = 0x820A0174;
	sub_82098F08(ctx, base);
loc_820A0174:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x820a0198
	if (ctx.cr6.gt) goto loc_820A0198;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0198
	if (!ctx.cr6.eq) goto loc_820A0198;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x820a0218
	goto loc_820A0218;
loc_820A0198:
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x820a021c
	if (ctx.cr6.gt) goto loc_820A021C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a01d8
	if (ctx.cr6.eq) goto loc_820A01D8;
	// bl 0x820a3f90
	ctx.lr = 0x820A01C4;
	sub_820A3F90(ctx, base);
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
loc_820A01D8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A01EC;
	sub_820A20E8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820a54e8
	ctx.lr = 0x820A0200;
	sub_820A54E8(ctx, base);
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
loc_820A0214:
	// li r11,64
	ctx.r11.s64 = 64;
loc_820A0218:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820A021C:
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

__attribute__((alias("__imp__sub_820A0230"))) PPC_WEAK_FUNC(sub_820A0230);
PPC_FUNC_IMPL(__imp__sub_820A0230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A0238;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a0264
	if (!ctx.cr6.eq) goto loc_820A0264;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0268
	if (ctx.cr6.eq) goto loc_820A0268;
loc_820A0264:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820A0268:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// beq cr6,0x820a02c0
	if (ctx.cr6.eq) goto loc_820A02C0;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x820a02a8
	if (ctx.cr6.eq) goto loc_820A02A8;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A029C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820A02A8:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A02B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820A02C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0350
	if (ctx.cr6.eq) goto loc_820A0350;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r12,2526
	ctx.r12.s64 = 2526;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a0348
	if (ctx.cr6.eq) goto loc_820A0348;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a032c
	if (ctx.cr6.eq) goto loc_820A032C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820A032C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A032C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,512
	ctx.r10.s64 = 512;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820A0348:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a048c
	if (!ctx.cr6.eq) goto loc_820A048C;
loc_820A0350:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x820a048c
	if (!ctx.cr6.eq) goto loc_820A048C;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stb r29,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r29.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0480
	if (ctx.cr6.eq) goto loc_820A0480;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x820a0398
	if (ctx.cr6.eq) goto loc_820A0398;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x820a0398
	if (ctx.cr6.eq) goto loc_820A0398;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820a0398
	if (ctx.cr6.eq) goto loc_820A0398;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820a039c
	if (!ctx.cr6.eq) goto loc_820A039C;
loc_820A0398:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820A039C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A03B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a03d4
	if (ctx.cr6.eq) goto loc_820A03D4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x820a03d8
	if (!ctx.cr6.eq) goto loc_820A03D8;
loc_820A03D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A03D8:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a03f0
	if (!ctx.cr6.eq) goto loc_820A03F0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0480
	if (ctx.cr6.eq) goto loc_820A0480;
loc_820A03F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,380(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a0440
	if (!ctx.cr6.eq) goto loc_820A0440;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r8,r11,2116
	ctx.r8.s64 = ctx.r11.s64 + 2116;
loc_820A041C:
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
	// bne 0x820a041c
	if (!ctx.cr0.eq) goto loc_820A041C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
loc_820A0440:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A0464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820A0480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A0480:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820A048C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A0498"))) PPC_WEAK_FUNC(sub_820A0498);
PPC_FUNC_IMPL(__imp__sub_820A0498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A04A0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0648
	if (ctx.cr6.eq) goto loc_820A0648;
	// bl 0x82098f60
	ctx.lr = 0x820A04BC;
	sub_82098F60(ctx, base);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r26,r11,31376
	ctx.r26.s64 = ctx.r11.s64 + 31376;
	// beq cr6,0x820a0508
	if (ctx.cr6.eq) goto loc_820A0508;
	// lfd f31,624(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r26.u32 + 624);
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8233c318
	ctx.lr = 0x820A04E0;
	sub_8233C318(ctx, base);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a0508
	if (ctx.cr6.eq) goto loc_820A0508;
	// lfs f1,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8233c318
	ctx.lr = 0x820A0500;
	sub_8233C318(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
loc_820A0508:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r11,15640
	ctx.r30.s64 = ctx.r11.s64 + 15640;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// addi r29,r11,192
	ctx.r29.s64 = ctx.r11.s64 + 192;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x820a05b4
	if (ctx.cr6.eq) goto loc_820A05B4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820a0544
	if (!ctx.cr6.eq) goto loc_820A0544;
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820a05b4
	if (ctx.cr6.eq) goto loc_820A05B4;
loc_820A0544:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a0584
	if (ctx.cr6.eq) goto loc_820A0584;
	// lfs f0,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1308(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1308);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820a0564
	if (!ctx.cr6.lt) goto loc_820A0564;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A0564:
	// li r9,1
	ctx.r9.s64 = 1;
	// lhz r5,318(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8209d7c0
	ctx.lr = 0x820A0584;
	sub_8209D7C0(ctx, base);
loc_820A0584:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// lfs f1,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x8209d718
	ctx.lr = 0x820A05A0;
	sub_8209D718(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A05B4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a0648
	if (ctx.cr6.eq) goto loc_820A0648;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a05fc
	if (ctx.cr6.eq) goto loc_820A05FC;
	// lfs f0,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1308(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1308);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820a05dc
	if (!ctx.cr6.lt) goto loc_820A05DC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A05DC:
	// li r9,1
	ctx.r9.s64 = 1;
	// lhz r5,318(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8209d7c0
	ctx.lr = 0x820A05FC;
	sub_8209D7C0(ctx, base);
loc_820A05FC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f1,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,2124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lhz r5,318(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a063c
	if (ctx.cr6.eq) goto loc_820A063C;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// bl 0x8209dac8
	ctx.lr = 0x820A0630;
	sub_8209DAC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A063C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8209d7c0
	ctx.lr = 0x820A0648;
	sub_8209D7C0(ctx, base);
loc_820A0648:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A0654"))) PPC_WEAK_FUNC(sub_820A0654);
PPC_FUNC_IMPL(__imp__sub_820A0654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0658"))) PPC_WEAK_FUNC(sub_820A0658);
PPC_FUNC_IMPL(__imp__sub_820A0658) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820a0660
	sub_820A0660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A0660"))) PPC_WEAK_FUNC(sub_820A0660);
PPC_FUNC_IMPL(__imp__sub_820A0660) {
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
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// fctidz f12,f31
	ctx.f12.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f31.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820992c0
	ctx.lr = 0x820A06A4;
	sub_820992C0(ctx, base);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0708
	if (ctx.cr6.eq) goto loc_820A0708;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a06c8
	if (!ctx.cr6.eq) goto loc_820A06C8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0708
	if (ctx.cr6.eq) goto loc_820A0708;
loc_820A06C8:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a0708
	if (!ctx.cr6.eq) goto loc_820A0708;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820a06fc
	if (ctx.cr6.lt) goto loc_820A06FC;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820a0700
	if (!ctx.cr6.gt) goto loc_820A0700;
loc_820A06FC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_820A0700:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8209df88
	ctx.lr = 0x820A0708;
	sub_8209DF88(ctx, base);
loc_820A0708:
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

__attribute__((alias("__imp__sub_820A0724"))) PPC_WEAK_FUNC(sub_820A0724);
PPC_FUNC_IMPL(__imp__sub_820A0724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0728"))) PPC_WEAK_FUNC(sub_820A0728);
PPC_FUNC_IMPL(__imp__sub_820A0728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A0730;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0938
	if (ctx.cr6.eq) goto loc_820A0938;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,15352
	ctx.r27.s64 = ctx.r11.s64 + 15352;
	// lwz r11,15352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15352);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a079c
	if (!ctx.cr6.eq) goto loc_820A079C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a079c
	if (ctx.cr6.eq) goto loc_820A079C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a079c
	if (ctx.cr6.eq) goto loc_820A079C;
	// lhz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 304);
	// lhz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820a079c
	if (ctx.cr6.eq) goto loc_820A079C;
	// sth r11,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820a07a0
	goto loc_820A07A0;
loc_820A079C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820A07A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0938
	if (ctx.cr6.eq) goto loc_820A0938;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// sth r28,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r28.u16);
	// lwz r3,320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a0844
	if (ctx.cr6.eq) goto loc_820A0844;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a0814
	if (!ctx.cr6.eq) goto loc_820A0814;
	// bl 0x820ddca8
	ctx.lr = 0x820A07E0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a07f0
	if (ctx.cr6.eq) goto loc_820A07F0;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a07f4
	goto loc_820A07F4;
loc_820A07F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_820A07F4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a0844
	if (ctx.cr6.eq) goto loc_820A0844;
	// lwz r11,280(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 & ctx.r4.u64;
	// b 0x820a0844
	goto loc_820A0844;
loc_820A0814:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a082c
	if (!ctx.cr6.eq) goto loc_820A082C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x820a0844
	goto loc_820A0844;
loc_820A082C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,262
	ctx.r6.s64 = 262;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820A0840;
	sub_820F3178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_820A0844:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8209f820
	ctx.lr = 0x820A0850;
	sub_8209F820(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820a0890
	if (!ctx.cr6.eq) goto loc_820A0890;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a0938
	if (ctx.cr6.eq) goto loc_820A0938;
	// lwz r11,272(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 272);
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82097298
	ctx.lr = 0x820A0888;
	sub_82097298(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820A0890:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r5,r31,404
	ctx.r5.s64 = ctx.r31.s64 + 404;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x820a08a8
	if (!ctx.cr6.gt) goto loc_820A08A8;
	// lwz r7,400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
loc_820A08A8:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a08bc
	if (!ctx.cr6.eq) goto loc_820A08BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x820a08d0
	goto loc_820A08D0;
loc_820A08BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r29.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_820A08D0:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lhz r6,318(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2124);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// lwz r3,2176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2176);
	// bl 0x8209bb50
	ctx.lr = 0x820A08F0;
	sub_8209BB50(ctx, base);
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a091c
	if (ctx.cr6.eq) goto loc_820A091C;
	// lwz r11,272(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 272);
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82097298
	ctx.lr = 0x820A091C;
	sub_82097298(ctx, base);
loc_820A091C:
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r28,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r28.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A0938:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A0940"))) PPC_WEAK_FUNC(sub_820A0940);
PPC_FUNC_IMPL(__imp__sub_820A0940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A0948;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x820a0998
	if (!ctx.cr6.eq) goto loc_820A0998;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0998
	if (!ctx.cr6.eq) goto loc_820A0998;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820a0a18
	if (!ctx.cr6.eq) goto loc_820A0A18;
	// stb r5,497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 497, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820A0998:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a09b8
	if (!ctx.cr6.eq) goto loc_820A09B8;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x820a09b8
	if (ctx.cr6.eq) goto loc_820A09B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a09b8
	if (ctx.cr6.eq) goto loc_820A09B8;
	// bl 0x82172d60
	ctx.lr = 0x820A09B8;
	sub_82172D60(ctx, base);
loc_820A09B8:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// beq cr6,0x820a09f4
	if (ctx.cr6.eq) goto loc_820A09F4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x820a09f4
	if (ctx.cr6.eq) goto loc_820A09F4;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
loc_820A09D8:
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
	// bne 0x820a09d8
	if (!ctx.cr0.eq) goto loc_820A09D8;
loc_820A09F4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0a10
	if (ctx.cr6.eq) goto loc_820A0A10;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x820a0a0c
	if (ctx.cr6.eq) goto loc_820A0A0C;
	// bl 0x82172d60
	ctx.lr = 0x820A0A0C;
	sub_82172D60(ctx, base);
loc_820A0A0C:
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_820A0A10:
	// stb r29,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r29.u8);
	// stb r28,497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 497, ctx.r28.u8);
loc_820A0A18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A0A20"))) PPC_WEAK_FUNC(sub_820A0A20);
PPC_FUNC_IMPL(__imp__sub_820A0A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A0A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0a48
	if (!ctx.cr6.eq) goto loc_820A0A48;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0b88
	if (ctx.cr6.eq) goto loc_820A0B88;
loc_820A0A48:
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// ld r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 456);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x820a0a60
	if (!ctx.cr6.gt) goto loc_820A0A60;
	// std r29,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r29.u64);
loc_820A0A60:
	// ld r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 456);
	// subf r28,r10,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ld r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 448);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpld cr6,r28,r11
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x820a0a7c
	if (ctx.cr6.lt) goto loc_820A0A7C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_820A0A7C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0b00
	if (ctx.cr6.eq) goto loc_820A0B00;
	// ld r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x820a0a9c
	if (ctx.cr6.lt) goto loc_820A0A9C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_820A0A9C:
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x820a0ab0
	if (ctx.cr6.lt) goto loc_820A0AB0;
loc_820A0AA4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x820a0aa4
	if (!ctx.cr6.lt) goto loc_820A0AA4;
loc_820A0AB0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x820a23a0
	ctx.lr = 0x820A0AC4;
	sub_820A23A0(ctx, base);
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// std r29,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r29.u64);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820a0b00
	if (!ctx.cr6.eq) goto loc_820A0B00;
	// addi r11,r31,480
	ctx.r11.s64 = ctx.r31.s64 + 480;
loc_820A0AE4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820a0ae4
	if (!ctx.cr0.eq) goto loc_820A0AE4;
loc_820A0B00:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0b6c
	if (!ctx.cr6.eq) goto loc_820A0B6C;
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r30,r31,480
	ctx.r30.s64 = ctx.r31.s64 + 480;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820a0b6c
	if (!ctx.cr6.gt) goto loc_820A0B6C;
loc_820A0B28:
	// ld r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r4,r9,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x820a23a0
	ctx.lr = 0x820A0B40;
	sub_820A23A0(ctx, base);
	// std r29,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r29.u64);
loc_820A0B44:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820a0b44
	if (!ctx.cr0.eq) goto loc_820A0B44;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x820a0b28
	if (ctx.cr6.gt) goto loc_820A0B28;
loc_820A0B6C:
	// ld r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 448);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r4,r9,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x820a23a0
	ctx.lr = 0x820A0B84;
	sub_820A23A0(ctx, base);
	// std r28,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r28.u64);
loc_820A0B88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A0B90"))) PPC_WEAK_FUNC(sub_820A0B90);
PPC_FUNC_IMPL(__imp__sub_820A0B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A0B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r12,0
	ctx.r12.s64 = 0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r12,r12,49696
	ctx.r12.u64 = ctx.r12.u64 | 49696;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0c38
	if (!ctx.cr6.eq) goto loc_820A0C38;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a0bd8
	if (!ctx.cr6.eq) goto loc_820A0BD8;
	// rlwinm r11,r10,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820a0bdc
	if (ctx.cr6.eq) goto loc_820A0BDC;
loc_820A0BD8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820A0BDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0d1c
	if (!ctx.cr6.eq) goto loc_820A0D1C;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// beq cr6,0x820a0c44
	if (ctx.cr6.eq) goto loc_820A0C44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0c38
	if (!ctx.cr6.eq) goto loc_820A0C38;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r9,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r9.u8);
	// beq cr6,0x820a0c38
	if (ctx.cr6.eq) goto loc_820A0C38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A0C38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820A0C44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0d1c
	if (ctx.cr6.eq) goto loc_820A0D1C;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stb r29,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r29.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0d10
	if (ctx.cr6.eq) goto loc_820A0D10;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a0d10
	if (ctx.cr6.eq) goto loc_820A0D10;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x820a0c9c
	if (ctx.cr6.eq) goto loc_820A0C9C;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x820a0c9c
	if (ctx.cr6.eq) goto loc_820A0C9C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820a0c9c
	if (ctx.cr6.eq) goto loc_820A0C9C;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820a0ca0
	if (!ctx.cr6.eq) goto loc_820A0CA0;
loc_820A0C9C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820A0CA0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A0CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a0cd8
	if (ctx.cr6.eq) goto loc_820A0CD8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x820a0cdc
	if (!ctx.cr6.eq) goto loc_820A0CDC;
loc_820A0CD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A0CDC:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0cf4
	if (!ctx.cr6.eq) goto loc_820A0CF4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0d10
	if (ctx.cr6.eq) goto loc_820A0D10;
loc_820A0CF4:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
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
	ctx.lr = 0x820A0D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A0D10:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820A0D1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A0D28"))) PPC_WEAK_FUNC(sub_820A0D28);
PPC_FUNC_IMPL(__imp__sub_820A0D28) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,15640
	ctx.r30.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a0d64
	if (!ctx.cr6.eq) goto loc_820A0D64;
	// bl 0x820a10e0
	ctx.lr = 0x820A0D60;
	sub_820A10E0(ctx, base);
	// b 0x820a0fc4
	goto loc_820A0FC4;
loc_820A0D64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0db0
	if (!ctx.cr6.eq) goto loc_820A0DB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A0D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820A0DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A0DB0:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0e18
	if (!ctx.cr6.eq) goto loc_820A0E18;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0de0
	if (!ctx.cr6.eq) goto loc_820A0DE0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820a0de4
	if (ctx.cr6.eq) goto loc_820A0DE4;
loc_820A0DE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A0DE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0fc4
	if (ctx.cr6.eq) goto loc_820A0FC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r10,0,31,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE001;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0fc4
	if (!ctx.cr6.eq) goto loc_820A0FC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A0E14;
	sub_8209FD08(ctx, base);
	// b 0x820a0fc4
	goto loc_820A0FC4;
loc_820A0E18:
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a0e40
	if (ctx.cr6.eq) goto loc_820A0E40;
	// lwz r3,2120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r9.u32);
loc_820A0E40:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
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
	ctx.lr = 0x820A0E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0a20
	ctx.lr = 0x820A0E68;
	sub_820A0A20(ctx, base);
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a0e94
	if (!ctx.cr6.eq) goto loc_820A0E94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a4098
	ctx.lr = 0x820A0E90;
	sub_820A4098(ctx, base);
	// b 0x820a0f44
	goto loc_820A0F44;
loc_820A0E94:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0eb8
	if (ctx.cr6.eq) goto loc_820A0EB8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820a4b68
	ctx.lr = 0x820A0EB4;
	sub_820A4B68(ctx, base);
	// b 0x820a0f44
	goto loc_820A0F44;
loc_820A0EB8:
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0efc
	if (ctx.cr6.eq) goto loc_820A0EFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820a3e20
	ctx.lr = 0x820A0ED0;
	sub_820A3E20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0f44
	if (!ctx.cr6.eq) goto loc_820A0F44;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820a4b68
	ctx.lr = 0x820A0EF8;
	sub_820A4B68(ctx, base);
	// b 0x820a0f44
	goto loc_820A0F44;
loc_820A0EFC:
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0f44
	if (ctx.cr6.eq) goto loc_820A0F44;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0f44
	if (!ctx.cr6.eq) goto loc_820A0F44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0f44
	if (ctx.cr6.eq) goto loc_820A0F44;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r11,r11,0,31,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE001;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a0f44
	if (!ctx.cr6.eq) goto loc_820A0F44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A0F44;
	sub_8209FD08(ctx, base);
loc_820A0F44:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x820a0f7c
	if (ctx.cr6.eq) goto loc_820A0F7C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0f7c
	if (ctx.cr6.eq) goto loc_820A0F7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209a478
	ctx.lr = 0x820A0F70;
	sub_8209A478(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_820A0F7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r10,0,31,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE001;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0fc4
	if (!ctx.cr6.eq) goto loc_820A0FC4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0fc4
	if (!ctx.cr6.eq) goto loc_820A0FC4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8209e000
	ctx.lr = 0x820A0FB8;
	sub_8209E000(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// oris r8,r9,64
	ctx.r8.u64 = ctx.r9.u64 | 4194304;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_820A0FC4:
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

__attribute__((alias("__imp__sub_820A0FE0"))) PPC_WEAK_FUNC(sub_820A0FE0);
PPC_FUNC_IMPL(__imp__sub_820A0FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a1024
	if (ctx.cr6.eq) goto loc_820A1024;
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// blr 
	return;
loc_820A1024:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a103c
	if (ctx.cr6.eq) goto loc_820A103C;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a1040
	if (!ctx.cr6.eq) goto loc_820A1040;
loc_820A103C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A1040:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a10cc
	if (ctx.cr6.eq) goto loc_820A10CC;
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a10a4
	if (!ctx.cr6.eq) goto loc_820A10A4;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// blr 
	return;
loc_820A10A4:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a10b8
	if (ctx.cr6.eq) goto loc_820A10B8;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820A10B8:
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a10cc
	if (ctx.cr6.eq) goto loc_820A10CC;
	// lfs f1,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820A10CC:
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

__attribute__((alias("__imp__sub_820A10DC"))) PPC_WEAK_FUNC(sub_820A10DC);
PPC_FUNC_IMPL(__imp__sub_820A10DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A10E0"))) PPC_WEAK_FUNC(sub_820A10E0);
PPC_FUNC_IMPL(__imp__sub_820A10E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A10E8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1114
	if (ctx.cr6.eq) goto loc_820A1114;
	// bl 0x820a52c8
	ctx.lr = 0x820A1114;
	sub_820A52C8(ctx, base);
loc_820A1114:
	// lbz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 508);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1194
	if (ctx.cr6.eq) goto loc_820A1194;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f12,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1148
	if (ctx.cr6.eq) goto loc_820A1148;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a114c
	if (!ctx.cr6.eq) goto loc_820A114C;
loc_820A1148:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820A114C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1174
	if (ctx.cr6.eq) goto loc_820A1174;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,48000
	ctx.r4.u64 = ctx.r4.u64 | 48000;
	// bl 0x820992c0
	ctx.lr = 0x820A1168;
	sub_820992C0(ctx, base);
	// lfs f0,1396(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_820A1174:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f11,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lfs f0,980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmadds f9,f10,f12,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f9,504(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
loc_820A1194:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a11b0
	if (ctx.cr6.eq) goto loc_820A11B0;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x820a11c4
	goto loc_820A11C4;
loc_820A11B0:
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a11c4
	if (ctx.cr6.eq) goto loc_820A11C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0038
	ctx.lr = 0x820A11C4;
	sub_820A0038(ctx, base);
loc_820A11C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1448
	if (ctx.cr6.eq) goto loc_820A1448;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f29,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a11ec
	if (!ctx.cr6.eq) goto loc_820A11EC;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x820a127c
	goto loc_820A127C;
loc_820A11EC:
	// li r10,-2
	ctx.r10.s64 = -2;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a120c
	if (ctx.cr6.eq) goto loc_820A120C;
	// lfs f31,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820a127c
	goto loc_820A127C;
loc_820A120C:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a1264
	if (!ctx.cr6.eq) goto loc_820A1264;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// b 0x820a127c
	goto loc_820A127C;
loc_820A1264:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1278
	if (ctx.cr6.eq) goto loc_820A1278;
	// lfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820a127c
	goto loc_820A127C;
loc_820A1278:
	// lfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
loc_820A127C:
	// lfs f30,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bgt cr6,0x820a1294
	if (ctx.cr6.gt) goto loc_820A1294;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1448
	if (ctx.cr6.eq) goto loc_820A1448;
loc_820A1294:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a1320
	if (!ctx.cr6.eq) goto loc_820A1320;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a12c4
	if (ctx.cr6.eq) goto loc_820A12C4;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a12c8
	if (!ctx.cr6.eq) goto loc_820A12C8;
loc_820A12C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820A12C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1320
	if (ctx.cr6.eq) goto loc_820A1320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82172e00
	ctx.lr = 0x820A12DC;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a1320
	if (!ctx.cr6.eq) goto loc_820A1320;
loc_820A12E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r10,0,31,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE001;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a1448
	if (!ctx.cr6.eq) goto loc_820A1448;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A130C;
	sub_8209FD08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820A1320:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// stb r29,497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 497, ctx.r29.u8);
	// blt cr6,0x820a1330
	if (ctx.cr6.lt) goto loc_820A1330;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_820A1330:
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stfs f29,504(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stb r10,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r10.u8);
	// bne cr6,0x820a136c
	if (!ctx.cr6.eq) goto loc_820A136C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x820a136c
	if (ctx.cr6.eq) goto loc_820A136C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a136c
	if (ctx.cr6.eq) goto loc_820A136C;
	// bl 0x82172d60
	ctx.lr = 0x820A136C;
	sub_82172D60(ctx, base);
loc_820A136C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A1384;
	sub_820A20E8(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a13a0
	if (ctx.cr6.eq) goto loc_820A13A0;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a13a4
	if (!ctx.cr6.eq) goto loc_820A13A4;
loc_820A13A0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820A13A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a13e8
	if (ctx.cr6.eq) goto loc_820A13E8;
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a13d4
	if (!ctx.cr6.eq) goto loc_820A13D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82098e38
	ctx.lr = 0x820A13D0;
	sub_82098E38(ctx, base);
	// b 0x820a13e8
	goto loc_820A13E8;
loc_820A13D4:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a13e8
	if (ctx.cr6.eq) goto loc_820A13E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a5970
	ctx.lr = 0x820A13E8;
	sub_820A5970(ctx, base);
loc_820A13E8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820a1404
	if (!ctx.cr6.gt) goto loc_820A1404;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x820a1430
	goto loc_820A1430;
loc_820A1404:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a12e8
	if (ctx.cr6.eq) goto loc_820A12E8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a1430
	if (!ctx.cr6.eq) goto loc_820A1430;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_820A1430:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1448
	if (ctx.cr6.eq) goto loc_820A1448;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820A1448:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A145C"))) PPC_WEAK_FUNC(sub_820A145C);
PPC_FUNC_IMPL(__imp__sub_820A145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A1460"))) PPC_WEAK_FUNC(sub_820A1460);
PPC_FUNC_IMPL(__imp__sub_820A1460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A1468;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// rlwinm r10,r11,0,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820a15f0
	if (!ctx.cr6.eq) goto loc_820A15F0;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820a14a8
	if (!ctx.cr6.eq) goto loc_820A14A8;
	// rlwinm r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x820a14ac
	if (ctx.cr6.eq) goto loc_820A14AC;
loc_820A14A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A14AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a14f4
	if (ctx.cr6.eq) goto loc_820A14F4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82095850
	ctx.lr = 0x820A14C0;
	sub_82095850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a14f4
	if (ctx.cr6.eq) goto loc_820A14F4;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// addi r5,r11,18
	ctx.r5.s64 = ctx.r11.s64 + 18;
	// bl 0x8233e4e0
	ctx.lr = 0x820A14E0;
	sub_8233E4E0(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A14F4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a1510
	if (ctx.cr6.eq) goto loc_820A1510;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A1510;
	sub_8209FD08(ctx, base);
loc_820A1510:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a152c
	if (!ctx.cr6.eq) goto loc_820A152C;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x820a158c
	goto loc_820A158C;
loc_820A152C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a154c
	if (ctx.cr6.eq) goto loc_820A154C;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r27,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r27.u32);
	// stw r27,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r27.u32);
	// b 0x820a158c
	goto loc_820A158C;
loc_820A154C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bne cr6,0x820a1564
	if (!ctx.cr6.eq) goto loc_820A1564;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_820A1564:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x820a158c
	if (!ctx.cr6.eq) goto loc_820A158C;
	// std r30,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a20e8
	ctx.lr = 0x820A157C;
	sub_820A20E8(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
loc_820A158C:
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// addi r29,r31,316
	ctx.r29.s64 = ctx.r31.s64 + 316;
	// addi r5,r11,18
	ctx.r5.s64 = ctx.r11.s64 + 18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820A15A0;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,318(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// bl 0x8209aea8
	ctx.lr = 0x820A15AC;
	sub_8209AEA8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a15fc
	if (!ctx.cr6.eq) goto loc_820A15FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x820a15d0
	if (ctx.cr6.eq) goto loc_820A15D0;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x820a15d4
	if (!ctx.cr6.eq) goto loc_820A15D4;
loc_820A15D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A15D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a15f0
	if (!ctx.cr6.eq) goto loc_820A15F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A15F0;
	sub_8209FD08(ctx, base);
loc_820A15F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A15FC:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r11,2140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a1650
	if (!ctx.cr6.eq) goto loc_820A1650;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// oris r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 | 3145728;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rlwinm r9,r9,0,31,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a1800
	if (ctx.cr6.eq) goto loc_820A1800;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a1800
	if (!ctx.cr6.eq) goto loc_820A1800;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A1650:
	// lhz r28,318(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x820a1668
	if (!ctx.cr6.gt) goto loc_820A1668;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_820A1668:
	// lwz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r26,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x1;
	// bl 0x820a2300
	ctx.lr = 0x820A1678;
	sub_820A2300(ctx, base);
	// clrlwi r11,r26,20
	ctx.r11.u64 = ctx.r26.u32 & 0xFFF;
	// lwz r7,320(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,31,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// addi r9,r31,492
	ctx.r9.s64 = ctx.r31.s64 + 492;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r31,488
	ctx.r10.s64 = ctx.r31.s64 + 488;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,9544
	ctx.r11.s64 = ctx.r11.s64 + 9544;
	// beq cr6,0x820a16c4
	if (ctx.cr6.eq) goto loc_820A16C4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r11,3188
	ctx.r3.s64 = ctx.r11.s64 + 3188;
	// bl 0x820a3238
	ctx.lr = 0x820A16C0;
	sub_820A3238(ctx, base);
	// b 0x820a16dc
	goto loc_820A16DC;
loc_820A16C4:
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r4,70
	ctx.r4.s64 = 70;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r11,388
	ctx.r3.s64 = ctx.r11.s64 + 388;
	// bl 0x820a3238
	ctx.lr = 0x820A16DC;
	sub_820A3238(ctx, base);
loc_820A16DC:
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A16FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rlwinm r9,r11,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// std r27,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r27.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r8,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r8.u64);
	// beq cr6,0x820a173c
	if (ctx.cr6.eq) goto loc_820A173C;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A1734;
	sub_820A20E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820a179c
	goto loc_820A179C;
loc_820A173C:
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1754
	if (ctx.cr6.eq) goto loc_820A1754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a3d58
	ctx.lr = 0x820A1750;
	sub_820A3D58(ctx, base);
	// b 0x820a179c
	goto loc_820A179C;
loc_820A1754:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1788
	if (ctx.cr6.eq) goto loc_820A1788;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a177c
	if (!ctx.cr6.eq) goto loc_820A177C;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820a49a0
	ctx.lr = 0x820A1778;
	sub_820A49A0(ctx, base);
	// b 0x820a179c
	goto loc_820A179C;
loc_820A177C:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820a49a0
	ctx.lr = 0x820A1784;
	sub_820A49A0(ctx, base);
	// b 0x820a179c
	goto loc_820A179C;
loc_820A1788:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x820a179c
	if (ctx.cr6.eq) goto loc_820A179C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209b948
	ctx.lr = 0x820A179C;
	sub_8209B948(ctx, base);
loc_820A179C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a17ec
	if (!ctx.cr6.eq) goto loc_820A17EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x820a17c0
	if (ctx.cr6.eq) goto loc_820A17C0;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x820a17c4
	if (!ctx.cr6.eq) goto loc_820A17C4;
loc_820A17C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A17C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a15f0
	if (!ctx.cr6.eq) goto loc_820A15F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A17E0;
	sub_8209FD08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A17EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a2288
	ctx.lr = 0x820A17F4;
	sub_820A2288(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_820A1800:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A180C"))) PPC_WEAK_FUNC(sub_820A180C);
PPC_FUNC_IMPL(__imp__sub_820A180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A1810"))) PPC_WEAK_FUNC(sub_820A1810);
PPC_FUNC_IMPL(__imp__sub_820A1810) {
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
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r11,r9,r12
	ctx.r11.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a1868
	if (!ctx.cr6.eq) goto loc_820A1868;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r3,480
	ctx.r8.s64 = ctx.r3.s64 + 480;
	// stb r11,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r11.u8);
loc_820A1848:
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
	// bne 0x820a1848
	if (!ctx.cr0.eq) goto loc_820A1848;
	// b 0x820a18f4
	goto loc_820A18F4;
loc_820A1868:
	// clrlwi r11,r9,20
	ctx.r11.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,0,31,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a18c8
	if (ctx.cr6.eq) goto loc_820A18C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a18c8
	if (!ctx.cr6.eq) goto loc_820A18C8;
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x820a18a0
	if (ctx.cr6.gt) goto loc_820A18A0;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bne cr6,0x820a18c8
	if (!ctx.cr6.eq) goto loc_820A18C8;
loc_820A18A0:
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// b 0x820a18f4
	goto loc_820A18F4;
loc_820A18C8:
	// rlwinm r11,r9,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a18f4
	if (ctx.cr6.eq) goto loc_820A18F4;
	// addi r11,r31,560
	ctx.r11.s64 = ctx.r31.s64 + 560;
loc_820A18D8:
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
	// bne 0x820a18d8
	if (!ctx.cr0.eq) goto loc_820A18D8;
loc_820A18F4:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1924
	if (ctx.cr6.eq) goto loc_820A1924;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1924
	if (ctx.cr6.eq) goto loc_820A1924;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x820a1918
	if (ctx.cr6.eq) goto loc_820A1918;
	// bl 0x82172d60
	ctx.lr = 0x820A1918;
	sub_82172D60(ctx, base);
loc_820A1918:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
loc_820A1924:
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

__attribute__((alias("__imp__sub_820A1938"))) PPC_WEAK_FUNC(sub_820A1938);
PPC_FUNC_IMPL(__imp__sub_820A1938) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// beq cr6,0x820a1964
	if (ctx.cr6.eq) goto loc_820A1964;
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
loc_820A1964:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0b90
	ctx.lr = 0x820A1970;
	sub_820A0B90(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r8,r31,388
	ctx.r8.s64 = ctx.r31.s64 + 388;
	// addi r5,r31,404
	ctx.r5.s64 = ctx.r31.s64 + 404;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,2124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// stw r8,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// beq cr6,0x820a1a40
	if (ctx.cr6.eq) goto loc_820A1A40;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a19f8
	if (ctx.cr6.eq) goto loc_820A19F8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// addi r11,r11,9544
	ctx.r11.s64 = ctx.r11.s64 + 9544;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r3,r11,3188
	ctx.r3.s64 = ctx.r11.s64 + 3188;
	// bne cr6,0x820a19d8
	if (!ctx.cr6.eq) goto loc_820A19D8;
	// addi r3,r11,388
	ctx.r3.s64 = ctx.r11.s64 + 388;
loc_820A19D8:
	// bl 0x820a33d8
	ctx.lr = 0x820A19DC;
	sub_820A33D8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// oris r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 1048576;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x820a1a08
	goto loc_820A1A08;
loc_820A19F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,2176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2176);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8209bb50
	ctx.lr = 0x820A1A08;
	sub_8209BB50(ctx, base);
loc_820A1A08:
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a1a3c
	if (ctx.cr6.eq) goto loc_820A1A3C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// addi r9,r11,15352
	ctx.r9.s64 = ctx.r11.s64 + 15352;
	// lwz r11,272(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82097298
	ctx.lr = 0x820A1A3C;
	sub_82097298(ctx, base);
loc_820A1A3C:
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
loc_820A1A40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A1A58"))) PPC_WEAK_FUNC(sub_820A1A58);
PPC_FUNC_IMPL(__imp__sub_820A1A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820A1A60;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r3,388
	ctx.r10.s64 = ctx.r3.s64 + 388;
	// addi r9,r11,15640
	ctx.r9.s64 = ctx.r11.s64 + 15640;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,2124(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2124);
	// rlwinm r27,r30,12,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x1;
	// stw r8,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r8.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r10,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r10.u32);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// lbz r5,15572(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15572);
	// lwz r11,2140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addic r3,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subfe r28,r3,r6
	temp.u8 = (~ctx.r3.u32 + ctx.r6.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne cr6,0x820a20e0
	if (!ctx.cr6.eq) goto loc_820A20E0;
	// clrlwi r26,r4,24
	ctx.r26.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820a1c84
	if (ctx.cr6.eq) goto loc_820A1C84;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1c84
	if (ctx.cr6.eq) goto loc_820A1C84;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1c84
	if (ctx.cr6.eq) goto loc_820A1C84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r30,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x1;
	// bl 0x820a2300
	ctx.lr = 0x820A1AE8;
	sub_820A2300(ctx, base);
	// clrlwi r11,r30,20
	ctx.r11.u64 = ctx.r30.u32 & 0xFFF;
	// lwz r7,320(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,31,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// lhz r5,318(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1b38
	if (ctx.cr6.eq) goto loc_820A1B38;
	// addi r11,r31,492
	ctx.r11.s64 = ctx.r31.s64 + 492;
	// addi r9,r31,316
	ctx.r9.s64 = ctx.r31.s64 + 316;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r11,r10,9544
	ctx.r11.s64 = ctx.r10.s64 + 9544;
	// addi r10,r31,488
	ctx.r10.s64 = ctx.r31.s64 + 488;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,3188
	ctx.r3.s64 = ctx.r11.s64 + 3188;
	// bl 0x820a3238
	ctx.lr = 0x820A1B34;
	sub_820A3238(ctx, base);
	// b 0x820a1b64
	goto loc_820A1B64;
loc_820A1B38:
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r10,r31,492
	ctx.r10.s64 = ctx.r31.s64 + 492;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r11,r9,9544
	ctx.r11.s64 = ctx.r9.s64 + 9544;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r31,488
	ctx.r10.s64 = ctx.r31.s64 + 488;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r4,70
	ctx.r4.s64 = 70;
	// addi r3,r11,388
	ctx.r3.s64 = ctx.r11.s64 + 388;
	// bl 0x820a3238
	ctx.lr = 0x820A1B64;
	sub_820A3238(ctx, base);
loc_820A1B64:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1c84
	if (ctx.cr6.eq) goto loc_820A1C84;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1c78
	if (ctx.cr6.eq) goto loc_820A1C78;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1bb4
	if (ctx.cr6.eq) goto loc_820A1BB4;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1bb4
	if (ctx.cr6.eq) goto loc_820A1BB4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A1BB4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a1bd0
	if (ctx.cr6.eq) goto loc_820A1BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a3d58
	ctx.lr = 0x820A1BCC;
	sub_820A3D58(ctx, base);
	// b 0x820a1c18
	goto loc_820A1C18;
loc_820A1BD0:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1c04
	if (ctx.cr6.eq) goto loc_820A1C04;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a1bf8
	if (!ctx.cr6.eq) goto loc_820A1BF8;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820a49a0
	ctx.lr = 0x820A1BF4;
	sub_820A49A0(ctx, base);
	// b 0x820a1c18
	goto loc_820A1C18;
loc_820A1BF8:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820a49a0
	ctx.lr = 0x820A1C00;
	sub_820A49A0(ctx, base);
	// b 0x820a1c18
	goto loc_820A1C18;
loc_820A1C04:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x820a1c1c
	if (ctx.cr6.eq) goto loc_820A1C1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209b948
	ctx.lr = 0x820A1C18;
	sub_8209B948(ctx, base);
loc_820A1C18:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820A1C1C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a1c68
	if (!ctx.cr6.eq) goto loc_820A1C68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x820a1c40
	if (ctx.cr6.eq) goto loc_820A1C40;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x820a1c44
	if (!ctx.cr6.eq) goto loc_820A1C44;
loc_820A1C40:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A1C44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a20e0
	if (!ctx.cr6.eq) goto loc_820A20E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A1C60;
	sub_8209FD08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_820A1C68:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r25,1
	ctx.r25.s64 = 1;
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_820A1C78:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_820A1C84:
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// beq cr6,0x820a1ca8
	if (ctx.cr6.eq) goto loc_820A1CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a2288
	ctx.lr = 0x820A1CA8;
	sub_820A2288(ctx, base);
loc_820A1CA8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820a2068
	if (ctx.cr6.eq) goto loc_820A2068;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a2064
	if (ctx.cr6.eq) goto loc_820A2064;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2064
	if (ctx.cr6.eq) goto loc_820A2064;
	// lis r12,4
	ctx.r12.s64 = 262144;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r12,r12,2049
	ctx.r12.u64 = ctx.r12.u64 | 2049;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a1e48
	if (!ctx.cr6.eq) goto loc_820A1E48;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a1e0c
	if (!ctx.cr6.eq) goto loc_820A1E0C;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a1d00
	if (ctx.cr6.eq) goto loc_820A1D00;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a1d04
	if (!ctx.cr6.eq) goto loc_820A1D04;
loc_820A1D00:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820A1D04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1df0
	if (ctx.cr6.eq) goto loc_820A1DF0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820a21e0
	ctx.lr = 0x820A1D20;
	sub_820A21E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a1d7c
	if (!ctx.cr6.eq) goto loc_820A1D7C;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x820a1d74
	if (!ctx.cr6.eq) goto loc_820A1D74;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r10,r10,5316
	ctx.r10.s64 = ctx.r10.s64 + 5316;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_820A1D4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a1d6c
	if (!ctx.cr0.eq) goto loc_820A1D6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a1d4c
	if (!ctx.cr6.eq) goto loc_820A1D4C;
loc_820A1D6C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a1d7c
	if (ctx.cr6.eq) goto loc_820A1D7C;
loc_820A1D74:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820a1d80
	goto loc_820A1D80;
loc_820A1D7C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A1D80:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u32);
	// beq cr6,0x820a1dc0
	if (ctx.cr6.eq) goto loc_820A1DC0;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,428
	ctx.r5.s64 = ctx.r11.s64 + 428;
	// b 0x820a1dc4
	goto loc_820A1DC4;
loc_820A1DC0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_820A1DC4:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,84(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// addi r4,r11,244
	ctx.r4.s64 = ctx.r11.s64 + 244;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A1DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A1DF0:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r24.u32);
	// b 0x820a2064
	goto loc_820A2064;
loc_820A1E0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a1e48
	if (!ctx.cr6.eq) goto loc_820A1E48;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1e2c
	if (ctx.cr6.eq) goto loc_820A1E2C;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a1e30
	if (!ctx.cr6.eq) goto loc_820A1E30;
loc_820A1E2C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820A1E30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1e48
	if (ctx.cr6.eq) goto loc_820A1E48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a1810
	ctx.lr = 0x820A1E44;
	sub_820A1810(ctx, base);
	// b 0x820a2064
	goto loc_820A2064;
loc_820A1E48:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2064
	if (ctx.cr6.eq) goto loc_820A2064;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1e6c
	if (ctx.cr6.eq) goto loc_820A1E6C;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a1e70
	if (!ctx.cr6.eq) goto loc_820A1E70;
loc_820A1E6C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820A1E70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2064
	if (ctx.cr6.eq) goto loc_820A2064;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2064
	if (ctx.cr6.eq) goto loc_820A2064;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a2064
	if (!ctx.cr6.eq) goto loc_820A2064;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a2064
	if (ctx.cr6.eq) goto loc_820A2064;
	// lwz r9,552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// addi r4,r11,244
	ctx.r4.s64 = ctx.r11.s64 + 244;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820A1ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// ld r3,544(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 544);
	// lwz r9,52(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// subf r6,r9,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r9.s64;
	// lwz r3,40(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lhz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// and r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 & ctx.r4.u64;
	// subf r6,r3,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r3.s64;
	// beq cr6,0x820a1f94
	if (ctx.cr6.eq) goto loc_820A1F94;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x820a1f8c
	if (!ctx.cr6.eq) goto loc_820A1F8C;
	// addi r9,r31,340
	ctx.r9.s64 = ctx.r31.s64 + 340;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,5360
	ctx.r10.s64 = ctx.r10.s64 + 5360;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
loc_820A1F2C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820a1f4c
	if (!ctx.cr0.eq) goto loc_820A1F4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x820a1f2c
	if (!ctx.cr6.eq) goto loc_820A1F2C;
loc_820A1F4C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820a1f94
	if (ctx.cr6.eq) goto loc_820A1F94;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,4900
	ctx.r10.s64 = ctx.r10.s64 + 4900;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
loc_820A1F64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a1f84
	if (!ctx.cr0.eq) goto loc_820A1F84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a1f64
	if (!ctx.cr6.eq) goto loc_820A1F64;
loc_820A1F84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a1f94
	if (ctx.cr6.eq) goto loc_820A1F94;
loc_820A1F8C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820a1f98
	goto loc_820A1F98;
loc_820A1F94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A1F98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1fc8
	if (ctx.cr6.eq) goto loc_820A1FC8;
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// lhz r10,318(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// divdu r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 / ctx.r7.u64;
	// tdllei r7,0
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// b 0x820a2024
	goto loc_820A2024;
loc_820A1FC8:
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lhz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// divdu r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 / ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// tdllei r11,0
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// divwu. r11,r6,r10
	ctx.r11.u32 = ctx.r6.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twllei r10,0
	// bne 0x820a1ff8
	if (!ctx.cr0.eq) goto loc_820A1FF8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820a2024
	goto loc_820A2024;
loc_820A1FF8:
	// lhz r9,330(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,318(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r4,-4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// twllei r11,0
	// divwu r11,r4,r11
	ctx.r11.u32 = ctx.r4.u32 / ctx.r11.u32;
loc_820A2024:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x820a2054
	if (!ctx.cr6.lt) goto loc_820A2054;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// ld r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// std r5,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r5.u64);
	// b 0x820a2064
	goto loc_820A2064;
loc_820A2054:
	// ble cr6,0x820a2064
	if (!ctx.cr6.gt) goto loc_820A2064;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a23a0
	ctx.lr = 0x820A2064;
	sub_820A23A0(ctx, base);
loc_820A2064:
	// std r24,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r24.u64);
loc_820A2068:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0b90
	ctx.lr = 0x820A2074;
	sub_820A0B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a20e0
	if (ctx.cr6.eq) goto loc_820A20E0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a20e0
	if (ctx.cr6.eq) goto loc_820A20E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a20e0
	if (ctx.cr6.eq) goto loc_820A20E0;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x820a20bc
	if (ctx.cr6.eq) goto loc_820A20BC;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x820a20bc
	if (ctx.cr6.eq) goto loc_820A20BC;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x820a20e0
	if (!ctx.cr6.eq) goto loc_820A20E0;
loc_820A20BC:
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a20e0
	if (ctx.cr6.eq) goto loc_820A20E0;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x820a20d8
	if (ctx.cr6.eq) goto loc_820A20D8;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x820a20e0
	if (!ctx.cr6.eq) goto loc_820A20E0;
loc_820A20D8:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820A20E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A20E8"))) PPC_WEAK_FUNC(sub_820A20E8);
PPC_FUNC_IMPL(__imp__sub_820A20E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r9,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2128
	if (ctx.cr6.eq) goto loc_820A2128;
	// addi r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 + 112;
	// lwz r8,564(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
loc_820A2108:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a21cc
	if (ctx.cr6.eq) goto loc_820A21CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820a2108
	if (ctx.cr6.lt) goto loc_820A2108;
	// blr 
	return;
loc_820A2128:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a2140
	if (ctx.cr6.eq) goto loc_820A2140;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a2144
	if (!ctx.cr6.eq) goto loc_820A2144;
loc_820A2140:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A2144:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a217c
	if (!ctx.cr6.eq) goto loc_820A217C;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2174
	if (ctx.cr6.eq) goto loc_820A2174;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820a21a0
	goto loc_820A21A0;
loc_820A2174:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820a21a0
	goto loc_820A21A0;
loc_820A217C:
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a219c
	if (!ctx.cr6.eq) goto loc_820A219C;
	// rlwinm r11,r9,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a21a0
	if (ctx.cr6.eq) goto loc_820A21A0;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_820A219C:
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
loc_820A21A0:
	// addi r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 + 112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
loc_820A21AC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a21cc
	if (ctx.cr6.eq) goto loc_820A21CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820a21ac
	if (ctx.cr6.lt) goto loc_820A21AC;
	// blr 
	return;
loc_820A21CC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A21DC"))) PPC_WEAK_FUNC(sub_820A21DC);
PPC_FUNC_IMPL(__imp__sub_820A21DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A21E0"))) PPC_WEAK_FUNC(sub_820A21E0);
PPC_FUNC_IMPL(__imp__sub_820A21E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,353
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 353, ctx.xer);
	// beq cr6,0x820a2278
	if (ctx.cr6.eq) goto loc_820A2278;
	// cmplwi cr6,r10,354
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 354, ctx.xer);
	// beq cr6,0x820a2278
	if (ctx.cr6.eq) goto loc_820A2278;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x820a226c
	if (!ctx.cr6.eq) goto loc_820A226C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r9,5392
	ctx.r9.s64 = ctx.r9.s64 + 5392;
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
loc_820A2210:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820a2230
	if (!ctx.cr0.eq) goto loc_820A2230;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x820a2210
	if (!ctx.cr6.eq) goto loc_820A2210;
loc_820A2230:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820a2278
	if (ctx.cr6.eq) goto loc_820A2278;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,5408
	ctx.r10.s64 = ctx.r10.s64 + 5408;
loc_820A2244:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a2264
	if (!ctx.cr0.eq) goto loc_820A2264;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a2244
	if (!ctx.cr6.eq) goto loc_820A2244;
loc_820A2264:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a2278
	if (ctx.cr6.eq) goto loc_820A2278;
loc_820A226C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_820A2278:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2284"))) PPC_WEAK_FUNC(sub_820A2284);
PPC_FUNC_IMPL(__imp__sub_820A2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2288"))) PPC_WEAK_FUNC(sub_820A2288);
PPC_FUNC_IMPL(__imp__sub_820A2288) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r11,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, ctx.r11.u16);
	// sth r11,58(r3)
	PPC_STORE_U16(ctx.r3.u32 + 58, ctx.r11.u16);
	// sth r11,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r11.u16);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A22C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A22D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820A22E8;
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
}

__attribute__((alias("__imp__sub_820A22FC"))) PPC_WEAK_FUNC(sub_820A22FC);
PPC_FUNC_IMPL(__imp__sub_820A22FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2300"))) PPC_WEAK_FUNC(sub_820A2300);
PPC_FUNC_IMPL(__imp__sub_820A2300) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820a2314
	if (!ctx.cr6.eq) goto loc_820A2314;
loc_820A230C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_820A2314:
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x820a2394
	if (!ctx.cr6.eq) goto loc_820A2394;
	// addi r9,r3,340
	ctx.r9.s64 = ctx.r3.s64 + 340;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,5360
	ctx.r10.s64 = ctx.r10.s64 + 5360;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
loc_820A2330:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820a2350
	if (!ctx.cr0.eq) goto loc_820A2350;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x820a2330
	if (!ctx.cr6.eq) goto loc_820A2330;
loc_820A2350:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820a230c
	if (ctx.cr6.eq) goto loc_820A230C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,4900
	ctx.r10.s64 = ctx.r10.s64 + 4900;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
loc_820A2368:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a2388
	if (!ctx.cr0.eq) goto loc_820A2388;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a2368
	if (!ctx.cr6.eq) goto loc_820A2368;
loc_820A2388:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820A2394:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A239C"))) PPC_WEAK_FUNC(sub_820A239C);
PPC_FUNC_IMPL(__imp__sub_820A239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A23A0"))) PPC_WEAK_FUNC(sub_820A23A0);
PPC_FUNC_IMPL(__imp__sub_820A23A0) {
	PPC_FUNC_PROLOGUE();
	// ld r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 112);
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// ld r7,120(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 120);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// std r8,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r8.u64);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r6,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r6.u32);
	// cmpld cr6,r5,r10
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r10.u64, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r7,0
	ctx.r7.s64 = 0;
loc_820A23DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r4,r10,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// beq cr6,0x820a2424
	if (ctx.cr6.eq) goto loc_820A2424;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
loc_820A2424:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpld cr6,r5,r10
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x820a23dc
	if (ctx.cr6.gt) goto loc_820A23DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2444"))) PPC_WEAK_FUNC(sub_820A2444);
PPC_FUNC_IMPL(__imp__sub_820A2444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2448"))) PPC_WEAK_FUNC(sub_820A2448);
PPC_FUNC_IMPL(__imp__sub_820A2448) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a2474
	if (!ctx.cr6.eq) goto loc_820A2474;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A2474:
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
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
	ctx.lr = 0x820A2490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A24A4"))) PPC_WEAK_FUNC(sub_820A24A4);
PPC_FUNC_IMPL(__imp__sub_820A24A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A24A8"))) PPC_WEAK_FUNC(sub_820A24A8);
PPC_FUNC_IMPL(__imp__sub_820A24A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a24e0
	if (ctx.cr6.eq) goto loc_820A24E0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820a24e0
	if (ctx.cr6.eq) goto loc_820A24E0;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x820a24e0
	if (ctx.cr6.eq) goto loc_820A24E0;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_820A24E0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a24fc
	if (!ctx.cr6.eq) goto loc_820A24FC;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
loc_820A24FC:
	// lwz r10,492(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,488(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// rlwinm r8,r10,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A252C"))) PPC_WEAK_FUNC(sub_820A252C);
PPC_FUNC_IMPL(__imp__sub_820A252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2530"))) PPC_WEAK_FUNC(sub_820A2530);
PPC_FUNC_IMPL(__imp__sub_820A2530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A2538;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a25d4
	if (ctx.cr6.eq) goto loc_820A25D4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x820a2584
	if (!ctx.cr6.lt) goto loc_820A2584;
loc_820A2560:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,26328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26328);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a2584
	if (ctx.cr6.eq) goto loc_820A2584;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x820a2588
	if (!ctx.cr6.eq) goto loc_820A2588;
loc_820A2584:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A2588:
	// addi r31,r11,616
	ctx.r31.s64 = ctx.r11.s64 + 616;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x820A2598;
	sub_823052D8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a25e4
	if (ctx.cr6.eq) goto loc_820A25E4;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a25dc
	if (ctx.cr6.eq) goto loc_820A25DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A25C4;
	sub_8209FD08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x820A25CC;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820A25D4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x820a2560
	goto loc_820A2560;
loc_820A25DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a2610
	if (!ctx.cr6.eq) goto loc_820A2610;
loc_820A25E4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a2610
	if (ctx.cr6.eq) goto loc_820A2610;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r29,316
	ctx.r10.s64 = ctx.r29.s64 + 316;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x820a1460
	ctx.lr = 0x820A2610;
	sub_820A1460(ctx, base);
loc_820A2610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x820A2618;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A2620"))) PPC_WEAK_FUNC(sub_820A2620);
PPC_FUNC_IMPL(__imp__sub_820A2620) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x820a26a8
	if (ctx.cr6.eq) goto loc_820A26A8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x820a266c
	if (ctx.cr6.eq) goto loc_820A266C;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x820a2660
	if (ctx.cr6.eq) goto loc_820A2660;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x820a2654
	if (ctx.cr6.eq) goto loc_820A2654;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x820a26c0
	if (!ctx.cr6.eq) goto loc_820A26C0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25092);
	// blr 
	return;
loc_820A2654:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25088);
	// blr 
	return;
loc_820A2660:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25084);
	// blr 
	return;
loc_820A266C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x820a269c
	if (ctx.cr6.eq) goto loc_820A269C;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x820a2690
	if (ctx.cr6.eq) goto loc_820A2690;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x820a26c0
	if (!ctx.cr6.eq) goto loc_820A26C0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
	// blr 
	return;
loc_820A2690:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25100);
	// blr 
	return;
loc_820A269C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25096);
	// blr 
	return;
loc_820A26A8:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x820a26e0
	if (ctx.cr6.eq) goto loc_820A26E0;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x820a26d4
	if (ctx.cr6.eq) goto loc_820A26D4;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// beq cr6,0x820a26c8
	if (ctx.cr6.eq) goto loc_820A26C8;
loc_820A26C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820A26C8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25116);
	// blr 
	return;
loc_820A26D4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25112);
	// blr 
	return;
loc_820A26E0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,25108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A26EC"))) PPC_WEAK_FUNC(sub_820A26EC);
PPC_FUNC_IMPL(__imp__sub_820A26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A26F0"))) PPC_WEAK_FUNC(sub_820A26F0);
PPC_FUNC_IMPL(__imp__sub_820A26F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820A26F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x820a2728
	if (!ctx.cr6.eq) goto loc_820A2728;
	// bl 0x820a2900
	ctx.lr = 0x820A2728;
	sub_820A2900(ctx, base);
loc_820A2728:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a2800
	if (!ctx.cr6.eq) goto loc_820A2800;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a2620
	ctx.lr = 0x820A2744;
	sub_820A2620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r25,-13569
	ctx.r25.s64 = -889257984;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a2760
	if (!ctx.cr6.eq) goto loc_820A2760;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,5424
	ctx.r10.s64 = ctx.r11.s64 + 5424;
	// stw r10,-13570(r25)
	PPC_STORE_U32(ctx.r25.u32 + -13570, ctx.r10.u32);
loc_820A2760:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x820a2784
	if (!ctx.cr6.eq) goto loc_820A2784;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820a3670
	ctx.lr = 0x820A2774;
	sub_820A3670(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x820a27e0
	goto loc_820A27E0;
loc_820A2784:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x820a2790
	if (!ctx.cr6.eq) goto loc_820A2790;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_820A2790:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// addi r11,r9,9544
	ctx.r11.s64 = ctx.r9.s64 + 9544;
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// subfic r3,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r8.s64;
	// lwz r9,2124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2124);
	// addi r7,r11,3908
	ctx.r7.s64 = ctx.r11.s64 + 3908;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r10,2144
	ctx.r6.s64 = ctx.r10.s64 + 2144;
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,3920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3920, ctx.r9.u32);
	// bl 0x8209def0
	ctx.lr = 0x820A27CC;
	sub_8209DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a27e0
	if (ctx.cr6.eq) goto loc_820A27E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,5468
	ctx.r10.s64 = ctx.r11.s64 + 5468;
	// stw r10,-13570(r25)
	PPC_STORE_U32(ctx.r25.u32 + -13570, ctx.r10.u32);
loc_820A27E0:
	// rlwinm r11,r29,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF00;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a2800
	if (ctx.cr6.eq) goto loc_820A2800;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_820A2800:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A2828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x820a2844
	if (ctx.cr6.lt) goto loc_820A2844;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_820A2844:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A285C"))) PPC_WEAK_FUNC(sub_820A285C);
PPC_FUNC_IMPL(__imp__sub_820A285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2860"))) PPC_WEAK_FUNC(sub_820A2860);
PPC_FUNC_IMPL(__imp__sub_820A2860) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2878
	if (ctx.cr6.eq) goto loc_820A2878;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820a287c
	if (!ctx.cr6.eq) goto loc_820A287C;
loc_820A2878:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A287C:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a28a4
	if (ctx.cr6.eq) goto loc_820A28A4;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x820a28a8
	if (!ctx.cr6.eq) goto loc_820A28A8;
loc_820A28A4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820A28A8:
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r9,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a28f0
	if (ctx.cr6.eq) goto loc_820A28F0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a28f0
	if (ctx.cr6.eq) goto loc_820A28F0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820a28e4
	if (ctx.cr6.eq) goto loc_820A28E4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a28f0
	if (!ctx.cr6.eq) goto loc_820A28F0;
loc_820A28E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_820A28F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A28FC"))) PPC_WEAK_FUNC(sub_820A28FC);
PPC_FUNC_IMPL(__imp__sub_820A28FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2900"))) PPC_WEAK_FUNC(sub_820A2900);
PPC_FUNC_IMPL(__imp__sub_820A2900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a293c
	if (ctx.cr6.eq) goto loc_820A293C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_820A293C:
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A295C"))) PPC_WEAK_FUNC(sub_820A295C);
PPC_FUNC_IMPL(__imp__sub_820A295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2960"))) PPC_WEAK_FUNC(sub_820A2960);
PPC_FUNC_IMPL(__imp__sub_820A2960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A2968;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,70
	ctx.r11.s64 = 70;
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,88
	ctx.r9.s64 = 88;
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
	// stw r9,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r31.u32);
	// addi r30,r3,388
	ctx.r30.s64 = ctx.r3.s64 + 388;
	// stw r31,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r31.u32);
	// li r28,69
	ctx.r28.s64 = 69;
	// stw r31,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r31.u32);
	// stw r31,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r31.u32);
	// stw r31,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r31.u32);
	// stw r31,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r31.u32);
loc_820A29AC:
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// sth r31,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r31.u16);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// bl 0x82305000
	ctx.lr = 0x820A29E0;
	sub_82305000(ctx, base);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bge 0x820a29ac
	if (!ctx.cr0.lt) goto loc_820A29AC;
	// addi r30,r29,3188
	ctx.r30.s64 = ctx.r29.s64 + 3188;
	// li r28,17
	ctx.r28.s64 = 17;
loc_820A29F8:
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// sth r31,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r31.u16);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// bl 0x82305000
	ctx.lr = 0x820A2A2C;
	sub_82305000(ctx, base);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bge 0x820a29f8
	if (!ctx.cr0.lt) goto loc_820A29F8;
	// addi r11,r29,3916
	ctx.r11.s64 = ctx.r29.s64 + 3916;
	// stw r31,3916(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3916, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,704
	ctx.r5.s64 = 704;
	// stw r11,3912(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3912, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,3908(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3908, ctx.r10.u32);
	// addi r3,r29,3924
	ctx.r3.s64 = ctx.r29.s64 + 3924;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2A60;
	sub_8233EAF0(ctx, base);
	// li r5,704
	ctx.r5.s64 = 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,4628
	ctx.r3.s64 = ctx.r29.s64 + 4628;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2A70;
	sub_8233EAF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,5332
	ctx.r3.s64 = ctx.r29.s64 + 5332;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2A80;
	sub_8233EAF0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,5588
	ctx.r3.s64 = ctx.r29.s64 + 5588;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2A90;
	sub_8233EAF0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,5668
	ctx.r3.s64 = ctx.r29.s64 + 5668;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2AA0;
	sub_8233EAF0(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,5748
	ctx.r3.s64 = ctx.r29.s64 + 5748;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2AB0;
	sub_8233EAF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A2ABC"))) PPC_WEAK_FUNC(sub_820A2ABC);
PPC_FUNC_IMPL(__imp__sub_820A2ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2AC0"))) PPC_WEAK_FUNC(sub_820A2AC0);
PPC_FUNC_IMPL(__imp__sub_820A2AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820A2AC8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// lwz r11,25084(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 25084);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2ae8
	if (ctx.cr6.eq) goto loc_820A2AE8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2AE8;
	sub_82080000(ctx, base);
loc_820A2AE8:
	// lis r23,-32178
	ctx.r23.s64 = -2108817408;
	// lwz r11,25088(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 25088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2b04
	if (ctx.cr6.eq) goto loc_820A2B04;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2B04;
	sub_82080000(ctx, base);
loc_820A2B04:
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// lwz r11,25092(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2b20
	if (ctx.cr6.eq) goto loc_820A2B20;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2B20;
	sub_82080000(ctx, base);
loc_820A2B20:
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// lwz r11,25096(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2b3c
	if (ctx.cr6.eq) goto loc_820A2B3C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2B3C;
	sub_82080000(ctx, base);
loc_820A2B3C:
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// lwz r11,25100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2b58
	if (ctx.cr6.eq) goto loc_820A2B58;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2B58;
	sub_82080000(ctx, base);
loc_820A2B58:
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r11,25104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2b74
	if (ctx.cr6.eq) goto loc_820A2B74;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2B74;
	sub_82080000(ctx, base);
loc_820A2B74:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r11,25108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2b90
	if (ctx.cr6.eq) goto loc_820A2B90;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2B90;
	sub_82080000(ctx, base);
loc_820A2B90:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,25112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2bac
	if (ctx.cr6.eq) goto loc_820A2BAC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2BAC;
	sub_82080000(ctx, base);
loc_820A2BAC:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,25116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2bc8
	if (ctx.cr6.eq) goto loc_820A2BC8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A2BC8;
	sub_82080000(ctx, base);
loc_820A2BC8:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r27,r10,9544
	ctx.r27.s64 = ctx.r10.s64 + 9544;
	// stw r21,25112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25112, ctx.r21.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,25116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25116, ctx.r21.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r21,25084(r22)
	PPC_STORE_U32(ctx.r22.u32 + 25084, ctx.r21.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r21,25088(r23)
	PPC_STORE_U32(ctx.r23.u32 + 25088, ctx.r21.u32);
	// addi r31,r27,3928
	ctx.r31.s64 = ctx.r27.s64 + 3928;
	// stw r21,25092(r24)
	PPC_STORE_U32(ctx.r24.u32 + 25092, ctx.r21.u32);
	// li r30,88
	ctx.r30.s64 = 88;
	// stw r21,25096(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25096, ctx.r21.u32);
	// stw r21,25100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25100, ctx.r21.u32);
	// stw r21,25104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25104, ctx.r21.u32);
	// stw r21,25108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25108, ctx.r21.u32);
loc_820A2C0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2c28
	if (ctx.cr6.eq) goto loc_820A2C28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A2C28:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x820a2c0c
	if (!ctx.cr0.eq) goto loc_820A2C0C;
	// li r30,88
	ctx.r30.s64 = 88;
	// addi r31,r27,4632
	ctx.r31.s64 = ctx.r27.s64 + 4632;
loc_820A2C3C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2c58
	if (ctx.cr6.eq) goto loc_820A2C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A2C58:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x820a2c3c
	if (!ctx.cr0.eq) goto loc_820A2C3C;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r31,r27,5336
	ctx.r31.s64 = ctx.r27.s64 + 5336;
loc_820A2C6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2c88
	if (ctx.cr6.eq) goto loc_820A2C88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A2C88:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x820a2c6c
	if (!ctx.cr0.eq) goto loc_820A2C6C;
	// li r30,10
	ctx.r30.s64 = 10;
	// addi r31,r27,5592
	ctx.r31.s64 = ctx.r27.s64 + 5592;
loc_820A2C9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2cb8
	if (ctx.cr6.eq) goto loc_820A2CB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A2CB8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x820a2c9c
	if (!ctx.cr0.eq) goto loc_820A2C9C;
	// li r30,10
	ctx.r30.s64 = 10;
	// addi r31,r27,5672
	ctx.r31.s64 = ctx.r27.s64 + 5672;
loc_820A2CCC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2ce8
	if (ctx.cr6.eq) goto loc_820A2CE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A2CE8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x820a2ccc
	if (!ctx.cr0.eq) goto loc_820A2CCC;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r31,r27,5752
	ctx.r31.s64 = ctx.r27.s64 + 5752;
loc_820A2CFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2d18
	if (ctx.cr6.eq) goto loc_820A2D18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A2D18:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x820a2cfc
	if (!ctx.cr0.eq) goto loc_820A2CFC;
	// li r5,704
	ctx.r5.s64 = 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,3924
	ctx.r3.s64 = ctx.r27.s64 + 3924;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2D34;
	sub_8233EAF0(ctx, base);
	// li r5,704
	ctx.r5.s64 = 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,4628
	ctx.r3.s64 = ctx.r27.s64 + 4628;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2D44;
	sub_8233EAF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,5332
	ctx.r3.s64 = ctx.r27.s64 + 5332;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2D54;
	sub_8233EAF0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,5588
	ctx.r3.s64 = ctx.r27.s64 + 5588;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2D64;
	sub_8233EAF0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,5668
	ctx.r3.s64 = ctx.r27.s64 + 5668;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2D74;
	sub_8233EAF0(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,5748
	ctx.r3.s64 = ctx.r27.s64 + 5748;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2D84;
	sub_8233EAF0(ctx, base);
	// li r30,17
	ctx.r30.s64 = 17;
	// addi r31,r27,3916
	ctx.r31.s64 = ctx.r27.s64 + 3916;
loc_820A2D8C:
	// lwzu r3,-40(r31)
	ea = -40 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2dac
	if (ctx.cr6.eq) goto loc_820A2DAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_820A2DAC:
	// sth r21,-6(r31)
	PPC_STORE_U16(ctx.r31.u32 + -6, ctx.r21.u16);
	// sth r21,-8(r31)
	PPC_STORE_U16(ctx.r31.u32 + -8, ctx.r21.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2dc8
	if (ctx.cr6.eq) goto loc_820A2DC8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82246e18
	ctx.lr = 0x820A2DC8;
	sub_82246E18(ctx, base);
loc_820A2DC8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820a2d8c
	if (!ctx.cr0.lt) goto loc_820A2D8C;
	// li r30,69
	ctx.r30.s64 = 69;
	// addi r31,r27,3196
	ctx.r31.s64 = ctx.r27.s64 + 3196;
loc_820A2DD8:
	// lwzu r3,-40(r31)
	ea = -40 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2df8
	if (ctx.cr6.eq) goto loc_820A2DF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_820A2DF8:
	// sth r21,-6(r31)
	PPC_STORE_U16(ctx.r31.u32 + -6, ctx.r21.u16);
	// sth r21,-8(r31)
	PPC_STORE_U16(ctx.r31.u32 + -8, ctx.r21.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2e14
	if (ctx.cr6.eq) goto loc_820A2E14;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82246e18
	ctx.lr = 0x820A2E14;
	sub_82246E18(ctx, base);
loc_820A2E14:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820a2dd8
	if (!ctx.cr0.lt) goto loc_820A2DD8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A2E24"))) PPC_WEAK_FUNC(sub_820A2E24);
PPC_FUNC_IMPL(__imp__sub_820A2E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2E28"))) PPC_WEAK_FUNC(sub_820A2E28);
PPC_FUNC_IMPL(__imp__sub_820A2E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x820A2E30;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r5,704
	ctx.r5.s64 = 704;
	// addi r31,r11,9544
	ctx.r31.s64 = ctx.r11.s64 + 9544;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3924
	ctx.r3.s64 = ctx.r31.s64 + 3924;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2E54;
	sub_8233EAF0(ctx, base);
	// li r5,704
	ctx.r5.s64 = 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4628
	ctx.r3.s64 = ctx.r31.s64 + 4628;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2E64;
	sub_8233EAF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,5332
	ctx.r3.s64 = ctx.r31.s64 + 5332;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2E74;
	sub_8233EAF0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,5588
	ctx.r3.s64 = ctx.r31.s64 + 5588;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2E84;
	sub_8233EAF0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,5668
	ctx.r3.s64 = ctx.r31.s64 + 5668;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2E94;
	sub_8233EAF0(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,5748
	ctx.r3.s64 = ctx.r31.s64 + 5748;
	// bl 0x8233eaf0
	ctx.lr = 0x820A2EA4;
	sub_8233EAF0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r27,88
	ctx.r27.s64 = 88;
	// addi r29,r31,3928
	ctx.r29.s64 = ctx.r31.s64 + 3928;
	// lis r22,-13569
	ctx.r22.s64 = -889257984;
	// lfs f31,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// lfs f30,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// addi r23,r11,5520
	ctx.r23.s64 = ctx.r11.s64 + 5520;
	// addi r30,r10,15640
	ctx.r30.s64 = ctx.r10.s64 + 15640;
loc_820A2ED4:
	// lwz r3,2120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,25084(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// addi r8,r30,2144
	ctx.r8.s64 = ctx.r30.s64 + 2144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A2F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2f24
	if (ctx.cr6.eq) goto loc_820A2F24;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209e000
	ctx.lr = 0x820A2F24;
	sub_8209E000(ctx, base);
loc_820A2F24:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820a2f30
	if (ctx.cr6.eq) goto loc_820A2F30;
	// stw r23,-13570(r22)
	PPC_STORE_U32(ctx.r22.u32 + -13570, ctx.r23.u32);
loc_820A2F30:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x820a2ed4
	if (!ctx.cr0.eq) goto loc_820A2ED4;
	// li r27,88
	ctx.r27.s64 = 88;
	// addi r29,r31,4632
	ctx.r29.s64 = ctx.r31.s64 + 4632;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
loc_820A2F48:
	// lwz r3,2120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,25088(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25088);
	// addi r8,r30,2144
	ctx.r8.s64 = ctx.r30.s64 + 2144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A2F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2f98
	if (ctx.cr6.eq) goto loc_820A2F98;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209e000
	ctx.lr = 0x820A2F98;
	sub_8209E000(ctx, base);
loc_820A2F98:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820a2fa4
	if (ctx.cr6.eq) goto loc_820A2FA4;
	// stw r23,-13570(r22)
	PPC_STORE_U32(ctx.r22.u32 + -13570, ctx.r23.u32);
loc_820A2FA4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x820a2f48
	if (!ctx.cr0.eq) goto loc_820A2F48;
	// li r27,32
	ctx.r27.s64 = 32;
	// addi r29,r31,5336
	ctx.r29.s64 = ctx.r31.s64 + 5336;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
loc_820A2FBC:
	// lwz r3,2120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,25092(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25092);
	// addi r8,r30,2144
	ctx.r8.s64 = ctx.r30.s64 + 2144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A2FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a300c
	if (ctx.cr6.eq) goto loc_820A300C;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209e000
	ctx.lr = 0x820A300C;
	sub_8209E000(ctx, base);
loc_820A300C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820a3018
	if (ctx.cr6.eq) goto loc_820A3018;
	// stw r23,-13570(r22)
	PPC_STORE_U32(ctx.r22.u32 + -13570, ctx.r23.u32);
loc_820A3018:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x820a2fbc
	if (!ctx.cr0.eq) goto loc_820A2FBC;
	// li r27,10
	ctx.r27.s64 = 10;
	// addi r29,r31,5592
	ctx.r29.s64 = ctx.r31.s64 + 5592;
loc_820A302C:
	// lwz r3,2120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,25084(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25084);
	// addi r8,r30,2144
	ctx.r8.s64 = ctx.r30.s64 + 2144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A305C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a307c
	if (ctx.cr6.eq) goto loc_820A307C;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209e000
	ctx.lr = 0x820A307C;
	sub_8209E000(ctx, base);
loc_820A307C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820a3088
	if (ctx.cr6.eq) goto loc_820A3088;
	// stw r23,-13570(r22)
	PPC_STORE_U32(ctx.r22.u32 + -13570, ctx.r23.u32);
loc_820A3088:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x820a302c
	if (!ctx.cr0.eq) goto loc_820A302C;
	// li r27,10
	ctx.r27.s64 = 10;
	// addi r29,r31,5672
	ctx.r29.s64 = ctx.r31.s64 + 5672;
loc_820A309C:
	// lwz r3,2120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,25088(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25088);
	// addi r8,r30,2144
	ctx.r8.s64 = ctx.r30.s64 + 2144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A30CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a30ec
	if (ctx.cr6.eq) goto loc_820A30EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209e000
	ctx.lr = 0x820A30EC;
	sub_8209E000(ctx, base);
loc_820A30EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820a30f8
	if (ctx.cr6.eq) goto loc_820A30F8;
	// stw r23,-13570(r22)
	PPC_STORE_U32(ctx.r22.u32 + -13570, ctx.r23.u32);
loc_820A30F8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x820a309c
	if (!ctx.cr0.eq) goto loc_820A309C;
	// li r27,7
	ctx.r27.s64 = 7;
	// addi r29,r31,5752
	ctx.r29.s64 = ctx.r31.s64 + 5752;
loc_820A310C:
	// lwz r3,2120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,25092(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25092);
	// addi r8,r30,2144
	ctx.r8.s64 = ctx.r30.s64 + 2144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A313C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a315c
	if (ctx.cr6.eq) goto loc_820A315C;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209e000
	ctx.lr = 0x820A315C;
	sub_8209E000(ctx, base);
loc_820A315C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820a3168
	if (ctx.cr6.eq) goto loc_820A3168;
	// stw r23,-13570(r22)
	PPC_STORE_U32(ctx.r22.u32 + -13570, ctx.r23.u32);
loc_820A3168:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x820a310c
	if (!ctx.cr0.eq) goto loc_820A310C;
	// li r11,88
	ctx.r11.s64 = 88;
	// addi r8,r31,3916
	ctx.r8.s64 = ctx.r31.s64 + 3916;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A3184:
	// stbu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x820a3184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A3184;
	// li r7,88
	ctx.r7.s64 = 88;
	// addi r8,r31,4620
	ctx.r8.s64 = ctx.r31.s64 + 4620;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_820A3198:
	// stbu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x820a3198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A3198;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r8,r31,5324
	ctx.r8.s64 = ctx.r31.s64 + 5324;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_820A31AC:
	// stbu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x820a31ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A31AC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,5588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5588, ctx.r11.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r11,5596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5596, ctx.r11.u8);
	// stb r11,5604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5604, ctx.r11.u8);
	// stb r11,5612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5612, ctx.r11.u8);
	// stb r11,5620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5620, ctx.r11.u8);
	// stb r11,5628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5628, ctx.r11.u8);
	// stb r11,5636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5636, ctx.r11.u8);
	// stb r11,5644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5644, ctx.r11.u8);
	// stb r11,5652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5652, ctx.r11.u8);
	// stb r11,5660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5660, ctx.r11.u8);
	// stb r11,5668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5668, ctx.r11.u8);
	// stb r11,5676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5676, ctx.r11.u8);
	// stb r11,5684(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5684, ctx.r11.u8);
	// stb r11,5692(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5692, ctx.r11.u8);
	// stb r11,5700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5700, ctx.r11.u8);
	// stb r11,5708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5708, ctx.r11.u8);
	// stb r11,5716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5716, ctx.r11.u8);
	// stb r11,5724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5724, ctx.r11.u8);
	// stb r11,5732(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5732, ctx.r11.u8);
	// stb r11,5740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5740, ctx.r11.u8);
	// stb r11,5748(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5748, ctx.r11.u8);
	// stb r11,5756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5756, ctx.r11.u8);
	// stb r11,5764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5764, ctx.r11.u8);
	// stb r11,5772(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5772, ctx.r11.u8);
	// stb r11,5780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5780, ctx.r11.u8);
	// stb r11,5788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5788, ctx.r11.u8);
	// stb r11,5796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5796, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A3238"))) PPC_WEAK_FUNC(sub_820A3238);
PPC_FUNC_IMPL(__imp__sub_820A3238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x820A3240;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a3300
	if (ctx.cr6.eq) goto loc_820A3300;
loc_820A3278:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a328c
	if (!ctx.cr6.eq) goto loc_820A328C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820a32b4
	goto loc_820A32B4;
loc_820A328C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A32A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820A32B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a32f0
	if (ctx.cr6.eq) goto loc_820A32F0;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a32f0
	if (!ctx.cr6.eq) goto loc_820A32F0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a2860
	ctx.lr = 0x820A32E4;
	sub_820A2860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a3338
	if (!ctx.cr6.eq) goto loc_820A3338;
loc_820A32F0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820a3278
	if (ctx.cr6.lt) goto loc_820A3278;
loc_820A3300:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820a332c
	if (ctx.cr6.eq) goto loc_820A332C;
loc_820A330C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a3368
	if (ctx.cr6.eq) goto loc_820A3368;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820a330c
	if (ctx.cr6.lt) goto loc_820A330C;
loc_820A332C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_820A3338:
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a26f0
	ctx.lr = 0x820A3360;
	sub_820A26F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_820A3368:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// lwz r3,2176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2176);
	// bl 0x8209c400
	ctx.lr = 0x820A337C;
	sub_8209C400(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a339c
	if (ctx.cr6.eq) goto loc_820A339C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A3398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
loc_820A339C:
	// sth r24,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r24.u16);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a26f0
	ctx.lr = 0x820A33CC;
	sub_820A26F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A33D4"))) PPC_WEAK_FUNC(sub_820A33D4);
PPC_FUNC_IMPL(__imp__sub_820A33D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A33D8"))) PPC_WEAK_FUNC(sub_820A33D8);
PPC_FUNC_IMPL(__imp__sub_820A33D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x820A3410;
	sub_823052D8(ctx, base);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r8,512
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 512, ctx.xer);
	// bne cr6,0x820a3440
	if (!ctx.cr6.eq) goto loc_820A3440;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// bl 0x820a2900
	ctx.lr = 0x820A343C;
	sub_820A2900(ctx, base);
	// b 0x820a3484
	goto loc_820A3484;
loc_820A3440:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3478
	if (ctx.cr6.eq) goto loc_820A3478;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A3464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A3478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A3478:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_820A3484:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x820A348C;
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

__attribute__((alias("__imp__sub_820A34A4"))) PPC_WEAK_FUNC(sub_820A34A4);
PPC_FUNC_IMPL(__imp__sub_820A34A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A34A8"))) PPC_WEAK_FUNC(sub_820A34A8);
PPC_FUNC_IMPL(__imp__sub_820A34A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A34B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r30,18
	ctx.r30.s64 = 18;
	// addi r28,r11,9544
	ctx.r28.s64 = ctx.r11.s64 + 9544;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r28,3196
	ctx.r31.s64 = ctx.r28.s64 + 3196;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820A34CC:
	// lhz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a3528
	if (!ctx.cr6.eq) goto loc_820A3528;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3528
	if (ctx.cr6.eq) goto loc_820A3528;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3528
	if (ctx.cr6.eq) goto loc_820A3528;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A350C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a3528
	if (!ctx.cr6.eq) goto loc_820A3528;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_820A3528:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x820a34cc
	if (!ctx.cr0.eq) goto loc_820A34CC;
	// li r30,70
	ctx.r30.s64 = 70;
	// addi r31,r28,396
	ctx.r31.s64 = ctx.r28.s64 + 396;
loc_820A353C:
	// lhz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a3598
	if (!ctx.cr6.eq) goto loc_820A3598;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3598
	if (ctx.cr6.eq) goto loc_820A3598;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3598
	if (ctx.cr6.eq) goto loc_820A3598;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A357C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a3598
	if (!ctx.cr6.eq) goto loc_820A3598;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_820A3598:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x820a353c
	if (!ctx.cr0.eq) goto loc_820A353C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A35AC"))) PPC_WEAK_FUNC(sub_820A35AC);
PPC_FUNC_IMPL(__imp__sub_820A35AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A35B0"))) PPC_WEAK_FUNC(sub_820A35B0);
PPC_FUNC_IMPL(__imp__sub_820A35B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A35B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3664
	if (ctx.cr6.eq) goto loc_820A3664;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// rlwinm r10,r3,0,2,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30000000;
	// rlwinm r11,r3,0,16,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r11,r11,0,4,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// li r9,70
	ctx.r9.s64 = 70;
	// beq cr6,0x820a35e8
	if (ctx.cr6.eq) goto loc_820A35E8;
	// li r9,18
	ctx.r9.s64 = 18;
loc_820A35E8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820a3600
	if (ctx.cr6.lt) goto loc_820A3600;
	// lis r9,-13569
	ctx.r9.s64 = -889257984;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r7,5576
	ctx.r6.s64 = ctx.r7.s64 + 5576;
	// stw r6,-13570(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13570, ctx.r6.u32);
loc_820A3600:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,9544
	ctx.r10.s64 = ctx.r9.s64 + 9544;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x820a3624
	if (!ctx.cr6.eq) goto loc_820A3624;
	// addi r10,r10,388
	ctx.r10.s64 = ctx.r10.s64 + 388;
	// b 0x820a3628
	goto loc_820A3628;
loc_820A3624:
	// addi r10,r10,3188
	ctx.r10.s64 = ctx.r10.s64 + 3188;
loc_820A3628:
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x820A363C;
	sub_823052D8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a365c
	if (ctx.cr6.eq) goto loc_820A365C;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// rlwinm r10,r29,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820a365c
	if (!ctx.cr6.eq) goto loc_820A365C;
	// bl 0x820a1810
	ctx.lr = 0x820A365C;
	sub_820A1810(ctx, base);
loc_820A365C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x820A3664;
	sub_823051A8(ctx, base);
loc_820A3664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A366C"))) PPC_WEAK_FUNC(sub_820A366C);
PPC_FUNC_IMPL(__imp__sub_820A366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3670"))) PPC_WEAK_FUNC(sub_820A3670);
PPC_FUNC_IMPL(__imp__sub_820A3670) {
	PPC_FUNC_PROLOGUE();
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
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r30,-13569
	ctx.r30.s64 = -889257984;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a3700
	if (ctx.cr6.eq) goto loc_820A3700;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x820a36ec
	if (ctx.cr6.eq) goto loc_820A36EC;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x820a36d8
	if (ctx.cr6.eq) goto loc_820A36D8;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x820a36c4
	if (ctx.cr6.eq) goto loc_820A36C4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,5660
	ctx.r9.s64 = ctx.r10.s64 + 5660;
	// stw r9,-13570(r30)
	PPC_STORE_U32(ctx.r30.u32 + -13570, ctx.r9.u32);
	// b 0x820a375c
	goto loc_820A375C;
loc_820A36C4:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r10,9544
	ctx.r10.s64 = ctx.r10.s64 + 9544;
	// addi r31,r10,5748
	ctx.r31.s64 = ctx.r10.s64 + 5748;
	// b 0x820a375c
	goto loc_820A375C;
loc_820A36D8:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r10,9544
	ctx.r10.s64 = ctx.r10.s64 + 9544;
	// addi r31,r10,5668
	ctx.r31.s64 = ctx.r10.s64 + 5668;
	// b 0x820a375c
	goto loc_820A375C;
loc_820A36EC:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r10,9544
	ctx.r10.s64 = ctx.r10.s64 + 9544;
	// addi r31,r10,5588
	ctx.r31.s64 = ctx.r10.s64 + 5588;
	// b 0x820a375c
	goto loc_820A375C;
loc_820A3700:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x820a374c
	if (ctx.cr6.eq) goto loc_820A374C;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x820a373c
	if (ctx.cr6.eq) goto loc_820A373C;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x820a3728
	if (ctx.cr6.eq) goto loc_820A3728;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,5660
	ctx.r9.s64 = ctx.r10.s64 + 5660;
	// stw r9,-13570(r30)
	PPC_STORE_U32(ctx.r30.u32 + -13570, ctx.r9.u32);
	// b 0x820a375c
	goto loc_820A375C;
loc_820A3728:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r10,9544
	ctx.r10.s64 = ctx.r10.s64 + 9544;
	// addi r31,r10,5332
	ctx.r31.s64 = ctx.r10.s64 + 5332;
	// b 0x820a375c
	goto loc_820A375C;
loc_820A373C:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r10,r10,9544
	ctx.r10.s64 = ctx.r10.s64 + 9544;
	// addi r31,r10,4628
	ctx.r31.s64 = ctx.r10.s64 + 4628;
	// b 0x820a3758
	goto loc_820A3758;
loc_820A374C:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r10,r10,9544
	ctx.r10.s64 = ctx.r10.s64 + 9544;
	// addi r31,r10,3924
	ctx.r31.s64 = ctx.r10.s64 + 3924;
loc_820A3758:
	// li r11,88
	ctx.r11.s64 = 88;
loc_820A375C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3784
	if (ctx.cr6.eq) goto loc_820A3784;
loc_820A3768:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a37a0
	if (!ctx.cr6.eq) goto loc_820A37A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a3768
	if (ctx.cr6.lt) goto loc_820A3768;
loc_820A3784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820A3788:
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
loc_820A37A0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A37BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a37d4
	if (ctx.cr6.eq) goto loc_820A37D4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,5680
	ctx.r10.s64 = ctx.r11.s64 + 5680;
	// stw r10,-13570(r30)
	PPC_STORE_U32(ctx.r30.u32 + -13570, ctx.r10.u32);
loc_820A37D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x820a3788
	goto loc_820A3788;
}

__attribute__((alias("__imp__sub_820A37E4"))) PPC_WEAK_FUNC(sub_820A37E4);
PPC_FUNC_IMPL(__imp__sub_820A37E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A37E8"))) PPC_WEAK_FUNC(sub_820A37E8);
PPC_FUNC_IMPL(__imp__sub_820A37E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A37F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,9544
	ctx.r28.s64 = ctx.r11.s64 + 9544;
	// li r30,88
	ctx.r30.s64 = 88;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_820A3808:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a381c
	if (ctx.cr6.eq) goto loc_820A381C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820a1938
	ctx.lr = 0x820A381C;
	sub_820A1938(ctx, base);
loc_820A381C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820a3808
	if (!ctx.cr0.eq) goto loc_820A3808;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a38c0
	if (ctx.cr6.eq) goto loc_820A38C0;
	// li r29,70
	ctx.r29.s64 = 70;
	// addi r31,r28,348
	ctx.r31.s64 = ctx.r28.s64 + 348;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820A3840:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3860
	if (ctx.cr6.eq) goto loc_820A3860;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A385C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_820A3860:
	// sth r30,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r30.u16);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sthu r30,40(r31)
	ea = 40 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r31.u32 = ea;
	// bne 0x820a3840
	if (!ctx.cr0.eq) goto loc_820A3840;
	// li r29,18
	ctx.r29.s64 = 18;
	// addi r31,r28,3148
	ctx.r31.s64 = ctx.r28.s64 + 3148;
loc_820A3878:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3898
	if (ctx.cr6.eq) goto loc_820A3898;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A3894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_820A3898:
	// sth r30,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r30.u16);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sthu r30,40(r31)
	ea = 40 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r31.u32 = ea;
	// bne 0x820a3878
	if (!ctx.cr0.eq) goto loc_820A3878;
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a38c0
	if (ctx.cr6.eq) goto loc_820A38C0;
loc_820A38B4:
	// lwz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a38b4
	if (!ctx.cr6.eq) goto loc_820A38B4;
loc_820A38C0:
	// bl 0x82097a88
	ctx.lr = 0x820A38C4;
	sub_82097A88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A38CC"))) PPC_WEAK_FUNC(sub_820A38CC);
PPC_FUNC_IMPL(__imp__sub_820A38CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A38D0"))) PPC_WEAK_FUNC(sub_820A38D0);
PPC_FUNC_IMPL(__imp__sub_820A38D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A38D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,176(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// ble cr6,0x820a3904
	if (!ctx.cr6.gt) goto loc_820A3904;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A3904:
	// lwz r9,144(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x820a3958
	if (!ctx.cr6.eq) goto loc_820A3958;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x820a3964
	if (!ctx.cr6.gt) goto loc_820A3964;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x820a3964
	goto loc_820A3964;
loc_820A3958:
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x820a3964
	if (!ctx.cr0.lt) goto loc_820A3964;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_820A3964:
	// lhz r10,316(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 316);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820a39ac
	if (!ctx.cr6.eq) goto loc_820A39AC;
	// lhz r10,330(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 330);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lhz r9,318(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 318);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bne cr6,0x820a3998
	if (!ctx.cr6.eq) goto loc_820A3998;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820A3998:
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// twllei r10,0
	// divwu r3,r11,r10
	ctx.r3.u32 = ctx.r11.u32 / ctx.r10.u32;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A39AC:
	// lwz r10,172(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r28,20(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r26,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r26.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820a39e8
	if (!ctx.cr6.lt) goto loc_820A39E8;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x820a39e8
	if (!ctx.cr6.eq) goto loc_820A39E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A39E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a3b24
	if (ctx.cr6.eq) goto loc_820A3B24;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_820A39FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820a3a10
	if (!ctx.cr6.lt) goto loc_820A3A10;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820a3a28
	if (ctx.cr6.lt) goto loc_820A3A28;
loc_820A3A10:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820a39fc
	if (ctx.cr6.lt) goto loc_820A39FC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A3A28:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820a3a38
	if (!ctx.cr6.eq) goto loc_820A3A38;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// b 0x820a3a4c
	goto loc_820A3A4C;
loc_820A3A38:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// beq cr6,0x820a3a48
	if (ctx.cr6.eq) goto loc_820A3A48;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_820A3A48:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_820A3A4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,60
	ctx.r30.s64 = ctx.r11.s64 + 60;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a21e0
	ctx.lr = 0x820A3A64;
	sub_820A21E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a3ad0
	if (!ctx.cr6.eq) goto loc_820A3AD0;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x820a3ab4
	if (!ctx.cr6.eq) goto loc_820A3AB4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,5316
	ctx.r10.s64 = ctx.r10.s64 + 5316;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
loc_820A3A8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a3aac
	if (!ctx.cr0.eq) goto loc_820A3AAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a3a8c
	if (!ctx.cr6.eq) goto loc_820A3A8C;
loc_820A3AAC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a3ad0
	if (ctx.cr6.eq) goto loc_820A3AD0;
loc_820A3AB4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A3AD0:
	// lwz r11,376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// divwu. r11,r8,r9
	ctx.r11.u32 = ctx.r8.u32 / ctx.r9.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twllei r9,0
	// stw r11,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r11.u32);
	// bne 0x820a3af8
	if (!ctx.cr0.eq) goto loc_820A3AF8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x820a3b08
	goto loc_820A3B08;
loc_820A3AF8:
	// lwz r10,412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_820A3B08:
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// divwu r3,r11,r6
	ctx.r3.u32 = ctx.r11.u32 / ctx.r6.u32;
	// twllei r6,0
loc_820A3B24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A3B2C"))) PPC_WEAK_FUNC(sub_820A3B2C);
PPC_FUNC_IMPL(__imp__sub_820A3B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3B30"))) PPC_WEAK_FUNC(sub_820A3B30);
PPC_FUNC_IMPL(__imp__sub_820A3B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A3B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a3d4c
	if (ctx.cr6.eq) goto loc_820A3D4C;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a3d4c
	if (!ctx.cr6.eq) goto loc_820A3D4C;
	// lwz r8,144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,424(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x820a3bc0
	if (!ctx.cr6.gt) goto loc_820A3BC0;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_820A3BC0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38d0
	ctx.lr = 0x820A3BD0;
	sub_820A38D0(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820a3be8
	if (!ctx.cr6.gt) goto loc_820A3BE8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A3BE8:
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f13,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,56(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// fctidz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f6.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x820a3c48
	if (!ctx.cr6.gt) goto loc_820A3C48;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_820A3C48:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x820a3cb0
	if (!ctx.cr6.gt) goto loc_820A3CB0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820A3C70:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820a3ca8
	if (!ctx.cr6.lt) goto loc_820A3CA8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x820a3c94
	if (!ctx.cr6.gt) goto loc_820A3C94;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820a3ca4
	if (ctx.cr6.lt) goto loc_820A3CA4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x820a3ca0
	goto loc_820A3CA0;
loc_820A3C94:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a3ca8
	if (!ctx.cr6.lt) goto loc_820A3CA8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
loc_820A3CA0:
	// bge cr6,0x820a3ca8
	if (!ctx.cr6.lt) goto loc_820A3CA8;
loc_820A3CA4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820A3CA8:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x820a3c70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A3C70;
loc_820A3CB0:
	// subf. r4,r4,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// bge 0x820a3ccc
	if (!ctx.cr0.lt) goto loc_820A3CCC;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_820A3CCC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38d0
	ctx.lr = 0x820A3CDC;
	sub_820A38D0(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lhz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820a3d0c
	if (!ctx.cr6.eq) goto loc_820A3D0C;
	// lhz r10,318(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 318);
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r10,r7,r3
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// b 0x820a3d18
	goto loc_820A3D18;
loc_820A3D0C:
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_820A3D18:
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r29,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r29.u64);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
loc_820A3D4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A3D54"))) PPC_WEAK_FUNC(sub_820A3D54);
PPC_FUNC_IMPL(__imp__sub_820A3D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3D58"))) PPC_WEAK_FUNC(sub_820A3D58);
PPC_FUNC_IMPL(__imp__sub_820A3D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A3D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a3e04
	if (!ctx.cr6.eq) goto loc_820A3E04;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x8208cf38
	ctx.lr = 0x820A3D84;
	sub_8208CF38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82082030
	ctx.lr = 0x820A3D9C;
	sub_82082030(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820A3DB0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820a3db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A3DB0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x820a3dd4
	if (!ctx.cr6.lt) goto loc_820A3DD4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_820A3DD4:
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8209c6b8
	ctx.lr = 0x820A3DEC;
	sub_8209C6B8(ctx, base);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
loc_820A3E04:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820a49a0
	ctx.lr = 0x820A3E14;
	sub_820A49A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A3E1C"))) PPC_WEAK_FUNC(sub_820A3E1C);
PPC_FUNC_IMPL(__imp__sub_820A3E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3E20"))) PPC_WEAK_FUNC(sub_820A3E20);
PPC_FUNC_IMPL(__imp__sub_820A3E20) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r10,0,18,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a3e5c
	if (ctx.cr6.eq) goto loc_820A3E5C;
	// rlwinm r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a3e60
	if (!ctx.cr6.eq) goto loc_820A3E60;
loc_820A3E5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A3E60:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r12,138
	ctx.r12.s64 = 138;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a3e80
	if (ctx.cr6.eq) goto loc_820A3E80;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3f74
	if (ctx.cr6.eq) goto loc_820A3F74;
loc_820A3E80:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3f74
	if (ctx.cr6.eq) goto loc_820A3F74;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a3f74
	if (ctx.cr6.eq) goto loc_820A3F74;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820a3eb8
	if (!ctx.cr6.eq) goto loc_820A3EB8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x820a3ee8
	if (ctx.cr6.eq) goto loc_820A3EE8;
loc_820A3EB8:
	// rlwinm r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a3ee8
	if (!ctx.cr6.eq) goto loc_820A3EE8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a3ee0
	if (!ctx.cr6.eq) goto loc_820A3EE0;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
loc_820A3EE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82099940
	ctx.lr = 0x820A3EE8;
	sub_82099940(ctx, base);
loc_820A3EE8:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a3f74
	if (ctx.cr6.eq) goto loc_820A3F74;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a3f74
	if (ctx.cr6.eq) goto loc_820A3F74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82099b40
	ctx.lr = 0x820A3F14;
	sub_82099B40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3f74
	if (ctx.cr6.eq) goto loc_820A3F74;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a3f68
	if (ctx.cr6.eq) goto loc_820A3F68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x820a3f48
	if (ctx.cr6.eq) goto loc_820A3F48;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820a3f4c
	if (!ctx.cr6.eq) goto loc_820A3F4C;
loc_820A3F48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A3F4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a3f68
	if (!ctx.cr6.eq) goto loc_820A3F68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A3F68;
	sub_8209FD08(ctx, base);
loc_820A3F68:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,20,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_820A3F74:
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

__attribute__((alias("__imp__sub_820A3F8C"))) PPC_WEAK_FUNC(sub_820A3F8C);
PPC_FUNC_IMPL(__imp__sub_820A3F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3F90"))) PPC_WEAK_FUNC(sub_820A3F90);
PPC_FUNC_IMPL(__imp__sub_820A3F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3fc4
	if (ctx.cr6.eq) goto loc_820A3FC4;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x820a3fc8
	if (!ctx.cr6.eq) goto loc_820A3FC8;
loc_820A3FC4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820A3FC8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a4060
	if (ctx.cr6.eq) goto loc_820A4060;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820a4060
	if (!ctx.cr6.eq) goto loc_820A4060;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// ori r8,r11,16
	ctx.r8.u64 = ctx.r11.u64 | 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ld r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x820a5740
	ctx.lr = 0x820A4030;
	sub_820A5740(ctx, base);
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r6,484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// b 0x820a4080
	goto loc_820A4080;
loc_820A4060:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A4070;
	sub_820A20E8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x820a54e8
	ctx.lr = 0x820A4080;
	sub_820A54E8(ctx, base);
loc_820A4080:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A4098"))) PPC_WEAK_FUNC(sub_820A4098);
PPC_FUNC_IMPL(__imp__sub_820A4098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x820A40A0;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r20,-2
	ctx.r20.s64 = -2;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// subf r9,r10,r20
	ctx.r9.s64 = ctx.r20.s64 - ctx.r10.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// li r26,64
	ctx.r26.s64 = 64;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a418c
	if (ctx.cr6.eq) goto loc_820A418C;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4120
	if (!ctx.cr6.eq) goto loc_820A4120;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a4120
	if (!ctx.cr6.eq) goto loc_820A4120;
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
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
	ctx.lr = 0x820A4118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_820A4120:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a413c
	if (ctx.cr6.eq) goto loc_820A413C;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
loc_820A413C:
	// lfs f31,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820a4164
	if (!ctx.cr6.gt) goto loc_820A4164;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4164
	if (!ctx.cr6.eq) goto loc_820A4164;
	// lbz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a48e4
	if (ctx.cr6.eq) goto loc_820A48E4;
loc_820A4164:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
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
	ctx.lr = 0x820A4180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stb r22,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r22.u8);
loc_820A418C:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a41d4
	if (!ctx.cr6.eq) goto loc_820A41D4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a41d4
	if (!ctx.cr6.eq) goto loc_820A41D4;
loc_820A41A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r10,0,31,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE001;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a48e4
	if (!ctx.cr6.eq) goto loc_820A48E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A41C8;
	sub_8209FD08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_820A41D4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x820a41e8
	if (ctx.cr6.lt) goto loc_820A41E8;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a48e4
	if (ctx.cr6.eq) goto loc_820A48E4;
loc_820A41E8:
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820a420c
	if (!ctx.cr6.eq) goto loc_820A420C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a420c
	if (!ctx.cr6.eq) goto loc_820A420C;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a48e4
	if (ctx.cr6.eq) goto loc_820A48E4;
loc_820A420C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a48e4
	if (ctx.cr6.eq) goto loc_820A48E4;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r21,r31,244
	ctx.r21.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// clrlwi r23,r11,31
	ctx.r23.u64 = ctx.r11.u32 & 0x1;
	// beq cr6,0x820a42e8
	if (ctx.cr6.eq) goto loc_820A42E8;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a42e4
	if (!ctx.cr6.eq) goto loc_820A42E4;
	// lbz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a42e4
	if (!ctx.cr6.eq) goto loc_820A42E4;
	// subf r11,r30,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a42e4
	if (!ctx.cr6.eq) goto loc_820A42E4;
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// ld r3,8(r19)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x823413b0
	ctx.lr = 0x820A4288;
	sub_823413B0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fdivs f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// bne cr6,0x820a42bc
	if (!ctx.cr6.eq) goto loc_820A42BC;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x820a42c8
	goto loc_820A42C8;
loc_820A42BC:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_820A42C8:
	// fcfid f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f31.f64));
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,232(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820a42e8
	if (!ctx.cr6.lt) goto loc_820A42E8;
loc_820A42E4:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_820A42E8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a47fc
	if (ctx.cr6.eq) goto loc_820A47FC;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r21
	ctx.r25.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a4328
	if (ctx.cr6.eq) goto loc_820A4328;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4328
	if (!ctx.cr6.eq) goto loc_820A4328;
	// lbz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a47fc
	if (ctx.cr6.eq) goto loc_820A47FC;
loc_820A4328:
	// stb r24,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r24.u8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a4340
	if (ctx.cr6.eq) goto loc_820A4340;
	// cmpwi cr6,r27,-2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -2, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x820a4344
	if (!ctx.cr6.eq) goto loc_820A4344;
loc_820A4340:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820A4344:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,5316
	ctx.r28.s64 = ctx.r11.s64 + 5316;
	// beq cr6,0x820a4530
	if (ctx.cr6.eq) goto loc_820A4530;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82172e00
	ctx.lr = 0x820A4364;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a41a4
	if (ctx.cr6.eq) goto loc_820A41A4;
	// addi r30,r31,340
	ctx.r30.s64 = ctx.r31.s64 + 340;
	// addi r29,r31,316
	ctx.r29.s64 = ctx.r31.s64 + 316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a21e0
	ctx.lr = 0x820A4384;
	sub_820A21E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a43d8
	if (!ctx.cr6.eq) goto loc_820A43D8;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x820a43d0
	if (!ctx.cr6.eq) goto loc_820A43D0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
loc_820A43A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a43c8
	if (!ctx.cr0.eq) goto loc_820A43C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a43a8
	if (!ctx.cr6.eq) goto loc_820A43A8;
loc_820A43C8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a43d8
	if (ctx.cr6.eq) goto loc_820A43D8;
loc_820A43D0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820a43dc
	goto loc_820A43DC;
loc_820A43D8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_820A43DC:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820a21e0
	ctx.lr = 0x820A43F4;
	sub_820A21E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a444c
	if (!ctx.cr6.eq) goto loc_820A444C;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x820a4444
	if (!ctx.cr6.eq) goto loc_820A4444;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_820A441C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a443c
	if (!ctx.cr0.eq) goto loc_820A443C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a441c
	if (!ctx.cr6.eq) goto loc_820A441C;
loc_820A443C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a444c
	if (ctx.cr6.eq) goto loc_820A444C;
loc_820A4444:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820a4450
	goto loc_820A4450;
loc_820A444C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_820A4450:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820a44b4
	if (ctx.cr6.eq) goto loc_820A44B4;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,5712
	ctx.r9.s64 = ctx.r10.s64 + 5712;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x820a4488
	if (ctx.cr6.eq) goto loc_820A4488;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x820a448c
	if (!ctx.cr6.eq) goto loc_820A448C;
loc_820A4488:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_820A448C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a48e4
	if (!ctx.cr6.eq) goto loc_820A48E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A44A8;
	sub_8209FD08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_820A44B4:
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r30,96(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820A44C8;
	sub_8233EAF0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r6.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r4,r5,20
	ctx.r4.u64 = ctx.r5.u32 & 0xFFF;
	// rlwinm r4,r4,0,31,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820a4508
	if (!ctx.cr6.eq) goto loc_820A4508;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
loc_820A4508:
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// rlwinm r8,r10,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r6,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r6.u32);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r5,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r5.u32);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r4,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r4.u32);
loc_820A4530:
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a4714
	if (ctx.cr6.eq) goto loc_820A4714;
	// stb r24,497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 497, ctx.r24.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A455C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A4570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820A458C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// std r24,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r24.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// std r5,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r5.u64);
	// bne cr6,0x820a45ac
	if (!ctx.cr6.eq) goto loc_820A45AC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820A45AC:
	// std r24,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r24.u64);
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// std r24,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r24.u64);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// stw r24,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r24.u32);
	// stw r24,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r24.u32);
	// stw r24,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r24.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a4624
	if (ctx.cr6.eq) goto loc_820A4624;
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a45f0
	if (ctx.cr6.eq) goto loc_820A45F0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x820a45f4
	goto loc_820A45F4;
loc_820A45F0:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_820A45F4:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_820A45F8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a4618
	if (ctx.cr6.eq) goto loc_820A4618;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820a45f8
	if (ctx.cr6.lt) goto loc_820A45F8;
	// b 0x820a4624
	goto loc_820A4624;
loc_820A4618:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_820A4624:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r22,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r22.u8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a4640
	if (ctx.cr6.eq) goto loc_820A4640;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x820a4644
	if (!ctx.cr6.eq) goto loc_820A4644;
loc_820A4640:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820A4644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a47fc
	if (ctx.cr6.eq) goto loc_820A47FC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820a21e0
	ctx.lr = 0x820A4660;
	sub_820A21E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a46b8
	if (!ctx.cr6.eq) goto loc_820A46B8;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x820a46b0
	if (!ctx.cr6.eq) goto loc_820A46B0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_820A4688:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a46a8
	if (!ctx.cr0.eq) goto loc_820A46A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a4688
	if (!ctx.cr6.eq) goto loc_820A4688;
loc_820A46A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a46b8
	if (ctx.cr6.eq) goto loc_820A46B8;
loc_820A46B0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820a46bc
	goto loc_820A46BC;
loc_820A46B8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_820A46BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a46d8
	if (ctx.cr6.eq) goto loc_820A46D8;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,428
	ctx.r5.s64 = ctx.r11.s64 + 428;
	// b 0x820a46dc
	goto loc_820A46DC;
loc_820A46D8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_820A46DC:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A46F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A4710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820a47fc
	goto loc_820A47FC;
loc_820A4714:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a472c
	if (ctx.cr6.eq) goto loc_820A472C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x820a4730
	if (!ctx.cr6.eq) goto loc_820A4730;
loc_820A472C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820A4730:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a47e4
	if (ctx.cr6.eq) goto loc_820A47E4;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820a21e0
	ctx.lr = 0x820A474C;
	sub_820A21E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a47a4
	if (!ctx.cr6.eq) goto loc_820A47A4;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x820a479c
	if (!ctx.cr6.eq) goto loc_820A479C;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_820A4774:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a4794
	if (!ctx.cr0.eq) goto loc_820A4794;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a4774
	if (!ctx.cr6.eq) goto loc_820A4774;
loc_820A4794:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a47a4
	if (ctx.cr6.eq) goto loc_820A47A4;
loc_820A479C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x820a47a8
	goto loc_820A47A8;
loc_820A47A4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_820A47A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a47c4
	if (ctx.cr6.eq) goto loc_820A47C4;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,428
	ctx.r5.s64 = ctx.r11.s64 + 428;
	// b 0x820a47c8
	goto loc_820A47C8;
loc_820A47C4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_820A47C8:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A47E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820a47fc
	goto loc_820A47FC;
loc_820A47E4:
	// subf r11,r30,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a47fc
	if (ctx.cr6.eq) goto loc_820A47FC;
	// stb r22,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r22.u8);
loc_820A47FC:
	// lbz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a48e4
	if (ctx.cr6.eq) goto loc_820A48E4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4820
	if (!ctx.cr6.eq) goto loc_820A4820;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a48e4
	if (!ctx.cr6.eq) goto loc_820A48E4;
loc_820A4820:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x820a4838
	if (ctx.cr6.eq) goto loc_820A4838;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a4838
	if (ctx.cr6.eq) goto loc_820A4838;
	// bl 0x82172d60
	ctx.lr = 0x820A4838;
	sub_82172D60(ctx, base);
loc_820A4838:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r10,r11,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a4858
	if (ctx.cr6.eq) goto loc_820A4858;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
loc_820A4858:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A4870;
	sub_820A20E8(ctx, base);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82098e38
	ctx.lr = 0x820A487C;
	sub_82098E38(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820A489C;
	sub_8233EAF0(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stb r24,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r24.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r7.u32);
	// ble cr6,0x820a48d4
	if (!ctx.cr6.gt) goto loc_820A48D4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_820A48D4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r24,497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 497, ctx.r24.u8);
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820A48E4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A48F0"))) PPC_WEAK_FUNC(sub_820A48F0);
PPC_FUNC_IMPL(__imp__sub_820A48F0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r8,r9,20
	ctx.r8.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r8,r8,0,31,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// bne cr6,0x820a4934
	if (!ctx.cr6.eq) goto loc_820A4934;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
loc_820A4934:
	// lwz r10,492(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r8,488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r7,r10,16,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// lwz r6,96(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,56(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A498C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A499C"))) PPC_WEAK_FUNC(sub_820A499C);
PPC_FUNC_IMPL(__imp__sub_820A499C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A49A0"))) PPC_WEAK_FUNC(sub_820A49A0);
PPC_FUNC_IMPL(__imp__sub_820A49A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A49A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,484(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,5344
	ctx.r4.s64 = ctx.r10.s64 + 5344;
	// li r5,15
	ctx.r5.s64 = 15;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// bl 0x8233e4e0
	ctx.lr = 0x820A49D4;
	sub_8233E4E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822216d8
	ctx.lr = 0x820A49E0;
	sub_822216D8(ctx, base);
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x821b7fa8
	ctx.lr = 0x820A4A00;
	sub_821B7FA8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820a4a18
	if (!ctx.cr6.eq) goto loc_820A4A18;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A4A18:
	// addi r27,r31,244
	ctx.r27.s64 = ctx.r31.s64 + 244;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x820A4A2C;
	sub_8233EAF0(ctx, base);
	// lhz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// addi r29,r28,60
	ctx.r29.s64 = ctx.r28.s64 + 60;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820a4a88
	if (ctx.cr6.eq) goto loc_820A4A88;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x820a4a80
	if (!ctx.cr6.eq) goto loc_820A4A80;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// addi r10,r10,5360
	ctx.r10.s64 = ctx.r10.s64 + 5360;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_820A4A58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a4a78
	if (!ctx.cr0.eq) goto loc_820A4A78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a4a58
	if (!ctx.cr6.eq) goto loc_820A4A58;
loc_820A4A78:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a4a88
	if (ctx.cr6.eq) goto loc_820A4A88;
loc_820A4A80:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x820a4a8c
	goto loc_820A4A8C;
loc_820A4A88:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A4A8C:
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// subfic r8,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r8.s64 = 2 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// beq cr6,0x820a4ac0
	if (ctx.cr6.eq) goto loc_820A4AC0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// bne cr6,0x820a4ac4
	if (!ctx.cr6.eq) goto loc_820A4AC4;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// b 0x820a4ac4
	goto loc_820A4AC4;
loc_820A4AC0:
	// lis r11,1
	ctx.r11.s64 = 65536;
loc_820A4AC4:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82082030
	ctx.lr = 0x820A4AE0;
	sub_82082030(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,484(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lwz r6,484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// stb r30,17(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17, ctx.r30.u8);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r26,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r26.u32);
	// std r30,544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 544, ctx.r30.u64);
	// std r30,520(r31)
	PPC_STORE_U64(ctx.r31.u32 + 520, ctx.r30.u64);
	// std r30,528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 528, ctx.r30.u64);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x820995c8
	ctx.lr = 0x820A4B48;
	sub_820995C8(ctx, base);
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A4B68"))) PPC_WEAK_FUNC(sub_820A4B68);
PPC_FUNC_IMPL(__imp__sub_820A4B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820A4B70;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a4ba8
	if (!ctx.cr6.eq) goto loc_820A4BA8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a4bac
	if (!ctx.cr6.eq) goto loc_820A4BAC;
loc_820A4BA8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820A4BAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a4bcc
	if (ctx.cr6.eq) goto loc_820A4BCC;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4bcc
	if (!ctx.cr6.eq) goto loc_820A4BCC;
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_820A4BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a5858
	ctx.lr = 0x820A4BD4;
	sub_820A5858(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r25,64
	ctx.r25.s64 = 64;
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bne cr6,0x820a4c88
	if (!ctx.cr6.eq) goto loc_820A4C88;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4c6c
	if (!ctx.cr6.eq) goto loc_820A4C6C;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820a4c1c
	if (!ctx.cr6.eq) goto loc_820A4C1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8209fd08
	ctx.lr = 0x820A4C10;
	sub_8209FD08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820A4C1C:
	// bl 0x820a48f0
	ctx.lr = 0x820A4C20;
	sub_820A48F0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a4c44
	if (ctx.cr6.eq) goto loc_820A4C44;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a4c44
	if (!ctx.cr6.eq) goto loc_820A4C44;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x820a4c44
	if (ctx.cr6.eq) goto loc_820A4C44;
	// bl 0x82172d60
	ctx.lr = 0x820A4C44;
	sub_82172D60(ctx, base);
loc_820A4C44:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A4C5C;
	sub_820A20E8(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820A4C6C:
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a525c
	if (ctx.cr6.eq) goto loc_820A525C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a525c
	if (ctx.cr6.eq) goto loc_820A525C;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
loc_820A4C88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a4d08
	if (ctx.cr6.eq) goto loc_820A4D08;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a525c
	if (!ctx.cr6.eq) goto loc_820A525C;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820a4cd0
	if (!ctx.cr6.gt) goto loc_820A4CD0;
	// lbz r10,497(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a525c
	if (ctx.cr6.eq) goto loc_820A525C;
loc_820A4CD0:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a5274
	if (!ctx.cr6.eq) goto loc_820A5274;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r11,r11,0,31,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE001;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a525c
	if (!ctx.cr6.eq) goto loc_820A525C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A4CFC;
	sub_8209FD08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820A4D08:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x820a4d20
	if (ctx.cr6.lt) goto loc_820A4D20;
	// lbz r10,497(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a525c
	if (ctx.cr6.eq) goto loc_820A525C;
loc_820A4D20:
	// li r12,138
	ctx.r12.s64 = 138;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a4d80
	if (ctx.cr6.eq) goto loc_820A4D80;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82099710
	ctx.lr = 0x820A4D44;
	sub_82099710(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a4d58
	if (!ctx.cr6.eq) goto loc_820A4D58;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820a4d84
	goto loc_820A4D84;
loc_820A4D58:
	// addi r5,r29,24
	ctx.r5.s64 = ctx.r29.s64 + 24;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a5740
	ctx.lr = 0x820A4D68;
	sub_820A5740(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a4d80
	if (ctx.cr6.eq) goto loc_820A4D80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a3b30
	ctx.lr = 0x820A4D80;
	sub_820A3B30(ctx, base);
loc_820A4D80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A4D84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a525c
	if (ctx.cr6.eq) goto loc_820A525C;
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4e50
	if (!ctx.cr6.eq) goto loc_820A4E50;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820a4e50
	if (!ctx.cr6.gt) goto loc_820A4E50;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4e50
	if (!ctx.cr6.eq) goto loc_820A4E50;
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820a4dcc
	if (!ctx.cr6.lt) goto loc_820A4DCC;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x820a4dd0
	goto loc_820A4DD0;
loc_820A4DCC:
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_820A4DD0:
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r11,17(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r8,r11,65
	ctx.r8.s64 = ctx.r11.s64 + 65;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r6,r31
	PPC_STORE_U64(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u64);
	// lwz r4,484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,28(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lbz r11,17(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x821b8968
	ctx.lr = 0x820A4E18;
	sub_821B8968(ctx, base);
	// lwz r9,484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r8.u8);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stb r7,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r7.u8);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stb r9,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r9.u8);
loc_820A4E50:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a4ec8
	if (ctx.cr6.eq) goto loc_820A4EC8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a4e84
	if (ctx.cr6.eq) goto loc_820A4E84;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x820a4e88
	goto loc_820A4E88;
loc_820A4E84:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820A4E88:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a4ec8
	if (ctx.cr6.eq) goto loc_820A4EC8;
	// stb r28,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r28.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r6,376(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// b 0x820a4ecc
	goto loc_820A4ECC;
loc_820A4EC8:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_820A4ECC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a50dc
	if (ctx.cr6.eq) goto loc_820A50DC;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a50dc
	if (!ctx.cr6.eq) goto loc_820A50DC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a4f4c
	if (ctx.cr6.eq) goto loc_820A4F4C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a4f4c
	if (!ctx.cr6.eq) goto loc_820A4F4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820a48f0
	ctx.lr = 0x820A4F04;
	sub_820A48F0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A4F30;
	sub_820A20E8(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x820a4f4c
	if (!ctx.cr6.gt) goto loc_820A4F4C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_820A4F4C:
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bne cr6,0x820a4fa8
	if (!ctx.cr6.eq) goto loc_820A4FA8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// b 0x820a4fb8
	goto loc_820A4FB8;
loc_820A4FA8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
loc_820A4FB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r10,r10,0,31,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF801;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a4fd4
	if (!ctx.cr6.eq) goto loc_820A4FD4;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
loc_820A4FD4:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r8,488(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// rlwinm r7,r10,16,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r29,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r29.u32);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// addi r9,r10,65
	ctx.r9.s64 = ctx.r10.s64 + 65;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r31.u32);
	// std r7,544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 544, ctx.r7.u64);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bgt cr6,0x820a504c
	if (ctx.cr6.gt) goto loc_820A504C;
	// stwx r25,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r25.u32);
	// b 0x820a5050
	goto loc_820A5050;
loc_820A504C:
	// stwx r28,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r28.u32);
loc_820A5050:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,84(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A5080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stb r6,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r6.u8);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,0,27,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820a50dc
	if (ctx.cr6.eq) goto loc_820A50DC;
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a50d4
	if (ctx.cr6.eq) goto loc_820A50D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0038
	ctx.lr = 0x820A50D0;
	sub_820A0038(ctx, base);
	// b 0x820a50dc
	goto loc_820A50DC;
loc_820A50D4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820A50DC:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820a50f8
	if (!ctx.cr6.gt) goto loc_820A50F8;
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a525c
	if (ctx.cr6.eq) goto loc_820A525C;
loc_820A50F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x820a525c
	if (!ctx.cr6.eq) goto loc_820A525C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a513c
	if (!ctx.cr6.eq) goto loc_820A513C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a513c
	if (ctx.cr6.eq) goto loc_820A513C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a513c
	if (!ctx.cr6.eq) goto loc_820A513C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_820A513C:
	// lbz r11,497(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 497);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5268
	if (ctx.cr6.eq) goto loc_820A5268;
	// stb r28,497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 497, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A5168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A517C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820A5198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// std r28,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r28.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r5,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r5.u64);
	// std r28,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r28.u64);
	// std r28,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r28.u64);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a51e0
	if (ctx.cr6.eq) goto loc_820A51E0;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a51e4
	if (!ctx.cr6.eq) goto loc_820A51E4;
loc_820A51E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820A51E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5254
	if (ctx.cr6.eq) goto loc_820A5254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a48f0
	ctx.lr = 0x820A51F8;
	sub_820A48F0(ctx, base);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
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
	ctx.lr = 0x820A5214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5238
	if (ctx.cr6.eq) goto loc_820A5238;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a5238
	if (!ctx.cr6.eq) goto loc_820A5238;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x820a5238
	if (ctx.cr6.eq) goto loc_820A5238;
	// bl 0x82172d60
	ctx.lr = 0x820A5238;
	sub_82172D60(ctx, base);
loc_820A5238:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A5250;
	sub_820A20E8(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
loc_820A5254:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820A525C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820A5268:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5254
	if (ctx.cr6.eq) goto loc_820A5254;
loc_820A5274:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a5298
	if (ctx.cr6.eq) goto loc_820A5298;
	// bl 0x820a3f90
	ctx.lr = 0x820A528C;
	sub_820A3F90(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820A5298:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x820a20e8
	ctx.lr = 0x820A52AC;
	sub_820A20E8(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820a54e8
	ctx.lr = 0x820A52BC;
	sub_820A54E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A52C8"))) PPC_WEAK_FUNC(sub_820A52C8);
PPC_FUNC_IMPL(__imp__sub_820A52C8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a52f8
	if (ctx.cr6.eq) goto loc_820A52F8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x820a52fc
	goto loc_820A52FC;
loc_820A52F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_820A52FC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820a54cc
	if (ctx.cr6.eq) goto loc_820A54CC;
	// li r12,138
	ctx.r12.s64 = 138;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a54cc
	if (ctx.cr6.eq) goto loc_820A54CC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r11,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820a54b0
	if (!ctx.cr6.eq) goto loc_820A54B0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a533c
	if (ctx.cr6.eq) goto loc_820A533C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a5340
	if (!ctx.cr6.eq) goto loc_820A5340;
loc_820A533C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A5340:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a54b0
	if (ctx.cr6.eq) goto loc_820A54B0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a5358
	if (ctx.cr6.eq) goto loc_820A5358;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_820A5358:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a5474
	if (!ctx.cr6.eq) goto loc_820A5474;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A537C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// oris r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 2097152;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// beq cr6,0x820a539c
	if (ctx.cr6.eq) goto loc_820A539C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820a53a0
	if (!ctx.cr6.eq) goto loc_820A53A0;
loc_820A539C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A53A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a53d0
	if (!ctx.cr6.eq) goto loc_820A53D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// b 0x820a54cc
	goto loc_820A54CC;
loc_820A53D0:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,5344
	ctx.r4.s64 = ctx.r9.s64 + 5344;
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// bl 0x8233e4e0
	ctx.lr = 0x820A53FC;
	sub_8233E4E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822216d8
	ctx.lr = 0x820A5408;
	sub_822216D8(ctx, base);
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x821b7fa8
	ctx.lr = 0x820A5424;
	sub_821B7FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a5458
	if (!ctx.cr6.eq) goto loc_820A5458;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r10,r10,0,31,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE001;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a54cc
	if (!ctx.cr6.eq) goto loc_820A54CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A5454;
	sub_8209FD08(ctx, base);
	// b 0x820a54cc
	goto loc_820A54CC;
loc_820A5458:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x820995c8
	ctx.lr = 0x820A5470;
	sub_820995C8(ctx, base);
	// b 0x820a54cc
	goto loc_820A54CC;
loc_820A5474:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82099710
	ctx.lr = 0x820A5484;
	sub_82099710(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a54cc
	if (ctx.cr6.eq) goto loc_820A54CC;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x820a5740
	ctx.lr = 0x820A54AC;
	sub_820A5740(ctx, base);
	// b 0x820a54cc
	goto loc_820A54CC;
loc_820A54B0:
	// rlwinm r11,r10,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_820A54CC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A54E4"))) PPC_WEAK_FUNC(sub_820A54E4);
PPC_FUNC_IMPL(__imp__sub_820A54E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A54E8"))) PPC_WEAK_FUNC(sub_820A54E8);
PPC_FUNC_IMPL(__imp__sub_820A54E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A54F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820a5514
	if (!ctx.cr6.gt) goto loc_820A5514;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_820A5514:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x820a5548
	if (!ctx.cr6.eq) goto loc_820A5548;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a5538
	if (!ctx.cr6.eq) goto loc_820A5538;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_820A5538:
	// lfs f0,152(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 156, temp.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A5548:
	// addi r31,r29,340
	ctx.r31.s64 = ctx.r29.s64 + 340;
	// addi r30,r29,316
	ctx.r30.s64 = ctx.r29.s64 + 316;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a21e0
	ctx.lr = 0x820A555C;
	sub_820A21E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,5316
	ctx.r28.s64 = ctx.r11.s64 + 5316;
	// bne cr6,0x820a55b8
	if (!ctx.cr6.eq) goto loc_820A55B8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x820a55b0
	if (!ctx.cr6.eq) goto loc_820A55B0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
loc_820A5588:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a55a8
	if (!ctx.cr0.eq) goto loc_820A55A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a5588
	if (!ctx.cr6.eq) goto loc_820A5588;
loc_820A55A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a55b8
	if (ctx.cr6.eq) goto loc_820A55B8;
loc_820A55B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a55bc
	goto loc_820A55BC;
loc_820A55B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A55BC:
	// addi r31,r26,84
	ctx.r31.s64 = ctx.r26.s64 + 84;
	// addi r30,r26,60
	ctx.r30.s64 = ctx.r26.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x820a21e0
	ctx.lr = 0x820A55D4;
	sub_820A21E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a5628
	if (!ctx.cr6.eq) goto loc_820A5628;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x820a5620
	if (!ctx.cr6.eq) goto loc_820A5620;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
loc_820A55F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820a5618
	if (!ctx.cr0.eq) goto loc_820A5618;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820a55f8
	if (!ctx.cr6.eq) goto loc_820A55F8;
loc_820A5618:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820a5628
	if (ctx.cr6.eq) goto loc_820A5628;
loc_820A5620:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a562c
	goto loc_820A562C;
loc_820A5628:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A562C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820a568c
	if (ctx.cr6.eq) goto loc_820A568C;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,5712
	ctx.r9.s64 = ctx.r10.s64 + 5712;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x820a5664
	if (ctx.cr6.eq) goto loc_820A5664;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820a5668
	if (!ctx.cr6.eq) goto loc_820A5668;
loc_820A5664:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A5668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a5738
	if (!ctx.cr6.eq) goto loc_820A5738;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209fd08
	ctx.lr = 0x820A5684;
	sub_8209FD08(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A568C:
	// lwz r11,484(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A56A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,484(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// ld r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,5344
	ctx.r4.s64 = ctx.r8.s64 + 5344;
	// li r5,15
	ctx.r5.s64 = 15;
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// bl 0x8233e4e0
	ctx.lr = 0x820A56C4;
	sub_8233E4E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822216d8
	ctx.lr = 0x820A56D0;
	sub_822216D8(ctx, base);
	// lwz r3,484(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x821b7fa8
	ctx.lr = 0x820A56EC;
	sub_821B7FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5738
	if (ctx.cr6.eq) goto loc_820A5738;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,484(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// lwz r8,484(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r4,28(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x820995c8
	ctx.lr = 0x820A5724;
	sub_820995C8(ctx, base);
	// lwz r7,484(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
loc_820A5738:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5740"))) PPC_WEAK_FUNC(sub_820A5740);
PPC_FUNC_IMPL(__imp__sub_820A5740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820A5748;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,152(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r29,r10,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a57b4
	if (ctx.cr6.eq) goto loc_820A57B4;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// rlwinm r27,r11,2,14,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r25,r10,15640
	ctx.r25.s64 = ctx.r10.s64 + 15640;
	// addi r24,r25,1168
	ctx.r24.s64 = ctx.r25.s64 + 1168;
	// lwzx r11,r27,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a57a8
	if (ctx.cr6.eq) goto loc_820A57A8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A57A8;
	sub_82080000(ctx, base);
loc_820A57A8:
	// addi r11,r25,1312
	ctx.r11.s64 = ctx.r25.s64 + 1312;
	// stwx r26,r27,r24
	PPC_STORE_U32(ctx.r27.u32 + ctx.r24.u32, ctx.r26.u32);
	// stwx r26,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r26.u32);
loc_820A57B4:
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lis r7,-13108
	ctx.r7.s64 = -859045888;
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r6,r29,r8
	ctx.r6.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	// divwu r3,r5,r10
	ctx.r3.u32 = ctx.r5.u32 / ctx.r10.u32;
	// ori r4,r7,52429
	ctx.r4.u64 = ctx.r7.u64 | 52429;
	// stw r3,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r3.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r26,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r26.u32);
	// mulhwu r9,r11,r4
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r4.u32)) >> 32;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r7,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r7.u32);
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5854"))) PPC_WEAK_FUNC(sub_820A5854);
PPC_FUNC_IMPL(__imp__sub_820A5854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5858"))) PPC_WEAK_FUNC(sub_820A5858);
PPC_FUNC_IMPL(__imp__sub_820A5858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820A5860;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r11,32
	ctx.r28.s64 = ctx.r11.s64 + 32;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5964
	if (ctx.cr6.eq) goto loc_820A5964;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820a5964
	if (!ctx.cr6.eq) goto loc_820A5964;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a58e8
	if (ctx.cr6.eq) goto loc_820A58E8;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// rlwinm r31,r11,2,14,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r30,r10,15640
	ctx.r30.s64 = ctx.r10.s64 + 15640;
	// addi r29,r30,1168
	ctx.r29.s64 = ctx.r30.s64 + 1168;
	// lwzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a58d8
	if (ctx.cr6.eq) goto loc_820A58D8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A58D8;
	sub_82080000(ctx, base);
loc_820A58D8:
	// addi r11,r30,1312
	ctx.r11.s64 = ctx.r30.s64 + 1312;
	// stwx r26,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r26.u32);
	// stwx r26,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u32);
	// stw r25,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r25.u32);
loc_820A58E8:
	// lwz r10,484(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 484);
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// ori r9,r11,52429
	ctx.r9.u64 = ctx.r11.u64 | 52429;
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r31,r7,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ble cr6,0x820a5940
	if (!ctx.cr6.gt) goto loc_820A5940;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x82098f08
	ctx.lr = 0x820A5940;
	sub_82098F08(ctx, base);
loc_820A5940:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820A5950:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820a5950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A5950;
	// stw r25,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r25.u32);
	// lwz r11,484(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 484);
	// stw r31,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r31.u32);
loc_820A5964:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A596C"))) PPC_WEAK_FUNC(sub_820A596C);
PPC_FUNC_IMPL(__imp__sub_820A596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5970"))) PPC_WEAK_FUNC(sub_820A5970);
PPC_FUNC_IMPL(__imp__sub_820A5970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820A5978;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r27,r11,32
	ctx.r27.s64 = ctx.r11.s64 + 32;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a59e8
	if (ctx.cr6.eq) goto loc_820A59E8;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// rlwinm r30,r11,2,14,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r29,r10,15640
	ctx.r29.s64 = ctx.r10.s64 + 15640;
	// addi r28,r29,1168
	ctx.r28.s64 = ctx.r29.s64 + 1168;
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a59d8
	if (ctx.cr6.eq) goto loc_820A59D8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820A59D8;
	sub_82080000(ctx, base);
loc_820A59D8:
	// addi r11,r29,1312
	ctx.r11.s64 = ctx.r29.s64 + 1312;
	// stwx r26,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r26.u32);
	// stwx r26,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u32);
	// stw r25,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r25.u32);
loc_820A59E8:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r8,r10,52429
	ctx.r8.u64 = ctx.r10.u64 | 52429;
	// rlwinm r7,r9,24,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulhwu r6,r10,r8
	ctx.r6.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r30,r5,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r5.s64;
	// beq cr6,0x820a5a50
	if (ctx.cr6.eq) goto loc_820A5A50;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82181a18
	ctx.lr = 0x820A5A44;
	sub_82181A18(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
loc_820A5A50:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820A5A60:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820a5a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A5A60;
	// stw r25,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r25.u32);
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stw r30,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5A7C"))) PPC_WEAK_FUNC(sub_820A5A7C);
PPC_FUNC_IMPL(__imp__sub_820A5A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5A80"))) PPC_WEAK_FUNC(sub_820A5A80);
PPC_FUNC_IMPL(__imp__sub_820A5A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A5A98"))) PPC_WEAK_FUNC(sub_820A5A98);
PPC_FUNC_IMPL(__imp__sub_820A5A98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5A9C"))) PPC_WEAK_FUNC(sub_820A5A9C);
PPC_FUNC_IMPL(__imp__sub_820A5A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5AA0"))) PPC_WEAK_FUNC(sub_820A5AA0);
PPC_FUNC_IMPL(__imp__sub_820A5AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A5AB8"))) PPC_WEAK_FUNC(sub_820A5AB8);
PPC_FUNC_IMPL(__imp__sub_820A5AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5ABC"))) PPC_WEAK_FUNC(sub_820A5ABC);
PPC_FUNC_IMPL(__imp__sub_820A5ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5AC0"))) PPC_WEAK_FUNC(sub_820A5AC0);
PPC_FUNC_IMPL(__imp__sub_820A5AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A5AD4"))) PPC_WEAK_FUNC(sub_820A5AD4);
PPC_FUNC_IMPL(__imp__sub_820A5AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5AD8"))) PPC_WEAK_FUNC(sub_820A5AD8);
PPC_FUNC_IMPL(__imp__sub_820A5AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A5AF0"))) PPC_WEAK_FUNC(sub_820A5AF0);
PPC_FUNC_IMPL(__imp__sub_820A5AF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5AF4"))) PPC_WEAK_FUNC(sub_820A5AF4);
PPC_FUNC_IMPL(__imp__sub_820A5AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5AF8"))) PPC_WEAK_FUNC(sub_820A5AF8);
PPC_FUNC_IMPL(__imp__sub_820A5AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A5B0C"))) PPC_WEAK_FUNC(sub_820A5B0C);
PPC_FUNC_IMPL(__imp__sub_820A5B0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5B10"))) PPC_WEAK_FUNC(sub_820A5B10);
PPC_FUNC_IMPL(__imp__sub_820A5B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A5B28"))) PPC_WEAK_FUNC(sub_820A5B28);
PPC_FUNC_IMPL(__imp__sub_820A5B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5B2C"))) PPC_WEAK_FUNC(sub_820A5B2C);
PPC_FUNC_IMPL(__imp__sub_820A5B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5B30"))) PPC_WEAK_FUNC(sub_820A5B30);
PPC_FUNC_IMPL(__imp__sub_820A5B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A5B50"))) PPC_WEAK_FUNC(sub_820A5B50);
PPC_FUNC_IMPL(__imp__sub_820A5B50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5B54"))) PPC_WEAK_FUNC(sub_820A5B54);
PPC_FUNC_IMPL(__imp__sub_820A5B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5B58"))) PPC_WEAK_FUNC(sub_820A5B58);
PPC_FUNC_IMPL(__imp__sub_820A5B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A5B60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820A5B80;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5bfc
	if (ctx.cr6.eq) goto loc_820A5BFC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a5ba4
	if (!ctx.cr6.eq) goto loc_820A5BA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
loc_820A5BA4:
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
	ctx.lr = 0x820A5BBC;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5bfc
	if (ctx.cr6.eq) goto loc_820A5BFC;
loc_820A5BC8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e24f0
	ctx.lr = 0x820A5BD8;
	sub_820E24F0(ctx, base);
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
	ctx.lr = 0x820A5BF0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a5bc8
	if (!ctx.cr6.eq) goto loc_820A5BC8;
loc_820A5BFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5C04"))) PPC_WEAK_FUNC(sub_820A5C04);
PPC_FUNC_IMPL(__imp__sub_820A5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5C08"))) PPC_WEAK_FUNC(sub_820A5C08);
PPC_FUNC_IMPL(__imp__sub_820A5C08) {
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
	// bne cr6,0x820a5c48
	if (!ctx.cr6.eq) goto loc_820A5C48;
	// bl 0x820ddca8
	ctx.lr = 0x820A5C30;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5c40
	if (ctx.cr6.eq) goto loc_820A5C40;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a5c64
	goto loc_820A5C64;
loc_820A5C40:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a5c64
	goto loc_820A5C64;
loc_820A5C48:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a5c90
	if (!ctx.cr6.eq) goto loc_820A5C90;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a5cdc
	if (ctx.cr6.eq) goto loc_820A5CDC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A5C64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5c80
	if (ctx.cr6.eq) goto loc_820A5C80;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A5C80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a5cb8
	if (ctx.cr6.eq) goto loc_820A5CB8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a5cb8
	goto loc_820A5CB8;
loc_820A5C90:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a5ca0
	if (!ctx.cr6.eq) goto loc_820A5CA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a5cb8
	goto loc_820A5CB8;
loc_820A5CA0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A5CB4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A5CB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5cdc
	if (ctx.cr6.eq) goto loc_820A5CDC;
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
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
loc_820A5CDC:
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

__attribute__((alias("__imp__sub_820A5CF4"))) PPC_WEAK_FUNC(sub_820A5CF4);
PPC_FUNC_IMPL(__imp__sub_820A5CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5CF8"))) PPC_WEAK_FUNC(sub_820A5CF8);
PPC_FUNC_IMPL(__imp__sub_820A5CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A5D00;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a5d48
	if (!ctx.cr6.eq) goto loc_820A5D48;
	// bl 0x820ddca8
	ctx.lr = 0x820A5D30;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5d40
	if (ctx.cr6.eq) goto loc_820A5D40;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a5d64
	goto loc_820A5D64;
loc_820A5D40:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x820a5d64
	goto loc_820A5D64;
loc_820A5D48:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a5d90
	if (!ctx.cr6.eq) goto loc_820A5D90;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a5e94
	if (ctx.cr6.eq) goto loc_820A5E94;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A5D64:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a5d80
	if (ctx.cr6.eq) goto loc_820A5D80;
	// lwz r11,280(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// addi r11,r11,-258
	ctx.r11.s64 = ctx.r11.s64 + -258;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
loc_820A5D80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a5db8
	if (ctx.cr6.eq) goto loc_820A5DB8;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// b 0x820a5db8
	goto loc_820A5DB8;
loc_820A5D90:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a5da0
	if (!ctx.cr6.eq) goto loc_820A5DA0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x820a5db8
	goto loc_820A5DB8;
loc_820A5DA0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A5DB4;
	sub_820F3178(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_820A5DB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a5e94
	if (ctx.cr6.eq) goto loc_820A5E94;
	// lwz r11,340(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a5e94
	if (ctx.cr6.eq) goto loc_820A5E94;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a5e94
	if (!ctx.cr6.lt) goto loc_820A5E94;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addic. r5,r9,32
	ctx.xer.ca = ctx.r9.u32 > 4294967263;
	ctx.r5.s64 = ctx.r9.s64 + 32;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x820a5e04
	if (ctx.cr0.eq) goto loc_820A5E04;
	// bl 0x822578d8
	ctx.lr = 0x820A5E00;
	sub_822578D8(ctx, base);
	// b 0x820a5e0c
	goto loc_820A5E0C;
loc_820A5E04:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820A5E0C;
	sub_8233E4E0(ctx, base);
loc_820A5E0C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820a5e2c
	if (ctx.cr6.eq) goto loc_820A5E2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_820A5E2C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820a5e4c
	if (ctx.cr6.eq) goto loc_820A5E4C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_820A5E4C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a5e6c
	if (ctx.cr6.eq) goto loc_820A5E6C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_820A5E6C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820a5ef4
	if (ctx.cr6.eq) goto loc_820A5EF4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A5E94:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x820a5eb8
	if (ctx.cr6.eq) goto loc_820A5EB8;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_820A5EB8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820a5ecc
	if (ctx.cr6.eq) goto loc_820A5ECC;
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_820A5ECC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a5ee0
	if (ctx.cr6.eq) goto loc_820A5EE0;
	// stfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f13,8(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
loc_820A5EE0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820a5ef4
	if (ctx.cr6.eq) goto loc_820A5EF4;
	// stfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_820A5EF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5EFC"))) PPC_WEAK_FUNC(sub_820A5EFC);
PPC_FUNC_IMPL(__imp__sub_820A5EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5F00"))) PPC_WEAK_FUNC(sub_820A5F00);
PPC_FUNC_IMPL(__imp__sub_820A5F00) {
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
	// bne cr6,0x820a5f40
	if (!ctx.cr6.eq) goto loc_820A5F40;
	// bl 0x820ddca8
	ctx.lr = 0x820A5F28;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5f38
	if (ctx.cr6.eq) goto loc_820A5F38;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a5f5c
	goto loc_820A5F5C;
loc_820A5F38:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a5f5c
	goto loc_820A5F5C;
loc_820A5F40:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a5f88
	if (!ctx.cr6.eq) goto loc_820A5F88;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a5fe4
	if (ctx.cr6.eq) goto loc_820A5FE4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A5F5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5f78
	if (ctx.cr6.eq) goto loc_820A5F78;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A5F78:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a5fb0
	if (ctx.cr6.eq) goto loc_820A5FB0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a5fb0
	goto loc_820A5FB0;
loc_820A5F88:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a5f98
	if (!ctx.cr6.eq) goto loc_820A5F98;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a5fb0
	goto loc_820A5FB0;
loc_820A5F98:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A5FAC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A5FB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5fe4
	if (ctx.cr6.eq) goto loc_820A5FE4;
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5fe8
	if (ctx.cr6.eq) goto loc_820A5FE8;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
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
loc_820A5FE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820A5FE8:
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

__attribute__((alias("__imp__sub_820A5FFC"))) PPC_WEAK_FUNC(sub_820A5FFC);
PPC_FUNC_IMPL(__imp__sub_820A5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6000"))) PPC_WEAK_FUNC(sub_820A6000);
PPC_FUNC_IMPL(__imp__sub_820A6000) {
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
	// bne cr6,0x820a6040
	if (!ctx.cr6.eq) goto loc_820A6040;
	// bl 0x820ddca8
	ctx.lr = 0x820A6028;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a6038
	if (ctx.cr6.eq) goto loc_820A6038;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a605c
	goto loc_820A605C;
loc_820A6038:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a605c
	goto loc_820A605C;
loc_820A6040:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a6088
	if (!ctx.cr6.eq) goto loc_820A6088;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a6128
	if (ctx.cr6.eq) goto loc_820A6128;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A605C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6078
	if (ctx.cr6.eq) goto loc_820A6078;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A6078:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a60b0
	if (ctx.cr6.eq) goto loc_820A60B0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a60b0
	goto loc_820A60B0;
loc_820A6088:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a6098
	if (!ctx.cr6.eq) goto loc_820A6098;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a60b0
	goto loc_820A60B0;
loc_820A6098:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A60AC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A60B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6128
	if (ctx.cr6.eq) goto loc_820A6128;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r9,129
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 129, ctx.xer);
	// bne cr6,0x820a6128
	if (!ctx.cr6.eq) goto loc_820A6128;
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a610c
	if (ctx.cr6.eq) goto loc_820A610C;
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
loc_820A610C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_820A6128:
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

__attribute__((alias("__imp__sub_820A6140"))) PPC_WEAK_FUNC(sub_820A6140);
PPC_FUNC_IMPL(__imp__sub_820A6140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A6148;
	__savegprlr_26(ctx, base);
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
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a6184
	if (!ctx.cr6.eq) goto loc_820A6184;
	// bl 0x820ddca8
	ctx.lr = 0x820A616C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a617c
	if (ctx.cr6.eq) goto loc_820A617C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a61a0
	goto loc_820A61A0;
loc_820A617C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a61a0
	goto loc_820A61A0;
loc_820A6184:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a61d0
	if (!ctx.cr6.eq) goto loc_820A61D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a62e8
	if (ctx.cr6.eq) goto loc_820A62E8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A61A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a61bc
	if (ctx.cr6.eq) goto loc_820A61BC;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A61BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a61c8
	if (ctx.cr6.eq) goto loc_820A61C8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820A61C8:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x820a61f8
	goto loc_820A61F8;
loc_820A61D0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a61e0
	if (!ctx.cr6.eq) goto loc_820A61E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a61f4
	goto loc_820A61F4;
loc_820A61E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A61F4;
	sub_820F3178(ctx, base);
loc_820A61F4:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_820A61F8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820a62e8
	if (ctx.cr6.eq) goto loc_820A62E8;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r10,129
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 129, ctx.xer);
	// bne cr6,0x820a62e8
	if (!ctx.cr6.eq) goto loc_820A62E8;
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
	ctx.lr = 0x820A622C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a62e8
	if (ctx.cr6.eq) goto loc_820A62E8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a624c
	if (!ctx.cr6.eq) goto loc_820A624C;
	// bl 0x820f5f90
	ctx.lr = 0x820A6248;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820A624C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r27,28(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-16112
	ctx.r28.s64 = ctx.r11.s64 + -16112;
	// addi r30,r28,224
	ctx.r30.s64 = ctx.r28.s64 + 224;
loc_820A6260:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a6290
	if (ctx.cr6.eq) goto loc_820A6290;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820a6284
	if (!ctx.cr6.eq) goto loc_820A6284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820A6280;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820A6284:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x820a62ac
	if (ctx.cr6.eq) goto loc_820A62AC;
loc_820A6290:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820a6260
	if (ctx.cr6.lt) goto loc_820A6260;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A62AC:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r28,156
	ctx.r10.s64 = ctx.r28.s64 + 156;
loc_820A62B4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a62d8
	if (ctx.cr6.eq) goto loc_820A62D8;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r28,224
	ctx.r6.s64 = ctx.r28.s64 + 224;
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x820a62f4
	if (ctx.cr6.eq) goto loc_820A62F4;
loc_820A62D8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// blt cr6,0x820a62b4
	if (ctx.cr6.lt) goto loc_820A62B4;
loc_820A62E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A62F4:
	// lwz r9,420(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820a630c
	if (ctx.cr6.lt) goto loc_820A630C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a6340
	goto loc_820A6340;
loc_820A630C:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,20000
	ctx.r10.s64 = ctx.r10.s64 + 20000;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r6,r10,424
	ctx.r6.s64 = ctx.r10.s64 + 424;
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x820a6334
	if (ctx.cr6.eq) goto loc_820A6334;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a6340
	goto loc_820A6340;
loc_820A6334:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,428
	ctx.r10.s64 = ctx.r10.s64 + 428;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_820A6340:
	// lwz r10,296(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a6374
	if (ctx.cr6.eq) goto loc_820A6374;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A6374:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A6384"))) PPC_WEAK_FUNC(sub_820A6384);
PPC_FUNC_IMPL(__imp__sub_820A6384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6388"))) PPC_WEAK_FUNC(sub_820A6388);
PPC_FUNC_IMPL(__imp__sub_820A6388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820A6390;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	ctx.lr = 0x820A63B0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a64ec
	if (ctx.cr6.eq) goto loc_820A64EC;
	// li r26,5
	ctx.r26.s64 = 5;
	// li r27,88
	ctx.r27.s64 = 88;
	// li r25,2
	ctx.r25.s64 = 2;
loc_820A63C8:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// rlwinm r9,r10,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// bne cr6,0x820a63fc
	if (!ctx.cr6.eq) goto loc_820A63FC;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// b 0x820a640c
	goto loc_820A640C;
loc_820A63FC:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_820A640C:
	// lwz r8,180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwinm r9,r10,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x60;
	// lwz r7,184(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r6,r10,25,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r9,96
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 96, ctx.xer);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bne cr6,0x820a6440
	if (!ctx.cr6.eq) goto loc_820A6440;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// b 0x820a6450
	goto loc_820A6450;
loc_820A6440:
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
loc_820A6450:
	// lbz r9,193(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// rlwinm r5,r10,30,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lwz r7,212(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r8,r10,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// rlwinm r6,r10,23,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// stb r5,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r5.u8);
	// lfs f12,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lfs f8,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f7,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// li r5,88
	ctx.r5.s64 = 88;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x820A64C8;
	sub_8233E4E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820A64E0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a63c8
	if (!ctx.cr6.eq) goto loc_820A63C8;
loc_820A64EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A64F4"))) PPC_WEAK_FUNC(sub_820A64F4);
PPC_FUNC_IMPL(__imp__sub_820A64F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A64F8"))) PPC_WEAK_FUNC(sub_820A64F8);
PPC_FUNC_IMPL(__imp__sub_820A64F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820A6500;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa24
	ctx.lr = 0x820A6508;
	__savefpr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r3.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x8233e4e0
	ctx.lr = 0x820A652C;
	sub_8233E4E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820A6544;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a67e8
	if (ctx.cr6.eq) goto loc_820A67E8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lbz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// lbz r4,121(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r26,r10,-32672
	ctx.r26.s64 = ctx.r10.s64 + -32672;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lbz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f31,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f30,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f30.f64 = double(temp.f32);
	// lbz r16,120(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// lfs f29,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f28.f64 = double(temp.f32);
	// lwz r30,156(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lfs f27,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f27.f64 = double(temp.f32);
	// lwz r20,132(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f26,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f26.f64 = double(temp.f32);
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f25,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f25.f64 = double(temp.f32);
	// addi r24,r8,-32648
	ctx.r24.s64 = ctx.r8.s64 + -32648;
	// lfs f24,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f24.f64 = double(temp.f32);
	// addi r22,r6,-32660
	ctx.r22.s64 = ctx.r6.s64 + -32660;
	// lfs f23,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f23.f64 = double(temp.f32);
	// rlwinm r25,r5,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// rlwinm r23,r3,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r9,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r28,r31,29,0,2
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0xE0000000;
	// addi r17,r10,6936
	ctx.r17.s64 = ctx.r10.s64 + 6936;
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r14,r11,-7224
	ctx.r14.s64 = ctx.r11.s64 + -7224;
loc_820A65F0:
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x8233e4e0
	ctx.lr = 0x820A6604;
	sub_8233E4E0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,3,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFC00;
	// rlwinm r18,r11,31,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq cr6,0x820a661c
	if (ctx.cr6.eq) goto loc_820A661C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_820A661C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a662c
	if (ctx.cr6.eq) goto loc_820A662C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_820A662C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a663c
	if (ctx.cr6.eq) goto loc_820A663C;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_820A663C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a664c
	if (ctx.cr6.eq) goto loc_820A664C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_820A664C:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// stfs f23,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwzx r9,r25,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// lwzx r8,r21,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r22.u32);
	// or r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 | ctx.r10.u64;
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stb r27,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r27.u8);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// beq cr6,0x820a66bc
	if (ctx.cr6.eq) goto loc_820A66BC;
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a66b0
	if (ctx.cr6.eq) goto loc_820A66B0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r15,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r15.u16);
	// addi r3,r14,16696
	ctx.r3.s64 = ctx.r14.s64 + 16696;
	// sth r15,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r15.u16);
	// bl 0x82173038
	ctx.lr = 0x820A66B0;
	sub_82173038(ctx, base);
loc_820A66B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820A66B8;
	sub_82172D60(ctx, base);
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
loc_820A66BC:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820a6748
	if (ctx.cr6.eq) goto loc_820A6748;
	// rlwinm r11,r30,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x820a66f8
	if (!ctx.cr6.lt) goto loc_820A66F8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r17,20
	ctx.r10.s64 = ctx.r17.s64 + 20;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820a66f8
	if (!ctx.cr6.eq) goto loc_820A66F8;
	// addi r10,r17,24
	ctx.r10.s64 = ctx.r17.s64 + 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a6700
	if (!ctx.cr6.eq) goto loc_820A6700;
loc_820A66F8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x820a6720
	goto loc_820A6720;
loc_820A6700:
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
loc_820A6704:
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
	// bne 0x820a6704
	if (!ctx.cr0.eq) goto loc_820A6704;
loc_820A6720:
	// lwz r10,296(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a6748
	if (ctx.cr6.eq) goto loc_820A6748;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6748
	if (ctx.cr6.eq) goto loc_820A6748;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82177f68
	ctx.lr = 0x820A6748;
	sub_82177F68(ctx, base);
loc_820A6748:
	// stfs f24,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f25,160(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f26,164(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f27,168(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x820e2ea8
	ctx.lr = 0x820A6774;
	sub_820E2EA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e2e18
	ctx.lr = 0x820A677C;
	sub_820E2E18(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a67c4
	if (ctx.cr6.eq) goto loc_820A67C4;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a67b4
	if (ctx.cr6.eq) goto loc_820A67B4;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x820a67ac
	if (!ctx.cr6.eq) goto loc_820A67AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ac2d0
	ctx.lr = 0x820A67A8;
	sub_820AC2D0(ctx, base);
	// b 0x820a67c4
	goto loc_820A67C4;
loc_820A67AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a67c4
	if (!ctx.cr6.eq) goto loc_820A67C4;
loc_820A67B4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x820a67c4
	if (ctx.cr6.eq) goto loc_820A67C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ac250
	ctx.lr = 0x820A67C4;
	sub_820AC250(ctx, base);
loc_820A67C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// li r6,258
	ctx.r6.s64 = 258;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820A67DC;
	sub_82085870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a65f0
	if (!ctx.cr6.eq) goto loc_820A65F0;
loc_820A67E8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa70
	ctx.lr = 0x820A67F4;
	__restfpr_23(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A67F8"))) PPC_WEAK_FUNC(sub_820A67F8);
PPC_FUNC_IMPL(__imp__sub_820A67F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A6800;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r26,r10,1
	ctx.r26.u64 = ctx.r10.u64 | 1;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// ori r27,r9,6
	ctx.r27.u64 = ctx.r9.u64 | 6;
loc_820A6828:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820a687c
	if (!ctx.cr6.eq) goto loc_820A687C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a6914
	if (!ctx.cr6.eq) goto loc_820A6914;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A6840;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a684c
	if (!ctx.cr6.eq) goto loc_820A684C;
	// bl 0x821b3000
	ctx.lr = 0x820A684C;
	sub_821B3000(ctx, base);
loc_820A684C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a6874
	if (ctx.cr6.eq) goto loc_820A6874;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6874
	if (ctx.cr6.eq) goto loc_820A6874;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a6898
	goto loc_820A6898;
loc_820A6874:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a6898
	goto loc_820A6898;
loc_820A687C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a68c4
	if (!ctx.cr6.eq) goto loc_820A68C4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a6914
	if (ctx.cr6.eq) goto loc_820A6914;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a6914
	if (!ctx.cr6.eq) goto loc_820A6914;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A6898:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a68b4
	if (ctx.cr6.eq) goto loc_820A68B4;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A68B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a68f0
	if (ctx.cr6.eq) goto loc_820A68F0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a68f0
	goto loc_820A68F0;
loc_820A68C4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a68d4
	if (!ctx.cr6.eq) goto loc_820A68D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a68f0
	goto loc_820A68F0;
loc_820A68D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A68EC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A68F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6914
	if (ctx.cr6.eq) goto loc_820A6914;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r8,r9,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// stb r8,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r8.u8);
	// lwz r7,252(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// stw r7,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r7.u32);
	// b 0x820a6828
	goto loc_820A6828;
loc_820A6914:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A691C"))) PPC_WEAK_FUNC(sub_820A691C);
PPC_FUNC_IMPL(__imp__sub_820A691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6920"))) PPC_WEAK_FUNC(sub_820A6920);
PPC_FUNC_IMPL(__imp__sub_820A6920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A6928;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A6948;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a6a0c
	if (ctx.cr6.eq) goto loc_820A6A0C;
loc_820A6954:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x8233e4e0
	ctx.lr = 0x820A6968;
	sub_8233E4E0(ctx, base);
	// lbz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r29,r11,20,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// beq cr6,0x820a6984
	if (ctx.cr6.eq) goto loc_820A6984;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// b 0x820a6988
	goto loc_820A6988;
loc_820A6984:
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
loc_820A6988:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x820e2ea8
	ctx.lr = 0x820A69A0;
	sub_820E2EA8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a69e8
	if (ctx.cr6.eq) goto loc_820A69E8;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a69d8
	if (ctx.cr6.eq) goto loc_820A69D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820a69d0
	if (!ctx.cr6.eq) goto loc_820A69D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac1d0
	ctx.lr = 0x820A69CC;
	sub_820AC1D0(ctx, base);
	// b 0x820a69e8
	goto loc_820A69E8;
loc_820A69D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a69e8
	if (!ctx.cr6.eq) goto loc_820A69E8;
loc_820A69D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a69e8
	if (ctx.cr6.eq) goto loc_820A69E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac150
	ctx.lr = 0x820A69E8;
	sub_820AC150(ctx, base);
loc_820A69E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82085870
	ctx.lr = 0x820A6A00;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a6954
	if (!ctx.cr6.eq) goto loc_820A6954;
loc_820A6A0C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A6A14"))) PPC_WEAK_FUNC(sub_820A6A14);
PPC_FUNC_IMPL(__imp__sub_820A6A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6A18"))) PPC_WEAK_FUNC(sub_820A6A18);
PPC_FUNC_IMPL(__imp__sub_820A6A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A6A20;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r26,r10,1
	ctx.r26.u64 = ctx.r10.u64 | 1;
	// lis r28,-32197
	ctx.r28.s64 = -2110062592;
	// ori r27,r9,6
	ctx.r27.u64 = ctx.r9.u64 | 6;
loc_820A6A48:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820a6a9c
	if (!ctx.cr6.eq) goto loc_820A6A9C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a6b40
	if (!ctx.cr6.eq) goto loc_820A6B40;
	// lwz r3,-27096(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A6A60;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a6a6c
	if (!ctx.cr6.eq) goto loc_820A6A6C;
	// bl 0x821b3000
	ctx.lr = 0x820A6A6C;
	sub_821B3000(ctx, base);
loc_820A6A6C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a6a94
	if (ctx.cr6.eq) goto loc_820A6A94;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6a94
	if (ctx.cr6.eq) goto loc_820A6A94;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a6ab8
	goto loc_820A6AB8;
loc_820A6A94:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a6ab8
	goto loc_820A6AB8;
loc_820A6A9C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a6ae4
	if (!ctx.cr6.eq) goto loc_820A6AE4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a6b40
	if (ctx.cr6.eq) goto loc_820A6B40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a6b40
	if (!ctx.cr6.eq) goto loc_820A6B40;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A6AB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6ad4
	if (ctx.cr6.eq) goto loc_820A6AD4;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A6AD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a6b10
	if (ctx.cr6.eq) goto loc_820A6B10;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a6b10
	goto loc_820A6B10;
loc_820A6AE4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a6af4
	if (!ctx.cr6.eq) goto loc_820A6AF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a6b0c
	goto loc_820A6B0C;
loc_820A6AF4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A6B0C;
	sub_820F3178(ctx, base);
loc_820A6B0C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A6B10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6b40
	if (ctx.cr6.eq) goto loc_820A6B40;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// lhz r8,176(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 176);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stb r7,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r7.u8);
	// bne cr6,0x820a6a48
	if (!ctx.cr6.eq) goto loc_820A6A48;
	// lbz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// stb r10,9(r29)
	PPC_STORE_U8(ctx.r29.u32 + 9, ctx.r10.u8);
	// b 0x820a6a48
	goto loc_820A6A48;
loc_820A6B40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A6B48"))) PPC_WEAK_FUNC(sub_820A6B48);
PPC_FUNC_IMPL(__imp__sub_820A6B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A6B50;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A6B70;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a6bfc
	if (ctx.cr6.eq) goto loc_820A6BFC;
	// li r27,255
	ctx.r27.s64 = 255;
loc_820A6B80:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x8233e4e0
	ctx.lr = 0x820A6B94;
	sub_8233E4E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x820a6bac
	if (!ctx.cr6.eq) goto loc_820A6BAC;
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// b 0x820a6bb0
	goto loc_820A6BB0;
loc_820A6BAC:
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
loc_820A6BB0:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// bne cr6,0x820a6bc8
	if (!ctx.cr6.eq) goto loc_820A6BC8;
	// rlwinm r10,r11,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
loc_820A6BC8:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e2ea8
	ctx.lr = 0x820A6BD8;
	sub_820E2EA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820A6BF0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a6b80
	if (!ctx.cr6.eq) goto loc_820A6B80;
loc_820A6BFC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A6C04"))) PPC_WEAK_FUNC(sub_820A6C04);
PPC_FUNC_IMPL(__imp__sub_820A6C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6C08"))) PPC_WEAK_FUNC(sub_820A6C08);
PPC_FUNC_IMPL(__imp__sub_820A6C08) {
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
	// bne cr6,0x820a6c50
	if (!ctx.cr6.eq) goto loc_820A6C50;
	// bl 0x820ddca8
	ctx.lr = 0x820A6C38;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a6c48
	if (ctx.cr6.eq) goto loc_820A6C48;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a6c74
	goto loc_820A6C74;
loc_820A6C48:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a6c74
	goto loc_820A6C74;
loc_820A6C50:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a6c84
	if (!ctx.cr6.eq) goto loc_820A6C84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820a6c70
	if (!ctx.cr6.eq) goto loc_820A6C70;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a6cac
	goto loc_820A6CAC;
loc_820A6C70:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A6C74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a6cac
	if (ctx.cr6.eq) goto loc_820A6CAC;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a6cac
	goto loc_820A6CAC;
loc_820A6C84:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a6c94
	if (!ctx.cr6.eq) goto loc_820A6C94;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a6cac
	goto loc_820A6CAC;
loc_820A6C94:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A6CA8;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A6CAC:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq cr6,0x820a6d48
	if (ctx.cr6.eq) goto loc_820A6D48;
	// lbz r7,344(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lbz r5,345(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 345);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// lbz r3,346(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 346);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lbz r4,347(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 347);
	// addi r11,r9,31376
	ctx.r11.s64 = ctx.r9.s64 + 31376;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// rlwinm r9,r4,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// rlwinm r8,r4,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x1;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// stb r9,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r9.u8);
	// stb r8,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x820a6d7c
	goto loc_820A6D7C;
loc_820A6D48:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r8,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r7,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r7.u8);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_820A6D7C:
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820A6D90:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820a6d90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A6D90;
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

__attribute__((alias("__imp__sub_820A6DB4"))) PPC_WEAK_FUNC(sub_820A6DB4);
PPC_FUNC_IMPL(__imp__sub_820A6DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6DB8"))) PPC_WEAK_FUNC(sub_820A6DB8);
PPC_FUNC_IMPL(__imp__sub_820A6DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A6DC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lbz r10,10(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// lfs f12,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lbz r8,9(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lfs f11,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f10,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// subfic r10,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r8.s64;
	// lfs f0,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// li r3,4
	ctx.r3.s64 = 4;
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lbz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r7,2
	ctx.r7.s64 = 2;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addic r5,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// subfe r10,r5,r4
	temp.u8 = (~ctx.r5.u32 + ctx.r4.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r7,0
	ctx.r7.s64 = 0;
	// fctidz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fctidz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// fctidz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// or r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lbz r8,95(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stfd f4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// li r6,258
	ctx.r6.s64 = 258;
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x82085870
	ctx.lr = 0x820A6E80;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a6f74
	if (ctx.cr6.eq) goto loc_820A6F74;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// ld r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r26,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r30,r11,20000
	ctx.r30.s64 = ctx.r11.s64 + 20000;
loc_820A6EA4:
	// lbz r11,347(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 347);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// std r27,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r27.u64);
	// rlwinm r8,r10,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// subfe r11,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x820a6f50
	if (ctx.cr6.eq) goto loc_820A6F50;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6f18
	if (ctx.cr6.eq) goto loc_820A6F18;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a6f10
	if (!ctx.cr6.eq) goto loc_820A6F10;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a6f50
	if (ctx.cr6.eq) goto loc_820A6F50;
	// rlwinm r10,r11,0,13,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// bl 0x822184b8
	ctx.lr = 0x820A6F0C;
	sub_822184B8(ctx, base);
	// b 0x820a6f50
	goto loc_820A6F50;
loc_820A6F10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a6f50
	if (!ctx.cr6.eq) goto loc_820A6F50;
loc_820A6F18:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6f50
	if (ctx.cr6.eq) goto loc_820A6F50;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a6f50
	if (!ctx.cr6.eq) goto loc_820A6F50;
	// oris r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 524288;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// bl 0x82106098
	ctx.lr = 0x820A6F50;
	sub_82106098(ctx, base);
loc_820A6F50:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820A6F68;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a6ea4
	if (!ctx.cr6.eq) goto loc_820A6EA4;
loc_820A6F74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A6F7C"))) PPC_WEAK_FUNC(sub_820A6F7C);
PPC_FUNC_IMPL(__imp__sub_820A6F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6F80"))) PPC_WEAK_FUNC(sub_820A6F80);
PPC_FUNC_IMPL(__imp__sub_820A6F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A6F88;
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
loc_820A6FB0:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a7004
	if (!ctx.cr6.eq) goto loc_820A7004;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a70a8
	if (!ctx.cr6.eq) goto loc_820A70A8;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A6FC8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a6fd4
	if (!ctx.cr6.eq) goto loc_820A6FD4;
	// bl 0x821b3000
	ctx.lr = 0x820A6FD4;
	sub_821B3000(ctx, base);
loc_820A6FD4:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a6ffc
	if (ctx.cr6.eq) goto loc_820A6FFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6ffc
	if (ctx.cr6.eq) goto loc_820A6FFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a7020
	goto loc_820A7020;
loc_820A6FFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7020
	goto loc_820A7020;
loc_820A7004:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820a704c
	if (!ctx.cr6.eq) goto loc_820A704C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a70a8
	if (ctx.cr6.eq) goto loc_820A70A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a70a8
	if (!ctx.cr6.eq) goto loc_820A70A8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A7020:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a703c
	if (ctx.cr6.eq) goto loc_820A703C;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A703C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7078
	if (ctx.cr6.eq) goto loc_820A7078;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a7078
	goto loc_820A7078;
loc_820A704C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a705c
	if (!ctx.cr6.eq) goto loc_820A705C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7078
	goto loc_820A7078;
loc_820A705C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A7074;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A7078:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a70a8
	if (ctx.cr6.eq) goto loc_820A70A8;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// beq cr6,0x820a709c
	if (ctx.cr6.eq) goto loc_820A709C;
	// oris r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 65536;
	// stw r9,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r9.u32);
	// b 0x820a6fb0
	goto loc_820A6FB0;
loc_820A709C:
	// rlwinm r9,r10,0,16,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r9,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r9.u32);
	// b 0x820a6fb0
	goto loc_820A6FB0;
loc_820A70A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A70B0"))) PPC_WEAK_FUNC(sub_820A70B0);
PPC_FUNC_IMPL(__imp__sub_820A70B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A70B8;
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
	ctx.lr = 0x820A70D8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7158
	if (ctx.cr6.eq) goto loc_820A7158;
loc_820A70E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ac088
	ctx.lr = 0x820A70EC;
	sub_820AC088(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r3,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// rlwinm r8,r3,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// beq cr6,0x820a712c
	if (ctx.cr6.eq) goto loc_820A712C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r11,64
	ctx.r9.u64 = ctx.r11.u64 | 64;
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// b 0x820a7134
	goto loc_820A7134;
loc_820A712C:
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
loc_820A7134:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820A714C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a70e4
	if (!ctx.cr6.eq) goto loc_820A70E4;
loc_820A7158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7160"))) PPC_WEAK_FUNC(sub_820A7160);
PPC_FUNC_IMPL(__imp__sub_820A7160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A7168;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
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
	ctx.lr = 0x820A718C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a726c
	if (ctx.cr6.eq) goto loc_820A726C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f31.f64 = double(temp.f32);
loc_820A71A0:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a71cc
	if (ctx.cr6.eq) goto loc_820A71CC;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x820a71dc
	goto loc_820A71DC;
loc_820A71CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_820A71DC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f11,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// li r6,258
	ctx.r6.s64 = 258;
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82085870
	ctx.lr = 0x820A7264;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a71a0
	if (!ctx.cr6.eq) goto loc_820A71A0;
loc_820A726C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7278"))) PPC_WEAK_FUNC(sub_820A7278);
PPC_FUNC_IMPL(__imp__sub_820A7278) {
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
	// bne cr6,0x820a72b8
	if (!ctx.cr6.eq) goto loc_820A72B8;
	// bl 0x820ddca8
	ctx.lr = 0x820A72A0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a72b0
	if (ctx.cr6.eq) goto loc_820A72B0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a72d4
	goto loc_820A72D4;
loc_820A72B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a72d4
	goto loc_820A72D4;
loc_820A72B8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a7300
	if (!ctx.cr6.eq) goto loc_820A7300;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7348
	if (ctx.cr6.eq) goto loc_820A7348;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A72D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a72f0
	if (ctx.cr6.eq) goto loc_820A72F0;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A72F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7328
	if (ctx.cr6.eq) goto loc_820A7328;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a7328
	goto loc_820A7328;
loc_820A7300:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a7310
	if (!ctx.cr6.eq) goto loc_820A7310;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7328
	goto loc_820A7328;
loc_820A7310:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A7324;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A7328:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7348
	if (ctx.cr6.eq) goto loc_820A7348;
	// lwz r3,396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
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
loc_820A7348:
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

__attribute__((alias("__imp__sub_820A7360"))) PPC_WEAK_FUNC(sub_820A7360);
PPC_FUNC_IMPL(__imp__sub_820A7360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A7368;
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
loc_820A7390:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a73e4
	if (!ctx.cr6.eq) goto loc_820A73E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7470
	if (!ctx.cr6.eq) goto loc_820A7470;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A73A8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a73b4
	if (!ctx.cr6.eq) goto loc_820A73B4;
	// bl 0x821b3000
	ctx.lr = 0x820A73B4;
	sub_821B3000(ctx, base);
loc_820A73B4:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a73dc
	if (ctx.cr6.eq) goto loc_820A73DC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a73dc
	if (ctx.cr6.eq) goto loc_820A73DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a7400
	goto loc_820A7400;
loc_820A73DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7400
	goto loc_820A7400;
loc_820A73E4:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820a742c
	if (!ctx.cr6.eq) goto loc_820A742C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7470
	if (ctx.cr6.eq) goto loc_820A7470;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7470
	if (!ctx.cr6.eq) goto loc_820A7470;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A7400:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a741c
	if (ctx.cr6.eq) goto loc_820A741C;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A741C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7458
	if (ctx.cr6.eq) goto loc_820A7458;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a7458
	goto loc_820A7458;
loc_820A742C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a743c
	if (!ctx.cr6.eq) goto loc_820A743C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7458
	goto loc_820A7458;
loc_820A743C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A7454;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A7458:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7470
	if (ctx.cr6.eq) goto loc_820A7470;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// or r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 | ctx.r26.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// b 0x820a7390
	goto loc_820A7390;
loc_820A7470:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7478"))) PPC_WEAK_FUNC(sub_820A7478);
PPC_FUNC_IMPL(__imp__sub_820A7478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A7480;
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
loc_820A74A8:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a74fc
	if (!ctx.cr6.eq) goto loc_820A74FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7588
	if (!ctx.cr6.eq) goto loc_820A7588;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A74C0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a74cc
	if (!ctx.cr6.eq) goto loc_820A74CC;
	// bl 0x821b3000
	ctx.lr = 0x820A74CC;
	sub_821B3000(ctx, base);
loc_820A74CC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a74f4
	if (ctx.cr6.eq) goto loc_820A74F4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a74f4
	if (ctx.cr6.eq) goto loc_820A74F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a7518
	goto loc_820A7518;
loc_820A74F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7518
	goto loc_820A7518;
loc_820A74FC:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820a7544
	if (!ctx.cr6.eq) goto loc_820A7544;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7588
	if (ctx.cr6.eq) goto loc_820A7588;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7588
	if (!ctx.cr6.eq) goto loc_820A7588;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A7518:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7534
	if (ctx.cr6.eq) goto loc_820A7534;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A7534:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7570
	if (ctx.cr6.eq) goto loc_820A7570;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a7570
	goto loc_820A7570;
loc_820A7544:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a7554
	if (!ctx.cr6.eq) goto loc_820A7554;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7570
	goto loc_820A7570;
loc_820A7554:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A756C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A7570:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7588
	if (ctx.cr6.eq) goto loc_820A7588;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// andc r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r26.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// b 0x820a74a8
	goto loc_820A74A8;
loc_820A7588:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7590"))) PPC_WEAK_FUNC(sub_820A7590);
PPC_FUNC_IMPL(__imp__sub_820A7590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820A7598;
	__savegprlr_25(ctx, base);
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
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82085870
	ctx.lr = 0x820A75C4;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a760c
	if (ctx.cr6.eq) goto loc_820A760C;
loc_820A75D0:
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
	// bl 0x820e5760
	ctx.lr = 0x820A75E8;
	sub_820E5760(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820A7600;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a75d0
	if (!ctx.cr6.eq) goto loc_820A75D0;
loc_820A760C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7614"))) PPC_WEAK_FUNC(sub_820A7614);
PPC_FUNC_IMPL(__imp__sub_820A7614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A7618"))) PPC_WEAK_FUNC(sub_820A7618);
PPC_FUNC_IMPL(__imp__sub_820A7618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820A7620;
	__savegprlr_25(ctx, base);
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
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82085870
	ctx.lr = 0x820A764C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7694
	if (ctx.cr6.eq) goto loc_820A7694;
loc_820A7658:
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
	// bl 0x820e5498
	ctx.lr = 0x820A7670;
	sub_820E5498(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820A7688;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a7658
	if (!ctx.cr6.eq) goto loc_820A7658;
loc_820A7694:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A769C"))) PPC_WEAK_FUNC(sub_820A769C);
PPC_FUNC_IMPL(__imp__sub_820A769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A76A0"))) PPC_WEAK_FUNC(sub_820A76A0);
PPC_FUNC_IMPL(__imp__sub_820A76A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820A76A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A76CC;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7788
	if (ctx.cr6.eq) goto loc_820A7788;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r27,-32171
	ctx.r27.s64 = -2108358656;
	// addi r28,r11,5280
	ctx.r28.s64 = ctx.r11.s64 + 5280;
loc_820A76E4:
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a771c
	if (ctx.cr6.eq) goto loc_820A771C;
	// lwz r11,5540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a7714
	if (!ctx.cr6.eq) goto loc_820A7714;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,5540(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820A7714;
	sub_820E35F0(ctx, base);
loc_820A7714:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820a7720
	goto loc_820A7720;
loc_820A771C:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
loc_820A7720:
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7764
	if (ctx.cr6.eq) goto loc_820A7764;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a7764
	if (!ctx.cr6.lt) goto loc_820A7764;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820A7744;
	sub_820E5B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7764
	if (ctx.cr6.eq) goto loc_820A7764;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820a7764
	if (!ctx.cr6.lt) goto loc_820A7764;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwimi r11,r24,7,17,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 7) & 0x7F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF807F);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
loc_820A7764:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82085870
	ctx.lr = 0x820A777C;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a76e4
	if (!ctx.cr6.eq) goto loc_820A76E4;
loc_820A7788:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7790"))) PPC_WEAK_FUNC(sub_820A7790);
PPC_FUNC_IMPL(__imp__sub_820A7790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820A7798;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f31,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// bne cr6,0x820a77f4
	if (!ctx.cr6.eq) goto loc_820A77F4;
	// bl 0x820ddca8
	ctx.lr = 0x820A77DC;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a77ec
	if (ctx.cr6.eq) goto loc_820A77EC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a7810
	goto loc_820A7810;
loc_820A77EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7810
	goto loc_820A7810;
loc_820A77F4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a783c
	if (!ctx.cr6.eq) goto loc_820A783C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a78e4
	if (ctx.cr6.eq) goto loc_820A78E4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A7810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a782c
	if (ctx.cr6.eq) goto loc_820A782C;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A782C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7864
	if (ctx.cr6.eq) goto loc_820A7864;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a7864
	goto loc_820A7864;
loc_820A783C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a784c
	if (!ctx.cr6.eq) goto loc_820A784C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7864
	goto loc_820A7864;
loc_820A784C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A7860;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A7864:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a78e4
	if (ctx.cr6.eq) goto loc_820A78E4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820ac008
	ctx.lr = 0x820A7874;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a78d0
	if (ctx.cr6.eq) goto loc_820A78D0;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a78d0
	if (!ctx.cr6.lt) goto loc_820A78D0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r10,r29,960
	ctx.r10.s64 = ctx.r29.s64 * 960;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,392
	ctx.r9.s64 = ctx.r11.s64 + 392;
	// lwz r8,392(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwz r7,396(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lwz r6,400(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r5,404(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820a78d8
	goto loc_820A78D8;
loc_820A78D0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_820A78D8:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_820A78E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A78F4"))) PPC_WEAK_FUNC(sub_820A78F4);
PPC_FUNC_IMPL(__imp__sub_820A78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A78F8"))) PPC_WEAK_FUNC(sub_820A78F8);
PPC_FUNC_IMPL(__imp__sub_820A78F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A7900;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
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
	ctx.lr = 0x820A7928;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a79a8
	if (ctx.cr6.eq) goto loc_820A79A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820A7940:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820a795c
	if (!ctx.cr6.eq) goto loc_820A795C;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x820a7970
	goto loc_820A7970;
loc_820A795C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_820A7970:
	// rldicr r6,r11,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820abeb0
	ctx.lr = 0x820A7984;
	sub_820ABEB0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820A799C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a7940
	if (!ctx.cr6.eq) goto loc_820A7940;
loc_820A79A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A79B4"))) PPC_WEAK_FUNC(sub_820A79B4);
PPC_FUNC_IMPL(__imp__sub_820A79B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A79B8"))) PPC_WEAK_FUNC(sub_820A79B8);
PPC_FUNC_IMPL(__imp__sub_820A79B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A79C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A79E4;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7a9c
	if (ctx.cr6.eq) goto loc_820A7A9C;
loc_820A79F0:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a7a78
	if (ctx.cr6.eq) goto loc_820A7A78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ac008
	ctx.lr = 0x820A7A08;
	sub_820AC008(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7a78
	if (ctx.cr6.eq) goto loc_820A7A78;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a7a78
	if (!ctx.cr6.lt) goto loc_820A7A78;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a7a78
	if (!ctx.cr6.lt) goto loc_820A7A78;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mulli r10,r31,960
	ctx.r10.s64 = ctx.r31.s64 * 960;
	// mulli r9,r29,960
	ctx.r9.s64 = ctx.r29.s64 * 960;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq 0x820a7a78
	if (ctx.cr0.eq) goto loc_820A7A78;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7a78
	if (ctx.cr6.eq) goto loc_820A7A78;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820a7a78
	if (!ctx.cr6.eq) goto loc_820A7A78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5b68
	ctx.lr = 0x820A7A74;
	sub_820E5B68(ctx, base);
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r29.u16);
loc_820A7A78:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82085870
	ctx.lr = 0x820A7A90;
	sub_82085870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a79f0
	if (!ctx.cr6.eq) goto loc_820A79F0;
loc_820A7A9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7AA4"))) PPC_WEAK_FUNC(sub_820A7AA4);
PPC_FUNC_IMPL(__imp__sub_820A7AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A7AA8"))) PPC_WEAK_FUNC(sub_820A7AA8);
PPC_FUNC_IMPL(__imp__sub_820A7AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A7AB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A7AD0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7b78
	if (ctx.cr6.eq) goto loc_820A7B78;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r29,-32171
	ctx.r29.s64 = -2108358656;
	// addi r30,r11,5280
	ctx.r30.s64 = ctx.r11.s64 + 5280;
loc_820A7AE8:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a7b20
	if (ctx.cr6.eq) goto loc_820A7B20;
	// lwz r11,5540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5540);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a7b18
	if (!ctx.cr6.eq) goto loc_820A7B18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,5540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x820A7B18;
	sub_820E35F0(ctx, base);
loc_820A7B18:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x820a7b24
	goto loc_820A7B24;
loc_820A7B20:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_820A7B24:
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7b54
	if (ctx.cr6.eq) goto loc_820A7B54;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82187b68
	ctx.lr = 0x820A7B3C;
	sub_82187B68(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7b54
	if (ctx.cr6.eq) goto loc_820A7B54;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
loc_820A7B54:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82085870
	ctx.lr = 0x820A7B6C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a7ae8
	if (!ctx.cr6.eq) goto loc_820A7AE8;
loc_820A7B78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7B80"))) PPC_WEAK_FUNC(sub_820A7B80);
PPC_FUNC_IMPL(__imp__sub_820A7B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A7B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a7bc8
	if (ctx.cr6.eq) goto loc_820A7BC8;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x820a7bc8
	if (ctx.cr6.eq) goto loc_820A7BC8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82087078
	ctx.lr = 0x820A7BB0;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7c30
	if (ctx.cr6.eq) goto loc_820A7C30;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820a7bc8
	if (!ctx.cr6.eq) goto loc_820A7BC8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820A7BC8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820A7BE0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7c20
	if (ctx.cr6.eq) goto loc_820A7C20;
loc_820A7BEC:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e40c0
	ctx.lr = 0x820A7BFC;
	sub_820E40C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820A7C14;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a7bec
	if (!ctx.cr6.eq) goto loc_820A7BEC;
loc_820A7C20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a7c30
	if (ctx.cr6.eq) goto loc_820A7C30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82172d60
	ctx.lr = 0x820A7C30;
	sub_82172D60(ctx, base);
loc_820A7C30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7C38"))) PPC_WEAK_FUNC(sub_820A7C38);
PPC_FUNC_IMPL(__imp__sub_820A7C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A7C40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r27,r10,1
	ctx.r27.u64 = ctx.r10.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r9,6
	ctx.r28.u64 = ctx.r9.u64 | 6;
loc_820A7C64:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a7cb8
	if (!ctx.cr6.eq) goto loc_820A7CB8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7d50
	if (!ctx.cr6.eq) goto loc_820A7D50;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A7C7C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a7c88
	if (!ctx.cr6.eq) goto loc_820A7C88;
	// bl 0x821b3000
	ctx.lr = 0x820A7C88;
	sub_821B3000(ctx, base);
loc_820A7C88:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a7cb0
	if (ctx.cr6.eq) goto loc_820A7CB0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7cb0
	if (ctx.cr6.eq) goto loc_820A7CB0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a7cd4
	goto loc_820A7CD4;
loc_820A7CB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7cd4
	goto loc_820A7CD4;
loc_820A7CB8:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820a7d00
	if (!ctx.cr6.eq) goto loc_820A7D00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7d50
	if (ctx.cr6.eq) goto loc_820A7D50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7d50
	if (!ctx.cr6.eq) goto loc_820A7D50;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A7CD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7cf0
	if (ctx.cr6.eq) goto loc_820A7CF0;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A7CF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7d2c
	if (ctx.cr6.eq) goto loc_820A7D2C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a7d2c
	goto loc_820A7D2C;
loc_820A7D00:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a7d10
	if (!ctx.cr6.eq) goto loc_820A7D10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a7d28
	goto loc_820A7D28;
loc_820A7D10:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A7D28;
	sub_820F3178(ctx, base);
loc_820A7D28:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A7D2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7d50
	if (ctx.cr6.eq) goto loc_820A7D50;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a7c64
	if (ctx.cr6.eq) goto loc_820A7C64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820A7D50:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7D5C"))) PPC_WEAK_FUNC(sub_820A7D5C);
PPC_FUNC_IMPL(__imp__sub_820A7D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A7D60"))) PPC_WEAK_FUNC(sub_820A7D60);
PPC_FUNC_IMPL(__imp__sub_820A7D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A7D68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r27,r10,1
	ctx.r27.u64 = ctx.r10.u64 | 1;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// ori r28,r9,6
	ctx.r28.u64 = ctx.r9.u64 | 6;
loc_820A7D8C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820a7de0
	if (!ctx.cr6.eq) goto loc_820A7DE0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7e78
	if (!ctx.cr6.eq) goto loc_820A7E78;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820A7DA4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a7db0
	if (!ctx.cr6.eq) goto loc_820A7DB0;
	// bl 0x821b3000
	ctx.lr = 0x820A7DB0;
	sub_821B3000(ctx, base);
loc_820A7DB0:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a7dd8
	if (ctx.cr6.eq) goto loc_820A7DD8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7dd8
	if (ctx.cr6.eq) goto loc_820A7DD8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a7dfc
	goto loc_820A7DFC;
loc_820A7DD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7dfc
	goto loc_820A7DFC;
loc_820A7DE0:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820a7e28
	if (!ctx.cr6.eq) goto loc_820A7E28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7e78
	if (ctx.cr6.eq) goto loc_820A7E78;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7e78
	if (!ctx.cr6.eq) goto loc_820A7E78;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A7DFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7e18
	if (ctx.cr6.eq) goto loc_820A7E18;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A7E18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7e54
	if (ctx.cr6.eq) goto loc_820A7E54;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a7e54
	goto loc_820A7E54;
loc_820A7E28:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820a7e38
	if (!ctx.cr6.eq) goto loc_820A7E38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a7e50
	goto loc_820A7E50;
loc_820A7E38:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A7E50;
	sub_820F3178(ctx, base);
loc_820A7E50:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A7E54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7e78
	if (ctx.cr6.eq) goto loc_820A7E78;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a7d8c
	if (ctx.cr6.eq) goto loc_820A7D8C;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820A7E78:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A7E84"))) PPC_WEAK_FUNC(sub_820A7E84);
PPC_FUNC_IMPL(__imp__sub_820A7E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A7E88"))) PPC_WEAK_FUNC(sub_820A7E88);
PPC_FUNC_IMPL(__imp__sub_820A7E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820A7E90;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a7ed8
	if (!ctx.cr6.eq) goto loc_820A7ED8;
	// bl 0x820ddca8
	ctx.lr = 0x820A7EC0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a7ed0
	if (ctx.cr6.eq) goto loc_820A7ED0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a7ef4
	goto loc_820A7EF4;
loc_820A7ED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7ef4
	goto loc_820A7EF4;
loc_820A7ED8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a7f20
	if (!ctx.cr6.eq) goto loc_820A7F20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8018
	if (ctx.cr6.eq) goto loc_820A8018;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A7EF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7f10
	if (ctx.cr6.eq) goto loc_820A7F10;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A7F10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a7f48
	if (ctx.cr6.eq) goto loc_820A7F48;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a7f48
	goto loc_820A7F48;
loc_820A7F20:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a7f30
	if (!ctx.cr6.eq) goto loc_820A7F30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a7f48
	goto loc_820A7F48;
loc_820A7F30:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A7F44;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A7F48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8018
	if (ctx.cr6.eq) goto loc_820A8018;
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a8018
	if (ctx.cr6.eq) goto loc_820A8018;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a8018
	if (!ctx.cr6.lt) goto loc_820A8018;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8233e4e0
	ctx.lr = 0x820A7F90;
	sub_8233E4E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820a7fb0
	if (ctx.cr6.eq) goto loc_820A7FB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_820A7FB0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820a7fd0
	if (ctx.cr6.eq) goto loc_820A7FD0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_820A7FD0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a7ff0
	if (ctx.cr6.eq) goto loc_820A7FF0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_820A7FF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820a8074
	if (ctx.cr6.eq) goto loc_820A8074;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_820A8018:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820a8038
	if (ctx.cr6.eq) goto loc_820A8038;
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820A8038:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820a804c
	if (ctx.cr6.eq) goto loc_820A804C;
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
loc_820A804C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a8060
	if (ctx.cr6.eq) goto loc_820A8060;
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
loc_820A8060:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820a8074
	if (ctx.cr6.eq) goto loc_820A8074;
	// stfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_820A8074:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A807C"))) PPC_WEAK_FUNC(sub_820A807C);
PPC_FUNC_IMPL(__imp__sub_820A807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8080"))) PPC_WEAK_FUNC(sub_820A8080);
PPC_FUNC_IMPL(__imp__sub_820A8080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820A8088;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A80AC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8378
	if (ctx.cr6.eq) goto loc_820A8378;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r30,r11,20000
	ctx.r30.s64 = ctx.r11.s64 + 20000;
	// lfs f31,92(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
loc_820A80C8:
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// addi r11,r3,284
	ctx.r11.s64 = ctx.r3.s64 + 284;
	// stw r31,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a80f0
	if (ctx.cr6.eq) goto loc_820A80F0;
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
loc_820A80F0:
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a8114
	if (ctx.cr6.eq) goto loc_820A8114;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a8114
	if (!ctx.cr6.lt) goto loc_820A8114;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,10728
	ctx.r10.s64 = ctx.r30.s64 + 10728;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x820a8118
	goto loc_820A8118;
loc_820A8114:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820A8118:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x820a82d8
	if (ctx.cr6.lt) goto loc_820A82D8;
	// addi r6,r4,-3
	ctx.r6.s64 = ctx.r4.s64 + -3;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
loc_820A8130:
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a8168
	if (ctx.cr6.eq) goto loc_820A8168;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a8168
	if (!ctx.cr6.lt) goto loc_820A8168;
	// addi r10,r30,10704
	ctx.r10.s64 = ctx.r30.s64 + 10704;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a8168
	if (!ctx.cr6.lt) goto loc_820A8168;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x820a816c
	goto loc_820A816C;
loc_820A8168:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A816C:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a8190
	if (ctx.cr6.eq) goto loc_820A8190;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,12(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_820A8190:
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a81d0
	if (ctx.cr6.eq) goto loc_820A81D0;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a81d0
	if (!ctx.cr6.lt) goto loc_820A81D0;
	// addi r10,r30,10704
	ctx.r10.s64 = ctx.r30.s64 + 10704;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a81d0
	if (!ctx.cr6.lt) goto loc_820A81D0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// b 0x820a81d4
	goto loc_820A81D4;
loc_820A81D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A81D4:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a81f8
	if (ctx.cr6.eq) goto loc_820A81F8;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,12(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_820A81F8:
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a8234
	if (ctx.cr6.eq) goto loc_820A8234;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a8234
	if (!ctx.cr6.lt) goto loc_820A8234;
	// addi r10,r30,10704
	ctx.r10.s64 = ctx.r30.s64 + 10704;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a8234
	if (!ctx.cr6.lt) goto loc_820A8234;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// b 0x820a8238
	goto loc_820A8238;
loc_820A8234:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A8238:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a825c
	if (ctx.cr6.eq) goto loc_820A825C;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,12(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_820A825C:
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a829c
	if (ctx.cr6.eq) goto loc_820A829C;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a829c
	if (!ctx.cr6.lt) goto loc_820A829C;
	// addi r10,r30,10704
	ctx.r10.s64 = ctx.r30.s64 + 10704;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a829c
	if (!ctx.cr6.lt) goto loc_820A829C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1296
	ctx.r11.s64 = ctx.r11.s64 + 1296;
	// b 0x820a82a0
	goto loc_820A82A0;
loc_820A829C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A82A0:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a82c4
	if (ctx.cr6.eq) goto loc_820A82C4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,12(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_820A82C4:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,1728
	ctx.r9.s64 = ctx.r9.s64 + 1728;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820a8130
	if (ctx.cr6.lt) goto loc_820A8130;
loc_820A82D8:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x820a8358
	if (!ctx.cr6.lt) goto loc_820A8358;
	// subf r11,r7,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r7.s64;
	// mulli r9,r7,432
	ctx.r9.s64 = ctx.r7.s64 * 432;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820A82EC:
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a8324
	if (ctx.cr6.eq) goto loc_820A8324;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a8324
	if (!ctx.cr6.lt) goto loc_820A8324;
	// addi r10,r30,10704
	ctx.r10.s64 = ctx.r30.s64 + 10704;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820a8324
	if (!ctx.cr6.lt) goto loc_820A8324;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x820a8328
	goto loc_820A8328;
loc_820A8324:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A8328:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a834c
	if (ctx.cr6.eq) goto loc_820A834C;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,12(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
loc_820A834C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 + 432;
	// bdnz 0x820a82ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A82EC;
loc_820A8358:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820A8370;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a80c8
	if (!ctx.cr6.eq) goto loc_820A80C8;
loc_820A8378:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A8384"))) PPC_WEAK_FUNC(sub_820A8384);
PPC_FUNC_IMPL(__imp__sub_820A8384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8388"))) PPC_WEAK_FUNC(sub_820A8388);
PPC_FUNC_IMPL(__imp__sub_820A8388) {
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
	// bne cr6,0x820a83c8
	if (!ctx.cr6.eq) goto loc_820A83C8;
	// bl 0x820ddca8
	ctx.lr = 0x820A83B0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a83c0
	if (ctx.cr6.eq) goto loc_820A83C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820a83e4
	goto loc_820A83E4;
loc_820A83C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a83e4
	goto loc_820A83E4;
loc_820A83C8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a8410
	if (!ctx.cr6.eq) goto loc_820A8410;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8458
	if (ctx.cr6.eq) goto loc_820A8458;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820A83E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8400
	if (ctx.cr6.eq) goto loc_820A8400;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-258
	ctx.r10.s64 = ctx.r10.s64 + -258;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820A8400:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a8438
	if (ctx.cr6.eq) goto loc_820A8438;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820a8438
	goto loc_820A8438;
loc_820A8410:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a8420
	if (!ctx.cr6.eq) goto loc_820A8420;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a8438
	goto loc_820A8438;
loc_820A8420:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820A8434;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820A8438:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8458
	if (ctx.cr6.eq) goto loc_820A8458;
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
loc_820A8458:
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

__attribute__((alias("__imp__sub_820A8470"))) PPC_WEAK_FUNC(sub_820A8470);
PPC_FUNC_IMPL(__imp__sub_820A8470) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A84AC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a850c
	if (ctx.cr6.eq) goto loc_820A850C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f29,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820A84C4:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x820a84d4
	if (!ctx.cr6.eq) goto loc_820A84D4;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_820A84D4:
	// lfs f13,312(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x820a84e8
	if (!ctx.cr6.eq) goto loc_820A84E8;
	// stfs f0,312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
loc_820A84E8:
	// stfs f0,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820A8504;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a84c4
	if (!ctx.cr6.eq) goto loc_820A84C4;
loc_820A850C:
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

__attribute__((alias("__imp__sub_820A8530"))) PPC_WEAK_FUNC(sub_820A8530);
PPC_FUNC_IMPL(__imp__sub_820A8530) {
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
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820A854C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8568
	if (ctx.cr6.eq) goto loc_820A8568;
	// lfs f1,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A8568:
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A8584"))) PPC_WEAK_FUNC(sub_820A8584);
PPC_FUNC_IMPL(__imp__sub_820A8584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8588"))) PPC_WEAK_FUNC(sub_820A8588);
PPC_FUNC_IMPL(__imp__sub_820A8588) {
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
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820A85A4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a85e4
	if (ctx.cr6.eq) goto loc_820A85E4;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a85e4
	if (ctx.cr6.eq) goto loc_820A85E4;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a85e4
	if (!ctx.cr6.lt) goto loc_820A85E4;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r10,20000
	ctx.r11.s64 = ctx.r10.s64 + 20000;
	// addi r8,r11,10728
	ctx.r8.s64 = ctx.r11.s64 + 10728;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A85E4:
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

__attribute__((alias("__imp__sub_820A85F8"))) PPC_WEAK_FUNC(sub_820A85F8);
PPC_FUNC_IMPL(__imp__sub_820A85F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820A8600;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820A8628;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a86b8
	if (ctx.cr6.eq) goto loc_820A86B8;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lis r31,32640
	ctx.r31.s64 = 2139095040;
	// addi r28,r11,20000
	ctx.r28.s64 = ctx.r11.s64 + 20000;
	// lfs f30,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
loc_820A8650:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x820a8698
	if (!ctx.cr6.gt) goto loc_820A8698;
	// rlwinm r11,r27,0,1,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820a8698
	if (ctx.cr6.eq) goto loc_820A8698;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,1,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820a8698
	if (ctx.cr6.eq) goto loc_820A8698;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a8698
	if (ctx.cr6.eq) goto loc_820A8698;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a8698
	if (!ctx.cr6.lt) goto loc_820A8698;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r28,10732
	ctx.r10.s64 = ctx.r28.s64 + 10732;
	// stfsx f31,r11,r10
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_820A8698:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,258
	ctx.r6.s64 = 258;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820A86B0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a8650
	if (!ctx.cr6.eq) goto loc_820A8650;
loc_820A86B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A86C8"))) PPC_WEAK_FUNC(sub_820A86C8);
PPC_FUNC_IMPL(__imp__sub_820A86C8) {
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
	// li r6,258
	ctx.r6.s64 = 258;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820A86E4;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8724
	if (ctx.cr6.eq) goto loc_820A8724;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820a8724
	if (ctx.cr6.eq) goto loc_820A8724;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bge cr6,0x820a8724
	if (!ctx.cr6.lt) goto loc_820A8724;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r10,20000
	ctx.r11.s64 = ctx.r10.s64 + 20000;
	// addi r8,r11,10732
	ctx.r8.s64 = ctx.r11.s64 + 10732;
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A8724:
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

