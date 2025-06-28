#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821653E0"))) PPC_WEAK_FUNC(sub_821653E0);
PPC_FUNC_IMPL(__imp__sub_821653E0) {
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
	// bl 0x82165440
	ctx.lr = 0x82165400;
	sub_82165440(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165420
	if (ctx.cr6.eq) goto loc_82165420;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82165420
	if (ctx.cr6.eq) goto loc_82165420;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82165420;
	sub_82080000(ctx, base);
loc_82165420:
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

__attribute__((alias("__imp__sub_8216543C"))) PPC_WEAK_FUNC(sub_8216543C);
PPC_FUNC_IMPL(__imp__sub_8216543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165440"))) PPC_WEAK_FUNC(sub_82165440);
PPC_FUNC_IMPL(__imp__sub_82165440) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-28612
	ctx.r9.s64 = ctx.r10.s64 + -28612;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82165478
	if (ctx.cr6.eq) goto loc_82165478;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82165478;
	sub_82080000(ctx, base);
loc_82165478:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-28560
	ctx.r9.s64 = ctx.r11.s64 + -28560;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82172be8
	ctx.lr = 0x82165494;
	sub_82172BE8(ctx, base);
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

__attribute__((alias("__imp__sub_821654A8"))) PPC_WEAK_FUNC(sub_821654A8);
PPC_FUNC_IMPL(__imp__sub_821654A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821654B0;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8304(r1)
	ea = -8304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8208d070
	ctx.lr = 0x821654D0;
	sub_8208D070(ctx, base);
	// stw r3,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r30,8192
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8192, ctx.xer);
	// ble cr6,0x821654f4
	if (!ctx.cr6.gt) goto loc_821654F4;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,-28688
	ctx.r9.s64 = ctx.r10.s64 + -28688;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
loc_821654F4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82165504;
	sub_8208CFB0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,15640
	ctx.r11.s64 = ctx.r11.s64 + 15640;
	// addi r11,r11,1168
	ctx.r11.s64 = ctx.r11.s64 + 1168;
loc_82165514:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165540
	if (ctx.cr6.eq) goto loc_82165540;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,36
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 36, ctx.xer);
	// blt cr6,0x82165514
	if (ctx.cr6.lt) goto loc_82165514;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82165540:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82165558
	if (!ctx.cr6.eq) goto loc_82165558;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82165558:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cab0
	ctx.lr = 0x82165568;
	sub_8208CAB0(ctx, base);
	// stw r31,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r31.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82165574"))) PPC_WEAK_FUNC(sub_82165574);
PPC_FUNC_IMPL(__imp__sub_82165574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165578"))) PPC_WEAK_FUNC(sub_82165578);
PPC_FUNC_IMPL(__imp__sub_82165578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82165580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821655a4
	if (!ctx.cr6.eq) goto loc_821655A4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821655A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821655B4;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8208cfb0
	ctx.lr = 0x821655CC;
	sub_8208CFB0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821655e4
	if (!ctx.cr6.eq) goto loc_821655E4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_821655E4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82165670
	if (ctx.cr6.lt) goto loc_82165670;
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216564C:
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// blt cr6,0x8216564c
	if (ctx.cr6.lt) goto loc_8216564C;
loc_82165670:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82165684
	if (!ctx.cr6.lt) goto loc_82165684;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82165684:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821656A4"))) PPC_WEAK_FUNC(sub_821656A4);
PPC_FUNC_IMPL(__imp__sub_821656A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821656A8"))) PPC_WEAK_FUNC(sub_821656A8);
PPC_FUNC_IMPL(__imp__sub_821656A8) {
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
	// addi r10,r11,-27456
	ctx.r10.s64 = ctx.r11.s64 + -27456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82165440
	ctx.lr = 0x821656D4;
	sub_82165440(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821656ec
	if (ctx.cr6.eq) goto loc_821656EC;
	// bl 0x82165708
	ctx.lr = 0x821656E8;
	sub_82165708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821656EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165704"))) PPC_WEAK_FUNC(sub_82165704);
PPC_FUNC_IMPL(__imp__sub_82165704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165708"))) PPC_WEAK_FUNC(sub_82165708);
PPC_FUNC_IMPL(__imp__sub_82165708) {
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
	// beq cr6,0x82165804
	if (ctx.cr6.eq) goto loc_82165804;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,5976
	ctx.r31.s64 = ctx.r11.s64 + 5976;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216573C;
	sub_823052D8(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
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
	// bne cr6,0x821657f8
	if (!ctx.cr6.eq) goto loc_821657F8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821657f8
	if (ctx.cr6.eq) goto loc_821657F8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821657f8
	if (!ctx.cr6.lt) goto loc_821657F8;
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
	// beq cr6,0x821657d0
	if (ctx.cr6.eq) goto loc_821657D0;
loc_821657A8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821657c8
	if (ctx.cr6.eq) goto loc_821657C8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821657a8
	if (!ctx.cr6.eq) goto loc_821657A8;
	// b 0x821657d0
	goto loc_821657D0;
loc_821657C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821657D0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821657e8
	if (!ctx.cr6.eq) goto loc_821657E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821657E8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821657F4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821657F8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82165804;
	sub_823051A8(ctx, base);
loc_82165804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216581C"))) PPC_WEAK_FUNC(sub_8216581C);
PPC_FUNC_IMPL(__imp__sub_8216581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165820"))) PPC_WEAK_FUNC(sub_82165820);
PPC_FUNC_IMPL(__imp__sub_82165820) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,5976
	ctx.r31.s64 = ctx.r11.s64 + 5976;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82165848;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216586c
	if (ctx.cr6.eq) goto loc_8216586C;
loc_82165854:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216589c
	if (!ctx.cr6.eq) goto loc_8216589C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82165854
	if (!ctx.cr6.eq) goto loc_82165854;
loc_8216586C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821658c4
	if (!ctx.cr6.eq) goto loc_821658C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82165920
	ctx.lr = 0x82165880;
	sub_82165920(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821658c4
	if (!ctx.cr6.eq) goto loc_821658C4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82165894;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82165908
	goto loc_82165908;
loc_8216589C:
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
	// b 0x821658f8
	goto loc_821658F8;
loc_821658C4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,116
	ctx.r10.s64 = ctx.r11.s64 + 116;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
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
loc_821658F8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82165904;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82165908:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165920"))) PPC_WEAK_FUNC(sub_82165920);
PPC_FUNC_IMPL(__imp__sub_82165920) {
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
	// rlwinm r11,r3,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
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
	ctx.lr = 0x8216594C;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,5976
	ctx.r11.s64 = ctx.r11.s64 + 5976;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165968
	if (ctx.cr6.eq) goto loc_82165968;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8216596c
	goto loc_8216596C;
loc_82165968:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8216596C:
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
	// beq cr6,0x821659ac
	if (ctx.cr6.eq) goto loc_821659AC;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821659A4:
	// stwu r3,128(r10)
	ea = 128 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821659a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821659A4;
loc_821659AC:
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

__attribute__((alias("__imp__sub_821659CC"))) PPC_WEAK_FUNC(sub_821659CC);
PPC_FUNC_IMPL(__imp__sub_821659CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821659D0"))) PPC_WEAK_FUNC(sub_821659D0);
PPC_FUNC_IMPL(__imp__sub_821659D0) {
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
	// addi r10,r11,-28560
	ctx.r10.s64 = ctx.r11.s64 + -28560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x821659FC;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82165a14
	if (ctx.cr6.eq) goto loc_82165A14;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82165A14;
	sub_82080000(ctx, base);
loc_82165A14:
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

__attribute__((alias("__imp__sub_82165A30"))) PPC_WEAK_FUNC(sub_82165A30);
PPC_FUNC_IMPL(__imp__sub_82165A30) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82165a54
	if (!ctx.cr6.gt) goto loc_82165A54;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82165a58
	if (ctx.cr6.eq) goto loc_82165A58;
loc_82165A54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82165A58:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165A60"))) PPC_WEAK_FUNC(sub_82165A60);
PPC_FUNC_IMPL(__imp__sub_82165A60) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82165a84
	if (ctx.cr6.gt) goto loc_82165A84;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82165a88
	if (!ctx.cr6.eq) goto loc_82165A88;
loc_82165A84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82165A88:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165A90"))) PPC_WEAK_FUNC(sub_82165A90);
PPC_FUNC_IMPL(__imp__sub_82165A90) {
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
	// addi r10,r11,-28508
	ctx.r10.s64 = ctx.r11.s64 + -28508;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x82165ABC;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82165ad4
	if (ctx.cr6.eq) goto loc_82165AD4;
	// bl 0x821668e8
	ctx.lr = 0x82165AD0;
	sub_821668E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82165AD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165AEC"))) PPC_WEAK_FUNC(sub_82165AEC);
PPC_FUNC_IMPL(__imp__sub_82165AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82165AF0"))) PPC_WEAK_FUNC(sub_82165AF0);
PPC_FUNC_IMPL(__imp__sub_82165AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x82165AF8;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r10,-1008
	ctx.r11.s64 = ctx.r10.s64 + -1008;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8216604c
	if (ctx.cr6.gt) goto loc_8216604C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82165f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82165F98;
	// bdzf 4*cr6+eq,0x82165fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82165FBC;
	// bdzf 4*cr6+eq,0x82165fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82165FBC;
	// bne cr6,0x82166034
	if (!ctx.cr6.eq) goto loc_82166034;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82165B48;
	sub_8208CFB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// rlwinm r26,r11,8,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// rlwinm r25,r11,1,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82165b7c
	if (!ctx.cr6.eq) goto loc_82165B7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82165B7C:
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82165B90;
	sub_8208CFB0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8208cfb0
	ctx.lr = 0x82165BB0;
	sub_8208CFB0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r20,r11,31376
	ctx.r20.s64 = ctx.r11.s64 + 31376;
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,48(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82165d18
	if (ctx.cr6.eq) goto loc_82165D18;
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165bf4
	if (ctx.cr6.eq) goto loc_82165BF4;
loc_82165BDC:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82165bf4
	if (ctx.cr6.eq) goto loc_82165BF4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82165bdc
	if (!ctx.cr6.eq) goto loc_82165BDC;
loc_82165BF4:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r10,15640
	ctx.r5.s64 = ctx.r10.s64 + 15640;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82165c50
	if (!ctx.cr6.eq) goto loc_82165C50;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216604c
	if (ctx.cr6.eq) goto loc_8216604C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82165C30:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r21,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// bdnz 0x82165c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165C30;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82165C50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82165ec8
	if (ctx.cr6.eq) goto loc_82165EC8;
	// lwz r6,2052(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2052);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82165C74:
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// divwu r3,r8,r11
	ctx.r3.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165d08
	if (ctx.cr6.eq) goto loc_82165D08;
loc_82165CA0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82165cbc
	if (ctx.cr6.eq) goto loc_82165CBC;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82165ca0
	if (!ctx.cr6.eq) goto loc_82165CA0;
	// b 0x82165d08
	goto loc_82165D08;
loc_82165CBC:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82165d08
	if (ctx.cr6.eq) goto loc_82165D08;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stwx r26,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfsx f0,r4,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfsx f13,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,2052(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2052);
	// fadds f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82165D08:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bdnz 0x82165c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165C74;
	// b 0x82165ec8
	goto loc_82165EC8;
loc_82165D18:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165e34
	if (ctx.cr6.eq) goto loc_82165E34;
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165d48
	if (ctx.cr6.eq) goto loc_82165D48;
loc_82165D30:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82165d48
	if (ctx.cr6.eq) goto loc_82165D48;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82165d30
	if (!ctx.cr6.eq) goto loc_82165D30;
loc_82165D48:
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r9,15640
	ctx.r8.s64 = ctx.r9.s64 + 15640;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// lwz r6,44(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// rlwinm r5,r6,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82165da4
	if (!ctx.cr6.eq) goto loc_82165DA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216604c
	if (ctx.cr6.eq) goto loc_8216604C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82165D84:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r21,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// bdnz 0x82165d84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165D84;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82165DA4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x8208cf38
	ctx.lr = 0x82165DB4;
	sub_8208CF38(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82165ec8
	if (ctx.cr6.eq) goto loc_82165EC8;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82165DD4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x8209c6b8
	ctx.lr = 0x82165DE0;
	sub_8209C6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165e20
	if (ctx.cr6.eq) goto loc_82165E20;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stwx r26,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r26.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfsx f0,r9,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, temp.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfsx f13,r8,r28
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82165E20:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bne 0x82165dd4
	if (!ctx.cr0.eq) goto loc_82165DD4;
	// b 0x82165ec8
	goto loc_82165EC8;
loc_82165E34:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// beq cr6,0x82165ec8
	if (ctx.cr6.eq) goto loc_82165EC8;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r26,r10,-7224
	ctx.r26.s64 = ctx.r10.s64 + -7224;
loc_82165E68:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r5,r27,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82176780
	ctx.lr = 0x82165E78;
	sub_82176780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165eb8
	if (ctx.cr6.eq) goto loc_82165EB8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stwx r23,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r23.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfsx f0,r9,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, temp.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfsx f13,r8,r28
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// fadds f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
loc_82165EB8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bne 0x82165e68
	if (!ctx.cr0.eq) goto loc_82165E68;
loc_82165EC8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82165f88
	if (ctx.cr6.eq) goto loc_82165F88;
	// lfs f13,36(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 4, ctx.xer);
	// blt cr6,0x82165f54
	if (ctx.cr6.lt) goto loc_82165F54;
	// fdivs f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// addi r6,r22,-3
	ctx.r6.s64 = ctx.r22.s64 + -3;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82165EF0:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// lfsx f12,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsx f11,r11,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f8,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f7,-4(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfsx f6,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfsx f5,r10,r9
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x82165ef0
	if (ctx.cr6.lt) goto loc_82165EF0;
loc_82165F54:
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82165f88
	if (!ctx.cr6.lt) goto loc_82165F88;
	// subf r10,r8,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r8.s64;
	// fdivs f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82165F6C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// bdnz 0x82165f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165F6C;
loc_82165F88:
	// stw r22,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r22.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82165F98:
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82165FA8;
	sub_8208CFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82165FBC:
	// cmplwi cr6,r10,1010
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1010, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// beq cr6,0x82165fcc
	if (ctx.cr6.eq) goto loc_82165FCC;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82165FCC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82165FE0;
	sub_8208CFB0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// addi r27,r31,68
	ctx.r27.s64 = ctx.r31.s64 + 68;
	// bl 0x8208cfb0
	ctx.lr = 0x82166018;
	sub_8208CFB0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82166028;
	sub_8208CFB0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82166034:
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82166044;
	sub_8208CFB0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8216604C:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82166058"))) PPC_WEAK_FUNC(sub_82166058);
PPC_FUNC_IMPL(__imp__sub_82166058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x82166060;
	__savegprlr_18(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stb r22,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r22.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r24.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// sth r24,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r24.u16);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82161240
	ctx.lr = 0x82166098;
	sub_82161240(ctx, base);
	// lhz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r19.u32 + 4);
	// addi r18,r31,80
	ctx.r18.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82166128
	if (!ctx.cr6.eq) goto loc_82166128;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821660BC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821660bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821660BC;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x821660D4;
	sub_8208CFB0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f0,4(r18)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r18.u32 + 4, temp.u32);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f13,8(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r18.u32 + 8, temp.u32);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r7,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r7.u32);
	// stb r8,12(r18)
	PPC_STORE_U8(ctx.r18.u32 + 12, ctx.r8.u8);
	// stb r10,13(r18)
	PPC_STORE_U8(ctx.r18.u32 + 13, ctx.r10.u8);
	// stb r4,14(r18)
	PPC_STORE_U8(ctx.r18.u32 + 14, ctx.r4.u8);
	// stb r5,15(r18)
	PPC_STORE_U8(ctx.r18.u32 + 15, ctx.r5.u8);
	// stb r3,16(r18)
	PPC_STORE_U8(ctx.r18.u32 + 16, ctx.r3.u8);
	// stb r11,17(r18)
	PPC_STORE_U8(ctx.r18.u32 + 17, ctx.r11.u8);
	// stb r9,18(r18)
	PPC_STORE_U8(ctx.r18.u32 + 18, ctx.r9.u8);
	// b 0x82166138
	goto loc_82166138;
loc_82166128:
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82166138;
	sub_8208CFB0(ctx, base);
loc_82166138:
	// lbz r11,95(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 95);
	// lbz r7,93(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// lbz r8,97(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821662ac
	if (ctx.cr0.eq) goto loc_821662AC;
	// cmplwi cr6,r3,116
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 116, ctx.xer);
	// bne cr6,0x8216620c
	if (!ctx.cr6.eq) goto loc_8216620C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82166190;
	sub_82081C00(ctx, base);
	// bl 0x82166c18
	ctx.lr = 0x82166194;
	sub_82166C18(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821661A4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821661b0
	if (!ctx.cr6.eq) goto loc_821661B0;
	// bl 0x821b3000
	ctx.lr = 0x821661B0;
	sub_821B3000(ctx, base);
loc_821661B0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821661c4
	if (ctx.cr6.eq) goto loc_821661C4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821661C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821661f4
	if (ctx.cr6.eq) goto loc_821661F4;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x821661DC;
	sub_8233EAF0(ctx, base);
	// lhz r10,118(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 118);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r9,118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 118, ctx.r9.u16);
	// b 0x821662ac
	goto loc_821662AC;
loc_821661F4:
	// lhz r10,118(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 118);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r9,118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 118, ctx.r9.u16);
	// b 0x821662ac
	goto loc_821662AC;
loc_8216620C:
	// cmplwi cr6,r3,104
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 104, ctx.xer);
	// bne cr6,0x82166298
	if (!ctx.cr6.eq) goto loc_82166298;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x8216621C;
	sub_82081C00(ctx, base);
	// bl 0x82166e30
	ctx.lr = 0x82166220;
	sub_82166E30(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82166230;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216623c
	if (!ctx.cr6.eq) goto loc_8216623C;
	// bl 0x821b3000
	ctx.lr = 0x8216623C;
	sub_821B3000(ctx, base);
loc_8216623C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166250
	if (ctx.cr6.eq) goto loc_82166250;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82166250:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82166280
	if (ctx.cr6.eq) goto loc_82166280;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82166268;
	sub_8233EAF0(ctx, base);
	// lhz r10,118(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 118);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// sth r9,118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 118, ctx.r9.u16);
	// b 0x821662ac
	goto loc_821662AC;
loc_82166280:
	// lhz r10,118(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 118);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// sth r9,118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 118, ctx.r9.u16);
	// b 0x821662ac
	goto loc_821662AC;
loc_82166298:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821662A8;
	sub_82082030(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_821662AC:
	// lbz r11,93(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// lwz r27,112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// beq cr6,0x821662cc
	if (ctx.cr6.eq) goto loc_821662CC;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_821662CC:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// addi r9,r10,15640
	ctx.r9.s64 = ctx.r10.s64 + 15640;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// beq cr6,0x821664f0
	if (ctx.cr6.eq) goto loc_821664F0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_821662EC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82161240
	ctx.lr = 0x821662FC;
	sub_82161240(ctx, base);
	// stb r22,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r22.u8);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// sth r24,180(r1)
	PPC_STORE_U16(ctx.r1.u32 + 180, ctx.r24.u16);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r24,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r24.u16);
	// bl 0x82161240
	ctx.lr = 0x82166320;
	sub_82161240(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82166334;
	sub_8208CFB0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r24.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r24.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r27.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r26,4(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r26,r11
	ctx.r7.u64 = ctx.r26.u64 + ctx.r11.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// beq cr6,0x8216646c
	if (ctx.cr6.eq) goto loc_8216646C;
loc_82166388:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82161240
	ctx.lr = 0x821663B4;
	sub_82161240(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x821663C4;
	sub_8233EAF0(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82165af0
	ctx.lr = 0x821663DC;
	sub_82165AF0(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8216645c
	if (!ctx.cr6.eq) goto loc_8216645C;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm r10,r10,21,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166404
	if (ctx.cr6.eq) goto loc_82166404;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x8216645c
	goto loc_8216645C;
loc_82166404:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82166448
	if (!ctx.cr6.eq) goto loc_82166448;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bne cr6,0x8216645c
	if (!ctx.cr6.eq) goto loc_8216645C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8216645c
	if (ctx.cr6.eq) goto loc_8216645C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r9,0,21,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r22,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r22.u32);
	// b 0x8216645c
	goto loc_8216645C;
loc_82166448:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8216645c
	if (!ctx.cr6.eq) goto loc_8216645C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8216645c
	if (!ctx.cr6.eq) goto loc_8216645C;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_8216645C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82166388
	if (ctx.cr6.lt) goto loc_82166388;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8216646C:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821664e4
	if (ctx.cr6.eq) goto loc_821664E4;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// ble cr6,0x821664b0
	if (!ctx.cr6.gt) goto loc_821664B0;
	// li r28,72
	ctx.r28.s64 = 72;
	// addi r29,r26,-1
	ctx.r29.s64 = ctx.r26.s64 + -1;
loc_82166488:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,72
	ctx.r5.s64 = 72;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r4,-72
	ctx.r3.s64 = ctx.r4.s64 + -72;
	// bl 0x8233e4e0
	ctx.lr = 0x821664A4;
	sub_8233E4E0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// bne 0x82166488
	if (!ctx.cr0.eq) goto loc_82166488;
loc_821664B0:
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821664d8
	if (!ctx.cr6.eq) goto loc_821664D8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,21,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_821664D8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821664E4:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x821662ec
	if (!ctx.cr0.eq) goto loc_821662EC;
loc_821664F0:
	// lbz r28,94(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 94);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// sth r21,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r21.u16);
	// addi r27,r11,-7224
	ctx.r27.s64 = ctx.r11.s64 + -7224;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821665ac
	if (ctx.cr6.eq) goto loc_821665AC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82161240
	ctx.lr = 0x82166518;
	sub_82161240(ctx, base);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82166530;
	sub_82082030(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82166544;
	sub_8208CFB0(ctx, base);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821665b0
	if (ctx.cr6.eq) goto loc_821665B0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82166558:
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8216656c
	if (!ctx.cr6.eq) goto loc_8216656C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82166578
	goto loc_82166578;
loc_8216656C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82176780
	ctx.lr = 0x82166578;
	sub_82176780(ctx, base);
loc_82166578:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821665a8
	if (ctx.cr6.eq) goto loc_821665A8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// blt cr6,0x82166558
	if (ctx.cr6.lt) goto loc_82166558;
	// b 0x821665b0
	goto loc_821665B0;
loc_821665A8:
	// stb r24,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r24.u8);
loc_821665AC:
	// stw r24,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r24.u32);
loc_821665B0:
	// lwz r5,0(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x821665c8
	if (!ctx.cr6.eq) goto loc_821665C8;
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
loc_821665C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82176780
	ctx.lr = 0x821665D4;
	sub_82176780(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821665E0"))) PPC_WEAK_FUNC(sub_821665E0);
PPC_FUNC_IMPL(__imp__sub_821665E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x821665E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166608
	if (ctx.cr6.eq) goto loc_82166608;
	// bl 0x82172d60
	ctx.lr = 0x82166604;
	sub_82172D60(ctx, base);
	// stw r22,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r22.u32);
loc_82166608:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821666f8
	if (ctx.cr6.eq) goto loc_821666F8;
	// lbz r21,93(r27)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r27.u32 + 93);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821666f4
	if (ctx.cr6.eq) goto loc_821666F4;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82166628:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821666e4
	if (ctx.cr6.eq) goto loc_821666E4;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_82166644:
	// lbz r11,93(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 93);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82166658
	if (ctx.cr6.lt) goto loc_82166658;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x8216667c
	goto loc_8216667C;
loc_82166658:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82166674
	if (ctx.cr6.lt) goto loc_82166674;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x8216667c
	goto loc_8216667C;
loc_82166674:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8216667C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821666d4
	if (!ctx.cr6.eq) goto loc_821666D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// rlwinm r10,r10,0,7,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF81FFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821666d4
	if (!ctx.cr6.eq) goto loc_821666D4;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821666d4
	if (ctx.cr6.eq) goto loc_821666D4;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821666B0:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821666c8
	if (ctx.cr6.eq) goto loc_821666C8;
	// bl 0x82172d60
	ctx.lr = 0x821666C8;
	sub_82172D60(ctx, base);
loc_821666C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821666b0
	if (!ctx.cr0.eq) goto loc_821666B0;
loc_821666D4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,72
	ctx.r26.s64 = ctx.r26.s64 + 72;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82166644
	if (ctx.cr6.lt) goto loc_82166644;
loc_821666E4:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82166628
	if (ctx.cr6.lt) goto loc_82166628;
loc_821666F4:
	// stw r22,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r22.u32);
loc_821666F8:
	// lhz r11,118(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 118);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82166714
	if (ctx.cr6.eq) goto loc_82166714;
	// lwz r3,112(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// bl 0x82166b00
	ctx.lr = 0x82166710;
	sub_82166B00(ctx, base);
	// b 0x82166744
	goto loc_82166744;
loc_82166714:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216672c
	if (ctx.cr6.eq) goto loc_8216672C;
	// lwz r3,112(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// bl 0x82166d18
	ctx.lr = 0x82166728;
	sub_82166D18(ctx, base);
	// b 0x82166744
	goto loc_82166744;
loc_8216672C:
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166744
	if (ctx.cr6.eq) goto loc_82166744;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82166744;
	sub_82080000(ctx, base);
loc_82166744:
	// lhz r11,118(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 118);
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r22,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r22.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r9,118(r27)
	PPC_STORE_U16(ctx.r27.u32 + 118, ctx.r9.u16);
	// beq cr6,0x821667b4
	if (ctx.cr6.eq) goto loc_821667B4;
	// lbz r11,94(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 94);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166798
	if (ctx.cr6.eq) goto loc_82166798;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82166774:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216678c
	if (ctx.cr6.eq) goto loc_8216678C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82172d60
	ctx.lr = 0x8216678C;
	sub_82172D60(ctx, base);
loc_8216678C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82166774
	if (!ctx.cr0.eq) goto loc_82166774;
loc_82166798:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821667b0
	if (ctx.cr6.eq) goto loc_821667B0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821667B0;
	sub_82080000(ctx, base);
loc_821667B0:
	// stw r22,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r22.u32);
loc_821667B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821667BC"))) PPC_WEAK_FUNC(sub_821667BC);
PPC_FUNC_IMPL(__imp__sub_821667BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821667C0"))) PPC_WEAK_FUNC(sub_821667C0);
PPC_FUNC_IMPL(__imp__sub_821667C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x821667C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82172e00
	ctx.lr = 0x821667D8;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821667f0
	if (!ctx.cr6.eq) goto loc_821667F0;
loc_821667E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_821667F0:
	// lbz r21,93(r24)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r24.u32 + 93);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821668d8
	if (ctx.cr6.eq) goto loc_821668D8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82166804:
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// li r25,0
	ctx.r25.s64 = 0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821668c8
	if (ctx.cr6.eq) goto loc_821668C8;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82166820:
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821668b8
	if (!ctx.cr6.eq) goto loc_821668B8;
	// lwz r28,44(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821668b8
	if (ctx.cr6.eq) goto loc_821668B8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82166850:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// rlwinm r10,r10,0,7,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF81FFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821668a8
	if (!ctx.cr6.eq) goto loc_821668A8;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82166888
	if (!ctx.cr6.eq) goto loc_82166888;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216689c
	goto loc_8216689C;
loc_82166888:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216689C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216689C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821667e4
	if (ctx.cr6.eq) goto loc_821667E4;
loc_821668A8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82166850
	if (ctx.cr6.lt) goto loc_82166850;
loc_821668B8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,72
	ctx.r27.s64 = ctx.r27.s64 + 72;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82166820
	if (ctx.cr6.lt) goto loc_82166820;
loc_821668C8:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82166804
	if (ctx.cr6.lt) goto loc_82166804;
loc_821668D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821668E4"))) PPC_WEAK_FUNC(sub_821668E4);
PPC_FUNC_IMPL(__imp__sub_821668E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821668E8"))) PPC_WEAK_FUNC(sub_821668E8);
PPC_FUNC_IMPL(__imp__sub_821668E8) {
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
	// beq cr6,0x821669e4
	if (ctx.cr6.eq) goto loc_821669E4;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6032
	ctx.r31.s64 = ctx.r11.s64 + 6032;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216691C;
	sub_823052D8(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
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
	// bne cr6,0x821669d8
	if (!ctx.cr6.eq) goto loc_821669D8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821669d8
	if (ctx.cr6.eq) goto loc_821669D8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821669d8
	if (!ctx.cr6.lt) goto loc_821669D8;
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
	// beq cr6,0x821669b0
	if (ctx.cr6.eq) goto loc_821669B0;
loc_82166988:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821669a8
	if (ctx.cr6.eq) goto loc_821669A8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82166988
	if (!ctx.cr6.eq) goto loc_82166988;
	// b 0x821669b0
	goto loc_821669B0;
loc_821669A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821669B0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821669c8
	if (!ctx.cr6.eq) goto loc_821669C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821669C8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821669D4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821669D8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821669E4;
	sub_823051A8(ctx, base);
loc_821669E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821669FC"))) PPC_WEAK_FUNC(sub_821669FC);
PPC_FUNC_IMPL(__imp__sub_821669FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166A00"))) PPC_WEAK_FUNC(sub_82166A00);
PPC_FUNC_IMPL(__imp__sub_82166A00) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6032
	ctx.r31.s64 = ctx.r11.s64 + 6032;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82166A28;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166a4c
	if (ctx.cr6.eq) goto loc_82166A4C;
loc_82166A34:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82166a7c
	if (!ctx.cr6.eq) goto loc_82166A7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166a34
	if (!ctx.cr6.eq) goto loc_82166A34;
loc_82166A4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166aa4
	if (!ctx.cr6.eq) goto loc_82166AA4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82166f30
	ctx.lr = 0x82166A60;
	sub_82166F30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166aa4
	if (!ctx.cr6.eq) goto loc_82166AA4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82166A74;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82166ae8
	goto loc_82166AE8;
loc_82166A7C:
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
	// b 0x82166ad8
	goto loc_82166AD8;
loc_82166AA4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
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
loc_82166AD8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82166AE4;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82166AE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166B00"))) PPC_WEAK_FUNC(sub_82166B00);
PPC_FUNC_IMPL(__imp__sub_82166B00) {
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
	// beq cr6,0x82166bfc
	if (ctx.cr6.eq) goto loc_82166BFC;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6088
	ctx.r31.s64 = ctx.r11.s64 + 6088;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82166B34;
	sub_823052D8(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
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
	// bne cr6,0x82166bf0
	if (!ctx.cr6.eq) goto loc_82166BF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82166bf0
	if (ctx.cr6.eq) goto loc_82166BF0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82166bf0
	if (!ctx.cr6.lt) goto loc_82166BF0;
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
	// beq cr6,0x82166bc8
	if (ctx.cr6.eq) goto loc_82166BC8;
loc_82166BA0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82166bc0
	if (ctx.cr6.eq) goto loc_82166BC0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82166ba0
	if (!ctx.cr6.eq) goto loc_82166BA0;
	// b 0x82166bc8
	goto loc_82166BC8;
loc_82166BC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82166BC8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82166be0
	if (!ctx.cr6.eq) goto loc_82166BE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82166BE0:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82166BEC;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82166BF0:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82166BFC;
	sub_823051A8(ctx, base);
loc_82166BFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166C14"))) PPC_WEAK_FUNC(sub_82166C14);
PPC_FUNC_IMPL(__imp__sub_82166C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166C18"))) PPC_WEAK_FUNC(sub_82166C18);
PPC_FUNC_IMPL(__imp__sub_82166C18) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6088
	ctx.r31.s64 = ctx.r11.s64 + 6088;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82166C40;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166c64
	if (ctx.cr6.eq) goto loc_82166C64;
loc_82166C4C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82166c94
	if (!ctx.cr6.eq) goto loc_82166C94;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166c4c
	if (!ctx.cr6.eq) goto loc_82166C4C;
loc_82166C64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166cbc
	if (!ctx.cr6.eq) goto loc_82166CBC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82166fe0
	ctx.lr = 0x82166C78;
	sub_82166FE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166cbc
	if (!ctx.cr6.eq) goto loc_82166CBC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82166C8C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82166d00
	goto loc_82166D00;
loc_82166C94:
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
	// b 0x82166cf0
	goto loc_82166CF0;
loc_82166CBC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,116
	ctx.r10.s64 = ctx.r11.s64 + 116;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
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
loc_82166CF0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82166CFC;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82166D00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166D18"))) PPC_WEAK_FUNC(sub_82166D18);
PPC_FUNC_IMPL(__imp__sub_82166D18) {
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
	// beq cr6,0x82166e14
	if (ctx.cr6.eq) goto loc_82166E14;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6144
	ctx.r31.s64 = ctx.r11.s64 + 6144;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82166D4C;
	sub_823052D8(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
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
	// bne cr6,0x82166e08
	if (!ctx.cr6.eq) goto loc_82166E08;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82166e08
	if (ctx.cr6.eq) goto loc_82166E08;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82166e08
	if (!ctx.cr6.lt) goto loc_82166E08;
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
	// beq cr6,0x82166de0
	if (ctx.cr6.eq) goto loc_82166DE0;
loc_82166DB8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82166dd8
	if (ctx.cr6.eq) goto loc_82166DD8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82166db8
	if (!ctx.cr6.eq) goto loc_82166DB8;
	// b 0x82166de0
	goto loc_82166DE0;
loc_82166DD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82166DE0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82166df8
	if (!ctx.cr6.eq) goto loc_82166DF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82166DF8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82166E04;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82166E08:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82166E14;
	sub_823051A8(ctx, base);
loc_82166E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166E2C"))) PPC_WEAK_FUNC(sub_82166E2C);
PPC_FUNC_IMPL(__imp__sub_82166E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166E30"))) PPC_WEAK_FUNC(sub_82166E30);
PPC_FUNC_IMPL(__imp__sub_82166E30) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6144
	ctx.r31.s64 = ctx.r11.s64 + 6144;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82166E58;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166e7c
	if (ctx.cr6.eq) goto loc_82166E7C;
loc_82166E64:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82166eac
	if (!ctx.cr6.eq) goto loc_82166EAC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166e64
	if (!ctx.cr6.eq) goto loc_82166E64;
loc_82166E7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166ed4
	if (!ctx.cr6.eq) goto loc_82166ED4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82167090
	ctx.lr = 0x82166E90;
	sub_82167090(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166ed4
	if (!ctx.cr6.eq) goto loc_82166ED4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82166EA4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82166f18
	goto loc_82166F18;
loc_82166EAC:
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
	// b 0x82166f08
	goto loc_82166F08;
loc_82166ED4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 + 104;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
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
loc_82166F08:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82166F14;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82166F18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166F30"))) PPC_WEAK_FUNC(sub_82166F30);
PPC_FUNC_IMPL(__imp__sub_82166F30) {
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
	// rlwinm r11,r3,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
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
	ctx.lr = 0x82166F5C;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6032
	ctx.r11.s64 = ctx.r11.s64 + 6032;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82166f78
	if (ctx.cr6.eq) goto loc_82166F78;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x82166f7c
	goto loc_82166F7C;
loc_82166F78:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82166F7C:
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
	// beq cr6,0x82166fbc
	if (ctx.cr6.eq) goto loc_82166FBC;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82166FB4:
	// stwu r3,128(r10)
	ea = 128 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82166fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82166FB4;
loc_82166FBC:
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

__attribute__((alias("__imp__sub_82166FDC"))) PPC_WEAK_FUNC(sub_82166FDC);
PPC_FUNC_IMPL(__imp__sub_82166FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82166FE0"))) PPC_WEAK_FUNC(sub_82166FE0);
PPC_FUNC_IMPL(__imp__sub_82166FE0) {
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
	// rlwinm r11,r3,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
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
	ctx.lr = 0x8216700C;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6088
	ctx.r11.s64 = ctx.r11.s64 + 6088;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167028
	if (ctx.cr6.eq) goto loc_82167028;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8216702c
	goto loc_8216702C;
loc_82167028:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8216702C:
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
	// beq cr6,0x8216706c
	if (ctx.cr6.eq) goto loc_8216706C;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82167064:
	// stwu r3,128(r10)
	ea = 128 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82167064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167064;
loc_8216706C:
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

__attribute__((alias("__imp__sub_8216708C"))) PPC_WEAK_FUNC(sub_8216708C);
PPC_FUNC_IMPL(__imp__sub_8216708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167090"))) PPC_WEAK_FUNC(sub_82167090);
PPC_FUNC_IMPL(__imp__sub_82167090) {
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
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
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
	ctx.lr = 0x821670BC;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6144
	ctx.r11.s64 = ctx.r11.s64 + 6144;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821670d8
	if (ctx.cr6.eq) goto loc_821670D8;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821670dc
	goto loc_821670DC;
loc_821670D8:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821670DC:
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
	// beq cr6,0x8216711c
	if (ctx.cr6.eq) goto loc_8216711C;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82167114:
	// stwu r3,112(r10)
	ea = 112 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82167114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167114;
loc_8216711C:
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

__attribute__((alias("__imp__sub_8216713C"))) PPC_WEAK_FUNC(sub_8216713C);
PPC_FUNC_IMPL(__imp__sub_8216713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167140"))) PPC_WEAK_FUNC(sub_82167140);
PPC_FUNC_IMPL(__imp__sub_82167140) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// bl 0x82161240
	ctx.lr = 0x82167184;
	sub_82161240(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82167194;
	sub_8208CFB0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_821671B4"))) PPC_WEAK_FUNC(sub_821671B4);
PPC_FUNC_IMPL(__imp__sub_821671B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821671B8"))) PPC_WEAK_FUNC(sub_821671B8);
PPC_FUNC_IMPL(__imp__sub_821671B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x82161240
	ctx.lr = 0x821671FC;
	sub_82161240(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r3,r9,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x82082030
	ctx.lr = 0x82167218;
	sub_82082030(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82167230;
	sub_8208CFB0(ctx, base);
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

__attribute__((alias("__imp__sub_82167248"))) PPC_WEAK_FUNC(sub_82167248);
PPC_FUNC_IMPL(__imp__sub_82167248) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167274
	if (ctx.cr6.eq) goto loc_82167274;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82167274;
	sub_82080000(ctx, base);
loc_82167274:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82167294"))) PPC_WEAK_FUNC(sub_82167294);
PPC_FUNC_IMPL(__imp__sub_82167294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167298"))) PPC_WEAK_FUNC(sub_82167298);
PPC_FUNC_IMPL(__imp__sub_82167298) {
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
	// beq cr6,0x82167394
	if (ctx.cr6.eq) goto loc_82167394;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6200
	ctx.r31.s64 = ctx.r11.s64 + 6200;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821672CC;
	sub_823052D8(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
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
	// bne cr6,0x82167388
	if (!ctx.cr6.eq) goto loc_82167388;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82167388
	if (ctx.cr6.eq) goto loc_82167388;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82167388
	if (!ctx.cr6.lt) goto loc_82167388;
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
	// beq cr6,0x82167360
	if (ctx.cr6.eq) goto loc_82167360;
loc_82167338:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82167358
	if (ctx.cr6.eq) goto loc_82167358;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82167338
	if (!ctx.cr6.eq) goto loc_82167338;
	// b 0x82167360
	goto loc_82167360;
loc_82167358:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82167360:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82167378
	if (!ctx.cr6.eq) goto loc_82167378;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82167378:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82167384;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82167388:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82167394;
	sub_823051A8(ctx, base);
loc_82167394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821673AC"))) PPC_WEAK_FUNC(sub_821673AC);
PPC_FUNC_IMPL(__imp__sub_821673AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821673B0"))) PPC_WEAK_FUNC(sub_821673B0);
PPC_FUNC_IMPL(__imp__sub_821673B0) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6200
	ctx.r31.s64 = ctx.r11.s64 + 6200;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821673D8;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821673fc
	if (ctx.cr6.eq) goto loc_821673FC;
loc_821673E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216742c
	if (!ctx.cr6.eq) goto loc_8216742C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821673e4
	if (!ctx.cr6.eq) goto loc_821673E4;
loc_821673FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82167454
	if (!ctx.cr6.eq) goto loc_82167454;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821674b0
	ctx.lr = 0x82167410;
	sub_821674B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82167454
	if (!ctx.cr6.eq) goto loc_82167454;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82167424;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82167498
	goto loc_82167498;
loc_8216742C:
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
	// b 0x82167488
	goto loc_82167488;
loc_82167454:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 + 92;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
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
loc_82167488:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82167494;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82167498:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821674B0"))) PPC_WEAK_FUNC(sub_821674B0);
PPC_FUNC_IMPL(__imp__sub_821674B0) {
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
	ctx.lr = 0x821674E4;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6200
	ctx.r11.s64 = ctx.r11.s64 + 6200;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167500
	if (ctx.cr6.eq) goto loc_82167500;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x82167504
	goto loc_82167504;
loc_82167500:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82167504:
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
	// beq cr6,0x82167544
	if (ctx.cr6.eq) goto loc_82167544;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8216753C:
	// stwu r3,96(r10)
	ea = 96 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216753c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216753C;
loc_82167544:
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

__attribute__((alias("__imp__sub_82167564"))) PPC_WEAK_FUNC(sub_82167564);
PPC_FUNC_IMPL(__imp__sub_82167564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167568"))) PPC_WEAK_FUNC(sub_82167568);
PPC_FUNC_IMPL(__imp__sub_82167568) {
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
	// addi r10,r11,-28560
	ctx.r10.s64 = ctx.r11.s64 + -28560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x82167594;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821675ac
	if (ctx.cr6.eq) goto loc_821675AC;
	// bl 0x82167298
	ctx.lr = 0x821675A8;
	sub_82167298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821675AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821675C4"))) PPC_WEAK_FUNC(sub_821675C4);
PPC_FUNC_IMPL(__imp__sub_821675C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821675C8"))) PPC_WEAK_FUNC(sub_821675C8);
PPC_FUNC_IMPL(__imp__sub_821675C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821675D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82167614
	if (!ctx.cr6.gt) goto loc_82167614;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821675F0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820de9b8
	ctx.lr = 0x82167600;
	sub_820DE9B8(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821675f0
	if (ctx.cr6.lt) goto loc_821675F0;
loc_82167614:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216762c
	if (ctx.cr6.eq) goto loc_8216762C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216762C;
	sub_82080000(ctx, base);
loc_8216762C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167648
	if (ctx.cr6.eq) goto loc_82167648;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82167648;
	sub_82080000(ctx, base);
loc_82167648:
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82167654"))) PPC_WEAK_FUNC(sub_82167654);
PPC_FUNC_IMPL(__imp__sub_82167654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167658"))) PPC_WEAK_FUNC(sub_82167658);
PPC_FUNC_IMPL(__imp__sub_82167658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82167660;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// sth r28,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r28.u16);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// sth r28,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r28.u16);
	// bl 0x82161240
	ctx.lr = 0x821676AC;
	sub_82161240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208d070
	ctx.lr = 0x821676B4;
	sub_8208D070(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x821676d8
	if (!ctx.cr6.gt) goto loc_821676D8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_821676D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821676E8;
	sub_82082030(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82161240
	ctx.lr = 0x821676FC;
	sub_82161240(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82167718
	if (!ctx.cr6.gt) goto loc_82167718;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82167718:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82167728;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8208cfb0
	ctx.lr = 0x82167744;
	sub_8208CFB0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821677d0
	if (ctx.cr6.eq) goto loc_821677D0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82167750:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82161240
	ctx.lr = 0x82167760;
	sub_82161240(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161240
	ctx.lr = 0x82167770;
	sub_82161240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208d070
	ctx.lr = 0x82167778;
	sub_8208D070(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// bl 0x82161240
	ctx.lr = 0x8216779C;
	sub_82161240(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821677c4
	if (ctx.cr6.eq) goto loc_821677C4;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x820dec30
	ctx.lr = 0x821677C4;
	sub_820DEC30(ctx, base);
loc_821677C4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82167750
	if (!ctx.cr0.eq) goto loc_82167750;
loc_821677D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821677D8"))) PPC_WEAK_FUNC(sub_821677D8);
PPC_FUNC_IMPL(__imp__sub_821677D8) {
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
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82167860
	ctx.lr = 0x821677F0;
	sub_82167860(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8216782c
	if (!ctx.cr6.eq) goto loc_8216782C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8216782C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f1,f11,f13,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216785C"))) PPC_WEAK_FUNC(sub_8216785C);
PPC_FUNC_IMPL(__imp__sub_8216785C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167860"))) PPC_WEAK_FUNC(sub_82167860);
PPC_FUNC_IMPL(__imp__sub_82167860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f13,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82167888
	if (!ctx.cr6.lt) goto loc_82167888;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82167894
	goto loc_82167894;
loc_82167888:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82167894
	if (!ctx.cr6.gt) goto loc_82167894;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82167894:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fsubs f12,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// li r10,0
	ctx.r10.s64 = 0;
	// fdivs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_821678D4:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821678f0
	if (!ctx.cr6.gt) goto loc_821678F0;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82167900
	goto loc_82167900;
loc_821678F0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82167958
	if (!ctx.cr6.lt) goto loc_82167958;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82167900:
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf. r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82167940
	if (ctx.cr0.eq) goto loc_82167940;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x821678d4
	if (!ctx.cr6.eq) goto loc_821678D4;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82167940:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82167958:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167970"))) PPC_WEAK_FUNC(sub_82167970);
PPC_FUNC_IMPL(__imp__sub_82167970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821679b4
	if (!ctx.cr6.eq) goto loc_821679B4;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// b 0x82167a10
	goto loc_82167A10;
loc_821679B4:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// bne cr6,0x821679f0
	if (!ctx.cr6.eq) goto loc_821679F0;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// b 0x82167a04
	goto loc_82167A04;
loc_821679F0:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
loc_82167A04:
	// stfs f9,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
loc_82167A10:
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsqrts f12,f10
	ctx.f12.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167A54"))) PPC_WEAK_FUNC(sub_82167A54);
PPC_FUNC_IMPL(__imp__sub_82167A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167A58"))) PPC_WEAK_FUNC(sub_82167A58);
PPC_FUNC_IMPL(__imp__sub_82167A58) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82167860
	ctx.lr = 0x82167A78;
	sub_82167860(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f8,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lfs f7,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x82167ab0
	if (!ctx.cr6.eq) goto loc_82167AB0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82167970
	ctx.lr = 0x82167A9C;
	sub_82167970(ctx, base);
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
loc_82167AB0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x82167970
	ctx.lr = 0x82167AB8;
	sub_82167970(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bl 0x82167970
	ctx.lr = 0x82167AC4;
	sub_82167970(ctx, base);
	// lfs f12,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f6
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f10,f13,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f2,f13,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fsqrts f11,f2
	ctx.f11.f64 = double(float(sqrt(ctx.f2.f64)));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// ble cr6,0x82167b1c
	if (!ctx.cr6.gt) goto loc_82167B1C;
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82167B1C:
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

__attribute__((alias("__imp__sub_82167B30"))) PPC_WEAK_FUNC(sub_82167B30);
PPC_FUNC_IMPL(__imp__sub_82167B30) {
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
	// beq cr6,0x82167c2c
	if (ctx.cr6.eq) goto loc_82167C2C;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6256
	ctx.r31.s64 = ctx.r11.s64 + 6256;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82167B64;
	sub_823052D8(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
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
	// bne cr6,0x82167c20
	if (!ctx.cr6.eq) goto loc_82167C20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82167c20
	if (ctx.cr6.eq) goto loc_82167C20;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82167c20
	if (!ctx.cr6.lt) goto loc_82167C20;
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
	// beq cr6,0x82167bf8
	if (ctx.cr6.eq) goto loc_82167BF8;
loc_82167BD0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82167bf0
	if (ctx.cr6.eq) goto loc_82167BF0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82167bd0
	if (!ctx.cr6.eq) goto loc_82167BD0;
	// b 0x82167bf8
	goto loc_82167BF8;
loc_82167BF0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82167BF8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82167c10
	if (!ctx.cr6.eq) goto loc_82167C10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82167C10:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82167C1C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82167C20:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82167C2C;
	sub_823051A8(ctx, base);
loc_82167C2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167C44"))) PPC_WEAK_FUNC(sub_82167C44);
PPC_FUNC_IMPL(__imp__sub_82167C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167C48"))) PPC_WEAK_FUNC(sub_82167C48);
PPC_FUNC_IMPL(__imp__sub_82167C48) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6256
	ctx.r31.s64 = ctx.r11.s64 + 6256;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82167C70;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167c94
	if (ctx.cr6.eq) goto loc_82167C94;
loc_82167C7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82167cc4
	if (!ctx.cr6.eq) goto loc_82167CC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82167c7c
	if (!ctx.cr6.eq) goto loc_82167C7C;
loc_82167C94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82167cec
	if (!ctx.cr6.eq) goto loc_82167CEC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82167d48
	ctx.lr = 0x82167CA8;
	sub_82167D48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82167cec
	if (!ctx.cr6.eq) goto loc_82167CEC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82167CBC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82167d30
	goto loc_82167D30;
loc_82167CC4:
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
	// b 0x82167d20
	goto loc_82167D20;
loc_82167CEC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 + 92;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
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
loc_82167D20:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82167D2C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82167D30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167D48"))) PPC_WEAK_FUNC(sub_82167D48);
PPC_FUNC_IMPL(__imp__sub_82167D48) {
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
	ctx.lr = 0x82167D7C;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6256
	ctx.r11.s64 = ctx.r11.s64 + 6256;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167d98
	if (ctx.cr6.eq) goto loc_82167D98;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x82167d9c
	goto loc_82167D9C;
loc_82167D98:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82167D9C:
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
	// beq cr6,0x82167ddc
	if (ctx.cr6.eq) goto loc_82167DDC;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82167DD4:
	// stwu r3,96(r10)
	ea = 96 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82167dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167DD4;
loc_82167DDC:
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

__attribute__((alias("__imp__sub_82167DFC"))) PPC_WEAK_FUNC(sub_82167DFC);
PPC_FUNC_IMPL(__imp__sub_82167DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167E00"))) PPC_WEAK_FUNC(sub_82167E00);
PPC_FUNC_IMPL(__imp__sub_82167E00) {
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
	// addi r10,r11,-28412
	ctx.r10.s64 = ctx.r11.s64 + -28412;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x82167E2C;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82167e44
	if (ctx.cr6.eq) goto loc_82167E44;
	// bl 0x82167b30
	ctx.lr = 0x82167E40;
	sub_82167B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82167E44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167E5C"))) PPC_WEAK_FUNC(sub_82167E5C);
PPC_FUNC_IMPL(__imp__sub_82167E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82167E60"))) PPC_WEAK_FUNC(sub_82167E60);
PPC_FUNC_IMPL(__imp__sub_82167E60) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82172a10
	ctx.lr = 0x82167E80;
	sub_82172A10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-28368
	ctx.r6.s64 = ctx.r7.s64 + -28368;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,255
	ctx.r9.s64 = 255;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82167F20:
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82167f20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167F20;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82167F50"))) PPC_WEAK_FUNC(sub_82167F50);
PPC_FUNC_IMPL(__imp__sub_82167F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82167F58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168024
	if (ctx.cr6.eq) goto loc_82168024;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82168008
	if (!ctx.cr6.gt) goto loc_82168008;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82167F84:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82167fd4
	if (!ctx.cr6.gt) goto loc_82167FD4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82167F98:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167fc0
	if (ctx.cr6.eq) goto loc_82167FC0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82167FC0;
	sub_82080000(ctx, base);
loc_82167FC0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82167f98
	if (ctx.cr6.lt) goto loc_82167F98;
loc_82167FD4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167ff4
	if (ctx.cr6.eq) goto loc_82167FF4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82167FF4;
	sub_82080000(ctx, base);
loc_82167FF4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82167f84
	if (ctx.cr6.lt) goto loc_82167F84;
loc_82168008:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168020
	if (ctx.cr6.eq) goto loc_82168020;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82168020;
	sub_82080000(ctx, base);
loc_82168020:
	// stw r26,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
loc_82168024:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216803c
	if (ctx.cr6.eq) goto loc_8216803C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216803C;
	sub_82080000(ctx, base);
loc_8216803C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821680b4
	if (ctx.cr6.eq) goto loc_821680B4;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82168098
	if (!ctx.cr6.gt) goto loc_82168098;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82168064:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168084
	if (ctx.cr6.eq) goto loc_82168084;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82168084;
	sub_82080000(ctx, base);
loc_82168084:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82168064
	if (ctx.cr6.lt) goto loc_82168064;
loc_82168098:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821680b0
	if (ctx.cr6.eq) goto loc_821680B0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821680B0;
	sub_82080000(ctx, base);
loc_821680B0:
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
loc_821680B4:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168104
	if (ctx.cr6.eq) goto loc_82168104;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821680ec
	if (ctx.cr6.eq) goto loc_821680EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821680E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82168100
	goto loc_82168100;
loc_821680EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168100
	if (ctx.cr6.eq) goto loc_82168100;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82168100;
	sub_82080000(ctx, base);
loc_82168100:
	// stw r26,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r26.u32);
loc_82168104:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168120
	if (ctx.cr6.eq) goto loc_82168120;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216811C;
	sub_82080000(ctx, base);
	// stw r26,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r26.u32);
loc_82168120:
	// stw r26,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
	// stw r26,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168130"))) PPC_WEAK_FUNC(sub_82168130);
PPC_FUNC_IMPL(__imp__sub_82168130) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// beq cr6,0x82168178
	if (ctx.cr6.eq) goto loc_82168178;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82168178;
	sub_82080000(ctx, base);
loc_82168178:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168198
	if (ctx.cr6.eq) goto loc_82168198;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82168198;
	sub_82080000(ctx, base);
loc_82168198:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821681b4
	if (ctx.cr6.eq) goto loc_821681B4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821681B4;
	sub_82080000(ctx, base);
loc_821681B4:
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821681D0"))) PPC_WEAK_FUNC(sub_821681D0);
PPC_FUNC_IMPL(__imp__sub_821681D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x821681D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stb r19,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r19.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r25,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r25.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// sth r25,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r25.u16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82161240
	ctx.lr = 0x82168210;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168744
	if (ctx.cr6.eq) goto loc_82168744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// bl 0x8208d070
	ctx.lr = 0x82168228;
	sub_8208D070(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// bl 0x8208d070
	ctx.lr = 0x8216823C;
	sub_8208D070(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r21.u32);
	// bl 0x8208d070
	ctx.lr = 0x8216824C;
	sub_8208D070(ctx, base);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r22,-1
	ctx.r22.s64 = -1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8216826c
	if (!ctx.cr6.gt) goto loc_8216826C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8216826C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216827C;
	sub_82082030(ctx, base);
	// stw r3,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r3.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfc r10,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r27,r8,31
	ctx.r27.u64 = ctx.r8.u32 & 0x1;
	// bl 0x8208d070
	ctx.lr = 0x82168298;
	sub_8208D070(ctx, base);
	// lis r7,16383
	ctx.r7.s64 = 1073676288;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r24,r7,65535
	ctx.r24.u64 = ctx.r7.u64 | 65535;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821682b8
	if (!ctx.cr6.gt) goto loc_821682B8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_821682B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821682C8;
	sub_82082030(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821682f8
	if (ctx.cr6.eq) goto loc_821682F8;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_821682DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208d070
	ctx.lr = 0x821682E4;
	sub_8208D070(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwx r3,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x821682dc
	if (!ctx.cr0.eq) goto loc_821682DC;
loc_821682F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208d070
	ctx.lr = 0x82168300;
	sub_8208D070(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r25,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// beq cr6,0x821684dc
	if (ctx.cr6.eq) goto loc_821684DC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821683e8
	if (ctx.cr6.eq) goto loc_821683E8;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82168340
	if (ctx.cr6.gt) goto loc_82168340;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82168344
	goto loc_82168344;
loc_82168340:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82168344:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82168354;
	sub_82082030(ctx, base);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82168370;
	sub_8208CFB0(ctx, base);
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82168390
	if (ctx.cr6.gt) goto loc_82168390;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82168394
	goto loc_82168394;
loc_82168390:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82168394:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821683A4;
	sub_82082030(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82168470
	if (ctx.cr6.eq) goto loc_82168470;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_821683B4:
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8233e4e0
	ctx.lr = 0x821683CC;
	sub_8233E4E0(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// stwx r25,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r25.u32);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x821683b4
	if (!ctx.cr0.eq) goto loc_821683B4;
	// b 0x82168470
	goto loc_82168470;
loc_821683E8:
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82168408
	if (ctx.cr6.gt) goto loc_82168408;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8216840c
	goto loc_8216840C;
loc_82168408:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8216840C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216841C;
	sub_82082030(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r3.u32);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8208cfb0
	ctx.lr = 0x8216843C;
	sub_8208CFB0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82168470
	if (ctx.cr6.eq) goto loc_82168470;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_8216844C:
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82168468
	if (!ctx.cr6.eq) goto loc_82168468;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82168468:
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x8216844c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216844C;
loc_82168470:
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x821684dc
	if (!ctx.cr6.lt) goto loc_821684DC;
	// lwz r28,144(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8216848c
	if (!ctx.cr6.gt) goto loc_8216848C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8216848C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216849C;
	sub_82082030(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// rlwinm r29,r23,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821684B0;
	sub_8233E4E0(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// subf r10,r23,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r23.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x821684C8;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821684dc
	if (ctx.cr6.eq) goto loc_821684DC;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821684DC;
	sub_82080000(ctx, base);
loc_821684DC:
	// stw r26,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r26.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r19,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r19.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// sth r25,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r25.u16);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// sth r25,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r25.u16);
	// bl 0x82161240
	ctx.lr = 0x82168504;
	sub_82161240(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82168744
	if (ctx.cr6.eq) goto loc_82168744;
	// addi r29,r11,-20
	ctx.r29.s64 = ctx.r11.s64 + -20;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82168518:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82168564
	if (ctx.cr6.lt) goto loc_82168564;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x8216855c
	if (!ctx.cr6.eq) goto loc_8216855C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216855C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216855C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8216856c
	goto loc_8216856C;
loc_82168564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x8216856C;
	sub_82307908(ctx, base);
loc_8216856C:
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x821685bc
	if (ctx.cr6.lt) goto loc_821685BC;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x821685b4
	if (!ctx.cr6.eq) goto loc_821685B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821685B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821685B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821685c4
	goto loc_821685C4;
loc_821685BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x821685C4;
	sub_82307908(ctx, base);
loc_821685C4:
	// stw r3,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82168614
	if (ctx.cr6.lt) goto loc_82168614;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x8216860c
	if (!ctx.cr6.eq) goto loc_8216860C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216860C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216860C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8216861c
	goto loc_8216861C;
loc_82168614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x8216861C;
	sub_82307908(ctx, base);
loc_8216861C:
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8216866c
	if (ctx.cr6.lt) goto loc_8216866C;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x82168664
	if (!ctx.cr6.eq) goto loc_82168664;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82168664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82168664:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82168674
	goto loc_82168674;
loc_8216866C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x82168674;
	sub_82307908(ctx, base);
loc_82168674:
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x821686c4
	if (ctx.cr6.lt) goto loc_821686C4;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x821686bc
	if (!ctx.cr6.eq) goto loc_821686BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821686BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821686BC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x821686d0
	goto loc_821686D0;
loc_821686C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x821686CC;
	sub_82307908(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_821686D0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82168724
	if (ctx.cr6.lt) goto loc_82168724;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x8216871c
	if (!ctx.cr6.eq) goto loc_8216871C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216871C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216871C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x82168730
	goto loc_82168730;
loc_82168724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x8216872C;
	sub_82307908(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82168730:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stfs f0,48(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 48, temp.u32);
	// stwu r28,32(r29)
	ea = 32 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// bne 0x82168518
	if (!ctx.cr0.eq) goto loc_82168518;
loc_82168744:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216874C"))) PPC_WEAK_FUNC(sub_8216874C);
PPC_FUNC_IMPL(__imp__sub_8216874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82168750"))) PPC_WEAK_FUNC(sub_82168750);
PPC_FUNC_IMPL(__imp__sub_82168750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x82168758;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x821749b0
	ctx.lr = 0x82168768;
	sub_821749B0(ctx, base);
	// lwz r11,120(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 120);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82168788
	if (ctx.cr6.eq) goto loc_82168788;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82168988
	ctx.lr = 0x82168780;
	sub_82168988(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_82168788:
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// lwz r31,124(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821688c4
	if (ctx.cr6.eq) goto loc_821688C4;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r23,r10,1
	ctx.r23.u64 = ctx.r10.u64 | 1;
	// ori r24,r9,6
	ctx.r24.u64 = ctx.r9.u64 | 6;
	// li r27,255
	ctx.r27.s64 = 255;
	// addi r29,r11,-7224
	ctx.r29.s64 = ctx.r11.s64 + -7224;
loc_821687C4:
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x821687e4
	if (ctx.cr6.eq) goto loc_821687E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82176780
	ctx.lr = 0x821687DC;
	sub_82176780(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x821687e8
	goto loc_821687E8;
loc_821687E4:
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
loc_821687E8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82168808
	if (ctx.cr6.eq) goto loc_82168808;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x820f43c8
	ctx.lr = 0x82168800;
	sub_820F43C8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x8216880c
	goto loc_8216880C;
loc_82168808:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_8216880C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8216882c
	if (ctx.cr6.eq) goto loc_8216882C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x820f43c8
	ctx.lr = 0x82168824;
	sub_820F43C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x82168830
	goto loc_82168830;
loc_8216882C:
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
loc_82168830:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821688b4
	if (!ctx.cr6.lt) goto loc_821688B4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821688b4
	if (ctx.cr6.eq) goto loc_821688B4;
	// cmpw cr6,r3,r23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x82168864
	if (!ctx.cr6.eq) goto loc_82168864;
	// bl 0x820ddca8
	ctx.lr = 0x82168854;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216886c
	if (ctx.cr6.eq) goto loc_8216886C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82168888
	goto loc_82168888;
loc_82168864:
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82168874
	if (!ctx.cr6.eq) goto loc_82168874;
loc_8216886C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82168888
	goto loc_82168888;
loc_82168874:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82168888;
	sub_820F3178(ctx, base);
loc_82168888:
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x821688b4
	if (!ctx.cr6.eq) goto loc_821688B4;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821688b4
	if (ctx.cr6.eq) goto loc_821688B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821702b8
	ctx.lr = 0x821688AC;
	sub_821702B8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x821688b8
	goto loc_821688B8;
loc_821688B4:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
loc_821688B8:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x821687c4
	if (!ctx.cr0.eq) goto loc_821687C4;
loc_821688C4:
	// lwz r11,120(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 120);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,120(r21)
	PPC_STORE_U32(ctx.r21.u32 + 120, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821688D8"))) PPC_WEAK_FUNC(sub_821688D8);
PPC_FUNC_IMPL(__imp__sub_821688D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821688E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82174b00
	ctx.lr = 0x821688F0;
	sub_82174B00(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168980
	if (ctx.cr6.eq) goto loc_82168980;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,20000
	ctx.r29.s64 = ctx.r11.s64 + 20000;
loc_82168918:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82168974
	if (ctx.cr6.eq) goto loc_82168974;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
loc_82168928:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82168928
	if (!ctx.cr0.eq) goto loc_82168928;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82168970
	if (!ctx.cr6.eq) goto loc_82168970;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,300
	ctx.r10.u64 = ctx.r11.u64 | 300;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq cr6,0x8216896c
	if (ctx.cr6.eq) goto loc_8216896C;
	// bl 0x821750b0
	ctx.lr = 0x8216896C;
	sub_821750B0(ctx, base);
loc_8216896C:
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
loc_82168970:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82168974:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x82168918
	if (!ctx.cr0.eq) goto loc_82168918;
loc_82168980:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168988"))) PPC_WEAK_FUNC(sub_82168988);
PPC_FUNC_IMPL(__imp__sub_82168988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82168990;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r30,124(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168aac
	if (ctx.cr6.eq) goto loc_82168AAC;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r27,r10,1
	ctx.r27.u64 = ctx.r10.u64 | 1;
	// ori r25,r9,6
	ctx.r25.u64 = ctx.r9.u64 | 6;
	// addi r28,r11,-18000
	ctx.r28.s64 = ctx.r11.s64 + -18000;
loc_821689C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82168a78
	if (ctx.cr6.eq) goto loc_82168A78;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// bl 0x820f6340
	ctx.lr = 0x821689E4;
	sub_820F6340(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821689fc
	if (!ctx.cr6.eq) goto loc_821689FC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// b 0x82168a7c
	goto loc_82168A7C;
loc_821689FC:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82168a24
	if (!ctx.cr6.eq) goto loc_82168A24;
	// bl 0x820ddca8
	ctx.lr = 0x82168A0C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168a1c
	if (ctx.cr6.eq) goto loc_82168A1C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82168a58
	goto loc_82168A58;
loc_82168A1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82168a58
	goto loc_82168A58;
loc_82168A24:
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82168a60
	if (ctx.cr6.eq) goto loc_82168A60;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82168a3c
	if (!ctx.cr6.eq) goto loc_82168A3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82168a54
	goto loc_82168A54;
loc_82168A3C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x82168A54;
	sub_820F3178(ctx, base);
loc_82168A54:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82168A58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168a6c
	if (!ctx.cr6.eq) goto loc_82168A6C;
loc_82168A60:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// b 0x82168a7c
	goto loc_82168A7C;
loc_82168A6C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x82168a7c
	goto loc_82168A7C;
loc_82168A78:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82168A7C:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82168a9c
	if (ctx.cr6.eq) goto loc_82168A9C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x820f43c8
	ctx.lr = 0x82168A94;
	sub_820F43C8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// b 0x82168aa0
	goto loc_82168AA0;
loc_82168A9C:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_82168AA0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x821689c4
	if (!ctx.cr0.eq) goto loc_821689C4;
loc_82168AAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168AB4"))) PPC_WEAK_FUNC(sub_82168AB4);
PPC_FUNC_IMPL(__imp__sub_82168AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82168AB8"))) PPC_WEAK_FUNC(sub_82168AB8);
PPC_FUNC_IMPL(__imp__sub_82168AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,31376
	ctx.r7.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,56(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blt cr6,0x82168b94
	if (ctx.cr6.lt) goto loc_82168B94;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
loc_82168AE4:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168b0c
	if (ctx.cr6.eq) goto loc_82168B0C;
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82168b08
	if (ctx.cr6.gt) goto loc_82168B08;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82168B08:
	// stfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_82168B0C:
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168b34
	if (ctx.cr6.eq) goto loc_82168B34;
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82168b30
	if (ctx.cr6.gt) goto loc_82168B30;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82168B30:
	// stfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_82168B34:
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168b5c
	if (ctx.cr6.eq) goto loc_82168B5C;
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82168b58
	if (ctx.cr6.gt) goto loc_82168B58;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82168B58:
	// stfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_82168B5C:
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168b84
	if (ctx.cr6.eq) goto loc_82168B84;
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82168b80
	if (ctx.cr6.gt) goto loc_82168B80;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82168B80:
	// stfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_82168B84:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82168ae4
	if (ctx.cr6.lt) goto loc_82168AE4;
loc_82168B94:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82168BA8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168bd0
	if (ctx.cr6.eq) goto loc_82168BD0;
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82168bcc
	if (ctx.cr6.gt) goto loc_82168BCC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82168BCC:
	// stfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_82168BD0:
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x82168ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82168BA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168BDC"))) PPC_WEAK_FUNC(sub_82168BDC);
PPC_FUNC_IMPL(__imp__sub_82168BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82168BE0"))) PPC_WEAK_FUNC(sub_82168BE0);
PPC_FUNC_IMPL(__imp__sub_82168BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x82168BE8;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stb r20,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r20.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// sth r30,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r30.u16);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82161240
	ctx.lr = 0x82168C38;
	sub_82161240(ctx, base);
	// lhz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subfc r5,r9,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r9.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r3,31
	ctx.r29.u64 = ctx.r3.u32 & 0x1;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// beq cr6,0x82168efc
	if (ctx.cr6.eq) goto loc_82168EFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x82168C64;
	sub_8208D070(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// beq cr6,0x82168efc
	if (ctx.cr6.eq) goto loc_82168EFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82168ab8
	ctx.lr = 0x82168C78;
	sub_82168AB8(ctx, base);
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r19,-1
	ctx.r19.s64 = -1;
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82168ca0
	if (ctx.cr6.gt) goto loc_82168CA0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82168ca4
	goto loc_82168CA4;
loc_82168CA0:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82168CA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82168CB4;
	sub_82082030(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82168cd4
	if (!ctx.cr6.gt) goto loc_82168CD4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82168CD4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82168CE4;
	sub_82082030(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// ori r22,r9,65535
	ctx.r22.u64 = ctx.r9.u64 | 65535;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82168e28
	if (!ctx.cr6.gt) goto loc_82168E28;
	// clrlwi r24,r29,24
	ctx.r24.u64 = ctx.r29.u32 & 0xFF;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82168D1C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// beq cr6,0x82168d34
	if (ctx.cr6.eq) goto loc_82168D34;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// b 0x82168d48
	goto loc_82168D48;
loc_82168D34:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x82168D3C;
	sub_8208D070(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_82168D48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x82168D50;
	sub_8208D070(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// bl 0x8208d070
	ctx.lr = 0x82168D68;
	sub_8208D070(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82168d7c
	if (ctx.cr6.eq) goto loc_82168D7C;
	// sth r20,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r20.u16);
	// b 0x82168d98
	goto loc_82168D98;
loc_82168D7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x82168D84;
	sub_8208D070(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82168d94
	if (!ctx.cr6.eq) goto loc_82168D94;
	// sth r20,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r20.u16);
	// b 0x82168d98
	goto loc_82168D98;
loc_82168D94:
	// sth r30,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r30.u16);
loc_82168D98:
	// sth r30,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r30.u16);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82168db4
	if (!ctx.cr6.gt) goto loc_82168DB4;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82168DB4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82168DC4;
	sub_82082030(ctx, base);
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82168de8
	if (ctx.cr6.eq) goto loc_82168DE8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stwx r26,r25,r11
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r26.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_82168DE8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82168e14
	if (!ctx.cr6.gt) goto loc_82168E14;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_82168DFC:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82168dfc
	if (ctx.cr6.lt) goto loc_82168DFC;
loc_82168E14:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82168d1c
	if (ctx.cr6.lt) goto loc_82168D1C;
loc_82168E28:
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
	// lhz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82168edc
	if (ctx.cr6.lt) goto loc_82168EDC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82168e4c
	if (!ctx.cr6.gt) goto loc_82168E4C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82168E4C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82168E5C;
	sub_82082030(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82168edc
	if (!ctx.cr6.gt) goto loc_82168EDC;
loc_82168E70:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82161240
	ctx.lr = 0x82168E80;
	sub_82161240(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82082030
	ctx.lr = 0x82168E98;
	sub_82082030(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stwx r28,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r28.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x8208cfb0
	ctx.lr = 0x82168EC8;
	sub_8208CFB0(ctx, base);
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82168e70
	if (ctx.cr6.lt) goto loc_82168E70;
loc_82168EDC:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821690b0
	ctx.lr = 0x82168EF0;
	sub_821690B0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
loc_82168EFC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168F08"))) PPC_WEAK_FUNC(sub_82168F08);
PPC_FUNC_IMPL(__imp__sub_82168F08) {
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
	// bl 0x82167f50
	ctx.lr = 0x82168F18;
	sub_82167F50(ctx, base);
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

__attribute__((alias("__imp__sub_82168F2C"))) PPC_WEAK_FUNC(sub_82168F2C);
PPC_FUNC_IMPL(__imp__sub_82168F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82168F30"))) PPC_WEAK_FUNC(sub_82168F30);
PPC_FUNC_IMPL(__imp__sub_82168F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x82168f84
	if (ctx.cr6.eq) goto loc_82168F84;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82168f84
	if (!ctx.cr6.eq) goto loc_82168F84;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// b 0x82168fa4
	goto loc_82168FA4;
loc_82168F84:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82168f84
	if (!ctx.cr0.eq) goto loc_82168F84;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82168FA4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x821783b8
	sub_821783B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168FB4"))) PPC_WEAK_FUNC(sub_82168FB4);
PPC_FUNC_IMPL(__imp__sub_82168FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168FB8"))) PPC_WEAK_FUNC(sub_82168FB8);
PPC_FUNC_IMPL(__imp__sub_82168FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x82168FC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821690a4
	if (ctx.cr6.eq) goto loc_821690A4;
	// lwz r23,96(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821690a4
	if (ctx.cr6.eq) goto loc_821690A4;
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82168FF8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82169064
	if (!ctx.cr6.eq) goto loc_82169064;
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169064
	if (ctx.cr6.eq) goto loc_82169064;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169090
	if (ctx.cr6.eq) goto loc_82169090;
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// beq cr6,0x8216905c
	if (ctx.cr6.eq) goto loc_8216905C;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82169038:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169050
	if (ctx.cr6.eq) goto loc_82169050;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82169050;
	sub_82080000(ctx, base);
loc_82169050:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r24,8(r31)
	ea = 8 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r31.u32 = ea;
	// bne 0x82169038
	if (!ctx.cr0.eq) goto loc_82169038;
loc_8216905C:
	// sth r24,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r24.u16);
	// b 0x82169090
	goto loc_82169090;
loc_82169064:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82169090
	if (!ctx.cr6.gt) goto loc_82169090;
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82169090
	if (!ctx.cr6.eq) goto loc_82169090;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82169228
	ctx.lr = 0x82169090;
	sub_82169228(ctx, base);
loc_82169090:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82168ff8
	if (ctx.cr6.lt) goto loc_82168FF8;
loc_821690A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821690AC"))) PPC_WEAK_FUNC(sub_821690AC);
PPC_FUNC_IMPL(__imp__sub_821690AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821690B0"))) PPC_WEAK_FUNC(sub_821690B0);
PPC_FUNC_IMPL(__imp__sub_821690B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x821690B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,112(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216921c
	if (ctx.cr6.eq) goto loc_8216921C;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stb r24,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r24.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r26,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r26.u16);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// sth r26,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r26.u16);
	// ble cr6,0x82169190
	if (!ctx.cr6.gt) goto loc_82169190;
loc_82169104:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82169124
	if (!ctx.cr6.eq) goto loc_82169124;
	// ld r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r25,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r25.s64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82169124:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82161240
	ctx.lr = 0x82169134;
	sub_82161240(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82082030
	ctx.lr = 0x8216914C;
	sub_82082030(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r23,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r23.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x8208cfb0
	ctx.lr = 0x82169180;
	sub_8208CFB0(ctx, base);
	// lwz r5,88(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82169104
	if (ctx.cr6.lt) goto loc_82169104;
loc_82169190:
	// lbz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821691d8
	if (ctx.cr6.eq) goto loc_821691D8;
	// stb r24,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r24.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r26,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r26.u16);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// sth r26,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r26.u16);
	// bl 0x821611c0
	ctx.lr = 0x821691BC;
	sub_821611C0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821697c8
	ctx.lr = 0x821691D8;
	sub_821697C8(ctx, base);
loc_821691D8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8216921c
	if (!ctx.cr6.gt) goto loc_8216921C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,24
	ctx.r11.s64 = 24;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821691FC:
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x821691fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821691FC;
loc_8216921C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169224"))) PPC_WEAK_FUNC(sub_82169224);
PPC_FUNC_IMPL(__imp__sub_82169224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169228"))) PPC_WEAK_FUNC(sub_82169228);
PPC_FUNC_IMPL(__imp__sub_82169228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82169230;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216933c
	if (ctx.cr6.eq) goto loc_8216933C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,1
	ctx.r30.s64 = 1;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r27,r10,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// sth r30,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r30.u16);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrldi r4,r9,32
	ctx.r4.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82169280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x821611c0
	ctx.lr = 0x821692A4;
	sub_821611C0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,1201
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1201, ctx.xer);
	// bne cr6,0x82169318
	if (!ctx.cr6.eq) goto loc_82169318;
	// lwz r29,88(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8216930c
	if (ctx.cr6.eq) goto loc_8216930C;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_821692C4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82082030
	ctx.lr = 0x821692E4;
	sub_82082030(ctx, base);
	// stwu r3,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x821692F8;
	sub_8208CFB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821611c0
	ctx.lr = 0x82169304;
	sub_821611C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821692c4
	if (!ctx.cr0.eq) goto loc_821692C4;
loc_8216930C:
	// lbz r11,108(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169334
	if (ctx.cr6.eq) goto loc_82169334;
loc_82169318:
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821697c8
	ctx.lr = 0x82169334;
	sub_821697C8(ctx, base);
loc_82169334:
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r11.u16);
loc_8216933C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169344"))) PPC_WEAK_FUNC(sub_82169344);
PPC_FUNC_IMPL(__imp__sub_82169344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169348"))) PPC_WEAK_FUNC(sub_82169348);
PPC_FUNC_IMPL(__imp__sub_82169348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82169350;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,156(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r23,0
	ctx.r23.s64 = 0;
	// add r22,r11,r27
	ctx.r22.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216943c
	if (!ctx.cr6.eq) goto loc_8216943C;
	// lis r11,327
	ctx.r11.s64 = 21430272;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// ori r10,r11,44564
	ctx.r10.u64 = ctx.r11.u64 | 44564;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821693a4
	if (ctx.cr6.gt) goto loc_821693A4;
	// mulli r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 * 200;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821693a8
	if (!ctx.cr6.gt) goto loc_821693A8;
loc_821693A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821693A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821693B8;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821693fc
	if (ctx.cr6.eq) goto loc_821693FC;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r30,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r30.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// blt 0x821693f4
	if (ctx.cr0.lt) goto loc_821693F4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,-28372
	ctx.r29.s64 = ctx.r11.s64 + -28372;
loc_821693DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821918d8
	ctx.lr = 0x821693E4;
	sub_821918D8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// bge 0x821693dc
	if (!ctx.cr0.lt) goto loc_821693DC;
loc_821693F4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82169400
	goto loc_82169400;
loc_821693FC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82169400:
	// stw r11,148(r25)
	PPC_STORE_U32(ctx.r25.u32 + 148, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8216943c
	if (ctx.cr6.eq) goto loc_8216943C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82169418:
	// lwz r10,144(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 144);
	// lwz r11,148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82191b08
	ctx.lr = 0x8216942C;
	sub_82191B08(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,200
	ctx.r29.s64 = ctx.r29.s64 + 200;
	// bne 0x82169418
	if (!ctx.cr0.eq) goto loc_82169418;
loc_8216943C:
	// lwz r11,152(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169484
	if (!ctx.cr6.eq) goto loc_82169484;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82169464
	if (!ctx.cr6.gt) goto loc_82169464;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82169464:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82169474;
	sub_82082030(ctx, base);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r3,152(r25)
	PPC_STORE_U32(ctx.r25.u32 + 152, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82169484;
	sub_8233EAF0(ctx, base);
loc_82169484:
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x821695b0
	if (!ctx.cr6.lt) goto loc_821695B0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// mulli r29,r27,200
	ctx.r29.s64 = ctx.r27.s64 * 200;
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r25,164
	ctx.r30.s64 = ctx.r25.s64 + 164;
	// subf r27,r27,r22
	ctx.r27.s64 = ctx.r22.s64 - ctx.r27.s64;
	// ori r28,r10,1
	ctx.r28.u64 = ctx.r10.u64 | 1;
	// ori r24,r8,6
	ctx.r24.u64 = ctx.r8.u64 | 6;
	// lis r26,-32197
	ctx.r26.s64 = -2110062592;
loc_821694B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821695a0
	if (ctx.cr6.eq) goto loc_821695A0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// bne cr6,0x82169528
	if (!ctx.cr6.eq) goto loc_82169528;
	// lwz r3,-27096(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821694EC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821694f8
	if (!ctx.cr6.eq) goto loc_821694F8;
	// bl 0x821b3000
	ctx.lr = 0x821694F8;
	sub_821B3000(ctx, base);
loc_821694F8:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169520
	if (ctx.cr6.eq) goto loc_82169520;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169520
	if (ctx.cr6.eq) goto loc_82169520;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82169558
	goto loc_82169558;
loc_82169520:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x82169558
	goto loc_82169558;
loc_82169528:
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82169560
	if (ctx.cr6.eq) goto loc_82169560;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82169540
	if (!ctx.cr6.eq) goto loc_82169540;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82169554
	goto loc_82169554;
loc_82169540:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82169554;
	sub_820F3178(ctx, base);
loc_82169554:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82169558:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82169568
	if (!ctx.cr6.eq) goto loc_82169568;
loc_82169560:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82169584
	goto loc_82169584;
loc_82169568:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82169580
	if (!ctx.cr6.eq) goto loc_82169580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x8216957C;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82169580:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_82169584:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82191d68
	ctx.lr = 0x821695A0;
	sub_82191D68(ctx, base);
loc_821695A0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,200
	ctx.r29.s64 = ctx.r29.s64 + 200;
	// bne 0x821694b8
	if (!ctx.cr0.eq) goto loc_821694B8;
loc_821695B0:
	// stw r22,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r22.u32);
	// stw r23,136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 136, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821695C4"))) PPC_WEAK_FUNC(sub_821695C4);
PPC_FUNC_IMPL(__imp__sub_821695C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821695C8"))) PPC_WEAK_FUNC(sub_821695C8);
PPC_FUNC_IMPL(__imp__sub_821695C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821695D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169640
	if (ctx.cr6.eq) goto loc_82169640;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,200
	ctx.r11.s64 = ctx.r10.s64 * 200;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82169614
	if (ctx.cr0.lt) goto loc_82169614;
loc_82169600:
	// addi r30,r30,-200
	ctx.r30.s64 = ctx.r30.s64 + -200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191a30
	ctx.lr = 0x8216960C;
	sub_82191A30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82169600
	if (!ctx.cr0.lt) goto loc_82169600;
loc_82169614:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169634
	if (ctx.cr6.eq) goto loc_82169634;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82169634
	if (ctx.cr6.eq) goto loc_82169634;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// lwz r3,-8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82169634;
	sub_82080000(ctx, base);
loc_82169634:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82169640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191a30
	ctx.lr = 0x82169648;
	sub_82191A30(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169668
	if (ctx.cr6.eq) goto loc_82169668;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82169668
	if (ctx.cr6.eq) goto loc_82169668;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82169668;
	sub_82080000(ctx, base);
loc_82169668:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169674"))) PPC_WEAK_FUNC(sub_82169674);
PPC_FUNC_IMPL(__imp__sub_82169674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169678"))) PPC_WEAK_FUNC(sub_82169678);
PPC_FUNC_IMPL(__imp__sub_82169678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x82169680;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821697bc
	if (ctx.cr6.eq) goto loc_821697BC;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r21,255
	ctx.r21.s64 = 255;
	// addi r23,r11,-7224
	ctx.r23.s64 = ctx.r11.s64 + -7224;
loc_821696B0:
	// lwz r11,140(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// add r29,r25,r11
	ctx.r29.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82176780
	ctx.lr = 0x821696C8;
	sub_82176780(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821697b0
	if (ctx.cr6.eq) goto loc_821697B0;
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82164730
	ctx.lr = 0x821696DC;
	sub_82164730(ctx, base);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82169720
	if (ctx.cr6.eq) goto loc_82169720;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821696F8:
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169710
	if (ctx.cr6.eq) goto loc_82169710;
	// lhz r10,116(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82169788
	if (!ctx.cr6.eq) goto loc_82169788;
loc_82169710:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821696f8
	if (ctx.cr6.lt) goto loc_821696F8;
loc_82169720:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82169724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x8216972C;
	sub_82172D60(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821697b0
	if (!ctx.cr6.eq) goto loc_821697B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821697b0
	if (!ctx.cr6.eq) goto loc_821697B0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821697b0
	if (!ctx.cr6.eq) goto loc_821697B0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// beq cr6,0x82169790
	if (ctx.cr6.eq) goto loc_82169790;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821913b0
	ctx.lr = 0x82169784;
	sub_821913B0(ctx, base);
	// b 0x82169798
	goto loc_82169798;
loc_82169788:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x82169724
	goto loc_82169724;
loc_82169790:
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
loc_82169798:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,148(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82191d68
	ctx.lr = 0x821697B0;
	sub_82191D68(ctx, base);
loc_821697B0:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// bne 0x821696b0
	if (!ctx.cr0.eq) goto loc_821696B0;
loc_821697BC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821697C4"))) PPC_WEAK_FUNC(sub_821697C4);
PPC_FUNC_IMPL(__imp__sub_821697C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821697C8"))) PPC_WEAK_FUNC(sub_821697C8);
PPC_FUNC_IMPL(__imp__sub_821697C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x821697D0;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821697f8
	if (!ctx.cr6.eq) goto loc_821697F8;
	// bl 0x82169348
	ctx.lr = 0x821697F8;
	sub_82169348(ctx, base);
loc_821697F8:
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169b78
	if (ctx.cr6.eq) goto loc_82169B78;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169820
	if (ctx.cr6.eq) goto loc_82169820;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// blt cr6,0x82169828
	if (ctx.cr6.lt) goto loc_82169828;
loc_82169820:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8216983c
	goto loc_8216983C;
loc_82169828:
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
loc_8216983C:
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r23,152(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stb r24,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r24.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// sth r25,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r25.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// sth r25,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r25.u16);
	// bl 0x82161240
	ctx.lr = 0x82169868;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169b78
	if (ctx.cr6.eq) goto loc_82169B78;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r22,255
	ctx.r22.s64 = 255;
loc_8216987C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1007
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1007, ctx.xer);
	// bne cr6,0x821698b4
	if (!ctx.cr6.eq) goto loc_821698B4;
	// stb r24,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r24.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// sth r25,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r25.u16);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// sth r25,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r25.u16);
	// bl 0x821611c0
	ctx.lr = 0x821698B4;
	sub_821611C0(ctx, base);
loc_821698B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208d070
	ctx.lr = 0x821698BC;
	sub_8208D070(ctx, base);
	// and r11,r3,r23
	ctx.r11.u64 = ctx.r3.u64 & ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169b50
	if (ctx.cr6.eq) goto loc_82169B50;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208d070
	ctx.lr = 0x821698D0;
	sub_8208D070(ctx, base);
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821698ec
	if (!ctx.cr6.eq) goto loc_821698EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821613d0
	ctx.lr = 0x821698EC;
	sub_821613D0(ctx, base);
loc_821698EC:
	// cmplwi cr6,r31,1007
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1007, ctx.xer);
	// bne cr6,0x82169ae8
	if (!ctx.cr6.eq) goto loc_82169AE8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82169a0c
	if (!ctx.cr6.eq) goto loc_82169A0C;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821699c4
	if (!ctx.cr6.lt) goto loc_821699C4;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82169974
	if (ctx.cr6.lt) goto loc_82169974;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,140(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_8216992C:
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821699c4
	if (!ctx.cr6.gt) goto loc_821699C4;
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821699b0
	if (!ctx.cr6.gt) goto loc_821699B0;
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821699b8
	if (!ctx.cr6.gt) goto loc_821699B8;
	// lfs f0,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821699c0
	if (!ctx.cr6.gt) goto loc_821699C0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r7,-3
	ctx.r10.s64 = ctx.r7.s64 + -3;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216992c
	if (ctx.cr6.lt) goto loc_8216992C;
loc_82169974:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821699c4
	if (!ctx.cr6.lt) goto loc_821699C4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,140(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_8216998C:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821699c4
	if (!ctx.cr6.gt) goto loc_821699C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8216998c
	if (ctx.cr6.lt) goto loc_8216998C;
	// b 0x821699c4
	goto loc_821699C4;
loc_821699B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821699c4
	goto loc_821699C4;
loc_821699B8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x821699c4
	goto loc_821699C4;
loc_821699C0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_821699C4:
	// stw r11,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82169a04
	if (!ctx.cr6.lt) goto loc_82169A04;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,140(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_821699E4:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82169a04
	if (ctx.cr6.eq) goto loc_82169A04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt cr6,0x821699e4
	if (ctx.cr6.lt) goto loc_821699E4;
loc_82169A04:
	// addi r29,r29,-20
	ctx.r29.s64 = ctx.r29.s64 + -20;
	// b 0x82169a1c
	goto loc_82169A1C;
loc_82169A0C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208d070
	ctx.lr = 0x82169A14;
	sub_8208D070(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r29,-24
	ctx.r29.s64 = ctx.r29.s64 + -24;
loc_82169A1C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,140(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82169a48
	if (ctx.cr6.eq) goto loc_82169A48;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821613d0
	ctx.lr = 0x82169A48;
	sub_821613D0(ctx, base);
loc_82169A48:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82082030
	ctx.lr = 0x82169A5C;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x82169A70;
	sub_8208CFB0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// bl 0x82176838
	ctx.lr = 0x82169A90;
	sub_82176838(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82169ab0
	if (ctx.cr6.eq) goto loc_82169AB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821913b0
	ctx.lr = 0x82169AAC;
	sub_821913B0(ctx, base);
	// b 0x82169ab8
	goto loc_82169AB8;
loc_82169AB0:
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
loc_82169AB8:
	// lwz r10,152(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r27,200
	ctx.r11.s64 = ctx.r27.s64 * 200;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,148(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82191d68
	ctx.lr = 0x82169AE4;
	sub_82191D68(ctx, base);
	// b 0x82169b5c
	goto loc_82169B5C;
loc_82169AE8:
	// cmplwi cr6,r31,2152
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2152, ctx.xer);
	// bne cr6,0x82169b50
	if (!ctx.cr6.eq) goto loc_82169B50;
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// mulli r30,r27,200
	ctx.r30.s64 = ctx.r27.s64 * 200;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169b50
	if (ctx.cr6.eq) goto loc_82169B50;
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8208d070
	ctx.lr = 0x82169B1C;
	sub_8208D070(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208d070
	ctx.lr = 0x82169B24;
	sub_8208D070(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208d070
	ctx.lr = 0x82169B2C;
	sub_8208D070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169b5c
	if (ctx.cr6.eq) goto loc_82169B5C;
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82191bd8
	ctx.lr = 0x82169B4C;
	sub_82191BD8(ctx, base);
	// b 0x82169b5c
	goto loc_82169B5C;
loc_82169B50:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821613d0
	ctx.lr = 0x82169B5C;
	sub_821613D0(ctx, base);
loc_82169B5C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82161240
	ctx.lr = 0x82169B6C;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216987c
	if (!ctx.cr6.eq) goto loc_8216987C;
loc_82169B78:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169B84"))) PPC_WEAK_FUNC(sub_82169B84);
PPC_FUNC_IMPL(__imp__sub_82169B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169B88"))) PPC_WEAK_FUNC(sub_82169B88);
PPC_FUNC_IMPL(__imp__sub_82169B88) {
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
	// beq cr6,0x82169c84
	if (ctx.cr6.eq) goto loc_82169C84;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6312
	ctx.r31.s64 = ctx.r11.s64 + 6312;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82169BBC;
	sub_823052D8(ctx, base);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
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
	// bne cr6,0x82169c78
	if (!ctx.cr6.eq) goto loc_82169C78;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82169c78
	if (ctx.cr6.eq) goto loc_82169C78;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82169c78
	if (!ctx.cr6.lt) goto loc_82169C78;
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
	// beq cr6,0x82169c50
	if (ctx.cr6.eq) goto loc_82169C50;
loc_82169C28:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82169c48
	if (ctx.cr6.eq) goto loc_82169C48;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82169c28
	if (!ctx.cr6.eq) goto loc_82169C28;
	// b 0x82169c50
	goto loc_82169C50;
loc_82169C48:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82169C50:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82169c68
	if (!ctx.cr6.eq) goto loc_82169C68;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82169C68:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82169C74;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82169C78:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82169C84;
	sub_823051A8(ctx, base);
loc_82169C84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169C9C"))) PPC_WEAK_FUNC(sub_82169C9C);
PPC_FUNC_IMPL(__imp__sub_82169C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169CA0"))) PPC_WEAK_FUNC(sub_82169CA0);
PPC_FUNC_IMPL(__imp__sub_82169CA0) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6312
	ctx.r31.s64 = ctx.r11.s64 + 6312;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82169CC8;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169cec
	if (ctx.cr6.eq) goto loc_82169CEC;
loc_82169CD4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82169d1c
	if (!ctx.cr6.eq) goto loc_82169D1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169cd4
	if (!ctx.cr6.eq) goto loc_82169CD4;
loc_82169CEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169d44
	if (!ctx.cr6.eq) goto loc_82169D44;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82169da0
	ctx.lr = 0x82169D00;
	sub_82169DA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169d44
	if (!ctx.cr6.eq) goto loc_82169D44;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82169D14;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82169d88
	goto loc_82169D88;
loc_82169D1C:
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
	// b 0x82169d78
	goto loc_82169D78;
loc_82169D44:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,212
	ctx.r10.s64 = ctx.r11.s64 + 212;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
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
loc_82169D78:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82169D84;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82169D88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169DA0"))) PPC_WEAK_FUNC(sub_82169DA0);
PPC_FUNC_IMPL(__imp__sub_82169DA0) {
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
	// mulli r11,r3,224
	ctx.r11.s64 = ctx.r3.s64 * 224;
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
	ctx.lr = 0x82169DCC;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6312
	ctx.r11.s64 = ctx.r11.s64 + 6312;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169de8
	if (ctx.cr6.eq) goto loc_82169DE8;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x82169dec
	goto loc_82169DEC;
loc_82169DE8:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82169DEC:
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
	// beq cr6,0x82169e2c
	if (ctx.cr6.eq) goto loc_82169E2C;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82169E24:
	// stwu r3,224(r10)
	ea = 224 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82169e24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82169E24;
loc_82169E2C:
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

__attribute__((alias("__imp__sub_82169E4C"))) PPC_WEAK_FUNC(sub_82169E4C);
PPC_FUNC_IMPL(__imp__sub_82169E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169E50"))) PPC_WEAK_FUNC(sub_82169E50);
PPC_FUNC_IMPL(__imp__sub_82169E50) {
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
	// addi r10,r11,-28560
	ctx.r10.s64 = ctx.r11.s64 + -28560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x82169E7C;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82169e94
	if (ctx.cr6.eq) goto loc_82169E94;
	// bl 0x82169b88
	ctx.lr = 0x82169E90;
	sub_82169B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82169E94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169EAC"))) PPC_WEAK_FUNC(sub_82169EAC);
PPC_FUNC_IMPL(__imp__sub_82169EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169EB0"))) PPC_WEAK_FUNC(sub_82169EB0);
PPC_FUNC_IMPL(__imp__sub_82169EB0) {
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
	ctx.lr = 0x82169EC8;
	sub_82081C00(ctx, base);
	// bl 0x8216b620
	ctx.lr = 0x82169ECC;
	sub_8216B620(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82169EDC;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82169ef0
	if (!ctx.cr6.eq) goto loc_82169EF0;
	// bl 0x821b3000
	ctx.lr = 0x82169EEC;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82169EF0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169f08
	if (ctx.cr6.eq) goto loc_82169F08;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82169F08:
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

__attribute__((alias("__imp__sub_82169F1C"))) PPC_WEAK_FUNC(sub_82169F1C);
PPC_FUNC_IMPL(__imp__sub_82169F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169F20"))) PPC_WEAK_FUNC(sub_82169F20);
PPC_FUNC_IMPL(__imp__sub_82169F20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x82169f54
	if (ctx.cr6.gt) goto loc_82169F54;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82169f4c
	if (ctx.cr6.eq) goto loc_82169F4C;
	// bdz 0x82169f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82169F54;
	// bdz 0x82169f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82169F44;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82169F44:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82169F4C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82169F54:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169F5C"))) PPC_WEAK_FUNC(sub_82169F5C);
PPC_FUNC_IMPL(__imp__sub_82169F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169F60"))) PPC_WEAK_FUNC(sub_82169F60);
PPC_FUNC_IMPL(__imp__sub_82169F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82169F68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r9,r11,21424
	ctx.r9.s64 = ctx.r11.s64 + 21424;
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// addi r8,r10,-28316
	ctx.r8.s64 = ctx.r10.s64 + -28316;
	// stb r30,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r30.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r30,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r30.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8216A02C;
	sub_82305000(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82247360
	ctx.lr = 0x8216A050;
	sub_82247360(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8216A078;
	sub_82305000(ctx, base);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r26,256
	ctx.r26.s64 = 256;
	// li r27,64
	ctx.r27.s64 = 64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8216A08C:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// stb r28,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r28.u8);
	// bl 0x8216b878
	ctx.lr = 0x8216A0A4;
	sub_8216B878(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x8216a08c
	if (!ctx.cr0.eq) goto loc_8216A08C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A0BC"))) PPC_WEAK_FUNC(sub_8216A0BC);
PPC_FUNC_IMPL(__imp__sub_8216A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216A0C0"))) PPC_WEAK_FUNC(sub_8216A0C0);
PPC_FUNC_IMPL(__imp__sub_8216A0C0) {
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
	// bl 0x8216a120
	ctx.lr = 0x8216A0E0;
	sub_8216A120(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a100
	if (ctx.cr6.eq) goto loc_8216A100;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216a100
	if (ctx.cr6.eq) goto loc_8216A100;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216A100;
	sub_82080000(ctx, base);
loc_8216A100:
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

__attribute__((alias("__imp__sub_8216A11C"))) PPC_WEAK_FUNC(sub_8216A11C);
PPC_FUNC_IMPL(__imp__sub_8216A11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216A120"))) PPC_WEAK_FUNC(sub_8216A120);
PPC_FUNC_IMPL(__imp__sub_8216A120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8216A128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r3,164
	ctx.r11.s64 = ctx.r3.s64 + 164;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a148
	if (ctx.cr6.eq) goto loc_8216A148;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x8216A148;
	sub_82246E18(ctx, base);
loc_8216A148:
	// lwz r3,152(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a158
	if (ctx.cr6.eq) goto loc_8216A158;
	// bl 0x82246e18
	ctx.lr = 0x8216A158;
	sub_82246E18(ctx, base);
loc_8216A158:
	// lwz r10,132(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addi r11,r28,124
	ctx.r11.s64 = ctx.r28.s64 + 124;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a170
	if (ctx.cr6.eq) goto loc_8216A170;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x8216A170;
	sub_82246E18(ctx, base);
loc_8216A170:
	// addi r31,r28,124
	ctx.r31.s64 = ctx.r28.s64 + 124;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8216A17C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a1a8
	if (ctx.cr6.eq) goto loc_8216A1A8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a1a4
	if (ctx.cr6.eq) goto loc_8216A1A4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216A1A4;
	sub_82080000(ctx, base);
loc_8216A1A4:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_8216A1A8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bge 0x8216a17c
	if (!ctx.cr0.lt) goto loc_8216A17C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4344
	ctx.r9.s64 = ctx.r11.s64 + 4344;
	// stb r10,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// bl 0x82305448
	ctx.lr = 0x8216A1D4;
	sub_82305448(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,4352
	ctx.r7.s64 = ctx.r8.s64 + 4352;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A1E8"))) PPC_WEAK_FUNC(sub_8216A1E8);
PPC_FUNC_IMPL(__imp__sub_8216A1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8216A1F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8216A204;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216a210
	if (!ctx.cr6.eq) goto loc_8216A210;
	// bl 0x821b3000
	ctx.lr = 0x8216A210;
	sub_821B3000(ctx, base);
loc_8216A210:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r3,r11,32768
	ctx.r3.u64 = ctx.r11.u64 | 32768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216A230;
	sub_82082030(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216a2fc
	if (!ctx.cr6.eq) goto loc_8216A2FC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r28,r30,152
	ctx.r28.s64 = ctx.r30.s64 + 152;
	// addi r27,r11,22200
	ctx.r27.s64 = ctx.r11.s64 + 22200;
loc_8216A258:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82247250
	ctx.lr = 0x8216A264;
	sub_82247250(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a298
	if (ctx.cr6.eq) goto loc_8216A298;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
loc_8216A27C:
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
	// bne 0x8216a27c
	if (!ctx.cr0.eq) goto loc_8216A27C;
loc_8216A298:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8216a2ac
	if (!ctx.cr6.eq) goto loc_8216A2AC;
	// bl 0x8216af58
	ctx.lr = 0x8216A2A4;
	sub_8216AF58(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216a258
	if (ctx.cr6.eq) goto loc_8216A258;
loc_8216A2AC:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216a2fc
	if (!ctx.cr6.eq) goto loc_8216A2FC;
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a2dc
	if (ctx.cr6.eq) goto loc_8216A2DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821b13c0
	ctx.lr = 0x8216A2CC;
	sub_821B13C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r29.u8);
	// stb r11,44(r27)
	PPC_STORE_U8(ctx.r27.u32 + 44, ctx.r11.u8);
	// b 0x8216a2f0
	goto loc_8216A2F0;
loc_8216A2DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216ab68
	ctx.lr = 0x8216A2E8;
	sub_8216AB68(ctx, base);
	// stw r29,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r29.u32);
	// stb r29,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r29.u8);
loc_8216A2F0:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a258
	if (ctx.cr6.eq) goto loc_8216A258;
loc_8216A2FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A308"))) PPC_WEAK_FUNC(sub_8216A308);
PPC_FUNC_IMPL(__imp__sub_8216A308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x8216A310;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r22,r3,124
	ctx.r22.s64 = ctx.r3.s64 + 124;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x823052d8
	ctx.lr = 0x8216A334;
	sub_823052D8(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r8,r11,0,17,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r27,12(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// beq cr6,0x8216a394
	if (ctx.cr6.eq) goto loc_8216A394;
	// rlwinm r8,r11,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216a36c
	if (ctx.cr6.eq) goto loc_8216A36C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8216a37c
	goto loc_8216A37C;
loc_8216A36C:
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8216A37C:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8216a394
	if (!ctx.cr6.eq) goto loc_8216A394;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823051a8
	ctx.lr = 0x8216A38C;
	sub_823051A8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_8216A394:
	// li r11,-28673
	ctx.r11.s64 = -28673;
loc_8216A398:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a398
	if (!ctx.cr0.eq) goto loc_8216A398;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8216a3e0
	if (!ctx.cr6.eq) goto loc_8216A3E0;
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_8216A3C0:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a3c0
	if (!ctx.cr0.eq) goto loc_8216A3C0;
	// b 0x8216a42c
	goto loc_8216A42C;
loc_8216A3E0:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8216a40c
	if (!ctx.cr6.eq) goto loc_8216A40C;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_8216A3EC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a3ec
	if (!ctx.cr0.eq) goto loc_8216A3EC;
	// b 0x8216a42c
	goto loc_8216A42C;
loc_8216A40C:
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_8216A410:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a410
	if (!ctx.cr0.eq) goto loc_8216A410;
loc_8216A42C:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
loc_8216A430:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
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
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a430
	if (!ctx.cr0.eq) goto loc_8216A430;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8216a4e0
	if (ctx.cr6.eq) goto loc_8216A4E0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x8216a4e0
	if (ctx.cr6.eq) goto loc_8216A4E0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r31,r25,32
	ctx.r31.s64 = ctx.r25.s64 + 32;
loc_8216A46C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216a4e0
	if (!ctx.cr6.eq) goto loc_8216A4E0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216a4d0
	if (ctx.cr6.eq) goto loc_8216A4D0;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8216A490:
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8216a4b0
	if (ctx.cr6.eq) goto loc_8216A4B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8216a490
	if (ctx.cr6.lt) goto loc_8216A490;
	// b 0x8216a4d0
	goto loc_8216A4D0;
loc_8216A4B0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r24,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r24.u32);
	// bl 0x82172d60
	ctx.lr = 0x8216A4CC;
	sub_82172D60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_8216A4D0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x8216a46c
	if (ctx.cr6.lt) goto loc_8216A46C;
loc_8216A4E0:
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r29,8(r26)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x8216b720
	ctx.lr = 0x8216A50C;
	sub_8216B720(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x8216a5b8
	if (ctx.cr6.eq) goto loc_8216A5B8;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216a570
	if (ctx.cr6.eq) goto loc_8216A570;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8216A530:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8216a554
	if (!ctx.cr6.eq) goto loc_8216A554;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8216a570
	if (ctx.cr6.gt) goto loc_8216A570;
	// b 0x8216a560
	goto loc_8216A560;
loc_8216A554:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216a570
	if (!ctx.cr6.eq) goto loc_8216A570;
loc_8216A560:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8216a530
	if (ctx.cr6.lt) goto loc_8216A530;
loc_8216A570:
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8216a5b8
	if (!ctx.cr6.gt) goto loc_8216A5B8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8216A588:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,6
	ctx.r9.s64 = 6;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,-28
	ctx.r10.s64 = ctx.r11.s64 + -28;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216A5A0:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216a5a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216A5A0;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,-24
	ctx.r8.s64 = ctx.r8.s64 + -24;
	// bne 0x8216a588
	if (!ctx.cr0.eq) goto loc_8216A588;
loc_8216A5B8:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,6
	ctx.r10.s64 = 6;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r8,r26,-4
	ctx.r8.s64 = ctx.r26.s64 + -4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_8216A5DC:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216a5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216A5DC;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r23.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r24.u32);
	// bl 0x823051a8
	ctx.lr = 0x8216A608;
	sub_823051A8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,152(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// addi r31,r25,152
	ctx.r31.s64 = ctx.r25.s64 + 152;
	// bl 0x822473f8
	ctx.lr = 0x8216A61C;
	sub_822473F8(ctx, base);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_8216A620:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a620
	if (!ctx.cr0.eq) goto loc_8216A620;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A644"))) PPC_WEAK_FUNC(sub_8216A644);
PPC_FUNC_IMPL(__imp__sub_8216A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216A648"))) PPC_WEAK_FUNC(sub_8216A648);
PPC_FUNC_IMPL(__imp__sub_8216A648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8216A650;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8216a958
	ctx.lr = 0x8216A670;
	sub_8216A958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216a690
	if (!ctx.cr6.eq) goto loc_8216A690;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8216A690:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216A6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216a7f0
	if (ctx.cr6.eq) goto loc_8216A7F0;
	// stw r31,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r31.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8216a6ec
	if (ctx.cr6.gt) goto loc_8216A6EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216a6e4
	if (ctx.cr6.eq) goto loc_8216A6E4;
	// bdz 0x8216a6ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8216A6EC;
	// bdz 0x8216a6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8216A6DC;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x8216a6f0
	goto loc_8216A6F0;
loc_8216A6DC:
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x8216a6f0
	goto loc_8216A6F0;
loc_8216A6E4:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x8216a6f0
	goto loc_8216A6F0;
loc_8216A6EC:
	// li r4,20
	ctx.r4.s64 = 20;
loc_8216A6F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8216ba08
	ctx.lr = 0x8216A6F8;
	sub_8216BA08(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a710
	if (ctx.cr6.eq) goto loc_8216A710;
	// lbz r11,293(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 293);
	// b 0x8216a714
	goto loc_8216A714;
loc_8216A710:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216A714:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a734
	if (ctx.cr6.eq) goto loc_8216A734;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8216b1a0
	ctx.lr = 0x8216A730;
	sub_8216B1A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8216A734:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216a7cc
	if (!ctx.cr6.eq) goto loc_8216A7CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,148(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r3,16436(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16436);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8216a7cc
	if (ctx.cr6.eq) goto loc_8216A7CC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8216a788
	if (!ctx.cr6.eq) goto loc_8216A788;
	// bl 0x820ddca8
	ctx.lr = 0x8216A770;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a780
	if (ctx.cr6.eq) goto loc_8216A780;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8216a7ac
	goto loc_8216A7AC;
loc_8216A780:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216a7ac
	goto loc_8216A7AC;
loc_8216A788:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8216a7cc
	if (ctx.cr6.eq) goto loc_8216A7CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x8216A7AC;
	sub_820F3178(ctx, base);
loc_8216A7AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a7cc
	if (ctx.cr6.eq) goto loc_8216A7CC;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216a7cc
	if (ctx.cr6.eq) goto loc_8216A7CC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,126
	ctx.r4.s64 = 126;
	// bl 0x820daf68
	ctx.lr = 0x8216A7CC;
	sub_820DAF68(ctx, base);
loc_8216A7CC:
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r7,r27,72
	ctx.r7.s64 = ctx.r27.s64 + 72;
loc_8216A7D4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a7d4
	if (!ctx.cr0.eq) goto loc_8216A7D4;
loc_8216A7F0:
	// li r11,-33
	ctx.r11.s64 = -33;
	// addi r7,r28,160
	ctx.r7.s64 = ctx.r28.s64 + 160;
loc_8216A7F8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a7f8
	if (!ctx.cr0.eq) goto loc_8216A7F8;
	// addi r3,r28,528
	ctx.r3.s64 = ctx.r28.s64 + 528;
	// bl 0x823051a8
	ctx.lr = 0x8216A81C;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A828"))) PPC_WEAK_FUNC(sub_8216A828);
PPC_FUNC_IMPL(__imp__sub_8216A828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8216A830;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r11,22200
	ctx.r9.s64 = ctx.r11.s64 + 22200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,984(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 984);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8216a860
	if (!ctx.cr6.gt) goto loc_8216A860;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8216A860:
	// lhz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216a958
	ctx.lr = 0x8216A874;
	sub_8216A958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216a894
	if (!ctx.cr6.eq) goto loc_8216A894;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8216A894:
	// stw r31,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r31.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8216a8d0
	if (ctx.cr6.gt) goto loc_8216A8D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216a8c8
	if (ctx.cr6.eq) goto loc_8216A8C8;
	// bdz 0x8216a8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8216A8D0;
	// bdz 0x8216a8c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8216A8C0;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x8216a8d4
	goto loc_8216A8D4;
loc_8216A8C0:
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x8216a8d4
	goto loc_8216A8D4;
loc_8216A8C8:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x8216a8d4
	goto loc_8216A8D4;
loc_8216A8D0:
	// li r4,20
	ctx.r4.s64 = 20;
loc_8216A8D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8216ba08
	ctx.lr = 0x8216A8DC;
	sub_8216BA08(ctx, base);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a8f8
	if (ctx.cr6.eq) goto loc_8216A8F8;
	// lbz r31,293(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 293);
	// b 0x8216a8fc
	goto loc_8216A8FC;
loc_8216A8F8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8216A8FC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a920
	if (ctx.cr6.eq) goto loc_8216A920;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216A920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216A920:
	// li r11,-33
	ctx.r11.s64 = -33;
	// addi r7,r29,160
	ctx.r7.s64 = ctx.r29.s64 + 160;
loc_8216A928:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216a928
	if (!ctx.cr0.eq) goto loc_8216A928;
	// addi r3,r29,528
	ctx.r3.s64 = ctx.r29.s64 + 528;
	// bl 0x823051a8
	ctx.lr = 0x8216A94C;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A958"))) PPC_WEAK_FUNC(sub_8216A958);
PPC_FUNC_IMPL(__imp__sub_8216A958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8216A960;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r31,r11,-29208
	ctx.r31.s64 = ctx.r11.s64 + -29208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823052d8
	ctx.lr = 0x8216A988;
	sub_823052D8(ctx, base);
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// bge cr6,0x8216a9dc
	if (!ctx.cr6.lt) goto loc_8216A9DC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216a9dc
	if (ctx.cr6.eq) goto loc_8216A9DC;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216a9dc
	if (!ctx.cr6.eq) goto loc_8216A9DC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r8,r10,49164
	ctx.r8.u64 = ctx.r10.u64 | 49164;
	// rlwinm r7,r9,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// beq cr6,0x8216a9fc
	if (ctx.cr6.eq) goto loc_8216A9FC;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8216aa04
	if (ctx.cr6.eq) goto loc_8216AA04;
loc_8216A9DC:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823051a8
	ctx.lr = 0x8216A9E8;
	sub_823051A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8216A9FC:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8216aa14
	if (!ctx.cr6.eq) goto loc_8216AA14;
loc_8216AA04:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216a9dc
	if (ctx.cr6.eq) goto loc_8216A9DC;
loc_8216AA14:
	// li r10,32
	ctx.r10.s64 = 32;
loc_8216AA18:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216aa18
	if (!ctx.cr0.eq) goto loc_8216AA18;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823051a8
	ctx.lr = 0x8216AA40;
	sub_823051A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,528
	ctx.r3.s64 = ctx.r30.s64 + 528;
	// bl 0x823052d8
	ctx.lr = 0x8216AA4C;
	sub_823052D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216AA58"))) PPC_WEAK_FUNC(sub_8216AA58);
PPC_FUNC_IMPL(__imp__sub_8216AA58) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8216ab50
	if (ctx.cr6.lt) goto loc_8216AB50;
	// beq cr6,0x8216aa98
	if (ctx.cr6.eq) goto loc_8216AA98;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8216ab38
	if (!ctx.cr6.lt) goto loc_8216AB38;
	// bl 0x8216a828
	ctx.lr = 0x8216AA84;
	sub_8216A828(ctx, base);
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
loc_8216AA98:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216AAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216ab38
	if (ctx.cr6.eq) goto loc_8216AB38;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lhz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r7,r11,20000
	ctx.r7.s64 = ctx.r11.s64 + 20000;
	// ori r6,r9,300
	ctx.r6.u64 = ctx.r9.u64 | 300;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8216ab00
	if (ctx.cr6.lt) goto loc_8216AB00;
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
loc_8216AB00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216AB14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,-164
	ctx.r7.s64 = -164;
	// addi r5,r31,72
	ctx.r5.s64 = ctx.r31.s64 + 72;
loc_8216AB1C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 & ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216ab1c
	if (!ctx.cr0.eq) goto loc_8216AB1C;
loc_8216AB38:
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
loc_8216AB50:
	// bl 0x8216a648
	ctx.lr = 0x8216AB54;
	sub_8216A648(ctx, base);
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

__attribute__((alias("__imp__sub_8216AB68"))) PPC_WEAK_FUNC(sub_8216AB68);
PPC_FUNC_IMPL(__imp__sub_8216AB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x8216AB70;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r20,r11,-29208
	ctx.r20.s64 = ctx.r11.s64 + -29208;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216ac34
	if (!ctx.cr6.eq) goto loc_8216AC34;
loc_8216AB98:
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// bge cr6,0x8216abb8
	if (!ctx.cr6.lt) goto loc_8216ABB8;
	// addi r31,r23,1
	ctx.r31.s64 = ctx.r23.s64 + 1;
loc_8216ABA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8216ab68
	ctx.lr = 0x8216ABB0;
	sub_8216AB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216aba4
	if (!ctx.cr6.eq) goto loc_8216ABA4;
loc_8216ABB8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,49164
	ctx.r10.u64 = ctx.r11.u64 | 49164;
	// lwzx r11,r20,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ac34
	if (ctx.cr6.eq) goto loc_8216AC34;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216ac34
	if (!ctx.cr6.eq) goto loc_8216AC34;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8216ac14
	if (ctx.cr6.gt) goto loc_8216AC14;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216ac04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8216AC04;
	// bdzf 4*cr6+eq,0x8216ac14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8216AC14;
	// bne cr6,0x8216ac0c
	if (!ctx.cr6.eq) goto loc_8216AC0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8216ac18
	goto loc_8216AC18;
loc_8216AC04:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8216ac18
	goto loc_8216AC18;
loc_8216AC0C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8216ac18
	goto loc_8216AC18;
loc_8216AC14:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8216AC18:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x8216ac34
	if (ctx.cr6.lt) goto loc_8216AC34;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82247328
	ctx.lr = 0x8216AC28;
	sub_82247328(ctx, base);
	// lbz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ab98
	if (ctx.cr6.eq) goto loc_8216AB98;
loc_8216AC34:
	// lbz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ac4c
	if (ctx.cr6.eq) goto loc_8216AC4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_8216AC4C:
	// addi r30,r24,164
	ctx.r30.s64 = ctx.r24.s64 + 164;
	// li r22,-1
	ctx.r22.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x823052d8
	ctx.lr = 0x8216AC60;
	sub_823052D8(ctx, base);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r31,160(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216ac9c
	if (ctx.cr6.eq) goto loc_8216AC9C;
loc_8216AC70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216AC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add. r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8216ac9c
	if (!ctx.cr0.eq) goto loc_8216AC9C;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8216ac70
	if (!ctx.cr6.eq) goto loc_8216AC70;
loc_8216AC9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x8216ACA4;
	sub_823051A8(ctx, base);
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216ace4
	if (ctx.cr6.eq) goto loc_8216ACE4;
	// addi r27,r24,124
	ctx.r27.s64 = ctx.r24.s64 + 124;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823052d8
	ctx.lr = 0x8216ACD0;
	sub_823052D8(ctx, base);
	// lwz r25,32(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8216acf0
	if (!ctx.cr6.eq) goto loc_8216ACF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823051a8
	ctx.lr = 0x8216ACE4;
	sub_823051A8(ctx, base);
loc_8216ACE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_8216ACF0:
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// stb r21,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r21.u8);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x8216b878
	ctx.lr = 0x8216AD20;
	sub_8216B878(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8216b720
	ctx.lr = 0x8216AD34;
	sub_8216B720(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8216AD50;
	sub_8233E4E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8216b720
	ctx.lr = 0x8216AD5C;
	sub_8216B720(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216adcc
	if (ctx.cr6.eq) goto loc_8216ADCC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r9,-28673
	ctx.r9.s64 = -28673;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
loc_8216AD7C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216adc4
	if (ctx.cr6.eq) goto loc_8216ADC4;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
loc_8216AD8C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwcx. r6,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216ad8c
	if (!ctx.cr0.eq) goto loc_8216AD8C;
loc_8216ADA8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 & ctx.r4.u64;
	// stwcx. r3,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216ada8
	if (!ctx.cr0.eq) goto loc_8216ADA8;
loc_8216ADC4:
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// bdnz 0x8216ad7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216AD7C;
loc_8216ADCC:
	// stb r21,24(r24)
	PPC_STORE_U8(ctx.r24.u32 + 24, ctx.r21.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823051a8
	ctx.lr = 0x8216ADD8;
	sub_823051A8(ctx, base);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r27,r28,r25
	ctx.r27.u64 = ctx.r28.u64 + ctx.r25.u64;
	// ori r29,r11,32767
	ctx.r29.u64 = ctx.r11.u64 | 32767;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_8216ADEC:
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// bge cr6,0x8216ae0c
	if (!ctx.cr6.lt) goto loc_8216AE0C;
	// addi r30,r23,1
	ctx.r30.s64 = ctx.r23.s64 + 1;
loc_8216ADF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8216ab68
	ctx.lr = 0x8216AE04;
	sub_8216AB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216adf8
	if (!ctx.cr6.eq) goto loc_8216ADF8;
loc_8216AE0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216af20
	if (ctx.cr6.eq) goto loc_8216AF20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8216aa58
	ctx.lr = 0x8216AE24;
	sub_8216AA58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ae5c
	if (ctx.cr6.eq) goto loc_8216AE5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
loc_8216AE3C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 & ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216ae3c
	if (!ctx.cr0.eq) goto loc_8216AE3C;
	// b 0x8216af18
	goto loc_8216AF18;
loc_8216AE5C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x8216aea0
	if (ctx.cr6.eq) goto loc_8216AEA0;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aeb8
	if (ctx.cr6.eq) goto loc_8216AEB8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aeb8
	if (ctx.cr6.eq) goto loc_8216AEB8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// sth r9,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r9.u16);
	// b 0x8216aea8
	goto loc_8216AEA8;
loc_8216AEA0:
	// sth r28,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r28.u16);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
loc_8216AEA8:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8216a308
	ctx.lr = 0x8216AEB8;
	sub_8216A308(ctx, base);
loc_8216AEB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
loc_8216AEC0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 & ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216aec0
	if (!ctx.cr0.eq) goto loc_8216AEC0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ori r5,r6,49164
	ctx.r5.u64 = ctx.r6.u64 | 49164;
	// lwzx r10,r20,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r5.u32);
	// bl 0x82169f20
	ctx.lr = 0x8216AEF0;
	sub_82169F20(ctx, base);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216af18
	if (ctx.cr6.eq) goto loc_8216AF18;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216af18
	if (!ctx.cr6.eq) goto loc_8216AF18;
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8216af18
	if (!ctx.cr6.gt) goto loc_8216AF18;
	// stw r3,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r3.u32);
loc_8216AF18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82172d60
	ctx.lr = 0x8216AF20;
	sub_82172D60(ctx, base);
loc_8216AF20:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8216adec
	if (!ctx.cr6.eq) goto loc_8216ADEC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216af44
	if (!ctx.cr6.eq) goto loc_8216AF44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x8216AF44;
	sub_82247328(ctx, base);
loc_8216AF44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82218450
	ctx.lr = 0x8216AF4C;
	sub_82218450(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216AF58"))) PPC_WEAK_FUNC(sub_8216AF58);
PPC_FUNC_IMPL(__imp__sub_8216AF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8216AF60;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-29208
	ctx.r29.s64 = ctx.r11.s64 + -29208;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r27,r29,8
	ctx.r27.s64 = ctx.r29.s64 + 8;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,32
	ctx.r26.s64 = 32;
	// li r24,-33
	ctx.r24.s64 = -33;
	// lfs f31,220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	ctx.f31.f64 = double(temp.f32);
loc_8216AF90:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823052d8
	ctx.lr = 0x8216AFA0;
	sub_823052D8(ctx, base);
	// cmplwi cr6,r28,4096
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4096, ctx.xer);
	// bge cr6,0x8216b068
	if (!ctx.cr6.lt) goto loc_8216B068;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216b068
	if (ctx.cr6.eq) goto loc_8216B068;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216b068
	if (!ctx.cr6.eq) goto loc_8216B068;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216b068
	if (!ctx.cr6.eq) goto loc_8216B068;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aff0
	if (ctx.cr6.eq) goto loc_8216AFF0;
	// lbz r11,293(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 293);
	// b 0x8216aff4
	goto loc_8216AFF4;
loc_8216AFF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216AFF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b068
	if (ctx.cr6.eq) goto loc_8216B068;
loc_8216B000:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 | ctx.r11.u64;
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216b000
	if (!ctx.cr0.eq) goto loc_8216B000;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823051a8
	ctx.lr = 0x8216B028;
	sub_823051A8(ctx, base);
	// lfs f0,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8216b048
	if (!ctx.cr6.gt) goto loc_8216B048;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216B048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216B048:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 & ctx.r11.u64;
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216b048
	if (!ctx.cr0.eq) goto loc_8216B048;
	// b 0x8216b074
	goto loc_8216B074;
loc_8216B068:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x823051a8
	ctx.lr = 0x8216B074;
	sub_823051A8(ctx, base);
loc_8216B074:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,4096
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4096, ctx.xer);
	// blt cr6,0x8216af90
	if (ctx.cr6.lt) goto loc_8216AF90;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216B090"))) PPC_WEAK_FUNC(sub_8216B090);
PPC_FUNC_IMPL(__imp__sub_8216B090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8216B098;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r29,16(r5)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// ld r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r31,r31,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r31.s64;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// std r31,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r31.u64);
	// std r3,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r3.u64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// subf r31,r7,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 + 12;
	// add r27,r28,r31
	ctx.r27.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82082030
	ctx.lr = 0x8216B10C;
	sub_82082030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216B120;
	sub_8208CFB0(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8216B134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8216b160
	if (ctx.cr6.eq) goto loc_8216B160;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8216b154
	if (ctx.cr6.eq) goto loc_8216B154;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// lwz r3,-8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216B154;
	sub_82080000(ctx, base);
loc_8216B154:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8216B160:
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// clrldi r4,r31,32
	ctx.r4.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// sth r10,36(r30)
	PPC_STORE_U16(ctx.r30.u32 + 36, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8216B190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216B19C"))) PPC_WEAK_FUNC(sub_8216B19C);
PPC_FUNC_IMPL(__imp__sub_8216B19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B1A0"))) PPC_WEAK_FUNC(sub_8216B1A0);
PPC_FUNC_IMPL(__imp__sub_8216B1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8216B1A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r26,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r26.u8);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// sth r31,180(r1)
	PPC_STORE_U16(ctx.r1.u32 + 180, ctx.r31.u16);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// sth r31,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r31.u16);
	// stb r26,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r26.u8);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// sth r31,212(r1)
	PPC_STORE_U16(ctx.r1.u32 + 212, ctx.r31.u16);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// sth r31,214(r1)
	PPC_STORE_U16(ctx.r1.u32 + 214, ctx.r31.u16);
	// beq cr6,0x8216b388
	if (ctx.cr6.eq) goto loc_8216B388;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r27,32
	ctx.r4.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// bl 0x82119d10
	ctx.lr = 0x8216B208;
	sub_82119D10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821611c0
	ctx.lr = 0x8216B214;
	sub_821611C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216B228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216b388
	if (!ctx.cr6.eq) goto loc_8216B388;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82161240
	ctx.lr = 0x8216B244;
	sub_82161240(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216B258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216b388
	if (!ctx.cr6.eq) goto loc_8216B388;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lhz r25,62(r29)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r29.u32 + 62);
	// addi r11,r11,-9440
	ctx.r11.s64 = ctx.r11.s64 + -9440;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// rotlwi r11,r25,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 2);
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r8,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x8216b294
	if (ctx.cr6.eq) goto loc_8216B294;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82081c00
	ctx.lr = 0x8216B294;
	sub_82081C00(ctx, base);
loc_8216B294:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b2f4
	if (ctx.cr6.eq) goto loc_8216B2F4;
	// addic. r30,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r30.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8216b2b4
	if (!ctx.cr0.eq) goto loc_8216B2B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8216b2d0
	goto loc_8216B2D0;
loc_8216B2B4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-22884
	ctx.r4.s64 = ctx.r11.s64 + -22884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233dc60
	ctx.lr = 0x8216B2C8;
	sub_8233DC60(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8216B2D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b2f4
	if (ctx.cr6.eq) goto loc_8216B2F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82222fa8
	ctx.lr = 0x8216B2E4;
	sub_82222FA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b2f4
	if (ctx.cr6.eq) goto loc_8216B2F4;
	// lbz r11,2449(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2449);
	// b 0x8216b2f8
	goto loc_8216B2F8;
loc_8216B2F4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216B2F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// beq cr6,0x8216b3d8
	if (ctx.cr6.eq) goto loc_8216B3D8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-28308
	ctx.r30.s64 = ctx.r11.s64 + -28308;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// sth r31,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r31.u16);
	// sth r31,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r31.u16);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// bl 0x8216b090
	ctx.lr = 0x8216B35C;
	sub_8216B090(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216b394
	if (!ctx.cr6.eq) goto loc_8216B394;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x8216b374
	if (ctx.cr6.eq) goto loc_8216B374;
	// bl 0x82081b80
	ctx.lr = 0x8216B374;
	sub_82081B80(ctx, base);
loc_8216B374:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b930
	ctx.lr = 0x8216B380;
	sub_8216B930(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823073b0
	ctx.lr = 0x8216B388;
	sub_823073B0(ctx, base);
loc_8216B388:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8216B394:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216B3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216B3C0;
	sub_82080000(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b930
	ctx.lr = 0x8216B3CC;
	sub_8216B930(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823073b0
	ctx.lr = 0x8216B3D4;
	sub_823073B0(ctx, base);
	// b 0x8216b3f0
	goto loc_8216B3F0;
loc_8216B3D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216B3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216B3F0:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x8216b3fc
	if (ctx.cr6.eq) goto loc_8216B3FC;
	// bl 0x82081b80
	ctx.lr = 0x8216B3FC;
	sub_82081B80(ctx, base);
loc_8216B3FC:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216b4d8
	if (!ctx.cr6.eq) goto loc_8216B4D8;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 3, ctx.xer);
	// bne cr6,0x8216b4d8
	if (!ctx.cr6.eq) goto loc_8216B4D8;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
loc_8216B414:
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
	// bne 0x8216b414
	if (!ctx.cr0.eq) goto loc_8216B414;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82177f68
	ctx.lr = 0x8216B440;
	sub_82177F68(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r29,72
	ctx.r5.s64 = ctx.r29.s64 + 72;
loc_8216B448:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwcx. r6,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216b448
	if (!ctx.cr0.eq) goto loc_8216B448;
	// lhz r3,62(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 62);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8216b4f8
	if (!ctx.cr6.eq) goto loc_8216B4F8;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,920
	ctx.r3.s64 = ctx.r11.s64 + 920;
	// bl 0x823052d8
	ctx.lr = 0x8216B488;
	sub_823052D8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r9,r10,1964
	ctx.r9.u64 = ctx.r10.u64 | 1964;
	// addi r8,r11,940
	ctx.r8.s64 = ctx.r11.s64 + 940;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r3,r11,920
	ctx.r3.s64 = ctx.r11.s64 + 920;
	// ori r6,r7,1964
	ctx.r6.u64 = ctx.r7.u64 | 1964;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r5,1964
	ctx.r4.u64 = ctx.r5.u64 | 1964;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x8216B4CC;
	sub_823051A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8216B4D8:
	// addi r8,r29,72
	ctx.r8.s64 = ctx.r29.s64 + 72;
loc_8216B4DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 | ctx.r11.u64;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8216b4dc
	if (!ctx.cr0.eq) goto loc_8216B4DC;
loc_8216B4F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216B504"))) PPC_WEAK_FUNC(sub_8216B504);
PPC_FUNC_IMPL(__imp__sub_8216B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B508"))) PPC_WEAK_FUNC(sub_8216B508);
PPC_FUNC_IMPL(__imp__sub_8216B508) {
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
	// beq cr6,0x8216b604
	if (ctx.cr6.eq) goto loc_8216B604;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6368
	ctx.r31.s64 = ctx.r11.s64 + 6368;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216B53C;
	sub_823052D8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
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
	// bne cr6,0x8216b5f8
	if (!ctx.cr6.eq) goto loc_8216B5F8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216b5f8
	if (ctx.cr6.eq) goto loc_8216B5F8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8216b5f8
	if (!ctx.cr6.lt) goto loc_8216B5F8;
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
	// beq cr6,0x8216b5d0
	if (ctx.cr6.eq) goto loc_8216B5D0;
loc_8216B5A8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216b5c8
	if (ctx.cr6.eq) goto loc_8216B5C8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216b5a8
	if (!ctx.cr6.eq) goto loc_8216B5A8;
	// b 0x8216b5d0
	goto loc_8216B5D0;
loc_8216B5C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8216B5D0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216b5e8
	if (!ctx.cr6.eq) goto loc_8216B5E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8216B5E8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216B5F4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8216B5F8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216B604;
	sub_823051A8(ctx, base);
loc_8216B604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B61C"))) PPC_WEAK_FUNC(sub_8216B61C);
PPC_FUNC_IMPL(__imp__sub_8216B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B620"))) PPC_WEAK_FUNC(sub_8216B620);
PPC_FUNC_IMPL(__imp__sub_8216B620) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6368
	ctx.r31.s64 = ctx.r11.s64 + 6368;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216B648;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b66c
	if (ctx.cr6.eq) goto loc_8216B66C;
loc_8216B654:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216b69c
	if (!ctx.cr6.eq) goto loc_8216B69C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216b654
	if (!ctx.cr6.eq) goto loc_8216B654;
loc_8216B66C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216b6c4
	if (!ctx.cr6.eq) goto loc_8216B6C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8216b7c8
	ctx.lr = 0x8216B680;
	sub_8216B7C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216b6c4
	if (!ctx.cr6.eq) goto loc_8216B6C4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216B694;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216b708
	goto loc_8216B708;
loc_8216B69C:
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
	// b 0x8216b6f8
	goto loc_8216B6F8;
loc_8216B6C4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
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
loc_8216B6F8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216B704;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8216B708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B720"))) PPC_WEAK_FUNC(sub_8216B720);
PPC_FUNC_IMPL(__imp__sub_8216B720) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b79c
	if (ctx.cr6.eq) goto loc_8216B79C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8216b75c
	if (ctx.cr6.gt) goto loc_8216B75C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8216B75C:
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// twllei r11,0
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8216b794
	if (ctx.cr6.gt) goto loc_8216B794;
	// bge cr6,0x8216b79c
	if (!ctx.cr6.lt) goto loc_8216B79C;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b79c
	if (ctx.cr6.eq) goto loc_8216B79C;
loc_8216B794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b878
	ctx.lr = 0x8216B79C;
	sub_8216B878(ctx, base);
loc_8216B79C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8216b7ac
	if (ctx.cr6.gt) goto loc_8216B7AC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8216B7AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B7C4"))) PPC_WEAK_FUNC(sub_8216B7C4);
PPC_FUNC_IMPL(__imp__sub_8216B7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B7C8"))) PPC_WEAK_FUNC(sub_8216B7C8);
PPC_FUNC_IMPL(__imp__sub_8216B7C8) {
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
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82082030
	ctx.lr = 0x8216B7F4;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6368
	ctx.r11.s64 = ctx.r11.s64 + 6368;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216b810
	if (ctx.cr6.eq) goto loc_8216B810;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8216b814
	goto loc_8216B814;
loc_8216B810:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8216B814:
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
	// beq cr6,0x8216b854
	if (ctx.cr6.eq) goto loc_8216B854;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8216B84C:
	// stwu r3,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216b84c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216B84C;
loc_8216B854:
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

__attribute__((alias("__imp__sub_8216B874"))) PPC_WEAK_FUNC(sub_8216B874);
PPC_FUNC_IMPL(__imp__sub_8216B874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216B878"))) PPC_WEAK_FUNC(sub_8216B878);
PPC_FUNC_IMPL(__imp__sub_8216B878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8216B880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8216b8ac
	if (ctx.cr6.gt) goto loc_8216B8AC;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8216b8b0
	goto loc_8216B8B0;
loc_8216B8AC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8216B8B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216B8C0;
	sub_82082030(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8216b8d4
	if (!ctx.cr6.lt) goto loc_8216B8D4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216B8D4:
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8216b8f8
	if (ctx.cr6.eq) goto loc_8216B8F8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8233e4e0
	ctx.lr = 0x8216B8F8;
	sub_8233E4E0(ctx, base);
loc_8216B8F8:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b91c
	if (ctx.cr6.eq) goto loc_8216B91C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b91c
	if (ctx.cr6.eq) goto loc_8216B91C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216B91C;
	sub_82080000(ctx, base);
loc_8216B91C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stb r11,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216B930"))) PPC_WEAK_FUNC(sub_8216B930);
PPC_FUNC_IMPL(__imp__sub_8216B930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8216B938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216b98c
	if (ctx.cr6.eq) goto loc_8216B98C;
loc_8216B94C:
	// lbz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b970
	if (ctx.cr6.eq) goto loc_8216B970;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b970
	if (ctx.cr6.eq) goto loc_8216B970;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216B970;
	sub_82080000(ctx, base);
loc_8216B970:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216B980;
	sub_82080000(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8216b94c
	if (!ctx.cr6.eq) goto loc_8216B94C;
loc_8216B98C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216B9A0"))) PPC_WEAK_FUNC(sub_8216B9A0);
PPC_FUNC_IMPL(__imp__sub_8216B9A0) {
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
	// addi r10,r11,-28308
	ctx.r10.s64 = ctx.r11.s64 + -28308;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8216b930
	ctx.lr = 0x8216B9CC;
	sub_8216B930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823073b0
	ctx.lr = 0x8216B9D4;
	sub_823073B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216b9ec
	if (ctx.cr6.eq) goto loc_8216B9EC;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216B9EC;
	sub_82080000(ctx, base);
loc_8216B9EC:
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

__attribute__((alias("__imp__sub_8216BA08"))) PPC_WEAK_FUNC(sub_8216BA08);
PPC_FUNC_IMPL(__imp__sub_8216BA08) {
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
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r4.u32);
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ba3c
	if (ctx.cr6.eq) goto loc_8216BA3C;
	// lbz r11,293(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 293);
	// b 0x8216ba40
	goto loc_8216BA40;
loc_8216BA3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216BA40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216ba88
	if (!ctx.cr6.eq) goto loc_8216BA88;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,16392
	ctx.r8.s64 = ctx.r11.s64 + 16392;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216ba74
	if (!ctx.cr6.eq) goto loc_8216BA74;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,4323
	ctx.r11.s64 = ctx.r11.s64 + 4323;
loc_8216BA74:
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x821b7fa8
	ctx.lr = 0x8216BA88;
	sub_821B7FA8(ctx, base);
loc_8216BA88:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
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

__attribute__((alias("__imp__sub_8216BAB0"))) PPC_WEAK_FUNC(sub_8216BAB0);
PPC_FUNC_IMPL(__imp__sub_8216BAB0) {
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
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,152
	ctx.r31.s64 = ctx.r11.s64 + 152;
	// bl 0x822473f8
	ctx.lr = 0x8216BAD8;
	sub_822473F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8216BADC:
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
	// bne 0x8216badc
	if (!ctx.cr0.eq) goto loc_8216BADC;
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

__attribute__((alias("__imp__sub_8216BB0C"))) PPC_WEAK_FUNC(sub_8216BB0C);
PPC_FUNC_IMPL(__imp__sub_8216BB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BB10"))) PPC_WEAK_FUNC(sub_8216BB10);
PPC_FUNC_IMPL(__imp__sub_8216BB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8216BB18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bc3c
	if (ctx.cr6.eq) goto loc_8216BC3C;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216bc3c
	if (ctx.cr6.eq) goto loc_8216BC3C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216BB44;
	sub_82080000(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8216bbb0
	if (ctx.cr6.gt) goto loc_8216BBB0;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216bbb0
	if (!ctx.cr6.gt) goto loc_8216BBB0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8216BB68:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216bb9c
	if (ctx.cr6.eq) goto loc_8216BB9C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8216bb9c
	if (ctx.cr6.eq) goto loc_8216BB9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82178200
	ctx.lr = 0x8216BB94;
	sub_82178200(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82172d60
	ctx.lr = 0x8216BB9C;
	sub_82172D60(ctx, base);
loc_8216BB9C:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216bb68
	if (ctx.cr6.lt) goto loc_8216BB68;
loc_8216BBB0:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bbc8
	if (ctx.cr6.eq) goto loc_8216BBC8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216BBC8;
	sub_82080000(ctx, base);
loc_8216BBC8:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216bc18
	if (!ctx.cr6.gt) goto loc_8216BC18;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8216BBDC:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216bc04
	if (ctx.cr6.eq) goto loc_8216BC04;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bc04
	if (ctx.cr6.eq) goto loc_8216BC04;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216BC04;
	sub_82080000(ctx, base);
loc_8216BC04:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216bbdc
	if (ctx.cr6.lt) goto loc_8216BBDC;
loc_8216BC18:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bc30
	if (ctx.cr6.eq) goto loc_8216BC30;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216BC30;
	sub_82080000(ctx, base);
loc_8216BC30:
	// stw r27,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r27.u32);
	// stw r27,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r27.u32);
	// stw r27,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r27.u32);
loc_8216BC3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BC44"))) PPC_WEAK_FUNC(sub_8216BC44);
PPC_FUNC_IMPL(__imp__sub_8216BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BC48"))) PPC_WEAK_FUNC(sub_8216BC48);
PPC_FUNC_IMPL(__imp__sub_8216BC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e438
	ctx.lr = 0x8216BC50;
	__savegprlr_16(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// sth r18,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r18.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// sth r18,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r18.u16);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82161240
	ctx.lr = 0x8216BC90;
	sub_82161240(ctx, base);
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8216bcb8
	if (!ctx.cr6.eq) goto loc_8216BCB8;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cfb0
	ctx.lr = 0x8216BCAC;
	sub_8208CFB0(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// b 0x8216bd1c
	goto loc_8216BD1C;
loc_8216BCB8:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8216bd10
	if (!ctx.cr6.eq) goto loc_8216BD10;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x8208cfb0
	ctx.lr = 0x8216BCCC;
	sub_8208CFB0(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lfs f0,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lfs f13,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lfs f12,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x8216bd20
	goto loc_8216BD20;
loc_8216BD10:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cfb0
	ctx.lr = 0x8216BD1C;
	sub_8208CFB0(ctx, base);
loc_8216BD1C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8216BD20:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r17,-1
	ctx.r17.s64 = -1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// ori r19,r10,65535
	ctx.r19.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// ble cr6,0x8216bd48
	if (!ctx.cr6.gt) goto loc_8216BD48;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_8216BD48:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216BD58;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8208cfb0
	ctx.lr = 0x8216BD74;
	sub_8208CFB0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8216bd88
	if (!ctx.cr6.gt) goto loc_8216BD88;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_8216BD88:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216BD98;
	sub_82082030(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233eaf0
	ctx.lr = 0x8216BDAC;
	sub_8233EAF0(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r9,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// stb r7,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r7.u8);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r3,-27096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8216BDEC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216bdf8
	if (!ctx.cr6.eq) goto loc_8216BDF8;
	// bl 0x821b3000
	ctx.lr = 0x8216BDF8;
	sub_821B3000(ctx, base);
loc_8216BDF8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r26,r3,20
	ctx.r26.s64 = ctx.r3.s64 + 20;
	// addi r30,r11,4492
	ctx.r30.s64 = ctx.r11.s64 + 4492;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r16,-13569
	ctx.r16.s64 = -889257984;
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8216be20
	if (!ctx.cr6.gt) goto loc_8216BE20;
	// stw r30,-13570(r16)
	PPC_STORE_U32(ctx.r16.u32 + -13570, ctx.r30.u32);
loc_8216BE20:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8216BE44;
	sub_8233EAF0(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r8,r11,1024
	ctx.r8.s64 = ctx.r11.s64 + 1024;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8216be5c
	if (!ctx.cr6.gt) goto loc_8216BE5C;
	// stw r30,-13570(r16)
	PPC_STORE_U32(ctx.r16.u32 + -13570, ctx.r30.u32);
loc_8216BE5C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// add r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82161240
	ctx.lr = 0x8216BE80;
	sub_82161240(ctx, base);
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r18,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r18.u32);
	// lhz r22,132(r1)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// beq cr6,0x8216bfe8
	if (ctx.cr6.eq) goto loc_8216BFE8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// ori r21,r11,32768
	ctx.r21.u64 = ctx.r11.u64 | 32768;
loc_8216BEA0:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r18,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r18.u64);
	// std r18,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r18.u64);
	// std r18,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r18.u64);
	// std r18,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r18.u64);
	// std r18,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r18.u64);
	// blt cr6,0x8216bee4
	if (ctx.cr6.lt) goto loc_8216BEE4;
	// bl 0x8210aa10
	ctx.lr = 0x8216BEC8;
	sub_8210AA10(ctx, base);
	// sth r3,196(r1)
	PPC_STORE_U16(ctx.r1.u32 + 196, ctx.r3.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210aa10
	ctx.lr = 0x8216BED4;
	sub_8210AA10(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,198(r1)
	PPC_STORE_U16(ctx.r1.u32 + 198, ctx.r10.u16);
	// b 0x8216bef0
	goto loc_8216BEF0;
loc_8216BEE4:
	// bl 0x8208d070
	ctx.lr = 0x8216BEE8;
	sub_8208D070(ctx, base);
	// sth r21,198(r1)
	PPC_STORE_U16(ctx.r1.u32 + 198, ctx.r21.u16);
	// sth r3,196(r1)
	PPC_STORE_U16(ctx.r1.u32 + 196, ctx.r3.u16);
loc_8216BEF0:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216BF00;
	sub_8208CFB0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216BF10;
	sub_8208CFB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216BF18;
	sub_8208D070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216BF24;
	sub_8208D070(ctx, base);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216BF40;
	sub_8208D070(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216BF4C;
	sub_8208D070(ctx, base);
	// rlwinm r29,r30,24,8,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8216bf64
	if (!ctx.cr6.lt) goto loc_8216BF64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_8216BF64:
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216bfb0
	if (!ctx.cr6.eq) goto loc_8216BFB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,10240
	ctx.r3.s64 = 10240;
	// bl 0x82082030
	ctx.lr = 0x8216BF88;
	sub_82082030(ctx, base);
	// li r5,10240
	ctx.r5.s64 = 10240;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r30,r25
	PPC_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8216BF98;
	sub_8233EAF0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r29.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
loc_8216BFB0:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r8,r1,156
	ctx.r8.s64 = ctx.r1.s64 + 156;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8216BFD4:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216bfd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216BFD4;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x8216bea0
	if (!ctx.cr0.eq) goto loc_8216BEA0;
loc_8216BFE8:
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8216c000
	if (!ctx.cr6.gt) goto loc_8216C000;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_8216C000:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216C010;
	sub_82082030(ctx, base);
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8216C020;
	sub_8233EAF0(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8216c058
	if (!ctx.cr6.gt) goto loc_8216C058;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
loc_8216C034:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8216c034
	if (ctx.cr6.lt) goto loc_8216C034;
loc_8216C058:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// beq cr6,0x8216c0a0
	if (ctx.cr6.eq) goto loc_8216C0A0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x8216c078
	if (!ctx.cr6.lt) goto loc_8216C078;
	// stw r9,-13570(r16)
	PPC_STORE_U32(ctx.r16.u32 + -13570, ctx.r9.u32);
loc_8216C078:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8216c094
	if (ctx.cr6.eq) goto loc_8216C094;
	// stw r9,-13570(r16)
	PPC_STORE_U32(ctx.r16.u32 + -13570, ctx.r9.u32);
loc_8216C094:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_8216C0A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8216c0e0
	if (ctx.cr6.eq) goto loc_8216C0E0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x8216c0b8
	if (!ctx.cr6.lt) goto loc_8216C0B8;
	// stw r9,-13570(r16)
	PPC_STORE_U32(ctx.r16.u32 + -13570, ctx.r9.u32);
loc_8216C0B8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8216c0d4
	if (ctx.cr6.eq) goto loc_8216C0D4;
	// stw r9,-13570(r16)
	PPC_STORE_U32(ctx.r16.u32 + -13570, ctx.r9.u32);
loc_8216C0D4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_8216C0E0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c2cc
	if (ctx.cr6.eq) goto loc_8216C2CC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,1948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8216c118
	if (ctx.cr6.eq) goto loc_8216C118;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_8216C118:
	// lfs f0,1952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8216c2cc
	if (ctx.cr6.eq) goto loc_8216C2CC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c2cc
	if (!ctx.cr6.gt) goto loc_8216C2CC;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8216C138:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216c2b8
	if (ctx.cr6.eq) goto loc_8216C2B8;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,120
	ctx.r10.s64 = 120;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216C154:
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r10,-120
	ctx.r9.s64 = ctx.r10.s64 + -120;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r6,38(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 38);
	// rlwinm r5,r6,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8216c180
	if (ctx.cr6.eq) goto loc_8216C180;
	// lfs f13,32(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
loc_8216C180:
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lhz r6,38(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// rlwinm r5,r6,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8216c1ac
	if (ctx.cr6.eq) goto loc_8216C1AC;
	// lfs f13,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_8216C1AC:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,-40
	ctx.r9.s64 = ctx.r9.s64 + -40;
	// lhz r8,38(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c1d8
	if (ctx.cr6.eq) goto loc_8216C1D8;
	// lfs f13,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_8216C1D8:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r8,38(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c200
	if (ctx.cr6.eq) goto loc_8216C200;
	// lfs f13,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_8216C200:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lhz r8,38(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c22c
	if (ctx.cr6.eq) goto loc_8216C22C;
	// lfs f13,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_8216C22C:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// lhz r8,38(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c258
	if (ctx.cr6.eq) goto loc_8216C258;
	// lfs f13,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_8216C258:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 + 120;
	// lhz r8,38(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c284
	if (ctx.cr6.eq) goto loc_8216C284;
	// lfs f13,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_8216C284:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,160
	ctx.r9.s64 = ctx.r9.s64 + 160;
	// lhz r8,38(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c2b0
	if (ctx.cr6.eq) goto loc_8216C2B0;
	// lfs f13,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_8216C2B0:
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// bdnz 0x8216c154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216C154;
loc_8216C2B8:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216c138
	if (ctx.cr6.lt) goto loc_8216C138;
loc_8216C2CC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e488
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C2D4"))) PPC_WEAK_FUNC(sub_8216C2D4);
PPC_FUNC_IMPL(__imp__sub_8216C2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C2D8"))) PPC_WEAK_FUNC(sub_8216C2D8);
PPC_FUNC_IMPL(__imp__sub_8216C2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8216C2E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x821749b0
	ctx.lr = 0x8216C2F0;
	sub_821749B0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c33c
	if (!ctx.cr6.gt) goto loc_8216C33C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-7224
	ctx.r28.s64 = ctx.r11.s64 + -7224;
loc_8216C30C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82176780
	ctx.lr = 0x8216C320;
	sub_82176780(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8216c30c
	if (ctx.cr6.lt) goto loc_8216C30C;
loc_8216C33C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c44c
	if (!ctx.cr6.gt) goto loc_8216C44C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8216C350:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c438
	if (ctx.cr6.eq) goto loc_8216C438;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8216C36C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// rlwinm r6,r10,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c39c
	if (ctx.cr6.eq) goto loc_8216C39C;
	// lhz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_8216C39C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r10,78(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// rlwinm r6,r10,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c3cc
	if (ctx.cr6.eq) goto loc_8216C3CC;
	// lhz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 76);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
loc_8216C3CC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r8,120
	ctx.r10.s64 = ctx.r8.s64 + 120;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,-2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// rlwinm r5,r6,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8216c400
	if (ctx.cr6.eq) goto loc_8216C400;
	// lhz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r3.u32);
loc_8216C400:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// rlwinm r6,r10,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216c430
	if (ctx.cr6.eq) goto loc_8216C430;
	// lhz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_8216C430:
	// addi r8,r8,160
	ctx.r8.s64 = ctx.r8.s64 + 160;
	// bdnz 0x8216c36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216C36C;
loc_8216C438:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216c350
	if (ctx.cr6.lt) goto loc_8216C350;
loc_8216C44C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C454"))) PPC_WEAK_FUNC(sub_8216C454);
PPC_FUNC_IMPL(__imp__sub_8216C454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C458"))) PPC_WEAK_FUNC(sub_8216C458);
PPC_FUNC_IMPL(__imp__sub_8216C458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8216C460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82174b00
	ctx.lr = 0x8216C470;
	sub_82174B00(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bge cr6,0x8216c4cc
	if (!ctx.cr6.lt) goto loc_8216C4CC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c510
	if (!ctx.cr6.gt) goto loc_8216C510;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8216C494:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c4b4
	if (ctx.cr6.eq) goto loc_8216C4B4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82172d60
	ctx.lr = 0x8216C4AC;
	sub_82172D60(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stwx r30,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r30.u32);
loc_8216C4B4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216c494
	if (ctx.cr6.lt) goto loc_8216C494;
	// b 0x8216c510
	goto loc_8216C510;
loc_8216C4CC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c510
	if (!ctx.cr6.gt) goto loc_8216C510;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8216C4DC:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c4fc
	if (ctx.cr6.eq) goto loc_8216C4FC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82172d60
	ctx.lr = 0x8216C4F4;
	sub_82172D60(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stwx r30,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r30.u32);
loc_8216C4FC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216c4dc
	if (ctx.cr6.lt) goto loc_8216C4DC;
loc_8216C510:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c598
	if (!ctx.cr6.gt) goto loc_8216C598;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8216C524:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216c584
	if (ctx.cr6.eq) goto loc_8216C584;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216C540:
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r11,120
	ctx.r9.s64 = ctx.r11.s64 + 120;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r30,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r8,r5,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r30,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r30.u32);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r30,-40(r8)
	PPC_STORE_U32(ctx.r8.u32 + -40, ctx.r30.u32);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r30,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r30.u32);
	// bdnz 0x8216c540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216C540;
loc_8216C584:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216c524
	if (ctx.cr6.lt) goto loc_8216C524;
loc_8216C598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C5A0"))) PPC_WEAK_FUNC(sub_8216C5A0);
PPC_FUNC_IMPL(__imp__sub_8216C5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8216C5A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c618
	if (!ctx.cr6.gt) goto loc_8216C618;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8216C5CC:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c604
	if (ctx.cr6.eq) goto loc_8216C604;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216c604
	if (ctx.cr6.eq) goto loc_8216C604;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82174450
	ctx.lr = 0x8216C604;
	sub_82174450(ctx, base);
loc_8216C604:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216c5cc
	if (ctx.cr6.lt) goto loc_8216C5CC;
loc_8216C618:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C620"))) PPC_WEAK_FUNC(sub_8216C620);
PPC_FUNC_IMPL(__imp__sub_8216C620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8216C628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8216c6d0
	if (!ctx.cr6.gt) goto loc_8216C6D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bge cr6,0x8216c690
	if (!ctx.cr6.lt) goto loc_8216C690;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c6d0
	if (!ctx.cr6.gt) goto loc_8216C6D0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8216C658:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c674
	if (ctx.cr6.eq) goto loc_8216C674;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82178200
	ctx.lr = 0x8216C674;
	sub_82178200(ctx, base);
loc_8216C674:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216c658
	if (ctx.cr6.lt) goto loc_8216C658;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8216C690:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c6d0
	if (!ctx.cr6.gt) goto loc_8216C6D0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8216C6A0:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c6bc
	if (ctx.cr6.eq) goto loc_8216C6BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82178200
	ctx.lr = 0x8216C6BC;
	sub_82178200(ctx, base);
loc_8216C6BC:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216c6a0
	if (ctx.cr6.lt) goto loc_8216C6A0;
loc_8216C6D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C6D8"))) PPC_WEAK_FUNC(sub_8216C6D8);
PPC_FUNC_IMPL(__imp__sub_8216C6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8216C6E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8216c750
	if (!ctx.cr6.gt) goto loc_8216C750;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216c750
	if (ctx.cr6.eq) goto loc_8216C750;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216c750
	if (!ctx.cr6.gt) goto loc_8216C750;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8216C718:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216c73c
	if (ctx.cr6.eq) goto loc_8216C73C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82172e00
	ctx.lr = 0x8216C730;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216c75c
	if (ctx.cr6.eq) goto loc_8216C75C;
loc_8216C73C:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216c718
	if (ctx.cr6.lt) goto loc_8216C718;
loc_8216C750:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8216C75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216C768"))) PPC_WEAK_FUNC(sub_8216C768);
PPC_FUNC_IMPL(__imp__sub_8216C768) {
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
	// beq cr6,0x8216c864
	if (ctx.cr6.eq) goto loc_8216C864;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6424
	ctx.r31.s64 = ctx.r11.s64 + 6424;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216C79C;
	sub_823052D8(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
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
	// bne cr6,0x8216c858
	if (!ctx.cr6.eq) goto loc_8216C858;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216c858
	if (ctx.cr6.eq) goto loc_8216C858;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8216c858
	if (!ctx.cr6.lt) goto loc_8216C858;
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
	// beq cr6,0x8216c830
	if (ctx.cr6.eq) goto loc_8216C830;
loc_8216C808:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216c828
	if (ctx.cr6.eq) goto loc_8216C828;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216c808
	if (!ctx.cr6.eq) goto loc_8216C808;
	// b 0x8216c830
	goto loc_8216C830;
loc_8216C828:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8216C830:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216c848
	if (!ctx.cr6.eq) goto loc_8216C848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8216C848:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216C854;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8216C858:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216C864;
	sub_823051A8(ctx, base);
loc_8216C864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C87C"))) PPC_WEAK_FUNC(sub_8216C87C);
PPC_FUNC_IMPL(__imp__sub_8216C87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C880"))) PPC_WEAK_FUNC(sub_8216C880);
PPC_FUNC_IMPL(__imp__sub_8216C880) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6424
	ctx.r31.s64 = ctx.r11.s64 + 6424;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216C8A8;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216c8cc
	if (ctx.cr6.eq) goto loc_8216C8CC;
loc_8216C8B4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216c8fc
	if (!ctx.cr6.eq) goto loc_8216C8FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216c8b4
	if (!ctx.cr6.eq) goto loc_8216C8B4;
loc_8216C8CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216c924
	if (!ctx.cr6.eq) goto loc_8216C924;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8216c980
	ctx.lr = 0x8216C8E0;
	sub_8216C980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216c924
	if (!ctx.cr6.eq) goto loc_8216C924;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216C8F4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216c968
	goto loc_8216C968;
loc_8216C8FC:
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
	// b 0x8216c958
	goto loc_8216C958;
loc_8216C924:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,148
	ctx.r10.s64 = ctx.r11.s64 + 148;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
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
loc_8216C958:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216C964;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8216C968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C980"))) PPC_WEAK_FUNC(sub_8216C980);
PPC_FUNC_IMPL(__imp__sub_8216C980) {
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
	ctx.lr = 0x8216C9B4;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6424
	ctx.r11.s64 = ctx.r11.s64 + 6424;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c9d0
	if (ctx.cr6.eq) goto loc_8216C9D0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8216c9d4
	goto loc_8216C9D4;
loc_8216C9D0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8216C9D4:
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
	// beq cr6,0x8216ca14
	if (ctx.cr6.eq) goto loc_8216CA14;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8216CA0C:
	// stwu r3,160(r10)
	ea = 160 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216ca0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216CA0C;
loc_8216CA14:
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

__attribute__((alias("__imp__sub_8216CA34"))) PPC_WEAK_FUNC(sub_8216CA34);
PPC_FUNC_IMPL(__imp__sub_8216CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CA38"))) PPC_WEAK_FUNC(sub_8216CA38);
PPC_FUNC_IMPL(__imp__sub_8216CA38) {
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
	// addi r10,r11,-28276
	ctx.r10.s64 = ctx.r11.s64 + -28276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x8216CA64;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216ca7c
	if (ctx.cr6.eq) goto loc_8216CA7C;
	// bl 0x8216c768
	ctx.lr = 0x8216CA78;
	sub_8216C768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216CA7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216CA94"))) PPC_WEAK_FUNC(sub_8216CA94);
PPC_FUNC_IMPL(__imp__sub_8216CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CA98"))) PPC_WEAK_FUNC(sub_8216CA98);
PPC_FUNC_IMPL(__imp__sub_8216CA98) {
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
	// bl 0x8216caf8
	ctx.lr = 0x8216CAB8;
	sub_8216CAF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216cad8
	if (ctx.cr6.eq) goto loc_8216CAD8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216cad8
	if (ctx.cr6.eq) goto loc_8216CAD8;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216CAD8;
	sub_82080000(ctx, base);
loc_8216CAD8:
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

__attribute__((alias("__imp__sub_8216CAF4"))) PPC_WEAK_FUNC(sub_8216CAF4);
PPC_FUNC_IMPL(__imp__sub_8216CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CAF8"))) PPC_WEAK_FUNC(sub_8216CAF8);
PPC_FUNC_IMPL(__imp__sub_8216CAF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-28236
	ctx.r10.s64 = ctx.r11.s64 + -28236;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216cb40
	if (ctx.cr6.eq) goto loc_8216CB40;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216cb40
	if (ctx.cr6.eq) goto loc_8216CB40;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216CB40;
	sub_82080000(ctx, base);
loc_8216CB40:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216cb68
	if (ctx.cr6.eq) goto loc_8216CB68;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216cb68
	if (ctx.cr6.eq) goto loc_8216CB68;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216CB68;
	sub_82080000(ctx, base);
loc_8216CB68:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-28560
	ctx.r10.s64 = ctx.r11.s64 + -28560;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x8216CB7C;
	sub_82172BE8(ctx, base);
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

__attribute__((alias("__imp__sub_8216CB90"))) PPC_WEAK_FUNC(sub_8216CB90);
PPC_FUNC_IMPL(__imp__sub_8216CB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8216CB98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8217ab50
	ctx.lr = 0x8216CBA4;
	sub_8217AB50(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216cbec
	if (!ctx.cr6.gt) goto loc_8216CBEC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8216CBBC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216CBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,960
	ctx.r30.s64 = ctx.r30.s64 + 960;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8216cbbc
	if (ctx.cr6.lt) goto loc_8216CBBC;
loc_8216CBEC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216cc08
	if (ctx.cr6.eq) goto loc_8216CC08;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216CC08;
	sub_82080000(ctx, base);
loc_8216CC08:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216cc24
	if (ctx.cr6.eq) goto loc_8216CC24;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216CC24;
	sub_82080000(ctx, base);
loc_8216CC24:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216cc40
	if (ctx.cr6.eq) goto loc_8216CC40;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216CC40;
	sub_82080000(ctx, base);
loc_8216CC40:
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216CC4C"))) PPC_WEAK_FUNC(sub_8216CC4C);
PPC_FUNC_IMPL(__imp__sub_8216CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CC50"))) PPC_WEAK_FUNC(sub_8216CC50);
PPC_FUNC_IMPL(__imp__sub_8216CC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x8216CC58;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stb r22,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r22.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r23,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r23.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r23,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82161240
	ctx.lr = 0x8216CC90;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d1cc
	if (ctx.cr6.eq) goto loc_8216D1CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmpwi cr6,r11,820
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 820, ctx.xer);
	// bne cr6,0x8216ce78
	if (!ctx.cr6.eq) goto loc_8216CE78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216CCB4;
	sub_8208D070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// beq cr6,0x8216cd70
	if (ctx.cr6.eq) goto loc_8216CD70;
	// lis r11,910
	ctx.r11.s64 = 59637760;
	// ori r10,r11,14563
	ctx.r10.u64 = ctx.r11.u64 | 14563;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8216cce4
	if (ctx.cr6.gt) goto loc_8216CCE4;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8216cce8
	goto loc_8216CCE8;
loc_8216CCE4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8216CCE8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216CCF8;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216cd38
	if (ctx.cr6.eq) goto loc_8216CD38;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216cd30
	if (ctx.cr0.lt) goto loc_8216CD30;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,72
	ctx.r10.s64 = 72;
loc_8216CD1C:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r24,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r24.u32);
	// stwu r24,72(r11)
	ea = 72 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216cd1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216CD1C;
loc_8216CD30:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8216cd3c
	goto loc_8216CD3C;
loc_8216CD38:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8216CD3C:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8216cd5c
	if (!ctx.cr6.gt) goto loc_8216CD5C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8216CD5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216CD6C;
	sub_82082030(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
loc_8216CD70:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216ce68
	if (!ctx.cr6.gt) goto loc_8216CE68;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8216CD84:
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216CD94;
	sub_8208CFB0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r6.u32);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r10.u32);
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,68(r7)
	PPC_STORE_U32(ctx.r7.u32 + 68, ctx.r8.u32);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8216cd84
	if (ctx.cr6.lt) goto loc_8216CD84;
loc_8216CE68:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82161240
	ctx.lr = 0x8216CE78;
	sub_82161240(ctx, base);
loc_8216CE78:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216CE88;
	sub_8208CFB0(ctx, base);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// sth r4,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r4.u16);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// sth r3,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r3.u16);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// lwz r30,228(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r26,232(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// ble cr6,0x8216cef8
	if (!ctx.cr6.gt) goto loc_8216CEF8;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233e968
	ctx.lr = 0x8216CEF8;
	sub_8233E968(ctx, base);
loc_8216CEF8:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,264(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r30,r26,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,15
	ctx.r7.s64 = ctx.r30.s64 + 15;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r26,960
	ctx.r10.s64 = ctx.r26.s64 * 960;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,15
	ctx.r5.s64 = ctx.r10.s64 + 15;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r27,r7,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r29,r5,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82082030
	ctx.lr = 0x8216CF4C;
	sub_82082030(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r30,r21,r27
	ctx.r30.u64 = ctx.r21.u64 + ctx.r27.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216CF6C;
	sub_8208CFB0(ctx, base);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// stw r21,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r21.u32);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// sth r3,118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 118, ctx.r3.u16);
	// sth r3,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r3.u16);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq cr6,0x8216d000
	if (ctx.cr6.eq) goto loc_8216D000;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r27,r11,-30352
	ctx.r27.s64 = ctx.r11.s64 + -30352;
loc_8216CFAC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82161240
	ctx.lr = 0x8216CFBC;
	sub_82161240(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add. r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8216cfd4
	if (ctx.cr0.eq) goto loc_8216CFD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210e6e0
	ctx.lr = 0x8216CFD0;
	sub_8210E6E0(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_8216CFD4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821085a0
	ctx.lr = 0x8216CFE8;
	sub_821085A0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,960
	ctx.r30.s64 = ctx.r30.s64 + 960;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bne 0x8216cfac
	if (!ctx.cr0.eq) goto loc_8216CFAC;
loc_8216D000:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d050
	if (ctx.cr6.eq) goto loc_8216D050;
	// addi r29,r1,272
	ctx.r29.s64 = ctx.r1.s64 + 272;
loc_8216D014:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82161240
	ctx.lr = 0x8216D024;
	sub_82161240(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ae58
	ctx.lr = 0x8216D03C;
	sub_8217AE58(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216d014
	if (ctx.cr6.lt) goto loc_8216D014;
loc_8216D050:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82161240
	ctx.lr = 0x8216D060;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d1c8
	if (ctx.cr6.eq) goto loc_8216D1C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,821
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 821, ctx.xer);
	// bne cr6,0x8216d128
	if (!ctx.cr6.eq) goto loc_8216D128;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d0a8
	if (ctx.cr6.eq) goto loc_8216D0A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d0a8
	if (ctx.cr6.eq) goto loc_8216D0A8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216D0A8;
	sub_82080000(ctx, base);
loc_8216D0A8:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// sth r23,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r23.u16);
	// sth r23,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r23.u16);
	// lhz r29,152(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 152);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8216d118
	if (ctx.cr6.eq) goto loc_8216D118;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8216d0d8
	if (!ctx.cr6.gt) goto loc_8216D0D8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8216D0D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216D0E8;
	sub_82082030(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216D0FC;
	sub_8208CFB0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_8216D118:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82161240
	ctx.lr = 0x8216D128;
	sub_82161240(ctx, base);
loc_8216D128:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d1c8
	if (ctx.cr6.eq) goto loc_8216D1C8;
	// ld r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x8216d150
	if (!ctx.cr6.lt) goto loc_8216D150;
	// stb r22,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r22.u8);
loc_8216D150:
	// lbz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216d1c8
	if (!ctx.cr6.eq) goto loc_8216D1C8;
	// ld r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x8216d180
	if (!ctx.cr6.gt) goto loc_8216D180;
	// lhz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 36);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8216d180
	if (!ctx.cr6.eq) goto loc_8216D180;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8216d180
	if (ctx.cr6.eq) goto loc_8216D180;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8216D180:
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8216d1b4
	if (ctx.cr6.lt) goto loc_8216D1B4;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x8216d1b4
	if (!ctx.cr6.lt) goto loc_8216D1B4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r9.u32);
	// stb r23,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r23.u8);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_8216D1B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216D1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216D1C8:
	// stb r23,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r23.u8);
loc_8216D1CC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216D1D4"))) PPC_WEAK_FUNC(sub_8216D1D4);
PPC_FUNC_IMPL(__imp__sub_8216D1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D1D8"))) PPC_WEAK_FUNC(sub_8216D1D8);
PPC_FUNC_IMPL(__imp__sub_8216D1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8216D1F0"))) PPC_WEAK_FUNC(sub_8216D1F0);
PPC_FUNC_IMPL(__imp__sub_8216D1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8216D1F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// ble cr6,0x8216d264
	if (!ctx.cr6.gt) goto loc_8216D264;
loc_8216D234:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82161240
	ctx.lr = 0x8216D244;
	sub_82161240(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217b1f0
	ctx.lr = 0x8216D254;
	sub_8217B1F0(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216d234
	if (ctx.cr6.lt) goto loc_8216D234;
loc_8216D264:
	// stb r28,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216D270"))) PPC_WEAK_FUNC(sub_8216D270);
PPC_FUNC_IMPL(__imp__sub_8216D270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8216D278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d2e4
	if (ctx.cr6.eq) goto loc_8216D2E4;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216d2d0
	if (!ctx.cr6.gt) goto loc_8216D2D0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8216D2A4:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82111050
	ctx.lr = 0x8216D2B0;
	sub_82111050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d2f4
	if (ctx.cr6.eq) goto loc_8216D2F4;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,960
	ctx.r31.s64 = ctx.r31.s64 + 960;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216d2a4
	if (ctx.cr6.lt) goto loc_8216D2A4;
loc_8216D2D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8216D2D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8216d2e8
	if (!ctx.cr6.eq) goto loc_8216D2E8;
loc_8216D2E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216D2E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8216D2F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8216d2d4
	goto loc_8216D2D4;
}

__attribute__((alias("__imp__sub_8216D2FC"))) PPC_WEAK_FUNC(sub_8216D2FC);
PPC_FUNC_IMPL(__imp__sub_8216D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D300"))) PPC_WEAK_FUNC(sub_8216D300);
PPC_FUNC_IMPL(__imp__sub_8216D300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8216D308;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216d354
	if (!ctx.cr6.gt) goto loc_8216D354;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8216D32C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82110f28
	ctx.lr = 0x8216D340;
	sub_82110F28(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,960
	ctx.r29.s64 = ctx.r29.s64 + 960;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216d32c
	if (ctx.cr6.lt) goto loc_8216D32C;
loc_8216D354:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216d3a8
	if (!ctx.cr6.gt) goto loc_8216D3A8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8216D368:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d394
	if (ctx.cr6.eq) goto loc_8216D394;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82174450
	ctx.lr = 0x8216D394;
	sub_82174450(ctx, base);
loc_8216D394:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216d368
	if (ctx.cr6.lt) goto loc_8216D368;
loc_8216D3A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216D3B0"))) PPC_WEAK_FUNC(sub_8216D3B0);
PPC_FUNC_IMPL(__imp__sub_8216D3B0) {
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
	// bl 0x8217ac18
	ctx.lr = 0x8216D3C0;
	sub_8217AC18(ctx, base);
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

__attribute__((alias("__imp__sub_8216D3D4"))) PPC_WEAK_FUNC(sub_8216D3D4);
PPC_FUNC_IMPL(__imp__sub_8216D3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D3D8"))) PPC_WEAK_FUNC(sub_8216D3D8);
PPC_FUNC_IMPL(__imp__sub_8216D3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8216D3E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216d424
	if (!ctx.cr6.gt) goto loc_8216D424;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8216D400:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82110fc0
	ctx.lr = 0x8216D410;
	sub_82110FC0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,960
	ctx.r30.s64 = ctx.r30.s64 + 960;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216d400
	if (ctx.cr6.lt) goto loc_8216D400;
loc_8216D424:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216d474
	if (!ctx.cr6.gt) goto loc_8216D474;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8216D438:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d460
	if (ctx.cr6.eq) goto loc_8216D460;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// bl 0x82174810
	ctx.lr = 0x8216D460;
	sub_82174810(ctx, base);
loc_8216D460:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216d438
	if (ctx.cr6.lt) goto loc_8216D438;
loc_8216D474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216D47C"))) PPC_WEAK_FUNC(sub_8216D47C);
PPC_FUNC_IMPL(__imp__sub_8216D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D480"))) PPC_WEAK_FUNC(sub_8216D480);
PPC_FUNC_IMPL(__imp__sub_8216D480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8216D488;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x821749b0
	ctx.lr = 0x8216D498;
	sub_821749B0(ctx, base);
	// lwz r11,168(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216d578
	if (!ctx.cr6.gt) goto loc_8216D578;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r29,r11,-7224
	ctx.r29.s64 = ctx.r11.s64 + -7224;
loc_8216D4BC:
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r29,16452
	ctx.r3.s64 = ctx.r29.s64 + 16452;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r30,r11,3
	ctx.r30.s64 = ctx.r11.s64 + 3;
	// bl 0x823052d8
	ctx.lr = 0x8216D4D8;
	sub_823052D8(ctx, base);
	// lwz r11,16444(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16444);
	// lwz r10,16440(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16440);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r6,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216d520
	if (ctx.cr6.eq) goto loc_8216D520;
loc_8216D500:
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8216d530
	if (ctx.cr6.eq) goto loc_8216D530;
	// lwz r31,44(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8216d500
	if (!ctx.cr6.eq) goto loc_8216D500;
loc_8216D520:
	// addi r3,r29,16452
	ctx.r3.s64 = ctx.r29.s64 + 16452;
	// bl 0x823051a8
	ctx.lr = 0x8216D528;
	sub_823051A8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8216d558
	goto loc_8216D558;
loc_8216D530:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
loc_8216D534:
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
	// bne 0x8216d534
	if (!ctx.cr0.eq) goto loc_8216D534;
	// addi r3,r29,16452
	ctx.r3.s64 = ctx.r29.s64 + 16452;
	// bl 0x823051a8
	ctx.lr = 0x8216D558;
	sub_823051A8(ctx, base);
loc_8216D558:
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,72
	ctx.r27.s64 = ctx.r27.s64 + 72;
	// stwx r31,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r31.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r10,168(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216d4bc
	if (ctx.cr6.lt) goto loc_8216D4BC;
loc_8216D578:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216D580"))) PPC_WEAK_FUNC(sub_8216D580);
PPC_FUNC_IMPL(__imp__sub_8216D580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8216D588;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82174b00
	ctx.lr = 0x8216D598;
	sub_82174B00(ctx, base);
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// ble cr6,0x8216d638
	if (!ctx.cr6.gt) goto loc_8216D638;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r27,r11,20000
	ctx.r27.s64 = ctx.r11.s64 + 20000;
loc_8216D5BC:
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216d624
	if (ctx.cr6.eq) goto loc_8216D624;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
loc_8216D5D0:
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
	// bne 0x8216d5d0
	if (!ctx.cr0.eq) goto loc_8216D5D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8216d61c
	if (!ctx.cr6.eq) goto loc_8216D61C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,300
	ctx.r10.u64 = ctx.r11.u64 | 300;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lwzx r11,r27,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq cr6,0x8216d618
	if (ctx.cr6.eq) goto loc_8216D618;
	// bl 0x821750b0
	ctx.lr = 0x8216D618;
	sub_821750B0(ctx, base);
loc_8216D618:
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
loc_8216D61C:
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// stwx r26,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r26.u32);
loc_8216D624:
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216d5bc
	if (ctx.cr6.lt) goto loc_8216D5BC;
loc_8216D638:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216D640"))) PPC_WEAK_FUNC(sub_8216D640);
PPC_FUNC_IMPL(__imp__sub_8216D640) {
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
	// beq cr6,0x8216d73c
	if (ctx.cr6.eq) goto loc_8216D73C;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6480
	ctx.r31.s64 = ctx.r11.s64 + 6480;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216D674;
	sub_823052D8(ctx, base);
	// lwz r11,644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
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
	// bne cr6,0x8216d730
	if (!ctx.cr6.eq) goto loc_8216D730;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216d730
	if (ctx.cr6.eq) goto loc_8216D730;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8216d730
	if (!ctx.cr6.lt) goto loc_8216D730;
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
	// beq cr6,0x8216d708
	if (ctx.cr6.eq) goto loc_8216D708;
loc_8216D6E0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216d700
	if (ctx.cr6.eq) goto loc_8216D700;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216d6e0
	if (!ctx.cr6.eq) goto loc_8216D6E0;
	// b 0x8216d708
	goto loc_8216D708;
loc_8216D700:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8216D708:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216d720
	if (!ctx.cr6.eq) goto loc_8216D720;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8216D720:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216D72C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8216D730:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216D73C;
	sub_823051A8(ctx, base);
loc_8216D73C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D754"))) PPC_WEAK_FUNC(sub_8216D754);
PPC_FUNC_IMPL(__imp__sub_8216D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D758"))) PPC_WEAK_FUNC(sub_8216D758);
PPC_FUNC_IMPL(__imp__sub_8216D758) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6480
	ctx.r31.s64 = ctx.r11.s64 + 6480;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216D780;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d7a4
	if (ctx.cr6.eq) goto loc_8216D7A4;
loc_8216D78C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216d7d4
	if (!ctx.cr6.eq) goto loc_8216D7D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216d78c
	if (!ctx.cr6.eq) goto loc_8216D78C;
loc_8216D7A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216d7fc
	if (!ctx.cr6.eq) goto loc_8216D7FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8216d858
	ctx.lr = 0x8216D7B8;
	sub_8216D858(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216d7fc
	if (!ctx.cr6.eq) goto loc_8216D7FC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216D7CC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216d840
	goto loc_8216D840;
loc_8216D7D4:
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
	// b 0x8216d830
	goto loc_8216D830;
loc_8216D7FC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,644
	ctx.r10.s64 = ctx.r11.s64 + 644;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,644(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
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
loc_8216D830:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216D83C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8216D840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D858"))) PPC_WEAK_FUNC(sub_8216D858);
PPC_FUNC_IMPL(__imp__sub_8216D858) {
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
	// mulli r11,r3,656
	ctx.r11.s64 = ctx.r3.s64 * 656;
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
	ctx.lr = 0x8216D884;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6480
	ctx.r11.s64 = ctx.r11.s64 + 6480;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d8a0
	if (ctx.cr6.eq) goto loc_8216D8A0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8216d8a4
	goto loc_8216D8A4;
loc_8216D8A0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8216D8A4:
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
	// beq cr6,0x8216d8e4
	if (ctx.cr6.eq) goto loc_8216D8E4;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8216D8DC:
	// stwu r3,656(r10)
	ea = 656 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216d8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216D8DC;
loc_8216D8E4:
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

__attribute__((alias("__imp__sub_8216D904"))) PPC_WEAK_FUNC(sub_8216D904);
PPC_FUNC_IMPL(__imp__sub_8216D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D908"))) PPC_WEAK_FUNC(sub_8216D908);
PPC_FUNC_IMPL(__imp__sub_8216D908) {
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
	// addi r10,r11,-27628
	ctx.r10.s64 = ctx.r11.s64 + -27628;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8216caf8
	ctx.lr = 0x8216D934;
	sub_8216CAF8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216d94c
	if (ctx.cr6.eq) goto loc_8216D94C;
	// bl 0x8216d640
	ctx.lr = 0x8216D948;
	sub_8216D640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216D94C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D964"))) PPC_WEAK_FUNC(sub_8216D964);
PPC_FUNC_IMPL(__imp__sub_8216D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D968"))) PPC_WEAK_FUNC(sub_8216D968);
PPC_FUNC_IMPL(__imp__sub_8216D968) {
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
	ctx.lr = 0x8216D980;
	sub_82081C00(ctx, base);
	// bl 0x8216e408
	ctx.lr = 0x8216D984;
	sub_8216E408(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8216D994;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216d9a8
	if (!ctx.cr6.eq) goto loc_8216D9A8;
	// bl 0x821b3000
	ctx.lr = 0x8216D9A4;
	sub_821B3000(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8216D9A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d9c0
	if (ctx.cr6.eq) goto loc_8216D9C0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8216D9C0:
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

__attribute__((alias("__imp__sub_8216D9D4"))) PPC_WEAK_FUNC(sub_8216D9D4);
PPC_FUNC_IMPL(__imp__sub_8216D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D9D8"))) PPC_WEAK_FUNC(sub_8216D9D8);
PPC_FUNC_IMPL(__imp__sub_8216D9D8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r3,180
	ctx.r30.s64 = ctx.r3.s64 + 180;
	// addi r10,r11,-28128
	ctx.r10.s64 = ctx.r11.s64 + -28128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82162f00
	ctx.lr = 0x8216DA08;
	sub_82162F00(ctx, base);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216da20
	if (ctx.cr6.eq) goto loc_8216DA20;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x8216DA20;
	sub_82246E18(ctx, base);
loc_8216DA20:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216da48
	if (ctx.cr6.eq) goto loc_8216DA48;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216da48
	if (ctx.cr6.eq) goto loc_8216DA48;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216DA48;
	sub_82080000(ctx, base);
loc_8216DA48:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216da70
	if (ctx.cr6.eq) goto loc_8216DA70;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216da70
	if (ctx.cr6.eq) goto loc_8216DA70;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216DA70;
	sub_82080000(ctx, base);
loc_8216DA70:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-28560
	ctx.r10.s64 = ctx.r11.s64 + -28560;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x8216DA84;
	sub_82172BE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DA9C"))) PPC_WEAK_FUNC(sub_8216DA9C);
PPC_FUNC_IMPL(__imp__sub_8216DA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DAA0"))) PPC_WEAK_FUNC(sub_8216DAA0);
PPC_FUNC_IMPL(__imp__sub_8216DAA0) {
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
	// lwz r31,80(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216daec
	if (ctx.cr6.eq) goto loc_8216DAEC;
loc_8216DAC4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8216DAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8216dac4
	if (!ctx.cr6.eq) goto loc_8216DAC4;
loc_8216DAEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DB0C"))) PPC_WEAK_FUNC(sub_8216DB0C);
PPC_FUNC_IMPL(__imp__sub_8216DB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DB10"))) PPC_WEAK_FUNC(sub_8216DB10);
PPC_FUNC_IMPL(__imp__sub_8216DB10) {
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
	// bl 0x8216daa0
	ctx.lr = 0x8216DB28;
	sub_8216DAA0(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216db40
	if (ctx.cr6.eq) goto loc_8216DB40;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216DB40;
	sub_82080000(ctx, base);
loc_8216DB40:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82162f00
	ctx.lr = 0x8216DB50;
	sub_82162F00(ctx, base);
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

__attribute__((alias("__imp__sub_8216DB64"))) PPC_WEAK_FUNC(sub_8216DB64);
PPC_FUNC_IMPL(__imp__sub_8216DB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DB68"))) PPC_WEAK_FUNC(sub_8216DB68);
PPC_FUNC_IMPL(__imp__sub_8216DB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8216DB70;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r28,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r28.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r30,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r30.u16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r30,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r30.u16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82161240
	ctx.lr = 0x8216DBA8;
	sub_82161240(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216DBB8;
	sub_8208CFB0(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stfs f0,84(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// stfs f13,88(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r9,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r9.u32);
loc_8216DBE0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216dbe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216DBE0;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r10,r10,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r30,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r30.u32);
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// sth r11,138(r29)
	PPC_STORE_U16(ctx.r29.u32 + 138, ctx.r11.u16);
	// sth r6,140(r29)
	PPC_STORE_U16(ctx.r29.u32 + 140, ctx.r6.u16);
	// sth r9,142(r29)
	PPC_STORE_U16(ctx.r29.u32 + 142, ctx.r9.u16);
	// sth r10,136(r29)
	PPC_STORE_U16(ctx.r29.u32 + 136, ctx.r10.u16);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// sth r30,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// sth r30,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// bl 0x82161240
	ctx.lr = 0x8216DC3C;
	sub_82161240(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216dcd0
	if (ctx.cr6.eq) goto loc_8216DCD0;
loc_8216DC48:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1207
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1207, ctx.xer);
	// bne cr6,0x8216dcb4
	if (!ctx.cr6.eq) goto loc_8216DCB4;
	// lhz r11,138(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 138);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216dcb4
	if (ctx.cr6.eq) goto loc_8216DCB4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8216DC64:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8216dca4
	if (ctx.cr6.lt) goto loc_8216DCA4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8216dcac
	if (!ctx.cr6.eq) goto loc_8216DCAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216DCA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8216dcac
	goto loc_8216DCAC;
loc_8216DCA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x8216DCAC;
	sub_82307908(ctx, base);
loc_8216DCAC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8216dc64
	if (!ctx.cr0.eq) goto loc_8216DC64;
loc_8216DCB4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82161240
	ctx.lr = 0x8216DCC4;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216dc48
	if (!ctx.cr6.eq) goto loc_8216DC48;
loc_8216DCD0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216DCD8"))) PPC_WEAK_FUNC(sub_8216DCD8);
PPC_FUNC_IMPL(__imp__sub_8216DCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8216DCE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stb r23,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r23.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r29,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r29.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r29,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r29.u16);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82161240
	ctx.lr = 0x8216DD18;
	sub_82161240(ctx, base);
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r26,r10,29,3,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r26,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r26.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x8216de44
	if (ctx.cr6.eq) goto loc_8216DE44;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// rlwinm r3,r26,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8216dd54
	if (!ctx.cr6.gt) goto loc_8216DD54;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8216DD54:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216DD64;
	sub_82082030(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8216ddec
	if (ctx.cr6.eq) goto loc_8216DDEC;
	// clrlwi r25,r31,24
	ctx.r25.u64 = ctx.r31.u32 & 0xFF;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8216DD7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216DD84;
	sub_8208D070(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x8208d070
	ctx.lr = 0x8216DD9C;
	sub_8208D070(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8216ddc0
	if (ctx.cr6.eq) goto loc_8216DDC0;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// b 0x8216ddd4
	goto loc_8216DDD4;
loc_8216DDC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216DDC8;
	sub_8208D070(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_8216DDD4:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// bne 0x8216dd7c
	if (!ctx.cr0.eq) goto loc_8216DD7C;
loc_8216DDEC:
	// stb r23,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r23.u8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// sth r29,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r29.u16);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// sth r29,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r29.u16);
	// beq cr6,0x8216de44
	if (ctx.cr6.eq) goto loc_8216DE44;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8216DE0C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82161240
	ctx.lr = 0x8216DE1C;
	sub_82161240(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// bl 0x820dec30
	ctx.lr = 0x8216DE38;
	sub_820DEC30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x8216de0c
	if (!ctx.cr0.eq) goto loc_8216DE0C;
loc_8216DE44:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216DE4C"))) PPC_WEAK_FUNC(sub_8216DE4C);
PPC_FUNC_IMPL(__imp__sub_8216DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DE50"))) PPC_WEAK_FUNC(sub_8216DE50);
PPC_FUNC_IMPL(__imp__sub_8216DE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x8216DE58;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// sth r28,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r28.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r28,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r28.u16);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82161240
	ctx.lr = 0x8216DE90;
	sub_82161240(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216e1d4
	if (ctx.cr6.eq) goto loc_8216E1D4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1206
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1206, ctx.xer);
	// bne cr6,0x8216ded4
	if (!ctx.cr6.eq) goto loc_8216DED4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8216dcd8
	ctx.lr = 0x8216DEB8;
	sub_8216DCD8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82161240
	ctx.lr = 0x8216DEC8;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e1d4
	if (ctx.cr6.eq) goto loc_8216E1D4;
loc_8216DED4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// li r23,-1
	ctx.r23.s64 = -1;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// cmpwi cr6,r11,1209
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1209, ctx.xer);
	// bne cr6,0x8216df70
	if (!ctx.cr6.eq) goto loc_8216DF70;
	// addi r31,r25,144
	ctx.r31.s64 = ctx.r25.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821628d8
	ctx.lr = 0x8216DEF8;
	sub_821628D8(ctx, base);
	// lhz r30,142(r25)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r25.u32 + 142);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216df54
	if (ctx.cr6.eq) goto loc_8216DF54;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x8216df14
	if (!ctx.cr6.gt) goto loc_8216DF14;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8216DF14:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216DF24;
	sub_82082030(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216DF38;
	sub_8208CFB0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8216DF54:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82161240
	ctx.lr = 0x8216DF64;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e1d4
	if (ctx.cr6.eq) goto loc_8216E1D4;
loc_8216DF70:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1212
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1212, ctx.xer);
	// bne cr6,0x8216e02c
	if (!ctx.cr6.eq) goto loc_8216E02C;
	// lwz r11,164(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// addi r31,r25,156
	ctx.r31.s64 = ctx.r25.s64 + 156;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216dfa8
	if (ctx.cr6.eq) goto loc_8216DFA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216dfa8
	if (ctx.cr6.eq) goto loc_8216DFA8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216DFA8;
	sub_82080000(ctx, base);
loc_8216DFA8:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// sth r28,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r28.u16);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// lhz r30,140(r25)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r25.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216e010
	if (ctx.cr6.eq) goto loc_8216E010;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x8216dfd0
	if (!ctx.cr6.gt) goto loc_8216DFD0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8216DFD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216DFE0;
	sub_82082030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216DFF4;
	sub_8208CFB0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8216E010:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82161240
	ctx.lr = 0x8216E020;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e1d4
	if (ctx.cr6.eq) goto loc_8216E1D4;
loc_8216E02C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8216daa0
	ctx.lr = 0x8216E034;
	sub_8216DAA0(ctx, base);
	// lhz r30,138(r25)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r25.u32 + 138);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216e124
	if (ctx.cr6.eq) goto loc_8216E124;
	// bl 0x8216d968
	ctx.lr = 0x8216E044;
	sub_8216D968(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-28076
	ctx.r27.s64 = ctx.r11.s64 + -28076;
	// beq cr6,0x8216e06c
	if (ctx.cr6.eq) goto loc_8216E06C;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// b 0x8216e070
	goto loc_8216E070;
loc_8216E06C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8216E070:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r31.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x82082030
	ctx.lr = 0x8216E098;
	sub_82082030(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216E0AC;
	sub_8208CFB0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x8216e124
	if (!ctx.cr6.gt) goto loc_8216E124;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8216E0B8:
	// bl 0x8216d968
	ctx.lr = 0x8216E0BC;
	sub_8216D968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216e0dc
	if (ctx.cr6.eq) goto loc_8216E0DC;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// b 0x8216e0e0
	goto loc_8216E0E0;
loc_8216E0DC:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8216E0E0:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82082030
	ctx.lr = 0x8216E104;
	sub_82082030(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216E118;
	sub_8208CFB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bne 0x8216e0b8
	if (!ctx.cr0.eq) goto loc_8216E0B8;
loc_8216E124:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82161240
	ctx.lr = 0x8216E134;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e1d4
	if (ctx.cr6.eq) goto loc_8216E1D4;
	// lfs f0,84(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,88(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// lis r7,2730
	ctx.r7.s64 = 178913280;
	// ori r6,r7,43690
	ctx.r6.u64 = ctx.r7.u64 | 43690;
	// lfs f0,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// divwu r3,r9,r4
	ctx.r3.u32 = ctx.r9.u32 / ctx.r4.u32;
	// twllei r4,0
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8216e1a8
	if (ctx.cr6.gt) goto loc_8216E1A8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8216e1ac
	goto loc_8216E1AC;
loc_8216E1A8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8216E1AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216E1BC;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,168(r25)
	PPC_STORE_U32(ctx.r25.u32 + 168, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216E1D4;
	sub_8208CFB0(ctx, base);
loc_8216E1D4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E1DC"))) PPC_WEAK_FUNC(sub_8216E1DC);
PPC_FUNC_IMPL(__imp__sub_8216E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E1E0"))) PPC_WEAK_FUNC(sub_8216E1E0);
PPC_FUNC_IMPL(__imp__sub_8216E1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8216E1E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216e22c
	if (!ctx.cr6.gt) goto loc_8216E22C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8216E208:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x820de9b8
	ctx.lr = 0x8216E218;
	sub_820DE9B8(ctx, base);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216e208
	if (ctx.cr6.lt) goto loc_8216E208;
loc_8216E22C:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e244
	if (ctx.cr6.eq) goto loc_8216E244;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216E244;
	sub_82080000(ctx, base);
loc_8216E244:
	// stw r28,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// bl 0x8216daa0
	ctx.lr = 0x8216E254;
	sub_8216DAA0(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e26c
	if (ctx.cr6.eq) goto loc_8216E26C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216E26C;
	sub_82080000(ctx, base);
loc_8216E26C:
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x82162f00
	ctx.lr = 0x8216E278;
	sub_82162F00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E284"))) PPC_WEAK_FUNC(sub_8216E284);
PPC_FUNC_IMPL(__imp__sub_8216E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E288"))) PPC_WEAK_FUNC(sub_8216E288);
PPC_FUNC_IMPL(__imp__sub_8216E288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x8216e29c
	if (ctx.cr6.lt) goto loc_8216E29C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8216E29C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8216e2bc
	if (ctx.cr6.eq) goto loc_8216E2BC;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
loc_8216E2BC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8216e2e4
	if (ctx.cr6.eq) goto loc_8216E2E4;
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f11,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_8216E2E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E2EC"))) PPC_WEAK_FUNC(sub_8216E2EC);
PPC_FUNC_IMPL(__imp__sub_8216E2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E2F0"))) PPC_WEAK_FUNC(sub_8216E2F0);
PPC_FUNC_IMPL(__imp__sub_8216E2F0) {
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
	// beq cr6,0x8216e3ec
	if (ctx.cr6.eq) goto loc_8216E3EC;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6536
	ctx.r31.s64 = ctx.r11.s64 + 6536;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216E324;
	sub_823052D8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
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
	// bne cr6,0x8216e3e0
	if (!ctx.cr6.eq) goto loc_8216E3E0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216e3e0
	if (ctx.cr6.eq) goto loc_8216E3E0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8216e3e0
	if (!ctx.cr6.lt) goto loc_8216E3E0;
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
	// beq cr6,0x8216e3b8
	if (ctx.cr6.eq) goto loc_8216E3B8;
loc_8216E390:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e3b0
	if (ctx.cr6.eq) goto loc_8216E3B0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216e390
	if (!ctx.cr6.eq) goto loc_8216E390;
	// b 0x8216e3b8
	goto loc_8216E3B8;
loc_8216E3B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8216E3B8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216e3d0
	if (!ctx.cr6.eq) goto loc_8216E3D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8216E3D0:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216E3DC;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8216E3E0:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216E3EC;
	sub_823051A8(ctx, base);
loc_8216E3EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E404"))) PPC_WEAK_FUNC(sub_8216E404);
PPC_FUNC_IMPL(__imp__sub_8216E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E408"))) PPC_WEAK_FUNC(sub_8216E408);
PPC_FUNC_IMPL(__imp__sub_8216E408) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6536
	ctx.r31.s64 = ctx.r11.s64 + 6536;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216E430;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e454
	if (ctx.cr6.eq) goto loc_8216E454;
loc_8216E43C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216e484
	if (!ctx.cr6.eq) goto loc_8216E484;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e43c
	if (!ctx.cr6.eq) goto loc_8216E43C;
loc_8216E454:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e4ac
	if (!ctx.cr6.eq) goto loc_8216E4AC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8216e720
	ctx.lr = 0x8216E468;
	sub_8216E720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e4ac
	if (!ctx.cr6.eq) goto loc_8216E4AC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216E47C;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216e4f0
	goto loc_8216E4F0;
loc_8216E484:
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
	// b 0x8216e4e0
	goto loc_8216E4E0;
loc_8216E4AC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
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
loc_8216E4E0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216E4EC;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8216E4F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E508"))) PPC_WEAK_FUNC(sub_8216E508);
PPC_FUNC_IMPL(__imp__sub_8216E508) {
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
	// beq cr6,0x8216e604
	if (ctx.cr6.eq) goto loc_8216E604;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6592
	ctx.r31.s64 = ctx.r11.s64 + 6592;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216E53C;
	sub_823052D8(ctx, base);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
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
	// bne cr6,0x8216e5f8
	if (!ctx.cr6.eq) goto loc_8216E5F8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216e5f8
	if (ctx.cr6.eq) goto loc_8216E5F8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8216e5f8
	if (!ctx.cr6.lt) goto loc_8216E5F8;
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
	// beq cr6,0x8216e5d0
	if (ctx.cr6.eq) goto loc_8216E5D0;
loc_8216E5A8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e5c8
	if (ctx.cr6.eq) goto loc_8216E5C8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216e5a8
	if (!ctx.cr6.eq) goto loc_8216E5A8;
	// b 0x8216e5d0
	goto loc_8216E5D0;
loc_8216E5C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8216E5D0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216e5e8
	if (!ctx.cr6.eq) goto loc_8216E5E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8216E5E8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216E5F4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8216E5F8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216E604;
	sub_823051A8(ctx, base);
loc_8216E604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E61C"))) PPC_WEAK_FUNC(sub_8216E61C);
PPC_FUNC_IMPL(__imp__sub_8216E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E620"))) PPC_WEAK_FUNC(sub_8216E620);
PPC_FUNC_IMPL(__imp__sub_8216E620) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6592
	ctx.r31.s64 = ctx.r11.s64 + 6592;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8216E648;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e66c
	if (ctx.cr6.eq) goto loc_8216E66C;
loc_8216E654:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216e69c
	if (!ctx.cr6.eq) goto loc_8216E69C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e654
	if (!ctx.cr6.eq) goto loc_8216E654;
loc_8216E66C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e6c4
	if (!ctx.cr6.eq) goto loc_8216E6C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8216e7d0
	ctx.lr = 0x8216E680;
	sub_8216E7D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e6c4
	if (!ctx.cr6.eq) goto loc_8216E6C4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216E694;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216e708
	goto loc_8216E708;
loc_8216E69C:
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
	// b 0x8216e6f8
	goto loc_8216E6F8;
loc_8216E6C4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
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
loc_8216E6F8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8216E704;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8216E708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E720"))) PPC_WEAK_FUNC(sub_8216E720);
PPC_FUNC_IMPL(__imp__sub_8216E720) {
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
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82082030
	ctx.lr = 0x8216E74C;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6536
	ctx.r11.s64 = ctx.r11.s64 + 6536;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216e768
	if (ctx.cr6.eq) goto loc_8216E768;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8216e76c
	goto loc_8216E76C;
loc_8216E768:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8216E76C:
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
	// beq cr6,0x8216e7ac
	if (ctx.cr6.eq) goto loc_8216E7AC;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8216E7A4:
	// stwu r3,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216e7a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216E7A4;
loc_8216E7AC:
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

__attribute__((alias("__imp__sub_8216E7CC"))) PPC_WEAK_FUNC(sub_8216E7CC);
PPC_FUNC_IMPL(__imp__sub_8216E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E7D0"))) PPC_WEAK_FUNC(sub_8216E7D0);
PPC_FUNC_IMPL(__imp__sub_8216E7D0) {
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
	// mulli r11,r3,224
	ctx.r11.s64 = ctx.r3.s64 * 224;
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
	ctx.lr = 0x8216E7FC;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6592
	ctx.r11.s64 = ctx.r11.s64 + 6592;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216e818
	if (ctx.cr6.eq) goto loc_8216E818;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8216e81c
	goto loc_8216E81C;
loc_8216E818:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8216E81C:
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
	// beq cr6,0x8216e85c
	if (ctx.cr6.eq) goto loc_8216E85C;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8216E854:
	// stwu r3,224(r10)
	ea = 224 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216e854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216E854;
loc_8216E85C:
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

__attribute__((alias("__imp__sub_8216E87C"))) PPC_WEAK_FUNC(sub_8216E87C);
PPC_FUNC_IMPL(__imp__sub_8216E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E880"))) PPC_WEAK_FUNC(sub_8216E880);
PPC_FUNC_IMPL(__imp__sub_8216E880) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-28076
	ctx.r9.s64 = ctx.r10.s64 + -28076;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8216e8c0
	if (ctx.cr6.eq) goto loc_8216E8C0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216E8C0;
	sub_82080000(ctx, base);
loc_8216E8C0:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e8d8
	if (ctx.cr6.eq) goto loc_8216E8D8;
	// bl 0x8216e2f0
	ctx.lr = 0x8216E8D4;
	sub_8216E2F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216E8D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E8F0"))) PPC_WEAK_FUNC(sub_8216E8F0);
PPC_FUNC_IMPL(__imp__sub_8216E8F0) {
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
	// bl 0x8216d9d8
	ctx.lr = 0x8216E910;
	sub_8216D9D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e928
	if (ctx.cr6.eq) goto loc_8216E928;
	// bl 0x8216e508
	ctx.lr = 0x8216E924;
	sub_8216E508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216E928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E940"))) PPC_WEAK_FUNC(sub_8216E940);
PPC_FUNC_IMPL(__imp__sub_8216E940) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-28072
	ctx.r10.s64 = ctx.r11.s64 + -28072;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216e988
	if (ctx.cr6.eq) goto loc_8216E988;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e988
	if (ctx.cr6.eq) goto loc_8216E988;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216E988;
	sub_82080000(ctx, base);
loc_8216E988:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216e9b0
	if (ctx.cr6.eq) goto loc_8216E9B0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e9b0
	if (ctx.cr6.eq) goto loc_8216E9B0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216E9B0;
	sub_82080000(ctx, base);
loc_8216E9B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172be8
	ctx.lr = 0x8216E9B8;
	sub_82172BE8(ctx, base);
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

__attribute__((alias("__imp__sub_8216E9CC"))) PPC_WEAK_FUNC(sub_8216E9CC);
PPC_FUNC_IMPL(__imp__sub_8216E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E9D0"))) PPC_WEAK_FUNC(sub_8216E9D0);
PPC_FUNC_IMPL(__imp__sub_8216E9D0) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ea00
	if (ctx.cr6.eq) goto loc_8216EA00;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216EA00;
	sub_82080000(ctx, base);
loc_8216EA00:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ea18
	if (ctx.cr6.eq) goto loc_8216EA18;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216EA18;
	sub_82080000(ctx, base);
loc_8216EA18:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// beq cr6,0x8216ea4c
	if (ctx.cr6.eq) goto loc_8216EA4C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216EA4C;
	sub_82080000(ctx, base);
loc_8216EA4C:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ea68
	if (ctx.cr6.eq) goto loc_8216EA68;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8216EA68;
	sub_82080000(ctx, base);
loc_8216EA68:
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216EA84"))) PPC_WEAK_FUNC(sub_8216EA84);
PPC_FUNC_IMPL(__imp__sub_8216EA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216EA88"))) PPC_WEAK_FUNC(sub_8216EA88);
PPC_FUNC_IMPL(__imp__sub_8216EA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x8216EA90;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r21,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r21.u32);
	// lis r20,-32197
	ctx.r20.s64 = -2110062592;
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// sth r21,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r21.u16);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// sth r21,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r21.u16);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r11,-28
	ctx.r31.s64 = ctx.r11.s64 + -28;
	// lwz r3,-27096(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8216EAD8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216eae4
	if (!ctx.cr6.eq) goto loc_8216EAE4;
	// bl 0x821b3000
	ctx.lr = 0x8216EAE4;
	sub_821B3000(ctx, base);
loc_8216EAE4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r31,15
	ctx.r9.s64 = ctx.r31.s64 + 15;
	// addi r31,r11,4492
	ctx.r31.s64 = ctx.r11.s64 + 4492;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r28,r9,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r16,r3,20
	ctx.r16.s64 = ctx.r3.s64 + 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r27,-13569
	ctx.r27.s64 = -889257984;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8216eb1c
	if (!ctx.cr6.gt) goto loc_8216EB1C;
	// stw r31,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r31.u32);
loc_8216EB1C:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// bl 0x82161240
	ctx.lr = 0x8216EB4C;
	sub_82161240(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r29,r11,4520
	ctx.r29.s64 = ctx.r11.s64 + 4520;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8216f208
	if (ctx.cr6.eq) goto loc_8216F208;
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// ori r14,r11,29127
	ctx.r14.u64 = ctx.r11.u64 | 29127;
	// ori r15,r10,21845
	ctx.r15.u64 = ctx.r10.u64 | 21845;
	// b 0x8216eb7c
	goto loc_8216EB7C;
loc_8216EB78:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8216EB7C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,-901
	ctx.r11.s64 = ctx.r11.s64 + -901;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8216f1e0
	if (ctx.cr6.gt) goto loc_8216F1E0;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5212
	ctx.r12.s64 = ctx.r12.s64 + -5212;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8216EBE4;
	case 1:
		goto loc_8216F1E0;
	case 2:
		goto loc_8216EC54;
	case 3:
		goto loc_8216F1E0;
	case 4:
		goto loc_8216ECE8;
	case 5:
		goto loc_8216ED14;
	case 6:
		goto loc_8216F1E0;
	case 7:
		goto loc_8216ECD8;
	case 8:
		goto loc_8216ECD8;
	case 9:
		goto loc_8216ECD8;
	case 10:
		goto loc_8216ED48;
	case 11:
		goto loc_8216EBD4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-5148(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5148);
	// lwz r16,-3616(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3616);
	// lwz r16,-5036(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5036);
	// lwz r16,-3616(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3616);
	// lwz r16,-4888(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4888);
	// lwz r16,-4844(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4844);
	// lwz r16,-3616(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3616);
	// lwz r16,-4904(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4904);
	// lwz r16,-4904(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4904);
	// lwz r16,-4904(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4904);
	// lwz r16,-4792(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4792);
	// lwz r16,-5164(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5164);
loc_8216EBD4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EBDC;
	sub_8208D070(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// b 0x8216f1e0
	goto loc_8216F1E0;
loc_8216EBE4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EBEC;
	sub_8208D070(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EBF8;
	sub_8208D070(ctx, base);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EC04;
	sub_8208D070(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r22,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r22.u32);
	// stfs f0,112(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mulli r11,r10,148
	ctx.r11.s64 = ctx.r10.s64 * 148;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216EC34;
	sub_8208CFB0(ctx, base);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r5,r9,148
	ctx.r5.s64 = ctx.r9.s64 * 148;
	// add r22,r11,r31
	ctx.r22.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216EC50;
	sub_8208CFB0(ctx, base);
	// b 0x8216f1e0
	goto loc_8216F1E0;
loc_8216EC54:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EC5C;
	sub_8208D070(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// bl 0x8208d070
	ctx.lr = 0x8216EC7C;
	sub_8208D070(ctx, base);
	// stw r3,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r3.u32);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8208cfb0
	ctx.lr = 0x8216EC9C;
	sub_8208CFB0(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r31,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// bl 0x8208cfb0
	ctx.lr = 0x8216ECD0;
	sub_8208CFB0(ctx, base);
	// add r22,r29,r31
	ctx.r22.u64 = ctx.r29.u64 + ctx.r31.u64;
	// b 0x8216f1e0
	goto loc_8216F1E0;
loc_8216ECD8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821613d0
	ctx.lr = 0x8216ECE4;
	sub_821613D0(ctx, base);
	// b 0x8216f1e0
	goto loc_8216F1E0;
loc_8216ECE8:
	// stw r22,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r22.u32);
	// rotlwi r4,r22,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216ED10;
	sub_8208CFB0(ctx, base);
	// b 0x8216f1e0
	goto loc_8216F1E0;
loc_8216ED14:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216ED1C;
	sub_8208D070(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f1e0
	if (ctx.cr6.eq) goto loc_8216F1E0;
	// stw r22,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r22.u32);
	// rotlwi r4,r22,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// add r22,r5,r22
	ctx.r22.u64 = ctx.r5.u64 + ctx.r22.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216ED44;
	sub_8208CFB0(ctx, base);
	// b 0x8216f1e0
	goto loc_8216F1E0;
loc_8216ED48:
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8216ed64
	if (ctx.cr6.lt) goto loc_8216ED64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216ED5C;
	sub_8208D070(ctx, base);
	// stw r3,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r3.u32);
	// b 0x8216ed68
	goto loc_8216ED68;
loc_8216ED64:
	// stw r21,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r21.u32);
loc_8216ED68:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216ED70;
	sub_8208D070(ctx, base);
	// stw r3,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r3.u32);
	// lwz r3,-27096(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8216ED7C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216ed88
	if (!ctx.cr6.eq) goto loc_8216ED88;
	// bl 0x821b3000
	ctx.lr = 0x8216ED88;
	sub_821B3000(ctx, base);
loc_8216ED88:
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8216edbc
	if (!ctx.cr6.gt) goto loc_8216EDBC;
	// stw r31,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r31.u32);
loc_8216EDBC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,180(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x8216ef68
	if (!ctx.cr6.gt) goto loc_8216EF68;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8216EDE8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EDF0;
	sub_8208D070(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EDFC;
	sub_8208D070(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r3,-27096(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8216EE08;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216ee14
	if (!ctx.cr6.eq) goto loc_8216EE14;
	// bl 0x821b3000
	ctx.lr = 0x8216EE14;
	sub_821B3000(ctx, base);
loc_8216EE14:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8216ee50
	if (!ctx.cr6.gt) goto loc_8216EE50;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-13569
	ctx.r8.s64 = -889257984;
	// stw r10,-13570(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13570, ctx.r10.u32);
loc_8216EE50:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// ble cr6,0x8216ef54
	if (!ctx.cr6.gt) goto loc_8216EF54;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8216EE7C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EE90;
	sub_8208D070(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EE9C;
	sub_8208D070(ctx, base);
	// rlwinm r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ef40
	if (ctx.cr6.eq) goto loc_8216EF40;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8216EEBC;
	sub_8208CFB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216eef8
	if (ctx.cr6.eq) goto loc_8216EEF8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EED4;
	sub_8208D070(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8208d070
	ctx.lr = 0x8216EEE8;
	sub_8208D070(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x8216ef40
	goto loc_8216EF40;
loc_8216EEF8:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ef40
	if (ctx.cr6.eq) goto loc_8216EF40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208d070
	ctx.lr = 0x8216EF0C;
	sub_8208D070(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8208d070
	ctx.lr = 0x8216EF20;
	sub_8208D070(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x8208d070
	ctx.lr = 0x8216EF34;
	sub_8208D070(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8216EF40:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216ee7c
	if (ctx.cr6.lt) goto loc_8216EE7C;
loc_8216EF54:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216ede8
	if (ctx.cr6.lt) goto loc_8216EDE8;
loc_8216EF68:
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216ef88
	if (!ctx.cr6.eq) goto loc_8216EF88;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216ef88
	if (!ctx.cr6.gt) goto loc_8216EF88;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r11.u32);
loc_8216EF88:
	// stw r21,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r21.u32);
	// cmplw cr6,r26,r14
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r14.u32, ctx.xer);
	// stw r21,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r21.u32);
	// bgt cr6,0x8216efa8
	if (ctx.cr6.gt) goto loc_8216EFA8;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216efac
	goto loc_8216EFAC;
loc_8216EFA8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8216EFAC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216EFBC;
	sub_82082030(ctx, base);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r3,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r3.u32);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bgt cr6,0x8216efdc
	if (ctx.cr6.gt) goto loc_8216EFDC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216efe0
	goto loc_8216EFE0;
loc_8216EFDC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8216EFE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216EFF0;
	sub_82082030(ctx, base);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// stw r3,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216f0bc
	if (!ctx.cr6.gt) goto loc_8216F0BC;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_8216F00C:
	// add r6,r7,r23
	ctx.r6.u64 = ctx.r7.u64 + ctx.r23.u64;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwzx r8,r7,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwz r9,188(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stwx r8,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwzx r11,r7,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216f084
	if (!ctx.cr6.gt) goto loc_8216F084;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8216F044:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r10,9
	ctx.r10.s64 = 9;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8216F060:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8216f060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F060;
	// lwz r10,188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwzx r9,r7,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8216f044
	if (ctx.cr6.lt) goto loc_8216F044;
loc_8216F084:
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r10,188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r9,180(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blt cr6,0x8216f00c
	if (ctx.cr6.lt) goto loc_8216F00C;
loc_8216F0BC:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8216f160
	if (ctx.cr0.lt) goto loc_8216F160;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r27,-13569
	ctx.r27.s64 = -889257984;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_8216F0E0:
	// lwz r3,-27096(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8216F0E8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216f0f4
	if (!ctx.cr6.eq) goto loc_8216F0F4;
	// bl 0x821b3000
	ctx.lr = 0x8216F0F4;
	sub_821B3000(ctx, base);
loc_8216F0F4:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8216f154
	if (ctx.cr6.eq) goto loc_8216F154;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,15
	ctx.r5.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r5,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8216f12c
	if (!ctx.cr6.gt) goto loc_8216F12C;
	// stw r28,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r28.u32);
loc_8216F12C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8216f148
	if (ctx.cr6.eq) goto loc_8216F148;
	// stw r28,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r28.u32);
loc_8216F148:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8216F154:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// bge 0x8216f0e0
	if (!ctx.cr0.lt) goto loc_8216F0E0;
loc_8216F160:
	// lwz r3,-27096(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8216F168;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216f174
	if (!ctx.cr6.eq) goto loc_8216F174;
	// bl 0x821b3000
	ctx.lr = 0x8216F174;
	sub_821B3000(ctx, base);
loc_8216F174:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8216f1e0
	if (ctx.cr6.eq) goto loc_8216F1E0;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r6,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8216f1b0
	if (!ctx.cr6.gt) goto loc_8216F1B0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-13569
	ctx.r8.s64 = -889257984;
	// stw r9,-13570(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13570, ctx.r9.u32);
loc_8216F1B0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8216f1d4
	if (ctx.cr6.eq) goto loc_8216F1D4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-13569
	ctx.r8.s64 = -889257984;
	// stw r9,-13570(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13570, ctx.r9.u32);
loc_8216F1D4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8216F1E0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82161240
	ctx.lr = 0x8216F1F0;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r27,-13569
	ctx.r27.s64 = -889257984;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216eb78
	if (!ctx.cr6.eq) goto loc_8216EB78;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8216F208:
	// subf r26,r19,r22
	ctx.r26.s64 = ctx.r22.s64 - ctx.r19.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216F220;
	sub_82082030(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8216F230;
	sub_8233E4E0(ctx, base);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// subf r11,r19,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r19.s64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// beq cr6,0x8216f274
	if (ctx.cr6.eq) goto loc_8216F274;
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// subf r10,r19,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r19.s64;
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// add r6,r10,r17
	ctx.r6.u64 = ctx.r10.u64 + ctx.r17.u64;
	// rlwinm r5,r8,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r7,98(r30)
	PPC_STORE_U16(ctx.r30.u32 + 98, ctx.r7.u16);
	// sth r7,96(r30)
	PPC_STORE_U16(ctx.r30.u32 + 96, ctx.r7.u16);
	// stw r6,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r6.u32);
	// stw r5,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r5.u32);
loc_8216F274:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8216f2b0
	if (ctx.cr6.eq) goto loc_8216F2B0;
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// subf r10,r19,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r19.s64;
	// lwz r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r10,r18
	ctx.r6.u64 = ctx.r10.u64 + ctx.r18.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r4,r7,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r6.u32);
	// sth r5,166(r30)
	PPC_STORE_U16(ctx.r30.u32 + 166, ctx.r5.u16);
	// stw r4,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r4.u32);
	// sth r5,164(r30)
	PPC_STORE_U16(ctx.r30.u32 + 164, ctx.r5.u16);
loc_8216F2B0:
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f2c8
	if (ctx.cr6.eq) goto loc_8216F2C8;
	// subf r11,r19,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r19.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
loc_8216F2C8:
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216f2e0
	if (ctx.cr6.eq) goto loc_8216F2E0;
	// subf r11,r19,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r19.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
loc_8216F2E0:
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216f2f8
	if (ctx.cr6.eq) goto loc_8216F2F8;
	// subf r11,r19,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r19.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
loc_8216F2F8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8216f338
	if (ctx.cr6.eq) goto loc_8216F338;
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8216f310
	if (!ctx.cr6.gt) goto loc_8216F310;
	// stw r29,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r29.u32);
loc_8216F310:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8216f32c
	if (ctx.cr6.eq) goto loc_8216F32C;
	// stw r29,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r29.u32);
loc_8216F32C:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r10.u32);
loc_8216F338:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216F340"))) PPC_WEAK_FUNC(sub_8216F340);
PPC_FUNC_IMPL(__imp__sub_8216F340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x8216F348;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x8233fa30
	ctx.lr = 0x8216F350;
	__savefpr_26(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216f8b8
	if (!ctx.cr6.eq) goto loc_8216F8B8;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f8b8
	if (ctx.cr6.eq) goto loc_8216F8B8;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216f8b8
	if (ctx.cr6.eq) goto loc_8216F8B8;
	// lwz r31,236(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r22,-1
	ctx.r22.s64 = -1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// ble cr6,0x8216f3b0
	if (!ctx.cr6.gt) goto loc_8216F3B0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8216F3B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8216F3C0;
	sub_82082030(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216f3dc
	if (ctx.cr6.eq) goto loc_8216F3DC;
	// addi r26,r11,168
	ctx.r26.s64 = ctx.r11.s64 + 168;
loc_8216F3DC:
	// lwz r27,144(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 144);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216f3fc
	if (ctx.cr6.eq) goto loc_8216F3FC;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216f3fc
	if (ctx.cr6.eq) goto loc_8216F3FC;
	// lwz r24,180(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x8216f400
	goto loc_8216F400;
loc_8216F3FC:
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
loc_8216F400:
	// lwz r11,136(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 136);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// lwz r21,236(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216f694
	if (!ctx.cr6.gt) goto loc_8216F694;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// li r23,4
	ctx.r23.s64 = 4;
	// lis r25,-32197
	ctx.r25.s64 = -2110062592;
	// lfs f31,1292(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1292);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,1176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1176);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
loc_8216F440:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x8216F448;
	sub_82081C00(ctx, base);
	// bl 0x8221ac18
	ctx.lr = 0x8216F44C;
	sub_8221AC18(ctx, base);
	// lwz r11,-27096(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -27096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82388734
	ctx.lr = 0x8216F45C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216f468
	if (!ctx.cr6.eq) goto loc_8216F468;
	// bl 0x821b3000
	ctx.lr = 0x8216F468;
	sub_821B3000(ctx, base);
loc_8216F468:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f47c
	if (ctx.cr6.eq) goto loc_8216F47C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8216F47C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216f494
	if (ctx.cr6.eq) goto loc_8216F494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221a218
	ctx.lr = 0x8216F48C;
	sub_8221A218(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8216f498
	goto loc_8216F498;
loc_8216F494:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_8216F498:
	// stw r21,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r21.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r10,124(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 124);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lhz r9,128(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 128);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// sth r9,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r9.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216f4e0
	if (!ctx.cr6.eq) goto loc_8216F4E0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8216F4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216F4E0:
	// sth r29,812(r31)
	PPC_STORE_U16(ctx.r31.u32 + 812, ctx.r29.u16);
	// addi r30,r31,168
	ctx.r30.s64 = ctx.r31.s64 + 168;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216f680
	if (!ctx.cr6.eq) goto loc_8216F680;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8216f544
	if (ctx.cr6.eq) goto loc_8216F544;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r28,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// bl 0x82215550
	ctx.lr = 0x8216F514;
	sub_82215550(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// ble cr6,0x8216f528
	if (!ctx.cr6.gt) goto loc_8216F528;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8216F528:
	// lwz r10,132(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 132);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lwz r8,224(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x8216f660
	goto loc_8216F660;
loc_8216F544:
	// lwz r11,80(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 80);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,84(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 84);
	// stfs f26,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r7,88(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 88);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// stw r4,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r4.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r5,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r5.u32);
	// lhz r6,164(r20)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r20.u32 + 164);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216f5cc
	if (ctx.cr6.eq) goto loc_8216F5CC;
	// lwz r9,160(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 160);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwz r7,132(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 132);
	// add r8,r9,r18
	ctx.r8.u64 = ctx.r9.u64 + ctx.r18.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
loc_8216F5AC:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8216f730
	if (ctx.cr6.eq) goto loc_8216F730;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x8216f5ac
	if (ctx.cr6.lt) goto loc_8216F5AC;
loc_8216F5CC:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
loc_8216F5D0:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d2ad8
	ctx.lr = 0x8216F5F0;
	sub_821D2AD8(ctx, base);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x8233e4e0
	ctx.lr = 0x8216F604;
	sub_8233E4E0(ctx, base);
	// stfs f27,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f29,132(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f28,136(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82215998
	ctx.lr = 0x8216F624;
	sub_82215998(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8216f648
	if (ctx.cr6.eq) goto loc_8216F648;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8216f648
	if (ctx.cr6.eq) goto loc_8216F648;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8216F648:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r18,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r18.u32);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// bl 0x82216760
	ctx.lr = 0x8216F660;
	sub_82216760(ctx, base);
loc_8216F660:
	// lwz r11,236(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// stwx r31,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r31.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8216F680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216F680:
	// lwz r11,136(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 136);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216f440
	if (ctx.cr6.lt) goto loc_8216F440;
loc_8216F694:
	// lwz r11,132(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 132);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820ac008
	ctx.lr = 0x8216F6AC;
	sub_820AC008(ctx, base);
	// lwz r4,136(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 136);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8216f71c
	if (ctx.cr6.eq) goto loc_8216F71C;
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_8216F6D0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216f6fc
	if (ctx.cr0.eq) goto loc_8216F6FC;
loc_8216F6EC:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216f6ec
	if (!ctx.cr6.eq) goto loc_8216F6EC;
loc_8216F6FC:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8216f70c
	if (!ctx.cr6.lt) goto loc_8216F70C;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
loc_8216F70C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8216f6d0
	if (ctx.cr6.lt) goto loc_8216F6D0;
loc_8216F71C:
	// lwz r11,236(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216f73c
	if (!ctx.cr6.eq) goto loc_8216F73C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8216f758
	goto loc_8216F758;
loc_8216F730:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8216f5d0
	goto loc_8216F5D0;
loc_8216F73C:
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216f750
	if (!ctx.cr6.eq) goto loc_8216F750;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8216f758
	goto loc_8216F758;
loc_8216F750:
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8216F758:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,780(r11)
	PPC_STORE_U8(ctx.r11.u32 + 780, ctx.r10.u8);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r25,188(r21)
	PPC_STORE_U32(ctx.r21.u32 + 188, ctx.r25.u32);
	// lwz r9,180(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8216f778
	if (!ctx.cr6.gt) goto loc_8216F778;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
loc_8216F778:
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f78c
	if (ctx.cr6.eq) goto loc_8216F78C;
	// lwz r10,224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// stw r10,1036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1036, ctx.r10.u32);
loc_8216F78C:
	// lwz r9,136(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 136);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216f8a4
	if (ctx.cr6.eq) goto loc_8216F8A4;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// li r28,144
	ctx.r28.s64 = 144;
loc_8216F7A4:
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8216f890
	if (ctx.cr6.eq) goto loc_8216F890;
	// lwzx r11,r29,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// lwz r6,40(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r7,128(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
loc_8216F7C8:
	// subf r10,r6,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// divw r8,r10,r28
	ctx.r8.s32 = ctx.r10.s32 / ctx.r28.s32;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216f7fc
	if (ctx.cr6.eq) goto loc_8216F7FC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8216F7E0:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8216f7fc
	if (ctx.cr6.eq) goto loc_8216F7FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8216f7e0
	if (ctx.cr6.lt) goto loc_8216F7E0;
loc_8216F7FC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8216f81c
	if (ctx.cr6.eq) goto loc_8216F81C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216f824
	if (!ctx.cr6.eq) goto loc_8216F824;
loc_8216F810:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8216f7c8
	if (!ctx.cr6.eq) goto loc_8216F7C8;
	// b 0x8216f82c
	goto loc_8216F82C;
loc_8216F81C:
	// lwz r7,128(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// b 0x8216f810
	goto loc_8216F810;
loc_8216F824:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8216f830
	if (!ctx.cr6.eq) goto loc_8216F830;
loc_8216F82C:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_8216F830:
	// lwz r10,236(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216f844
	if (!ctx.cr6.eq) goto loc_8216F844;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x8216f860
	goto loc_8216F860;
loc_8216F844:
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216f858
	if (!ctx.cr6.eq) goto loc_8216F858;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x8216f860
	goto loc_8216F860;
loc_8216F858:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_8216F860:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// beq cr6,0x8216f87c
	if (ctx.cr6.eq) goto loc_8216F87C;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216f87c
	if (ctx.cr6.eq) goto loc_8216F87C;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
loc_8216F87C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,788
	ctx.r3.s64 = ctx.r30.s64 + 788;
	// bl 0x8221ad18
	ctx.lr = 0x8216F88C;
	sub_8221AD18(ctx, base);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
loc_8216F890:
	// lwz r9,136(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 136);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8216f7a4
	if (ctx.cr6.lt) goto loc_8216F7A4;
loc_8216F8A4:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8216f8c8
	ctx.lr = 0x8216F8B8;
	sub_8216F8C8(ctx, base);
loc_8216F8B8:
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x8233fa7c
	ctx.lr = 0x8216F8C4;
	__restfpr_26(ctx, base);
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216F8C8"))) PPC_WEAK_FUNC(sub_8216F8C8);
PPC_FUNC_IMPL(__imp__sub_8216F8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x8216F8D0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa38
	ctx.lr = 0x8216F8D8;
	__savefpr_28(ctx, base);
	// stwu r1,-2032(r1)
	ea = -2032 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r3,2052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2052, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,2060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2060, ctx.r4.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r5,2068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2068, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fe90
	if (ctx.cr6.eq) goto loc_8216FE90;
	// lwz r5,164(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8216f91c
	if (ctx.cr6.eq) goto loc_8216F91C;
	// bl 0x822578d8
	ctx.lr = 0x8216F918;
	sub_822578D8(ctx, base);
	// b 0x8216f924
	goto loc_8216F924;
loc_8216F91C:
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x8216F924;
	sub_8233E4E0(ctx, base);
loc_8216F924:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82257cb8
	ctx.lr = 0x8216F934;
	sub_82257CB8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8216f944
	if (!ctx.cr6.eq) goto loc_8216F944;
	// lwz r6,192(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 192);
loc_8216F944:
	// lwz r7,180(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 180);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8216fe90
	if (ctx.cr6.eq) goto loc_8216FE90;
	// lwz r9,188(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 188);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// add r8,r22,r9
	ctx.r8.u64 = ctx.r22.u64 + ctx.r9.u64;
loc_8216F964:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8216f994
	if (ctx.cr6.eq) goto loc_8216F994;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x8216f964
	if (ctx.cr6.lt) goto loc_8216F964;
	// addi r1,r1,2032
	ctx.r1.s64 = ctx.r1.s64 + 2032;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa84
	ctx.lr = 0x8216F990;
	__restfpr_28(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8216F994:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8216fe90
	if (ctx.cr6.eq) goto loc_8216FE90;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r11,r9
	ctx.r18.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fe90
	if (ctx.cr6.eq) goto loc_8216FE90;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r7,r11,31376
	ctx.r7.s64 = ctx.r11.s64 + 31376;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r19,r10,5280
	ctx.r19.s64 = ctx.r10.s64 + 5280;
	// addi r17,r9,4536
	ctx.r17.s64 = ctx.r9.s64 + 4536;
	// lfs f28,216(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 216);
	ctx.f28.f64 = double(temp.f32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lfs f30,60(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f29,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// addi r20,r11,-23400
	ctx.r20.s64 = ctx.r11.s64 + -23400;
	// lfs f31,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// b 0x8216fa0c
	goto loc_8216FA0C;
loc_8216FA08:
	// lwz r30,2060(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2060);
loc_8216FA0C:
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// add r25,r8,r11
	ctx.r25.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fe74
	if (ctx.cr6.eq) goto loc_8216FE74;
	// lwz r9,136(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 136);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216fa54
	if (ctx.cr6.eq) goto loc_8216FA54;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,2068(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2068);
loc_8216FA38:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8216fa54
	if (ctx.cr6.eq) goto loc_8216FA54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8216fa38
	if (ctx.cr6.lt) goto loc_8216FA38;
loc_8216FA54:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8216fe74
	if (ctx.cr6.eq) goto loc_8216FE74;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216fa70
	if (!ctx.cr6.eq) goto loc_8216FA70;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// b 0x8216fa8c
	goto loc_8216FA8C;
loc_8216FA70:
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216fa84
	if (!ctx.cr6.eq) goto loc_8216FA84;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// b 0x8216fa8c
	goto loc_8216FA8C;
loc_8216FA84:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r10,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8216FA8C:
	// lwz r23,784(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 784);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8216fe74
	if (ctx.cr6.eq) goto loc_8216FE74;
	// lwz r11,156(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 156);
	// lis r30,-32171
	ctx.r30.s64 = -2108358656;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r31,5540(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5540);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216fad8
	if (ctx.cr6.eq) goto loc_8216FAD8;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216fad0
	if (!ctx.cr6.eq) goto loc_8216FAD0;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r31,5540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5540, ctx.r31.u32);
	// bl 0x820e35f0
	ctx.lr = 0x8216FAD0;
	sub_820E35F0(ctx, base);
loc_8216FAD0:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// b 0x8216fadc
	goto loc_8216FADC;
loc_8216FAD8:
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
loc_8216FADC:
	// lwz r11,156(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 156);
	// lwz r29,72(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216fb18
	if (ctx.cr6.eq) goto loc_8216FB18;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216fb10
	if (!ctx.cr6.eq) goto loc_8216FB10;
	// ori r11,r31,1
	ctx.r11.u64 = ctx.r31.u64 | 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,5540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5540, ctx.r11.u32);
	// bl 0x820e35f0
	ctx.lr = 0x8216FB10;
	sub_820E35F0(ctx, base);
loc_8216FB10:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x8216fb1c
	goto loc_8216FB1C;
loc_8216FB18:
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
loc_8216FB1C:
	// lwz r10,180(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 180);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8216fb34
	if (!ctx.cr6.gt) goto loc_8216FB34;
	// lwz r30,168(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 168);
loc_8216FB34:
	// lwz r11,180(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216fb48
	if (!ctx.cr6.gt) goto loc_8216FB48;
	// lwz r31,168(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 168);
loc_8216FB48:
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lwz r28,224(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82193758
	ctx.lr = 0x8216FB5C;
	sub_82193758(ctx, base);
	// addi r6,r1,1328
	ctx.r6.s64 = ctx.r1.s64 + 1328;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82193758
	ctx.lr = 0x8216FB70;
	sub_82193758(ctx, base);
	// addi r5,r1,1328
	ctx.r5.s64 = ctx.r1.s64 + 1328;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x822578d8
	ctx.lr = 0x8216FB80;
	sub_822578D8(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,1712
	ctx.r4.s64 = ctx.r1.s64 + 1712;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x822578d8
	ctx.lr = 0x8216FB90;
	sub_822578D8(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x822578d8
	ctx.lr = 0x8216FBA0;
	sub_822578D8(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x822578d8
	ctx.lr = 0x8216FBB0;
	sub_822578D8(ctx, base);
	// addi r5,r1,1008
	ctx.r5.s64 = ctx.r1.s64 + 1008;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82257cb8
	ctx.lr = 0x8216FBC0;
	sub_82257CB8(ctx, base);
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82257cb8
	ctx.lr = 0x8216FBD0;
	sub_82257CB8(ctx, base);
	// addi r5,r1,880
	ctx.r5.s64 = ctx.r1.s64 + 880;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x822578d8
	ctx.lr = 0x8216FBE0;
	sub_822578D8(ctx, base);
	// addi r5,r1,1584
	ctx.r5.s64 = ctx.r1.s64 + 1584;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82257cb8
	ctx.lr = 0x8216FBF0;
	sub_82257CB8(ctx, base);
	// addi r5,r1,880
	ctx.r5.s64 = ctx.r1.s64 + 880;
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x822578d8
	ctx.lr = 0x8216FC00;
	sub_822578D8(ctx, base);
	// addi r5,r1,1456
	ctx.r5.s64 = ctx.r1.s64 + 1456;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82257cb8
	ctx.lr = 0x8216FC10;
	sub_82257CB8(ctx, base);
	// addi r5,r1,1200
	ctx.r5.s64 = ctx.r1.s64 + 1200;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x822578d8
	ctx.lr = 0x8216FC20;
	sub_822578D8(ctx, base);
	// addi r5,r1,1264
	ctx.r5.s64 = ctx.r1.s64 + 1264;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lwz r31,672(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r30,676(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r29,680(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// bl 0x822578d8
	ctx.lr = 0x8216FC3C;
	sub_822578D8(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r28,736(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r27,740(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r26,744(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// beq cr6,0x8216fcf8
	if (ctx.cr6.eq) goto loc_8216FCF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82082030
	ctx.lr = 0x8216FC6C;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fcb8
	if (ctx.cr6.eq) goto loc_8216FCB8;
	// stfs f29,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r23,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r23.u32);
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// sth r22,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r22.u16);
	// sth r21,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r21.u16);
	// stb r22,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r22.u8);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// stw r27,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r27.u32);
	// stw r26,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r26.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// b 0x8216fcbc
	goto loc_8216FCBC;
loc_8216FCB8:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_8216FCBC:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r17,232
	ctx.r3.s64 = ctx.r17.s64 + 232;
	// bl 0x82106098
	ctx.lr = 0x8216FCCC;
	sub_82106098(ctx, base);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fce0
	if (ctx.cr6.eq) goto loc_8216FCE0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82217ba8
	ctx.lr = 0x8216FCE0;
	sub_82217BA8(ctx, base);
loc_8216FCE0:
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fe74
	if (ctx.cr6.eq) goto loc_8216FE74;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82217ba8
	ctx.lr = 0x8216FCF4;
	sub_82217BA8(ctx, base);
	// b 0x8216fe74
	goto loc_8216FE74;
loc_8216FCF8:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216fea0
	if (ctx.cr6.eq) goto loc_8216FEA0;
	// addi r4,r25,8
	ctx.r4.s64 = ctx.r25.s64 + 8;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82258228
	ctx.lr = 0x8216FD10;
	sub_82258228(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,1392
	ctx.r4.s64 = ctx.r1.s64 + 1392;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x822578d8
	ctx.lr = 0x8216FD20;
	sub_822578D8(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,1520
	ctx.r4.s64 = ctx.r1.s64 + 1520;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822578d8
	ctx.lr = 0x8216FD30;
	sub_822578D8(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stfs f29,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lwz r19,176(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r18,180(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r17,184(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r16,192(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r15,196(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r14,200(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// stw r15,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r15.u32);
	// stw r14,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// bl 0x822578d8
	ctx.lr = 0x8216FDB0;
	sub_822578D8(ctx, base);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// addi r5,r1,944
	ctx.r5.s64 = ctx.r1.s64 + 944;
	// stw r29,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x822578d8
	ctx.lr = 0x8216FDCC;
	sub_822578D8(ctx, base);
	// stw r28,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r28.u32);
	// stw r27,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r26.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82082030
	ctx.lr = 0x8216FDEC;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fe10
	if (ctx.cr6.eq) goto loc_8216FE10;
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82214570
	ctx.lr = 0x8216FE08;
	sub_82214570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8216fe14
	goto loc_8216FE14;
loc_8216FE10:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8216FE14:
	// lfs f0,28(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lfs f13,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r17,100(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// addi r3,r17,232
	ctx.r3.s64 = ctx.r17.s64 + 232;
	// stfs f28,172(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// bl 0x82106098
	ctx.lr = 0x8216FE40;
	sub_82106098(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fe54
	if (ctx.cr6.eq) goto loc_8216FE54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217ba8
	ctx.lr = 0x8216FE54;
	sub_82217BA8(ctx, base);
loc_8216FE54:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fe68
	if (ctx.cr6.eq) goto loc_8216FE68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217ba8
	ctx.lr = 0x8216FE68;
	sub_82217BA8(ctx, base);
loc_8216FE68:
	// lwz r16,2052(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2052);
	// lwz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r19,96(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8216FE74:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bne 0x8216fa08
	if (!ctx.cr0.eq) goto loc_8216FA08;
loc_8216FE90:
	// addi r1,r1,2032
	ctx.r1.s64 = ctx.r1.s64 + 2032;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8233fa84
	ctx.lr = 0x8216FE9C;
	__restfpr_28(ctx, base);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8216FEA0:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fe74
	if (ctx.cr6.eq) goto loc_8216FE74;
	// addi r4,r25,8
	ctx.r4.s64 = ctx.r25.s64 + 8;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82258228
	ctx.lr = 0x8216FEB8;
	sub_82258228(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,1648
	ctx.r4.s64 = ctx.r1.s64 + 1648;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x822578d8
	ctx.lr = 0x8216FEC8;
	sub_822578D8(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,1776
	ctx.r4.s64 = ctx.r1.s64 + 1776;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x822578d8
	ctx.lr = 0x8216FED8;
	sub_822578D8(ctx, base);
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x822578d8
	ctx.lr = 0x8216FEE8;
	sub_822578D8(ctx, base);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// addi r5,r1,944
	ctx.r5.s64 = ctx.r1.s64 + 944;
	// stw r29,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r29.u32);
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x822578d8
	ctx.lr = 0x8216FF04;
	sub_822578D8(ctx, base);
	// stw r28,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r28.u32);
	// stw r27,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r26.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x82082030
	ctx.lr = 0x8216FF24;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ff48
	if (ctx.cr6.eq) goto loc_8216FF48;
	// addi r7,r1,560
	ctx.r7.s64 = ctx.r1.s64 + 560;
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82213650
	ctx.lr = 0x8216FF40;
	sub_82213650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8216ff4c
	goto loc_8216FF4C;
loc_8216FF48:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8216FF4C:
	// lfs f0,28(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lfs f13,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,32(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f10,196(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 196, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f12,200(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// stfs f11,204(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// stfs f30,212(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 212, temp.u32);
	// stfs f28,216(r4)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r4.u32 + 216, temp.u32);
	// stfs f31,220(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 220, temp.u32);
	// bl 0x820d68c8
	ctx.lr = 0x8216FF84;
	sub_820D68C8(ctx, base);
	// b 0x8216fe74
	goto loc_8216FE74;
}

__attribute__((alias("__imp__sub_8216FF88"))) PPC_WEAK_FUNC(sub_8216FF88);
PPC_FUNC_IMPL(__imp__sub_8216FF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8216FF90;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217008c
	if (ctx.cr6.eq) goto loc_8217008C;
	// lwz r11,180(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// addi r29,r4,168
	ctx.r29.s64 = ctx.r4.s64 + 168;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217008c
	if (!ctx.cr6.eq) goto loc_8217008C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,780(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 780);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82257540
	ctx.lr = 0x8216FFE8;
	sub_82257540(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r6,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r6.u32);
	// stw r5,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r5.u32);
	// stw r4,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r4.u32);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// lhz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,780(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 780);
	// beq cr6,0x82170028
	if (ctx.cr6.eq) goto loc_82170028;
	// lwz r6,160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// b 0x8217002c
	goto loc_8217002C;
loc_82170028:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8217002C:
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bl 0x821d2ad8
	ctx.lr = 0x8217004C;
	sub_821D2AD8(ctx, base);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82216760
	ctx.lr = 0x82170064;
	sub_82216760(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82170078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x8217008c
	if (!ctx.cr6.gt) goto loc_8217008C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1036, ctx.r11.u32);
loc_8217008C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170094"))) PPC_WEAK_FUNC(sub_82170094);
PPC_FUNC_IMPL(__imp__sub_82170094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170098"))) PPC_WEAK_FUNC(sub_82170098);
PPC_FUNC_IMPL(__imp__sub_82170098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x821700A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r22,r11,6704
	ctx.r22.s64 = ctx.r11.s64 + 6704;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823052d8
	ctx.lr = 0x821700C0;
	sub_823052D8(ctx, base);
	// lwz r31,88(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821700e0
	if (ctx.cr6.eq) goto loc_821700E0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823051a8
	ctx.lr = 0x821700D4;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_821700E0:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lis r10,455
	ctx.r10.s64 = 29818880;
	// ori r9,r10,7281
	ctx.r9.u64 = ctx.r10.u64 | 7281;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82170108
	if (ctx.cr6.gt) goto loc_82170108;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8217010c
	goto loc_8217010C;
loc_82170108:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8217010C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8217011C;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq cr6,0x82170150
	if (ctx.cr6.eq) goto loc_82170150;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82170148
	if (ctx.cr0.lt) goto loc_82170148;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217013C:
	// stw r23,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r23.u32);
	// stwu r23,144(r11)
	ea = 144 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8217013c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217013C;
loc_82170148:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82170154
	goto loc_82170154;
loc_82170150:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82170154:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r9,31376
	ctx.r8.s64 = ctx.r9.s64 + 31376;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r11,r26
	ctx.r25.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r25,64
	ctx.r30.s64 = ctx.r25.s64 + 64;
	// stfs f0,120(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 120, temp.u32);
	// stfs f0,116(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 116, temp.u32);
	// stfs f0,112(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 112, temp.u32);
	// stfs f0,108(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 108, temp.u32);
	// stfs f0,100(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 100, temp.u32);
	// stfs f0,96(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 96, temp.u32);
	// stfs f0,92(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 92, temp.u32);
	// stfs f0,88(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 88, temp.u32);
	// stfs f0,80(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 80, temp.u32);
	// stfs f0,76(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 76, temp.u32);
	// stfs f0,72(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 72, temp.u32);
	// stfs f0,68(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 68, temp.u32);
	// stfs f13,124(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 124, temp.u32);
	// stfs f13,104(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 104, temp.u32);
	// stfs f13,84(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 84, temp.u32);
	// stfs f13,64(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 64, temp.u32);
	// lwz r6,80(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x82170290
	if (!ctx.cr6.gt) goto loc_82170290;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r31,r26,128
	ctx.r31.s64 = ctx.r26.s64 + 128;
loc_821701D4:
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// addi r28,r31,-64
	ctx.r28.s64 = ctx.r31.s64 + -64;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821701EC;
	sub_8233E4E0(ctx, base);
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82170220
	if (!ctx.cr6.eq) goto loc_82170220;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170218
	if (ctx.cr6.eq) goto loc_82170218;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8217024c
	if (ctx.cr6.eq) goto loc_8217024C;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_82170218:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x8217024c
	goto loc_8217024C;
loc_82170220:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// beq cr6,0x82170248
	if (ctx.cr6.eq) goto loc_82170248;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217024c
	if (ctx.cr6.eq) goto loc_8217024C;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_82170248:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8217024C:
	// rotlwi r11,r25,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82170274
	if (!ctx.cr6.eq) goto loc_82170274;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8233e4e0
	ctx.lr = 0x82170270;
	sub_8233E4E0(ctx, base);
	// b 0x82170278
	goto loc_82170278;
loc_82170274:
	// bl 0x822578d8
	ctx.lr = 0x82170278;
	sub_822578D8(ctx, base);
loc_82170278:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,148
	ctx.r29.s64 = ctx.r29.s64 + 148;
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821701d4
	if (ctx.cr6.lt) goto loc_821701D4;
loc_82170290:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x821702A0;
	sub_8233E4E0(ctx, base);
	// stw r26,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r26.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823051a8
	ctx.lr = 0x821702AC;
	sub_823051A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821702B8"))) PPC_WEAK_FUNC(sub_821702B8);
PPC_FUNC_IMPL(__imp__sub_821702B8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170358
	if (ctx.cr6.eq) goto loc_82170358;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82170310
	if (!ctx.cr6.gt) goto loc_82170310;
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
loc_821702DC:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821702fc
	if (!ctx.cr6.lt) goto loc_821702FC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82170304
	goto loc_82170304;
loc_821702FC:
	// ble cr6,0x82170310
	if (!ctx.cr6.gt) goto loc_82170310;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82170304:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821702dc
	if (ctx.cr6.lt) goto loc_821702DC;
loc_82170310:
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82170350
	if (ctx.cr6.eq) goto loc_82170350;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8217033c
	if (!ctx.cr6.eq) goto loc_8217033C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82170350
	goto loc_82170350;
loc_8217033C:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82170358
	if (!ctx.cr6.eq) goto loc_82170358;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82170350:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82170360
	if (!ctx.cr6.eq) goto loc_82170360;
loc_82170358:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82170360:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170370"))) PPC_WEAK_FUNC(sub_82170370);
PPC_FUNC_IMPL(__imp__sub_82170370) {
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
	// beq cr6,0x8217046c
	if (ctx.cr6.eq) goto loc_8217046C;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6648
	ctx.r31.s64 = ctx.r11.s64 + 6648;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821703A4;
	sub_823052D8(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
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
	// bne cr6,0x82170460
	if (!ctx.cr6.eq) goto loc_82170460;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82170460
	if (ctx.cr6.eq) goto loc_82170460;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82170460
	if (!ctx.cr6.lt) goto loc_82170460;
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
	// beq cr6,0x82170438
	if (ctx.cr6.eq) goto loc_82170438;
loc_82170410:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82170430
	if (ctx.cr6.eq) goto loc_82170430;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82170410
	if (!ctx.cr6.eq) goto loc_82170410;
	// b 0x82170438
	goto loc_82170438;
loc_82170430:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82170438:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82170450
	if (!ctx.cr6.eq) goto loc_82170450;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82170450:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217045C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82170460:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8217046C;
	sub_823051A8(ctx, base);
loc_8217046C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170484"))) PPC_WEAK_FUNC(sub_82170484);
PPC_FUNC_IMPL(__imp__sub_82170484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170488"))) PPC_WEAK_FUNC(sub_82170488);
PPC_FUNC_IMPL(__imp__sub_82170488) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6648
	ctx.r31.s64 = ctx.r11.s64 + 6648;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821704B0;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821704d4
	if (ctx.cr6.eq) goto loc_821704D4;
loc_821704BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82170504
	if (!ctx.cr6.eq) goto loc_82170504;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821704bc
	if (!ctx.cr6.eq) goto loc_821704BC;
loc_821704D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217052c
	if (!ctx.cr6.eq) goto loc_8217052C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82170588
	ctx.lr = 0x821704E8;
	sub_82170588(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217052c
	if (!ctx.cr6.eq) goto loc_8217052C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821704FC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82170570
	goto loc_82170570;
loc_82170504:
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
	// b 0x82170560
	goto loc_82170560;
loc_8217052C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,196
	ctx.r10.s64 = ctx.r11.s64 + 196;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
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
loc_82170560:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8217056C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82170570:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170588"))) PPC_WEAK_FUNC(sub_82170588);
PPC_FUNC_IMPL(__imp__sub_82170588) {
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
	// mulli r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 * 208;
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
	ctx.lr = 0x821705B4;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6648
	ctx.r11.s64 = ctx.r11.s64 + 6648;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821705d0
	if (ctx.cr6.eq) goto loc_821705D0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821705d4
	goto loc_821705D4;
loc_821705D0:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821705D4:
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
	// beq cr6,0x82170614
	if (ctx.cr6.eq) goto loc_82170614;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8217060C:
	// stwu r3,208(r10)
	ea = 208 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217060c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217060C;
loc_82170614:
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

__attribute__((alias("__imp__sub_82170634"))) PPC_WEAK_FUNC(sub_82170634);
PPC_FUNC_IMPL(__imp__sub_82170634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170638"))) PPC_WEAK_FUNC(sub_82170638);
PPC_FUNC_IMPL(__imp__sub_82170638) {
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
	// bl 0x8216e940
	ctx.lr = 0x82170658;
	sub_8216E940(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170670
	if (ctx.cr6.eq) goto loc_82170670;
	// bl 0x82170370
	ctx.lr = 0x8217066C;
	sub_82170370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82170670:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170688"))) PPC_WEAK_FUNC(sub_82170688);
PPC_FUNC_IMPL(__imp__sub_82170688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82170690;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821708ac
	if (!ctx.cr6.eq) goto loc_821708AC;
	// lis r11,630
	ctx.r11.s64 = 41287680;
	// mulli r3,r4,104
	ctx.r3.s64 = ctx.r4.s64 * 104;
	// ori r10,r11,10082
	ctx.r10.u64 = ctx.r11.u64 | 10082;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821706c4
	if (!ctx.cr6.gt) goto loc_821706C4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821706C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x821706D4;
	sub_82082030(ctx, base);
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r3,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// beq cr6,0x821708ac
	if (ctx.cr6.eq) goto loc_821708AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// b 0x82170760
	goto loc_82170760;
loc_8217075C:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82170760:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// addi r28,r1,176
	ctx.r28.s64 = ctx.r1.s64 + 176;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lwz r19,88(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// lwz r17,0(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r16,4(r28)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lwz r15,8(r28)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// lwz r27,4(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r26,8(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r23,4(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r22,8(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r21,0(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r20,4(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r18,8(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r14,92(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r14,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r14.u32);
	// addi r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 + 104;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lwz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r24,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r24.u32);
	// stw r23,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r23.u32);
	// stw r22,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r22.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r31.u32);
	// stw r21,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r21.u32);
	// stw r20,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r20.u32);
	// stw r18,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r18.u32);
	// stw r29,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r29.u32);
	// stw r17,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r17.u32);
	// stw r16,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r16.u32);
	// stw r15,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r15.u32);
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// bne 0x8217075c
	if (!ctx.cr0.eq) goto loc_8217075C;
	// lwz r30,388(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
loc_821708AC:
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821708B8"))) PPC_WEAK_FUNC(sub_821708B8);
PPC_FUNC_IMPL(__imp__sub_821708B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821708e4
	if (ctx.cr6.eq) goto loc_821708E4;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
loc_821708E4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82170910
	if (ctx.cr6.eq) goto loc_82170910;
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// addi r10,r3,296
	ctx.r10.s64 = ctx.r3.s64 + 296;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r4,300(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
loc_82170910:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8217093c
	if (ctx.cr6.eq) goto loc_8217093C;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 + 144;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r5,148(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,152(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
loc_8217093C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82170968
	if (ctx.cr6.eq) goto loc_82170968;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// addi r10,r3,248
	ctx.r10.s64 = ctx.r3.s64 + 248;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r6,252(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// lwz r4,260(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
loc_82170968:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82170994
	if (ctx.cr6.eq) goto loc_82170994;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r3,160
	ctx.r10.s64 = ctx.r3.s64 + 160;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r7,164(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,168(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r5,172(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
loc_82170994:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// addi r10,r3,264
	ctx.r10.s64 = ctx.r3.s64 + 264;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r8,268(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,272(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r6,276(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821709C4"))) PPC_WEAK_FUNC(sub_821709C4);
PPC_FUNC_IMPL(__imp__sub_821709C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821709C8"))) PPC_WEAK_FUNC(sub_821709C8);
PPC_FUNC_IMPL(__imp__sub_821709C8) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-28032
	ctx.r9.s64 = ctx.r10.s64 + -28032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82170a08
	if (ctx.cr6.eq) goto loc_82170A08;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82170A08;
	sub_82080000(ctx, base);
loc_82170A08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172be8
	ctx.lr = 0x82170A10;
	sub_82172BE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170a28
	if (ctx.cr6.eq) goto loc_82170A28;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82170A28;
	sub_82080000(ctx, base);
loc_82170A28:
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

__attribute__((alias("__imp__sub_82170A44"))) PPC_WEAK_FUNC(sub_82170A44);
PPC_FUNC_IMPL(__imp__sub_82170A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170A48"))) PPC_WEAK_FUNC(sub_82170A48);
PPC_FUNC_IMPL(__imp__sub_82170A48) {
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
	// lwz r3,580(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170a6c
	if (ctx.cr6.eq) goto loc_82170A6C;
	// bl 0x82172d60
	ctx.lr = 0x82170A6C;
	sub_82172D60(ctx, base);
loc_82170A6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82170A88"))) PPC_WEAK_FUNC(sub_82170A88);
PPC_FUNC_IMPL(__imp__sub_82170A88) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// addi r30,r11,31376
	ctx.r30.s64 = ctx.r11.s64 + 31376;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82170adc
	if (!ctx.cr6.eq) goto loc_82170ADC;
	// li r5,304
	ctx.r5.s64 = 304;
	// bl 0x8208cfb0
	ctx.lr = 0x82170AC8;
	sub_8208CFB0(ctx, base);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f13,436(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// b 0x82170ae4
	goto loc_82170AE4;
loc_82170ADC:
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x8208cfb0
	ctx.lr = 0x82170AE4;
	sub_8208CFB0(ctx, base);
loc_82170AE4:
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x8233e4e0
	ctx.lr = 0x82170AF4;
	sub_8233E4E0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// lfs f12,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// lfs f9,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f6,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r4.u32);
	// stw r7,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r7.u32);
	// stw r6,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r6.u32);
	// stw r5,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r5.u32);
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f2,f1
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// lfs f2,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f7,f4,f3
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f8,f2,f1
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r7.u32);
	// stw r6,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r6.u32);
	// stw r5,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r5.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r4,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r4.u32);
	// lfs f4,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
	// lfs f2,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// lfs f1,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// lfs f13,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 + 220;
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f9,f4,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r8.u32);
	// stw r6,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r6.u32);
	// stw r5,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r5.u32);
	// stw r7,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r7.u32);
	// lfs f8,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f11,f6,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fsubs f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f8,f5
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r4.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r3,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
	// stw r8,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// lfs f9,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// lfs f7,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f6,f8
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsubs f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f13,f5,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r4,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r4.u32);
	// stw r5,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r5.u32);
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// lfs f12,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 + 236;
	// lfs f7,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,284
	ctx.r11.s64 = ctx.r31.s64 + 284;
	// lfs f5,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f11,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfs f10,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// lfs f9,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r7.u32);
	// stw r4,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r6.u32);
	// stw r5,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r5.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r3,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lfs f11,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lfs f9,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r5.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r7.u32);
	// stw r6,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r6.u32);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// lfs f3,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f3,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f6,f2,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f31,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stw r5,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r5.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r6,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r6.u32);
	// stw r7,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r7.u32);
	// stw r8,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r8.u32);
	// lfs f5,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f12,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f9,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// lfs f8,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r4.u32);
	// stw r8,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r8.u32);
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// lfs f6,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f5,f3
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f9,f1,f6
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fsubs f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r5.u32);
	// stw r7,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r7.u32);
	// stw r4,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r4.u32);
	// stw r6,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r6.u32);
	// stfs f4,524(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stfs f7,528(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// stfs f6,532(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f5,536(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// bge cr6,0x82171000
	if (!ctx.cr6.lt) goto loc_82171000;
	// stfs f31,528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
loc_82171000:
	// lfs f0,528(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82171014
	if (!ctx.cr6.lt) goto loc_82171014;
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_82171014:
	// lfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,536(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82171028
	if (!ctx.cr6.lt) goto loc_82171028;
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
loc_82171028:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// beq cr6,0x82171040
	if (ctx.cr6.eq) goto loc_82171040;
	// bl 0x82172d60
	ctx.lr = 0x82171040;
	sub_82172D60(ctx, base);
loc_82171040:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8217106c
	if (ctx.cr6.eq) goto loc_8217106C;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8217106c
	if (ctx.cr6.eq) goto loc_8217106C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// bl 0x82176780
	ctx.lr = 0x82171064;
	sub_82176780(ctx, base);
	// stw r3,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r3.u32);
	// b 0x82171074
	goto loc_82171074;
loc_8217106C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
loc_82171074:
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lfs f13,416(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f12,432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,556(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// lfs f11,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f9,428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// stfs f11,560(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f10,564(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// stfs f9,568(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// stfs f13,544(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// bge cr6,0x821710d0
	if (!ctx.cr6.lt) goto loc_821710D0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x821710dc
	goto loc_821710DC;
loc_821710D0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x821710dc
	if (ctx.cr6.gt) goto loc_821710DC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_821710DC:
	// lfs f12,524(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r9,552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r6,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blt cr6,0x82171120
	if (ctx.cr6.lt) goto loc_82171120;
	// li r11,1024
	ctx.r11.s64 = 1024;
loc_82171120:
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,20000
	ctx.r10.s64 = ctx.r10.s64 + 20000;
	// addi r3,r10,10704
	ctx.r3.s64 = ctx.r10.s64 + 10704;
	// bl 0x82141918
	ctx.lr = 0x8217113C;
	sub_82141918(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
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

__attribute__((alias("__imp__sub_82171158"))) PPC_WEAK_FUNC(sub_82171158);
PPC_FUNC_IMPL(__imp__sub_82171158) {
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
	// beq cr6,0x82171254
	if (ctx.cr6.eq) goto loc_82171254;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6724
	ctx.r31.s64 = ctx.r11.s64 + 6724;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8217118C;
	sub_823052D8(ctx, base);
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
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
	// bne cr6,0x82171248
	if (!ctx.cr6.eq) goto loc_82171248;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82171248
	if (ctx.cr6.eq) goto loc_82171248;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82171248
	if (!ctx.cr6.lt) goto loc_82171248;
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
	// beq cr6,0x82171220
	if (ctx.cr6.eq) goto loc_82171220;
loc_821711F8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82171218
	if (ctx.cr6.eq) goto loc_82171218;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821711f8
	if (!ctx.cr6.eq) goto loc_821711F8;
	// b 0x82171220
	goto loc_82171220;
loc_82171218:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82171220:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82171238
	if (!ctx.cr6.eq) goto loc_82171238;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82171238:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82171244;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82171248:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82171254;
	sub_823051A8(ctx, base);
loc_82171254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217126C"))) PPC_WEAK_FUNC(sub_8217126C);
PPC_FUNC_IMPL(__imp__sub_8217126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171270"))) PPC_WEAK_FUNC(sub_82171270);
PPC_FUNC_IMPL(__imp__sub_82171270) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6724
	ctx.r31.s64 = ctx.r11.s64 + 6724;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82171298;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821712bc
	if (ctx.cr6.eq) goto loc_821712BC;
loc_821712A4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821712ec
	if (!ctx.cr6.eq) goto loc_821712EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821712a4
	if (!ctx.cr6.eq) goto loc_821712A4;
loc_821712BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82171314
	if (!ctx.cr6.eq) goto loc_82171314;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82171370
	ctx.lr = 0x821712D0;
	sub_82171370(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82171314
	if (!ctx.cr6.eq) goto loc_82171314;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821712E4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82171358
	goto loc_82171358;
loc_821712EC:
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
	// b 0x82171348
	goto loc_82171348;
loc_82171314:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,584
	ctx.r10.s64 = ctx.r11.s64 + 584;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,584(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
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
loc_82171348:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82171354;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82171358:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82171370"))) PPC_WEAK_FUNC(sub_82171370);
PPC_FUNC_IMPL(__imp__sub_82171370) {
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
	ctx.lr = 0x8217139C;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6724
	ctx.r11.s64 = ctx.r11.s64 + 6724;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821713b8
	if (ctx.cr6.eq) goto loc_821713B8;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x821713bc
	goto loc_821713BC;
loc_821713B8:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821713BC:
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
	// beq cr6,0x821713fc
	if (ctx.cr6.eq) goto loc_821713FC;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821713F4:
	// stwu r3,592(r10)
	ea = 592 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821713f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821713F4;
loc_821713FC:
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

__attribute__((alias("__imp__sub_8217141C"))) PPC_WEAK_FUNC(sub_8217141C);
PPC_FUNC_IMPL(__imp__sub_8217141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171420"))) PPC_WEAK_FUNC(sub_82171420);
PPC_FUNC_IMPL(__imp__sub_82171420) {
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
	// addi r10,r11,-27992
	ctx.r10.s64 = ctx.r11.s64 + -27992;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x8217144C;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82171464
	if (ctx.cr6.eq) goto loc_82171464;
	// bl 0x82171158
	ctx.lr = 0x82171460;
	sub_82171158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217147C"))) PPC_WEAK_FUNC(sub_8217147C);
PPC_FUNC_IMPL(__imp__sub_8217147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171480"))) PPC_WEAK_FUNC(sub_82171480);
PPC_FUNC_IMPL(__imp__sub_82171480) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x820de9b8
	ctx.lr = 0x8217149C;
	sub_820DE9B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821714B8"))) PPC_WEAK_FUNC(sub_821714B8);
PPC_FUNC_IMPL(__imp__sub_821714B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x82161240
	ctx.lr = 0x821714FC;
	sub_82161240(ctx, base);
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820dec30
	ctx.lr = 0x82171510;
	sub_820DEC30(ctx, base);
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

__attribute__((alias("__imp__sub_82171528"))) PPC_WEAK_FUNC(sub_82171528);
PPC_FUNC_IMPL(__imp__sub_82171528) {
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
	// beq cr6,0x82171624
	if (ctx.cr6.eq) goto loc_82171624;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6780
	ctx.r31.s64 = ctx.r11.s64 + 6780;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8217155C;
	sub_823052D8(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
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
	// bne cr6,0x82171618
	if (!ctx.cr6.eq) goto loc_82171618;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82171618
	if (ctx.cr6.eq) goto loc_82171618;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82171618
	if (!ctx.cr6.lt) goto loc_82171618;
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
	// beq cr6,0x821715f0
	if (ctx.cr6.eq) goto loc_821715F0;
loc_821715C8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821715e8
	if (ctx.cr6.eq) goto loc_821715E8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821715c8
	if (!ctx.cr6.eq) goto loc_821715C8;
	// b 0x821715f0
	goto loc_821715F0;
loc_821715E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821715F0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82171608
	if (!ctx.cr6.eq) goto loc_82171608;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82171608:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82171614;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82171618:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82171624;
	sub_823051A8(ctx, base);
loc_82171624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217163C"))) PPC_WEAK_FUNC(sub_8217163C);
PPC_FUNC_IMPL(__imp__sub_8217163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171640"))) PPC_WEAK_FUNC(sub_82171640);
PPC_FUNC_IMPL(__imp__sub_82171640) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6780
	ctx.r31.s64 = ctx.r11.s64 + 6780;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82171668;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217168c
	if (ctx.cr6.eq) goto loc_8217168C;
loc_82171674:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821716bc
	if (!ctx.cr6.eq) goto loc_821716BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82171674
	if (!ctx.cr6.eq) goto loc_82171674;
loc_8217168C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821716e4
	if (!ctx.cr6.eq) goto loc_821716E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82171740
	ctx.lr = 0x821716A0;
	sub_82171740(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821716e4
	if (!ctx.cr6.eq) goto loc_821716E4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821716B4;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82171728
	goto loc_82171728;
loc_821716BC:
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
	// b 0x82171718
	goto loc_82171718;
loc_821716E4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
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
loc_82171718:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82171724;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82171728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82171740"))) PPC_WEAK_FUNC(sub_82171740);
PPC_FUNC_IMPL(__imp__sub_82171740) {
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
	ctx.lr = 0x82171774;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6780
	ctx.r11.s64 = ctx.r11.s64 + 6780;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82171790
	if (ctx.cr6.eq) goto loc_82171790;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x82171794
	goto loc_82171794;
loc_82171790:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82171794:
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
	// beq cr6,0x821717d4
	if (ctx.cr6.eq) goto loc_821717D4;
	// addi r10,r9,-20
	ctx.r10.s64 = ctx.r9.s64 + -20;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821717CC:
	// stwu r3,96(r10)
	ea = 96 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821717cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821717CC;
loc_821717D4:
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

__attribute__((alias("__imp__sub_821717F4"))) PPC_WEAK_FUNC(sub_821717F4);
PPC_FUNC_IMPL(__imp__sub_821717F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821717F8"))) PPC_WEAK_FUNC(sub_821717F8);
PPC_FUNC_IMPL(__imp__sub_821717F8) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-27952
	ctx.r10.s64 = ctx.r11.s64 + -27952;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820de9b8
	ctx.lr = 0x82171828;
	sub_820DE9B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172be8
	ctx.lr = 0x82171830;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82171848
	if (ctx.cr6.eq) goto loc_82171848;
	// bl 0x82171528
	ctx.lr = 0x82171844;
	sub_82171528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171848:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82171860"))) PPC_WEAK_FUNC(sub_82171860);
PPC_FUNC_IMPL(__imp__sub_82171860) {
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
	// lwz r3,304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171888
	if (ctx.cr6.eq) goto loc_82171888;
	// bl 0x82172d60
	ctx.lr = 0x82171888;
	sub_82172D60(ctx, base);
loc_82171888:
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821718a0
	if (ctx.cr6.eq) goto loc_821718A0;
	// bl 0x82172d60
	ctx.lr = 0x821718A0;
	sub_82172D60(ctx, base);
loc_821718A0:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821718b4
	if (ctx.cr6.eq) goto loc_821718B4;
	// bl 0x82172d60
	ctx.lr = 0x821718B4;
	sub_82172D60(ctx, base);
loc_821718B4:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821718d0
	if (ctx.cr6.eq) goto loc_821718D0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821718D0;
	sub_82080000(ctx, base);
loc_821718D0:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821718ec
	if (ctx.cr6.eq) goto loc_821718EC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821718EC;
	sub_82080000(ctx, base);
loc_821718EC:
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82171908"))) PPC_WEAK_FUNC(sub_82171908);
PPC_FUNC_IMPL(__imp__sub_82171908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82171910;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f31,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x82171950
	if (!ctx.cr6.lt) goto loc_82171950;
	// li r5,248
	ctx.r5.s64 = 248;
	// bl 0x8208cfb0
	ctx.lr = 0x82171948;
	sub_8208CFB0(ctx, base);
	// stfs f31,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// b 0x82171958
	goto loc_82171958;
loc_82171950:
	// li r5,252
	ctx.r5.s64 = 252;
	// bl 0x8208cfb0
	ctx.lr = 0x82171958;
	sub_8208CFB0(ctx, base);
loc_82171958:
	// lfs f0,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f1,332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233c950
	ctx.lr = 0x82171968;
	sub_8233C950(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lfs f1,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233c950
	ctx.lr = 0x82171978;
	sub_8233C950(ctx, base);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,296(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171990
	if (ctx.cr6.eq) goto loc_82171990;
	// bl 0x82172d60
	ctx.lr = 0x82171990;
	sub_82172D60(ctx, base);
loc_82171990:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r30,r11,-7224
	ctx.r30.s64 = ctx.r11.s64 + -7224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82176780
	ctx.lr = 0x821719A8;
	sub_82176780(ctx, base);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821719c4
	if (ctx.cr6.eq) goto loc_821719C4;
	// bl 0x82172d60
	ctx.lr = 0x821719C0;
	sub_82172D60(ctx, base);
	// stw r28,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r28.u32);
loc_821719C4:
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821719e0
	if (ctx.cr6.eq) goto loc_821719E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82176780
	ctx.lr = 0x821719DC;
	sub_82176780(ctx, base);
	// stw r3,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
loc_821719E0:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821719f4
	if (ctx.cr6.eq) goto loc_821719F4;
	// bl 0x82172d60
	ctx.lr = 0x821719F0;
	sub_82172D60(ctx, base);
	// stw r28,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r28.u32);
loc_821719F4:
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82171a10
	if (ctx.cr6.eq) goto loc_82171A10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82176780
	ctx.lr = 0x82171A0C;
	sub_82176780(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
loc_82171A10:
	// addi r11,r1,312
	ctx.r11.s64 = ctx.r1.s64 + 312;
	// ld r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// lfs f12,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f11,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// std r10,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r10.u64);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// bne cr6,0x82171aac
	if (!ctx.cr6.eq) goto loc_82171AAC;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// b 0x82171b8c
	goto loc_82171B8C;
loc_82171AAC:
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82171b04
	if (!ctx.cr6.eq) goto loc_82171B04;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// stw r6,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// b 0x82171b8c
	goto loc_82171B8C;
loc_82171B04:
	// lfs f0,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f8,f13,f31,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f10.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lfs f6,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmsubs f1,f5,f0,f3
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f5,f12
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// fmsubs f11,f13,f6,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmsubs f12,f4,f12,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f2.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
loc_82171B8C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stfs f12,144(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f11,148(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// beq cr6,0x82171bd4
	if (ctx.cr6.eq) goto loc_82171BD4;
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82171bd4
	if (ctx.cr6.eq) goto loc_82171BD4;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82171BD4:
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lwz r27,352(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// lhz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 256);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lbz r8,258(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 258);
	// ld r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 148);
	// lfs f0,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f10,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// lwz r24,4(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f9,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// lwz r23,8(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f8,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lwz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f7,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f7.f64 = double(temp.f32);
	// lwz r21,4(r7)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f6,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f6.f64 = double(temp.f32);
	// lwz r20,8(r7)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f5,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f5.f64 = double(temp.f32);
	// lwz r19,0(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f4,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f4.f64 = double(temp.f32);
	// lwz r18,4(r5)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f3,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f3.f64 = double(temp.f32);
	// lwz r17,8(r5)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// ld r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 156);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// ld r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 164);
	// stfs f12,156(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f11,160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stfs f10,272(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stfs f9,276(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stfs f8,280(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// ld r16,172(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 172);
	// stfs f7,284(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lwz r15,340(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stfs f6,264(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lwz r14,348(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stfs f5,316(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stfs f4,324(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lwz r27,356(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stfs f3,320(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stw r8,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// stw r26,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r26.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r25,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r25.u32);
	// stw r24,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r24.u32);
	// stw r23,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r23.u32);
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// stw r22,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r22.u32);
	// stw r21,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r21.u32);
	// stw r20,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r20.u32);
	// stw r7,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
	// stw r19,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r19.u32);
	// stw r18,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r18.u32);
	// stw r17,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r17.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// std r6,164(r31)
	PPC_STORE_U64(ctx.r31.u32 + 164, ctx.r6.u64);
	// std r4,172(r31)
	PPC_STORE_U64(ctx.r31.u32 + 172, ctx.r4.u64);
	// std r3,180(r31)
	PPC_STORE_U64(ctx.r31.u32 + 180, ctx.r3.u64);
	// std r16,188(r31)
	PPC_STORE_U64(ctx.r31.u32 + 188, ctx.r16.u64);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r15,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r15.u32);
	// stw r14,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r14.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// ld r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// stw r4,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r4.u32);
	// beq cr6,0x82171eb8
	if (ctx.cr6.eq) goto loc_82171EB8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208d070
	ctx.lr = 0x82171D38;
	sub_8208D070(ctx, base);
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r9,r10,29127
	ctx.r9.u64 = ctx.r10.u64 | 29127;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82171d64
	if (ctx.cr6.gt) goto loc_82171D64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82171d68
	goto loc_82171D68;
loc_82171D64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82171D68:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82171d8c
	if (ctx.cr6.eq) goto loc_82171D8C;
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82171D8C:
	// bl 0x82082030
	ctx.lr = 0x82171D90;
	sub_82082030(ctx, base);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82171dc4
	if (!ctx.cr6.gt) goto loc_82171DC4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82171DA8:
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82171da8
	if (ctx.cr6.lt) goto loc_82171DA8;
loc_82171DC4:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8208cfb0
	ctx.lr = 0x82171DDC;
	sub_8208CFB0(ctx, base);
	// addic. r6,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r6.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82171e4c
	if (ctx.cr0.eq) goto loc_82171E4C;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82171DF4:
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwzx r11,r5,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82171e3c
	if (ctx.cr6.eq) goto loc_82171E3C;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,9
	ctx.r8.s64 = 9;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82171E28:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82171e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171E28;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// stwx r29,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r29.u32);
loc_82171E3C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r5,r5,-36
	ctx.r5.s64 = ctx.r5.s64 + -36;
	// bne 0x82171df4
	if (!ctx.cr0.eq) goto loc_82171DF4;
loc_82171E4C:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,344(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82171eb8
	if (!ctx.cr6.gt) goto loc_82171EB8;
	// li r8,36
	ctx.r8.s64 = 36;
loc_82171E64:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82171e80
	if (ctx.cr6.eq) goto loc_82171E80;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82171ea4
	goto loc_82171EA4;
loc_82171E80:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82171E90:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82171e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171E90;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// stwx r7,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
loc_82171EA4:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82171e64
	if (ctx.cr6.lt) goto loc_82171E64;
loc_82171EB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217b7d8
	ctx.lr = 0x82171EC0;
	sub_8217B7D8(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82171ECC"))) PPC_WEAK_FUNC(sub_82171ECC);
PPC_FUNC_IMPL(__imp__sub_82171ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171ED0"))) PPC_WEAK_FUNC(sub_82171ED0);
PPC_FUNC_IMPL(__imp__sub_82171ED0) {
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
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82171f08
	if (!ctx.cr6.eq) goto loc_82171F08;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82082030
	ctx.lr = 0x82171F04;
	sub_82082030(ctx, base);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
loc_82171F08:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r31,156
	ctx.r10.s64 = ctx.r31.s64 + 156;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lfs f12,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82171F34:
	// lfs f11,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfsu f11,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfsu f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82171f34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171F34;
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lfs f6,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82171F78:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82171fd4
	if (ctx.cr6.gt) goto loc_82171FD4;
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// addi r7,r11,37
	ctx.r7.s64 = ctx.r11.s64 + 37;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
loc_82171FA4:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f11,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// ble cr6,0x82171fa4
	if (!ctx.cr6.gt) goto loc_82171FA4;
loc_82171FD4:
	// fneg f5,f13
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdivs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f7.f64));
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmadds f5,f4,f9,f2
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f2.f64));
	// stfs f5,4(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmadds f4,f4,f8,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfsu f4,8(r6)
	temp.f32 = float(ctx.f4.f64);
	ea = 8 + ctx.r6.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x82171f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171F78;
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

__attribute__((alias("__imp__sub_82172010"))) PPC_WEAK_FUNC(sub_82172010);
PPC_FUNC_IMPL(__imp__sub_82172010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82172018;
	__savegprlr_17(ctx, base);
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// addi r7,r3,152
	ctx.r7.s64 = ctx.r3.s64 + 152;
	// lfs f12,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// stfs f12,160(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// addi r9,r3,164
	ctx.r9.s64 = ctx.r3.s64 + 164;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lfs f0,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// addi r31,r3,548
	ctx.r31.s64 = ctx.r3.s64 + 548;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// addi r25,r3,516
	ctx.r25.s64 = ctx.r3.s64 + 516;
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// addi r6,r3,436
	ctx.r6.s64 = ctx.r3.s64 + 436;
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stw r8,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
	// addi r24,r3,580
	ctx.r24.s64 = ctx.r3.s64 + 580;
	// lwz r5,84(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// addi r21,r3,500
	ctx.r21.s64 = ctx.r3.s64 + 500;
	// stw r5,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r5.u32);
	// addi r23,r3,532
	ctx.r23.s64 = ctx.r3.s64 + 532;
	// lwz r4,88(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// addi r22,r3,372
	ctx.r22.s64 = ctx.r3.s64 + 372;
	// stw r4,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
	// addi r20,r3,564
	ctx.r20.s64 = ctx.r3.s64 + 564;
	// lwz r11,92(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 92);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lfs f11,144(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,272(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// lwz r10,56(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 56);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// lwz r8,60(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// lwz r5,96(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 96);
	// stw r5,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r5.u32);
	// lwz r4,100(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 100);
	// stw r4,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// lwz r11,104(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 104);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// lwz r10,108(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 108);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// lfs f10,148(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,276(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// lwz r8,64(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 64);
	// stw r8,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r8.u32);
	// lwz r5,68(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 68);
	// stw r5,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r5.u32);
	// lwz r4,112(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 112);
	// stw r4,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r4.u32);
	// lwz r11,116(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// lwz r10,120(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 120);
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// lwz r8,124(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	// stw r8,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r8.u32);
	// lfs f9,152(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,280(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// lwz r5,72(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 72);
	// stw r5,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r5.u32);
	// lwz r4,76(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 76);
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// lwz r11,128(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 128);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// lwz r10,132(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 132);
	// stw r10,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// lwz r8,136(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 136);
	// stw r8,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r8.u32);
	// lwz r5,140(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// stw r5,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r5.u32);
	// lfs f8,156(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,284(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// lwz r4,8(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// lfs f7,12(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,136(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfs f6,16(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f6,140(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lfs f5,20(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// stfs f5,144(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// addi r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 + 200;
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// subf r27,r31,r25
	ctx.r27.s64 = ctx.r25.s64 - ctx.r31.s64;
	// lfs f11,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// subf r26,r31,r24
	ctx.r26.s64 = ctx.r24.s64 - ctx.r31.s64;
	// lfs f1,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// li r28,3
	ctx.r28.s64 = 3;
	// lfs f4,24(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,148(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f3,28(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,264(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// lfs f2,32(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,268(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f11,360(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// stfs f12,364(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// lfs f11,388(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,356(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// stfs f1,368(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
loc_821721CC:
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x821721fc
	if (ctx.cr6.gt) goto loc_821721FC;
	// stfsx f0,r27,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfsx f0,r26,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r8.u32, temp.u32);
	// b 0x821722b8
	goto loc_821722B8;
loc_821721FC:
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// addi r29,r1,-144
	ctx.r29.s64 = ctx.r1.s64 + -144;
	// addi r19,r10,-8
	ctx.r19.s64 = ctx.r10.s64 + -8;
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfsx f5,r27,r8
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, temp.u32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmuls f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f1,0(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmuls f3,f2,f7
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfs f3,-136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// fmuls f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f5,-132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f4,-140(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmuls f2,f6,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// stfs f2,-144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lwz r19,4(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r18,8(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r17,12(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r29.u32);
	// stw r19,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r19.u32);
	// stw r18,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// stw r17,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r17.u32);
	// lfs f1,120(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,124(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfsx f9,r26,r8
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r8.u32, temp.u32);
loc_821722B8:
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x821721cc
	if (!ctx.cr0.eq) goto loc_821721CC;
	// stfs f0,12(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stfs f0,60(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 60, temp.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// stfs f0,56(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// addi r11,r3,220
	ctx.r11.s64 = ctx.r3.s64 + 220;
	// stfs f0,52(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// subf r5,r23,r20
	ctx.r5.s64 = ctx.r20.s64 - ctx.r23.s64;
	// stfs f0,48(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// subf r6,r23,r21
	ctx.r6.s64 = ctx.r21.s64 - ctx.r23.s64;
	// stfs f0,12(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
loc_82172310:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82172360
	if (ctx.cr6.gt) goto loc_82172360;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
	// stfsx f0,r8,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r31,-24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r31,-20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r31,-16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// lwz r31,-12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// lfs f12,120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r8,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// b 0x82172424
	goto loc_82172424;
loc_82172360:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fnmsubs f7,f8,f10,f12
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f10.f64 - ctx.f12.f64)));
	// stfsx f7,r8,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fnmsubs f3,f4,f10,f6
	ctx.f3.f64 = double(float(-(ctx.f4.f64 * ctx.f10.f64 - ctx.f6.f64)));
	// stfs f3,0(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f13,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lfs f0,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fmuls f8,f2,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fsubs f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fsubs f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f1,-140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmuls f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fsubs f5,f3,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// stfs f5,-144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fsubs f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f6,-136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// fsubs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f7,-132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lfs f3,124(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fnmsubs f1,f2,f10,f4
	ctx.f1.f64 = double(float(-(ctx.f2.f64 * ctx.f10.f64 - ctx.f4.f64)));
	// stfsx f1,r8,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
loc_82172424:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82172310
	if (!ctx.cr0.eq) goto loc_82172310;
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r22,48
	ctx.r11.s64 = ctx.r22.s64 + 48;
	// stfs f0,12(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// lfs f13,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 12, temp.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,48(r22)
	PPC_STORE_U32(ctx.r22.u32 + 48, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,52(r22)
	PPC_STORE_U32(ctx.r22.u32 + 52, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,56(r22)
	PPC_STORE_U32(ctx.r22.u32 + 56, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,60(r22)
	PPC_STORE_U32(ctx.r22.u32 + 60, ctx.r7.u32);
	// lfs f12,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r20)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82172484"))) PPC_WEAK_FUNC(sub_82172484);
PPC_FUNC_IMPL(__imp__sub_82172484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

