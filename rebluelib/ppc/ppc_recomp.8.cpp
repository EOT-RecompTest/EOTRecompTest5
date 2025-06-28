#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820CA128"))) PPC_WEAK_FUNC(sub_820CA128);
PPC_FUNC_IMPL(__imp__sub_820CA128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CA130;
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
	ctx.lr = 0x820CA150;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca1a0
	if (ctx.cr6.eq) goto loc_820CA1A0;
loc_820CA158:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ca180
	if (ctx.cr6.eq) goto loc_820CA180;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// bne cr6,0x820ca17c
	if (!ctx.cr6.eq) goto loc_820CA17C;
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_820CA17C:
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_820CA180:
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
	ctx.lr = 0x820CA198;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ca158
	if (!ctx.cr6.eq) goto loc_820CA158;
loc_820CA1A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA1A8"))) PPC_WEAK_FUNC(sub_820CA1A8);
PPC_FUNC_IMPL(__imp__sub_820CA1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CA1B0;
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
	ctx.lr = 0x820CA1D0;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca220
	if (ctx.cr6.eq) goto loc_820CA220;
loc_820CA1D8:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ca200
	if (ctx.cr6.eq) goto loc_820CA200;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// ori r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 1024;
	// bne cr6,0x820ca1fc
	if (!ctx.cr6.eq) goto loc_820CA1FC;
	// rlwinm r9,r10,0,22,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
loc_820CA1FC:
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_820CA200:
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
	ctx.lr = 0x820CA218;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ca1d8
	if (!ctx.cr6.eq) goto loc_820CA1D8;
loc_820CA220:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA228"))) PPC_WEAK_FUNC(sub_820CA228);
PPC_FUNC_IMPL(__imp__sub_820CA228) {
	PPC_FUNC_PROLOGUE();
	// b 0x820dde10
	sub_820DDE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA22C"))) PPC_WEAK_FUNC(sub_820CA22C);
PPC_FUNC_IMPL(__imp__sub_820CA22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA230"))) PPC_WEAK_FUNC(sub_820CA230);
PPC_FUNC_IMPL(__imp__sub_820CA230) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82227070
	sub_82227070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA238"))) PPC_WEAK_FUNC(sub_820CA238);
PPC_FUNC_IMPL(__imp__sub_820CA238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,25120
	ctx.r9.s64 = ctx.r11.s64 + 25120;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CA24C"))) PPC_WEAK_FUNC(sub_820CA24C);
PPC_FUNC_IMPL(__imp__sub_820CA24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA250"))) PPC_WEAK_FUNC(sub_820CA250);
PPC_FUNC_IMPL(__imp__sub_820CA250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,25120
	ctx.r9.s64 = ctx.r11.s64 + 25120;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CA264"))) PPC_WEAK_FUNC(sub_820CA264);
PPC_FUNC_IMPL(__imp__sub_820CA264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA268"))) PPC_WEAK_FUNC(sub_820CA268);
PPC_FUNC_IMPL(__imp__sub_820CA268) {
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
	ctx.lr = 0x820CA284;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca2bc
	if (ctx.cr6.eq) goto loc_820CA2BC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca2bc
	if (ctx.cr6.eq) goto loc_820CA2BC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca2c0
	if (ctx.cr6.eq) goto loc_820CA2C0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CA2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CA2C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CA2D0"))) PPC_WEAK_FUNC(sub_820CA2D0);
PPC_FUNC_IMPL(__imp__sub_820CA2D0) {
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
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CA2E8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ca2f4
	if (!ctx.cr6.eq) goto loc_820CA2F4;
	// bl 0x821b3000
	ctx.lr = 0x820CA2F4;
	sub_821B3000(ctx, base);
loc_820CA2F4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820ca30c
	if (!ctx.cr6.gt) goto loc_820CA30C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ca320
	if (!ctx.cr6.eq) goto loc_820CA320;
loc_820CA30C:
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
loc_820CA320:
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CA338"))) PPC_WEAK_FUNC(sub_820CA338);
PPC_FUNC_IMPL(__imp__sub_820CA338) {
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
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CA350;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ca35c
	if (!ctx.cr6.eq) goto loc_820CA35C;
	// bl 0x821b3000
	ctx.lr = 0x820CA35C;
	sub_821B3000(ctx, base);
loc_820CA35C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820ca374
	if (!ctx.cr6.gt) goto loc_820CA374;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ca388
	if (!ctx.cr6.eq) goto loc_820CA388;
loc_820CA374:
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
loc_820CA388:
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CA3A0"))) PPC_WEAK_FUNC(sub_820CA3A0);
PPC_FUNC_IMPL(__imp__sub_820CA3A0) {
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
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CA3B8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ca3c4
	if (!ctx.cr6.eq) goto loc_820CA3C4;
	// bl 0x821b3000
	ctx.lr = 0x820CA3C4;
	sub_821B3000(ctx, base);
loc_820CA3C4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820ca3dc
	if (!ctx.cr6.gt) goto loc_820CA3DC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ca3f0
	if (!ctx.cr6.eq) goto loc_820CA3F0;
loc_820CA3DC:
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
loc_820CA3F0:
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CA408"))) PPC_WEAK_FUNC(sub_820CA408);
PPC_FUNC_IMPL(__imp__sub_820CA408) {
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
	ctx.lr = 0x820CA424;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca450
	if (ctx.cr6.eq) goto loc_820CA450;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca450
	if (ctx.cr6.eq) goto loc_820CA450;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CA450:
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

__attribute__((alias("__imp__sub_820CA464"))) PPC_WEAK_FUNC(sub_820CA464);
PPC_FUNC_IMPL(__imp__sub_820CA464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA468"))) PPC_WEAK_FUNC(sub_820CA468);
PPC_FUNC_IMPL(__imp__sub_820CA468) {
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
	// bne cr6,0x820ca4a8
	if (!ctx.cr6.eq) goto loc_820CA4A8;
	// bl 0x820ddca8
	ctx.lr = 0x820CA490;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca4a0
	if (ctx.cr6.eq) goto loc_820CA4A0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820ca4c4
	goto loc_820CA4C4;
loc_820CA4A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ca4c4
	goto loc_820CA4C4;
loc_820CA4A8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ca4d4
	if (!ctx.cr6.eq) goto loc_820CA4D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ca520
	if (ctx.cr6.eq) goto loc_820CA520;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CA4C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ca4f0
	if (ctx.cr6.eq) goto loc_820CA4F0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820ca4f0
	goto loc_820CA4F0;
loc_820CA4D4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820ca520
	if (ctx.cr6.eq) goto loc_820CA520;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CA4F0;
	sub_820F3178(ctx, base);
loc_820CA4F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca520
	if (ctx.cr6.eq) goto loc_820CA520;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca520
	if (ctx.cr6.eq) goto loc_820CA520;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
loc_820CA520:
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

__attribute__((alias("__imp__sub_820CA538"))) PPC_WEAK_FUNC(sub_820CA538);
PPC_FUNC_IMPL(__imp__sub_820CA538) {
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
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820CA554;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ca560
	if (!ctx.cr6.eq) goto loc_820CA560;
	// bl 0x821b3000
	ctx.lr = 0x820CA560;
	sub_821B3000(ctx, base);
loc_820CA560:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x820ca5c0
	if (ctx.cr6.lt) goto loc_820CA5C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca5c0
	if (ctx.cr6.eq) goto loc_820CA5C0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820ca5c0
	if (ctx.cr6.eq) goto loc_820CA5C0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ca5a8
	if (!ctx.cr6.eq) goto loc_820CA5A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820CA5A4;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820CA5A8:
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
loc_820CA5C0:
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

__attribute__((alias("__imp__sub_820CA5D8"))) PPC_WEAK_FUNC(sub_820CA5D8);
PPC_FUNC_IMPL(__imp__sub_820CA5D8) {
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
	ctx.lr = 0x820CA5F0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca600
	if (ctx.cr6.eq) goto loc_820CA600;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820dbf20
	ctx.lr = 0x820CA600;
	sub_820DBF20(ctx, base);
loc_820CA600:
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

__attribute__((alias("__imp__sub_820CA614"))) PPC_WEAK_FUNC(sub_820CA614);
PPC_FUNC_IMPL(__imp__sub_820CA614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA618"))) PPC_WEAK_FUNC(sub_820CA618);
PPC_FUNC_IMPL(__imp__sub_820CA618) {
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
	ctx.lr = 0x820CA630;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca640
	if (ctx.cr6.eq) goto loc_820CA640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820dbff8
	ctx.lr = 0x820CA640;
	sub_820DBFF8(ctx, base);
loc_820CA640:
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

__attribute__((alias("__imp__sub_820CA654"))) PPC_WEAK_FUNC(sub_820CA654);
PPC_FUNC_IMPL(__imp__sub_820CA654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA658"))) PPC_WEAK_FUNC(sub_820CA658);
PPC_FUNC_IMPL(__imp__sub_820CA658) {
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
	ctx.lr = 0x820CA670;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca6cc
	if (ctx.cr6.eq) goto loc_820CA6CC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ca6cc
	if (ctx.cr6.eq) goto loc_820CA6CC;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca6cc
	if (ctx.cr6.eq) goto loc_820CA6CC;
loc_820CA694:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820ca6c0
	if (ctx.cr6.eq) goto loc_820CA6C0;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ca694
	if (!ctx.cr6.eq) goto loc_820CA694;
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
loc_820CA6C0:
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_820CA6CC:
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

__attribute__((alias("__imp__sub_820CA6E0"))) PPC_WEAK_FUNC(sub_820CA6E0);
PPC_FUNC_IMPL(__imp__sub_820CA6E0) {
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
	ctx.lr = 0x820CA6F8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ca754
	if (ctx.cr6.eq) goto loc_820CA754;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ca754
	if (ctx.cr6.eq) goto loc_820CA754;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca754
	if (ctx.cr6.eq) goto loc_820CA754;
loc_820CA71C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820ca748
	if (ctx.cr6.eq) goto loc_820CA748;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ca71c
	if (!ctx.cr6.eq) goto loc_820CA71C;
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
loc_820CA748:
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
loc_820CA754:
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

__attribute__((alias("__imp__sub_820CA768"))) PPC_WEAK_FUNC(sub_820CA768);
PPC_FUNC_IMPL(__imp__sub_820CA768) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820CA770;
	__savegprlr_14(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-23960
	ctx.r11.s64 = ctx.r11.s64 + -23960;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
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
	// addi r10,r10,-27520
	ctx.r10.s64 = ctx.r10.s64 + -27520;
	// addi r9,r9,-26488
	ctx.r9.s64 = ctx.r9.s64 + -26488;
	// addi r8,r8,-26224
	ctx.r8.s64 = ctx.r8.s64 + -26224;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r7,r7,-26016
	ctx.r7.s64 = ctx.r7.s64 + -26016;
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// addi r6,r6,-25768
	ctx.r6.s64 = ctx.r6.s64 + -25768;
	// addi r5,r5,-25248
	ctx.r5.s64 = ctx.r5.s64 + -25248;
	// stw r7,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r7.u32);
	// addi r4,r4,-25616
	ctx.r4.s64 = ctx.r4.s64 + -25616;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r11,r31,-25040
	ctx.r11.s64 = ctx.r31.s64 + -25040;
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
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
	// addi r10,r30,-24744
	ctx.r10.s64 = ctx.r30.s64 + -24744;
	// addi r9,r29,-24280
	ctx.r9.s64 = ctx.r29.s64 + -24280;
	// addi r8,r28,-24152
	ctx.r8.s64 = ctx.r28.s64 + -24152;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// addi r7,r27,-26880
	ctx.r7.s64 = ctx.r27.s64 + -26880;
	// addi r6,r26,-26800
	ctx.r6.s64 = ctx.r26.s64 + -26800;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-26728
	ctx.r5.s64 = ctx.r25.s64 + -26728;
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// addi r4,r24,-26616
	ctx.r4.s64 = ctx.r24.s64 + -26616;
	// stw r6,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r6.u32);
	// addi r11,r23,-23080
	ctx.r11.s64 = ctx.r23.s64 + -23080;
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// addi r10,r22,-23016
	ctx.r10.s64 = ctx.r22.s64 + -23016;
	// addi r9,r21,-22952
	ctx.r9.s64 = ctx.r21.s64 + -22952;
	// addi r8,r20,-22816
	ctx.r8.s64 = ctx.r20.s64 + -22816;
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-24024
	ctx.r7.s64 = ctx.r19.s64 + -24024;
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// addi r6,r18,-27368
	ctx.r6.s64 = ctx.r18.s64 + -27368;
	// stw r8,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r8.u32);
	// addi r5,r17,-27272
	ctx.r5.s64 = ctx.r17.s64 + -27272;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r4,r16,-26976
	ctx.r4.s64 = ctx.r16.s64 + -26976;
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// addi r11,r15,-24480
	ctx.r11.s64 = ctx.r15.s64 + -24480;
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// addi r9,r10,-24016
	ctx.r9.s64 = ctx.r10.s64 + -24016;
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// addi r8,r14,-23752
	ctx.r8.s64 = ctx.r14.s64 + -23752;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r8.u32);
	// addi r7,r7,-23648
	ctx.r7.s64 = ctx.r7.s64 + -23648;
	// addi r6,r6,-23856
	ctx.r6.s64 = ctx.r6.s64 + -23856;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// addi r5,r5,-23544
	ctx.r5.s64 = ctx.r5.s64 + -23544;
	// addi r4,r4,-23448
	ctx.r4.s64 = ctx.r4.s64 + -23448;
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// addi r10,r10,-24008
	ctx.r10.s64 = ctx.r10.s64 + -24008;
	// stw r4,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// addi r9,r9,-23984
	ctx.r9.s64 = ctx.r9.s64 + -23984;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// addi r8,r8,-25496
	ctx.r8.s64 = ctx.r8.s64 + -25496;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// addi r7,r31,-25384
	ctx.r7.s64 = ctx.r31.s64 + -25384;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// addi r6,r30,-23240
	ctx.r6.s64 = ctx.r30.s64 + -23240;
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// stw r6,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA938"))) PPC_WEAK_FUNC(sub_820CA938);
PPC_FUNC_IMPL(__imp__sub_820CA938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ca954
	if (!ctx.cr6.eq) goto loc_820CA954;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_820CA954:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820ca960
	if (!ctx.cr6.eq) goto loc_820CA960;
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
loc_820CA960:
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820ca978
	if (!ctx.cr6.eq) goto loc_820CA978;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// blr 
	return;
loc_820CA978:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CA98C"))) PPC_WEAK_FUNC(sub_820CA98C);
PPC_FUNC_IMPL(__imp__sub_820CA98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA990"))) PPC_WEAK_FUNC(sub_820CA990);
PPC_FUNC_IMPL(__imp__sub_820CA990) {
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
	ctx.lr = 0x820CA9B4;
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
	ctx.lr = 0x820CA9CC;
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
	ctx.lr = 0x820CA9E4;
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
	ctx.lr = 0x820CA9FC;
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
	ctx.lr = 0x820CAA14;
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
	ctx.lr = 0x820CAA2C;
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
	ctx.lr = 0x820CAA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820CAA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CAA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820CAA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820CAAA4;
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
	ctx.lr = 0x820CAABC;
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
	ctx.lr = 0x820CAAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820CAAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820CAB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820CAB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CAB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820CAB4C;
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
	ctx.lr = 0x820CAB64;
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
	ctx.lr = 0x820CAB7C;
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
	ctx.lr = 0x820CAB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820CABAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820CABC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820CABDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CABF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820CAC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820CAC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820CAC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CAC54;
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
	ctx.lr = 0x820CAC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820CAC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820CAC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CACB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820CACCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820CACE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820CACFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CAD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820CAD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820CAD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820CAD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CAD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820CAD8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_820CADA4"))) PPC_WEAK_FUNC(sub_820CADA4);
PPC_FUNC_IMPL(__imp__sub_820CADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CADA8"))) PPC_WEAK_FUNC(sub_820CADA8);
PPC_FUNC_IMPL(__imp__sub_820CADA8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// li r8,168
	ctx.r8.s64 = 168;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// cmplwi cr6,r5,168
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 168, ctx.xer);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stb r6,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r6.u8);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// beq cr6,0x820cae20
	if (ctx.cr6.eq) goto loc_820CAE20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e4e0
	ctx.lr = 0x820CAE1C;
	sub_8233E4E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_820CAE20:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// bge cr6,0x820cae50
	if (!ctx.cr6.lt) goto loc_820CAE50;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cae50
	if (ctx.cr6.eq) goto loc_820CAE50;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820cae50
	if (ctx.cr6.eq) goto loc_820CAE50;
	// bl 0x82083d80
	ctx.lr = 0x820CAE4C;
	sub_82083D80(ctx, base);
	// b 0x820cae54
	goto loc_820CAE54;
loc_820CAE50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820CAE54:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CAE6C"))) PPC_WEAK_FUNC(sub_820CAE6C);
PPC_FUNC_IMPL(__imp__sub_820CAE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CAE70"))) PPC_WEAK_FUNC(sub_820CAE70);
PPC_FUNC_IMPL(__imp__sub_820CAE70) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,168
	ctx.r8.s64 = 168;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f0,424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// cmplwi cr6,r5,168
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 168, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stb r6,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r6.u8);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bne cr6,0x820caeec
	if (!ctx.cr6.eq) goto loc_820CAEEC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x820caef8
	goto loc_820CAEF8;
loc_820CAEEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e4e0
	ctx.lr = 0x820CAEF4;
	sub_8233E4E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_820CAEF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cb568
	ctx.lr = 0x820CAF04;
	sub_820CB568(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CAF1C"))) PPC_WEAK_FUNC(sub_820CAF1C);
PPC_FUNC_IMPL(__imp__sub_820CAF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CAF20"))) PPC_WEAK_FUNC(sub_820CAF20);
PPC_FUNC_IMPL(__imp__sub_820CAF20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r9,r10,0,19,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FE0;
	// rlwinm r9,r9,0,26,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF03F;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r9,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r9.u32);
	// lwz r8,508(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r7,r8,0,20,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CAF88"))) PPC_WEAK_FUNC(sub_820CAF88);
PPC_FUNC_IMPL(__imp__sub_820CAF88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r9,r10,0,19,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FE0;
	// rlwinm r9,r9,0,26,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF03F;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r9,r10,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r9,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r9.u32);
	// lwz r8,508(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r7,r8,0,18,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FC0;
	// rlwinm r7,r7,0,25,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFE07F;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// stw r9,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CAFF4"))) PPC_WEAK_FUNC(sub_820CAFF4);
PPC_FUNC_IMPL(__imp__sub_820CAFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CAFF8"))) PPC_WEAK_FUNC(sub_820CAFF8);
PPC_FUNC_IMPL(__imp__sub_820CAFF8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82085598
	sub_82085598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB028"))) PPC_WEAK_FUNC(sub_820CB028);
PPC_FUNC_IMPL(__imp__sub_820CB028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB02C"))) PPC_WEAK_FUNC(sub_820CB02C);
PPC_FUNC_IMPL(__imp__sub_820CB02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB030"))) PPC_WEAK_FUNC(sub_820CB030);
PPC_FUNC_IMPL(__imp__sub_820CB030) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// b 0x82085598
	sub_82085598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB06C"))) PPC_WEAK_FUNC(sub_820CB06C);
PPC_FUNC_IMPL(__imp__sub_820CB06C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB070"))) PPC_WEAK_FUNC(sub_820CB070);
PPC_FUNC_IMPL(__imp__sub_820CB070) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x820cb0a4
	if (!ctx.cr6.lt) goto loc_820CB0A4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cb0a4
	if (ctx.cr6.eq) goto loc_820CB0A4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cb0a4
	if (ctx.cr6.eq) goto loc_820CB0A4;
	// lwz r11,508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
loc_820CB0A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB0AC"))) PPC_WEAK_FUNC(sub_820CB0AC);
PPC_FUNC_IMPL(__imp__sub_820CB0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB0B0"))) PPC_WEAK_FUNC(sub_820CB0B0);
PPC_FUNC_IMPL(__imp__sub_820CB0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x820cb0ec
	if (!ctx.cr6.lt) goto loc_820CB0EC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cb0ec
	if (ctx.cr6.eq) goto loc_820CB0EC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cb0ec
	if (ctx.cr6.eq) goto loc_820CB0EC;
	// lwz r11,508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r10,r11,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6000;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_820CB0EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB0F4"))) PPC_WEAK_FUNC(sub_820CB0F4);
PPC_FUNC_IMPL(__imp__sub_820CB0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB0F8"))) PPC_WEAK_FUNC(sub_820CB0F8);
PPC_FUNC_IMPL(__imp__sub_820CB0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CB100;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// li r8,168
	ctx.r8.s64 = 168;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// cmplwi cr6,r5,168
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 168, ctx.xer);
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// stb r6,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r6.u8);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// beq cr6,0x820cb168
	if (ctx.cr6.eq) goto loc_820CB168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e4e0
	ctx.lr = 0x820CB164;
	sub_8233E4E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_820CB168:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// bge cr6,0x820cb1b8
	if (!ctx.cr6.lt) goto loc_820CB1B8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cb1b8
	if (ctx.cr6.eq) goto loc_820CB1B8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820cb1b8
	if (ctx.cr6.eq) goto loc_820CB1B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82083d80
	ctx.lr = 0x820CB198;
	sub_82083D80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cb1bc
	if (ctx.cr6.eq) goto loc_820CB1BC;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820CB1B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820CB1BC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB1C4"))) PPC_WEAK_FUNC(sub_820CB1C4);
PPC_FUNC_IMPL(__imp__sub_820CB1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB1C8"))) PPC_WEAK_FUNC(sub_820CB1C8);
PPC_FUNC_IMPL(__imp__sub_820CB1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820cb498
	sub_820CB498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB1CC"))) PPC_WEAK_FUNC(sub_820CB1CC);
PPC_FUNC_IMPL(__imp__sub_820CB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB1D0"))) PPC_WEAK_FUNC(sub_820CB1D0);
PPC_FUNC_IMPL(__imp__sub_820CB1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,26328(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820CB1F4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cb22c
	if (ctx.cr6.eq) goto loc_820CB22C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x820cb1f4
	if (ctx.cr6.lt) goto loc_820CB1F4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820CB214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820CB22C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,648
	ctx.r3.s64 = 648;
	// bl 0x82082030
	ctx.lr = 0x820CB240;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cb264
	if (ctx.cr6.eq) goto loc_820CB264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82083a10
	ctx.lr = 0x820CB250;
	sub_82083A10(ctx, base);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x820cb214
	goto loc_820CB214;
loc_820CB264:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// b 0x820cb214
	goto loc_820CB214;
}

__attribute__((alias("__imp__sub_820CB278"))) PPC_WEAK_FUNC(sub_820CB278);
PPC_FUNC_IMPL(__imp__sub_820CB278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// b 0x82086510
	sub_82086510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB288"))) PPC_WEAK_FUNC(sub_820CB288);
PPC_FUNC_IMPL(__imp__sub_820CB288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x820cb2b8
	if (!ctx.cr6.lt) goto loc_820CB2B8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cb2b8
	if (ctx.cr6.eq) goto loc_820CB2B8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cb2b8
	if (ctx.cr6.eq) goto loc_820CB2B8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82083910
	sub_82083910(ctx, base);
	return;
loc_820CB2B8:
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

__attribute__((alias("__imp__sub_820CB2C8"))) PPC_WEAK_FUNC(sub_820CB2C8);
PPC_FUNC_IMPL(__imp__sub_820CB2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x820cb2f8
	if (!ctx.cr6.lt) goto loc_820CB2F8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cb2f8
	if (ctx.cr6.eq) goto loc_820CB2F8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cb2f8
	if (ctx.cr6.eq) goto loc_820CB2F8;
	// lfs f1,536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820CB2F8:
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

__attribute__((alias("__imp__sub_820CB308"))) PPC_WEAK_FUNC(sub_820CB308);
PPC_FUNC_IMPL(__imp__sub_820CB308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x820cb36c
	if (!ctx.cr6.lt) goto loc_820CB36C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cb36c
	if (ctx.cr6.eq) goto loc_820CB36C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cb36c
	if (ctx.cr6.eq) goto loc_820CB36C;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cb36c
	if (ctx.cr6.eq) goto loc_820CB36C;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
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
loc_820CB36C:
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

__attribute__((alias("__imp__sub_820CB37C"))) PPC_WEAK_FUNC(sub_820CB37C);
PPC_FUNC_IMPL(__imp__sub_820CB37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB380"))) PPC_WEAK_FUNC(sub_820CB380);
PPC_FUNC_IMPL(__imp__sub_820CB380) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26328);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820837c8
	sub_820837C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB39C"))) PPC_WEAK_FUNC(sub_820CB39C);
PPC_FUNC_IMPL(__imp__sub_820CB39C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB3A0"))) PPC_WEAK_FUNC(sub_820CB3A0);
PPC_FUNC_IMPL(__imp__sub_820CB3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26328);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82083850
	sub_82083850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB3BC"))) PPC_WEAK_FUNC(sub_820CB3BC);
PPC_FUNC_IMPL(__imp__sub_820CB3BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB3C0"))) PPC_WEAK_FUNC(sub_820CB3C0);
PPC_FUNC_IMPL(__imp__sub_820CB3C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x820CB3C8;
	__savegprlr_23(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-21080
	ctx.r11.s64 = ctx.r11.s64 + -21080;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
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
	// addi r10,r10,-20704
	ctx.r10.s64 = ctx.r10.s64 + -20704;
	// addi r9,r9,-20600
	ctx.r9.s64 = ctx.r9.s64 + -20600;
	// addi r8,r8,-20488
	ctx.r8.s64 = ctx.r8.s64 + -20488;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r7,-20432
	ctx.r7.s64 = ctx.r7.s64 + -20432;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r6,r6,-20880
	ctx.r6.s64 = ctx.r6.s64 + -20880;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r5,r5,-20368
	ctx.r5.s64 = ctx.r5.s64 + -20368;
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// addi r4,r4,-20304
	ctx.r4.s64 = ctx.r4.s64 + -20304;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// addi r11,r31,-20232
	ctx.r11.s64 = ctx.r31.s64 + -20232;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
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
	// addi r10,r30,-20024
	ctx.r10.s64 = ctx.r30.s64 + -20024;
	// addi r9,r29,-20016
	ctx.r9.s64 = ctx.r29.s64 + -20016;
	// addi r8,r28,-19848
	ctx.r8.s64 = ctx.r28.s64 + -19848;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// addi r7,r27,-19832
	ctx.r7.s64 = ctx.r27.s64 + -19832;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// addi r6,r26,-19768
	ctx.r6.s64 = ctx.r26.s64 + -19768;
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// addi r5,r25,-19704
	ctx.r5.s64 = ctx.r25.s64 + -19704;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r4,r24,-19584
	ctx.r4.s64 = ctx.r24.s64 + -19584;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// addi r11,r23,-19552
	ctx.r11.s64 = ctx.r23.s64 + -19552;
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB498"))) PPC_WEAK_FUNC(sub_820CB498);
PPC_FUNC_IMPL(__imp__sub_820CB498) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// bge cr6,0x820cb54c
	if (!ctx.cr6.lt) goto loc_820CB54C;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cb54c
	if (ctx.cr6.eq) goto loc_820CB54C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cb54c
	if (ctx.cr6.eq) goto loc_820CB54C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x820cb534
	if (ctx.cr6.eq) goto loc_820CB534;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cb4f8
	if (ctx.cr6.eq) goto loc_820CB4F8;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
	// bl 0x82315c08
	ctx.lr = 0x820CB4F4;
	sub_82315C08(ctx, base);
	// b 0x820cb4fc
	goto loc_820CB4FC;
loc_820CB4F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CB4FC:
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,20,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0;
	// rlwinm r8,r8,0,27,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
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
loc_820CB534:
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
loc_820CB54C:
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

__attribute__((alias("__imp__sub_820CB564"))) PPC_WEAK_FUNC(sub_820CB564);
PPC_FUNC_IMPL(__imp__sub_820CB564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB568"))) PPC_WEAK_FUNC(sub_820CB568);
PPC_FUNC_IMPL(__imp__sub_820CB568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CB570;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// lwz r11,26328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26328);
	// bge cr6,0x820cb650
	if (!ctx.cr6.lt) goto loc_820CB650;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cb650
	if (ctx.cr6.eq) goto loc_820CB650;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cb650
	if (ctx.cr6.eq) goto loc_820CB650;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820cb618
	if (ctx.cr6.eq) goto loc_820CB618;
	// addi r29,r31,616
	ctx.r29.s64 = ctx.r31.s64 + 616;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x820CB5D0;
	sub_823052D8(ctx, base);
	// lwz r30,636(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820cb610
	if (ctx.cr6.eq) goto loc_820CB610;
loc_820CB5DC:
	// lwz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// addi r11,r30,508
	ctx.r11.s64 = ctx.r30.s64 + 508;
	// lwz r8,644(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820cb608
	if (!ctx.cr6.eq) goto loc_820CB608;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8208fe20
	ctx.lr = 0x820CB608;
	sub_8208FE20(ctx, base);
loc_820CB608:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820cb5dc
	if (!ctx.cr6.eq) goto loc_820CB5DC;
loc_820CB610:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x820CB618;
	sub_823051A8(ctx, base);
loc_820CB618:
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// bl 0x82083bb0
	ctx.lr = 0x820CB630;
	sub_82083BB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
	// bl 0x82083cd8
	ctx.lr = 0x820CB648;
	sub_82083CD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820CB650:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB65C"))) PPC_WEAK_FUNC(sub_820CB65C);
PPC_FUNC_IMPL(__imp__sub_820CB65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB660"))) PPC_WEAK_FUNC(sub_820CB660);
PPC_FUNC_IMPL(__imp__sub_820CB660) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820cb670
	if (!ctx.cr6.eq) goto loc_820CB670;
loc_820CB668:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820CB670:
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cb668
	if (!ctx.cr6.lt) goto loc_820CB668;
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
	// beq cr6,0x820cb668
	if (ctx.cr6.eq) goto loc_820CB668;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820cb668
	if (!ctx.cr6.lt) goto loc_820CB668;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cb668
	if (ctx.cr6.eq) goto loc_820CB668;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// b 0x82108b08
	sub_82108B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB6D0"))) PPC_WEAK_FUNC(sub_820CB6D0);
PPC_FUNC_IMPL(__imp__sub_820CB6D0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cb728
	if (!ctx.cr6.lt) goto loc_820CB728;
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
	// beq cr6,0x820cb728
	if (ctx.cr6.eq) goto loc_820CB728;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820cb728
	if (!ctx.cr6.lt) goto loc_820CB728;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cb730
	if (!ctx.cr6.eq) goto loc_820CB730;
loc_820CB728:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CB730:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820cb728
	if (!ctx.cr6.lt) goto loc_820CB728;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB750"))) PPC_WEAK_FUNC(sub_820CB750);
PPC_FUNC_IMPL(__imp__sub_820CB750) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cb7a8
	if (!ctx.cr6.lt) goto loc_820CB7A8;
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
	// beq cr6,0x820cb7a8
	if (ctx.cr6.eq) goto loc_820CB7A8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820cb7a8
	if (!ctx.cr6.lt) goto loc_820CB7A8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cb7b0
	if (!ctx.cr6.eq) goto loc_820CB7B0;
loc_820CB7A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CB7B0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820cb7a8
	if (!ctx.cr6.lt) goto loc_820CB7A8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB7D0"))) PPC_WEAK_FUNC(sub_820CB7D0);
PPC_FUNC_IMPL(__imp__sub_820CB7D0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cb828
	if (!ctx.cr6.lt) goto loc_820CB828;
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
	// beq cr6,0x820cb828
	if (ctx.cr6.eq) goto loc_820CB828;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820cb828
	if (!ctx.cr6.lt) goto loc_820CB828;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cb830
	if (!ctx.cr6.eq) goto loc_820CB830;
loc_820CB828:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CB830:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820cb828
	if (!ctx.cr6.lt) goto loc_820CB828;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x820cb858
	if (ctx.cr6.eq) goto loc_820CB858;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_820CB858:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB864"))) PPC_WEAK_FUNC(sub_820CB864);
PPC_FUNC_IMPL(__imp__sub_820CB864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB868"))) PPC_WEAK_FUNC(sub_820CB868);
PPC_FUNC_IMPL(__imp__sub_820CB868) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cb8c0
	if (!ctx.cr6.lt) goto loc_820CB8C0;
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
	// beq cr6,0x820cb8c0
	if (ctx.cr6.eq) goto loc_820CB8C0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820cb8c0
	if (!ctx.cr6.lt) goto loc_820CB8C0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cb8c8
	if (!ctx.cr6.eq) goto loc_820CB8C8;
loc_820CB8C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CB8C8:
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x82108b08
	sub_82108B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB8D0"))) PPC_WEAK_FUNC(sub_820CB8D0);
PPC_FUNC_IMPL(__imp__sub_820CB8D0) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cb934
	if (!ctx.cr6.lt) goto loc_820CB934;
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
	// beq cr6,0x820cb934
	if (ctx.cr6.eq) goto loc_820CB934;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820cb934
	if (!ctx.cr6.lt) goto loc_820CB934;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cb948
	if (!ctx.cr6.eq) goto loc_820CB948;
loc_820CB934:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CB948:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82223f90
	ctx.lr = 0x820CB99C;
	sub_82223F90(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB9B0"))) PPC_WEAK_FUNC(sub_820CB9B0);
PPC_FUNC_IMPL(__imp__sub_820CB9B0) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cba14
	if (!ctx.cr6.lt) goto loc_820CBA14;
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
	// beq cr6,0x820cba14
	if (ctx.cr6.eq) goto loc_820CBA14;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820cba14
	if (!ctx.cr6.lt) goto loc_820CBA14;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cba28
	if (!ctx.cr6.eq) goto loc_820CBA28;
loc_820CBA14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CBA28:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82223f90
	ctx.lr = 0x820CBA80;
	sub_82223F90(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CBA94"))) PPC_WEAK_FUNC(sub_820CBA94);
PPC_FUNC_IMPL(__imp__sub_820CBA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBA98"))) PPC_WEAK_FUNC(sub_820CBA98);
PPC_FUNC_IMPL(__imp__sub_820CBA98) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cbb00
	if (!ctx.cr6.lt) goto loc_820CBB00;
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
	// beq cr6,0x820cbb00
	if (ctx.cr6.eq) goto loc_820CBB00;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820cbb00
	if (!ctx.cr6.lt) goto loc_820CBB00;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cbb14
	if (!ctx.cr6.eq) goto loc_820CBB14;
loc_820CBB00:
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
loc_820CBB14:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// bl 0x82224108
	ctx.lr = 0x820CBB20;
	sub_82224108(ctx, base);
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

__attribute__((alias("__imp__sub_820CBB34"))) PPC_WEAK_FUNC(sub_820CBB34);
PPC_FUNC_IMPL(__imp__sub_820CBB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBB38"))) PPC_WEAK_FUNC(sub_820CBB38);
PPC_FUNC_IMPL(__imp__sub_820CBB38) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820cbba0
	if (!ctx.cr6.lt) goto loc_820CBBA0;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cbba0
	if (ctx.cr6.eq) goto loc_820CBBA0;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x820cbba0
	if (!ctx.cr6.lt) goto loc_820CBBA0;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cbbb8
	if (!ctx.cr6.eq) goto loc_820CBBB8;
loc_820CBBA0:
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
loc_820CBBB8:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
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
	// bl 0x82223e00
	ctx.lr = 0x820CBBF0;
	sub_82223E00(ctx, base);
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

__attribute__((alias("__imp__sub_820CBC04"))) PPC_WEAK_FUNC(sub_820CBC04);
PPC_FUNC_IMPL(__imp__sub_820CBC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBC08"))) PPC_WEAK_FUNC(sub_820CBC08);
PPC_FUNC_IMPL(__imp__sub_820CBC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820CBC10;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r8,r8,-32440
	ctx.r8.s64 = ctx.r8.s64 + -32440;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f8,f12,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r4,-15668
	ctx.r11.s64 = ctx.r4.s64 + -15668;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x820cbe70
	ctx.lr = 0x820CBCE8;
	sub_820CBE70(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CBD04"))) PPC_WEAK_FUNC(sub_820CBD04);
PPC_FUNC_IMPL(__imp__sub_820CBD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBD08"))) PPC_WEAK_FUNC(sub_820CBD08);
PPC_FUNC_IMPL(__imp__sub_820CBD08) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r7,r8,31376
	ctx.r7.s64 = ctx.r8.s64 + 31376;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x821e1c98
	ctx.lr = 0x820CBD48;
	sub_821E1C98(ctx, base);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f0,36(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r6,-32432
	ctx.r3.s64 = ctx.r6.s64 + -32432;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r11,r11,-15668
	ctx.r11.s64 = ctx.r11.s64 + -15668;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x820cbe70
	ctx.lr = 0x820CBD90;
	sub_820CBE70(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CBDBC"))) PPC_WEAK_FUNC(sub_820CBDBC);
PPC_FUNC_IMPL(__imp__sub_820CBDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBDC0"))) PPC_WEAK_FUNC(sub_820CBDC0);
PPC_FUNC_IMPL(__imp__sub_820CBDC0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 | ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CBDD0"))) PPC_WEAK_FUNC(sub_820CBDD0);
PPC_FUNC_IMPL(__imp__sub_820CBDD0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820CBDD8;
	__savegprlr_28(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r11,r11,-18848
	ctx.r11.s64 = ctx.r11.s64 + -18848;
	// addi r10,r10,-18480
	ctx.r10.s64 = ctx.r10.s64 + -18480;
	// addi r9,r9,-18328
	ctx.r9.s64 = ctx.r9.s64 + -18328;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,-16960
	ctx.r8.s64 = ctx.r8.s64 + -16960;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
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
	// addi r7,r7,-18224
	ctx.r7.s64 = ctx.r7.s64 + -18224;
	// addi r6,r6,-18000
	ctx.r6.s64 = ctx.r6.s64 + -18000;
	// addi r5,r5,-17768
	ctx.r5.s64 = ctx.r5.s64 + -17768;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r4,r4,-17608
	ctx.r4.s64 = ctx.r4.s64 + -17608;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// addi r11,r31,-17400
	ctx.r11.s64 = ctx.r31.s64 + -17400;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r30,-17144
	ctx.r10.s64 = ctx.r30.s64 + -17144;
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// addi r9,r29,-18736
	ctx.r9.s64 = ctx.r29.s64 + -18736;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// addi r8,r28,-18608
	ctx.r8.s64 = ctx.r28.s64 + -18608;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CBE6C"))) PPC_WEAK_FUNC(sub_820CBE6C);
PPC_FUNC_IMPL(__imp__sub_820CBE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBE70"))) PPC_WEAK_FUNC(sub_820CBE70);
PPC_FUNC_IMPL(__imp__sub_820CBE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CBE78;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cbfbc
	if (ctx.cr6.eq) goto loc_820CBFBC;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cbeb4
	if (ctx.cr6.eq) goto loc_820CBEB4;
loc_820CBEA4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820cbeb8
	goto loc_820CBEB8;
loc_820CBEB4:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_820CBEB8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cbecc
	if (ctx.cr6.eq) goto loc_820CBECC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_820CBECC:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820cbf30
	if (ctx.cr6.gt) goto loc_820CBF30;
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820cbf30
	if (ctx.cr6.lt) goto loc_820CBF30;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820cbf30
	if (ctx.cr6.gt) goto loc_820CBF30;
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820cbf30
	if (ctx.cr6.lt) goto loc_820CBF30;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820cbf30
	if (ctx.cr6.gt) goto loc_820CBF30;
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820cbf34
	if (!ctx.cr6.lt) goto loc_820CBF34;
loc_820CBF30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820CBF34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cbfb4
	if (ctx.cr6.eq) goto loc_820CBFB4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cbf94
	if (ctx.cr6.eq) goto loc_820CBF94;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// bge cr6,0x820cbfb4
	if (!ctx.cr6.lt) goto loc_820CBFB4;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r7,1
	ctx.r31.s64 = ctx.r7.s64 + 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// bge cr6,0x820cbfb4
	if (!ctx.cr6.lt) goto loc_820CBFB4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x820cbfb4
	goto loc_820CBFB4;
loc_820CBF94:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CBFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820cbfbc
	if (ctx.cr6.eq) goto loc_820CBFBC;
loc_820CBFB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cbea4
	if (!ctx.cr6.eq) goto loc_820CBEA4;
loc_820CBFBC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CBFC4"))) PPC_WEAK_FUNC(sub_820CBFC4);
PPC_FUNC_IMPL(__imp__sub_820CBFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBFC8"))) PPC_WEAK_FUNC(sub_820CBFC8);
PPC_FUNC_IMPL(__imp__sub_820CBFC8) {
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
	// addi r9,r11,-24680
	ctx.r9.s64 = ctx.r11.s64 + -24680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820cc000
	if (ctx.cr6.eq) goto loc_820CC000;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// lwz r3,-8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820CC000;
	sub_82080000(ctx, base);
loc_820CC000:
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

__attribute__((alias("__imp__sub_820CC018"))) PPC_WEAK_FUNC(sub_820CC018);
PPC_FUNC_IMPL(__imp__sub_820CC018) {
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
	// bne cr6,0x820cc058
	if (!ctx.cr6.eq) goto loc_820CC058;
	// bl 0x820ddca8
	ctx.lr = 0x820CC040;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc050
	if (ctx.cr6.eq) goto loc_820CC050;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cc074
	goto loc_820CC074;
loc_820CC050:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cc074
	goto loc_820CC074;
loc_820CC058:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cc084
	if (!ctx.cr6.eq) goto loc_820CC084;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cc0b8
	if (ctx.cr6.eq) goto loc_820CC0B8;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CC074:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cc0a0
	if (ctx.cr6.eq) goto loc_820CC0A0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cc0a0
	goto loc_820CC0A0;
loc_820CC084:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cc0b8
	if (ctx.cr6.eq) goto loc_820CC0B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CC0A0;
	sub_820F3178(ctx, base);
loc_820CC0A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc0b8
	if (ctx.cr6.eq) goto loc_820CC0B8;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r10,-20656
	ctx.r9.s64 = ctx.r10.s64 + -20656;
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
loc_820CC0B8:
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

__attribute__((alias("__imp__sub_820CC0CC"))) PPC_WEAK_FUNC(sub_820CC0CC);
PPC_FUNC_IMPL(__imp__sub_820CC0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC0D0"))) PPC_WEAK_FUNC(sub_820CC0D0);
PPC_FUNC_IMPL(__imp__sub_820CC0D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cc118
	if (!ctx.cr6.eq) goto loc_820CC118;
	// bl 0x820ddca8
	ctx.lr = 0x820CC100;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc110
	if (ctx.cr6.eq) goto loc_820CC110;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cc134
	goto loc_820CC134;
loc_820CC110:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820cc134
	goto loc_820CC134;
loc_820CC118:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cc144
	if (!ctx.cr6.eq) goto loc_820CC144;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cc168
	if (ctx.cr6.eq) goto loc_820CC168;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CC134:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cc160
	if (ctx.cr6.eq) goto loc_820CC160;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cc160
	goto loc_820CC160;
loc_820CC144:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cc168
	if (ctx.cr6.eq) goto loc_820CC168;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CC160;
	sub_820F3178(ctx, base);
loc_820CC160:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cc170
	if (!ctx.cr6.eq) goto loc_820CC170;
loc_820CC168:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cc19c
	goto loc_820CC19C;
loc_820CC170:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc168
	if (ctx.cr6.eq) goto loc_820CC168;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,98
	ctx.r4.s64 = 98;
	// bl 0x820daea8
	ctx.lr = 0x820CC198;
	sub_820DAEA8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820CC19C:
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

__attribute__((alias("__imp__sub_820CC1B4"))) PPC_WEAK_FUNC(sub_820CC1B4);
PPC_FUNC_IMPL(__imp__sub_820CC1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC1B8"))) PPC_WEAK_FUNC(sub_820CC1B8);
PPC_FUNC_IMPL(__imp__sub_820CC1B8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cc200
	if (!ctx.cr6.eq) goto loc_820CC200;
	// bl 0x820ddca8
	ctx.lr = 0x820CC1E8;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc1f8
	if (ctx.cr6.eq) goto loc_820CC1F8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cc21c
	goto loc_820CC21C;
loc_820CC1F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820cc21c
	goto loc_820CC21C;
loc_820CC200:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cc22c
	if (!ctx.cr6.eq) goto loc_820CC22C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cc250
	if (ctx.cr6.eq) goto loc_820CC250;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CC21C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cc248
	if (ctx.cr6.eq) goto loc_820CC248;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cc248
	goto loc_820CC248;
loc_820CC22C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cc250
	if (ctx.cr6.eq) goto loc_820CC250;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CC248;
	sub_820F3178(ctx, base);
loc_820CC248:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cc258
	if (!ctx.cr6.eq) goto loc_820CC258;
loc_820CC250:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cc284
	goto loc_820CC284;
loc_820CC258:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc250
	if (ctx.cr6.eq) goto loc_820CC250;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,98
	ctx.r4.s64 = 98;
	// bl 0x820daea8
	ctx.lr = 0x820CC280;
	sub_820DAEA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_820CC284:
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

__attribute__((alias("__imp__sub_820CC29C"))) PPC_WEAK_FUNC(sub_820CC29C);
PPC_FUNC_IMPL(__imp__sub_820CC29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC2A0"))) PPC_WEAK_FUNC(sub_820CC2A0);
PPC_FUNC_IMPL(__imp__sub_820CC2A0) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x821c5510
	ctx.lr = 0x820CC2C4;
	sub_821C5510(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cc30c
	if (ctx.cr6.eq) goto loc_820CC30C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc30c
	if (ctx.cr6.eq) goto loc_820CC30C;
	// bl 0x8234eac8
	ctx.lr = 0x820CC2E4;
	sub_8234EAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235cf78
	ctx.lr = 0x820CC2F0;
	sub_8235CF78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CC304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x820CC30C;
	sub_821C0630(ctx, base);
loc_820CC30C:
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

__attribute__((alias("__imp__sub_820CC320"))) PPC_WEAK_FUNC(sub_820CC320);
PPC_FUNC_IMPL(__imp__sub_820CC320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cc388
	if (ctx.cr6.eq) goto loc_820CC388;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8236a338
	ctx.lr = 0x820CC348;
	sub_8236A338(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-20656
	ctx.r30.s64 = ctx.r11.s64 + -20656;
	// beq cr6,0x820cc3c0
	if (ctx.cr6.eq) goto loc_820CC3C0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82350188
	ctx.lr = 0x820CC364;
	sub_82350188(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-25396
	ctx.r9.s64 = ctx.r10.s64 + -25396;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x820cc3c4
	goto loc_820CC3C4;
loc_820CC388:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8236a338
	ctx.lr = 0x820CC390;
	sub_8236A338(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-20656
	ctx.r30.s64 = ctx.r11.s64 + -20656;
	// beq cr6,0x820cc3c0
	if (ctx.cr6.eq) goto loc_820CC3C0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82350188
	ctx.lr = 0x820CC3AC;
	sub_82350188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b0c8
	ctx.lr = 0x820CC3B8;
	sub_8235B0C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820cc3c4
	goto loc_820CC3C4;
loc_820CC3C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820CC3C4:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82350120
	ctx.lr = 0x820CC3CC;
	sub_82350120(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC3E4"))) PPC_WEAK_FUNC(sub_820CC3E4);
PPC_FUNC_IMPL(__imp__sub_820CC3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC3E8"))) PPC_WEAK_FUNC(sub_820CC3E8);
PPC_FUNC_IMPL(__imp__sub_820CC3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x821c4580
	sub_821C4580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC3EC"))) PPC_WEAK_FUNC(sub_820CC3EC);
PPC_FUNC_IMPL(__imp__sub_820CC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC3F0"))) PPC_WEAK_FUNC(sub_820CC3F0);
PPC_FUNC_IMPL(__imp__sub_820CC3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CC3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// ori r9,r10,37449
	ctx.r9.u64 = ctx.r10.u64 | 37449;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 * 28;
	// stw r4,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r4.u32);
	// ble cr6,0x820cc424
	if (!ctx.cr6.gt) goto loc_820CC424;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820CC424:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820CC434;
	sub_82082030(ctx, base);
	// stw r3,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r3.u32);
	// lwz r11,3248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 * 28;
	// bl 0x8233e4e0
	ctx.lr = 0x820CC448;
	sub_8233E4E0(ctx, base);
	// lwz r11,3248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cc494
	if (ctx.cr6.eq) goto loc_820CC494;
loc_820CC458:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c1ff8
	ctx.lr = 0x820CC460;
	sub_821C1FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,3252
	ctx.r3.s64 = ctx.r31.s64 + 3252;
	// bl 0x821c09f0
	ctx.lr = 0x820CC46C;
	sub_821C09F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0a88
	ctx.lr = 0x820CC474;
	sub_821C0A88(ctx, base);
	// lwz r11,3252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3252);
	// lwz r10,3248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// stw r11,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r11.u32);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820cc458
	if (ctx.cr6.lt) goto loc_820CC458;
loc_820CC494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC49C"))) PPC_WEAK_FUNC(sub_820CC49C);
PPC_FUNC_IMPL(__imp__sub_820CC49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC4A0"))) PPC_WEAK_FUNC(sub_820CC4A0);
PPC_FUNC_IMPL(__imp__sub_820CC4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x821caad8
	sub_821CAAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC4C4"))) PPC_WEAK_FUNC(sub_820CC4C4);
PPC_FUNC_IMPL(__imp__sub_820CC4C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC4C8"))) PPC_WEAK_FUNC(sub_820CC4C8);
PPC_FUNC_IMPL(__imp__sub_820CC4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,1100
	ctx.r3.s64 = ctx.r11.s64 + 1100;
	// b 0x821c0438
	sub_821C0438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC4E8"))) PPC_WEAK_FUNC(sub_820CC4E8);
PPC_FUNC_IMPL(__imp__sub_820CC4E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC4EC"))) PPC_WEAK_FUNC(sub_820CC4EC);
PPC_FUNC_IMPL(__imp__sub_820CC4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC4F0"))) PPC_WEAK_FUNC(sub_820CC4F0);
PPC_FUNC_IMPL(__imp__sub_820CC4F0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc520
	if (ctx.cr6.eq) goto loc_820CC520;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// b 0x820cc530
	goto loc_820CC530;
loc_820CC520:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc568
	if (ctx.cr6.eq) goto loc_820CC568;
	// addi r31,r11,1144
	ctx.r31.s64 = ctx.r11.s64 + 1144;
loc_820CC530:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5510
	ctx.lr = 0x820CC538;
	sub_821C5510(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cc568
	if (ctx.cr6.eq) goto loc_820CC568;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cc568
	if (ctx.cr6.eq) goto loc_820CC568;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
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
loc_820CC568:
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

__attribute__((alias("__imp__sub_820CC580"))) PPC_WEAK_FUNC(sub_820CC580);
PPC_FUNC_IMPL(__imp__sub_820CC580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CC588;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cc5ac
	if (ctx.cr6.eq) goto loc_820CC5AC;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// b 0x820cc5bc
	goto loc_820CC5BC;
loc_820CC5AC:
	// lbz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cc608
	if (ctx.cr6.eq) goto loc_820CC608;
	// addi r30,r31,1144
	ctx.r30.s64 = ctx.r31.s64 + 1144;
loc_820CC5BC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c5510
	ctx.lr = 0x820CC5C8;
	sub_821C5510(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cc608
	if (ctx.cr6.eq) goto loc_820CC608;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc608
	if (ctx.cr6.eq) goto loc_820CC608;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cc5f8
	if (!ctx.cr6.eq) goto loc_820CC5F8;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820cc608
	if (!ctx.cr6.eq) goto loc_820CC608;
loc_820CC5F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821c5ba0
	ctx.lr = 0x820CC600;
	sub_821C5BA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820CC608:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC614"))) PPC_WEAK_FUNC(sub_820CC614);
PPC_FUNC_IMPL(__imp__sub_820CC614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC618"))) PPC_WEAK_FUNC(sub_820CC618);
PPC_FUNC_IMPL(__imp__sub_820CC618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc634
	if (ctx.cr6.eq) goto loc_820CC634;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// b 0x820cc644
	goto loc_820CC644;
loc_820CC634:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc65c
	if (ctx.cr6.eq) goto loc_820CC65C;
	// addi r11,r11,1144
	ctx.r11.s64 = ctx.r11.s64 + 1144;
loc_820CC644:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cc65c
	if (ctx.cr6.eq) goto loc_820CC65C;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
loc_820CC65C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC664"))) PPC_WEAK_FUNC(sub_820CC664);
PPC_FUNC_IMPL(__imp__sub_820CC664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC668"))) PPC_WEAK_FUNC(sub_820CC668);
PPC_FUNC_IMPL(__imp__sub_820CC668) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc690
	if (ctx.cr6.eq) goto loc_820CC690;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// b 0x820cc6a0
	goto loc_820CC6A0;
loc_820CC690:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc6dc
	if (ctx.cr6.eq) goto loc_820CC6DC;
	// addi r11,r11,1144
	ctx.r11.s64 = ctx.r11.s64 + 1144;
loc_820CC6A0:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cc6c4
	if (!ctx.cr6.eq) goto loc_820CC6C4;
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
loc_820CC6C4:
	// bl 0x8234e920
	ctx.lr = 0x820CC6C8;
	sub_8234E920(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CC6DC:
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

__attribute__((alias("__imp__sub_820CC6F0"))) PPC_WEAK_FUNC(sub_820CC6F0);
PPC_FUNC_IMPL(__imp__sub_820CC6F0) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc720
	if (ctx.cr6.eq) goto loc_820CC720;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// b 0x820cc730
	goto loc_820CC730;
loc_820CC720:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc788
	if (ctx.cr6.eq) goto loc_820CC788;
	// addi r31,r11,1144
	ctx.r31.s64 = ctx.r11.s64 + 1144;
loc_820CC730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5510
	ctx.lr = 0x820CC738;
	sub_821C5510(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cc788
	if (ctx.cr6.eq) goto loc_820CC788;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820cc788
	if (ctx.cr6.eq) goto loc_820CC788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8234ecb8
	ctx.lr = 0x820CC758;
	sub_8234ECB8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x820CC760;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cc788
	if (ctx.cr6.eq) goto loc_820CC788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234ef48
	ctx.lr = 0x820CC770;
	sub_8234EF48(ctx, base);
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
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
loc_820CC788:
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
}

__attribute__((alias("__imp__sub_820CC7A0"))) PPC_WEAK_FUNC(sub_820CC7A0);
PPC_FUNC_IMPL(__imp__sub_820CC7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x821ca550
	sub_821CA550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC7C4"))) PPC_WEAK_FUNC(sub_820CC7C4);
PPC_FUNC_IMPL(__imp__sub_820CC7C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC7C8"))) PPC_WEAK_FUNC(sub_820CC7C8);
PPC_FUNC_IMPL(__imp__sub_820CC7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x820cc860
	if (ctx.cr6.eq) goto loc_820CC860;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc808
	if (ctx.cr6.eq) goto loc_820CC808;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82350188
	ctx.lr = 0x820CC804;
	sub_82350188(ctx, base);
	// b 0x820cc81c
	goto loc_820CC81C;
loc_820CC808:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc860
	if (ctx.cr6.eq) goto loc_820CC860;
	// lwz r3,1132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// bl 0x82354368
	ctx.lr = 0x820CC81C;
	sub_82354368(ctx, base);
loc_820CC81C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820ce0f8
	ctx.lr = 0x820CC824;
	sub_820CE0F8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x820ce088
	ctx.lr = 0x820CC838;
	sub_820CE088(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8234ef48
	ctx.lr = 0x820CC840;
	sub_8234EF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x820CC850;
	sub_821C0630(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x820cc864
	goto loc_820CC864;
loc_820CC860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CC864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC87C"))) PPC_WEAK_FUNC(sub_820CC87C);
PPC_FUNC_IMPL(__imp__sub_820CC87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC880"))) PPC_WEAK_FUNC(sub_820CC880);
PPC_FUNC_IMPL(__imp__sub_820CC880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cc91c
	if (ctx.cr6.eq) goto loc_820CC91C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc8c0
	if (ctx.cr6.eq) goto loc_820CC8C0;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82350188
	ctx.lr = 0x820CC8BC;
	sub_82350188(ctx, base);
	// b 0x820cc8d4
	goto loc_820CC8D4;
loc_820CC8C0:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc91c
	if (ctx.cr6.eq) goto loc_820CC91C;
	// lwz r3,1132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// bl 0x82354368
	ctx.lr = 0x820CC8D4;
	sub_82354368(ctx, base);
loc_820CC8D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x820cc91c
	if (ctx.cr6.eq) goto loc_820CC91C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x820ce088
	ctx.lr = 0x820CC8F4;
	sub_820CE088(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8234ef48
	ctx.lr = 0x820CC8FC;
	sub_8234EF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x820CC90C;
	sub_821C0630(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x820cc920
	goto loc_820CC920;
loc_820CC91C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CC920:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC938"))) PPC_WEAK_FUNC(sub_820CC938);
PPC_FUNC_IMPL(__imp__sub_820CC938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc954
	if (ctx.cr6.eq) goto loc_820CC954;
	// lwz r3,1080(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// blr 
	return;
loc_820CC954:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// lwz r11,2164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC96C"))) PPC_WEAK_FUNC(sub_820CC96C);
PPC_FUNC_IMPL(__imp__sub_820CC96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC970"))) PPC_WEAK_FUNC(sub_820CC970);
PPC_FUNC_IMPL(__imp__sub_820CC970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CC978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// addi r30,r11,-20656
	ctx.r30.s64 = ctx.r11.s64 + -20656;
	// ori r9,r10,37449
	ctx.r9.u64 = ctx.r10.u64 | 37449;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// stw r4,3260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3260, ctx.r4.u32);
	// mulli r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 * 28;
	// ble cr6,0x820cc9a8
	if (!ctx.cr6.gt) goto loc_820CC9A8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820CC9A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x820CC9B8;
	sub_82082030(ctx, base);
	// stw r3,3256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3256, ctx.r3.u32);
	// lwz r11,3260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3260);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 * 28;
	// bl 0x8233e4e0
	ctx.lr = 0x820CC9CC;
	sub_8233E4E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820cca08
	if (ctx.cr6.eq) goto loc_820CCA08;
loc_820CC9D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c1ff8
	ctx.lr = 0x820CC9DC;
	sub_821C1FF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,3264
	ctx.r3.s64 = ctx.r30.s64 + 3264;
	// bl 0x821c09f0
	ctx.lr = 0x820CC9E8;
	sub_821C09F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0a88
	ctx.lr = 0x820CC9F0;
	sub_821C0A88(ctx, base);
	// lwz r11,3264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// stw r11,3264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3264, ctx.r11.u32);
	// bne 0x820cc9d4
	if (!ctx.cr0.eq) goto loc_820CC9D4;
loc_820CCA08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CCA10"))) PPC_WEAK_FUNC(sub_820CCA10);
PPC_FUNC_IMPL(__imp__sub_820CCA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820CCA18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-20656
	ctx.r30.s64 = ctx.r11.s64 + -20656;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cca44
	if (!ctx.cr6.eq) goto loc_820CCA44;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820CCA44:
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8236a338
	ctx.lr = 0x820CCA4C;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cca60
	if (ctx.cr6.eq) goto loc_820CCA60;
	// bl 0x821c5e88
	ctx.lr = 0x820CCA58;
	sub_821C5E88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820cca64
	goto loc_820CCA64;
loc_820CCA60:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820CCA64:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c8ea8
	ctx.lr = 0x820CCA78;
	sub_821C8EA8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c6150
	ctx.lr = 0x820CCA88;
	sub_821C6150(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_820CCA90:
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
	// bne 0x820cca90
	if (!ctx.cr0.eq) goto loc_820CCA90;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82350180
	ctx.lr = 0x820CCAB8;
	sub_82350180(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8235afb8
	ctx.lr = 0x820CCAC0;
	sub_8235AFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c64b0
	ctx.lr = 0x820CCAC8;
	sub_821C64B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234ef48
	ctx.lr = 0x820CCAD0;
	sub_8234EF48(ctx, base);
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CCADC"))) PPC_WEAK_FUNC(sub_820CCADC);
PPC_FUNC_IMPL(__imp__sub_820CCADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCAE0"))) PPC_WEAK_FUNC(sub_820CCAE0);
PPC_FUNC_IMPL(__imp__sub_820CCAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-20656
	ctx.r30.s64 = ctx.r11.s64 + -20656;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ccb68
	if (ctx.cr6.eq) goto loc_820CCB68;
	// bl 0x82350188
	ctx.lr = 0x820CCB10;
	sub_82350188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x82356918
	ctx.lr = 0x820CCB20;
	sub_82356918(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x820CCB28;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ccb68
	if (ctx.cr6.eq) goto loc_820CCB68;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_820CCB38:
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
	// bne 0x820ccb38
	if (!ctx.cr0.eq) goto loc_820CCB38;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82350180
	ctx.lr = 0x820CCB60;
	sub_82350180(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8235a1e0
	ctx.lr = 0x820CCB68;
	sub_8235A1E0(ctx, base);
loc_820CCB68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CCB80"))) PPC_WEAK_FUNC(sub_820CCB80);
PPC_FUNC_IMPL(__imp__sub_820CCB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x821ca670
	sub_821CA670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CCB94"))) PPC_WEAK_FUNC(sub_820CCB94);
PPC_FUNC_IMPL(__imp__sub_820CCB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCB98"))) PPC_WEAK_FUNC(sub_820CCB98);
PPC_FUNC_IMPL(__imp__sub_820CCB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ccc34
	if (ctx.cr6.eq) goto loc_820CCC34;
	// bl 0x82350188
	ctx.lr = 0x820CCBC4;
	sub_82350188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820ce0f8
	ctx.lr = 0x820CCBCC;
	sub_820CE0F8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ccc34
	if (ctx.cr6.eq) goto loc_820CCC34;
loc_820CCBD8:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x820ccc0c
	if (ctx.cr6.eq) goto loc_820CCC0C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_820CCBEC:
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
	// bne 0x820ccbec
	if (!ctx.cr0.eq) goto loc_820CCBEC;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_820CCC0C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ce008
	ctx.lr = 0x820CCC18;
	sub_820CE008(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821c0630
	ctx.lr = 0x820CCC20;
	sub_821C0630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c76d0
	ctx.lr = 0x820CCC28;
	sub_821C76D0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ccbd8
	if (!ctx.cr6.eq) goto loc_820CCBD8;
loc_820CCC34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CCC4C"))) PPC_WEAK_FUNC(sub_820CCC4C);
PPC_FUNC_IMPL(__imp__sub_820CCC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCC50"))) PPC_WEAK_FUNC(sub_820CCC50);
PPC_FUNC_IMPL(__imp__sub_820CCC50) {
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
	// bne cr6,0x820ccc90
	if (!ctx.cr6.eq) goto loc_820CCC90;
	// bl 0x820ddca8
	ctx.lr = 0x820CCC78;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ccc88
	if (ctx.cr6.eq) goto loc_820CCC88;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cccac
	goto loc_820CCCAC;
loc_820CCC88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cccac
	goto loc_820CCCAC;
loc_820CCC90:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cccbc
	if (!ctx.cr6.eq) goto loc_820CCCBC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cccf0
	if (ctx.cr6.eq) goto loc_820CCCF0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CCCAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cccd8
	if (ctx.cr6.eq) goto loc_820CCCD8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cccd8
	goto loc_820CCCD8;
loc_820CCCBC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cccf0
	if (ctx.cr6.eq) goto loc_820CCCF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CCCD8;
	sub_820F3178(ctx, base);
loc_820CCCD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cccf0
	if (ctx.cr6.eq) goto loc_820CCCF0;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r10,-20656
	ctx.r9.s64 = ctx.r10.s64 + -20656;
	// stw r11,3196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3196, ctx.r11.u32);
loc_820CCCF0:
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

__attribute__((alias("__imp__sub_820CCD04"))) PPC_WEAK_FUNC(sub_820CCD04);
PPC_FUNC_IMPL(__imp__sub_820CCD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCD08"))) PPC_WEAK_FUNC(sub_820CCD08);
PPC_FUNC_IMPL(__imp__sub_820CCD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CCD10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ccd34
	if (ctx.cr6.eq) goto loc_820CCD34;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// b 0x820ccd44
	goto loc_820CCD44;
loc_820CCD34:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ccd98
	if (ctx.cr6.eq) goto loc_820CCD98;
	// addi r31,r11,1144
	ctx.r31.s64 = ctx.r11.s64 + 1144;
loc_820CCD44:
	// lwz r28,1020(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820ccd98
	if (ctx.cr6.eq) goto loc_820CCD98;
loc_820CCD54:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8234ecb8
	ctx.lr = 0x820CCD64;
	sub_8234ECB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ccd80
	if (ctx.cr6.eq) goto loc_820CCD80;
	// bl 0x8234ef48
	ctx.lr = 0x820CCD74;
	sub_8234EF48(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x820ccda4
	if (ctx.cr6.eq) goto loc_820CCDA4;
loc_820CCD80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x820CCD88;
	sub_821C0630(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820ccd54
	if (ctx.cr6.lt) goto loc_820CCD54;
loc_820CCD98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820CCDA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234e920
	ctx.lr = 0x820CCDAC;
	sub_8234E920(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x820CCDB8;
	sub_821C0630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CCDC4"))) PPC_WEAK_FUNC(sub_820CCDC4);
PPC_FUNC_IMPL(__imp__sub_820CCDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCDC8"))) PPC_WEAK_FUNC(sub_820CCDC8);
PPC_FUNC_IMPL(__imp__sub_820CCDC8) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ccdfc
	if (ctx.cr6.eq) goto loc_820CCDFC;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82350188
	ctx.lr = 0x820CCDF8;
	sub_82350188(ctx, base);
	// b 0x820cce10
	goto loc_820CCE10;
loc_820CCDFC:
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cce34
	if (ctx.cr6.eq) goto loc_820CCE34;
	// lwz r3,1132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// bl 0x82354368
	ctx.lr = 0x820CCE10;
	sub_82354368(ctx, base);
loc_820CCE10:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356918
	ctx.lr = 0x820CCE20;
	sub_82356918(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x820CCE28;
	sub_821C0630(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cce4c
	if (!ctx.cr6.eq) goto loc_820CCE4C;
loc_820CCE34:
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
loc_820CCE4C:
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
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

__attribute__((alias("__imp__sub_820CCE64"))) PPC_WEAK_FUNC(sub_820CCE64);
PPC_FUNC_IMPL(__imp__sub_820CCE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCE68"))) PPC_WEAK_FUNC(sub_820CCE68);
PPC_FUNC_IMPL(__imp__sub_820CCE68) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ccea8
	if (!ctx.cr6.eq) goto loc_820CCEA8;
loc_820CCE90:
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_820CCEA8:
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82350188
	ctx.lr = 0x820CCEB0;
	sub_82350188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x82356918
	ctx.lr = 0x820CCEC0;
	sub_82356918(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x820CCEC8;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cce90
	if (ctx.cr6.eq) goto loc_820CCE90;
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cce90
	if (ctx.cr6.eq) goto loc_820CCE90;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ccef4
	if (!ctx.cr6.eq) goto loc_820CCEF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820CCEF0;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820CCEF4:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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

__attribute__((alias("__imp__sub_820CCF0C"))) PPC_WEAK_FUNC(sub_820CCF0C);
PPC_FUNC_IMPL(__imp__sub_820CCF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCF10"))) PPC_WEAK_FUNC(sub_820CCF10);
PPC_FUNC_IMPL(__imp__sub_820CCF10) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ccf50
	if (!ctx.cr6.eq) goto loc_820CCF50;
loc_820CCF38:
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_820CCF50:
	// lwz r3,1132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// bl 0x82354368
	ctx.lr = 0x820CCF58;
	sub_82354368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x82356918
	ctx.lr = 0x820CCF68;
	sub_82356918(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x820CCF70;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ccf38
	if (ctx.cr6.eq) goto loc_820CCF38;
	// lwz r31,112(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ccf38
	if (ctx.cr6.eq) goto loc_820CCF38;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ccf9c
	if (!ctx.cr6.eq) goto loc_820CCF9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820CCF98;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820CCF9C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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

__attribute__((alias("__imp__sub_820CCFB4"))) PPC_WEAK_FUNC(sub_820CCFB4);
PPC_FUNC_IMPL(__imp__sub_820CCFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCFB8"))) PPC_WEAK_FUNC(sub_820CCFB8);
PPC_FUNC_IMPL(__imp__sub_820CCFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,1140(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,2168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CCFE4"))) PPC_WEAK_FUNC(sub_820CCFE4);
PPC_FUNC_IMPL(__imp__sub_820CCFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCFE8"))) PPC_WEAK_FUNC(sub_820CCFE8);
PPC_FUNC_IMPL(__imp__sub_820CCFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CCFF0;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,192
	ctx.r3.s64 = 192;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82082030
	ctx.lr = 0x820CD01C;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd040
	if (ctx.cr6.eq) goto loc_820CD040;
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
	// bl 0x821c96b0
	ctx.lr = 0x820CD03C;
	sub_821C96B0(ctx, base);
	// b 0x820cd044
	goto loc_820CD044;
loc_820CD040:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CD044:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r9,r11,2176
	ctx.r9.s64 = ctx.r11.s64 + 2176;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD060"))) PPC_WEAK_FUNC(sub_820CD060);
PPC_FUNC_IMPL(__imp__sub_820CD060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f4,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// b 0x821c49f0
	sub_821C49F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD080"))) PPC_WEAK_FUNC(sub_820CD080);
PPC_FUNC_IMPL(__imp__sub_820CD080) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821c49f0
	sub_821C49F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD088"))) PPC_WEAK_FUNC(sub_820CD088);
PPC_FUNC_IMPL(__imp__sub_820CD088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r3,r11,-20656
	ctx.r3.s64 = ctx.r11.s64 + -20656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD094"))) PPC_WEAK_FUNC(sub_820CD094);
PPC_FUNC_IMPL(__imp__sub_820CD094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD098"))) PPC_WEAK_FUNC(sub_820CD098);
PPC_FUNC_IMPL(__imp__sub_820CD098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD0A8"))) PPC_WEAK_FUNC(sub_820CD0A8);
PPC_FUNC_IMPL(__imp__sub_820CD0A8) {
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
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// lbz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd0d4
	if (ctx.cr6.eq) goto loc_820CD0D4;
	// addi r3,r31,1100
	ctx.r3.s64 = ctx.r31.s64 + 1100;
	// bl 0x821bfb38
	ctx.lr = 0x820CD0D4;
	sub_821BFB38(ctx, base);
loc_820CD0D4:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd0e8
	if (ctx.cr6.eq) goto loc_820CD0E8;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x821c9e80
	ctx.lr = 0x820CD0E8;
	sub_821C9E80(ctx, base);
loc_820CD0E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x8236bd78
	ctx.lr = 0x820CD0F4;
	sub_8236BD78(ctx, base);
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

__attribute__((alias("__imp__sub_820CD108"))) PPC_WEAK_FUNC(sub_820CD108);
PPC_FUNC_IMPL(__imp__sub_820CD108) {
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
	// bl 0x820cdf68
	ctx.lr = 0x820CD11C;
	sub_820CDF68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236f6f8
	ctx.lr = 0x820CD124;
	sub_8236F6F8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820cd144
	if (!ctx.cr6.eq) goto loc_820CD144;
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
loc_820CD144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f6f8
	ctx.lr = 0x820CD14C;
	sub_8236F6F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820cd168
	if (!ctx.cr6.eq) goto loc_820CD168;
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
loc_820CD168:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f6f8
	ctx.lr = 0x820CD170;
	sub_8236F6F8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
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

__attribute__((alias("__imp__sub_820CD190"))) PPC_WEAK_FUNC(sub_820CD190);
PPC_FUNC_IMPL(__imp__sub_820CD190) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820cd1cc
	if (!ctx.cr6.eq) goto loc_820CD1CC;
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
loc_820CD1CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8235cf78
	ctx.lr = 0x820CD1D8;
	sub_8235CF78(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821c0630
	ctx.lr = 0x820CD1E0;
	sub_821C0630(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x820cd1f0
	if (ctx.cr6.eq) goto loc_820CD1F0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_820CD1F0:
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

__attribute__((alias("__imp__sub_820CD204"))) PPC_WEAK_FUNC(sub_820CD204);
PPC_FUNC_IMPL(__imp__sub_820CD204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD208"))) PPC_WEAK_FUNC(sub_820CD208);
PPC_FUNC_IMPL(__imp__sub_820CD208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x821cace0
	sub_821CACE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD228"))) PPC_WEAK_FUNC(sub_820CD228);
PPC_FUNC_IMPL(__imp__sub_820CD228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD22C"))) PPC_WEAK_FUNC(sub_820CD22C);
PPC_FUNC_IMPL(__imp__sub_820CD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD230"))) PPC_WEAK_FUNC(sub_820CD230);
PPC_FUNC_IMPL(__imp__sub_820CD230) {
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
	// bl 0x821c2e80
	ctx.lr = 0x820CD240;
	sub_821C2E80(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd270
	if (ctx.cr6.eq) goto loc_820CD270;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_820CD250:
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
	// bne 0x820cd250
	if (!ctx.cr0.eq) goto loc_820CD250;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_820CD270:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x821c9d10
	ctx.lr = 0x820CD284;
	sub_821C9D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD294"))) PPC_WEAK_FUNC(sub_820CD294);
PPC_FUNC_IMPL(__imp__sub_820CD294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD298"))) PPC_WEAK_FUNC(sub_820CD298);
PPC_FUNC_IMPL(__imp__sub_820CD298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x821c9e80
	sub_821C9E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD2A8"))) PPC_WEAK_FUNC(sub_820CD2A8);
PPC_FUNC_IMPL(__imp__sub_820CD2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lbz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD2B8"))) PPC_WEAK_FUNC(sub_820CD2B8);
PPC_FUNC_IMPL(__imp__sub_820CD2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x821ca0c8
	sub_821CA0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD2D0"))) PPC_WEAK_FUNC(sub_820CD2D0);
PPC_FUNC_IMPL(__imp__sub_820CD2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// slw r5,r10,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x821ca0c8
	sub_821CA0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD2EC"))) PPC_WEAK_FUNC(sub_820CD2EC);
PPC_FUNC_IMPL(__imp__sub_820CD2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD2F0"))) PPC_WEAK_FUNC(sub_820CD2F0);
PPC_FUNC_IMPL(__imp__sub_820CD2F0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x821ca9b8
	sub_821CA9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD318"))) PPC_WEAK_FUNC(sub_820CD318);
PPC_FUNC_IMPL(__imp__sub_820CD318) {
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
	// bne cr6,0x820cd358
	if (!ctx.cr6.eq) goto loc_820CD358;
	// bl 0x820ddca8
	ctx.lr = 0x820CD340;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd350
	if (ctx.cr6.eq) goto loc_820CD350;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cd374
	goto loc_820CD374;
loc_820CD350:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cd374
	goto loc_820CD374;
loc_820CD358:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cd384
	if (!ctx.cr6.eq) goto loc_820CD384;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cd3b8
	if (ctx.cr6.eq) goto loc_820CD3B8;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CD374:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cd3a0
	if (ctx.cr6.eq) goto loc_820CD3A0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cd3a0
	goto loc_820CD3A0;
loc_820CD384:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cd3b8
	if (ctx.cr6.eq) goto loc_820CD3B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CD3A0;
	sub_820F3178(ctx, base);
loc_820CD3A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd3b8
	if (ctx.cr6.eq) goto loc_820CD3B8;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r10,-20656
	ctx.r9.s64 = ctx.r10.s64 + -20656;
	// stw r11,3204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3204, ctx.r11.u32);
loc_820CD3B8:
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

__attribute__((alias("__imp__sub_820CD3CC"))) PPC_WEAK_FUNC(sub_820CD3CC);
PPC_FUNC_IMPL(__imp__sub_820CD3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD3D0"))) PPC_WEAK_FUNC(sub_820CD3D0);
PPC_FUNC_IMPL(__imp__sub_820CD3D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd40c
	if (ctx.cr6.eq) goto loc_820CD40C;
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// bl 0x821c2e00
	ctx.lr = 0x820CD40C;
	sub_821C2E00(ctx, base);
loc_820CD40C:
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// bl 0x821c30b0
	ctx.lr = 0x820CD414;
	sub_821C30B0(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x8236a338
	ctx.lr = 0x820CD41C;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd42c
	if (ctx.cr6.eq) goto loc_820CD42C;
	// bl 0x82370e70
	ctx.lr = 0x820CD428;
	sub_82370E70(ctx, base);
	// b 0x820cd430
	goto loc_820CD430;
loc_820CD42C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CD430:
	// stw r3,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r3.u32);
	// addi r4,r31,3200
	ctx.r4.s64 = ctx.r31.s64 + 3200;
	// bl 0x82370fe8
	ctx.lr = 0x820CD43C;
	sub_82370FE8(ctx, base);
	// lwz r3,3204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd454
	if (ctx.cr6.eq) goto loc_820CD454;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x820daf68
	ctx.lr = 0x820CD454;
	sub_820DAF68(ctx, base);
loc_820CD454:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236b970
	ctx.lr = 0x820CD45C;
	sub_8236B970(ctx, base);
	// lwz r11,3220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r7,1200
	ctx.r7.s64 = 1200;
	// bl 0x82371070
	ctx.lr = 0x820CD478;
	sub_82371070(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x820CD480;
	sub_8236B838(ctx, base);
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

__attribute__((alias("__imp__sub_820CD49C"))) PPC_WEAK_FUNC(sub_820CD49C);
PPC_FUNC_IMPL(__imp__sub_820CD49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD4A0"))) PPC_WEAK_FUNC(sub_820CD4A0);
PPC_FUNC_IMPL(__imp__sub_820CD4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CD4A8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,3220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd4d8
	if (ctx.cr6.eq) goto loc_820CD4D8;
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// bl 0x821c2e00
	ctx.lr = 0x820CD4D8;
	sub_821C2E00(ctx, base);
loc_820CD4D8:
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// bl 0x821c30b0
	ctx.lr = 0x820CD4E0;
	sub_821C30B0(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x8236a338
	ctx.lr = 0x820CD4E8;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd4f8
	if (ctx.cr6.eq) goto loc_820CD4F8;
	// bl 0x82370e70
	ctx.lr = 0x820CD4F4;
	sub_82370E70(ctx, base);
	// b 0x820cd4fc
	goto loc_820CD4FC;
loc_820CD4F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CD4FC:
	// stw r3,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r3.u32);
	// addi r4,r31,3200
	ctx.r4.s64 = ctx.r31.s64 + 3200;
	// bl 0x82370fe8
	ctx.lr = 0x820CD508;
	sub_82370FE8(ctx, base);
	// lwz r3,3204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd520
	if (ctx.cr6.eq) goto loc_820CD520;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x820daf68
	ctx.lr = 0x820CD520;
	sub_820DAF68(ctx, base);
loc_820CD520:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236b9e8
	ctx.lr = 0x820CD52C;
	sub_8236B9E8(ctx, base);
	// lwz r11,3220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r7,1200
	ctx.r7.s64 = 1200;
	// bl 0x82371070
	ctx.lr = 0x820CD548;
	sub_82371070(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x820CD550;
	sub_8236B838(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD55C"))) PPC_WEAK_FUNC(sub_820CD55C);
PPC_FUNC_IMPL(__imp__sub_820CD55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD560"))) PPC_WEAK_FUNC(sub_820CD560);
PPC_FUNC_IMPL(__imp__sub_820CD560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lwz r3,3216(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD570"))) PPC_WEAK_FUNC(sub_820CD570);
PPC_FUNC_IMPL(__imp__sub_820CD570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-20656
	ctx.r9.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3208(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd5b0
	if (ctx.cr6.eq) goto loc_820CD5B0;
loc_820CD588:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820cd5a8
	if (ctx.cr6.eq) goto loc_820CD5A8;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cd588
	if (!ctx.cr6.eq) goto loc_820CD588;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CD5A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cd5b8
	if (!ctx.cr6.eq) goto loc_820CD5B8;
loc_820CD5B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CD5B8:
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD5C0"))) PPC_WEAK_FUNC(sub_820CD5C0);
PPC_FUNC_IMPL(__imp__sub_820CD5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD5D8"))) PPC_WEAK_FUNC(sub_820CD5D8);
PPC_FUNC_IMPL(__imp__sub_820CD5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// b 0x821c2e00
	sub_821C2E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD5E8"))) PPC_WEAK_FUNC(sub_820CD5E8);
PPC_FUNC_IMPL(__imp__sub_820CD5E8) {
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
	// bne cr6,0x820cd628
	if (!ctx.cr6.eq) goto loc_820CD628;
	// bl 0x820ddca8
	ctx.lr = 0x820CD610;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd620
	if (ctx.cr6.eq) goto loc_820CD620;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820cd644
	goto loc_820CD644;
loc_820CD620:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cd644
	goto loc_820CD644;
loc_820CD628:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cd654
	if (!ctx.cr6.eq) goto loc_820CD654;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cd688
	if (ctx.cr6.eq) goto loc_820CD688;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820CD644:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cd670
	if (ctx.cr6.eq) goto loc_820CD670;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x820cd670
	goto loc_820CD670;
loc_820CD654:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cd688
	if (ctx.cr6.eq) goto loc_820CD688;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820CD670;
	sub_820F3178(ctx, base);
loc_820CD670:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cd688
	if (ctx.cr6.eq) goto loc_820CD688;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r10,-20656
	ctx.r9.s64 = ctx.r10.s64 + -20656;
	// stw r11,1128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1128, ctx.r11.u32);
loc_820CD688:
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

__attribute__((alias("__imp__sub_820CD69C"))) PPC_WEAK_FUNC(sub_820CD69C);
PPC_FUNC_IMPL(__imp__sub_820CD69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD6A0"))) PPC_WEAK_FUNC(sub_820CD6A0);
PPC_FUNC_IMPL(__imp__sub_820CD6A0) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r11,-20656
	ctx.r31.s64 = ctx.r11.s64 + -20656;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd71c
	if (ctx.cr6.eq) goto loc_820CD71C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8235cf78
	ctx.lr = 0x820CD6D0;
	sub_8235CF78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x820cd704
	if (ctx.cr6.eq) goto loc_820CD704;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_820CD6E4:
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
	// bne 0x820cd6e4
	if (!ctx.cr0.eq) goto loc_820CD6E4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_820CD704:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1100
	ctx.r3.s64 = ctx.r31.s64 + 1100;
	// bl 0x821bf7b0
	ctx.lr = 0x820CD714;
	sub_821BF7B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0630
	ctx.lr = 0x820CD71C;
	sub_821C0630(ctx, base);
loc_820CD71C:
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

__attribute__((alias("__imp__sub_820CD730"))) PPC_WEAK_FUNC(sub_820CD730);
PPC_FUNC_IMPL(__imp__sub_820CD730) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-20656
	ctx.r9.s64 = ctx.r11.s64 + -20656;
	// lwz r11,3208(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd76c
	if (ctx.cr6.eq) goto loc_820CD76C;
loc_820CD754:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820cd770
	if (ctx.cr6.eq) goto loc_820CD770;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cd754
	if (!ctx.cr6.eq) goto loc_820CD754;
loc_820CD76C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820CD770:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd7a0
	if (ctx.cr6.eq) goto loc_820CD7A0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_820CD780:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820cd780
	if (!ctx.cr0.eq) goto loc_820CD780;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_820CD7A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,1100
	ctx.r3.s64 = ctx.r9.s64 + 1100;
	// bl 0x821bf7b0
	ctx.lr = 0x820CD7B0;
	sub_821BF7B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD7C0"))) PPC_WEAK_FUNC(sub_820CD7C0);
PPC_FUNC_IMPL(__imp__sub_820CD7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r3,r11,1100
	ctx.r3.s64 = ctx.r11.s64 + 1100;
	// b 0x821bf948
	sub_821BF948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD7D4"))) PPC_WEAK_FUNC(sub_820CD7D4);
PPC_FUNC_IMPL(__imp__sub_820CD7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD7D8"))) PPC_WEAK_FUNC(sub_820CD7D8);
PPC_FUNC_IMPL(__imp__sub_820CD7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r3,r11,1100
	ctx.r3.s64 = ctx.r11.s64 + 1100;
	// b 0x821bfa78
	sub_821BFA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD7E8"))) PPC_WEAK_FUNC(sub_820CD7E8);
PPC_FUNC_IMPL(__imp__sub_820CD7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r3,r11,1100
	ctx.r3.s64 = ctx.r11.s64 + 1100;
	// b 0x821bfb38
	sub_821BFB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD7F8"))) PPC_WEAK_FUNC(sub_820CD7F8);
PPC_FUNC_IMPL(__imp__sub_820CD7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lbz r3,1140(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD808"))) PPC_WEAK_FUNC(sub_820CD808);
PPC_FUNC_IMPL(__imp__sub_820CD808) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lwz r3,1136(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cd844
	if (!ctx.cr6.eq) goto loc_820CD844;
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
loc_820CD844:
	// bl 0x8234e920
	ctx.lr = 0x820CD848;
	sub_8234E920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD86C"))) PPC_WEAK_FUNC(sub_820CD86C);
PPC_FUNC_IMPL(__imp__sub_820CD86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD870"))) PPC_WEAK_FUNC(sub_820CD870);
PPC_FUNC_IMPL(__imp__sub_820CD870) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-20656
	ctx.r10.s64 = ctx.r11.s64 + -20656;
	// lwz r3,1136(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cd8a0
	if (!ctx.cr6.eq) goto loc_820CD8A0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CD8A0:
	// bl 0x8234e920
	ctx.lr = 0x820CD8A4;
	sub_8234E920(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD8B8"))) PPC_WEAK_FUNC(sub_820CD8B8);
PPC_FUNC_IMPL(__imp__sub_820CD8B8) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1100
	ctx.r3.s64 = ctx.r11.s64 + 1100;
	// b 0x821c02a0
	sub_821C02A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD8E0"))) PPC_WEAK_FUNC(sub_820CD8E0);
PPC_FUNC_IMPL(__imp__sub_820CD8E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820CD8E8;
	__savegprlr_14(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-12192
	ctx.r11.s64 = ctx.r11.s64 + -12192;
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
	// addi r10,r10,-12160
	ctx.r10.s64 = ctx.r10.s64 + -12160;
	// addi r9,r9,-12136
	ctx.r9.s64 = ctx.r9.s64 + -12136;
	// addi r8,r8,-12120
	ctx.r8.s64 = ctx.r8.s64 + -12120;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r7,r7,-12024
	ctx.r7.s64 = ctx.r7.s64 + -12024;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// addi r6,r6,-15376
	ctx.r6.s64 = ctx.r6.s64 + -15376;
	// addi r5,r5,-15120
	ctx.r5.s64 = ctx.r5.s64 + -15120;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// addi r4,r4,-14824
	ctx.r4.s64 = ctx.r4.s64 + -14824;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// addi r11,r31,-14024
	ctx.r11.s64 = ctx.r31.s64 + -14024;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
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
	// addi r10,r30,-14744
	ctx.r10.s64 = ctx.r30.s64 + -14744;
	// addi r9,r29,-14608
	ctx.r9.s64 = ctx.r29.s64 + -14608;
	// addi r8,r28,-14976
	ctx.r8.s64 = ctx.r28.s64 + -14976;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// addi r7,r27,-14432
	ctx.r7.s64 = ctx.r27.s64 + -14432;
	// addi r6,r26,-16360
	ctx.r6.s64 = ctx.r26.s64 + -16360;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-11728
	ctx.r5.s64 = ctx.r25.s64 + -11728;
	// stw r7,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r7.u32);
	// addi r4,r24,-11888
	ctx.r4.s64 = ctx.r24.s64 + -11888;
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// addi r11,r23,-11768
	ctx.r11.s64 = ctx.r23.s64 + -11768;
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stw r4,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// addi r10,r22,-15200
	ctx.r10.s64 = ctx.r22.s64 + -15200;
	// addi r9,r21,-11624
	ctx.r9.s64 = ctx.r21.s64 + -11624;
	// addi r8,r20,-11608
	ctx.r8.s64 = ctx.r20.s64 + -11608;
	// stw r10,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-13808
	ctx.r7.s64 = ctx.r19.s64 + -13808;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// addi r6,r18,-13600
	ctx.r6.s64 = ctx.r18.s64 + -13600;
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// addi r5,r17,-11568
	ctx.r5.s64 = ctx.r17.s64 + -11568;
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// addi r4,r16,-11592
	ctx.r4.s64 = ctx.r16.s64 + -11592;
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// addi r11,r15,-13440
	ctx.r11.s64 = ctx.r15.s64 + -13440;
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// addi r9,r10,-13416
	ctx.r9.s64 = ctx.r10.s64 + -13416;
	// stw r4,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r4.u32);
	// addi r8,r14,-11536
	ctx.r8.s64 = ctx.r14.s64 + -11536;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r6,-15584
	ctx.r6.s64 = ctx.r6.s64 + -15584;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r6.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// addi r7,r7,-12696
	ctx.r7.s64 = ctx.r7.s64 + -12696;
	// addi r5,r5,-15712
	ctx.r5.s64 = ctx.r5.s64 + -15712;
	// addi r4,r4,-15384
	ctx.r4.s64 = ctx.r4.s64 + -15384;
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// addi r11,r11,-13968
	ctx.r11.s64 = ctx.r11.s64 + -13968;
	// stw r5,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r5.u32);
	// addi r10,r10,-13232
	ctx.r10.s64 = ctx.r10.s64 + -13232;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// addi r9,r9,-12312
	ctx.r9.s64 = ctx.r9.s64 + -12312;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// addi r8,r8,-13048
	ctx.r8.s64 = ctx.r8.s64 + -13048;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// addi r6,r30,-14208
	ctx.r6.s64 = ctx.r30.s64 + -14208;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r8,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r8.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r6,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r6.u32);
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
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// addi r7,r31,-14392
	ctx.r7.s64 = ctx.r31.s64 + -14392;
	// addi r5,r29,-12856
	ctx.r5.s64 = ctx.r29.s64 + -12856;
	// addi r4,r28,-16176
	ctx.r4.s64 = ctx.r28.s64 + -16176;
	// stw r7,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r7.u32);
	// addi r11,r27,-16176
	ctx.r11.s64 = ctx.r27.s64 + -16176;
	// stw r5,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r5.u32);
	// addi r10,r26,-15944
	ctx.r10.s64 = ctx.r26.s64 + -15944;
	// stw r4,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r4.u32);
	// addi r9,r25,-11496
	ctx.r9.s64 = ctx.r25.s64 + -11496;
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// addi r8,r24,-11312
	ctx.r8.s64 = ctx.r24.s64 + -11312;
	// stw r10,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// addi r6,r22,-10912
	ctx.r6.s64 = ctx.r22.s64 + -10912;
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// stw r8,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stw r6,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r6.u32);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// addi r7,r23,-11104
	ctx.r7.s64 = ctx.r23.s64 + -11104;
	// addi r5,r21,-10896
	ctx.r5.s64 = ctx.r21.s64 + -10896;
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// stw r7,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r7.u32);
	// addi r4,r20,-10816
	ctx.r4.s64 = ctx.r20.s64 + -10816;
	// stw r5,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r5.u32);
	// addi r11,r19,-10792
	ctx.r11.s64 = ctx.r19.s64 + -10792;
	// addi r10,r18,-10776
	ctx.r10.s64 = ctx.r18.s64 + -10776;
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// addi r9,r17,-10448
	ctx.r9.s64 = ctx.r17.s64 + -10448;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// addi r8,r16,-10592
	ctx.r8.s64 = ctx.r16.s64 + -10592;
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// stw r9,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r9.u32);
	// addi r7,r15,-10304
	ctx.r7.s64 = ctx.r15.s64 + -10304;
	// stw r8,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// addi r5,r6,-10280
	ctx.r5.s64 = ctx.r6.s64 + -10280;
	// addi r4,r14,-10264
	ctx.r4.s64 = ctx.r14.s64 + -10264;
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// stw r5,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r4.u32);
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
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r11,r11,-10248
	ctx.r11.s64 = ctx.r11.s64 + -10248;
	// addi r10,r10,-10232
	ctx.r10.s64 = ctx.r10.s64 + -10232;
	// addi r9,r9,-10128
	ctx.r9.s64 = ctx.r9.s64 + -10128;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// addi r8,r8,-15160
	ctx.r8.s64 = ctx.r8.s64 + -15160;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// addi r7,r7,-12360
	ctx.r7.s64 = ctx.r7.s64 + -12360;
	// stw r9,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r9.u32);
	// addi r6,r6,-10056
	ctx.r6.s64 = ctx.r6.s64 + -10056;
	// stw r8,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// addi r5,r5,-12528
	ctx.r5.s64 = ctx.r5.s64 + -12528;
	// stw r7,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r7.u32);
	// addi r4,r4,-12152
	ctx.r4.s64 = ctx.r4.s64 + -12152;
	// stw r6,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r6.u32);
	// stw r5,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CDBE4"))) PPC_WEAK_FUNC(sub_820CDBE4);
PPC_FUNC_IMPL(__imp__sub_820CDBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CDBE8"))) PPC_WEAK_FUNC(sub_820CDBE8);
PPC_FUNC_IMPL(__imp__sub_820CDBE8) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cdc1c
	if (!ctx.cr6.eq) goto loc_820CDC1C;
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
loc_820CDC1C:
	// bl 0x8234e920
	ctx.lr = 0x820CDC20;
	sub_8234E920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CDC44"))) PPC_WEAK_FUNC(sub_820CDC44);
PPC_FUNC_IMPL(__imp__sub_820CDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CDC48"))) PPC_WEAK_FUNC(sub_820CDC48);
PPC_FUNC_IMPL(__imp__sub_820CDC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CDC50;
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
	// bgt cr6,0x820cdc6c
	if (ctx.cr6.gt) goto loc_820CDC6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820CDC6C:
	// add. r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x820cdc9c
	if (ctx.cr0.eq) goto loc_820CDC9C;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x820CDC80;
	sub_8236A338(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cdc9c
	if (ctx.cr6.eq) goto loc_820CDC9C;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8233e4e0
	ctx.lr = 0x820CDC9C;
	sub_8233E4E0(ctx, base);
loc_820CDC9C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x820CDCA4;
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

__attribute__((alias("__imp__sub_820CDCB4"))) PPC_WEAK_FUNC(sub_820CDCB4);
PPC_FUNC_IMPL(__imp__sub_820CDCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CDCB8"))) PPC_WEAK_FUNC(sub_820CDCB8);
PPC_FUNC_IMPL(__imp__sub_820CDCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bne cr6,0x820cdcec
	if (!ctx.cr6.eq) goto loc_820CDCEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820cdc48
	ctx.lr = 0x820CDCEC;
	sub_820CDC48(ctx, base);
loc_820CDCEC:
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
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r6,3(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CDD40"))) PPC_WEAK_FUNC(sub_820CDD40);
PPC_FUNC_IMPL(__imp__sub_820CDD40) {
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
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cdd74
	if (ctx.cr6.eq) goto loc_820CDD74;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820cdcb8
	ctx.lr = 0x820CDD74;
	sub_820CDCB8(ctx, base);
loc_820CDD74:
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

__attribute__((alias("__imp__sub_820CDD8C"))) PPC_WEAK_FUNC(sub_820CDD8C);
PPC_FUNC_IMPL(__imp__sub_820CDD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CDD90"))) PPC_WEAK_FUNC(sub_820CDD90);
PPC_FUNC_IMPL(__imp__sub_820CDD90) {
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
	// lwz r3,23856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cddcc
	if (ctx.cr6.eq) goto loc_820CDDCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CDDC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23856, ctx.r11.u32);
loc_820CDDCC:
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

__attribute__((alias("__imp__sub_820CDDE0"))) PPC_WEAK_FUNC(sub_820CDDE0);
PPC_FUNC_IMPL(__imp__sub_820CDDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-32424
	ctx.r10.s64 = ctx.r11.s64 + -32424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8236a3f0
	ctx.lr = 0x820CDE10;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820cde38
	if (ctx.cr6.eq) goto loc_820CDE38;
	// bl 0x8236a3f0
	ctx.lr = 0x820CDE34;
	sub_8236A3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820CDE38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CDE50"))) PPC_WEAK_FUNC(sub_820CDE50);
PPC_FUNC_IMPL(__imp__sub_820CDE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32183
	ctx.r31.s64 = -2109145088;
	// lwz r3,23856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cdef0
	if (!ctx.cr6.eq) goto loc_820CDEF0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8236a338
	ctx.lr = 0x820CDE7C;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cdf08
	if (ctx.cr6.eq) goto loc_820CDF08;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r3,23856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23856, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-32424
	ctx.r10.s64 = ctx.r11.s64 + -32424;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// bl 0x820cde50
	ctx.lr = 0x820CDEAC;
	sub_820CDE50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-8816
	ctx.r4.s64 = ctx.r11.s64 + -8816;
	// bl 0x820cdd40
	ctx.lr = 0x820CDEB8;
	sub_820CDD40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,23856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23856);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820cdef0
	if (!ctx.cr6.eq) goto loc_820CDEF0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cdee4
	if (ctx.cr6.eq) goto loc_820CDEE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CDEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820CDEE4:
	// stw r30,23856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23856, ctx.r30.u32);
loc_820CDEE8:
	// bl 0x82247498
	ctx.lr = 0x820CDEEC;
	sub_82247498(ctx, base);
	// lwz r3,23856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23856);
loc_820CDEF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820CDF08:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23856, ctx.r11.u32);
	// b 0x820cdee8
	goto loc_820CDEE8;
}

__attribute__((alias("__imp__sub_820CDF14"))) PPC_WEAK_FUNC(sub_820CDF14);
PPC_FUNC_IMPL(__imp__sub_820CDF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CDF18"))) PPC_WEAK_FUNC(sub_820CDF18);
PPC_FUNC_IMPL(__imp__sub_820CDF18) {
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
	// lwz r3,23912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cdf54
	if (ctx.cr6.eq) goto loc_820CDF54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CDF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23912, ctx.r11.u32);
loc_820CDF54:
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

__attribute__((alias("__imp__sub_820CDF68"))) PPC_WEAK_FUNC(sub_820CDF68);
PPC_FUNC_IMPL(__imp__sub_820CDF68) {
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
	// lwz r3,23912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820cdff4
	if (!ctx.cr6.eq) goto loc_820CDFF4;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8236a338
	ctx.lr = 0x820CDF90;
	sub_8236A338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cdfe4
	if (ctx.cr6.eq) goto loc_820CDFE4;
	// bl 0x823701f8
	ctx.lr = 0x820CDF9C;
	sub_823701F8(ctx, base);
	// stw r3,23912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23912, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cdfec
	if (ctx.cr6.eq) goto loc_820CDFEC;
	// bl 0x820cde50
	ctx.lr = 0x820CDFAC;
	sub_820CDE50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-8424
	ctx.r4.s64 = ctx.r11.s64 + -8424;
	// bl 0x820cdd40
	ctx.lr = 0x820CDFB8;
	sub_820CDD40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,23912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23912);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820cdff4
	if (!ctx.cr6.eq) goto loc_820CDFF4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cdfe4
	if (ctx.cr6.eq) goto loc_820CDFE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820CDFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820CDFE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23912, ctx.r11.u32);
loc_820CDFEC:
	// bl 0x82247498
	ctx.lr = 0x820CDFF0;
	sub_82247498(ctx, base);
	// lwz r3,23912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23912);
loc_820CDFF4:
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

__attribute__((alias("__imp__sub_820CE008"))) PPC_WEAK_FUNC(sub_820CE008);
PPC_FUNC_IMPL(__imp__sub_820CE008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ce07c
	if (!ctx.cr6.eq) goto loc_820CE07C;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820ce068
	if (!ctx.cr6.lt) goto loc_820CE068;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_820CE04C:
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820ce074
	if (!ctx.cr6.eq) goto loc_820CE074;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820ce04c
	if (ctx.cr6.lt) goto loc_820CE04C;
loc_820CE068:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_820CE074:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_820CE07C:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE084"))) PPC_WEAK_FUNC(sub_820CE084);
PPC_FUNC_IMPL(__imp__sub_820CE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE088"))) PPC_WEAK_FUNC(sub_820CE088);
PPC_FUNC_IMPL(__imp__sub_820CE088) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x820ce0d8
	if (ctx.cr6.eq) goto loc_820CE0D8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_820CE0B8:
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
	// bne 0x820ce0b8
	if (!ctx.cr0.eq) goto loc_820CE0B8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_820CE0D8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x820ce008
	ctx.lr = 0x820CE0E0;
	sub_820CE008(ctx, base);
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

__attribute__((alias("__imp__sub_820CE0F8"))) PPC_WEAK_FUNC(sub_820CE0F8);
PPC_FUNC_IMPL(__imp__sub_820CE0F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ce10c
	if (!ctx.cr6.eq) goto loc_820CE10C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CE10C:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ce140
	if (ctx.cr6.eq) goto loc_820CE140;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_820CE124:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820ce140
	if (!ctx.cr6.eq) goto loc_820CE140;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820ce124
	if (ctx.cr6.lt) goto loc_820CE124;
loc_820CE140:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE150"))) PPC_WEAK_FUNC(sub_820CE150);
PPC_FUNC_IMPL(__imp__sub_820CE150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-16888
	ctx.r30.s64 = ctx.r11.s64 + -16888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cdc60
	ctx.lr = 0x820CE178;
	sub_821CDC60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// bl 0x821cc910
	ctx.lr = 0x820CE1A0;
	sub_821CC910(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x821cc178
	ctx.lr = 0x820CE1BC;
	sub_821CC178(ctx, base);
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

__attribute__((alias("__imp__sub_820CE1D8"))) PPC_WEAK_FUNC(sub_820CE1D8);
PPC_FUNC_IMPL(__imp__sub_820CE1D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820ce520
	sub_820CE520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE1DC"))) PPC_WEAK_FUNC(sub_820CE1DC);
PPC_FUNC_IMPL(__imp__sub_820CE1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE1E0"))) PPC_WEAK_FUNC(sub_820CE1E0);
PPC_FUNC_IMPL(__imp__sub_820CE1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16888
	ctx.r9.s64 = ctx.r10.s64 + -16888;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE1F4"))) PPC_WEAK_FUNC(sub_820CE1F4);
PPC_FUNC_IMPL(__imp__sub_820CE1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE1F8"))) PPC_WEAK_FUNC(sub_820CE1F8);
PPC_FUNC_IMPL(__imp__sub_820CE1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r10,-16888
	ctx.r9.s64 = ctx.r10.s64 + -16888;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x82247908
	sub_82247908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE214"))) PPC_WEAK_FUNC(sub_820CE214);
PPC_FUNC_IMPL(__imp__sub_820CE214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE218"))) PPC_WEAK_FUNC(sub_820CE218);
PPC_FUNC_IMPL(__imp__sub_820CE218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CE220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-16888
	ctx.r29.s64 = ctx.r11.s64 + -16888;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x823052d8
	ctx.lr = 0x820CE23C;
	sub_823052D8(ctx, base);
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ce268
	if (ctx.cr6.eq) goto loc_820CE268;
loc_820CE248:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820ce2c4
	if (ctx.cr6.eq) goto loc_820CE2C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ce268
	if (ctx.cr6.eq) goto loc_820CE268;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x820ce248
	if (!ctx.cr6.eq) goto loc_820CE248;
loc_820CE268:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82082030
	ctx.lr = 0x820CE27C;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x820ce298
	if (ctx.cr6.eq) goto loc_820CE298;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x820ce29c
	goto loc_820CE29C;
loc_820CE298:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820CE29C:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x820ce2c0
	if (!ctx.cr6.eq) goto loc_820CE2C0;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x823051a8
	ctx.lr = 0x820CE2B8;
	sub_823051A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820CE2C0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820CE2C4:
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x823051a8
	ctx.lr = 0x820CE2CC;
	sub_823051A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE2D4"))) PPC_WEAK_FUNC(sub_820CE2D4);
PPC_FUNC_IMPL(__imp__sub_820CE2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE2D8"))) PPC_WEAK_FUNC(sub_820CE2D8);
PPC_FUNC_IMPL(__imp__sub_820CE2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CE2E0;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82082030
	ctx.lr = 0x820CE304;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820ce328
	if (ctx.cr6.eq) goto loc_820CE328;
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
	// b 0x820ce32c
	goto loc_820CE32C;
loc_820CE328:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_820CE32C:
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// bl 0x821cc0e8
	ctx.lr = 0x820CE340;
	sub_821CC0E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE348"))) PPC_WEAK_FUNC(sub_820CE348);
PPC_FUNC_IMPL(__imp__sub_820CE348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82082030
	ctx.lr = 0x820CE378;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ce39c
	if (ctx.cr6.eq) goto loc_820CE39C;
	// li r11,0
	ctx.r11.s64 = 0;
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
	// b 0x820ce3a0
	goto loc_820CE3A0;
loc_820CE39C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CE3A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821cc0e8
	ctx.lr = 0x820CE3B4;
	sub_821CC0E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE3CC"))) PPC_WEAK_FUNC(sub_820CE3CC);
PPC_FUNC_IMPL(__imp__sub_820CE3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE3D0"))) PPC_WEAK_FUNC(sub_820CE3D0);
PPC_FUNC_IMPL(__imp__sub_820CE3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CE3D8;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82082030
	ctx.lr = 0x820CE3FC;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ce420
	if (ctx.cr6.eq) goto loc_820CE420;
	// li r11,0
	ctx.r11.s64 = 0;
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
	// b 0x820ce424
	goto loc_820CE424;
loc_820CE420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CE424:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// bl 0x821cc0e8
	ctx.lr = 0x820CE43C;
	sub_821CC0E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE444"))) PPC_WEAK_FUNC(sub_820CE444);
PPC_FUNC_IMPL(__imp__sub_820CE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE448"))) PPC_WEAK_FUNC(sub_820CE448);
PPC_FUNC_IMPL(__imp__sub_820CE448) {
	PPC_FUNC_PROLOGUE();
	// b 0x821cc308
	sub_821CC308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE44C"))) PPC_WEAK_FUNC(sub_820CE44C);
PPC_FUNC_IMPL(__imp__sub_820CE44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE450"))) PPC_WEAK_FUNC(sub_820CE450);
PPC_FUNC_IMPL(__imp__sub_820CE450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-16888
	ctx.r10.s64 = ctx.r11.s64 + -16888;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE460"))) PPC_WEAK_FUNC(sub_820CE460);
PPC_FUNC_IMPL(__imp__sub_820CE460) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-16888
	ctx.r9.s64 = ctx.r10.s64 + -16888;
	// stb r11,769(r9)
	PPC_STORE_U8(ctx.r9.u32 + 769, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE474"))) PPC_WEAK_FUNC(sub_820CE474);
PPC_FUNC_IMPL(__imp__sub_820CE474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE478"))) PPC_WEAK_FUNC(sub_820CE478);
PPC_FUNC_IMPL(__imp__sub_820CE478) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820CE480;
	__savegprlr_27(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r11,r11,-7856
	ctx.r11.s64 = ctx.r11.s64 + -7856;
	// addi r10,r10,-7720
	ctx.r10.s64 = ctx.r10.s64 + -7720;
	// addi r9,r9,-7712
	ctx.r9.s64 = ctx.r9.s64 + -7712;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,-7688
	ctx.r8.s64 = ctx.r8.s64 + -7688;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r7,-9784
	ctx.r7.s64 = ctx.r7.s64 + -9784;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// lis r29,-32226
	ctx.r29.s64 = -2111963136;
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// addi r6,r6,-7656
	ctx.r6.s64 = ctx.r6.s64 + -7656;
	// addi r5,r5,-7464
	ctx.r5.s64 = ctx.r5.s64 + -7464;
	// addi r4,r4,-7352
	ctx.r4.s64 = ctx.r4.s64 + -7352;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r11,r31,-7216
	ctx.r11.s64 = ctx.r31.s64 + -7216;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// addi r10,r30,-7096
	ctx.r10.s64 = ctx.r30.s64 + -7096;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// addi r9,r29,-21912
	ctx.r9.s64 = ctx.r29.s64 + -21912;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r8,r28,-7088
	ctx.r8.s64 = ctx.r28.s64 + -7088;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r7,r27,-7072
	ctx.r7.s64 = ctx.r27.s64 + -7072;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE520"))) PPC_WEAK_FUNC(sub_820CE520);
PPC_FUNC_IMPL(__imp__sub_820CE520) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ce588
	if (!ctx.cr6.eq) goto loc_820CE588;
	// bl 0x820ddca8
	ctx.lr = 0x820CE540;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ce568
	if (ctx.cr6.eq) goto loc_820CE568;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-16888
	ctx.r9.s64 = ctx.r10.s64 + -16888;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CE568:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16888
	ctx.r9.s64 = ctx.r10.s64 + -16888;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CE588:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ce5b8
	if (!ctx.cr6.eq) goto loc_820CE5B8;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16888
	ctx.r9.s64 = ctx.r10.s64 + -16888;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CE5B8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820ce5c8
	if (!ctx.cr6.eq) goto loc_820CE5C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ce5dc
	goto loc_820CE5DC;
loc_820CE5C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x820CE5DC;
	sub_820F3178(ctx, base);
loc_820CE5DC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-16888
	ctx.r10.s64 = ctx.r11.s64 + -16888;
	// stw r3,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE5F8"))) PPC_WEAK_FUNC(sub_820CE5F8);
PPC_FUNC_IMPL(__imp__sub_820CE5F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820ce648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CE648;
	// bdzf 4*cr6+eq,0x820ce654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CE654;
	// bne cr6,0x820ce660
	if (!ctx.cr6.eq) goto loc_820CE660;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
loc_820CE648:
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
loc_820CE654:
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
loc_820CE660:
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE66C"))) PPC_WEAK_FUNC(sub_820CE66C);
PPC_FUNC_IMPL(__imp__sub_820CE66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE670"))) PPC_WEAK_FUNC(sub_820CE670);
PPC_FUNC_IMPL(__imp__sub_820CE670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f1,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 472, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE69C"))) PPC_WEAK_FUNC(sub_820CE69C);
PPC_FUNC_IMPL(__imp__sub_820CE69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE6A0"))) PPC_WEAK_FUNC(sub_820CE6A0);
PPC_FUNC_IMPL(__imp__sub_820CE6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820ce6c4
	if (!ctx.cr6.lt) goto loc_820CE6C4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ce6d4
	if (!ctx.cr6.eq) goto loc_820CE6D4;
loc_820CE6C4:
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
loc_820CE6D4:
	// lfs f1,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE6DC"))) PPC_WEAK_FUNC(sub_820CE6DC);
PPC_FUNC_IMPL(__imp__sub_820CE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE6E0"))) PPC_WEAK_FUNC(sub_820CE6E0);
PPC_FUNC_IMPL(__imp__sub_820CE6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820CE6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820ce754
	if (ctx.cr6.eq) goto loc_820CE754;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ce754
	if (ctx.cr6.eq) goto loc_820CE754;
	// bl 0x820ddca8
	ctx.lr = 0x820CE70C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ce738
	if (ctx.cr6.eq) goto loc_820CE738;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ce730
	if (!ctx.cr6.eq) goto loc_820CE730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820CE72C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820CE730:
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x820ce73c
	goto loc_820CE73C;
loc_820CE738:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_820CE73C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821b0e28
	ctx.lr = 0x820CE754;
	sub_821B0E28(ctx, base);
loc_820CE754:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE75C"))) PPC_WEAK_FUNC(sub_820CE75C);
PPC_FUNC_IMPL(__imp__sub_820CE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE760"))) PPC_WEAK_FUNC(sub_820CE760);
PPC_FUNC_IMPL(__imp__sub_820CE760) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,16392
	ctx.r9.s64 = ctx.r11.s64 + 16392;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE79C"))) PPC_WEAK_FUNC(sub_820CE79C);
PPC_FUNC_IMPL(__imp__sub_820CE79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE7A0"))) PPC_WEAK_FUNC(sub_820CE7A0);
PPC_FUNC_IMPL(__imp__sub_820CE7A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r9,2,28,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE7E4"))) PPC_WEAK_FUNC(sub_820CE7E4);
PPC_FUNC_IMPL(__imp__sub_820CE7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE7E8"))) PPC_WEAK_FUNC(sub_820CE7E8);
PPC_FUNC_IMPL(__imp__sub_820CE7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,16392
	ctx.r9.s64 = ctx.r11.s64 + 16392;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821bb088
	sub_821BB088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE808"))) PPC_WEAK_FUNC(sub_820CE808);
PPC_FUNC_IMPL(__imp__sub_820CE808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE80C"))) PPC_WEAK_FUNC(sub_820CE80C);
PPC_FUNC_IMPL(__imp__sub_820CE80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE810"))) PPC_WEAK_FUNC(sub_820CE810);
PPC_FUNC_IMPL(__imp__sub_820CE810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820ce834
	if (!ctx.cr6.lt) goto loc_820CE834;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ce83c
	if (!ctx.cr6.eq) goto loc_820CE83C;
loc_820CE834:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CE83C:
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ce888
	if (!ctx.cr6.eq) goto loc_820CE888;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820ce864
	if (ctx.cr6.eq) goto loc_820CE864;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ce878
	goto loc_820CE878;
loc_820CE864:
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,0,15,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FE00;
	// rlwinm r10,r10,0,22,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF03FF;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820CE878:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820ce88c
	if (!ctx.cr6.eq) goto loc_820CE88C;
loc_820CE888:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820CE88C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE894"))) PPC_WEAK_FUNC(sub_820CE894);
PPC_FUNC_IMPL(__imp__sub_820CE894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE898"))) PPC_WEAK_FUNC(sub_820CE898);
PPC_FUNC_IMPL(__imp__sub_820CE898) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820ce8bc
	if (!ctx.cr6.lt) goto loc_820CE8BC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820ce8c4
	if (!ctx.cr6.eq) goto loc_820CE8C4;
loc_820CE8BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820CE8C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE8CC"))) PPC_WEAK_FUNC(sub_820CE8CC);
PPC_FUNC_IMPL(__imp__sub_820CE8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE8D0"))) PPC_WEAK_FUNC(sub_820CE8D0);
PPC_FUNC_IMPL(__imp__sub_820CE8D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820ce8f4
	if (!ctx.cr6.lt) goto loc_820CE8F4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ce8fc
	if (!ctx.cr6.eq) goto loc_820CE8FC;
loc_820CE8F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820CE8FC:
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ce920
	if (!ctx.cr6.eq) goto loc_820CE920;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ce924
	if (ctx.cr6.eq) goto loc_820CE924;
loc_820CE920:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820CE924:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE92C"))) PPC_WEAK_FUNC(sub_820CE92C);
PPC_FUNC_IMPL(__imp__sub_820CE92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE930"))) PPC_WEAK_FUNC(sub_820CE930);
PPC_FUNC_IMPL(__imp__sub_820CE930) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820ce960
	if (!ctx.cr6.lt) goto loc_820CE960;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ce960
	if (ctx.cr6.eq) goto loc_820CE960;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
loc_820CE960:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE968"))) PPC_WEAK_FUNC(sub_820CE968);
PPC_FUNC_IMPL(__imp__sub_820CE968) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820ce998
	if (!ctx.cr6.lt) goto loc_820CE998;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ce998
	if (ctx.cr6.eq) goto loc_820CE998;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_820CE998:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE9A0"))) PPC_WEAK_FUNC(sub_820CE9A0);
PPC_FUNC_IMPL(__imp__sub_820CE9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821b07f0
	sub_821B07F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CE9A4"))) PPC_WEAK_FUNC(sub_820CE9A4);
PPC_FUNC_IMPL(__imp__sub_820CE9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE9A8"))) PPC_WEAK_FUNC(sub_820CE9A8);
PPC_FUNC_IMPL(__imp__sub_820CE9A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820ce9d4
	if (!ctx.cr6.lt) goto loc_820CE9D4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ce9d4
	if (ctx.cr6.eq) goto loc_820CE9D4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_820CE9D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CE9DC"))) PPC_WEAK_FUNC(sub_820CE9DC);
PPC_FUNC_IMPL(__imp__sub_820CE9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CE9E0"))) PPC_WEAK_FUNC(sub_820CE9E0);
PPC_FUNC_IMPL(__imp__sub_820CE9E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820cea28
	if (!ctx.cr6.lt) goto loc_820CEA28;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cea28
	if (ctx.cr6.eq) goto loc_820CEA28;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820cea28
	if (ctx.cr0.eq) goto loc_820CEA28;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 | ctx.r4.u64;
	// blr 
	return;
loc_820CEA28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CEA30"))) PPC_WEAK_FUNC(sub_820CEA30);
PPC_FUNC_IMPL(__imp__sub_820CEA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,16392
	ctx.r9.s64 = ctx.r11.s64 + 16392;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CEA48"))) PPC_WEAK_FUNC(sub_820CEA48);
PPC_FUNC_IMPL(__imp__sub_820CEA48) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r8,r11,16392
	ctx.r8.s64 = ctx.r11.s64 + 16392;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820cea94
	if (ctx.cr6.eq) goto loc_820CEA94;
	// li r5,152
	ctx.r5.s64 = 152;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820CEA80;
	sub_8233E4E0(ctx, base);
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
loc_820CEA94:
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

__attribute__((alias("__imp__sub_820CEAA8"))) PPC_WEAK_FUNC(sub_820CEAA8);
PPC_FUNC_IMPL(__imp__sub_820CEAA8) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r8,r11,16392
	ctx.r8.s64 = ctx.r11.s64 + 16392;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820ceaf4
	if (ctx.cr6.eq) goto loc_820CEAF4;
	// li r5,148
	ctx.r5.s64 = 148;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820CEAE0;
	sub_8233E4E0(ctx, base);
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
loc_820CEAF4:
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

__attribute__((alias("__imp__sub_820CEB08"))) PPC_WEAK_FUNC(sub_820CEB08);
PPC_FUNC_IMPL(__imp__sub_820CEB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// b 0x821b0ff0
	sub_821B0FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CEB18"))) PPC_WEAK_FUNC(sub_820CEB18);
PPC_FUNC_IMPL(__imp__sub_820CEB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// b 0x821b10b8
	sub_821B10B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CEB28"))) PPC_WEAK_FUNC(sub_820CEB28);
PPC_FUNC_IMPL(__imp__sub_820CEB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820CEB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820ceb84
	if (!ctx.cr6.eq) goto loc_820CEB84;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-29208
	ctx.r10.s64 = ctx.r11.s64 + -29208;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cebc0
	if (ctx.cr6.eq) goto loc_820CEBC0;
	// clrlwi r29,r4,24
	ctx.r29.u64 = ctx.r4.u32 & 0xFF;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_820CEB58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x820ceb6c
	if (!ctx.cr6.eq) goto loc_820CEB6C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820CEB6C:
	// bl 0x821ace70
	ctx.lr = 0x820CEB70;
	sub_821ACE70(ctx, base);
	// lwz r31,440(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820ceb58
	if (!ctx.cr6.eq) goto loc_820CEB58;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820CEB84:
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820cebc0
	if (!ctx.cr6.lt) goto loc_820CEBC0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820cebc0
	if (ctx.cr6.eq) goto loc_820CEBC0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cebbc
	if (!ctx.cr6.eq) goto loc_820CEBBC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820CEBBC:
	// bl 0x821ace70
	ctx.lr = 0x820CEBC0;
	sub_821ACE70(ctx, base);
loc_820CEBC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

